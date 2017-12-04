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
typedef void (*$fn3254)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3255)(panda$collections$IdentityMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn3259)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3262)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3288)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3302)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3311)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3313)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3314)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3315)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3319)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3320)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn3321)(panda$collections$IdentityMap*, panda$core$Object*);
typedef panda$core$Object* (*$fn3322)(panda$collections$Stack*);
typedef panda$core$String* (*$fn3327)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3333)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3338)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3344)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3350)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3356)(panda$collections$Iterator*);
typedef void (*$fn3368)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3370)(panda$io$OutputStream*);
typedef panda$core$String* (*$fn3374)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn3376)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3384)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3387)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3398)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3404)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3407)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3418)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3420)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Object* (*$fn3423)(panda$collections$IdentityMap*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3427)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3429)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn3449)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn3452)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn3454)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3457)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3459)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn3461)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3463)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn3467)(panda$collections$ImmutableArray*);
typedef panda$core$String* (*$fn3493)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3499)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn3502)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn3506)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3508)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3514)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3516)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3520)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3541)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$MethodDecl*, panda$core$Bit, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn3545)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3548)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn3553)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3554)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3560)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn3568)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3573)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3587)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3595)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3600)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3606)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3612)(panda$collections$Iterator*);
typedef void (*$fn3621)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3624)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3625)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3638)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3639)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn3642)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3645)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3647)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3650)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3655)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3661)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3669)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3671)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3674)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3686)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3687)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3689)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3691)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3694)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3696)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef void (*$fn3702)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3703)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3705)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3711)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3727)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3729)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn3735)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn3737)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3742)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3744)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn3746)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn3749)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn3751)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3754)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3766)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3768)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3785)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn3787)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3801)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3803)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3820)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3825)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3827)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3844)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3846)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3854)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3862)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3863)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3867)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3879)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3884)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3887)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn3889)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$String* (*$fn3891)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3895)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn3897)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn3901)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$collections$ListView* (*$fn3904)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn3910)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3932)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn3946)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3953)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3966)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3972)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3978)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3990)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3992)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3997)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4003)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4011)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4013)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4016)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4028)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4029)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn4031)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4033)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn4036)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4038)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef void (*$fn4044)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4045)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4047)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4053)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn4059)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4061)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4078)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4080)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4083)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4086)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4089)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4095)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4106)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4108)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4123)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4125)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4140)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4142)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4145)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4155)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4160)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4169)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4171)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4177)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4185)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4187)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn4190)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn4193)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4202)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4205)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4208)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn4211)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4215)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn4218)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn4222)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4225)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn4229)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4235)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn4237)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn4240)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn4244)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4250)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn4252)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn4255)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4259)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4262)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4266)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4284)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4287)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4290)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4293)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4296)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4298)(org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4303)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4313)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4326)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4336)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4338)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn4343)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4353)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4366)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4376)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4377)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4392)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4401)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4403)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4418)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4420)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$Int64 (*$fn4426)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4431)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4433)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4442)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4447)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4449)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$Object* (*$fn4453)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4455)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4457)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4474)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn4476)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4490)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4499)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4507)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef panda$core$String* (*$fn4510)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4513)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4525)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef void (*$fn4530)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4542)(panda$collections$CollectionView*);
typedef void (*$fn4554)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4561)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4567)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4573)(panda$collections$Iterator*);
typedef void (*$fn4583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4586)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4595)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn4598)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn4628)(panda$collections$CollectionView*);
typedef void (*$fn4634)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4635)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn4638)(panda$collections$Stack*);
typedef panda$core$String* (*$fn4642)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn4648)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4650)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4655)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4658)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4661)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4665)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4668)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4674)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4683)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4684)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4693)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4694)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4703)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4705)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4714)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4717)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4721)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4724)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4729)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4738)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4739)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4748)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4750)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4759)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn4761)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4763)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4765)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4768)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4770)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4778)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4781)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4790)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4798)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4808)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4816)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4819)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4822)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4825)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4828)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4831)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4834)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4837)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4840)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4843)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4846)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4849)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4852)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4857)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn4859)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn4862)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$core$String* (*$fn4865)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4868)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4871)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4874)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4877)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4882)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$collections$Iterator* (*$fn4891)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4897)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4903)(panda$collections$Iterator*);
typedef void (*$fn4905)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4913)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4917)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn4919)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn4928)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4933)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn4935)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4939)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4943)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4946)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4955)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4958)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn4960)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4963)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4969)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4986)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4991)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4999)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5004)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5007)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5016)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5021)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5025)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn5026)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn5040)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn5043)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn5045)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn5048)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5050)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn5052)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn5054)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn5061)(panda$collections$ImmutableArray*);
typedef panda$core$String* (*$fn5087)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn5093)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn5096)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn5100)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5102)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn5108)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5110)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5114)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5135)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$MethodDecl*, panda$core$Bit, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn5139)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn5146)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5155)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5157)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn5173)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn5176)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn5178)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5180)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn5185)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5195)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5199)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5205)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5211)(panda$collections$Iterator*);
typedef void (*$fn5213)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5217)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5220)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5223)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5232)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5234)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5237)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5250)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn5252)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5256)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$Bit (*$fn5259)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5269)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn5271)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn5273)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5280)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5281)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5286)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn5292)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5295)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn5299)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5301)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn5304)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn5307)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn5311)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn5313)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5316)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef void (*$fn5325)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5327)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5336)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5338)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5345)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5354)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5360)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5362)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5368)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5374)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5386)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5388)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5403)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5405)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5422)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5436)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5438)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5447)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5449)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5456)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5465)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5471)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5473)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5479)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5484)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5497)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5499)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5514)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5516)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5525)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5529)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5541)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5543)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5552)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5554)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5557)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5560)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5563)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5567)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$String* (*$fn5569)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5572)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5582)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5594)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5606)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5607)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5609)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5612)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5626)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5627)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5629)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5649)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5660)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5661)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5663)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5683)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5694)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5695)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5697)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5700)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5714)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5715)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5717)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5737)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5748)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5749)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5751)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5771)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5782)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5783)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5785)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5800)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5801)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn5802)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5809)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5810)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5812)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5815)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5818)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5830)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5831)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5833)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5848)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5850)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5853)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5863)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5864)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5866)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5881)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5892)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5893)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5895)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5910)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5921)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5922)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5924)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5939)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5941)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5953)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5955)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5958)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5968)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5969)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5971)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5984)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5995)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5996)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5998)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6022)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6023)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6025)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6040)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6042)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6054)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6062)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6076)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6081)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6082)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn6083)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6085)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6088)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6091)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6095)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn6100)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6101)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6104)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6107)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6116)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6127)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6128)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6130)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn6132)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn6139)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6140)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn6141)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6143)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6146)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6149)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6153)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn6158)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6159)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6162)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6165)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6174)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6185)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6186)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6188)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn6190)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn6197)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6198)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn6199)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6201)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6204)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6208)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn6213)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6214)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6216)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn6218)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn6225)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6226)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn6227)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6232)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef panda$core$String* (*$fn6237)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6242)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6244)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6250)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6255)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef void (*$fn6260)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6265)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6271)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6277)(panda$collections$Iterator*);
typedef void (*$fn6283)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6285)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$IRNode* (*$fn6288)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn6290)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6293)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef panda$core$String* (*$fn6298)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6301)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn6305)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn6308)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn6314)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn6336)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn6353)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn6355)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn6361)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn6363)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6375)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6379)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6382)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6388)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6394)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6403)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6404)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$String* (*$fn6408)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6414)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6422)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6428)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6444)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn6447)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn6451)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6455)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Position* (*$fn6463)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef void (*$fn6468)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6471)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6476)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn6477)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn6481)(panda$collections$Stack*);
typedef void (*$fn6486)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6488)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn6489)(panda$collections$Stack*);
typedef panda$core$Int64 (*$fn6492)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn6513)(panda$collections$Stack*, panda$core$Int64);
typedef panda$core$Object* (*$fn6516)(panda$collections$Stack*, panda$core$Int64);
typedef panda$core$Object* (*$fn6520)(panda$collections$Stack*, panda$core$Int64);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* (*$fn6534)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn6540)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* (*$fn6542)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn6548)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6552)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6555)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6558)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6570)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6571)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Position* (*$fn6573)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$String* (*$fn6582)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6593)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6596)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn6599)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn6603)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6609)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6615)(panda$collections$Iterator*);
typedef void (*$fn6619)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6620)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6624)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6626)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6634)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6639)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6641)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6644)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6647)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6649)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6651)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6653)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6655)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6657)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6659)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6661)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6675)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6677)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6679)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6681)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6683)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Type* (*$fn6685)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn6687)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6699)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn6701)(panda$collections$Set*, panda$collections$Key*);
typedef void (*$fn6703)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$String* (*$fn6705)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6710)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6712)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6715)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6716)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6718)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6720)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6725)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6729)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6734)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6736)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$String* (*$fn6743)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6748)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6753)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6759)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6765)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn6771)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6776)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn6781)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6786)(panda$io$MemoryOutputStream*);
typedef panda$core$String* (*$fn6788)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn6793)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6798)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6803)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6806)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$String* (*$fn6810)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6815)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6820)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6826)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6832)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn6838)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6843)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn6848)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6851)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6862)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6868)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6874)(panda$collections$Iterator*);
typedef void (*$fn6876)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6877)(panda$io$MemoryOutputStream*);
typedef void (*$fn6879)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6880)(panda$io$MemoryOutputStream*);
typedef void (*$fn6882)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6883)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn6887)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn6890)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6892)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6895)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn6896)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn6898)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn6899)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class_type org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class_type org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class_type org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class_type org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class_type org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$class_type org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x64\x61\x74\x61\x6C\x61\x79\x6F\x75\x74\x20\x3D\x20\x22\x65\x2D\x70\x3A\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x69\x31\x3A\x38\x3A\x38\x2D\x69\x38\x3A\x38\x3A\x38\x2D\x69\x31\x36\x3A\x31\x36\x3A\x31\x36\x2D\x69\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x69\x36\x34\x3A", 72 };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34\x3A\x36\x34\x2D\x66\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x66\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x31\x32\x38\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D\x61\x30\x3A\x30\x3A\x36\x34\x2D\x73\x30\x3A\x36\x34\x3A\x36\x34\x2D\x66\x38\x30\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D", 78 };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x38\x3A\x31\x36\x3A\x33\x32\x3A\x36\x34\x2D\x53\x31\x32\x38\x22", 17 };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6C\x65\x20\x3D\x20\x22\x78\x38\x36\x5F\x36\x34\x2D\x61\x70\x70\x6C\x65\x2D\x6D\x61\x63\x6F\x73\x78\x31\x30\x2E\x38\x2E\x30\x22", 43 };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x29", 24 };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x2C\x20\x69\x36\x34\x29", 30 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x29", 23 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 60 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1 };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1 };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2 };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2 };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20 };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20 };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 10 };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D", 42 };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2 };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 18 };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2 };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 19 };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x31\x20\x7D", 6 };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4 };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69", 1 };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x31", 2 };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20 };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2 };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2 };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8 };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8 };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2 };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9 };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14 };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1 };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2 };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1 };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14 };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9 };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12 };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3 };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8 };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3 };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3 };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8 };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8 };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12 };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8 };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4 };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18 };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14 };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5 };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7 };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6 };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3 };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3 };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2 };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2 };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4 };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5 };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6 };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4 };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1 };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12 };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9 };
static panda$core$String $s1034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20\x63\x63\x63\x20", 11 };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12 };
static panda$core$String $s1073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2 };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3 };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16 };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35 };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4 };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5 };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4 };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1 };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14 };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1 };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9 };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1 };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14 };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9 };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12 };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3 };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8 };
static panda$core$String $s1334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s1343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3 };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3 };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8 };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8 };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12 };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8 };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4 };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18 };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14 };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6 };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2 };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1 };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6 };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17 };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19 };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1 };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6 };
static panda$core$String $s1550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22 };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33 };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1 };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9 };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8 };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23 };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4 };
static panda$core$String $s1588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12 };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3 };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27 };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21 };
static panda$core$String $s1604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s1606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23 };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3 };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9 };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8 };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12 };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8 };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4 };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1 };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13 };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17 };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19 };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1 };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13 };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22 };
static panda$core$String $s1705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33 };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1 };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9 };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8 };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23 };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12 };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3 };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27 };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21 };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4 };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3 };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9 };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12 };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8 };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3 };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1 };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1 };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2 };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1 };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3 };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1 };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3 };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C", 1 };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2 };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4 };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10 };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1 };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1 };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1 };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4 };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1 };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4 };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4 };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1 };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4 };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2 };
static panda$core$String $s1964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7 };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4 };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1 };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4 };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2 };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4 };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4 };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6 };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1 };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3 };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2 };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4 };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1 };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3 };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1 };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3 };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2 };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3 };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2 };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3 };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1 };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3 };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2 };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4 };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1 };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4 };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2 };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5 };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1 };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4 };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2 };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5 };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1 };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4 };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2 };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5 };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2 };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4 };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2 };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4 };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1 };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3 };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1 };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1 };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32 };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32 };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15 };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4 };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3 };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1 };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32 };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32 };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15 };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4 };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3 };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1 };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3 };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3 };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3 };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4 };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4 };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3 };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4 };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3 };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2 };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3 };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7 };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7 };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8 };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8 };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8 };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8 };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3 };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3 };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3 };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4 };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4 };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3 };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4 };
static panda$core$String $s2311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3 };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2 };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3 };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7 };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7 };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8 };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8 };
static panda$core$String $s2329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8 };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8 };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4 };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4 };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4 };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4 };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8 };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8 };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8 };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8 };
static panda$core$String $s2351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8 };
static panda$core$String $s2353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8 };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11 };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48 };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11 };
static panda$core$String $s2416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48 };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s2460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x63\x63\x20", 4 };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26 };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14 };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 48 };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 30 };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s2548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26 };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9 };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4 };
static panda$core$String $s2569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6 };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18 };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15 };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26 };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8 };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3 };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3 };
static panda$core$String $s2662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26 };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8 };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8 };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20 };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3 };
static panda$core$String $s2721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2 };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3 };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3 };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2 };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30 };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46 };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9 };
static panda$core$String $s2763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s2768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3 };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3 };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11 };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10 };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4 };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46 };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9 };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46 };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s2905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15 };
static panda$core$String $s2908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16 };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s2934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s2940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5 };
static panda$core$String $s2968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7 };
static panda$core$String $s2990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s2995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20 };
static panda$core$String $s3008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s3019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15 };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3 };
static panda$core$String $s3046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11 };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s3059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2 };
static panda$core$String $s3091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11 };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s3119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17 };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4 };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7 };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11 };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7 };
static panda$core$String $s3185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s3190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7 };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25 };
static panda$core$String $s3223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s3227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15 };
static panda$core$String $s3243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s3250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24 };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7 };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11 };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7 };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1 };
static panda$core$String $s3363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3 };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1 };
static panda$core$String $s3369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20 };
static panda$core$String $s3377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14 };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1 };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48 };
static panda$core$String $s3393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s3399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1 };
static panda$core$String $s3409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48 };
static panda$core$String $s3413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s3431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7 };
static panda$core$String $s3510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5 };
static panda$core$String $s3551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4 };
static panda$core$String $s3556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8 };
static panda$core$String $s3563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s3575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5 };
static panda$core$String $s3580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10 };
static panda$core$String $s3585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s3593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s3627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s3632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s3664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3 };
static panda$core$String $s3676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s3678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s3681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s3684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s3700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7 };
static panda$core$String $s3714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9 };
static panda$core$String $s3717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3 };
static panda$core$String $s3719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1 };
static panda$core$String $s3721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3 };
static panda$core$String $s3724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1 };
static panda$core$String $s3731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24 };
static panda$core$String $s3740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s3756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15 };
static panda$core$String $s3761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s3764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17 };
static panda$core$String $s3775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14 };
static panda$core$String $s3789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33 };
static panda$core$String $s3791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s3794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s3796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41 };
static panda$core$String $s3798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17 };
static panda$core$String $s3810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21 };
static panda$core$String $s3821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18 };
static panda$core$String $s3823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17 };
static panda$core$String $s3834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14 };
static panda$core$String $s3845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6 };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s3860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11 };
static panda$core$String $s3874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s3956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s3975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s3985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11 };
static panda$core$String $s4006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6 };
static panda$core$String $s4018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s4020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s4023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s4026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s4042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7 };
static panda$core$String $s4056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3 };
static panda$core$String $s4064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16 };
static panda$core$String $s4067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s4069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4 };
static panda$core$String $s4072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3 };
static panda$core$String $s4075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1 };
static panda$core$String $s4091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11 };
static panda$core$String $s4098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s4104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s4115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s4118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s4132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s4138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15 };
static panda$core$String $s4152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2 };
static panda$core$String $s4158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19 };
static panda$core$String $s4163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s4173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s4180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s4196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5 };
static panda$core$String $s4199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4 };
static panda$core$String $s4200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4 };
static panda$core$String $s4257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7 };
static panda$core$String $s4268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s4273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s4282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2 };
static panda$core$String $s4310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2 };
static panda$core$String $s4319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15 };
static panda$core$String $s4324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3 };
static panda$core$String $s4329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10 };
static panda$core$String $s4331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4 };
static panda$core$String $s4348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2 };
static panda$core$String $s4350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2 };
static panda$core$String $s4359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15 };
static panda$core$String $s4364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3 };
static panda$core$String $s4369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10 };
static panda$core$String $s4371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4 };
static panda$core$String $s4381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5 };
static panda$core$String $s4383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10 };
static panda$core$String $s4390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s4399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s4410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s4413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s4416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24 };
static panda$core$String $s4429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s4435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15 };
static panda$core$String $s4440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s4445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26 };
static panda$core$String $s4464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s4467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9 };
static panda$core$String $s4472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5 };
static panda$core$String $s4478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33 };
static panda$core$String $s4480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s4483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s4485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41 };
static panda$core$String $s4487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1 };
static panda$core$String $s4504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4 };
static panda$core$String $s4505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5 };
static panda$core$String $s4515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s4520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s4523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s4528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7 };
static panda$core$String $s4535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1 };
static panda$core$String $s4545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6 };
static panda$core$String $s4547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33 };
static panda$core$String $s4552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3 };
static panda$core$String $s4556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3 };
static panda$core$String $s4581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s4585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2 };
static panda$core$String $s4589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5 };
static panda$core$String $s4591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54 };
static panda$core$String $s4604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27 };
static panda$core$String $s4606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s4609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s4612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 69 };
static panda$core$String $s4614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53 };
static panda$core$String $s4616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s4619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20", 73 };
static panda$core$String $s4624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x36\x34\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x36\x34\x20", 19 };
static panda$core$String $s4631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x29\x20\x7D", 6 };
static panda$core$String $s4640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5 };
static panda$core$String $s4644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11 };
static panda$core$String $s4653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10 };
static panda$core$String $s4672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8 };
static panda$core$String $s4676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s4681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3 };
static panda$core$String $s4686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10 };
static panda$core$String $s4691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4 };
static panda$core$String $s4696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11 };
static panda$core$String $s4701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6 };
static panda$core$String $s4707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48 };
static panda$core$String $s4712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s4728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8 };
static panda$core$String $s4731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s4736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3 };
static panda$core$String $s4741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11 };
static panda$core$String $s4746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6 };
static panda$core$String $s4752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48 };
static panda$core$String $s4757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s4767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2 };
static panda$core$String $s4773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14 };
static panda$core$String $s4775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4 };
static panda$core$String $s4786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7 };
static panda$core$String $s4793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4 };
static panda$core$String $s4796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7 };
static panda$core$String $s4811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5 };
static panda$core$String $s4814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3 };
static panda$core$String $s4921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6 };
static panda$core$String $s4923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s4926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4 };
static panda$core$String $s4948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s4953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s4965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26 };
static panda$core$String $s4972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s4975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s4977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s4980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s4983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6 };
static panda$core$String $s4989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s4994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s4997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7 };
static panda$core$String $s5009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11 };
static panda$core$String $s5014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7 };
static panda$core$String $s5017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20 };
static panda$core$String $s5019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s5023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20 };
static panda$core$String $s5104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5 };
static panda$core$String $s5148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10 };
static panda$core$String $s5153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5 };
static panda$core$String $s5160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5 };
static panda$core$String $s5162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s5167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s5170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5 };
static panda$core$String $s5183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s5215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s5225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s5230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s5239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s5264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s5278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10 };
static panda$core$String $s5323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s5334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s5340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11 };
static panda$core$String $s5348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s5353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17 };
static panda$core$String $s5371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13 };
static panda$core$String $s5383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x33\x32\x20\x30", 7 };
static panda$core$String $s5390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s5395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s5401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17 };
static panda$core$String $s5412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s5418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12 };
static panda$core$String $s5423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6 };
static panda$core$String $s5425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s5434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s5445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3 };
static panda$core$String $s5451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11 };
static panda$core$String $s5459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s5464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17 };
static panda$core$String $s5482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13 };
static panda$core$String $s5494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x33\x32\x20\x30", 7 };
static panda$core$String $s5501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s5506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s5512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s5523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6 };
static panda$core$String $s5527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3 };
static panda$core$String $s5531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13 };
static panda$core$String $s5536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4 };
static panda$core$String $s5539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s5550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6 };
static panda$core$String $s5575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14 };
static panda$core$String $s5577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1 };
static panda$core$String $s5578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1 };
static panda$core$String $s5580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1 };
static panda$core$String $s5584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12 };
static panda$core$String $s5589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s5595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1 };
static panda$core$String $s5596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7 };
static panda$core$String $s5623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8 };
static panda$core$String $s5636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3 };
static panda$core$String $s5639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8 };
static panda$core$String $s5670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3 };
static panda$core$String $s5673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7 };
static panda$core$String $s5711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8 };
static panda$core$String $s5724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3 };
static panda$core$String $s5727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8 };
static panda$core$String $s5758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3 };
static panda$core$String $s5761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s5792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s5798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s5807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7 };
static panda$core$String $s5840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12 };
static panda$core$String $s5873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12 };
static panda$core$String $s5902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7 };
static panda$core$String $s5931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7 };
static panda$core$String $s5948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4 };
static panda$core$String $s5951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s5975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12 };
static panda$core$String $s5978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s5981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s5985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s5987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s5993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12 };
static panda$core$String $s6005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s6008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s6012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s6014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s6017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s6020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7 };
static panda$core$String $s6032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s6035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s6038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15 };
static panda$core$String $s6049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3 };
static panda$core$String $s6052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6 };
static panda$core$String $s6055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4 };
static panda$core$String $s6057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s6060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s6063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6 };
static panda$core$String $s6065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s6068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s6071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s6074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s6079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s6098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s6114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s6117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s6119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s6122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s6125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s6137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s6156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16 };
static panda$core$String $s6172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3 };
static panda$core$String $s6175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s6177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s6180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s6183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s6195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s6211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s6223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10 };
static panda$core$String $s6240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6 };
static panda$core$String $s6248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s6253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s6258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26 };
static panda$core$String $s6358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s6360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s6369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13 };
static panda$core$String $s6372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8 };
static panda$core$String $s6391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s6393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s6400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s6417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s6435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6 };
static panda$core$String $s6439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s6442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s6461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3B\x20\x69\x6E\x6C\x69\x6E\x65\x20\x72\x65\x74\x75\x72\x6E\x20\x28", 18 };
static panda$core$String $s6466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s6469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4 };
static panda$core$String $s6474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s6484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8 };
static panda$core$String $s6536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s6538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10 };
static panda$core$String $s6546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6 };
static panda$core$String $s6562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s6565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9 };
static panda$core$String $s6568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1 };
static panda$core$String $s6585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24 };
static panda$core$String $s6587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2 };
static panda$core$String $s6595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x63\x63\x63\x20\x76\x6F\x69\x64\x20", 14 };
static panda$core$String $s6617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16 };
static panda$core$String $s6621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35 };
static panda$core$String $s6622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52 };
static panda$core$String $s6625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69 };
static panda$core$String $s6627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21 };
static panda$core$String $s6629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s6632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22 };
static panda$core$String $s6637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s6642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11 };
static panda$core$String $s6692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s6696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s6704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8 };
static panda$core$String $s6708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4 };
static panda$core$String $s6719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s6723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s6727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s6735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s6739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6 };
static panda$core$String $s6749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s6767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2 };
static panda$core$String $s6779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s6783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s6785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1 };
static panda$core$String $s6787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7 };
static panda$core$String $s6791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s6801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s6805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6 };
static panda$core$String $s6816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s6834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2 };
static panda$core$String $s6846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s6849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s6850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3 };
static panda$core$String $s6889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8 };
static panda$core$String $s6891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11 };
static panda$core$String $s6894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1 };
static panda$core$String $s6900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4C\x6F\x6F\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6F\x72\x3C", 15 };
static panda$core$String $s6902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1 };
static panda$core$String $s6904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4C\x6F\x6F\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6F\x72\x3C\x3E", 16 };

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
        {
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, org$pandalanguage$pandac$IRNode* p_body, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m3253;
    panda$core$String* selfRef3256;
    panda$core$Int64 argStart3258;
    panda$collections$Array* args3264;
    panda$core$Range $tmp3267;
    panda$core$String* end3301;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline3304;
    org$pandalanguage$pandac$MethodDecl* old3312;
    panda$core$String* phi3326;
    panda$core$String* separator3339;
    panda$collections$Iterator* ret$Iter3341;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret3353;
    m3253 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    (($fn3254) self->compiler->currentFile->$class->vtable[2])(self->compiler->currentFile, ((panda$core$Object*) m3253->owner->source));
    (($fn3255) self->currentlyInlining->$class->vtable[5])(self->currentlyInlining, ((panda$core$Object*) m3253), ((panda$core$Object*) m3253));
    selfRef3256 = &$s3257;
    panda$core$Bit $tmp3260 = (($fn3259) m3253->$class->vtable[4])(m3253);
    if ($tmp3260.value) {
    {
        argStart3258 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp3261 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3263 = (($fn3262) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3261), p_out);
        selfRef3256 = $tmp3263;
    }
    }
    else {
    {
        argStart3258 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp3265 = (panda$collections$Array*) malloc(40);
    $tmp3265->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3265->refCount.value = 1;
    panda$collections$Array$init($tmp3265);
    args3264 = $tmp3265;
    panda$core$Int64 $tmp3268 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp3267, ((panda$core$Object*) wrap_panda$core$Int64(argStart3258)), ((panda$core$Object*) wrap_panda$core$Int64($tmp3268)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3270 = ((panda$core$Int64$wrapper*) $tmp3267.start)->value.value;
    panda$core$Int64 i3269 = { $tmp3270 };
    int64_t $tmp3272 = ((panda$core$Int64$wrapper*) $tmp3267.end)->value.value;
    int64_t $tmp3273 = $tmp3267.step.value;
    bool $tmp3274 = $tmp3267.inclusive.value;
    bool $tmp3281 = $tmp3273 > 0;
    if ($tmp3281) goto $l3279; else goto $l3280;
    $l3279:;
    if ($tmp3274) goto $l3282; else goto $l3283;
    $l3282:;
    if ($tmp3270 <= $tmp3272) goto $l3275; else goto $l3277;
    $l3283:;
    if ($tmp3270 < $tmp3272) goto $l3275; else goto $l3277;
    $l3280:;
    if ($tmp3274) goto $l3284; else goto $l3285;
    $l3284:;
    if ($tmp3270 >= $tmp3272) goto $l3275; else goto $l3277;
    $l3285:;
    if ($tmp3270 > $tmp3272) goto $l3275; else goto $l3277;
    $l3275:;
    {
        panda$core$Object* $tmp3287 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3269);
        panda$core$String* $tmp3289 = (($fn3288) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3287), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args3264, ((panda$core$Object*) $tmp3289));
    }
    $l3278:;
    if ($tmp3281) goto $l3291; else goto $l3292;
    $l3291:;
    int64_t $tmp3293 = $tmp3272 - i3269.value;
    if ($tmp3274) goto $l3294; else goto $l3295;
    $l3294:;
    if ($tmp3293 >= $tmp3273) goto $l3290; else goto $l3277;
    $l3295:;
    if ($tmp3293 > $tmp3273) goto $l3290; else goto $l3277;
    $l3292:;
    int64_t $tmp3297 = i3269.value - $tmp3272;
    if ($tmp3274) goto $l3298; else goto $l3299;
    $l3298:;
    if ($tmp3297 >= -$tmp3273) goto $l3290; else goto $l3277;
    $l3299:;
    if ($tmp3297 > -$tmp3273) goto $l3290; else goto $l3277;
    $l3290:;
    i3269.value += $tmp3273;
    goto $l3275;
    $l3277:;
    panda$core$String* $tmp3303 = (($fn3302) self->$class->vtable[5])(self);
    end3301 = $tmp3303;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp3305 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp3305->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp3305->refCount.value = 1;
    panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3307, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3308, &$s3309);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp3305, $tmp3310, selfRef3256, ((panda$collections$ListView*) args3264), end3301);
    inline3304 = $tmp3305;
    (($fn3311) self->inlineContext->$class->vtable[2])(self->inlineContext, ((panda$core$Object*) inline3304));
    old3312 = self->currentMethod;
    self->currentMethod = m3253;
    (($fn3313) self->$class->vtable[68])(self, p_body, p_out);
    self->currentMethod = old3312;
    (($fn3314) self->inlineContext->$class->vtable[3])(self->inlineContext);
    panda$core$Bit $tmp3316 = (($fn3315) self->$class->vtable[7])(self, p_body);
    panda$core$Bit $tmp3317 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3316);
    if ($tmp3317.value) {
    {
        (($fn3319) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3318);
    }
    }
    (($fn3320) self->$class->vtable[6])(self, end3301, p_out);
    (($fn3321) self->currentlyInlining->$class->vtable[6])(self->currentlyInlining, ((panda$core$Object*) m3253));
    (($fn3322) self->compiler->currentFile->$class->vtable[3])(self->compiler->currentFile);
    panda$core$Int64 $tmp3323 = panda$collections$Array$get_count$R$panda$core$Int64(inline3304->returns);
    panda$core$Bit $tmp3324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3323, ((panda$core$Int64) { 1 }));
    if ($tmp3324.value) {
    {
        panda$core$Object* $tmp3325 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline3304->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp3325)->second);
    }
    }
    panda$core$String* $tmp3328 = (($fn3327) self->$class->vtable[4])(self);
    phi3326 = $tmp3328;
    panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3329, phi3326);
    panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, &$s3331);
    panda$core$String* $tmp3334 = (($fn3333) self->$class->vtable[15])(self, m3253->returnType);
    panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3332, $tmp3334);
    panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, &$s3336);
    (($fn3338) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3337);
    separator3339 = &$s3340;
    {
        ITable* $tmp3342 = ((panda$collections$Iterable*) inline3304->returns)->$class->itable;
        while ($tmp3342->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3342 = $tmp3342->next;
        }
        $fn3344 $tmp3343 = $tmp3342->methods[0];
        panda$collections$Iterator* $tmp3345 = $tmp3343(((panda$collections$Iterable*) inline3304->returns));
        ret$Iter3341 = $tmp3345;
        $l3346:;
        ITable* $tmp3348 = ret$Iter3341->$class->itable;
        while ($tmp3348->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3348 = $tmp3348->next;
        }
        $fn3350 $tmp3349 = $tmp3348->methods[0];
        panda$core$Bit $tmp3351 = $tmp3349(ret$Iter3341);
        panda$core$Bit $tmp3352 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3351);
        if (!$tmp3352.value) goto $l3347;
        {
            ITable* $tmp3354 = ret$Iter3341->$class->itable;
            while ($tmp3354->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3354 = $tmp3354->next;
            }
            $fn3356 $tmp3355 = $tmp3354->methods[1];
            panda$core$Object* $tmp3357 = $tmp3355(ret$Iter3341);
            ret3353 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp3357);
            panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3358, separator3339);
            panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, &$s3360);
            panda$core$String* $tmp3362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3361, ((panda$core$String*) ret3353->second));
            panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3362, &$s3363);
            panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3364, ((panda$core$String*) ret3353->first));
            panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, &$s3366);
            (($fn3368) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3367);
            separator3339 = &$s3369;
        }
        goto $l3346;
        $l3347:;
    }
    (($fn3370) ((panda$io$OutputStream*) p_out)->$class->vtable[17])(((panda$io$OutputStream*) p_out));
    return phi3326;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m3371;
    panda$core$String* bit3381;
    panda$core$String* result3386;
    panda$core$String* bit3401;
    panda$core$String* result3406;
    org$pandalanguage$pandac$IRNode* block3426;
    panda$collections$Array* args3432;
    org$pandalanguage$pandac$Type* actualMethodType3436;
    panda$core$String* actualResultType3437;
    panda$core$Bit isSuper3438;
    panda$core$Int64 offset3465;
    panda$core$Range $tmp3471;
    panda$core$String* arg3491;
    panda$core$String* target3536;
    panda$core$String* methodRef3540;
    panda$core$String* result3543;
    panda$core$Bit indirect3544;
    panda$core$String* separator3574;
    panda$core$String* indirectVar3576;
    panda$collections$Iterator* arg$Iter3597;
    panda$core$String* arg3609;
    m3371 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp3373 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3371->owner)->name, &$s3372);
    if ($tmp3373.value) {
    {
        panda$core$String* $tmp3375 = (($fn3374) self->$class->vtable[44])(self, p_call, p_out);
        return $tmp3375;
    }
    }
    if (m3371->owner->external.value) {
    {
        (($fn3376) self->$class->vtable[87])(self, m3371);
    }
    }
    panda$core$Bit $tmp3378 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3371->owner)->name, &$s3377);
    if ($tmp3378.value) {
    {
        panda$core$Bit $tmp3380 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3371)->name, &$s3379);
        if ($tmp3380.value) {
        {
            panda$core$Object* $tmp3382 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3383 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3385 = (($fn3384) self->$class->vtable[33])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3382), ((org$pandalanguage$pandac$IRNode*) $tmp3383), p_out);
            bit3381 = $tmp3385;
            panda$core$String* $tmp3388 = (($fn3387) self->$class->vtable[4])(self);
            result3386 = $tmp3388;
            panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3389, result3386);
            panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, &$s3391);
            panda$core$String* $tmp3394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3393, bit3381);
            panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3394, &$s3395);
            panda$core$String* $tmp3397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3392, $tmp3396);
            (($fn3398) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3397);
            return result3386;
        }
        }
        panda$core$Bit $tmp3400 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3371)->name, &$s3399);
        if ($tmp3400.value) {
        {
            panda$core$Object* $tmp3402 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3403 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3405 = (($fn3404) self->$class->vtable[34])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3402), ((org$pandalanguage$pandac$IRNode*) $tmp3403), p_out);
            bit3401 = $tmp3405;
            panda$core$String* $tmp3408 = (($fn3407) self->$class->vtable[4])(self);
            result3406 = $tmp3408;
            panda$core$String* $tmp3410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3409, result3406);
            panda$core$String* $tmp3412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3410, &$s3411);
            panda$core$String* $tmp3414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3413, bit3401);
            panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3414, &$s3415);
            panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3412, $tmp3416);
            (($fn3418) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3417);
            return result3406;
        }
        }
    }
    }
    panda$core$Bit $tmp3421 = (($fn3420) m3371->annotations->$class->vtable[11])(m3371->annotations);
    bool $tmp3419 = $tmp3421.value;
    if (!$tmp3419) goto $l3422;
    panda$core$Object* $tmp3424 = (($fn3423) self->currentlyInlining->$class->vtable[3])(self->currentlyInlining, ((panda$core$Object*) m3371));
    $tmp3419 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp3424) == NULL }).value;
    $l3422:;
    panda$core$Bit $tmp3425 = { $tmp3419 };
    if ($tmp3425.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3428 = (($fn3427) self->compiler->$class->vtable[88])(self->compiler, m3371);
        block3426 = $tmp3428;
        if (((panda$core$Bit) { block3426 != NULL }).value) {
        {
            panda$core$String* $tmp3430 = (($fn3429) self->$class->vtable[45])(self, p_call, block3426, p_out);
            return $tmp3430;
        }
        }
        return &$s3431;
    }
    }
    panda$collections$Array* $tmp3433 = (panda$collections$Array*) malloc(40);
    $tmp3433->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3433->refCount.value = 1;
    panda$core$Int64 $tmp3435 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp3433, $tmp3435);
    args3432 = $tmp3433;
    panda$core$Int64 $tmp3440 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp3441 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3440, ((panda$core$Int64) { 1 }));
    bool $tmp3439 = $tmp3441.value;
    if (!$tmp3439) goto $l3442;
    panda$core$Object* $tmp3443 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3443)->kind, ((panda$core$Int64) { 1024 }));
    $tmp3439 = $tmp3444.value;
    $l3442:;
    panda$core$Bit $tmp3445 = { $tmp3439 };
    isSuper3438 = $tmp3445;
    panda$core$Bit $tmp3447 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper3438);
    bool $tmp3446 = $tmp3447.value;
    if (!$tmp3446) goto $l3448;
    panda$core$Bit $tmp3450 = (($fn3449) m3371->$class->vtable[3])(m3371);
    $tmp3446 = $tmp3450.value;
    $l3448:;
    panda$core$Bit $tmp3451 = { $tmp3446 };
    if ($tmp3451.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3453 = (($fn3452) self->compiler->$class->vtable[45])(self->compiler, m3371);
        actualMethodType3436 = $tmp3453;
        panda$core$Int64 $tmp3455 = (($fn3454) actualMethodType3436->subtypes->$class->vtable[3])(actualMethodType3436->subtypes);
        panda$core$Int64 $tmp3456 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3455, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3458 = (($fn3457) actualMethodType3436->subtypes->$class->vtable[2])(actualMethodType3436->subtypes, $tmp3456);
        panda$core$String* $tmp3460 = (($fn3459) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp3458));
        actualResultType3437 = $tmp3460;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3462 = (($fn3461) self->compiler->$class->vtable[43])(self->compiler, m3371);
        actualMethodType3436 = $tmp3462;
        panda$core$String* $tmp3464 = (($fn3463) self->$class->vtable[15])(self, p_call->type);
        actualResultType3437 = $tmp3464;
    }
    }
    panda$core$Int64 $tmp3466 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp3468 = (($fn3467) actualMethodType3436->subtypes->$class->vtable[3])(actualMethodType3436->subtypes);
    panda$core$Int64 $tmp3469 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3466, $tmp3468);
    panda$core$Int64 $tmp3470 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp3469, ((panda$core$Int64) { 1 }));
    offset3465 = $tmp3470;
    panda$core$Int64 $tmp3472 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp3471, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp3472)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3474 = ((panda$core$Int64$wrapper*) $tmp3471.start)->value.value;
    panda$core$Int64 i3473 = { $tmp3474 };
    int64_t $tmp3476 = ((panda$core$Int64$wrapper*) $tmp3471.end)->value.value;
    int64_t $tmp3477 = $tmp3471.step.value;
    bool $tmp3478 = $tmp3471.inclusive.value;
    bool $tmp3485 = $tmp3477 > 0;
    if ($tmp3485) goto $l3483; else goto $l3484;
    $l3483:;
    if ($tmp3478) goto $l3486; else goto $l3487;
    $l3486:;
    if ($tmp3474 <= $tmp3476) goto $l3479; else goto $l3481;
    $l3487:;
    if ($tmp3474 < $tmp3476) goto $l3479; else goto $l3481;
    $l3484:;
    if ($tmp3478) goto $l3488; else goto $l3489;
    $l3488:;
    if ($tmp3474 >= $tmp3476) goto $l3479; else goto $l3481;
    $l3489:;
    if ($tmp3474 > $tmp3476) goto $l3479; else goto $l3481;
    $l3479:;
    {
        panda$core$Object* $tmp3492 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3473);
        panda$core$String* $tmp3494 = (($fn3493) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3492), p_out);
        arg3491 = $tmp3494;
        panda$core$Bit $tmp3496 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i3473, offset3465);
        bool $tmp3495 = $tmp3496.value;
        if (!$tmp3495) goto $l3497;
        panda$core$Int64 $tmp3498 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3473, offset3465);
        panda$core$Object* $tmp3500 = (($fn3499) actualMethodType3436->subtypes->$class->vtable[2])(actualMethodType3436->subtypes, $tmp3498);
        panda$core$Object* $tmp3501 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3473);
        panda$core$Bit $tmp3503 = (($fn3502) ((org$pandalanguage$pandac$Type*) $tmp3500)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp3500), ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3501)->type));
        $tmp3495 = $tmp3503.value;
        $l3497:;
        panda$core$Bit $tmp3504 = { $tmp3495 };
        if ($tmp3504.value) {
        {
            panda$core$Int64 $tmp3505 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3473, offset3465);
            panda$core$Object* $tmp3507 = (($fn3506) actualMethodType3436->subtypes->$class->vtable[2])(actualMethodType3436->subtypes, $tmp3505);
            panda$core$String* $tmp3509 = (($fn3508) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp3507));
            panda$core$String* $tmp3511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3509, &$s3510);
            panda$core$Object* $tmp3512 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3473);
            panda$core$Int64 $tmp3513 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3473, offset3465);
            panda$core$Object* $tmp3515 = (($fn3514) actualMethodType3436->subtypes->$class->vtable[2])(actualMethodType3436->subtypes, $tmp3513);
            panda$core$String* $tmp3517 = (($fn3516) self->$class->vtable[52])(self, arg3491, ((org$pandalanguage$pandac$IRNode*) $tmp3512)->type, ((org$pandalanguage$pandac$Type*) $tmp3515), p_out);
            panda$core$String* $tmp3518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3511, $tmp3517);
            arg3491 = $tmp3518;
        }
        }
        else {
        {
            panda$core$Object* $tmp3519 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3473);
            panda$core$String* $tmp3521 = (($fn3520) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3519)->type);
            panda$core$String* $tmp3523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3521, &$s3522);
            panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3523, arg3491);
            arg3491 = $tmp3524;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args3432, ((panda$core$Object*) arg3491));
    }
    $l3482:;
    if ($tmp3485) goto $l3526; else goto $l3527;
    $l3526:;
    int64_t $tmp3528 = $tmp3476 - i3473.value;
    if ($tmp3478) goto $l3529; else goto $l3530;
    $l3529:;
    if ($tmp3528 >= $tmp3477) goto $l3525; else goto $l3481;
    $l3530:;
    if ($tmp3528 > $tmp3477) goto $l3525; else goto $l3481;
    $l3527:;
    int64_t $tmp3532 = i3473.value - $tmp3476;
    if ($tmp3478) goto $l3533; else goto $l3534;
    $l3533:;
    if ($tmp3532 >= -$tmp3477) goto $l3525; else goto $l3481;
    $l3534:;
    if ($tmp3532 > -$tmp3477) goto $l3525; else goto $l3481;
    $l3525:;
    i3473.value += $tmp3477;
    goto $l3479;
    $l3481:;
    panda$core$Int64 $tmp3537 = panda$collections$Array$get_count$R$panda$core$Int64(args3432);
    panda$core$Bit $tmp3538 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3537, ((panda$core$Int64) { 0 }));
    if ($tmp3538.value) {
    {
        panda$core$Object* $tmp3539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args3432, ((panda$core$Int64) { 0 }));
        target3536 = ((panda$core$String*) $tmp3539);
    }
    }
    else {
    {
        target3536 = NULL;
    }
    }
    panda$core$String* $tmp3542 = (($fn3541) self->$class->vtable[43])(self, target3536, m3371, isSuper3438, p_out);
    methodRef3540 = $tmp3542;
    panda$core$Bit $tmp3546 = (($fn3545) self->$class->vtable[24])(self, m3371);
    indirect3544 = $tmp3546;
    if (indirect3544.value) {
    {
        panda$core$String* $tmp3549 = (($fn3548) self->$class->vtable[40])(self, m3371);
        panda$core$String* $tmp3550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3547, $tmp3549);
        panda$core$String* $tmp3552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3550, &$s3551);
        (($fn3553) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3552);
    }
    }
    else {
    {
        panda$core$String* $tmp3555 = (($fn3554) self->$class->vtable[4])(self);
        result3543 = $tmp3555;
        panda$core$String* $tmp3557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3556, result3543);
        panda$core$String* $tmp3559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3557, &$s3558);
        panda$core$String* $tmp3561 = (($fn3560) self->$class->vtable[40])(self, m3371);
        panda$core$String* $tmp3562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3559, $tmp3561);
        panda$core$String* $tmp3564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3562, &$s3563);
        panda$core$String* $tmp3565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3564, actualResultType3437);
        panda$core$String* $tmp3567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3565, &$s3566);
        (($fn3568) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3567);
    }
    }
    panda$core$String* $tmp3570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3569, methodRef3540);
    panda$core$String* $tmp3572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3570, &$s3571);
    (($fn3573) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3572);
    separator3574 = &$s3575;
    if (indirect3544.value) {
    {
        panda$core$Int64 $tmp3577 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3577;
        panda$core$String* $tmp3579 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3578, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3576 = $tmp3579;
        panda$core$String* $tmp3581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3580, indirectVar3576);
        panda$core$String* $tmp3583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3581, &$s3582);
        panda$core$String* $tmp3584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3583, actualResultType3437);
        panda$core$String* $tmp3586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3584, &$s3585);
        (($fn3587) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3586);
        panda$core$String* $tmp3589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3588, actualResultType3437);
        panda$core$String* $tmp3591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3589, &$s3590);
        panda$core$String* $tmp3592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3591, indirectVar3576);
        panda$core$String* $tmp3594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3592, &$s3593);
        (($fn3595) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3594);
        separator3574 = &$s3596;
    }
    }
    {
        ITable* $tmp3598 = ((panda$collections$Iterable*) args3432)->$class->itable;
        while ($tmp3598->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3598 = $tmp3598->next;
        }
        $fn3600 $tmp3599 = $tmp3598->methods[0];
        panda$collections$Iterator* $tmp3601 = $tmp3599(((panda$collections$Iterable*) args3432));
        arg$Iter3597 = $tmp3601;
        $l3602:;
        ITable* $tmp3604 = arg$Iter3597->$class->itable;
        while ($tmp3604->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3604 = $tmp3604->next;
        }
        $fn3606 $tmp3605 = $tmp3604->methods[0];
        panda$core$Bit $tmp3607 = $tmp3605(arg$Iter3597);
        panda$core$Bit $tmp3608 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3607);
        if (!$tmp3608.value) goto $l3603;
        {
            ITable* $tmp3610 = arg$Iter3597->$class->itable;
            while ($tmp3610->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3610 = $tmp3610->next;
            }
            $fn3612 $tmp3611 = $tmp3610->methods[1];
            panda$core$Object* $tmp3613 = $tmp3611(arg$Iter3597);
            arg3609 = ((panda$core$String*) $tmp3613);
            panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3614, separator3574);
            panda$core$String* $tmp3617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3615, &$s3616);
            panda$core$String* $tmp3618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3617, arg3609);
            panda$core$String* $tmp3620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3618, &$s3619);
            (($fn3621) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3620);
            separator3574 = &$s3622;
        }
        goto $l3602;
        $l3603:;
    }
    (($fn3624) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3623);
    if (indirect3544.value) {
    {
        panda$core$String* $tmp3626 = (($fn3625) self->$class->vtable[4])(self);
        result3543 = $tmp3626;
        panda$core$String* $tmp3628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3627, result3543);
        panda$core$String* $tmp3630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3628, &$s3629);
        panda$core$String* $tmp3631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3630, actualResultType3437);
        panda$core$String* $tmp3633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3631, &$s3632);
        panda$core$String* $tmp3634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3633, actualResultType3437);
        panda$core$String* $tmp3636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3634, &$s3635);
        panda$core$String* $tmp3637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3636, indirectVar3576);
        (($fn3638) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3637);
    }
    }
    panda$core$String* $tmp3640 = (($fn3639) self->$class->vtable[15])(self, p_call->type);
    panda$core$Bit $tmp3641 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3640, actualResultType3437);
    if ($tmp3641.value) {
    {
        panda$core$Int64 $tmp3643 = (($fn3642) actualMethodType3436->subtypes->$class->vtable[3])(actualMethodType3436->subtypes);
        panda$core$Int64 $tmp3644 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3643, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3646 = (($fn3645) actualMethodType3436->subtypes->$class->vtable[2])(actualMethodType3436->subtypes, $tmp3644);
        panda$core$String* $tmp3648 = (($fn3647) self->$class->vtable[52])(self, result3543, ((org$pandalanguage$pandac$Type*) $tmp3646), p_call->type, p_out);
        return $tmp3648;
    }
    }
    return result3543;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3649;
    panda$core$String* testStart3653;
    panda$core$String* isNonNull3654;
    panda$core$String* nonNullLabel3670;
    panda$core$String* endLabel3673;
    panda$core$String* unwrapped3688;
    panda$core$String* nonNullValue3693;
    panda$core$String* result3704;
    panda$core$String* mallocRef3728;
    panda$core$String* wrapperTypeName3743;
    panda$core$String* wrapperType3748;
    panda$core$String* wrapperCast3753;
    panda$core$String* classPtr3767;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3786;
    panda$core$String* refCount3802;
    panda$core$String* target3826;
    panda$core$String* result3866;
    org$pandalanguage$pandac$ClassDecl* $tmp3651 = (($fn3650) self->compiler->$class->vtable[13])(self->compiler, p_srcType);
    src3649 = $tmp3651;
    panda$core$Bit $tmp3652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3652.value) {
    {
        testStart3653 = self->currentBlock;
        panda$core$String* $tmp3656 = (($fn3655) self->$class->vtable[4])(self);
        isNonNull3654 = $tmp3656;
        panda$core$String* $tmp3658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3657, isNonNull3654);
        panda$core$String* $tmp3660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3658, &$s3659);
        panda$core$String* $tmp3662 = (($fn3661) self->$class->vtable[19])(self, p_srcType);
        panda$core$String* $tmp3663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3660, $tmp3662);
        panda$core$String* $tmp3665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3663, &$s3664);
        panda$core$String* $tmp3666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3665, p_value);
        panda$core$String* $tmp3668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3666, &$s3667);
        (($fn3669) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3668);
        panda$core$String* $tmp3672 = (($fn3671) self->$class->vtable[5])(self);
        nonNullLabel3670 = $tmp3672;
        panda$core$String* $tmp3675 = (($fn3674) self->$class->vtable[5])(self);
        endLabel3673 = $tmp3675;
        panda$core$String* $tmp3677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3676, isNonNull3654);
        panda$core$String* $tmp3679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3677, &$s3678);
        panda$core$String* $tmp3680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3679, nonNullLabel3670);
        panda$core$String* $tmp3682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3680, &$s3681);
        panda$core$String* $tmp3683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3682, endLabel3673);
        panda$core$String* $tmp3685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3683, &$s3684);
        (($fn3686) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3685);
        (($fn3687) self->$class->vtable[6])(self, nonNullLabel3670, p_out);
        panda$core$Object* $tmp3690 = (($fn3689) p_srcType->subtypes->$class->vtable[2])(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3692 = (($fn3691) self->$class->vtable[51])(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3690), p_out);
        unwrapped3688 = $tmp3692;
        panda$core$Object* $tmp3695 = (($fn3694) p_srcType->subtypes->$class->vtable[2])(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3697 = (($fn3696) self->$class->vtable[47])(self, unwrapped3688, ((org$pandalanguage$pandac$Type*) $tmp3695), p_dstType, p_out);
        nonNullValue3693 = $tmp3697;
        panda$core$String* $tmp3699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3698, endLabel3673);
        panda$core$String* $tmp3701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3699, &$s3700);
        (($fn3702) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3701);
        (($fn3703) self->$class->vtable[6])(self, endLabel3673, p_out);
        panda$core$String* $tmp3706 = (($fn3705) self->$class->vtable[4])(self);
        result3704 = $tmp3706;
        panda$core$String* $tmp3708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3707, result3704);
        panda$core$String* $tmp3710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3708, &$s3709);
        panda$core$String* $tmp3712 = (($fn3711) self->$class->vtable[15])(self, p_dstType);
        panda$core$String* $tmp3713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3710, $tmp3712);
        panda$core$String* $tmp3715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3713, &$s3714);
        panda$core$String* $tmp3716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3715, testStart3653);
        panda$core$String* $tmp3718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3716, &$s3717);
        panda$core$String* $tmp3720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3719, nonNullValue3693);
        panda$core$String* $tmp3722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3720, &$s3721);
        panda$core$String* $tmp3723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3722, nonNullLabel3670);
        panda$core$String* $tmp3725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3723, &$s3724);
        panda$core$String* $tmp3726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3718, $tmp3725);
        (($fn3727) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3726);
        return result3704;
    }
    }
    panda$core$String* $tmp3730 = (($fn3729) self->$class->vtable[4])(self);
    mallocRef3728 = $tmp3730;
    panda$core$String* $tmp3732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3731, mallocRef3728);
    panda$core$String* $tmp3734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3732, &$s3733);
    org$pandalanguage$pandac$Type* $tmp3736 = (($fn3735) src3649->$class->vtable[3])(src3649);
    panda$core$Int64 $tmp3738 = (($fn3737) self->$class->vtable[11])(self, $tmp3736);
    panda$core$String* $tmp3739 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3734, ((panda$core$Object*) wrap_panda$core$Int64($tmp3738)));
    panda$core$String* $tmp3741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3739, &$s3740);
    (($fn3742) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3741);
    org$pandalanguage$pandac$Type* $tmp3745 = (($fn3744) src3649->$class->vtable[3])(src3649);
    panda$core$String* $tmp3747 = (($fn3746) self->$class->vtable[16])(self, $tmp3745);
    wrapperTypeName3743 = $tmp3747;
    org$pandalanguage$pandac$Type* $tmp3750 = (($fn3749) src3649->$class->vtable[3])(src3649);
    panda$core$String* $tmp3752 = (($fn3751) self->$class->vtable[17])(self, $tmp3750);
    wrapperType3748 = $tmp3752;
    panda$core$String* $tmp3755 = (($fn3754) self->$class->vtable[4])(self);
    wrapperCast3753 = $tmp3755;
    panda$core$String* $tmp3757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3756, wrapperCast3753);
    panda$core$String* $tmp3759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3757, &$s3758);
    panda$core$String* $tmp3760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3759, mallocRef3728);
    panda$core$String* $tmp3762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3760, &$s3761);
    panda$core$String* $tmp3763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3762, wrapperType3748);
    panda$core$String* $tmp3765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3763, &$s3764);
    (($fn3766) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3765);
    panda$core$String* $tmp3769 = (($fn3768) self->$class->vtable[4])(self);
    classPtr3767 = $tmp3769;
    panda$core$String* $tmp3771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3770, classPtr3767);
    panda$core$String* $tmp3773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3771, &$s3772);
    panda$core$String* $tmp3774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3773, wrapperTypeName3743);
    panda$core$String* $tmp3776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3774, &$s3775);
    panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3777, wrapperType3748);
    panda$core$String* $tmp3780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3778, &$s3779);
    panda$core$String* $tmp3781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3780, wrapperCast3753);
    panda$core$String* $tmp3783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3781, &$s3782);
    panda$core$String* $tmp3784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3776, $tmp3783);
    (($fn3785) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3784);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3788 = (($fn3787) self->$class->vtable[27])(self, src3649);
    cc3786 = $tmp3788;
    panda$core$String* $tmp3790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3789, cc3786->type);
    panda$core$String* $tmp3792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3790, &$s3791);
    panda$core$String* $tmp3793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3792, cc3786->name);
    panda$core$String* $tmp3795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3793, &$s3794);
    panda$core$String* $tmp3797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3796, classPtr3767);
    panda$core$String* $tmp3799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3797, &$s3798);
    panda$core$String* $tmp3800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3795, $tmp3799);
    (($fn3801) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3800);
    panda$core$String* $tmp3804 = (($fn3803) self->$class->vtable[4])(self);
    refCount3802 = $tmp3804;
    panda$core$String* $tmp3806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3805, refCount3802);
    panda$core$String* $tmp3808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3806, &$s3807);
    panda$core$String* $tmp3809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3808, wrapperTypeName3743);
    panda$core$String* $tmp3811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3809, &$s3810);
    panda$core$String* $tmp3813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3812, wrapperType3748);
    panda$core$String* $tmp3815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3813, &$s3814);
    panda$core$String* $tmp3816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3815, wrapperCast3753);
    panda$core$String* $tmp3818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3816, &$s3817);
    panda$core$String* $tmp3819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3811, $tmp3818);
    (($fn3820) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3819);
    panda$core$String* $tmp3822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3821, refCount3802);
    panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3822, &$s3823);
    (($fn3825) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3824);
    panda$core$String* $tmp3828 = (($fn3827) self->$class->vtable[4])(self);
    target3826 = $tmp3828;
    panda$core$String* $tmp3830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3829, target3826);
    panda$core$String* $tmp3832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3830, &$s3831);
    panda$core$String* $tmp3833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3832, wrapperTypeName3743);
    panda$core$String* $tmp3835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3833, &$s3834);
    panda$core$String* $tmp3837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3836, wrapperType3748);
    panda$core$String* $tmp3839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3837, &$s3838);
    panda$core$String* $tmp3840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3839, wrapperCast3753);
    panda$core$String* $tmp3842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3840, &$s3841);
    panda$core$String* $tmp3843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3835, $tmp3842);
    (($fn3844) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3843);
    panda$core$String* $tmp3847 = (($fn3846) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp3848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3845, $tmp3847);
    panda$core$String* $tmp3850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3848, &$s3849);
    panda$core$String* $tmp3851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3850, p_value);
    panda$core$String* $tmp3853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3851, &$s3852);
    panda$core$String* $tmp3855 = (($fn3854) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp3856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3853, $tmp3855);
    panda$core$String* $tmp3858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3856, &$s3857);
    panda$core$String* $tmp3859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3858, target3826);
    panda$core$String* $tmp3861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3859, &$s3860);
    (($fn3862) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3861);
    panda$core$String* $tmp3864 = (($fn3863) self->$class->vtable[15])(self, p_dstType);
    panda$core$Bit $tmp3865 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3748, $tmp3864);
    if ($tmp3865.value) {
    {
        panda$core$String* $tmp3868 = (($fn3867) self->$class->vtable[4])(self);
        result3866 = $tmp3868;
        panda$core$String* $tmp3870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3869, result3866);
        panda$core$String* $tmp3872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3870, &$s3871);
        panda$core$String* $tmp3873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3872, wrapperType3748);
        panda$core$String* $tmp3875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3873, &$s3874);
        panda$core$String* $tmp3876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3875, wrapperCast3753);
        panda$core$String* $tmp3878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3876, &$s3877);
        panda$core$String* $tmp3880 = (($fn3879) self->$class->vtable[15])(self, p_dstType);
        panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3878, $tmp3880);
        panda$core$String* $tmp3883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3881, &$s3882);
        (($fn3884) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3883);
        return result3866;
    }
    }
    return wrapperCast3753;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3885;
    panda$core$String* t3886;
    org$pandalanguage$pandac$ClassDecl* cl3893;
    panda$core$String* base3899;
    panda$collections$ListView* fields3903;
    panda$core$Int64$nullable index3906;
    panda$core$Range $tmp3907;
    panda$core$String* result3945;
    panda$core$String* ptr3967;
    panda$core$String* result3977;
    field3885 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3888 = (($fn3887) self->$class->vtable[15])(self, field3885->type);
    t3886 = $tmp3888;
    panda$core$Bit $tmp3890 = (($fn3889) field3885->annotations->$class->vtable[5])(field3885->annotations);
    if ($tmp3890.value) {
    {
        panda$core$String* $tmp3892 = (($fn3891) self->$class->vtable[66])(self, field3885->value, p_out);
        return $tmp3892;
    }
    }
    panda$core$Object* $tmp3894 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3896 = (($fn3895) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3894)->type);
    cl3893 = $tmp3896;
    panda$core$Bit $tmp3898 = (($fn3897) self->compiler->$class->vtable[9])(self->compiler, cl3893);
    if ($tmp3898.value) {
    {
        panda$core$Object* $tmp3900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3902 = (($fn3901) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3900), p_out);
        base3899 = $tmp3902;
        panda$collections$ListView* $tmp3905 = (($fn3904) self->compiler->$class->vtable[10])(self->compiler, cl3893);
        fields3903 = $tmp3905;
        index3906 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3908 = ((panda$collections$CollectionView*) fields3903)->$class->itable;
        while ($tmp3908->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3908 = $tmp3908->next;
        }
        $fn3910 $tmp3909 = $tmp3908->methods[0];
        panda$core$Int64 $tmp3911 = $tmp3909(((panda$collections$CollectionView*) fields3903));
        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp3907, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp3911)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp3913 = ((panda$core$Int64$wrapper*) $tmp3907.start)->value.value;
        panda$core$Int64 i3912 = { $tmp3913 };
        int64_t $tmp3915 = ((panda$core$Int64$wrapper*) $tmp3907.end)->value.value;
        int64_t $tmp3916 = $tmp3907.step.value;
        bool $tmp3917 = $tmp3907.inclusive.value;
        bool $tmp3924 = $tmp3916 > 0;
        if ($tmp3924) goto $l3922; else goto $l3923;
        $l3922:;
        if ($tmp3917) goto $l3925; else goto $l3926;
        $l3925:;
        if ($tmp3913 <= $tmp3915) goto $l3918; else goto $l3920;
        $l3926:;
        if ($tmp3913 < $tmp3915) goto $l3918; else goto $l3920;
        $l3923:;
        if ($tmp3917) goto $l3927; else goto $l3928;
        $l3927:;
        if ($tmp3913 >= $tmp3915) goto $l3918; else goto $l3920;
        $l3928:;
        if ($tmp3913 > $tmp3915) goto $l3918; else goto $l3920;
        $l3918:;
        {
            ITable* $tmp3930 = fields3903->$class->itable;
            while ($tmp3930->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3930 = $tmp3930->next;
            }
            $fn3932 $tmp3931 = $tmp3930->methods[0];
            panda$core$Object* $tmp3933 = $tmp3931(fields3903, i3912);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3933)) == ((panda$core$Object*) field3885) }).value) {
            {
                index3906 = ((panda$core$Int64$nullable) { i3912, true });
                goto $l3920;
            }
            }
        }
        $l3921:;
        if ($tmp3924) goto $l3935; else goto $l3936;
        $l3935:;
        int64_t $tmp3937 = $tmp3915 - i3912.value;
        if ($tmp3917) goto $l3938; else goto $l3939;
        $l3938:;
        if ($tmp3937 >= $tmp3916) goto $l3934; else goto $l3920;
        $l3939:;
        if ($tmp3937 > $tmp3916) goto $l3934; else goto $l3920;
        $l3936:;
        int64_t $tmp3941 = i3912.value - $tmp3915;
        if ($tmp3917) goto $l3942; else goto $l3943;
        $l3942:;
        if ($tmp3941 >= -$tmp3916) goto $l3934; else goto $l3920;
        $l3943:;
        if ($tmp3941 > -$tmp3916) goto $l3934; else goto $l3920;
        $l3934:;
        i3912.value += $tmp3916;
        goto $l3918;
        $l3920:;
        panda$core$String* $tmp3947 = (($fn3946) self->$class->vtable[4])(self);
        result3945 = $tmp3947;
        panda$core$String* $tmp3949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3948, result3945);
        panda$core$String* $tmp3951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3949, &$s3950);
        panda$core$Object* $tmp3952 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3954 = (($fn3953) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3952)->type);
        panda$core$String* $tmp3955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3951, $tmp3954);
        panda$core$String* $tmp3957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3955, &$s3956);
        panda$core$String* $tmp3958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3957, base3899);
        panda$core$String* $tmp3960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3958, &$s3959);
        panda$core$String* $tmp3962 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3961, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3906.value))));
        panda$core$String* $tmp3964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3962, &$s3963);
        panda$core$String* $tmp3965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3960, $tmp3964);
        (($fn3966) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3965);
        return result3945;
    }
    }
    panda$core$String* $tmp3969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3968, t3886);
    panda$core$String* $tmp3971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3969, &$s3970);
    panda$core$String* $tmp3973 = (($fn3972) self->$class->vtable[78])(self, p_fieldRef, p_out);
    panda$core$String* $tmp3974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3971, $tmp3973);
    panda$core$String* $tmp3976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3974, &$s3975);
    ptr3967 = $tmp3976;
    panda$core$String* $tmp3979 = (($fn3978) self->$class->vtable[4])(self);
    result3977 = $tmp3979;
    panda$core$String* $tmp3981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3980, result3977);
    panda$core$String* $tmp3983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3981, &$s3982);
    panda$core$String* $tmp3984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3983, t3886);
    panda$core$String* $tmp3986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3984, &$s3985);
    panda$core$String* $tmp3987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3986, ptr3967);
    panda$core$String* $tmp3989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3987, &$s3988);
    (($fn3990) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3989);
    return result3977;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3991;
    panda$core$String* testStart3995;
    panda$core$String* isNonNull3996;
    panda$core$String* nonNullLabel4012;
    panda$core$String* endLabel4015;
    panda$core$String* wrapped4030;
    panda$core$String* nonNullValue4035;
    panda$core$String* result4046;
    panda$core$String* targetType4079;
    panda$core$String* wrapperTypeName4082;
    panda$core$String* wrapperType4085;
    panda$core$String* srcCast4088;
    panda$core$String* load4107;
    panda$core$String* result4124;
    org$pandalanguage$pandac$ClassDecl* $tmp3993 = (($fn3992) self->compiler->$class->vtable[13])(self->compiler, p_dstType);
    target3991 = $tmp3993;
    panda$core$Bit $tmp3994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3994.value) {
    {
        testStart3995 = self->currentBlock;
        panda$core$String* $tmp3998 = (($fn3997) self->$class->vtable[4])(self);
        isNonNull3996 = $tmp3998;
        panda$core$String* $tmp4000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3999, isNonNull3996);
        panda$core$String* $tmp4002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4000, &$s4001);
        panda$core$String* $tmp4004 = (($fn4003) self->$class->vtable[15])(self, p_srcType);
        panda$core$String* $tmp4005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4002, $tmp4004);
        panda$core$String* $tmp4007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4005, &$s4006);
        panda$core$String* $tmp4008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4007, p_value);
        panda$core$String* $tmp4010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4008, &$s4009);
        (($fn4011) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4010);
        panda$core$String* $tmp4014 = (($fn4013) self->$class->vtable[5])(self);
        nonNullLabel4012 = $tmp4014;
        panda$core$String* $tmp4017 = (($fn4016) self->$class->vtable[5])(self);
        endLabel4015 = $tmp4017;
        panda$core$String* $tmp4019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4018, isNonNull3996);
        panda$core$String* $tmp4021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4019, &$s4020);
        panda$core$String* $tmp4022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4021, nonNullLabel4012);
        panda$core$String* $tmp4024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4022, &$s4023);
        panda$core$String* $tmp4025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4024, endLabel4015);
        panda$core$String* $tmp4027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4025, &$s4026);
        (($fn4028) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4027);
        (($fn4029) self->$class->vtable[6])(self, nonNullLabel4012, p_out);
        panda$core$Object* $tmp4032 = (($fn4031) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4034 = (($fn4033) self->$class->vtable[49])(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp4032), p_out);
        wrapped4030 = $tmp4034;
        panda$core$Object* $tmp4037 = (($fn4036) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4039 = (($fn4038) self->$class->vtable[50])(self, wrapped4030, ((org$pandalanguage$pandac$Type*) $tmp4037), p_dstType, p_out);
        nonNullValue4035 = $tmp4039;
        panda$core$String* $tmp4041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4040, endLabel4015);
        panda$core$String* $tmp4043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4041, &$s4042);
        (($fn4044) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4043);
        (($fn4045) self->$class->vtable[6])(self, endLabel4015, p_out);
        panda$core$String* $tmp4048 = (($fn4047) self->$class->vtable[4])(self);
        result4046 = $tmp4048;
        panda$core$String* $tmp4050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4049, result4046);
        panda$core$String* $tmp4052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4050, &$s4051);
        panda$core$String* $tmp4054 = (($fn4053) self->$class->vtable[15])(self, p_dstType);
        panda$core$String* $tmp4055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4052, $tmp4054);
        panda$core$String* $tmp4057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4055, &$s4056);
        panda$core$Object* $tmp4060 = (($fn4059) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4062 = (($fn4061) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp4060));
        panda$core$String* $tmp4063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4058, $tmp4062);
        panda$core$String* $tmp4065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4063, &$s4064);
        panda$core$String* $tmp4066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4057, $tmp4065);
        panda$core$String* $tmp4068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4067, testStart3995);
        panda$core$String* $tmp4070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4068, &$s4069);
        panda$core$String* $tmp4071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4070, nonNullValue4035);
        panda$core$String* $tmp4073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4071, &$s4072);
        panda$core$String* $tmp4074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4073, nonNullLabel4012);
        panda$core$String* $tmp4076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4074, &$s4075);
        panda$core$String* $tmp4077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4066, $tmp4076);
        (($fn4078) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4077);
        return result4046;
    }
    }
    panda$core$String* $tmp4081 = (($fn4080) self->$class->vtable[15])(self, p_dstType);
    targetType4079 = $tmp4081;
    panda$core$String* $tmp4084 = (($fn4083) self->$class->vtable[16])(self, p_dstType);
    wrapperTypeName4082 = $tmp4084;
    panda$core$String* $tmp4087 = (($fn4086) self->$class->vtable[17])(self, p_dstType);
    wrapperType4085 = $tmp4087;
    panda$core$String* $tmp4090 = (($fn4089) self->$class->vtable[4])(self);
    srcCast4088 = $tmp4090;
    panda$core$String* $tmp4092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4091, srcCast4088);
    panda$core$String* $tmp4094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4092, &$s4093);
    panda$core$String* $tmp4096 = (($fn4095) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp4097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4094, $tmp4096);
    panda$core$String* $tmp4099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4097, &$s4098);
    panda$core$String* $tmp4100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4099, p_value);
    panda$core$String* $tmp4102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4100, &$s4101);
    panda$core$String* $tmp4103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4102, wrapperType4085);
    panda$core$String* $tmp4105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4103, &$s4104);
    (($fn4106) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4105);
    panda$core$String* $tmp4109 = (($fn4108) self->$class->vtable[4])(self);
    load4107 = $tmp4109;
    panda$core$String* $tmp4111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4110, load4107);
    panda$core$String* $tmp4113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4111, &$s4112);
    panda$core$String* $tmp4114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4113, wrapperTypeName4082);
    panda$core$String* $tmp4116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4114, &$s4115);
    panda$core$String* $tmp4117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4116, wrapperType4085);
    panda$core$String* $tmp4119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4117, &$s4118);
    panda$core$String* $tmp4120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4119, srcCast4088);
    panda$core$String* $tmp4122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4120, &$s4121);
    (($fn4123) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4122);
    panda$core$String* $tmp4126 = (($fn4125) self->$class->vtable[4])(self);
    result4124 = $tmp4126;
    panda$core$String* $tmp4128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4127, result4124);
    panda$core$String* $tmp4130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4128, &$s4129);
    panda$core$String* $tmp4131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4130, wrapperTypeName4082);
    panda$core$String* $tmp4133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4131, &$s4132);
    panda$core$String* $tmp4134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4133, load4107);
    panda$core$String* $tmp4136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4134, &$s4135);
    panda$core$String* $tmp4137 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4136, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp4139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4137, &$s4138);
    (($fn4140) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4139);
    return result4124;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* nullableType4141;
    panda$core$String* result4144;
    panda$core$String* $tmp4143 = (($fn4142) self->$class->vtable[19])(self, p_dstType);
    nullableType4141 = $tmp4143;
    panda$core$String* $tmp4146 = (($fn4145) self->$class->vtable[4])(self);
    result4144 = $tmp4146;
    panda$core$String* $tmp4148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4147, result4144);
    panda$core$String* $tmp4150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4148, &$s4149);
    panda$core$String* $tmp4151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4150, nullableType4141);
    panda$core$String* $tmp4153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4151, &$s4152);
    panda$core$String* $tmp4156 = (($fn4155) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp4157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4154, $tmp4156);
    panda$core$String* $tmp4159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4157, &$s4158);
    panda$core$String* $tmp4161 = (($fn4160) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp4162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4159, $tmp4161);
    panda$core$String* $tmp4164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4162, &$s4163);
    panda$core$String* $tmp4165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4164, p_value);
    panda$core$String* $tmp4167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4165, &$s4166);
    panda$core$String* $tmp4168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4153, $tmp4167);
    (($fn4169) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4168);
    return result4144;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4170;
    panda$core$String* $tmp4172 = (($fn4171) self->$class->vtable[4])(self);
    result4170 = $tmp4172;
    panda$core$String* $tmp4174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4173, result4170);
    panda$core$String* $tmp4176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4174, &$s4175);
    panda$core$String* $tmp4178 = (($fn4177) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp4179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4176, $tmp4178);
    panda$core$String* $tmp4181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4179, &$s4180);
    panda$core$String* $tmp4182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4181, p_value);
    panda$core$String* $tmp4184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4182, &$s4183);
    (($fn4185) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4184);
    return result4170;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op4186;
    panda$core$Int64 size14189;
    panda$core$Int64 size24192;
    org$pandalanguage$pandac$ClassDecl* srcClass4201;
    org$pandalanguage$pandac$ClassDecl* targetClass4204;
    panda$core$String* srcType4258;
    panda$core$String* dstType4261;
    panda$core$String* result4265;
    panda$core$Bit $tmp4188 = (($fn4187) p_target->$class->vtable[7])(p_target);
    if ($tmp4188.value) {
    {
        panda$core$Int64 $tmp4191 = (($fn4190) self->$class->vtable[10])(self, p_src);
        size14189 = $tmp4191;
        panda$core$Int64 $tmp4194 = (($fn4193) self->$class->vtable[10])(self, p_target);
        size24192 = $tmp4194;
        panda$core$Bit $tmp4195 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size14189, size24192);
        if ($tmp4195.value) {
        {
            op4186 = &$s4196;
        }
        }
        else {
        panda$core$Bit $tmp4197 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size14189, size24192);
        if ($tmp4197.value) {
        {
            panda$core$Bit $tmp4198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp4198.value) {
            {
                op4186 = &$s4199;
            }
            }
            else {
            {
                op4186 = &$s4200;
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
        org$pandalanguage$pandac$ClassDecl* $tmp4203 = (($fn4202) self->compiler->$class->vtable[13])(self->compiler, p_src);
        srcClass4201 = $tmp4203;
        org$pandalanguage$pandac$ClassDecl* $tmp4206 = (($fn4205) self->compiler->$class->vtable[13])(self->compiler, p_target);
        targetClass4204 = $tmp4206;
        panda$core$Bit $tmp4209 = (($fn4208) self->compiler->$class->vtable[9])(self->compiler, srcClass4201);
        bool $tmp4207 = $tmp4209.value;
        if (!$tmp4207) goto $l4210;
        panda$core$Bit $tmp4212 = (($fn4211) self->compiler->$class->vtable[9])(self->compiler, targetClass4204);
        panda$core$Bit $tmp4213 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4212);
        $tmp4207 = $tmp4213.value;
        $l4210:;
        panda$core$Bit $tmp4214 = { $tmp4207 };
        if ($tmp4214.value) {
        {
            panda$core$String* $tmp4216 = (($fn4215) self->$class->vtable[47])(self, p_value, p_src, p_target, p_out);
            return $tmp4216;
        }
        }
        else {
        panda$core$Bit $tmp4219 = (($fn4218) self->compiler->$class->vtable[9])(self->compiler, srcClass4201);
        panda$core$Bit $tmp4220 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4219);
        bool $tmp4217 = $tmp4220.value;
        if (!$tmp4217) goto $l4221;
        panda$core$Bit $tmp4223 = (($fn4222) self->compiler->$class->vtable[9])(self->compiler, targetClass4204);
        $tmp4217 = $tmp4223.value;
        $l4221:;
        panda$core$Bit $tmp4224 = { $tmp4217 };
        if ($tmp4224.value) {
        {
            panda$core$String* $tmp4226 = (($fn4225) self->$class->vtable[49])(self, p_value, p_src, p_target, p_out);
            return $tmp4226;
        }
        }
        else {
        panda$core$Bit $tmp4230 = (($fn4229) self->compiler->$class->vtable[9])(self->compiler, srcClass4201);
        bool $tmp4228 = $tmp4230.value;
        if (!$tmp4228) goto $l4231;
        panda$core$Bit $tmp4232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp4228 = $tmp4232.value;
        $l4231:;
        panda$core$Bit $tmp4233 = { $tmp4228 };
        bool $tmp4227 = $tmp4233.value;
        if (!$tmp4227) goto $l4234;
        panda$core$Object* $tmp4236 = (($fn4235) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4238 = (($fn4237) ((org$pandalanguage$pandac$Type*) $tmp4236)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp4236), ((panda$core$Object*) p_src));
        $tmp4227 = $tmp4238.value;
        $l4234:;
        panda$core$Bit $tmp4239 = { $tmp4227 };
        if ($tmp4239.value) {
        {
            panda$core$String* $tmp4241 = (($fn4240) self->$class->vtable[50])(self, p_value, p_src, p_target, p_out);
            return $tmp4241;
        }
        }
        else {
        panda$core$Bit $tmp4245 = (($fn4244) self->compiler->$class->vtable[9])(self->compiler, targetClass4204);
        bool $tmp4243 = $tmp4245.value;
        if (!$tmp4243) goto $l4246;
        panda$core$Bit $tmp4247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp4243 = $tmp4247.value;
        $l4246:;
        panda$core$Bit $tmp4248 = { $tmp4243 };
        bool $tmp4242 = $tmp4248.value;
        if (!$tmp4242) goto $l4249;
        panda$core$Object* $tmp4251 = (($fn4250) p_src->subtypes->$class->vtable[2])(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4253 = (($fn4252) ((org$pandalanguage$pandac$Type*) $tmp4251)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp4251), ((panda$core$Object*) p_target));
        $tmp4242 = $tmp4253.value;
        $l4249:;
        panda$core$Bit $tmp4254 = { $tmp4242 };
        if ($tmp4254.value) {
        {
            panda$core$String* $tmp4256 = (($fn4255) self->$class->vtable[51])(self, p_value, p_src, p_target, p_out);
            return $tmp4256;
        }
        }
        }
        }
        }
        op4186 = &$s4257;
    }
    }
    panda$core$String* $tmp4260 = (($fn4259) self->$class->vtable[15])(self, p_src);
    srcType4258 = $tmp4260;
    panda$core$String* $tmp4263 = (($fn4262) self->$class->vtable[15])(self, p_target);
    dstType4261 = $tmp4263;
    panda$core$Bit $tmp4264 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType4258, dstType4261);
    if ($tmp4264.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp4267 = (($fn4266) self->$class->vtable[4])(self);
    result4265 = $tmp4267;
    panda$core$String* $tmp4269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4268, result4265);
    panda$core$String* $tmp4271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4269, &$s4270);
    panda$core$String* $tmp4272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4271, op4186);
    panda$core$String* $tmp4274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4272, &$s4273);
    panda$core$String* $tmp4275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4274, srcType4258);
    panda$core$String* $tmp4277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4275, &$s4276);
    panda$core$String* $tmp4278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4277, p_value);
    panda$core$String* $tmp4280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4278, &$s4279);
    panda$core$String* $tmp4281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4280, dstType4261);
    panda$core$String* $tmp4283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4281, &$s4282);
    (($fn4284) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4283);
    return result4265;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4285;
    panda$core$Object* $tmp4286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4288 = (($fn4287) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4286), p_out);
    base4285 = $tmp4288;
    panda$core$Object* $tmp4289 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4291 = (($fn4290) self->$class->vtable[52])(self, base4285, ((org$pandalanguage$pandac$IRNode*) $tmp4289)->type, p_cast->type, p_out);
    return $tmp4291;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4292;
    panda$core$String* t4295;
    panda$core$String* value4300;
    panda$core$String* result4312;
    org$pandalanguage$pandac$FieldDecl* lastField4315;
    panda$core$String* value4340;
    panda$core$String* result4352;
    org$pandalanguage$pandac$FieldDecl* lastField4355;
    panda$core$String* alloca4380;
    panda$core$String* result4402;
    panda$core$String* callRef4419;
    panda$core$String* result4432;
    panda$core$String* classPtr4448;
    panda$core$String* className4451;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc4475;
    org$pandalanguage$pandac$ClassDecl* $tmp4294 = (($fn4293) self->compiler->$class->vtable[13])(self->compiler, p_construct->type);
    cl4292 = $tmp4294;
    panda$core$String* $tmp4297 = (($fn4296) self->$class->vtable[15])(self, p_construct->type);
    t4295 = $tmp4297;
    panda$core$Bit $tmp4299 = (($fn4298) p_construct->type->$class->vtable[6])(p_construct->type);
    if ($tmp4299.value) {
    {
        panda$core$Object* $tmp4301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4301)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4304 = (($fn4303) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4302), p_out);
        value4300 = $tmp4304;
        panda$core$Object* $tmp4305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4306 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4305)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4306)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp4307.value) {
        {
            panda$core$String* $tmp4309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4308, value4300);
            panda$core$String* $tmp4311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4309, &$s4310);
            return $tmp4311;
        }
        }
        panda$core$String* $tmp4314 = (($fn4313) self->$class->vtable[4])(self);
        result4312 = $tmp4314;
        panda$core$Int64 $tmp4316 = panda$collections$Array$get_count$R$panda$core$Int64(cl4292->fields);
        panda$core$Int64 $tmp4317 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4316, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4318 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl4292->fields, $tmp4317);
        lastField4315 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4318);
        panda$core$String* $tmp4320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4319, result4312);
        panda$core$String* $tmp4322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4320, &$s4321);
        panda$core$String* $tmp4323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4322, t4295);
        panda$core$String* $tmp4325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4323, &$s4324);
        panda$core$String* $tmp4327 = (($fn4326) self->$class->vtable[15])(self, lastField4315->type);
        panda$core$String* $tmp4328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4325, $tmp4327);
        panda$core$String* $tmp4330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4328, &$s4329);
        panda$core$String* $tmp4332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4331, value4300);
        panda$core$String* $tmp4334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4332, &$s4333);
        panda$core$String* $tmp4335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4330, $tmp4334);
        (($fn4336) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4335);
        return result4312;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4337 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4339 = (($fn4338) p_construct->type->$class->vtable[4])(p_construct->type, ((panda$core$Object*) $tmp4337));
    if ($tmp4339.value) {
    {
        panda$core$Object* $tmp4341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4342 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4341)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4344 = (($fn4343) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4342), p_out);
        value4340 = $tmp4344;
        panda$core$Object* $tmp4345 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4345)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4346)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp4347.value) {
        {
            panda$core$String* $tmp4349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4348, value4340);
            panda$core$String* $tmp4351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4349, &$s4350);
            return $tmp4351;
        }
        }
        panda$core$String* $tmp4354 = (($fn4353) self->$class->vtable[4])(self);
        result4352 = $tmp4354;
        panda$core$Int64 $tmp4356 = panda$collections$Array$get_count$R$panda$core$Int64(cl4292->fields);
        panda$core$Int64 $tmp4357 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4356, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4358 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl4292->fields, $tmp4357);
        lastField4355 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4358);
        panda$core$String* $tmp4360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4359, result4352);
        panda$core$String* $tmp4362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4360, &$s4361);
        panda$core$String* $tmp4363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4362, t4295);
        panda$core$String* $tmp4365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4363, &$s4364);
        panda$core$String* $tmp4367 = (($fn4366) self->$class->vtable[15])(self, lastField4355->type);
        panda$core$String* $tmp4368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4365, $tmp4367);
        panda$core$String* $tmp4370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4368, &$s4369);
        panda$core$String* $tmp4372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4371, value4340);
        panda$core$String* $tmp4374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4372, &$s4373);
        panda$core$String* $tmp4375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4370, $tmp4374);
        (($fn4376) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4375);
        return result4352;
    }
    }
    panda$core$Bit $tmp4378 = (($fn4377) self->compiler->$class->vtable[9])(self->compiler, cl4292);
    if ($tmp4378.value) {
    {
        panda$core$Int64 $tmp4379 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4379;
        panda$core$String* $tmp4382 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4381, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp4384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4382, &$s4383);
        alloca4380 = $tmp4384;
        panda$core$String* $tmp4386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4385, alloca4380);
        panda$core$String* $tmp4388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4386, &$s4387);
        panda$core$String* $tmp4389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4388, t4295);
        panda$core$String* $tmp4391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4389, &$s4390);
        (($fn4392) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4391);
        panda$core$Object* $tmp4393 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4394, t4295);
        panda$core$String* $tmp4397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4395, &$s4396);
        panda$core$String* $tmp4398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4397, alloca4380);
        panda$core$String* $tmp4400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4398, &$s4399);
        (($fn4401) self->$class->vtable[70])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4393), $tmp4400, p_out);
        panda$core$String* $tmp4404 = (($fn4403) self->$class->vtable[4])(self);
        result4402 = $tmp4404;
        panda$core$String* $tmp4406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4405, result4402);
        panda$core$String* $tmp4408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4406, &$s4407);
        panda$core$String* $tmp4409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4408, t4295);
        panda$core$String* $tmp4411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4409, &$s4410);
        panda$core$String* $tmp4412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4411, t4295);
        panda$core$String* $tmp4414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4412, &$s4413);
        panda$core$String* $tmp4415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4414, alloca4380);
        panda$core$String* $tmp4417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4415, &$s4416);
        (($fn4418) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4417);
        return result4402;
    }
    }
    panda$core$String* $tmp4421 = (($fn4420) self->$class->vtable[4])(self);
    callRef4419 = $tmp4421;
    panda$core$String* $tmp4423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4422, callRef4419);
    panda$core$String* $tmp4425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4423, &$s4424);
    panda$core$Int64 $tmp4427 = (($fn4426) self->$class->vtable[10])(self, p_construct->type);
    panda$core$String* $tmp4428 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4425, ((panda$core$Object*) wrap_panda$core$Int64($tmp4427)));
    panda$core$String* $tmp4430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4428, &$s4429);
    (($fn4431) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4430);
    panda$core$String* $tmp4434 = (($fn4433) self->$class->vtable[4])(self);
    result4432 = $tmp4434;
    panda$core$String* $tmp4436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4435, result4432);
    panda$core$String* $tmp4438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4436, &$s4437);
    panda$core$String* $tmp4439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4438, callRef4419);
    panda$core$String* $tmp4441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4439, &$s4440);
    panda$core$String* $tmp4443 = (($fn4442) self->$class->vtable[15])(self, p_construct->type);
    panda$core$String* $tmp4444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4441, $tmp4443);
    panda$core$String* $tmp4446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4444, &$s4445);
    (($fn4447) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4446);
    panda$core$String* $tmp4450 = (($fn4449) self->$class->vtable[4])(self);
    classPtr4448 = $tmp4450;
    panda$core$Bit $tmp4452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp4452.value) {
    {
        panda$core$Object* $tmp4454 = (($fn4453) p_construct->type->subtypes->$class->vtable[2])(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4456 = (($fn4455) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$Type*) $tmp4454));
        className4451 = $tmp4456;
    }
    }
    else {
    {
        panda$core$String* $tmp4458 = (($fn4457) self->$class->vtable[14])(self, p_construct->type);
        className4451 = $tmp4458;
    }
    }
    panda$core$String* $tmp4460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4459, classPtr4448);
    panda$core$String* $tmp4462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4460, &$s4461);
    panda$core$String* $tmp4463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4462, className4451);
    panda$core$String* $tmp4465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4463, &$s4464);
    panda$core$String* $tmp4466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4465, t4295);
    panda$core$String* $tmp4468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4466, &$s4467);
    panda$core$String* $tmp4469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4468, result4432);
    panda$core$String* $tmp4471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4469, &$s4470);
    panda$core$String* $tmp4473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4471, &$s4472);
    (($fn4474) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4473);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp4477 = (($fn4476) self->$class->vtable[26])(self, cl4292);
    cc4475 = $tmp4477;
    panda$core$String* $tmp4479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4478, cc4475->type);
    panda$core$String* $tmp4481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4479, &$s4480);
    panda$core$String* $tmp4482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4481, cc4475->name);
    panda$core$String* $tmp4484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4482, &$s4483);
    panda$core$String* $tmp4486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4485, classPtr4448);
    panda$core$String* $tmp4488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4486, &$s4487);
    panda$core$String* $tmp4489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4484, $tmp4488);
    (($fn4490) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4489);
    panda$core$Object* $tmp4491 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4492, t4295);
    panda$core$String* $tmp4495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4493, &$s4494);
    panda$core$String* $tmp4496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4495, result4432);
    panda$core$String* $tmp4498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4496, &$s4497);
    (($fn4499) self->$class->vtable[70])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4491), $tmp4498, p_out);
    return result4432;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4500 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp4500;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4502 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp4503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4501, $tmp4502);
    return $tmp4503;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s4504;
    }
    }
    return &$s4505;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4509;
    panda$core$String* t4512;
    panda$core$Bit $tmp4506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp4506.value) {
    {
        panda$core$String* $tmp4508 = (($fn4507) self->$class->vtable[29])(self, p_v);
        return $tmp4508;
    }
    }
    panda$core$String* $tmp4511 = (($fn4510) self->$class->vtable[4])(self);
    result4509 = $tmp4511;
    panda$core$String* $tmp4514 = (($fn4513) self->$class->vtable[15])(self, p_v->type);
    t4512 = $tmp4514;
    panda$core$String* $tmp4516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4515, result4509);
    panda$core$String* $tmp4518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4516, &$s4517);
    panda$core$String* $tmp4519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4518, t4512);
    panda$core$String* $tmp4521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4519, &$s4520);
    panda$core$String* $tmp4522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4521, t4512);
    panda$core$String* $tmp4524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4522, &$s4523);
    panda$core$String* $tmp4526 = (($fn4525) self->$class->vtable[29])(self, p_v);
    panda$core$String* $tmp4527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4524, $tmp4526);
    panda$core$String* $tmp4529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4527, &$s4528);
    (($fn4530) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4529);
    return result4509;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* chars4532;
    panda$core$String* charsType4537;
    panda$core$String* separator4555;
    panda$collections$Iterator* c$Iter4557;
    panda$core$Char8 c4570;
    panda$core$String* result4588;
    org$pandalanguage$pandac$ClassDecl* string4593;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc4597;
    panda$core$Int64 $tmp4531 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4531;
    panda$core$String* $tmp4534 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4533, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4534, &$s4535);
    chars4532 = $tmp4536;
    panda$collections$ListView* $tmp4539 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4540 = ((panda$collections$CollectionView*) $tmp4539)->$class->itable;
    while ($tmp4540->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4540 = $tmp4540->next;
    }
    $fn4542 $tmp4541 = $tmp4540->methods[0];
    panda$core$Int64 $tmp4543 = $tmp4541(((panda$collections$CollectionView*) $tmp4539));
    panda$core$String* $tmp4544 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4538, ((panda$core$Object*) wrap_panda$core$Int64($tmp4543)));
    panda$core$String* $tmp4546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4544, &$s4545);
    charsType4537 = $tmp4546;
    panda$core$String* $tmp4548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4547, chars4532);
    panda$core$String* $tmp4550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4548, &$s4549);
    panda$core$String* $tmp4551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4550, charsType4537);
    panda$core$String* $tmp4553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4551, &$s4552);
    (($fn4554) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4553);
    separator4555 = &$s4556;
    {
        panda$collections$ListView* $tmp4558 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp4559 = ((panda$collections$Iterable*) $tmp4558)->$class->itable;
        while ($tmp4559->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4559 = $tmp4559->next;
        }
        $fn4561 $tmp4560 = $tmp4559->methods[0];
        panda$collections$Iterator* $tmp4562 = $tmp4560(((panda$collections$Iterable*) $tmp4558));
        c$Iter4557 = $tmp4562;
        $l4563:;
        ITable* $tmp4565 = c$Iter4557->$class->itable;
        while ($tmp4565->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4565 = $tmp4565->next;
        }
        $fn4567 $tmp4566 = $tmp4565->methods[0];
        panda$core$Bit $tmp4568 = $tmp4566(c$Iter4557);
        panda$core$Bit $tmp4569 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4568);
        if (!$tmp4569.value) goto $l4564;
        {
            ITable* $tmp4571 = c$Iter4557->$class->itable;
            while ($tmp4571->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4571 = $tmp4571->next;
            }
            $fn4573 $tmp4572 = $tmp4571->methods[1];
            panda$core$Object* $tmp4574 = $tmp4572(c$Iter4557);
            c4570 = ((panda$core$Char8$wrapper*) $tmp4574)->value;
            panda$core$String* $tmp4576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4575, separator4555);
            panda$core$String* $tmp4578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4576, &$s4577);
            panda$core$Int8 $tmp4579 = panda$core$Char8$convert$R$panda$core$Int8(c4570);
            panda$core$String* $tmp4580 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4578, ((panda$core$Object*) wrap_panda$core$Int8($tmp4579)));
            panda$core$String* $tmp4582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4580, &$s4581);
            (($fn4583) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4582);
            separator4555 = &$s4584;
        }
        goto $l4563;
        $l4564:;
    }
    (($fn4586) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s4585);
    panda$core$Int64 $tmp4587 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4587;
    panda$core$String* $tmp4590 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4589, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4590, &$s4591);
    result4588 = $tmp4592;
    org$pandalanguage$pandac$Type* $tmp4594 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4596 = (($fn4595) self->compiler->$class->vtable[13])(self->compiler, $tmp4594);
    string4593 = $tmp4596;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp4599 = (($fn4598) self->$class->vtable[26])(self, string4593);
    cc4597 = $tmp4599;
    panda$core$String* $tmp4601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4600, result4588);
    panda$core$String* $tmp4603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4601, &$s4602);
    panda$core$String* $tmp4605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4604, cc4597->type);
    panda$core$String* $tmp4607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4605, &$s4606);
    panda$core$String* $tmp4608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4607, cc4597->name);
    panda$core$String* $tmp4610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4608, &$s4609);
    panda$core$String* $tmp4611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4603, $tmp4610);
    panda$core$String* $tmp4613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4611, &$s4612);
    panda$core$String* $tmp4615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4614, charsType4537);
    panda$core$String* $tmp4617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4615, &$s4616);
    panda$core$String* $tmp4618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4617, chars4532);
    panda$core$String* $tmp4620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4618, &$s4619);
    panda$core$String* $tmp4621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4613, $tmp4620);
    panda$core$String* $tmp4623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4621, &$s4622);
    panda$collections$ListView* $tmp4625 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4626 = ((panda$collections$CollectionView*) $tmp4625)->$class->itable;
    while ($tmp4626->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4626 = $tmp4626->next;
    }
    $fn4628 $tmp4627 = $tmp4626->methods[0];
    panda$core$Int64 $tmp4629 = $tmp4627(((panda$collections$CollectionView*) $tmp4625));
    panda$core$String* $tmp4630 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4624, ((panda$core$Object*) wrap_panda$core$Int64($tmp4629)));
    panda$core$String* $tmp4632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4630, &$s4631);
    panda$core$String* $tmp4633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4623, $tmp4632);
    (($fn4634) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp4633);
    return result4588;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp4636 = (($fn4635) self->inlineContext->$class->vtable[7])(self->inlineContext);
    panda$core$Bit $tmp4637 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4636, ((panda$core$Int64) { 0 }));
    if ($tmp4637.value) {
    {
        panda$core$Object* $tmp4639 = (($fn4638) self->inlineContext->$class->vtable[4])(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp4639)->selfRef;
    }
    }
    return &$s4640;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4641;
    panda$core$String* $tmp4643 = (($fn4642) self->$class->vtable[4])(self);
    result4641 = $tmp4643;
    panda$core$String* $tmp4645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4644, result4641);
    panda$core$String* $tmp4647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4645, &$s4646);
    org$pandalanguage$pandac$Type* $tmp4649 = (($fn4648) self->currentMethod->owner->$class->vtable[3])(self->currentMethod->owner);
    panda$core$String* $tmp4651 = (($fn4650) self->$class->vtable[15])(self, $tmp4649);
    panda$core$String* $tmp4652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4647, $tmp4651);
    panda$core$String* $tmp4654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4652, &$s4653);
    panda$core$String* $tmp4656 = (($fn4655) self->$class->vtable[15])(self, p_s->type);
    panda$core$String* $tmp4657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4654, $tmp4656);
    (($fn4658) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4657);
    return result4641;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4659;
    org$pandalanguage$pandac$ClassDecl* cl4663;
    panda$core$String* resultValue4667;
    panda$core$String* field4673;
    panda$core$String* result4704;
    panda$core$Object* $tmp4660 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4662 = (($fn4661) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4660), p_out);
    value4659 = $tmp4662;
    panda$core$Object* $tmp4664 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4666 = (($fn4665) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4664)->type);
    cl4663 = $tmp4666;
    panda$core$Bit $tmp4669 = (($fn4668) self->compiler->$class->vtable[9])(self->compiler, cl4663);
    if ($tmp4669.value) {
    {
        panda$core$Object* $tmp4670 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4671 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4670)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4671.value) {
        {
            return &$s4672;
        }
        }
        panda$core$String* $tmp4675 = (($fn4674) self->$class->vtable[4])(self);
        field4673 = $tmp4675;
        panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4676, field4673);
        panda$core$String* $tmp4679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4677, &$s4678);
        panda$core$String* $tmp4680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4679, value4659);
        panda$core$String* $tmp4682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4680, &$s4681);
        (($fn4683) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4682);
        panda$core$String* $tmp4685 = (($fn4684) self->$class->vtable[4])(self);
        resultValue4667 = $tmp4685;
        panda$core$String* $tmp4687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4686, resultValue4667);
        panda$core$String* $tmp4689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4687, &$s4688);
        panda$core$String* $tmp4690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4689, field4673);
        panda$core$String* $tmp4692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4690, &$s4691);
        (($fn4693) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4692);
    }
    }
    else {
    {
        panda$core$String* $tmp4695 = (($fn4694) self->$class->vtable[4])(self);
        resultValue4667 = $tmp4695;
        panda$core$String* $tmp4697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4696, resultValue4667);
        panda$core$String* $tmp4699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4697, &$s4698);
        panda$core$String* $tmp4700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4699, value4659);
        panda$core$String* $tmp4702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4700, &$s4701);
        (($fn4703) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4702);
    }
    }
    panda$core$String* $tmp4706 = (($fn4705) self->$class->vtable[4])(self);
    result4704 = $tmp4706;
    panda$core$String* $tmp4708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4707, result4704);
    panda$core$String* $tmp4710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4708, &$s4709);
    panda$core$String* $tmp4711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4710, resultValue4667);
    panda$core$String* $tmp4713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4711, &$s4712);
    (($fn4714) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4713);
    return result4704;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4715;
    org$pandalanguage$pandac$ClassDecl* cl4719;
    panda$core$String* resultValue4723;
    panda$core$String* result4749;
    panda$core$Object* $tmp4716 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4718 = (($fn4717) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4716), p_out);
    value4715 = $tmp4718;
    panda$core$Object* $tmp4720 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4722 = (($fn4721) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4720)->type);
    cl4719 = $tmp4722;
    panda$core$Bit $tmp4725 = (($fn4724) self->compiler->$class->vtable[9])(self->compiler, cl4719);
    if ($tmp4725.value) {
    {
        panda$core$Object* $tmp4726 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4727 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4726)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4727.value) {
        {
            return &$s4728;
        }
        }
        panda$core$String* $tmp4730 = (($fn4729) self->$class->vtable[4])(self);
        resultValue4723 = $tmp4730;
        panda$core$String* $tmp4732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4731, resultValue4723);
        panda$core$String* $tmp4734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4732, &$s4733);
        panda$core$String* $tmp4735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4734, value4715);
        panda$core$String* $tmp4737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4735, &$s4736);
        (($fn4738) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4737);
    }
    }
    else {
    {
        panda$core$String* $tmp4740 = (($fn4739) self->$class->vtable[4])(self);
        resultValue4723 = $tmp4740;
        panda$core$String* $tmp4742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4741, resultValue4723);
        panda$core$String* $tmp4744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4742, &$s4743);
        panda$core$String* $tmp4745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4744, value4715);
        panda$core$String* $tmp4747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4745, &$s4746);
        (($fn4748) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4747);
    }
    }
    panda$core$String* $tmp4751 = (($fn4750) self->$class->vtable[4])(self);
    result4749 = $tmp4751;
    panda$core$String* $tmp4753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4752, result4749);
    panda$core$String* $tmp4755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4753, &$s4754);
    panda$core$String* $tmp4756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4755, resultValue4723);
    panda$core$String* $tmp4758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4756, &$s4757);
    (($fn4759) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4758);
    return result4749;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4760;
    panda$core$Object* $tmp4762 = (($fn4761) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4764 = (($fn4763) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4762));
    cl4760 = $tmp4764;
    panda$core$Bit $tmp4766 = (($fn4765) self->compiler->$class->vtable[9])(self->compiler, cl4760);
    if ($tmp4766.value) {
    {
        panda$core$Object* $tmp4769 = (($fn4768) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4771 = (($fn4770) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp4769));
        panda$core$String* $tmp4772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4767, $tmp4771);
        panda$core$String* $tmp4774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4772, &$s4773);
        return $tmp4774;
    }
    }
    else {
    {
        return &$s4775;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4776;
    panda$core$String* result4780;
    panda$core$Int64 $match$717134783;
    panda$core$Object* $tmp4777 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4779 = (($fn4778) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4777), p_out);
    base4776 = $tmp4779;
    panda$core$String* $tmp4782 = (($fn4781) self->$class->vtable[4])(self);
    result4780 = $tmp4782;
    {
        panda$core$Int64 $tmp4784 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
        $match$717134783 = $tmp4784;
        panda$core$Bit $tmp4785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$717134783, ((panda$core$Int64) { 52 }));
        if ($tmp4785.value) {
        {
            panda$core$String* $tmp4787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4786, result4780);
            panda$core$String* $tmp4789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4787, &$s4788);
            panda$core$String* $tmp4791 = (($fn4790) self->$class->vtable[15])(self, p_expr->type);
            panda$core$String* $tmp4792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4789, $tmp4791);
            panda$core$String* $tmp4794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4792, &$s4793);
            panda$core$String* $tmp4795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4794, base4776);
            panda$core$String* $tmp4797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4795, &$s4796);
            (($fn4798) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4797);
            return result4780;
        }
        }
        else {
        panda$core$Bit $tmp4800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$717134783, ((panda$core$Int64) { 49 }));
        bool $tmp4799 = $tmp4800.value;
        if ($tmp4799) goto $l4801;
        panda$core$Bit $tmp4802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$717134783, ((panda$core$Int64) { 50 }));
        $tmp4799 = $tmp4802.value;
        $l4801:;
        panda$core$Bit $tmp4803 = { $tmp4799 };
        if ($tmp4803.value) {
        {
            panda$core$String* $tmp4805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4804, result4780);
            panda$core$String* $tmp4807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4805, &$s4806);
            panda$core$String* $tmp4809 = (($fn4808) self->$class->vtable[15])(self, p_expr->type);
            panda$core$String* $tmp4810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4807, $tmp4809);
            panda$core$String* $tmp4812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4810, &$s4811);
            panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4812, base4776);
            panda$core$String* $tmp4815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4813, &$s4814);
            (($fn4816) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4815);
            return result4780;
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
    panda$core$Int64 $match$722344817;
    panda$core$String* value4855;
    panda$core$String* result4861;
    {
        $match$722344817 = p_expr->kind;
        panda$core$Bit $tmp4818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1023 }));
        if ($tmp4818.value) {
        {
            panda$core$String* $tmp4820 = (($fn4819) self->$class->vtable[39])(self, p_expr, p_out);
            return $tmp4820;
        }
        }
        else {
        panda$core$Bit $tmp4821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1005 }));
        if ($tmp4821.value) {
        {
            panda$core$String* $tmp4823 = (($fn4822) self->$class->vtable[46])(self, p_expr, p_out);
            return $tmp4823;
        }
        }
        else {
        panda$core$Bit $tmp4824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1009 }));
        if ($tmp4824.value) {
        {
            panda$core$String* $tmp4826 = (($fn4825) self->$class->vtable[53])(self, p_expr, p_out);
            return $tmp4826;
        }
        }
        else {
        panda$core$Bit $tmp4827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1004 }));
        if ($tmp4827.value) {
        {
            panda$core$String* $tmp4829 = (($fn4828) self->$class->vtable[55])(self, p_expr, p_out);
            return $tmp4829;
        }
        }
        else {
        panda$core$Bit $tmp4830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1032 }));
        if ($tmp4830.value) {
        {
            panda$core$String* $tmp4832 = (($fn4831) self->$class->vtable[56])(self, p_expr, p_out);
            return $tmp4832;
        }
        }
        else {
        panda$core$Bit $tmp4833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1011 }));
        if ($tmp4833.value) {
        {
            panda$core$String* $tmp4835 = (($fn4834) self->$class->vtable[57])(self, p_expr, p_out);
            return $tmp4835;
        }
        }
        else {
        panda$core$Bit $tmp4836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1010 }));
        if ($tmp4836.value) {
        {
            panda$core$String* $tmp4838 = (($fn4837) self->$class->vtable[54])(self, p_expr, p_out);
            return $tmp4838;
        }
        }
        else {
        panda$core$Bit $tmp4839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1016 }));
        if ($tmp4839.value) {
        {
            panda$core$String* $tmp4841 = (($fn4840) self->$class->vtable[58])(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4841;
        }
        }
        else {
        panda$core$Bit $tmp4842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1026 }));
        if ($tmp4842.value) {
        {
            panda$core$String* $tmp4844 = (($fn4843) self->$class->vtable[48])(self, p_expr, p_out);
            return $tmp4844;
        }
        }
        else {
        panda$core$Bit $tmp4845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1033 }));
        if ($tmp4845.value) {
        {
            panda$core$String* $tmp4847 = (($fn4846) self->$class->vtable[59])(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4847;
        }
        }
        else {
        panda$core$Bit $tmp4848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1025 }));
        if ($tmp4848.value) {
        {
            panda$core$String* $tmp4850 = (($fn4849) self->$class->vtable[60])(self, p_expr, p_out);
            return $tmp4850;
        }
        }
        else {
        panda$core$Bit $tmp4851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1024 }));
        if ($tmp4851.value) {
        {
            panda$core$String* $tmp4853 = (($fn4852) self->$class->vtable[61])(self, p_expr, p_out);
            return $tmp4853;
        }
        }
        else {
        panda$core$Bit $tmp4854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1027 }));
        if ($tmp4854.value) {
        {
            panda$core$Object* $tmp4856 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4858 = (($fn4857) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4856), p_out);
            value4855 = $tmp4858;
            (($fn4859) self->reusedValues->$class->vtable[5])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value))), ((panda$core$Object*) value4855));
            return value4855;
        }
        }
        else {
        panda$core$Bit $tmp4860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1028 }));
        if ($tmp4860.value) {
        {
            panda$core$Object* $tmp4863 = (($fn4862) self->reusedValues->$class->vtable[3])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value))));
            result4861 = ((panda$core$String*) $tmp4863);
            return result4861;
        }
        }
        else {
        panda$core$Bit $tmp4864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1030 }));
        if ($tmp4864.value) {
        {
            panda$core$String* $tmp4866 = (($fn4865) self->$class->vtable[64])(self, p_expr, p_out);
            return $tmp4866;
        }
        }
        else {
        panda$core$Bit $tmp4867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1035 }));
        if ($tmp4867.value) {
        {
            panda$core$String* $tmp4869 = (($fn4868) self->$class->vtable[62])(self, p_expr, p_out);
            return $tmp4869;
        }
        }
        else {
        panda$core$Bit $tmp4870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1036 }));
        if ($tmp4870.value) {
        {
            panda$core$String* $tmp4872 = (($fn4871) self->$class->vtable[63])(self, p_expr, p_out);
            return $tmp4872;
        }
        }
        else {
        panda$core$Bit $tmp4873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722344817, ((panda$core$Int64) { 1041 }));
        if ($tmp4873.value) {
        {
            panda$core$String* $tmp4875 = (($fn4874) self->$class->vtable[65])(self, p_expr, p_out);
            return $tmp4875;
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
    panda$core$String* $tmp4878 = (($fn4877) self->$class->vtable[15])(self, p_expr->type);
    panda$core$String* $tmp4879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4876, $tmp4878);
    panda$core$String* $tmp4881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4879, &$s4880);
    panda$core$String* $tmp4883 = (($fn4882) self->$class->vtable[66])(self, p_expr, p_out);
    panda$core$String* $tmp4884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4881, $tmp4883);
    panda$core$String* $tmp4886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4884, &$s4885);
    return $tmp4886;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4888;
    org$pandalanguage$pandac$IRNode* s4900;
    panda$core$Int64 $tmp4887 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4887;
    {
        ITable* $tmp4889 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4889->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4889 = $tmp4889->next;
        }
        $fn4891 $tmp4890 = $tmp4889->methods[0];
        panda$collections$Iterator* $tmp4892 = $tmp4890(((panda$collections$Iterable*) p_block->children));
        s$Iter4888 = $tmp4892;
        $l4893:;
        ITable* $tmp4895 = s$Iter4888->$class->itable;
        while ($tmp4895->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4895 = $tmp4895->next;
        }
        $fn4897 $tmp4896 = $tmp4895->methods[0];
        panda$core$Bit $tmp4898 = $tmp4896(s$Iter4888);
        panda$core$Bit $tmp4899 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4898);
        if (!$tmp4899.value) goto $l4894;
        {
            ITable* $tmp4901 = s$Iter4888->$class->itable;
            while ($tmp4901->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4901 = $tmp4901->next;
            }
            $fn4903 $tmp4902 = $tmp4901->methods[1];
            panda$core$Object* $tmp4904 = $tmp4902(s$Iter4888);
            s4900 = ((org$pandalanguage$pandac$IRNode*) $tmp4904);
            (($fn4905) self->$class->vtable[85])(self, s4900, p_out);
        }
        goto $l4893;
        $l4894:;
    }
    panda$core$Int64 $tmp4906 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4906;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4907;
    panda$core$String* $match$747694908;
    panda$core$String* ptr4911;
    panda$core$String* arg4915;
    org$pandalanguage$pandac$Type* baseType4931;
    panda$core$String* base4937;
    panda$core$String* indexStruct4941;
    panda$core$String* index4945;
    panda$core$String* value4956;
    panda$core$String* ptr4962;
    panda$core$String* ptr5002;
    panda$core$String* cast5006;
    m4907 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$747694908 = ((org$pandalanguage$pandac$Symbol*) m4907->value)->name;
        panda$core$Bit $tmp4910 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$747694908, &$s4909);
        if ($tmp4910.value) {
        {
            panda$core$Object* $tmp4912 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4914 = (($fn4913) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4912), p_out);
            ptr4911 = $tmp4914;
            panda$core$Object* $tmp4916 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4918 = (($fn4917) self->compiler->$class->vtable[50])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4916));
            panda$core$String* $tmp4920 = (($fn4919) self->$class->vtable[67])(self, $tmp4918, p_out);
            arg4915 = $tmp4920;
            panda$core$String* $tmp4922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4921, arg4915);
            panda$core$String* $tmp4924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4922, &$s4923);
            panda$core$String* $tmp4925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4924, ptr4911);
            panda$core$String* $tmp4927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4925, &$s4926);
            (($fn4928) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4927);
        }
        }
        else {
        panda$core$Bit $tmp4930 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$747694908, &$s4929);
        if ($tmp4930.value) {
        {
            panda$core$Object* $tmp4932 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4934 = (($fn4933) self->compiler->$class->vtable[50])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4932));
            panda$core$Object* $tmp4936 = (($fn4935) $tmp4934->type->subtypes->$class->vtable[2])($tmp4934->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4931 = ((org$pandalanguage$pandac$Type*) $tmp4936);
            panda$core$Object* $tmp4938 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4940 = (($fn4939) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4938), p_out);
            base4937 = $tmp4940;
            panda$core$Object* $tmp4942 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4944 = (($fn4943) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4942), p_out);
            indexStruct4941 = $tmp4944;
            panda$core$String* $tmp4947 = (($fn4946) self->$class->vtable[4])(self);
            index4945 = $tmp4947;
            panda$core$String* $tmp4949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4948, index4945);
            panda$core$String* $tmp4951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4949, &$s4950);
            panda$core$String* $tmp4952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4951, indexStruct4941);
            panda$core$String* $tmp4954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4952, &$s4953);
            (($fn4955) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4954);
            panda$core$Object* $tmp4957 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4959 = (($fn4958) self->compiler->$class->vtable[50])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4957));
            panda$core$String* $tmp4961 = (($fn4960) self->$class->vtable[67])(self, $tmp4959, p_out);
            value4956 = $tmp4961;
            panda$core$String* $tmp4964 = (($fn4963) self->$class->vtable[4])(self);
            ptr4962 = $tmp4964;
            panda$core$String* $tmp4966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4965, ptr4962);
            panda$core$String* $tmp4968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4966, &$s4967);
            panda$core$String* $tmp4970 = (($fn4969) self->$class->vtable[15])(self, baseType4931);
            panda$core$String* $tmp4971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4968, $tmp4970);
            panda$core$String* $tmp4973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4971, &$s4972);
            panda$core$String* $tmp4974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4973, base4937);
            panda$core$String* $tmp4976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4974, &$s4975);
            panda$core$String* $tmp4979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4977, &$s4978);
            panda$core$String* $tmp4981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4979, &$s4980);
            panda$core$String* $tmp4982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4981, index4945);
            panda$core$String* $tmp4984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4982, &$s4983);
            panda$core$String* $tmp4985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4976, $tmp4984);
            (($fn4986) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4985);
            panda$core$String* $tmp4988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4987, value4956);
            panda$core$String* $tmp4990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4988, &$s4989);
            panda$core$String* $tmp4992 = (($fn4991) self->$class->vtable[15])(self, baseType4931);
            panda$core$String* $tmp4993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4990, $tmp4992);
            panda$core$String* $tmp4995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4993, &$s4994);
            panda$core$String* $tmp4996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4995, ptr4962);
            panda$core$String* $tmp4998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4996, &$s4997);
            (($fn4999) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4998);
        }
        }
        else {
        panda$core$Bit $tmp5001 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$747694908, &$s5000);
        if ($tmp5001.value) {
        {
            panda$core$Object* $tmp5003 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5005 = (($fn5004) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5003), p_out);
            ptr5002 = $tmp5005;
            panda$core$String* $tmp5008 = (($fn5007) self->$class->vtable[4])(self);
            cast5006 = $tmp5008;
            panda$core$String* $tmp5010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5009, cast5006);
            panda$core$String* $tmp5012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5010, &$s5011);
            panda$core$String* $tmp5013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5012, ptr5002);
            panda$core$String* $tmp5015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5013, &$s5014);
            (($fn5016) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5015);
            panda$core$String* $tmp5018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5017, cast5006);
            panda$core$String* $tmp5020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5018, &$s5019);
            (($fn5021) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5020);
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
    org$pandalanguage$pandac$MethodDecl* m5022;
    org$pandalanguage$pandac$Type* actualMethodType5027;
    panda$core$String* actualResultType5028;
    panda$core$Bit isSuper5029;
    panda$collections$Array* args5056;
    panda$core$Int64 offset5059;
    panda$core$Range $tmp5065;
    panda$core$String* arg5085;
    panda$core$String* refTarget5130;
    panda$core$String* methodRef5134;
    panda$core$String* separator5137;
    panda$core$String* indirectVar5142;
    panda$core$String* resultType5145;
    panda$collections$Iterator* a$Iter5196;
    panda$core$String* a5208;
    m5022 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp5024 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5022->owner)->name, &$s5023);
    if ($tmp5024.value) {
    {
        (($fn5025) self->$class->vtable[69])(self, p_call, p_out);
        return;
    }
    }
    if (m5022->owner->external.value) {
    {
        (($fn5026) self->$class->vtable[87])(self, m5022);
    }
    }
    panda$core$Int64 $tmp5031 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp5032 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp5031, ((panda$core$Int64) { 1 }));
    bool $tmp5030 = $tmp5032.value;
    if (!$tmp5030) goto $l5033;
    panda$core$Object* $tmp5034 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5034)->kind, ((panda$core$Int64) { 1024 }));
    $tmp5030 = $tmp5035.value;
    $l5033:;
    panda$core$Bit $tmp5036 = { $tmp5030 };
    isSuper5029 = $tmp5036;
    panda$core$Bit $tmp5038 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper5029);
    bool $tmp5037 = $tmp5038.value;
    if (!$tmp5037) goto $l5039;
    panda$core$Bit $tmp5041 = (($fn5040) m5022->$class->vtable[3])(m5022);
    $tmp5037 = $tmp5041.value;
    $l5039:;
    panda$core$Bit $tmp5042 = { $tmp5037 };
    if ($tmp5042.value) {
    {
        org$pandalanguage$pandac$Type* $tmp5044 = (($fn5043) self->compiler->$class->vtable[45])(self->compiler, m5022);
        actualMethodType5027 = $tmp5044;
        panda$core$Int64 $tmp5046 = (($fn5045) actualMethodType5027->subtypes->$class->vtable[3])(actualMethodType5027->subtypes);
        panda$core$Int64 $tmp5047 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5046, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp5049 = (($fn5048) actualMethodType5027->subtypes->$class->vtable[2])(actualMethodType5027->subtypes, $tmp5047);
        panda$core$String* $tmp5051 = (($fn5050) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp5049));
        actualResultType5028 = $tmp5051;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp5053 = (($fn5052) self->compiler->$class->vtable[43])(self->compiler, m5022);
        actualMethodType5027 = $tmp5053;
        panda$core$String* $tmp5055 = (($fn5054) self->$class->vtable[15])(self, p_call->type);
        actualResultType5028 = $tmp5055;
    }
    }
    panda$collections$Array* $tmp5057 = (panda$collections$Array*) malloc(40);
    $tmp5057->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5057->refCount.value = 1;
    panda$collections$Array$init($tmp5057);
    args5056 = $tmp5057;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args5056, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp5060 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp5062 = (($fn5061) actualMethodType5027->subtypes->$class->vtable[3])(actualMethodType5027->subtypes);
    panda$core$Int64 $tmp5063 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5060, $tmp5062);
    panda$core$Int64 $tmp5064 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp5063, ((panda$core$Int64) { 1 }));
    offset5059 = $tmp5064;
    panda$core$Int64 $tmp5066 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp5065, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp5066)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp5068 = ((panda$core$Int64$wrapper*) $tmp5065.start)->value.value;
    panda$core$Int64 i5067 = { $tmp5068 };
    int64_t $tmp5070 = ((panda$core$Int64$wrapper*) $tmp5065.end)->value.value;
    int64_t $tmp5071 = $tmp5065.step.value;
    bool $tmp5072 = $tmp5065.inclusive.value;
    bool $tmp5079 = $tmp5071 > 0;
    if ($tmp5079) goto $l5077; else goto $l5078;
    $l5077:;
    if ($tmp5072) goto $l5080; else goto $l5081;
    $l5080:;
    if ($tmp5068 <= $tmp5070) goto $l5073; else goto $l5075;
    $l5081:;
    if ($tmp5068 < $tmp5070) goto $l5073; else goto $l5075;
    $l5078:;
    if ($tmp5072) goto $l5082; else goto $l5083;
    $l5082:;
    if ($tmp5068 >= $tmp5070) goto $l5073; else goto $l5075;
    $l5083:;
    if ($tmp5068 > $tmp5070) goto $l5073; else goto $l5075;
    $l5073:;
    {
        panda$core$Object* $tmp5086 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i5067);
        panda$core$String* $tmp5088 = (($fn5087) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5086), p_out);
        arg5085 = $tmp5088;
        panda$core$Bit $tmp5090 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i5067, offset5059);
        bool $tmp5089 = $tmp5090.value;
        if (!$tmp5089) goto $l5091;
        panda$core$Int64 $tmp5092 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5067, offset5059);
        panda$core$Object* $tmp5094 = (($fn5093) actualMethodType5027->subtypes->$class->vtable[2])(actualMethodType5027->subtypes, $tmp5092);
        panda$core$Object* $tmp5095 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i5067);
        panda$core$Bit $tmp5097 = (($fn5096) ((org$pandalanguage$pandac$Type*) $tmp5094)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp5094), ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp5095)->type));
        $tmp5089 = $tmp5097.value;
        $l5091:;
        panda$core$Bit $tmp5098 = { $tmp5089 };
        if ($tmp5098.value) {
        {
            panda$core$Int64 $tmp5099 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5067, offset5059);
            panda$core$Object* $tmp5101 = (($fn5100) actualMethodType5027->subtypes->$class->vtable[2])(actualMethodType5027->subtypes, $tmp5099);
            panda$core$String* $tmp5103 = (($fn5102) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp5101));
            panda$core$String* $tmp5105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5103, &$s5104);
            panda$core$Object* $tmp5106 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i5067);
            panda$core$Int64 $tmp5107 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5067, offset5059);
            panda$core$Object* $tmp5109 = (($fn5108) actualMethodType5027->subtypes->$class->vtable[2])(actualMethodType5027->subtypes, $tmp5107);
            panda$core$String* $tmp5111 = (($fn5110) self->$class->vtable[52])(self, arg5085, ((org$pandalanguage$pandac$IRNode*) $tmp5106)->type, ((org$pandalanguage$pandac$Type*) $tmp5109), p_out);
            panda$core$String* $tmp5112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5105, $tmp5111);
            arg5085 = $tmp5112;
        }
        }
        else {
        {
            panda$core$Object* $tmp5113 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i5067);
            panda$core$String* $tmp5115 = (($fn5114) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5113)->type);
            panda$core$String* $tmp5117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5115, &$s5116);
            panda$core$String* $tmp5118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5117, arg5085);
            arg5085 = $tmp5118;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args5056, ((panda$core$Object*) arg5085));
    }
    $l5076:;
    if ($tmp5079) goto $l5120; else goto $l5121;
    $l5120:;
    int64_t $tmp5122 = $tmp5070 - i5067.value;
    if ($tmp5072) goto $l5123; else goto $l5124;
    $l5123:;
    if ($tmp5122 >= $tmp5071) goto $l5119; else goto $l5075;
    $l5124:;
    if ($tmp5122 > $tmp5071) goto $l5119; else goto $l5075;
    $l5121:;
    int64_t $tmp5126 = i5067.value - $tmp5070;
    if ($tmp5072) goto $l5127; else goto $l5128;
    $l5127:;
    if ($tmp5126 >= -$tmp5071) goto $l5119; else goto $l5075;
    $l5128:;
    if ($tmp5126 > -$tmp5071) goto $l5119; else goto $l5075;
    $l5119:;
    i5067.value += $tmp5071;
    goto $l5073;
    $l5075:;
    panda$core$Int64 $tmp5131 = panda$collections$Array$get_count$R$panda$core$Int64(args5056);
    panda$core$Bit $tmp5132 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5131, ((panda$core$Int64) { 0 }));
    if ($tmp5132.value) {
    {
        panda$core$Object* $tmp5133 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args5056, ((panda$core$Int64) { 0 }));
        refTarget5130 = ((panda$core$String*) $tmp5133);
    }
    }
    else {
    {
        refTarget5130 = NULL;
    }
    }
    panda$core$String* $tmp5136 = (($fn5135) self->$class->vtable[43])(self, refTarget5130, m5022, isSuper5029, p_out);
    methodRef5134 = $tmp5136;
    separator5137 = &$s5138;
    panda$core$Bit $tmp5140 = (($fn5139) self->$class->vtable[24])(self, m5022);
    if ($tmp5140.value) {
    {
        panda$core$Int64 $tmp5141 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp5141;
        panda$core$String* $tmp5144 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5143, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar5142 = $tmp5144;
        panda$core$String* $tmp5147 = (($fn5146) self->$class->vtable[15])(self, p_call->type);
        resultType5145 = $tmp5147;
        panda$core$String* $tmp5149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5148, indirectVar5142);
        panda$core$String* $tmp5151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5149, &$s5150);
        panda$core$String* $tmp5152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5151, resultType5145);
        panda$core$String* $tmp5154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5152, &$s5153);
        (($fn5155) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5154);
        panda$core$String* $tmp5158 = (($fn5157) self->$class->vtable[40])(self, m5022);
        panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5156, $tmp5158);
        panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, &$s5160);
        panda$core$String* $tmp5163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5162, methodRef5134);
        panda$core$String* $tmp5165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5163, &$s5164);
        panda$core$String* $tmp5166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5165, resultType5145);
        panda$core$String* $tmp5168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5166, &$s5167);
        panda$core$String* $tmp5169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5168, indirectVar5142);
        panda$core$String* $tmp5171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5169, &$s5170);
        panda$core$String* $tmp5172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5161, $tmp5171);
        (($fn5173) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5172);
        separator5137 = &$s5174;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp5175 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp5177 = (($fn5176) p_call->type->$class->vtable[5])(p_call->type, ((panda$core$Object*) $tmp5175));
        if ($tmp5177.value) {
        {
            (($fn5178) self->$class->vtable[4])(self);
        }
        }
        panda$core$String* $tmp5181 = (($fn5180) self->$class->vtable[40])(self, m5022);
        panda$core$String* $tmp5182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5179, $tmp5181);
        panda$core$String* $tmp5184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5182, &$s5183);
        panda$core$String* $tmp5186 = (($fn5185) self->$class->vtable[15])(self, p_call->type);
        panda$core$String* $tmp5187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5184, $tmp5186);
        panda$core$String* $tmp5189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5187, &$s5188);
        panda$core$String* $tmp5191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5190, methodRef5134);
        panda$core$String* $tmp5193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5191, &$s5192);
        panda$core$String* $tmp5194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5189, $tmp5193);
        (($fn5195) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5194);
    }
    }
    {
        ITable* $tmp5197 = ((panda$collections$Iterable*) args5056)->$class->itable;
        while ($tmp5197->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5197 = $tmp5197->next;
        }
        $fn5199 $tmp5198 = $tmp5197->methods[0];
        panda$collections$Iterator* $tmp5200 = $tmp5198(((panda$collections$Iterable*) args5056));
        a$Iter5196 = $tmp5200;
        $l5201:;
        ITable* $tmp5203 = a$Iter5196->$class->itable;
        while ($tmp5203->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5203 = $tmp5203->next;
        }
        $fn5205 $tmp5204 = $tmp5203->methods[0];
        panda$core$Bit $tmp5206 = $tmp5204(a$Iter5196);
        panda$core$Bit $tmp5207 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5206);
        if (!$tmp5207.value) goto $l5202;
        {
            ITable* $tmp5209 = a$Iter5196->$class->itable;
            while ($tmp5209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5209 = $tmp5209->next;
            }
            $fn5211 $tmp5210 = $tmp5209->methods[1];
            panda$core$Object* $tmp5212 = $tmp5210(a$Iter5196);
            a5208 = ((panda$core$String*) $tmp5212);
            (($fn5213) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator5137);
            (($fn5214) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a5208);
            separator5137 = &$s5215;
        }
        goto $l5201;
        $l5202:;
    }
    (($fn5217) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5216);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test5218;
    panda$core$String* testBit5222;
    panda$core$String* ifTrue5233;
    panda$core$String* ifFalse5236;
    panda$core$String* end5253;
    panda$core$Object* $tmp5219 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5221 = (($fn5220) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5219), p_out);
    test5218 = $tmp5221;
    panda$core$String* $tmp5224 = (($fn5223) self->$class->vtable[4])(self);
    testBit5222 = $tmp5224;
    panda$core$String* $tmp5226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5225, testBit5222);
    panda$core$String* $tmp5228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5226, &$s5227);
    panda$core$String* $tmp5229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5228, test5218);
    panda$core$String* $tmp5231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5229, &$s5230);
    (($fn5232) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5231);
    panda$core$String* $tmp5235 = (($fn5234) self->$class->vtable[5])(self);
    ifTrue5233 = $tmp5235;
    panda$core$String* $tmp5238 = (($fn5237) self->$class->vtable[5])(self);
    ifFalse5236 = $tmp5238;
    panda$core$String* $tmp5240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5239, testBit5222);
    panda$core$String* $tmp5242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5240, &$s5241);
    panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5242, ifTrue5233);
    panda$core$String* $tmp5245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5243, &$s5244);
    panda$core$String* $tmp5246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5245, ifFalse5236);
    panda$core$String* $tmp5248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5246, &$s5247);
    (($fn5249) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5248);
    (($fn5250) self->$class->vtable[6])(self, ifTrue5233, p_out);
    panda$core$Object* $tmp5251 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    (($fn5252) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5251), p_out);
    panda$core$Int64 $tmp5254 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp5255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5254, ((panda$core$Int64) { 3 }));
    if ($tmp5255.value) {
    {
        panda$core$String* $tmp5257 = (($fn5256) self->$class->vtable[5])(self);
        end5253 = $tmp5257;
    }
    }
    else {
    {
        end5253 = ifFalse5236;
    }
    }
    panda$core$Object* $tmp5258 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5260 = (($fn5259) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5258));
    panda$core$Bit $tmp5261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5260);
    if ($tmp5261.value) {
    {
        panda$core$String* $tmp5263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5262, end5253);
        panda$core$String* $tmp5265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5263, &$s5264);
        (($fn5266) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5265);
    }
    }
    panda$core$Int64 $tmp5267 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp5268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5267, ((panda$core$Int64) { 3 }));
    if ($tmp5268.value) {
    {
        (($fn5269) self->$class->vtable[6])(self, ifFalse5236, p_out);
        panda$core$Object* $tmp5270 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        (($fn5271) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5270), p_out);
        panda$core$Object* $tmp5272 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp5274 = (($fn5273) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5272));
        panda$core$Bit $tmp5275 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5274);
        if ($tmp5275.value) {
        {
            panda$core$String* $tmp5277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5276, end5253);
            panda$core$String* $tmp5279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5277, &$s5278);
            (($fn5280) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5279);
        }
        }
    }
    }
    (($fn5281) self->$class->vtable[6])(self, end5253, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target5282;
    panda$core$String* range5284;
    org$pandalanguage$pandac$IRNode* block5288;
    org$pandalanguage$pandac$Type* t5290;
    panda$core$String* llt5294;
    panda$core$String* indexType5297;
    org$pandalanguage$pandac$ClassDecl* cl5303;
    panda$core$String* numberType5306;
    panda$core$String* index5315;
    panda$core$String* startPtr5326;
    panda$core$String* startPtrCast5337;
    panda$core$String* startFieldPtr5361;
    panda$core$String* start5387;
    panda$core$String* indexValuePtr5404;
    panda$core$String* endPtr5437;
    panda$core$String* endPtrCast5448;
    panda$core$String* endFieldPtr5472;
    panda$core$String* end5498;
    panda$core$String* rawStep5515;
    panda$core$String* step5526;
    panda$core$String* inclusive5542;
    panda$core$String* loopStart5553;
    panda$core$String* loopBody5556;
    panda$core$String* loopEnd5559;
    panda$core$String* loopTest5562;
    panda$core$String* forwardEntry5568;
    panda$core$String* backwardEntry5571;
    panda$core$String* signPrefix5574;
    panda$core$String* direction5579;
    panda$core$String* forwardEntryInclusive5608;
    panda$core$String* forwardEntryExclusive5611;
    panda$core$String* forwardEntryInclusiveTest5628;
    panda$core$String* forwardEntryExclusiveTest5662;
    panda$core$String* backwardEntryInclusive5696;
    panda$core$String* backwardEntryExclusive5699;
    panda$core$String* backwardEntryInclusiveTest5716;
    panda$core$String* backwardEntryExclusiveTest5750;
    panda$core$String* indexValue5784;
    panda$core$String* loopInc5811;
    panda$core$String* forwardLabel5814;
    panda$core$String* backwardLabel5817;
    panda$core$String* forwardDelta5832;
    panda$core$String* forwardInclusiveLabel5849;
    panda$core$String* forwardExclusiveLabel5852;
    panda$core$String* forwardInclusiveTest5865;
    panda$core$String* forwardExclusiveTest5894;
    panda$core$String* backwardDelta5923;
    panda$core$String* negStep5940;
    panda$core$String* backwardInclusiveLabel5954;
    panda$core$String* backwardExclusiveLabel5957;
    panda$core$String* backwardInclusiveTest5970;
    panda$core$String* backwardExclusiveTest5997;
    panda$core$String* inc6024;
    panda$core$String* incStruct6041;
    panda$core$Object* $tmp5283 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target5282 = ((org$pandalanguage$pandac$IRNode*) $tmp5283);
    panda$core$Object* $tmp5285 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5287 = (($fn5286) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5285), p_out);
    range5284 = $tmp5287;
    panda$core$Object* $tmp5289 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block5288 = ((org$pandalanguage$pandac$IRNode*) $tmp5289);
    panda$core$Object* $tmp5291 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5293 = (($fn5292) ((org$pandalanguage$pandac$IRNode*) $tmp5291)->type->subtypes->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp5291)->type->subtypes, ((panda$core$Int64) { 1 }));
    t5290 = ((org$pandalanguage$pandac$Type*) $tmp5293);
    panda$core$String* $tmp5296 = (($fn5295) self->$class->vtable[15])(self, t5290);
    llt5294 = $tmp5296;
    panda$core$Bit $tmp5298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t5290->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp5298.value) {
    {
        panda$core$Object* $tmp5300 = (($fn5299) t5290->subtypes->$class->vtable[2])(t5290->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp5302 = (($fn5301) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp5300));
        indexType5297 = $tmp5302;
    }
    }
    else {
    {
        indexType5297 = llt5294;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp5305 = (($fn5304) self->compiler->$class->vtable[13])(self->compiler, t5290);
    cl5303 = $tmp5305;
    panda$collections$ListView* $tmp5308 = (($fn5307) self->compiler->$class->vtable[10])(self->compiler, cl5303);
    ITable* $tmp5309 = $tmp5308->$class->itable;
    while ($tmp5309->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp5309 = $tmp5309->next;
    }
    $fn5311 $tmp5310 = $tmp5309->methods[0];
    panda$core$Object* $tmp5312 = $tmp5310($tmp5308, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5314 = (($fn5313) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp5312)->type);
    numberType5306 = $tmp5314;
    panda$core$String* $tmp5317 = (($fn5316) self->$class->vtable[29])(self, ((org$pandalanguage$pandac$Variable*) target5282->payload));
    index5315 = $tmp5317;
    panda$core$String* $tmp5319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5318, index5315);
    panda$core$String* $tmp5321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5319, &$s5320);
    panda$core$String* $tmp5322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5321, indexType5297);
    panda$core$String* $tmp5324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5322, &$s5323);
    (($fn5325) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5324);
    panda$core$String* $tmp5328 = (($fn5327) self->$class->vtable[4])(self);
    startPtr5326 = $tmp5328;
    panda$core$String* $tmp5330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5329, startPtr5326);
    panda$core$String* $tmp5332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5330, &$s5331);
    panda$core$String* $tmp5333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5332, range5284);
    panda$core$String* $tmp5335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5333, &$s5334);
    (($fn5336) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5335);
    panda$core$String* $tmp5339 = (($fn5338) self->$class->vtable[4])(self);
    startPtrCast5337 = $tmp5339;
    panda$core$String* $tmp5341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5340, startPtrCast5337);
    panda$core$String* $tmp5343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5341, &$s5342);
    org$pandalanguage$pandac$Type* $tmp5344 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp5346 = (($fn5345) self->$class->vtable[15])(self, $tmp5344);
    panda$core$String* $tmp5347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5343, $tmp5346);
    panda$core$String* $tmp5349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5347, &$s5348);
    panda$core$String* $tmp5350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5349, startPtr5326);
    panda$core$String* $tmp5352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5350, &$s5351);
    panda$core$String* $tmp5355 = (($fn5354) self->$class->vtable[17])(self, t5290);
    panda$core$String* $tmp5356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5353, $tmp5355);
    panda$core$String* $tmp5358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5356, &$s5357);
    panda$core$String* $tmp5359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5352, $tmp5358);
    (($fn5360) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5359);
    panda$core$String* $tmp5363 = (($fn5362) self->$class->vtable[4])(self);
    startFieldPtr5361 = $tmp5363;
    panda$core$String* $tmp5365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5364, startFieldPtr5361);
    panda$core$String* $tmp5367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5365, &$s5366);
    panda$core$String* $tmp5369 = (($fn5368) self->$class->vtable[16])(self, t5290);
    panda$core$String* $tmp5370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5367, $tmp5369);
    panda$core$String* $tmp5372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5370, &$s5371);
    panda$core$String* $tmp5375 = (($fn5374) self->$class->vtable[17])(self, t5290);
    panda$core$String* $tmp5376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5373, $tmp5375);
    panda$core$String* $tmp5378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5376, &$s5377);
    panda$core$String* $tmp5379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5378, startPtrCast5337);
    panda$core$String* $tmp5381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5379, &$s5380);
    panda$core$String* $tmp5382 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5381, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp5384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5382, &$s5383);
    panda$core$String* $tmp5385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5372, $tmp5384);
    (($fn5386) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5385);
    panda$core$String* $tmp5389 = (($fn5388) self->$class->vtable[4])(self);
    start5387 = $tmp5389;
    panda$core$String* $tmp5391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5390, start5387);
    panda$core$String* $tmp5393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5391, &$s5392);
    panda$core$String* $tmp5394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5393, numberType5306);
    panda$core$String* $tmp5396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5394, &$s5395);
    panda$core$String* $tmp5397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5396, numberType5306);
    panda$core$String* $tmp5399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5397, &$s5398);
    panda$core$String* $tmp5400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5399, startFieldPtr5361);
    panda$core$String* $tmp5402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5400, &$s5401);
    (($fn5403) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5402);
    panda$core$String* $tmp5406 = (($fn5405) self->$class->vtable[4])(self);
    indexValuePtr5404 = $tmp5406;
    panda$core$String* $tmp5408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5407, indexValuePtr5404);
    panda$core$String* $tmp5410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5408, &$s5409);
    panda$core$String* $tmp5411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5410, indexType5297);
    panda$core$String* $tmp5413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5411, &$s5412);
    panda$core$String* $tmp5414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5413, indexType5297);
    panda$core$String* $tmp5416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5414, &$s5415);
    panda$core$String* $tmp5417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5416, index5315);
    panda$core$String* $tmp5419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5417, &$s5418);
    panda$core$String* $tmp5421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5419, &$s5420);
    (($fn5422) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5421);
    panda$core$String* $tmp5424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5423, numberType5306);
    panda$core$String* $tmp5426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5424, &$s5425);
    panda$core$String* $tmp5427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5426, start5387);
    panda$core$String* $tmp5429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5427, &$s5428);
    panda$core$String* $tmp5430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5429, numberType5306);
    panda$core$String* $tmp5432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5430, &$s5431);
    panda$core$String* $tmp5433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5432, indexValuePtr5404);
    panda$core$String* $tmp5435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5433, &$s5434);
    (($fn5436) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5435);
    panda$core$String* $tmp5439 = (($fn5438) self->$class->vtable[4])(self);
    endPtr5437 = $tmp5439;
    panda$core$String* $tmp5441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5440, endPtr5437);
    panda$core$String* $tmp5443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5441, &$s5442);
    panda$core$String* $tmp5444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5443, range5284);
    panda$core$String* $tmp5446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5444, &$s5445);
    (($fn5447) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5446);
    panda$core$String* $tmp5450 = (($fn5449) self->$class->vtable[4])(self);
    endPtrCast5448 = $tmp5450;
    panda$core$String* $tmp5452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5451, endPtrCast5448);
    panda$core$String* $tmp5454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5452, &$s5453);
    org$pandalanguage$pandac$Type* $tmp5455 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp5457 = (($fn5456) self->$class->vtable[15])(self, $tmp5455);
    panda$core$String* $tmp5458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5454, $tmp5457);
    panda$core$String* $tmp5460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5458, &$s5459);
    panda$core$String* $tmp5461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5460, endPtr5437);
    panda$core$String* $tmp5463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5461, &$s5462);
    panda$core$String* $tmp5466 = (($fn5465) self->$class->vtable[17])(self, t5290);
    panda$core$String* $tmp5467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5464, $tmp5466);
    panda$core$String* $tmp5469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5467, &$s5468);
    panda$core$String* $tmp5470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5463, $tmp5469);
    (($fn5471) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5470);
    panda$core$String* $tmp5474 = (($fn5473) self->$class->vtable[4])(self);
    endFieldPtr5472 = $tmp5474;
    panda$core$String* $tmp5476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5475, endFieldPtr5472);
    panda$core$String* $tmp5478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5476, &$s5477);
    panda$core$String* $tmp5480 = (($fn5479) self->$class->vtable[16])(self, t5290);
    panda$core$String* $tmp5481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5478, $tmp5480);
    panda$core$String* $tmp5483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5481, &$s5482);
    panda$core$String* $tmp5485 = (($fn5484) self->$class->vtable[17])(self, t5290);
    panda$core$String* $tmp5486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5483, $tmp5485);
    panda$core$String* $tmp5488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5486, &$s5487);
    panda$core$String* $tmp5490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5489, endPtrCast5448);
    panda$core$String* $tmp5492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5490, &$s5491);
    panda$core$String* $tmp5493 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5492, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp5495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5493, &$s5494);
    panda$core$String* $tmp5496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5488, $tmp5495);
    (($fn5497) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5496);
    panda$core$String* $tmp5500 = (($fn5499) self->$class->vtable[4])(self);
    end5498 = $tmp5500;
    panda$core$String* $tmp5502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5501, end5498);
    panda$core$String* $tmp5504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5502, &$s5503);
    panda$core$String* $tmp5505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5504, numberType5306);
    panda$core$String* $tmp5507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5505, &$s5506);
    panda$core$String* $tmp5508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5507, numberType5306);
    panda$core$String* $tmp5510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5508, &$s5509);
    panda$core$String* $tmp5511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5510, endFieldPtr5472);
    panda$core$String* $tmp5513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5511, &$s5512);
    (($fn5514) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5513);
    panda$core$String* $tmp5517 = (($fn5516) self->$class->vtable[4])(self);
    rawStep5515 = $tmp5517;
    panda$core$String* $tmp5519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5518, rawStep5515);
    panda$core$String* $tmp5521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5519, &$s5520);
    panda$core$String* $tmp5522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5521, range5284);
    panda$core$String* $tmp5524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5522, &$s5523);
    (($fn5525) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5524);
    panda$core$Bit $tmp5528 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType5306, &$s5527);
    if ($tmp5528.value) {
    {
        panda$core$String* $tmp5530 = (($fn5529) self->$class->vtable[4])(self);
        step5526 = $tmp5530;
        panda$core$String* $tmp5532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5531, step5526);
        panda$core$String* $tmp5534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5532, &$s5533);
        panda$core$String* $tmp5535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5534, rawStep5515);
        panda$core$String* $tmp5537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5535, &$s5536);
        panda$core$String* $tmp5538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5537, numberType5306);
        panda$core$String* $tmp5540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5538, &$s5539);
        (($fn5541) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5540);
    }
    }
    else {
    {
        step5526 = rawStep5515;
    }
    }
    panda$core$String* $tmp5544 = (($fn5543) self->$class->vtable[4])(self);
    inclusive5542 = $tmp5544;
    panda$core$String* $tmp5546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5545, inclusive5542);
    panda$core$String* $tmp5548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5546, &$s5547);
    panda$core$String* $tmp5549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5548, range5284);
    panda$core$String* $tmp5551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5549, &$s5550);
    (($fn5552) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5551);
    panda$core$String* $tmp5555 = (($fn5554) self->$class->vtable[5])(self);
    loopStart5553 = $tmp5555;
    panda$core$String* $tmp5558 = (($fn5557) self->$class->vtable[5])(self);
    loopBody5556 = $tmp5558;
    panda$core$String* $tmp5561 = (($fn5560) self->$class->vtable[5])(self);
    loopEnd5559 = $tmp5561;
    panda$core$String* $tmp5564 = (($fn5563) self->$class->vtable[5])(self);
    loopTest5562 = $tmp5564;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5565 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5565->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5565->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5565, ((panda$core$String*) p_f->payload), loopEnd5559, loopTest5562);
    (($fn5567) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp5565));
    panda$core$String* $tmp5570 = (($fn5569) self->$class->vtable[5])(self);
    forwardEntry5568 = $tmp5570;
    panda$core$String* $tmp5573 = (($fn5572) self->$class->vtable[5])(self);
    backwardEntry5571 = $tmp5573;
    panda$core$Bit $tmp5576 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t5290)->name, &$s5575);
    if ($tmp5576.value) {
    {
        signPrefix5574 = &$s5577;
    }
    }
    else {
    {
        signPrefix5574 = &$s5578;
    }
    }
    panda$core$Bit $tmp5581 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix5574, &$s5580);
    if ($tmp5581.value) {
    {
        panda$core$String* $tmp5583 = (($fn5582) self->$class->vtable[4])(self);
        direction5579 = $tmp5583;
        panda$core$String* $tmp5585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5584, direction5579);
        panda$core$String* $tmp5587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5585, &$s5586);
        panda$core$String* $tmp5588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5587, numberType5306);
        panda$core$String* $tmp5590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5588, &$s5589);
        panda$core$String* $tmp5591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5590, step5526);
        panda$core$String* $tmp5593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5591, &$s5592);
        (($fn5594) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5593);
    }
    }
    else {
    {
        direction5579 = &$s5595;
    }
    }
    panda$core$String* $tmp5597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5596, direction5579);
    panda$core$String* $tmp5599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5597, &$s5598);
    panda$core$String* $tmp5600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5599, forwardEntry5568);
    panda$core$String* $tmp5602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5600, &$s5601);
    panda$core$String* $tmp5603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5602, backwardEntry5571);
    panda$core$String* $tmp5605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5603, &$s5604);
    (($fn5606) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5605);
    (($fn5607) self->$class->vtable[6])(self, forwardEntry5568, p_out);
    panda$core$String* $tmp5610 = (($fn5609) self->$class->vtable[5])(self);
    forwardEntryInclusive5608 = $tmp5610;
    panda$core$String* $tmp5613 = (($fn5612) self->$class->vtable[5])(self);
    forwardEntryExclusive5611 = $tmp5613;
    panda$core$String* $tmp5615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5614, inclusive5542);
    panda$core$String* $tmp5617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5615, &$s5616);
    panda$core$String* $tmp5618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5617, forwardEntryInclusive5608);
    panda$core$String* $tmp5620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5618, &$s5619);
    panda$core$String* $tmp5622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5621, forwardEntryExclusive5611);
    panda$core$String* $tmp5624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5622, &$s5623);
    panda$core$String* $tmp5625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5620, $tmp5624);
    (($fn5626) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5625);
    (($fn5627) self->$class->vtable[6])(self, forwardEntryInclusive5608, p_out);
    panda$core$String* $tmp5630 = (($fn5629) self->$class->vtable[4])(self);
    forwardEntryInclusiveTest5628 = $tmp5630;
    panda$core$String* $tmp5632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5631, forwardEntryInclusiveTest5628);
    panda$core$String* $tmp5634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5632, &$s5633);
    panda$core$String* $tmp5635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5634, signPrefix5574);
    panda$core$String* $tmp5637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5635, &$s5636);
    panda$core$String* $tmp5638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5637, numberType5306);
    panda$core$String* $tmp5640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5638, &$s5639);
    panda$core$String* $tmp5642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5641, start5387);
    panda$core$String* $tmp5644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5642, &$s5643);
    panda$core$String* $tmp5645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5644, end5498);
    panda$core$String* $tmp5647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5645, &$s5646);
    panda$core$String* $tmp5648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5640, $tmp5647);
    (($fn5649) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5648);
    panda$core$String* $tmp5651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5650, forwardEntryInclusiveTest5628);
    panda$core$String* $tmp5653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5651, &$s5652);
    panda$core$String* $tmp5654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5653, loopStart5553);
    panda$core$String* $tmp5656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5654, &$s5655);
    panda$core$String* $tmp5657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5656, loopEnd5559);
    panda$core$String* $tmp5659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5657, &$s5658);
    (($fn5660) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5659);
    (($fn5661) self->$class->vtable[6])(self, forwardEntryExclusive5611, p_out);
    panda$core$String* $tmp5664 = (($fn5663) self->$class->vtable[4])(self);
    forwardEntryExclusiveTest5662 = $tmp5664;
    panda$core$String* $tmp5666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5665, forwardEntryExclusiveTest5662);
    panda$core$String* $tmp5668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5666, &$s5667);
    panda$core$String* $tmp5669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5668, signPrefix5574);
    panda$core$String* $tmp5671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5669, &$s5670);
    panda$core$String* $tmp5672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5671, numberType5306);
    panda$core$String* $tmp5674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5672, &$s5673);
    panda$core$String* $tmp5676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5675, start5387);
    panda$core$String* $tmp5678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5676, &$s5677);
    panda$core$String* $tmp5679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5678, end5498);
    panda$core$String* $tmp5681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5679, &$s5680);
    panda$core$String* $tmp5682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5674, $tmp5681);
    (($fn5683) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5682);
    panda$core$String* $tmp5685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5684, forwardEntryExclusiveTest5662);
    panda$core$String* $tmp5687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5685, &$s5686);
    panda$core$String* $tmp5688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5687, loopStart5553);
    panda$core$String* $tmp5690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5688, &$s5689);
    panda$core$String* $tmp5691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5690, loopEnd5559);
    panda$core$String* $tmp5693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5691, &$s5692);
    (($fn5694) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5693);
    (($fn5695) self->$class->vtable[6])(self, backwardEntry5571, p_out);
    panda$core$String* $tmp5698 = (($fn5697) self->$class->vtable[5])(self);
    backwardEntryInclusive5696 = $tmp5698;
    panda$core$String* $tmp5701 = (($fn5700) self->$class->vtable[5])(self);
    backwardEntryExclusive5699 = $tmp5701;
    panda$core$String* $tmp5703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5702, inclusive5542);
    panda$core$String* $tmp5705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5703, &$s5704);
    panda$core$String* $tmp5706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5705, backwardEntryInclusive5696);
    panda$core$String* $tmp5708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5706, &$s5707);
    panda$core$String* $tmp5710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5709, backwardEntryExclusive5699);
    panda$core$String* $tmp5712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5710, &$s5711);
    panda$core$String* $tmp5713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5708, $tmp5712);
    (($fn5714) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5713);
    (($fn5715) self->$class->vtable[6])(self, backwardEntryInclusive5696, p_out);
    panda$core$String* $tmp5718 = (($fn5717) self->$class->vtable[4])(self);
    backwardEntryInclusiveTest5716 = $tmp5718;
    panda$core$String* $tmp5720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5719, backwardEntryInclusiveTest5716);
    panda$core$String* $tmp5722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5720, &$s5721);
    panda$core$String* $tmp5723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5722, signPrefix5574);
    panda$core$String* $tmp5725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5723, &$s5724);
    panda$core$String* $tmp5726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5725, numberType5306);
    panda$core$String* $tmp5728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5726, &$s5727);
    panda$core$String* $tmp5730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5729, start5387);
    panda$core$String* $tmp5732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5730, &$s5731);
    panda$core$String* $tmp5733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5732, end5498);
    panda$core$String* $tmp5735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5733, &$s5734);
    panda$core$String* $tmp5736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5728, $tmp5735);
    (($fn5737) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5736);
    panda$core$String* $tmp5739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5738, backwardEntryInclusiveTest5716);
    panda$core$String* $tmp5741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5739, &$s5740);
    panda$core$String* $tmp5742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5741, loopStart5553);
    panda$core$String* $tmp5744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5742, &$s5743);
    panda$core$String* $tmp5745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5744, loopEnd5559);
    panda$core$String* $tmp5747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5745, &$s5746);
    (($fn5748) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5747);
    (($fn5749) self->$class->vtable[6])(self, backwardEntryExclusive5699, p_out);
    panda$core$String* $tmp5752 = (($fn5751) self->$class->vtable[4])(self);
    backwardEntryExclusiveTest5750 = $tmp5752;
    panda$core$String* $tmp5754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5753, backwardEntryExclusiveTest5750);
    panda$core$String* $tmp5756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5754, &$s5755);
    panda$core$String* $tmp5757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5756, signPrefix5574);
    panda$core$String* $tmp5759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5757, &$s5758);
    panda$core$String* $tmp5760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5759, numberType5306);
    panda$core$String* $tmp5762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5760, &$s5761);
    panda$core$String* $tmp5764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5763, start5387);
    panda$core$String* $tmp5766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5764, &$s5765);
    panda$core$String* $tmp5767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5766, end5498);
    panda$core$String* $tmp5769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5767, &$s5768);
    panda$core$String* $tmp5770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5762, $tmp5769);
    (($fn5771) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5770);
    panda$core$String* $tmp5773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5772, backwardEntryExclusiveTest5750);
    panda$core$String* $tmp5775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5773, &$s5774);
    panda$core$String* $tmp5776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5775, loopStart5553);
    panda$core$String* $tmp5778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5776, &$s5777);
    panda$core$String* $tmp5779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5778, loopEnd5559);
    panda$core$String* $tmp5781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5779, &$s5780);
    (($fn5782) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5781);
    (($fn5783) self->$class->vtable[6])(self, loopStart5553, p_out);
    panda$core$String* $tmp5786 = (($fn5785) self->$class->vtable[4])(self);
    indexValue5784 = $tmp5786;
    panda$core$String* $tmp5788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5787, indexValue5784);
    panda$core$String* $tmp5790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5788, &$s5789);
    panda$core$String* $tmp5791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5790, numberType5306);
    panda$core$String* $tmp5793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5791, &$s5792);
    panda$core$String* $tmp5794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5793, numberType5306);
    panda$core$String* $tmp5796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5794, &$s5795);
    panda$core$String* $tmp5797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5796, indexValuePtr5404);
    panda$core$String* $tmp5799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5797, &$s5798);
    (($fn5800) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5799);
    (($fn5801) self->$class->vtable[85])(self, block5288, p_out);
    panda$core$Bit $tmp5803 = (($fn5802) self->$class->vtable[7])(self, block5288);
    panda$core$Bit $tmp5804 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5803);
    if ($tmp5804.value) {
    {
        panda$core$String* $tmp5806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5805, loopTest5562);
        panda$core$String* $tmp5808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5806, &$s5807);
        (($fn5809) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5808);
    }
    }
    (($fn5810) self->$class->vtable[6])(self, loopTest5562, p_out);
    panda$core$String* $tmp5813 = (($fn5812) self->$class->vtable[5])(self);
    loopInc5811 = $tmp5813;
    panda$core$String* $tmp5816 = (($fn5815) self->$class->vtable[5])(self);
    forwardLabel5814 = $tmp5816;
    panda$core$String* $tmp5819 = (($fn5818) self->$class->vtable[5])(self);
    backwardLabel5817 = $tmp5819;
    panda$core$String* $tmp5821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5820, direction5579);
    panda$core$String* $tmp5823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5821, &$s5822);
    panda$core$String* $tmp5824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5823, forwardLabel5814);
    panda$core$String* $tmp5826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5824, &$s5825);
    panda$core$String* $tmp5827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5826, backwardLabel5817);
    panda$core$String* $tmp5829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5827, &$s5828);
    (($fn5830) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5829);
    (($fn5831) self->$class->vtable[6])(self, forwardLabel5814, p_out);
    panda$core$String* $tmp5834 = (($fn5833) self->$class->vtable[4])(self);
    forwardDelta5832 = $tmp5834;
    panda$core$String* $tmp5836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5835, forwardDelta5832);
    panda$core$String* $tmp5838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5836, &$s5837);
    panda$core$String* $tmp5839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5838, numberType5306);
    panda$core$String* $tmp5841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5839, &$s5840);
    panda$core$String* $tmp5842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5841, end5498);
    panda$core$String* $tmp5844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5842, &$s5843);
    panda$core$String* $tmp5845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5844, indexValue5784);
    panda$core$String* $tmp5847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5845, &$s5846);
    (($fn5848) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5847);
    panda$core$String* $tmp5851 = (($fn5850) self->$class->vtable[5])(self);
    forwardInclusiveLabel5849 = $tmp5851;
    panda$core$String* $tmp5854 = (($fn5853) self->$class->vtable[5])(self);
    forwardExclusiveLabel5852 = $tmp5854;
    panda$core$String* $tmp5856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5855, inclusive5542);
    panda$core$String* $tmp5858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5856, &$s5857);
    panda$core$String* $tmp5859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5858, forwardInclusiveLabel5849);
    panda$core$String* $tmp5861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5859, &$s5860);
    panda$core$String* $tmp5862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5861, forwardExclusiveLabel5852);
    (($fn5863) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5862);
    (($fn5864) self->$class->vtable[6])(self, forwardInclusiveLabel5849, p_out);
    panda$core$String* $tmp5867 = (($fn5866) self->$class->vtable[4])(self);
    forwardInclusiveTest5865 = $tmp5867;
    panda$core$String* $tmp5869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5868, forwardInclusiveTest5865);
    panda$core$String* $tmp5871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5869, &$s5870);
    panda$core$String* $tmp5872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5871, numberType5306);
    panda$core$String* $tmp5874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5872, &$s5873);
    panda$core$String* $tmp5875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5874, forwardDelta5832);
    panda$core$String* $tmp5877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5875, &$s5876);
    panda$core$String* $tmp5878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5877, step5526);
    panda$core$String* $tmp5880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5878, &$s5879);
    (($fn5881) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5880);
    panda$core$String* $tmp5883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5882, forwardInclusiveTest5865);
    panda$core$String* $tmp5885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5883, &$s5884);
    panda$core$String* $tmp5886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5885, loopInc5811);
    panda$core$String* $tmp5888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5886, &$s5887);
    panda$core$String* $tmp5889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5888, loopEnd5559);
    panda$core$String* $tmp5891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5889, &$s5890);
    (($fn5892) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5891);
    (($fn5893) self->$class->vtable[6])(self, forwardExclusiveLabel5852, p_out);
    panda$core$String* $tmp5896 = (($fn5895) self->$class->vtable[4])(self);
    forwardExclusiveTest5894 = $tmp5896;
    panda$core$String* $tmp5898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5897, forwardExclusiveTest5894);
    panda$core$String* $tmp5900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5898, &$s5899);
    panda$core$String* $tmp5901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5900, numberType5306);
    panda$core$String* $tmp5903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5901, &$s5902);
    panda$core$String* $tmp5904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5903, forwardDelta5832);
    panda$core$String* $tmp5906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5904, &$s5905);
    panda$core$String* $tmp5907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5906, step5526);
    panda$core$String* $tmp5909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5907, &$s5908);
    (($fn5910) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5909);
    panda$core$String* $tmp5912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5911, forwardExclusiveTest5894);
    panda$core$String* $tmp5914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5912, &$s5913);
    panda$core$String* $tmp5915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5914, loopInc5811);
    panda$core$String* $tmp5917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5915, &$s5916);
    panda$core$String* $tmp5918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5917, loopEnd5559);
    panda$core$String* $tmp5920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5918, &$s5919);
    (($fn5921) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5920);
    (($fn5922) self->$class->vtable[6])(self, backwardLabel5817, p_out);
    panda$core$String* $tmp5925 = (($fn5924) self->$class->vtable[4])(self);
    backwardDelta5923 = $tmp5925;
    panda$core$String* $tmp5927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5926, backwardDelta5923);
    panda$core$String* $tmp5929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5927, &$s5928);
    panda$core$String* $tmp5930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5929, numberType5306);
    panda$core$String* $tmp5932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5930, &$s5931);
    panda$core$String* $tmp5933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5932, indexValue5784);
    panda$core$String* $tmp5935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5933, &$s5934);
    panda$core$String* $tmp5936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5935, end5498);
    panda$core$String* $tmp5938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5936, &$s5937);
    (($fn5939) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5938);
    panda$core$String* $tmp5942 = (($fn5941) self->$class->vtable[4])(self);
    negStep5940 = $tmp5942;
    panda$core$String* $tmp5944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5943, negStep5940);
    panda$core$String* $tmp5946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5944, &$s5945);
    panda$core$String* $tmp5947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5946, numberType5306);
    panda$core$String* $tmp5949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5947, &$s5948);
    panda$core$String* $tmp5950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5949, step5526);
    panda$core$String* $tmp5952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5950, &$s5951);
    (($fn5953) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5952);
    panda$core$String* $tmp5956 = (($fn5955) self->$class->vtable[5])(self);
    backwardInclusiveLabel5954 = $tmp5956;
    panda$core$String* $tmp5959 = (($fn5958) self->$class->vtable[5])(self);
    backwardExclusiveLabel5957 = $tmp5959;
    panda$core$String* $tmp5961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5960, inclusive5542);
    panda$core$String* $tmp5963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5961, &$s5962);
    panda$core$String* $tmp5964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5963, backwardInclusiveLabel5954);
    panda$core$String* $tmp5966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5964, &$s5965);
    panda$core$String* $tmp5967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5966, backwardExclusiveLabel5957);
    (($fn5968) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5967);
    (($fn5969) self->$class->vtable[6])(self, backwardInclusiveLabel5954, p_out);
    panda$core$String* $tmp5972 = (($fn5971) self->$class->vtable[4])(self);
    backwardInclusiveTest5970 = $tmp5972;
    panda$core$String* $tmp5974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5973, backwardInclusiveTest5970);
    panda$core$String* $tmp5976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5974, &$s5975);
    panda$core$String* $tmp5977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5976, numberType5306);
    panda$core$String* $tmp5979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5977, &$s5978);
    panda$core$String* $tmp5980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5979, backwardDelta5923);
    panda$core$String* $tmp5982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5980, &$s5981);
    panda$core$String* $tmp5983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5982, negStep5940);
    (($fn5984) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5983);
    panda$core$String* $tmp5986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5985, backwardInclusiveTest5970);
    panda$core$String* $tmp5988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5986, &$s5987);
    panda$core$String* $tmp5989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5988, loopInc5811);
    panda$core$String* $tmp5991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5989, &$s5990);
    panda$core$String* $tmp5992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5991, loopEnd5559);
    panda$core$String* $tmp5994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5992, &$s5993);
    (($fn5995) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5994);
    (($fn5996) self->$class->vtable[6])(self, backwardExclusiveLabel5957, p_out);
    panda$core$String* $tmp5999 = (($fn5998) self->$class->vtable[4])(self);
    backwardExclusiveTest5997 = $tmp5999;
    panda$core$String* $tmp6001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6000, backwardExclusiveTest5997);
    panda$core$String* $tmp6003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6001, &$s6002);
    panda$core$String* $tmp6004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6003, numberType5306);
    panda$core$String* $tmp6006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6004, &$s6005);
    panda$core$String* $tmp6007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6006, backwardDelta5923);
    panda$core$String* $tmp6009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6007, &$s6008);
    panda$core$String* $tmp6010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6009, negStep5940);
    (($fn6011) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6010);
    panda$core$String* $tmp6013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6012, backwardExclusiveTest5997);
    panda$core$String* $tmp6015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6013, &$s6014);
    panda$core$String* $tmp6016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6015, loopInc5811);
    panda$core$String* $tmp6018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6016, &$s6017);
    panda$core$String* $tmp6019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6018, loopEnd5559);
    panda$core$String* $tmp6021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6019, &$s6020);
    (($fn6022) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6021);
    (($fn6023) self->$class->vtable[6])(self, loopInc5811, p_out);
    panda$core$String* $tmp6026 = (($fn6025) self->$class->vtable[4])(self);
    inc6024 = $tmp6026;
    panda$core$String* $tmp6028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6027, inc6024);
    panda$core$String* $tmp6030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6028, &$s6029);
    panda$core$String* $tmp6031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6030, numberType5306);
    panda$core$String* $tmp6033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6031, &$s6032);
    panda$core$String* $tmp6034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6033, indexValue5784);
    panda$core$String* $tmp6036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6034, &$s6035);
    panda$core$String* $tmp6037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6036, step5526);
    panda$core$String* $tmp6039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6037, &$s6038);
    (($fn6040) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6039);
    panda$core$String* $tmp6043 = (($fn6042) self->$class->vtable[4])(self);
    incStruct6041 = $tmp6043;
    panda$core$String* $tmp6045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6044, incStruct6041);
    panda$core$String* $tmp6047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6045, &$s6046);
    panda$core$String* $tmp6048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6047, indexType5297);
    panda$core$String* $tmp6050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6048, &$s6049);
    panda$core$String* $tmp6051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6050, numberType5306);
    panda$core$String* $tmp6053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6051, &$s6052);
    (($fn6054) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6053);
    panda$core$String* $tmp6056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6055, numberType5306);
    panda$core$String* $tmp6058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6056, &$s6057);
    panda$core$String* $tmp6059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6058, inc6024);
    panda$core$String* $tmp6061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6059, &$s6060);
    (($fn6062) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6061);
    panda$core$String* $tmp6064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6063, indexType5297);
    panda$core$String* $tmp6066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6064, &$s6065);
    panda$core$String* $tmp6067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6066, incStruct6041);
    panda$core$String* $tmp6069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6067, &$s6068);
    panda$core$String* $tmp6070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6069, indexType5297);
    panda$core$String* $tmp6072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6070, &$s6071);
    panda$core$String* $tmp6073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6072, index5315);
    panda$core$String* $tmp6075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6073, &$s6074);
    (($fn6076) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6075);
    panda$core$String* $tmp6078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6077, loopStart5553);
    panda$core$String* $tmp6080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6078, &$s6079);
    (($fn6081) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6080);
    (($fn6082) self->$class->vtable[6])(self, loopEnd5559, p_out);
    (($fn6083) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart6084;
    panda$core$String* loopBody6087;
    panda$core$String* loopEnd6090;
    panda$core$String* test6102;
    panda$core$String* testBit6106;
    panda$core$String* $tmp6086 = (($fn6085) self->$class->vtable[5])(self);
    loopStart6084 = $tmp6086;
    panda$core$String* $tmp6089 = (($fn6088) self->$class->vtable[5])(self);
    loopBody6087 = $tmp6089;
    panda$core$String* $tmp6092 = (($fn6091) self->$class->vtable[5])(self);
    loopEnd6090 = $tmp6092;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6093 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp6093->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp6093->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp6093, ((panda$core$String*) p_w->payload), loopEnd6090, loopStart6084);
    (($fn6095) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp6093));
    panda$core$String* $tmp6097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6096, loopStart6084);
    panda$core$String* $tmp6099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6097, &$s6098);
    (($fn6100) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6099);
    (($fn6101) self->$class->vtable[6])(self, loopStart6084, p_out);
    panda$core$Object* $tmp6103 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6105 = (($fn6104) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6103), p_out);
    test6102 = $tmp6105;
    panda$core$String* $tmp6108 = (($fn6107) self->$class->vtable[4])(self);
    testBit6106 = $tmp6108;
    panda$core$String* $tmp6110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6109, testBit6106);
    panda$core$String* $tmp6112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6110, &$s6111);
    panda$core$String* $tmp6113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6112, test6102);
    panda$core$String* $tmp6115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6113, &$s6114);
    (($fn6116) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6115);
    panda$core$String* $tmp6118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6117, testBit6106);
    panda$core$String* $tmp6120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6118, &$s6119);
    panda$core$String* $tmp6121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6120, loopBody6087);
    panda$core$String* $tmp6123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6121, &$s6122);
    panda$core$String* $tmp6124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6123, loopEnd6090);
    panda$core$String* $tmp6126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6124, &$s6125);
    (($fn6127) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6126);
    (($fn6128) self->$class->vtable[6])(self, loopBody6087, p_out);
    panda$core$Object* $tmp6129 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    (($fn6130) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6129), p_out);
    panda$core$Object* $tmp6131 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp6133 = (($fn6132) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6131));
    panda$core$Bit $tmp6134 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6133);
    if ($tmp6134.value) {
    {
        panda$core$String* $tmp6136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6135, loopStart6084);
        panda$core$String* $tmp6138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6136, &$s6137);
        (($fn6139) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6138);
    }
    }
    (($fn6140) self->$class->vtable[6])(self, loopEnd6090, p_out);
    (($fn6141) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart6142;
    panda$core$String* loopBody6145;
    panda$core$String* loopEnd6148;
    panda$core$String* test6160;
    panda$core$String* testBit6164;
    panda$core$String* $tmp6144 = (($fn6143) self->$class->vtable[5])(self);
    loopStart6142 = $tmp6144;
    panda$core$String* $tmp6147 = (($fn6146) self->$class->vtable[5])(self);
    loopBody6145 = $tmp6147;
    panda$core$String* $tmp6150 = (($fn6149) self->$class->vtable[5])(self);
    loopEnd6148 = $tmp6150;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6151 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp6151->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp6151->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp6151, ((panda$core$String*) p_d->payload), loopEnd6148, loopStart6142);
    (($fn6153) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp6151));
    panda$core$String* $tmp6155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6154, loopBody6145);
    panda$core$String* $tmp6157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6155, &$s6156);
    (($fn6158) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6157);
    (($fn6159) self->$class->vtable[6])(self, loopStart6142, p_out);
    panda$core$Object* $tmp6161 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp6163 = (($fn6162) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6161), p_out);
    test6160 = $tmp6163;
    panda$core$String* $tmp6166 = (($fn6165) self->$class->vtable[4])(self);
    testBit6164 = $tmp6166;
    panda$core$String* $tmp6168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6167, testBit6164);
    panda$core$String* $tmp6170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6168, &$s6169);
    panda$core$String* $tmp6171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6170, test6160);
    panda$core$String* $tmp6173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6171, &$s6172);
    (($fn6174) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6173);
    panda$core$String* $tmp6176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6175, testBit6164);
    panda$core$String* $tmp6178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6176, &$s6177);
    panda$core$String* $tmp6179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6178, loopBody6145);
    panda$core$String* $tmp6181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6179, &$s6180);
    panda$core$String* $tmp6182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6181, loopEnd6148);
    panda$core$String* $tmp6184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6182, &$s6183);
    (($fn6185) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6184);
    (($fn6186) self->$class->vtable[6])(self, loopBody6145, p_out);
    panda$core$Object* $tmp6187 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    (($fn6188) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6187), p_out);
    panda$core$Object* $tmp6189 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp6191 = (($fn6190) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6189));
    panda$core$Bit $tmp6192 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6191);
    if ($tmp6192.value) {
    {
        panda$core$String* $tmp6194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6193, loopStart6142);
        panda$core$String* $tmp6196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6194, &$s6195);
        (($fn6197) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6196);
    }
    }
    (($fn6198) self->$class->vtable[6])(self, loopEnd6148, p_out);
    (($fn6199) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart6200;
    panda$core$String* loopEnd6203;
    panda$core$String* $tmp6202 = (($fn6201) self->$class->vtable[5])(self);
    loopStart6200 = $tmp6202;
    panda$core$String* $tmp6205 = (($fn6204) self->$class->vtable[5])(self);
    loopEnd6203 = $tmp6205;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6206 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp6206->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp6206->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp6206, ((panda$core$String*) p_l->payload), loopEnd6203, loopStart6200);
    (($fn6208) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp6206));
    panda$core$String* $tmp6210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6209, loopStart6200);
    panda$core$String* $tmp6212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6210, &$s6211);
    (($fn6213) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6212);
    (($fn6214) self->$class->vtable[6])(self, loopStart6200, p_out);
    panda$core$Object* $tmp6215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    (($fn6216) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6215), p_out);
    panda$core$Object* $tmp6217 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp6219 = (($fn6218) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6217));
    panda$core$Bit $tmp6220 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6219);
    if ($tmp6220.value) {
    {
        panda$core$String* $tmp6222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6221, loopStart6200);
        panda$core$String* $tmp6224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6222, &$s6223);
        (($fn6225) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6224);
    }
    }
    (($fn6226) self->$class->vtable[6])(self, loopEnd6203, p_out);
    (($fn6227) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$945256228;
    org$pandalanguage$pandac$Variable* v6230;
    panda$core$String* ref6243;
    {
        $match$945256228 = p_target->kind;
        panda$core$Bit $tmp6229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$945256228, ((panda$core$Int64) { 1016 }));
        if ($tmp6229.value) {
        {
            v6230 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp6233 = (($fn6232) self->$class->vtable[29])(self, v6230);
            panda$core$String* $tmp6234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6231, $tmp6233);
            panda$core$String* $tmp6236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6234, &$s6235);
            panda$core$String* $tmp6238 = (($fn6237) self->$class->vtable[15])(self, v6230->type);
            panda$core$String* $tmp6239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6236, $tmp6238);
            panda$core$String* $tmp6241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6239, &$s6240);
            (($fn6242) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp6241);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp6245 = (($fn6244) self->$class->vtable[67])(self, p_value, p_out);
                ref6243 = $tmp6245;
                panda$core$String* $tmp6247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6246, ref6243);
                panda$core$String* $tmp6249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6247, &$s6248);
                panda$core$String* $tmp6251 = (($fn6250) self->$class->vtable[15])(self, v6230->type);
                panda$core$String* $tmp6252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6249, $tmp6251);
                panda$core$String* $tmp6254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6252, &$s6253);
                panda$core$String* $tmp6256 = (($fn6255) self->$class->vtable[29])(self, v6230);
                panda$core$String* $tmp6257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6254, $tmp6256);
                panda$core$String* $tmp6259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6257, &$s6258);
                (($fn6260) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6259);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp6261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$945256228, ((panda$core$Int64) { 1022 }));
        if ($tmp6261.value) {
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
    panda$collections$Iterator* decl$Iter6262;
    org$pandalanguage$pandac$IRNode* decl6274;
    {
        ITable* $tmp6263 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp6263->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6263 = $tmp6263->next;
        }
        $fn6265 $tmp6264 = $tmp6263->methods[0];
        panda$collections$Iterator* $tmp6266 = $tmp6264(((panda$collections$Iterable*) p_v->children));
        decl$Iter6262 = $tmp6266;
        $l6267:;
        ITable* $tmp6269 = decl$Iter6262->$class->itable;
        while ($tmp6269->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6269 = $tmp6269->next;
        }
        $fn6271 $tmp6270 = $tmp6269->methods[0];
        panda$core$Bit $tmp6272 = $tmp6270(decl$Iter6262);
        panda$core$Bit $tmp6273 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6272);
        if (!$tmp6273.value) goto $l6268;
        {
            ITable* $tmp6275 = decl$Iter6262->$class->itable;
            while ($tmp6275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6275 = $tmp6275->next;
            }
            $fn6277 $tmp6276 = $tmp6275->methods[1];
            panda$core$Object* $tmp6278 = $tmp6276(decl$Iter6262);
            decl6274 = ((org$pandalanguage$pandac$IRNode*) $tmp6278);
            panda$core$Int64 $tmp6279 = panda$collections$Array$get_count$R$panda$core$Int64(decl6274->children);
            panda$core$Bit $tmp6280 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6279, ((panda$core$Int64) { 1 }));
            if ($tmp6280.value) {
            {
                panda$core$Object* $tmp6281 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl6274->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp6282 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl6274->children, ((panda$core$Int64) { 1 }));
                (($fn6283) self->$class->vtable[76])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6281), ((org$pandalanguage$pandac$IRNode*) $tmp6282), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp6284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl6274->children, ((panda$core$Int64) { 0 }));
                (($fn6285) self->$class->vtable[76])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6284), NULL, p_out);
            }
            }
        }
        goto $l6267;
        $l6268:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$957096286;
    panda$core$String* base6296;
    panda$core$String* ptr6300;
    org$pandalanguage$pandac$ClassDecl* cl6303;
    panda$collections$ListView* fields6307;
    panda$core$Int64 index6310;
    panda$core$Range $tmp6311;
    panda$core$String* result6377;
    panda$core$String* reused6381;
    {
        $match$957096286 = p_lvalue->kind;
        panda$core$Bit $tmp6287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$957096286, ((panda$core$Int64) { 1009 }));
        if ($tmp6287.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp6289 = (($fn6288) self->compiler->$class->vtable[50])(self->compiler, p_lvalue);
            panda$core$String* $tmp6291 = (($fn6290) self->$class->vtable[78])(self, $tmp6289, p_out);
            return $tmp6291;
        }
        }
        else {
        panda$core$Bit $tmp6292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$957096286, ((panda$core$Int64) { 1016 }));
        if ($tmp6292.value) {
        {
            panda$core$String* $tmp6294 = (($fn6293) self->$class->vtable[29])(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp6294;
        }
        }
        else {
        panda$core$Bit $tmp6295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$957096286, ((panda$core$Int64) { 1026 }));
        if ($tmp6295.value) {
        {
            panda$core$Object* $tmp6297 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6299 = (($fn6298) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6297), p_out);
            base6296 = $tmp6299;
            panda$core$String* $tmp6302 = (($fn6301) self->$class->vtable[4])(self);
            ptr6300 = $tmp6302;
            panda$core$Object* $tmp6304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp6306 = (($fn6305) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6304)->type);
            cl6303 = $tmp6306;
            panda$collections$ListView* $tmp6309 = (($fn6308) self->compiler->$class->vtable[10])(self->compiler, cl6303);
            fields6307 = $tmp6309;
            index6310 = ((panda$core$Int64) { -1 });
            ITable* $tmp6312 = ((panda$collections$CollectionView*) fields6307)->$class->itable;
            while ($tmp6312->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp6312 = $tmp6312->next;
            }
            $fn6314 $tmp6313 = $tmp6312->methods[0];
            panda$core$Int64 $tmp6315 = $tmp6313(((panda$collections$CollectionView*) fields6307));
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp6311, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp6315)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp6317 = ((panda$core$Int64$wrapper*) $tmp6311.start)->value.value;
            panda$core$Int64 i6316 = { $tmp6317 };
            int64_t $tmp6319 = ((panda$core$Int64$wrapper*) $tmp6311.end)->value.value;
            int64_t $tmp6320 = $tmp6311.step.value;
            bool $tmp6321 = $tmp6311.inclusive.value;
            bool $tmp6328 = $tmp6320 > 0;
            if ($tmp6328) goto $l6326; else goto $l6327;
            $l6326:;
            if ($tmp6321) goto $l6329; else goto $l6330;
            $l6329:;
            if ($tmp6317 <= $tmp6319) goto $l6322; else goto $l6324;
            $l6330:;
            if ($tmp6317 < $tmp6319) goto $l6322; else goto $l6324;
            $l6327:;
            if ($tmp6321) goto $l6331; else goto $l6332;
            $l6331:;
            if ($tmp6317 >= $tmp6319) goto $l6322; else goto $l6324;
            $l6332:;
            if ($tmp6317 > $tmp6319) goto $l6322; else goto $l6324;
            $l6322:;
            {
                ITable* $tmp6334 = fields6307->$class->itable;
                while ($tmp6334->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp6334 = $tmp6334->next;
                }
                $fn6336 $tmp6335 = $tmp6334->methods[0];
                panda$core$Object* $tmp6337 = $tmp6335(fields6307, i6316);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp6337))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name) }).value) {
                {
                    index6310 = i6316;
                    goto $l6324;
                }
                }
            }
            $l6325:;
            if ($tmp6328) goto $l6339; else goto $l6340;
            $l6339:;
            int64_t $tmp6341 = $tmp6319 - i6316.value;
            if ($tmp6321) goto $l6342; else goto $l6343;
            $l6342:;
            if ($tmp6341 >= $tmp6320) goto $l6338; else goto $l6324;
            $l6343:;
            if ($tmp6341 > $tmp6320) goto $l6338; else goto $l6324;
            $l6340:;
            int64_t $tmp6345 = i6316.value - $tmp6319;
            if ($tmp6321) goto $l6346; else goto $l6347;
            $l6346:;
            if ($tmp6345 >= -$tmp6320) goto $l6338; else goto $l6324;
            $l6347:;
            if ($tmp6345 > -$tmp6320) goto $l6338; else goto $l6324;
            $l6338:;
            i6316.value += $tmp6320;
            goto $l6322;
            $l6324:;
            panda$core$String* $tmp6350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6349, ptr6300);
            panda$core$String* $tmp6352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6350, &$s6351);
            org$pandalanguage$pandac$Type* $tmp6354 = (($fn6353) cl6303->$class->vtable[3])(cl6303);
            panda$core$String* $tmp6356 = (($fn6355) self->$class->vtable[14])(self, $tmp6354);
            panda$core$String* $tmp6357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6352, $tmp6356);
            panda$core$String* $tmp6359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6357, &$s6358);
            org$pandalanguage$pandac$Type* $tmp6362 = (($fn6361) cl6303->$class->vtable[3])(cl6303);
            panda$core$String* $tmp6364 = (($fn6363) self->$class->vtable[14])(self, $tmp6362);
            panda$core$String* $tmp6365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6360, $tmp6364);
            panda$core$String* $tmp6367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6365, &$s6366);
            panda$core$String* $tmp6368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6367, base6296);
            panda$core$String* $tmp6370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6368, &$s6369);
            panda$core$String* $tmp6371 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6370, ((panda$core$Object*) wrap_panda$core$Int64(index6310)));
            panda$core$String* $tmp6373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6371, &$s6372);
            panda$core$String* $tmp6374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6359, $tmp6373);
            (($fn6375) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6374);
            return ptr6300;
        }
        }
        else {
        panda$core$Bit $tmp6376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$957096286, ((panda$core$Int64) { 1027 }));
        if ($tmp6376.value) {
        {
            panda$core$Object* $tmp6378 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6380 = (($fn6379) self->$class->vtable[78])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6378), p_out);
            result6377 = $tmp6380;
            panda$core$String* $tmp6383 = (($fn6382) self->$class->vtable[4])(self);
            reused6381 = $tmp6383;
            panda$core$String* $tmp6385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6384, reused6381);
            panda$core$String* $tmp6387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6385, &$s6386);
            panda$core$String* $tmp6389 = (($fn6388) self->$class->vtable[15])(self, p_lvalue->type);
            panda$core$String* $tmp6390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6387, $tmp6389);
            panda$core$String* $tmp6392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6390, &$s6391);
            panda$core$String* $tmp6395 = (($fn6394) self->$class->vtable[15])(self, p_lvalue->type);
            panda$core$String* $tmp6396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6393, $tmp6395);
            panda$core$String* $tmp6398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6396, &$s6397);
            panda$core$String* $tmp6399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6398, result6377);
            panda$core$String* $tmp6401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6399, &$s6400);
            panda$core$String* $tmp6402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6392, $tmp6401);
            (($fn6403) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6402);
            (($fn6404) self->reusedValues->$class->vtable[5])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value))), ((panda$core$Object*) reused6381));
            return result6377;
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
    panda$core$String* lvalue6405;
    panda$core$String* value6419;
    panda$core$String* t6420;
    panda$core$Int64 op6424;
    panda$core$String* right6426;
    panda$core$Object* $tmp6407 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6409 = (($fn6408) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6407)->type);
    panda$core$String* $tmp6410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6406, $tmp6409);
    panda$core$String* $tmp6412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6410, &$s6411);
    panda$core$Object* $tmp6413 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6415 = (($fn6414) self->$class->vtable[78])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6413), p_out);
    panda$core$String* $tmp6416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6412, $tmp6415);
    panda$core$String* $tmp6418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6416, &$s6417);
    lvalue6405 = $tmp6418;
    panda$core$Object* $tmp6421 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6423 = (($fn6422) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6421)->type);
    t6420 = $tmp6423;
    op6424 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp6425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op6424, ((panda$core$Int64) { 73 }));
    if ($tmp6425.value) {
    {
        panda$core$Object* $tmp6427 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp6429 = (($fn6428) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6427), p_out);
        right6426 = $tmp6429;
        panda$core$String* $tmp6431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6430, t6420);
        panda$core$String* $tmp6433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6431, &$s6432);
        panda$core$String* $tmp6434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6433, right6426);
        panda$core$String* $tmp6436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6434, &$s6435);
        value6419 = $tmp6436;
    }
    }
    else {
    {
    }
    }
    panda$core$String* $tmp6438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6437, value6419);
    panda$core$String* $tmp6440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6438, &$s6439);
    panda$core$String* $tmp6441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6440, lvalue6405);
    panda$core$String* $tmp6443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6441, &$s6442);
    (($fn6444) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6443);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline6450;
    panda$core$String* result6453;
    panda$core$Int64 $tmp6445 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp6446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6445, ((panda$core$Int64) { 1 }));
    if ($tmp6446.value) {
    {
        panda$core$Int64 $tmp6448 = (($fn6447) self->inlineContext->$class->vtable[7])(self->inlineContext);
        panda$core$Bit $tmp6449 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6448, ((panda$core$Int64) { 0 }));
        if ($tmp6449.value) {
        {
            panda$core$Object* $tmp6452 = (($fn6451) self->inlineContext->$class->vtable[4])(self->inlineContext);
            inline6450 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp6452);
            panda$core$Object* $tmp6454 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6456 = (($fn6455) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6454), p_out);
            result6453 = $tmp6456;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp6457 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp6457->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp6457->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp6457, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result6453));
            panda$collections$Array$add$panda$collections$Array$T(inline6450->returns, ((panda$core$Object*) $tmp6457));
            panda$core$String* $tmp6460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6459, inline6450->exitLabel);
            panda$core$String* $tmp6462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6460, &$s6461);
            org$pandalanguage$pandac$Position* $tmp6464 = (($fn6463) self->compiler->$class->vtable[94])(self->compiler, p_r->offset);
            panda$core$String* $tmp6465 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6462, ((panda$core$Object*) $tmp6464));
            panda$core$String* $tmp6467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6465, &$s6466);
            (($fn6468) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6467);
        }
        }
        else {
        {
            panda$core$Object* $tmp6470 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6472 = (($fn6471) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6470), p_out);
            panda$core$String* $tmp6473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6469, $tmp6472);
            panda$core$String* $tmp6475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6473, &$s6474);
            (($fn6476) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6475);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp6478 = (($fn6477) self->inlineContext->$class->vtable[7])(self->inlineContext);
        panda$core$Bit $tmp6479 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6478, ((panda$core$Int64) { 0 }));
        if ($tmp6479.value) {
        {
            panda$core$Object* $tmp6482 = (($fn6481) self->inlineContext->$class->vtable[4])(self->inlineContext);
            panda$core$String* $tmp6483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6480, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp6482)->exitLabel);
            panda$core$String* $tmp6485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6483, &$s6484);
            (($fn6486) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6485);
        }
        }
        else {
        {
            (($fn6488) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6487);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range $tmp6491;
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp6490 = (($fn6489) self->loopDescriptors->$class->vtable[4])(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6490);
    }
    }
    panda$core$Int64 $tmp6493 = (($fn6492) self->loopDescriptors->$class->vtable[7])(self->loopDescriptors);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp6491, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp6493)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp6495 = ((panda$core$Int64$wrapper*) $tmp6491.start)->value.value;
    panda$core$Int64 i6494 = { $tmp6495 };
    int64_t $tmp6497 = ((panda$core$Int64$wrapper*) $tmp6491.end)->value.value;
    int64_t $tmp6498 = $tmp6491.step.value;
    bool $tmp6499 = $tmp6491.inclusive.value;
    bool $tmp6506 = $tmp6498 > 0;
    if ($tmp6506) goto $l6504; else goto $l6505;
    $l6504:;
    if ($tmp6499) goto $l6507; else goto $l6508;
    $l6507:;
    if ($tmp6495 <= $tmp6497) goto $l6500; else goto $l6502;
    $l6508:;
    if ($tmp6495 < $tmp6497) goto $l6500; else goto $l6502;
    $l6505:;
    if ($tmp6499) goto $l6509; else goto $l6510;
    $l6509:;
    if ($tmp6495 >= $tmp6497) goto $l6500; else goto $l6502;
    $l6510:;
    if ($tmp6495 > $tmp6497) goto $l6500; else goto $l6502;
    $l6500:;
    {
        panda$core$Object* $tmp6514 = (($fn6513) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i6494);
        bool $tmp6512 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6514)->loopLabel != NULL }).value;
        if (!$tmp6512) goto $l6515;
        panda$core$Object* $tmp6517 = (($fn6516) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i6494);
        panda$core$Bit $tmp6518 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6517)->loopLabel, p_name);
        $tmp6512 = $tmp6518.value;
        $l6515:;
        panda$core$Bit $tmp6519 = { $tmp6512 };
        if ($tmp6519.value) {
        {
            panda$core$Object* $tmp6521 = (($fn6520) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i6494);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6521);
        }
        }
    }
    $l6503:;
    if ($tmp6506) goto $l6523; else goto $l6524;
    $l6523:;
    int64_t $tmp6525 = $tmp6497 - i6494.value;
    if ($tmp6499) goto $l6526; else goto $l6527;
    $l6526:;
    if ($tmp6525 >= $tmp6498) goto $l6522; else goto $l6502;
    $l6527:;
    if ($tmp6525 > $tmp6498) goto $l6522; else goto $l6502;
    $l6524:;
    int64_t $tmp6529 = i6494.value - $tmp6497;
    if ($tmp6499) goto $l6530; else goto $l6531;
    $l6530:;
    if ($tmp6529 >= -$tmp6498) goto $l6522; else goto $l6502;
    $l6531:;
    if ($tmp6529 > -$tmp6498) goto $l6522; else goto $l6502;
    $l6522:;
    i6494.value += $tmp6498;
    goto $l6500;
    $l6502:;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc6533;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6535 = (($fn6534) self->$class->vtable[81])(self, ((panda$core$String*) p_b->payload));
    desc6533 = $tmp6535;
    panda$core$String* $tmp6537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6536, desc6533->breakLabel);
    panda$core$String* $tmp6539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6537, &$s6538);
    (($fn6540) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6539);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc6541;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6543 = (($fn6542) self->$class->vtable[81])(self, ((panda$core$String*) p_c->payload));
    desc6541 = $tmp6543;
    panda$core$String* $tmp6545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6544, desc6541->continueLabel);
    panda$core$String* $tmp6547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6545, &$s6546);
    (($fn6548) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6547);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test6550;
    panda$core$String* ifTrue6554;
    panda$core$String* ifFalse6557;
    org$pandalanguage$pandac$Position* p6572;
    panda$core$String* name6575;
    panda$core$String$Index$nullable index6576;
    panda$core$Range $tmp6579;
    panda$core$String* nameRef6581;
    panda$core$String* line6584;
    panda$core$String* msg6589;
    panda$collections$Iterator* m$Iter6597;
    org$pandalanguage$pandac$MethodDecl* m6612;
    panda$core$Bit $tmp6549 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp6549.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp6551 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6553 = (($fn6552) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6551), p_out);
    test6550 = $tmp6553;
    panda$core$String* $tmp6556 = (($fn6555) self->$class->vtable[5])(self);
    ifTrue6554 = $tmp6556;
    panda$core$String* $tmp6559 = (($fn6558) self->$class->vtable[5])(self);
    ifFalse6557 = $tmp6559;
    panda$core$String* $tmp6561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6560, test6550);
    panda$core$String* $tmp6563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6561, &$s6562);
    panda$core$String* $tmp6564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6563, ifTrue6554);
    panda$core$String* $tmp6566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6564, &$s6565);
    panda$core$String* $tmp6567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6566, ifFalse6557);
    panda$core$String* $tmp6569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6567, &$s6568);
    (($fn6570) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6569);
    (($fn6571) self->$class->vtable[6])(self, ifFalse6557, p_out);
    org$pandalanguage$pandac$Position* $tmp6574 = (($fn6573) self->compiler->$class->vtable[94])(self->compiler, p_a->offset);
    p6572 = $tmp6574;
    panda$core$String$Index$nullable $tmp6578 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p6572->file, &$s6577);
    index6576 = $tmp6578;
    if (((panda$core$Bit) { !index6576.nonnull }).value) {
    {
        name6575 = p6572->file;
    }
    }
    else {
    {
        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp6579, (index6576.nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) index6576.value))) : NULL), (((panda$core$String$Index$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) ((panda$core$String$Index$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp6580 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p6572->file, $tmp6579);
        name6575 = $tmp6580;
    }
    }
    panda$core$String* $tmp6583 = (($fn6582) self->$class->vtable[59])(self, name6575, p_out);
    nameRef6581 = $tmp6583;
    panda$core$String* $tmp6586 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s6585, ((panda$core$Object*) wrap_panda$core$Int64(p6572->line)));
    panda$core$String* $tmp6588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6586, &$s6587);
    line6584 = $tmp6588;
    panda$core$Int64 $tmp6590 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6590, ((panda$core$Int64) { 2 }));
    if ($tmp6591.value) {
    {
        panda$core$Object* $tmp6592 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp6594 = (($fn6593) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6592), p_out);
        msg6589 = $tmp6594;
    }
    }
    else {
    {
        msg6589 = NULL;
    }
    }
    (($fn6596) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s6595);
    {
        org$pandalanguage$pandac$Type* $tmp6598 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp6600 = (($fn6599) self->compiler->$class->vtable[13])(self->compiler, $tmp6598);
        ITable* $tmp6601 = ((panda$collections$Iterable*) $tmp6600->methods)->$class->itable;
        while ($tmp6601->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6601 = $tmp6601->next;
        }
        $fn6603 $tmp6602 = $tmp6601->methods[0];
        panda$collections$Iterator* $tmp6604 = $tmp6602(((panda$collections$Iterable*) $tmp6600->methods));
        m$Iter6597 = $tmp6604;
        $l6605:;
        ITable* $tmp6607 = m$Iter6597->$class->itable;
        while ($tmp6607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6607 = $tmp6607->next;
        }
        $fn6609 $tmp6608 = $tmp6607->methods[0];
        panda$core$Bit $tmp6610 = $tmp6608(m$Iter6597);
        panda$core$Bit $tmp6611 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6610);
        if (!$tmp6611.value) goto $l6606;
        {
            ITable* $tmp6613 = m$Iter6597->$class->itable;
            while ($tmp6613->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6613 = $tmp6613->next;
            }
            $fn6615 $tmp6614 = $tmp6613->methods[1];
            panda$core$Object* $tmp6616 = $tmp6614(m$Iter6597);
            m6612 = ((org$pandalanguage$pandac$MethodDecl*) $tmp6616);
            panda$core$Bit $tmp6618 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m6612)->name, &$s6617);
            if ($tmp6618.value) {
            {
                (($fn6619) self->compiler->$class->vtable[6])(self->compiler, m6612);
                (($fn6620) self->$class->vtable[87])(self, m6612);
            }
            }
        }
        goto $l6605;
        $l6606:;
    }
    if (((panda$core$Bit) { msg6589 != NULL }).value) {
    {
        panda$core$String* $tmp6623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6621, &$s6622);
        (($fn6624) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6623);
    }
    }
    else {
    {
        (($fn6626) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s6625);
    }
    }
    panda$core$String* $tmp6628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6627, nameRef6581);
    panda$core$String* $tmp6630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6628, &$s6629);
    panda$core$String* $tmp6631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6630, line6584);
    panda$core$String* $tmp6633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6631, &$s6632);
    (($fn6634) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6633);
    if (((panda$core$Bit) { msg6589 != NULL }).value) {
    {
        panda$core$String* $tmp6636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6635, msg6589);
        panda$core$String* $tmp6638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6636, &$s6637);
        (($fn6639) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6638);
    }
    }
    (($fn6641) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6640);
    (($fn6643) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6642);
    (($fn6644) self->$class->vtable[6])(self, ifTrue6554, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$1033856645;
    {
        $match$1033856645 = p_stmt->kind;
        panda$core$Bit $tmp6646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1023 }));
        if ($tmp6646.value) {
        {
            (($fn6647) self->$class->vtable[79])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1000 }));
        if ($tmp6648.value) {
        {
            (($fn6649) self->$class->vtable[68])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1005 }));
        if ($tmp6650.value) {
        {
            (($fn6651) self->$class->vtable[70])(self, p_stmt, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1012 }));
        if ($tmp6652.value) {
        {
            (($fn6653) self->$class->vtable[71])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1029 }));
        if ($tmp6654.value) {
        {
            (($fn6655) self->$class->vtable[72])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1013 }));
        if ($tmp6656.value) {
        {
            (($fn6657) self->$class->vtable[73])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1014 }));
        if ($tmp6658.value) {
        {
            (($fn6659) self->$class->vtable[74])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1015 }));
        if ($tmp6660.value) {
        {
            (($fn6661) self->$class->vtable[75])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1017 }));
        bool $tmp6664 = $tmp6665.value;
        if ($tmp6664) goto $l6666;
        panda$core$Bit $tmp6667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1018 }));
        $tmp6664 = $tmp6667.value;
        $l6666:;
        panda$core$Bit $tmp6668 = { $tmp6664 };
        bool $tmp6663 = $tmp6668.value;
        if ($tmp6663) goto $l6669;
        panda$core$Bit $tmp6670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1019 }));
        $tmp6663 = $tmp6670.value;
        $l6669:;
        panda$core$Bit $tmp6671 = { $tmp6663 };
        bool $tmp6662 = $tmp6671.value;
        if ($tmp6662) goto $l6672;
        panda$core$Bit $tmp6673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1020 }));
        $tmp6662 = $tmp6673.value;
        $l6672:;
        panda$core$Bit $tmp6674 = { $tmp6662 };
        if ($tmp6674.value) {
        {
            (($fn6675) self->$class->vtable[77])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1008 }));
        if ($tmp6676.value) {
        {
            (($fn6677) self->$class->vtable[80])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1006 }));
        if ($tmp6678.value) {
        {
            (($fn6679) self->$class->vtable[82])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1007 }));
        if ($tmp6680.value) {
        {
            (($fn6681) self->$class->vtable[83])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033856645, ((panda$core$Int64) { 1034 }));
        if ($tmp6682.value) {
        {
            (($fn6683) self->$class->vtable[84])(self, p_stmt, p_out);
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
    panda$core$String* result6684;
    org$pandalanguage$pandac$Type* $tmp6686 = (($fn6685) p_m->owner->$class->vtable[3])(p_m->owner);
    panda$core$String* $tmp6688 = (($fn6687) self->$class->vtable[15])(self, $tmp6686);
    result6684 = $tmp6688;
    panda$core$Bit $tmp6690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6689 = $tmp6690.value;
    if (!$tmp6689) goto $l6691;
    panda$core$Bit $tmp6693 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6684, &$s6692);
    panda$core$Bit $tmp6694 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6693);
    $tmp6689 = $tmp6694.value;
    $l6691:;
    panda$core$Bit $tmp6695 = { $tmp6689 };
    if ($tmp6695.value) {
    {
        panda$core$String* $tmp6697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6684, &$s6696);
        return $tmp6697;
    }
    }
    return result6684;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6698;
    panda$core$Bit needsIndirection6711;
    panda$core$String* separator6726;
    panda$collections$Iterator* p$Iter6750;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6762;
    panda$core$String* $tmp6700 = (($fn6699) self->$class->vtable[30])(self, p_m);
    name6698 = $tmp6700;
    panda$core$Bit $tmp6702 = (($fn6701) self->declared->$class->vtable[7])(self->declared, ((panda$collections$Key*) name6698));
    if ($tmp6702.value) {
    {
        return;
    }
    }
    (($fn6703) self->declared->$class->vtable[2])(self->declared, ((panda$core$Object*) ((panda$collections$Key*) name6698)));
    panda$core$String* $tmp6706 = (($fn6705) self->$class->vtable[40])(self, p_m);
    panda$core$String* $tmp6707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6704, $tmp6706);
    panda$core$String* $tmp6709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6707, &$s6708);
    (($fn6710) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6709);
    panda$core$Bit $tmp6713 = (($fn6712) self->$class->vtable[24])(self, p_m);
    needsIndirection6711 = $tmp6713;
    if (needsIndirection6711.value) {
    {
        (($fn6715) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6714);
    }
    }
    else {
    {
        panda$core$String* $tmp6717 = (($fn6716) self->$class->vtable[15])(self, p_m->returnType);
        (($fn6718) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6717);
    }
    }
    panda$core$String* $tmp6721 = (($fn6720) self->$class->vtable[30])(self, p_m);
    panda$core$String* $tmp6722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6719, $tmp6721);
    panda$core$String* $tmp6724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6722, &$s6723);
    (($fn6725) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6724);
    separator6726 = &$s6727;
    if (needsIndirection6711.value) {
    {
        panda$core$String* $tmp6730 = (($fn6729) self->$class->vtable[15])(self, p_m->returnType);
        panda$core$String* $tmp6731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6728, $tmp6730);
        panda$core$String* $tmp6733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6731, &$s6732);
        (($fn6734) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6733);
        separator6726 = &$s6735;
    }
    }
    panda$core$Bit $tmp6737 = (($fn6736) p_m->annotations->$class->vtable[5])(p_m->annotations);
    panda$core$Bit $tmp6738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6737);
    if ($tmp6738.value) {
    {
        panda$core$String* $tmp6740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6739, separator6726);
        panda$core$String* $tmp6742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6740, &$s6741);
        panda$core$String* $tmp6744 = (($fn6743) self->$class->vtable[86])(self, p_m);
        panda$core$String* $tmp6745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6742, $tmp6744);
        panda$core$String* $tmp6747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6745, &$s6746);
        (($fn6748) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6747);
        separator6726 = &$s6749;
    }
    }
    {
        ITable* $tmp6751 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6751->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6751 = $tmp6751->next;
        }
        $fn6753 $tmp6752 = $tmp6751->methods[0];
        panda$collections$Iterator* $tmp6754 = $tmp6752(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6750 = $tmp6754;
        $l6755:;
        ITable* $tmp6757 = p$Iter6750->$class->itable;
        while ($tmp6757->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6757 = $tmp6757->next;
        }
        $fn6759 $tmp6758 = $tmp6757->methods[0];
        panda$core$Bit $tmp6760 = $tmp6758(p$Iter6750);
        panda$core$Bit $tmp6761 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6760);
        if (!$tmp6761.value) goto $l6756;
        {
            ITable* $tmp6763 = p$Iter6750->$class->itable;
            while ($tmp6763->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6763 = $tmp6763->next;
            }
            $fn6765 $tmp6764 = $tmp6763->methods[1];
            panda$core$Object* $tmp6766 = $tmp6764(p$Iter6750);
            p6762 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6766);
            panda$core$String* $tmp6768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6767, separator6726);
            panda$core$String* $tmp6770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6768, &$s6769);
            panda$core$String* $tmp6772 = (($fn6771) self->$class->vtable[15])(self, p6762->type);
            panda$core$String* $tmp6773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6770, $tmp6772);
            panda$core$String* $tmp6775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6773, &$s6774);
            panda$core$String* $tmp6777 = (($fn6776) self->$class->vtable[28])(self, p6762->name);
            panda$core$String* $tmp6778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6775, $tmp6777);
            panda$core$String* $tmp6780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6778, &$s6779);
            (($fn6781) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6780);
            separator6726 = &$s6782;
        }
        goto $l6755;
        $l6756:;
    }
    (($fn6784) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6783);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6804;
    panda$collections$Iterator* p$Iter6817;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6829;
    panda$io$MemoryOutputStream* bodyBuffer6853;
    panda$io$IndentedOutputStream* indentedBody6856;
    panda$collections$Iterator* s$Iter6859;
    org$pandalanguage$pandac$IRNode* s6871;
    self->currentMethod = p_m;
    self->currentBlock = &$s6785;
    self->varCount = ((panda$core$Int64) { 0 });
    (($fn6786) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    panda$core$String* $tmp6789 = (($fn6788) self->$class->vtable[40])(self, p_m);
    panda$core$String* $tmp6790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6787, $tmp6789);
    panda$core$String* $tmp6792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6790, &$s6791);
    panda$core$String* $tmp6794 = (($fn6793) self->$class->vtable[15])(self, p_m->returnType);
    panda$core$String* $tmp6795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6792, $tmp6794);
    panda$core$String* $tmp6797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6795, &$s6796);
    panda$core$String* $tmp6799 = (($fn6798) self->$class->vtable[30])(self, p_m);
    panda$core$String* $tmp6800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6797, $tmp6799);
    panda$core$String* $tmp6802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6800, &$s6801);
    (($fn6803) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6802);
    separator6804 = &$s6805;
    panda$core$Bit $tmp6807 = (($fn6806) p_m->annotations->$class->vtable[5])(p_m->annotations);
    panda$core$Bit $tmp6808 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6807);
    if ($tmp6808.value) {
    {
        panda$core$String* $tmp6811 = (($fn6810) self->$class->vtable[86])(self, p_m);
        panda$core$String* $tmp6812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6809, $tmp6811);
        panda$core$String* $tmp6814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6812, &$s6813);
        (($fn6815) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6814);
        separator6804 = &$s6816;
    }
    }
    {
        ITable* $tmp6818 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6818->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6818 = $tmp6818->next;
        }
        $fn6820 $tmp6819 = $tmp6818->methods[0];
        panda$collections$Iterator* $tmp6821 = $tmp6819(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6817 = $tmp6821;
        $l6822:;
        ITable* $tmp6824 = p$Iter6817->$class->itable;
        while ($tmp6824->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6824 = $tmp6824->next;
        }
        $fn6826 $tmp6825 = $tmp6824->methods[0];
        panda$core$Bit $tmp6827 = $tmp6825(p$Iter6817);
        panda$core$Bit $tmp6828 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6827);
        if (!$tmp6828.value) goto $l6823;
        {
            ITable* $tmp6830 = p$Iter6817->$class->itable;
            while ($tmp6830->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6830 = $tmp6830->next;
            }
            $fn6832 $tmp6831 = $tmp6830->methods[1];
            panda$core$Object* $tmp6833 = $tmp6831(p$Iter6817);
            p6829 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6833);
            panda$core$String* $tmp6835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6834, separator6804);
            panda$core$String* $tmp6837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6835, &$s6836);
            panda$core$String* $tmp6839 = (($fn6838) self->$class->vtable[15])(self, p6829->type);
            panda$core$String* $tmp6840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6837, $tmp6839);
            panda$core$String* $tmp6842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6840, &$s6841);
            panda$core$String* $tmp6844 = (($fn6843) self->$class->vtable[28])(self, p6829->name);
            panda$core$String* $tmp6845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6842, $tmp6844);
            panda$core$String* $tmp6847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6845, &$s6846);
            (($fn6848) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6847);
            separator6804 = &$s6849;
        }
        goto $l6822;
        $l6823:;
    }
    (($fn6851) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6850);
    panda$core$Int64 $tmp6852 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6852;
    panda$io$MemoryOutputStream* $tmp6854 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6854->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6854->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6854);
    bodyBuffer6853 = $tmp6854;
    panda$io$IndentedOutputStream* $tmp6857 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp6857->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6857->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6857, ((panda$io$OutputStream*) bodyBuffer6853));
    indentedBody6856 = $tmp6857;
    {
        ITable* $tmp6860 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6860->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6860 = $tmp6860->next;
        }
        $fn6862 $tmp6861 = $tmp6860->methods[0];
        panda$collections$Iterator* $tmp6863 = $tmp6861(((panda$collections$Iterable*) p_body->children));
        s$Iter6859 = $tmp6863;
        $l6864:;
        ITable* $tmp6866 = s$Iter6859->$class->itable;
        while ($tmp6866->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6866 = $tmp6866->next;
        }
        $fn6868 $tmp6867 = $tmp6866->methods[0];
        panda$core$Bit $tmp6869 = $tmp6867(s$Iter6859);
        panda$core$Bit $tmp6870 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6869);
        if (!$tmp6870.value) goto $l6865;
        {
            ITable* $tmp6872 = s$Iter6859->$class->itable;
            while ($tmp6872->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6872 = $tmp6872->next;
            }
            $fn6874 $tmp6873 = $tmp6872->methods[1];
            panda$core$Object* $tmp6875 = $tmp6873(s$Iter6859);
            s6871 = ((org$pandalanguage$pandac$IRNode*) $tmp6875);
            (($fn6876) self->$class->vtable[85])(self, s6871, indentedBody6856);
        }
        goto $l6864;
        $l6865:;
    }
    panda$core$String* $tmp6878 = (($fn6877) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn6879) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6878);
    panda$core$String* $tmp6881 = (($fn6880) bodyBuffer6853->$class->vtable[0])(bodyBuffer6853);
    (($fn6882) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6881);
    panda$core$Bit $tmp6884 = (($fn6883) self->$class->vtable[7])(self, p_body);
    panda$core$Bit $tmp6885 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6884);
    if ($tmp6885.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6886 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6888 = (($fn6887) p_m->returnType->$class->vtable[4])(p_m->returnType, ((panda$core$Object*) $tmp6886));
        if ($tmp6888.value) {
        {
            (($fn6890) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6889);
        }
        }
        else {
        {
            (($fn6892) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6891);
        }
        }
    }
    }
    panda$core$Int64 $tmp6893 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6893;
    (($fn6895) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6894);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Type* $tmp6897 = (($fn6896) p_cl->$class->vtable[3])(p_cl);
    (($fn6898) self->$class->vtable[12])(self, $tmp6897);
    (($fn6899) self->$class->vtable[26])(self, p_cl);
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
        panda$core$String* $tmp6901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6900, self->loopLabel);
        panda$core$String* $tmp6903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6901, &$s6902);
        return $tmp6903;
    }
    }
    else {
    {
        return &$s6904;
    }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* self, panda$core$String* p_varSuffix, panda$core$String* p_selfRef, panda$collections$ListView* p_argRefs, panda$core$String* p_exitLabel) {
    panda$collections$Array* $tmp6905 = (panda$collections$Array*) malloc(40);
    $tmp6905->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp6905->refCount.value = 1;
    panda$collections$Array$init($tmp6905);
    self->returns = $tmp6905;
    self->varSuffix = p_varSuffix;
    self->selfRef = p_selfRef;
    panda$collections$ImmutableArray* $tmp6907 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp6907->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp6907->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp6907, p_argRefs);
    self->argRefs = $tmp6907;
    self->exitLabel = p_exitLabel;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B(org$pandalanguage$pandac$LLVMCodeGenerator$Pair* self, panda$core$Object* p_first, panda$core$Object* p_second) {
    self->first = p_first;
    self->second = p_second;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$init(org$pandalanguage$pandac$LLVMCodeGenerator$OpClass* self) {
}

