#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/OutputStream.h"
#include "panda/io/MemoryOutputStream.h"
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
#include "panda/collections/ImmutableArray.h"
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
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/Pair.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/MethodShim.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/InlineContext.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"
#include "panda/core/UInt64.h"
#include "panda/core/Int8.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/io/File.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/SymbolTable.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$finish} };

org$pandalanguage$pandac$LLVMCodeGenerator$class_type org$pandalanguage$pandac$LLVMCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$finish, org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim, org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT, org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl} };

typedef void (*$fn40)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn42)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn44)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn46)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn48)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn50)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn53)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn55)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn57)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn59)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn61)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn63)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn64)(panda$core$Object*);
typedef void (*$fn79)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn111)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn117)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn123)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn152)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn158)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn164)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn195)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn201)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn207)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn240)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn246)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn252)(panda$collections$Iterator*);
typedef void (*$fn277)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn296)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn302)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn308)(panda$collections$Iterator*);
typedef void (*$fn325)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn334)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn497)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn503)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn509)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn536)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn583)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn594)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn600)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn606)(panda$collections$Iterator*);
typedef void (*$fn622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn655)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn658)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn665)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn671)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn699)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn751)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn770)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn796)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn804)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn816)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn818)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn824)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn839)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn842)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn853)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn883)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn891)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn896)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn947)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn972)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn998)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1006)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1013)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1022)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1028)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1034)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1061)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1108)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1119)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1125)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1131)(panda$collections$Iterator*);
typedef void (*$fn1148)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1256)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1276)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1333)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1344)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1350)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1356)(panda$collections$Iterator*);
typedef void (*$fn1372)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1390)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1413)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1480)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1491)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1509)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1533)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1702)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1708)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1714)(panda$collections$Iterator*);
typedef void (*$fn1747)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1763)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1776)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1782)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1797)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1810)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1839)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1845)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1860)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1918)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1934)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1943)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1959)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1968)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2006)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2023)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2031)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2039)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2064)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2086)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2103)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2126)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2135)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2170)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2179)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2191)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2201)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2238)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2253)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2276)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2283)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2312)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2321)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2350)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2374)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2387)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2399)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2404)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2411)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2428)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2441)(panda$collections$CollectionView*);
typedef void (*$fn2461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2473)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2488)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2515)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2536)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2549)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2588)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2603)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2628)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2640)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2660)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2675)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2691)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2703)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2720)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2737)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2751)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2774)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2789)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2824)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2871)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2878)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2889)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2895)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2901)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2907)(panda$collections$Iterator*);
typedef void (*$fn2918)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2920)(panda$io$OutputStream*);
typedef void (*$fn2945)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3065)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3077)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3082)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3095)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3102)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3107)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3113)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3119)(panda$collections$Iterator*);
typedef void (*$fn3127)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3130)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3142)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3180)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3191)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3212)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3257)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3277)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3293)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3298)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3314)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3330)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3348)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3379)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3396)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3418)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3458)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3490)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3501)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3529)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3551)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3566)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3581)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3605)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3618)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3695)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3750)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3805)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3837)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3850)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3877)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3892)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3925)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3937)(panda$collections$CollectionView*);
typedef void (*$fn3948)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3955)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3961)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3967)(panda$collections$Iterator*);
typedef void (*$fn3976)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3979)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4016)(panda$collections$CollectionView*);
typedef void (*$fn4028)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4051)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4074)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4082)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4090)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4099)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4121)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4129)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4170)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4181)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4225)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4231)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4237)(panda$collections$Iterator*);
typedef void (*$fn4259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4286)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4311)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4323)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4344)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4451)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4467)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4484)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4488)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4494)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4500)(panda$collections$Iterator*);
typedef void (*$fn4502)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4503)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4506)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4529)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4544)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4557)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4568)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4604)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4611)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4623)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4632)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4649)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4663)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4681)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4724)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4743)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4754)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4773)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4806)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4823)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4836)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4848)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4859)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4871)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4882)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4894)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4906)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4914)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4928)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4933)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4969)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4976)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4997)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5014)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5028)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5037)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5046)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5060)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5069)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5109)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5121)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5157)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5168)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5187)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5198)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5215)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5234)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5245)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5264)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5275)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5290)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5297)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5314)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5329)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5342)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5357)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5368)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5383)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5394)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5421)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5434)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5447)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5458)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5471)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5482)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5497)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5509)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5517)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5531)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5536)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5559)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5571)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5582)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5591)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5610)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5633)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5642)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5656)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5665)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5675)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5690)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5707)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5713)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5719)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5745)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5762)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5811)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5832)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5869)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5890)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5897)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5907)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5949)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5956)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5983)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6005)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6011)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6017)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6023)(panda$collections$Iterator*);
typedef void (*$fn6030)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6032)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6040)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6045)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6047)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6049)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6065)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6078)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6094)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6145)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6159)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6192)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6219)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6225)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6238)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6249)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6254)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6260)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6266)(panda$collections$Iterator*);
typedef void (*$fn6279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6282)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6288)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6291)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6304)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6313)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6318)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6324)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6330)(panda$collections$Iterator*);
typedef void (*$fn6343)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6346)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6354)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6360)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6366)(panda$collections$Iterator*);
typedef void (*$fn6369)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6371)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6377)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6379)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6381)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x64\x61\x74\x61\x6C\x61\x79\x6F\x75\x74\x20\x3D\x20\x22\x65\x2D\x70\x3A\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x69\x31\x3A\x38\x3A\x38\x2D\x69\x38\x3A\x38\x3A\x38\x2D\x69\x31\x36\x3A\x31\x36\x3A\x31\x36\x2D\x69\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x69\x36\x34\x3A", 72, -2136109323027823452, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34\x3A\x36\x34\x2D\x66\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x66\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x31\x32\x38\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D\x61\x30\x3A\x30\x3A\x36\x34\x2D\x73\x30\x3A\x36\x34\x3A\x36\x34\x2D\x66\x38\x30\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D", 78, 5799116395808447649, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x38\x3A\x31\x36\x3A\x33\x32\x3A\x36\x34\x2D\x53\x31\x32\x38\x22", 17, 7901878064487099872, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6C\x65\x20\x3D\x20\x22\x78\x38\x36\x5F\x36\x34\x2D\x61\x70\x70\x6C\x65\x2D\x6D\x61\x63\x6F\x73\x78\x31\x30\x2E\x38\x2E\x30\x22", 43, 3400234747603112012, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x29", 24, -2210603903278664580, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x2C\x20\x69\x36\x34\x29", 30, 3586448203758996221, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x29", 23, -7018940500590626091, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 60, -1505061774972200745, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, 13945, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 10, -1449713479277747265, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A", 3, 2107104, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D", 42, -5714228190486053526, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 18, -4598689173877776656, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 19, -8589797053445341862, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x31\x20\x7D", 6, 1527403190288, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69", 1, 206, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x31", 2, 20855, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 13473, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, -907514259111148708, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2, 13883, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 224, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, -6248805146137626796, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 14387129908788272, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 22145878250529579, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 200217461, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 786813570417990567, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, -7649133232731397023, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 14375831170, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3, 1360582, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2, 14050, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, -5595348649711353309, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1496394141948660748, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12, 8117540625486023742, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, 4666563658315683327, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, 8017085082545020976, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s1009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, -907514259111148708, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, 1496394141948660752, NULL };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 224, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, -6248805146137626796, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 14387129908788272, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 22145878250529579, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 200217461, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 786813570417990567, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, -7649133232731397023, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, 2313371919207, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s1243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, -7053567309059437070, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, -5503210093567996833, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 8410572937891831521, NULL };
static panda$core$String $s1312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 4466831713963476000, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, -899563194480661156, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1482468, NULL };
static panda$core$String $s1336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1453100120787609604, NULL };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 22145878250529579, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 200217461, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, -7053567309059437070, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, -5503210093567996833, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s1428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s1430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 8410572937891831521, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 4466831713963476000, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, 137534358, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1482468, NULL };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1453100120787609604, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s1519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, 1982351, NULL };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, 13918, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1405297, NULL };
static panda$core$String $s1560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1404792, NULL };
static panda$core$String $s1565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, 13904, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, 217363422, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, -2786053692556271290, NULL };
static panda$core$String $s1619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, 141821238, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, 142006571, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, 141945375, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, 141852364, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, 146203701926599, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, 141994765, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, 141975383, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, 141902866, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, 1447551143116, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, 1404587, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, 141953965, NULL };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1404792, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1405297, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, 1404777, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, 1405282, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, 1405598, NULL };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, 141832564, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, 141822248, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, 14324945814, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, 142056986, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, 14325180552, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, 141954978, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, 14325078544, NULL };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, 142005268, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s1697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, 142005274, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, 1405855, NULL };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, -8516432373732149011, NULL };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s1805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s1818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, -8516432373731118710, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 2215331, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 2154135, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, 223575839, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, 223718240, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 2214028, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, 205183331, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 2031008, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 21526, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 2265746, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 219725109287572, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 219725109288469, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, 22192236038186692, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, 22192236038187197, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, 22192236038186677, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, 22192236038187182, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 2215331, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 2154135, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, 225636441, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, 225778842, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 2214028, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, 216516642, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 2031008, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 21526, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 2265746, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 219725109287572, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 219725109288469, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, 22192236038207094, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, 22192236038207599, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, 22192236038207079, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, 22192236038207584, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, 210150800, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, 210336133, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, 210274937, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, 210181926, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, 21870595432513580, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, 21870595432514477, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, 21870595432513785, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, 21870595432514290, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, 21870595432513770, NULL };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, 21870595432514275, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 13524, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1983470, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x73\x74\x63\x63\x20", 7, 216520157801561, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, 212767339, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A", 2, 14485, NULL };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, 14834798317007399, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, 5996012307911795392, NULL };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, 19638, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s2316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, -284792955217493296, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, 1445392722364703443, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s2359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, 9180175165629405233, NULL };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, 147755760, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, 1445392722364703444, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, 2891297979021532403, NULL };
static panda$core$String $s2458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 20716344924, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, -68084191220774643, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, 212798144, NULL };
static panda$core$String $s2657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 229298558774239, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, 2946720541906757250, NULL };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, 178709719977385382, NULL };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, 2005081535935103476, NULL };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 146543380183876, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, 22799530931, NULL };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s2887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s2919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 171978245881277, NULL };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 14324499638457470, NULL };
static panda$core$String $s3072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1450073858438092980, NULL };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1983470, NULL };
static panda$core$String $s3204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s3261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s3263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s3265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s3270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 25, -6025032490972529456, NULL };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 22, 3938018972516606829, NULL };
static panda$core$String $s3275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, -6901405387198259419, NULL };
static panda$core$String $s3294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, -5055193716233257020, NULL };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, -38380777888947644, NULL };
static panda$core$String $s3315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s3318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s3470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1971047, NULL };
static panda$core$String $s3515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, -7594506016420023174, NULL };
static panda$core$String $s3518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 2084875595949565210, NULL };
static panda$core$String $s3599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 22699766057, NULL };
static panda$core$String $s3630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 223587553, NULL };
static panda$core$String $s3631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 230799660, NULL };
static panda$core$String $s3672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 212358244529747, NULL };
static panda$core$String $s3681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s3797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s3803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s3867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s3875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 21489501287, NULL };
static panda$core$String $s3880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 3556234982078979695, NULL };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x69\x38\x2A\x2A\x20", 11, -1701017812076485794, NULL };
static panda$core$String $s3889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s3904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 175539598599330, NULL };
static panda$core$String $s3930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1410364661239, NULL };
static panda$core$String $s3943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, -4682671939848071135, NULL };
static panda$core$String $s3946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s3950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 2107094, NULL };
static panda$core$String $s3974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s3982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 17208241946, NULL };
static panda$core$String $s3984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, -4560911471279777923, NULL };
static panda$core$String $s3994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s3996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s4002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 54, -4410989833928586841, NULL };
static panda$core$String $s4004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, -1652634297463438611, NULL };
static panda$core$String $s4006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, -1388553655089279848, NULL };
static panda$core$String $s4019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s4022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s4025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20\x69\x38\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 14, 8437322619071490889, NULL };
static panda$core$String $s4032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 14479861264, NULL };
static panda$core$String $s4038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s4042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s4049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, 24050909224991147, NULL };
static panda$core$String $s4069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, -1449709338160382639, NULL };
static panda$core$String $s4080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, 149724671, NULL };
static panda$core$String $s4085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s4088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s4097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 24050909225001348, NULL };
static panda$core$String $s4116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s4127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s4133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s4136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s4148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 2138506394783058478, NULL };
static panda$core$String $s4150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s4161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s4168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 141826750873303, NULL };
static panda$core$String $s4176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 13886901203, NULL };
static panda$core$String $s4179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s4252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s4281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s4298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s4305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 214439158056679, NULL };
static panda$core$String $s4334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s4337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s4340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 2149145203081189652, NULL };
static panda$core$String $s4342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s4412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s4446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s4458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s4618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s4636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s4639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s4650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s4676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s4697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s4704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s4707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s4712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s4721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s4734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s4764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s4791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s4843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s4866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s4889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s4901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s4904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s4907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s4909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s4983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s5001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s5004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s5015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s5041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s5048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s5052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, -8455018733144080751, NULL };
static panda$core$String $s5055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s5058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1527347502952, NULL };
static panda$core$String $s5085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s5087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s5089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s5092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s5095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s5097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s5101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 5640068998409967338, NULL };
static panda$core$String $s5104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 150, NULL };
static panda$core$String $s5111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s5148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s5178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 2091237, NULL };
static panda$core$String $s5225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 2092752, NULL };
static panda$core$String $s5255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s5419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s5489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s5504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s5507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s5510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s5512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s5673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s5777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 5661491935713932202, NULL };
static panda$core$String $s5788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s5805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s5809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s5818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s5895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s5945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s5995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s5997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s6004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x66\x61\x73\x74\x63\x63\x20\x76\x6F\x69\x64\x20", 17, 8605580293215133655, NULL };
static panda$core$String $s6025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1112391861657830585, NULL };
static panda$core$String $s6027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, -3426205430399916046, NULL };
static panda$core$String $s6028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, -6932554582644871757, NULL };
static panda$core$String $s6031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, -418642434149121372, NULL };
static panda$core$String $s6033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, -3066853447063148068, NULL };
static panda$core$String $s6035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 3939743058867758116, NULL };
static panda$core$String $s6043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s6048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s6060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s6063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s6067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s6071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, 230550101366891, NULL };
static panda$core$String $s6073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s6092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 13524, NULL };
static panda$core$String $s6135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, 14293708514290657, NULL };
static panda$core$String $s6137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s6143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, 13873332722, NULL };
static panda$core$String $s6188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s6190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 21658185952146853, NULL };
static panda$core$String $s6217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s6226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s6284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s6287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s6290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s6294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s6376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s6378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s6380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };

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
    self->methods = $tmp5;
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp7->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp7->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp7);
    self->methodHeader = $tmp7;
    panda$io$MemoryOutputStream* $tmp9 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp9->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp9);
    self->wrapperShims = $tmp9;
    panda$io$MemoryOutputStream* $tmp11 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp11->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp11);
    self->shims = $tmp11;
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp13->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp13);
    self->strings = $tmp13;
    panda$collections$Set* $tmp15 = (panda$collections$Set*) malloc(24);
    $tmp15->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp15->refCount.value = 1;
    panda$collections$Set$init($tmp15);
    self->declared = $tmp15;
    panda$collections$Set* $tmp17 = (panda$collections$Set*) malloc(24);
    $tmp17->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp17->refCount.value = 1;
    panda$collections$Set$init($tmp17);
    self->writtenTypes = $tmp17;
    panda$collections$Set* $tmp19 = (panda$collections$Set*) malloc(24);
    $tmp19->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp19->refCount.value = 1;
    panda$collections$Set$init($tmp19);
    self->writtenWrappers = $tmp19;
    panda$collections$HashMap* $tmp21 = (panda$collections$HashMap*) malloc(56);
    $tmp21->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp21->refCount.value = 1;
    panda$collections$HashMap$init($tmp21);
    self->classConstants = $tmp21;
    panda$collections$IdentityMap* $tmp23 = (panda$collections$IdentityMap*) malloc(56);
    $tmp23->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp23->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp23);
    self->variableNames = $tmp23;
    panda$collections$Stack* $tmp25 = (panda$collections$Stack*) malloc(24);
    $tmp25->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp25->refCount.value = 1;
    panda$collections$Stack$init($tmp25);
    self->loopDescriptors = $tmp25;
    self->varCount = ((panda$core$Int64) { 0 });
    self->labelCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap* $tmp27 = (panda$collections$HashMap*) malloc(56);
    $tmp27->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp27->refCount.value = 1;
    panda$collections$HashMap$init($tmp27);
    self->reusedValues = $tmp27;
    panda$collections$IdentityMap* $tmp29 = (panda$collections$IdentityMap*) malloc(56);
    $tmp29->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp29->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp29);
    self->methodShims = $tmp29;
    panda$collections$Stack* $tmp31 = (panda$collections$Stack*) malloc(24);
    $tmp31->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp31->refCount.value = 1;
    panda$collections$Stack$init($tmp31);
    self->inlineContext = $tmp31;
    panda$collections$IdentityMap* $tmp33 = (panda$collections$IdentityMap*) malloc(56);
    $tmp33->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp33->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp33);
    self->currentlyInlining = $tmp33;
    self->out = p_out;
    panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s35, &$s36);
    panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, &$s38);
    (($fn40) p_out->$class->vtable[19])(p_out, $tmp39);
    (($fn42) p_out->$class->vtable[19])(p_out, &$s41);
    (($fn44) p_out->$class->vtable[19])(p_out, &$s43);
    (($fn46) p_out->$class->vtable[19])(p_out, &$s45);
    (($fn48) p_out->$class->vtable[19])(p_out, &$s47);
    (($fn50) p_out->$class->vtable[19])(p_out, &$s49);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$finish(org$pandalanguage$pandac$LLVMCodeGenerator* self) {
    org$pandalanguage$pandac$Type* $tmp51 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp51);
    panda$core$String* $tmp52 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn53) self->out->$class->vtable[16])(self->out, $tmp52);
    panda$core$String* $tmp54 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn55) self->out->$class->vtable[16])(self->out, $tmp54);
    panda$core$String* $tmp56 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->declarations);
    (($fn57) self->out->$class->vtable[16])(self->out, $tmp56);
    panda$core$String* $tmp58 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShims);
    (($fn59) self->out->$class->vtable[16])(self->out, $tmp58);
    panda$core$String* $tmp60 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shims);
    (($fn61) self->out->$class->vtable[16])(self->out, $tmp60);
    panda$core$String* $tmp62 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methods);
    (($fn63) self->out->$class->vtable[16])(self->out, $tmp62);
    (($fn64) ((panda$core$Object*) self->out)->$class->vtable[1])(((panda$core$Object*) self->out));
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self) {
    panda$core$Int64 $tmp65 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp65;
    panda$core$String* $tmp67 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s66, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp67, &$s68);
    return $tmp69;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self) {
    panda$core$Int64 $tmp70 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp70;
    panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s71, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp72, &$s73);
    return $tmp74;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_label, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s75, p_label);
    panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp76, &$s77);
    (($fn79) p_out->$class->vtable[19])(p_out, $tmp78);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    switch (p_stmt->kind.value) {
        case 1000:
        {
            panda$core$Int64 $tmp80 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp81 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp80, ((panda$core$Int64) { 0 }));
            if ($tmp81.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp82 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp83 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp82, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp84 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, $tmp83);
            panda$core$Bit $tmp85 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp84));
            return $tmp85;
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
    org$pandalanguage$pandac$ClassDecl* cl97;
    panda$core$Int64 result106;
    panda$collections$Iterator* f$Iter107;
    org$pandalanguage$pandac$FieldDecl* f120;
    panda$core$Int64 size126;
    panda$core$Int64 align128;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp86 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp86.value) {
    {
        panda$core$Bit $tmp88 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s87);
        if ($tmp88.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp90 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s89);
        if ($tmp90.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp92 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s91);
        if ($tmp92.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp94 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s93);
        PANDA_ASSERT($tmp94.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp95 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp96 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp95);
    if ($tmp96.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp98 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl97 = $tmp98;
    PANDA_ASSERT(((panda$core$Bit) { cl97 != NULL }).value);
    panda$core$Bit $tmp100 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl97);
    panda$core$Bit $tmp101 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp100);
    bool $tmp99 = $tmp101.value;
    if ($tmp99) goto $l102;
    panda$core$Bit $tmp104 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl97)->name, &$s103);
    $tmp99 = $tmp104.value;
    $l102:;
    panda$core$Bit $tmp105 = { $tmp99 };
    if ($tmp105.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result106 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp108 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl97);
        ITable* $tmp109 = ((panda$collections$Iterable*) $tmp108)->$class->itable;
        while ($tmp109->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp109 = $tmp109->next;
        }
        $fn111 $tmp110 = $tmp109->methods[0];
        panda$collections$Iterator* $tmp112 = $tmp110(((panda$collections$Iterable*) $tmp108));
        f$Iter107 = $tmp112;
        $l113:;
        ITable* $tmp115 = f$Iter107->$class->itable;
        while ($tmp115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp115 = $tmp115->next;
        }
        $fn117 $tmp116 = $tmp115->methods[0];
        panda$core$Bit $tmp118 = $tmp116(f$Iter107);
        panda$core$Bit $tmp119 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp118);
        if (!$tmp119.value) goto $l114;
        {
            ITable* $tmp121 = f$Iter107->$class->itable;
            while ($tmp121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp121 = $tmp121->next;
            }
            $fn123 $tmp122 = $tmp121->methods[1];
            panda$core$Object* $tmp124 = $tmp122(f$Iter107);
            f120 = ((org$pandalanguage$pandac$FieldDecl*) $tmp124);
            panda$core$Bit $tmp125 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f120->annotations);
            if ($tmp125.value) {
            {
                goto $l113;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f120);
            panda$core$Int64 $tmp127 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f120->type);
            size126 = $tmp127;
            panda$core$Int64 $tmp129 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result106, size126);
            align128 = $tmp129;
            panda$core$Bit $tmp130 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align128, ((panda$core$Int64) { 0 }));
            if ($tmp130.value) {
            {
                panda$core$Int64 $tmp131 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size126, align128);
                panda$core$Int64 $tmp132 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result106, $tmp131);
                result106 = $tmp132;
            }
            }
            panda$core$Int64 $tmp133 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result106, size126);
            panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp133, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp134.value);
            panda$core$Int64 $tmp135 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result106, size126);
            result106 = $tmp135;
        }
        goto $l113;
        $l114:;
    }
    panda$core$Bit $tmp136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp136.value) {
    {
        panda$core$Int64 $tmp137 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result106, ((panda$core$Int64) { 1 }));
        result106 = $tmp137;
    }
    }
    return result106;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp138 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp139 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp138, ((panda$core$Int64) { 8 }));
    return $tmp139;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl143;
    panda$core$Int64 result147;
    panda$collections$Iterator* f$Iter148;
    org$pandalanguage$pandac$FieldDecl* f161;
    panda$core$Int64 size166;
    panda$core$Int64 align168;
    panda$core$Bit $tmp140 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    panda$core$Bit $tmp141 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp140);
    if ($tmp141.value) {
    {
        panda$core$Int64 $tmp142 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
        return $tmp142;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp144 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl143 = $tmp144;
    PANDA_ASSERT(((panda$core$Bit) { cl143 != NULL }).value);
    panda$core$Bit $tmp146 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl143)->name, &$s145);
    if ($tmp146.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result147 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp149 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl143);
        ITable* $tmp150 = ((panda$collections$Iterable*) $tmp149)->$class->itable;
        while ($tmp150->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp150 = $tmp150->next;
        }
        $fn152 $tmp151 = $tmp150->methods[0];
        panda$collections$Iterator* $tmp153 = $tmp151(((panda$collections$Iterable*) $tmp149));
        f$Iter148 = $tmp153;
        $l154:;
        ITable* $tmp156 = f$Iter148->$class->itable;
        while ($tmp156->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp156 = $tmp156->next;
        }
        $fn158 $tmp157 = $tmp156->methods[0];
        panda$core$Bit $tmp159 = $tmp157(f$Iter148);
        panda$core$Bit $tmp160 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp159);
        if (!$tmp160.value) goto $l155;
        {
            ITable* $tmp162 = f$Iter148->$class->itable;
            while ($tmp162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp162 = $tmp162->next;
            }
            $fn164 $tmp163 = $tmp162->methods[1];
            panda$core$Object* $tmp165 = $tmp163(f$Iter148);
            f161 = ((org$pandalanguage$pandac$FieldDecl*) $tmp165);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f161);
            panda$core$Int64 $tmp167 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f161->type);
            size166 = $tmp167;
            panda$core$Int64 $tmp169 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result147, size166);
            align168 = $tmp169;
            panda$core$Bit $tmp170 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align168, ((panda$core$Int64) { 0 }));
            if ($tmp170.value) {
            {
                panda$core$Int64 $tmp171 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size166, align168);
                panda$core$Int64 $tmp172 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result147, $tmp171);
                result147 = $tmp172;
            }
            }
            panda$core$Int64 $tmp173 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result147, size166);
            panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp173, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp174.value);
            panda$core$Int64 $tmp175 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result147, size166);
            result147 = $tmp175;
        }
        goto $l154;
        $l155:;
    }
    panda$core$Bit $tmp177 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl143);
    bool $tmp176 = $tmp177.value;
    if (!$tmp176) goto $l178;
    panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    $tmp176 = $tmp179.value;
    $l178:;
    panda$core$Bit $tmp180 = { $tmp176 };
    if ($tmp180.value) {
    {
        panda$core$Int64 $tmp181 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result147, ((panda$core$Int64) { 1 }));
        result147 = $tmp181;
    }
    }
    return result147;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl182;
    panda$core$Int64 result188;
    panda$collections$Iterator* f$Iter191;
    org$pandalanguage$pandac$FieldDecl* f204;
    panda$core$Int64 size209;
    panda$core$Int64 align211;
    org$pandalanguage$pandac$ClassDecl* $tmp183 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl182 = $tmp183;
    bool $tmp184 = ((panda$core$Bit) { cl182 != NULL }).value;
    if (!$tmp184) goto $l185;
    panda$core$Bit $tmp186 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl182);
    $tmp184 = $tmp186.value;
    $l185:;
    panda$core$Bit $tmp187 = { $tmp184 };
    PANDA_ASSERT($tmp187.value);
    org$pandalanguage$pandac$Type* $tmp189 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp190 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp189);
    result188 = $tmp190;
    {
        panda$collections$ListView* $tmp192 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl182);
        ITable* $tmp193 = ((panda$collections$Iterable*) $tmp192)->$class->itable;
        while ($tmp193->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp193 = $tmp193->next;
        }
        $fn195 $tmp194 = $tmp193->methods[0];
        panda$collections$Iterator* $tmp196 = $tmp194(((panda$collections$Iterable*) $tmp192));
        f$Iter191 = $tmp196;
        $l197:;
        ITable* $tmp199 = f$Iter191->$class->itable;
        while ($tmp199->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp199 = $tmp199->next;
        }
        $fn201 $tmp200 = $tmp199->methods[0];
        panda$core$Bit $tmp202 = $tmp200(f$Iter191);
        panda$core$Bit $tmp203 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp202);
        if (!$tmp203.value) goto $l198;
        {
            ITable* $tmp205 = f$Iter191->$class->itable;
            while ($tmp205->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp205 = $tmp205->next;
            }
            $fn207 $tmp206 = $tmp205->methods[1];
            panda$core$Object* $tmp208 = $tmp206(f$Iter191);
            f204 = ((org$pandalanguage$pandac$FieldDecl*) $tmp208);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f204);
            panda$core$Int64 $tmp210 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f204->type);
            size209 = $tmp210;
            panda$core$Int64 $tmp212 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result188, size209);
            align211 = $tmp212;
            panda$core$Bit $tmp213 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align211, ((panda$core$Int64) { 0 }));
            if ($tmp213.value) {
            {
                panda$core$Int64 $tmp214 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size209, align211);
                panda$core$Int64 $tmp215 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result188, $tmp214);
                result188 = $tmp215;
            }
            }
            panda$core$Int64 $tmp216 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result188, size209);
            panda$core$Bit $tmp217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp216, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp217.value);
            panda$core$Int64 $tmp218 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result188, size209);
            result188 = $tmp218;
        }
        goto $l197;
        $l198:;
    }
    panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp219.value) {
    {
        panda$core$Int64 $tmp220 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result188, ((panda$core$Int64) { 1 }));
        result188 = $tmp220;
    }
    }
    return result188;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl222;
    panda$core$MutableString* code226;
    panda$core$String* separator234;
    panda$collections$Iterator* f$Iter236;
    org$pandalanguage$pandac$FieldDecl* f249;
    org$pandalanguage$pandac$ClassDecl* fCl256;
    panda$core$Bit $tmp221 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp221.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    org$pandalanguage$pandac$ClassDecl* $tmp223 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl222 = $tmp223;
    panda$core$Bit $tmp224 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(cl222->annotations);
    panda$core$Bit $tmp225 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp224);
    PANDA_ASSERT($tmp225.value);
    panda$core$MutableString* $tmp227 = (panda$core$MutableString*) malloc(48);
    $tmp227->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp227->refCount.value = 1;
    panda$core$String* $tmp230 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s229, $tmp230);
    panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp231, &$s232);
    panda$core$MutableString$init$panda$core$String($tmp227, $tmp233);
    code226 = $tmp227;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) cl222));
    PANDA_ASSERT(((panda$core$Bit) { cl222 != NULL }).value);
    separator234 = &$s235;
    {
        panda$collections$ListView* $tmp237 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl222);
        ITable* $tmp238 = ((panda$collections$Iterable*) $tmp237)->$class->itable;
        while ($tmp238->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp238 = $tmp238->next;
        }
        $fn240 $tmp239 = $tmp238->methods[0];
        panda$collections$Iterator* $tmp241 = $tmp239(((panda$collections$Iterable*) $tmp237));
        f$Iter236 = $tmp241;
        $l242:;
        ITable* $tmp244 = f$Iter236->$class->itable;
        while ($tmp244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp244 = $tmp244->next;
        }
        $fn246 $tmp245 = $tmp244->methods[0];
        panda$core$Bit $tmp247 = $tmp245(f$Iter236);
        panda$core$Bit $tmp248 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp247);
        if (!$tmp248.value) goto $l243;
        {
            ITable* $tmp250 = f$Iter236->$class->itable;
            while ($tmp250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp250 = $tmp250->next;
            }
            $fn252 $tmp251 = $tmp250->methods[1];
            panda$core$Object* $tmp253 = $tmp251(f$Iter236);
            f249 = ((org$pandalanguage$pandac$FieldDecl*) $tmp253);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f249);
            panda$core$Bit $tmp254 = panda$core$Bit$$NOT$R$panda$core$Bit(f249->type->resolved);
            if ($tmp254.value) {
            {
                return;
            }
            }
            panda$core$Bit $tmp255 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f249->type);
            if ($tmp255.value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp257 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f249->type);
                fCl256 = $tmp257;
                panda$core$Bit $tmp258 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, fCl256);
                panda$core$Bit $tmp259 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp258);
                if ($tmp259.value) {
                {
                    panda$core$String* $tmp260 = panda$core$String$convert$R$panda$core$String(separator234);
                    panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp260, &$s261);
                    panda$core$MutableString$append$panda$core$String(code226, $tmp262);
                    separator234 = &$s263;
                    goto $l242;
                }
                }
            }
            }
            panda$core$String* $tmp264 = panda$core$String$convert$R$panda$core$String(separator234);
            panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp264, &$s265);
            panda$core$String* $tmp267 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f249->type);
            panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, $tmp267);
            panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp268, &$s269);
            panda$core$MutableString$append$panda$core$String(code226, $tmp270);
            separator234 = &$s271;
        }
        goto $l242;
        $l243:;
    }
    org$pandalanguage$pandac$Type* $tmp272 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp273 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp272);
    if ($tmp273.value) {
    {
        panda$core$MutableString$append$panda$core$String(code226, &$s274);
    }
    }
    panda$core$MutableString$append$panda$core$String(code226, &$s275);
    panda$core$String* $tmp276 = panda$core$MutableString$finish$R$panda$core$String(code226);
    (($fn277) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp276);
    panda$core$Bit $tmp278 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl222);
    if ($tmp278.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl222);
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$MutableString* code280;
    org$pandalanguage$pandac$ClassDecl* object287;
    panda$core$String* separator290;
    panda$collections$Iterator* f$Iter292;
    org$pandalanguage$pandac$FieldDecl* f305;
    panda$core$Bit $tmp279 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp279.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    panda$core$MutableString* $tmp281 = (panda$core$MutableString*) malloc(48);
    $tmp281->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp281->refCount.value = 1;
    panda$core$String* $tmp283 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp284 = panda$core$String$convert$R$panda$core$String($tmp283);
    panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp284, &$s285);
    panda$core$MutableString$init$panda$core$String($tmp281, $tmp286);
    code280 = $tmp281;
    org$pandalanguage$pandac$Type* $tmp288 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp289 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp288);
    object287 = $tmp289;
    PANDA_ASSERT(((panda$core$Bit) { object287 != NULL }).value);
    separator290 = &$s291;
    {
        panda$collections$ListView* $tmp293 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, object287);
        ITable* $tmp294 = ((panda$collections$Iterable*) $tmp293)->$class->itable;
        while ($tmp294->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp294 = $tmp294->next;
        }
        $fn296 $tmp295 = $tmp294->methods[0];
        panda$collections$Iterator* $tmp297 = $tmp295(((panda$collections$Iterable*) $tmp293));
        f$Iter292 = $tmp297;
        $l298:;
        ITable* $tmp300 = f$Iter292->$class->itable;
        while ($tmp300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp300 = $tmp300->next;
        }
        $fn302 $tmp301 = $tmp300->methods[0];
        panda$core$Bit $tmp303 = $tmp301(f$Iter292);
        panda$core$Bit $tmp304 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp303);
        if (!$tmp304.value) goto $l299;
        {
            ITable* $tmp306 = f$Iter292->$class->itable;
            while ($tmp306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp306 = $tmp306->next;
            }
            $fn308 $tmp307 = $tmp306->methods[1];
            panda$core$Object* $tmp309 = $tmp307(f$Iter292);
            f305 = ((org$pandalanguage$pandac$FieldDecl*) $tmp309);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f305);
            panda$core$String* $tmp310 = panda$core$String$convert$R$panda$core$String(separator290);
            panda$core$String* $tmp312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp310, &$s311);
            panda$core$String* $tmp313 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f305->type);
            panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp312, $tmp313);
            panda$core$String* $tmp316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp314, &$s315);
            panda$core$MutableString$append$panda$core$String(code280, $tmp316);
            separator290 = &$s317;
        }
        goto $l298;
        $l299:;
    }
    panda$core$String* $tmp319 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s318, $tmp319);
    panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp320, &$s321);
    panda$core$MutableString$append$panda$core$String(code280, $tmp322);
    panda$core$MutableString$append$panda$core$String(code280, &$s323);
    panda$core$String* $tmp324 = panda$core$MutableString$finish$R$panda$core$String(code280);
    (($fn325) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp324);
    panda$core$String* $tmp326 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp327 = panda$core$String$convert$R$panda$core$String($tmp326);
    panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp327, &$s328);
    panda$core$String* $tmp330 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp329, $tmp330);
    panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s332);
    (($fn334) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp333);
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp336 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s335, $tmp336);
    return $tmp337;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* name346;
    org$pandalanguage$pandac$ClassDecl* cl352;
    org$pandalanguage$pandac$ClassDecl* cl358;
    org$pandalanguage$pandac$ClassDecl* cl371;
    panda$core$String* name374;
    org$pandalanguage$pandac$ClassDecl* cl380;
    panda$core$MutableString* result389;
    panda$core$Range$LTpanda$core$Int64$GT $tmp397;
    switch (p_t->typeKind.value) {
        case 14:
        {
            return &$s338;
        }
        break;
        case 12:
        case 13:
        {
            panda$core$Int64 $tmp340 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp341 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp340, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s339, ((panda$core$Object*) wrap_panda$core$Int64($tmp341)));
            panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, &$s343);
            return $tmp344;
        }
        break;
        case 19:
        {
            return &$s345;
        }
        break;
        case 10:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, p_t);
            panda$core$String* $tmp348 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s347, $tmp348);
            panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp349, &$s350);
            name346 = $tmp351;
            org$pandalanguage$pandac$ClassDecl* $tmp353 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl352 = $tmp353;
            PANDA_ASSERT(((panda$core$Bit) { cl352 != NULL }).value);
            panda$core$Bit $tmp354 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl352);
            panda$core$Bit $tmp355 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp354);
            if ($tmp355.value) {
            {
                panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name346, &$s356);
                return $tmp357;
            }
            }
            return name346;
        }
        break;
        case 11:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp359 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl358 = $tmp359;
            PANDA_ASSERT(((panda$core$Bit) { cl358 != NULL }).value);
            panda$core$Bit $tmp360 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl358);
            if ($tmp360.value) {
            {
                panda$core$String* $tmp361 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                return $tmp361;
            }
            }
            panda$core$Object* $tmp362 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp363 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp362));
            return $tmp363;
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp364 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp366 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp364))->name, &$s365);
            if ($tmp366.value) {
            {
                panda$core$Object* $tmp367 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp368 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp367));
                panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp368, &$s369);
                return $tmp370;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp372 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl371 = $tmp372;
            panda$core$Bit $tmp373 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl371);
            if ($tmp373.value) {
            {
                panda$core$String* $tmp376 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s375, $tmp376);
                panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp377, &$s378);
                name374 = $tmp379;
                org$pandalanguage$pandac$ClassDecl* $tmp381 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl380 = $tmp381;
                PANDA_ASSERT(((panda$core$Bit) { cl380 != NULL }).value);
                panda$core$Bit $tmp382 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl380);
                panda$core$Bit $tmp383 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp382);
                if ($tmp383.value) {
                {
                    panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name374, &$s384);
                    return $tmp385;
                }
                }
                return name374;
            }
            }
            panda$core$Object* $tmp386 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp387 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp386));
            return $tmp387;
        }
        break;
        case 22:
        {
            panda$core$String* $tmp388 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp388;
        }
        break;
        case 24:
        case 25:
        {
            panda$core$MutableString* $tmp390 = (panda$core$MutableString*) malloc(48);
            $tmp390->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp390->refCount.value = 1;
            panda$core$Int64 $tmp392 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp393 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp392, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp394 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp393);
            panda$core$String* $tmp395 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp394));
            panda$core$MutableString$init$panda$core$String($tmp390, $tmp395);
            result389 = $tmp390;
            panda$core$MutableString$append$panda$core$String(result389, &$s396);
            panda$core$Int64 $tmp398 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp399 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp398, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp397, ((panda$core$Int64) { 0 }), $tmp399, ((panda$core$Bit) { false }));
            int64_t $tmp401 = $tmp397.min.value;
            panda$core$Int64 i400 = { $tmp401 };
            int64_t $tmp403 = $tmp397.max.value;
            bool $tmp404 = $tmp397.inclusive.value;
            if ($tmp404) goto $l411; else goto $l412;
            $l411:;
            if ($tmp401 <= $tmp403) goto $l405; else goto $l407;
            $l412:;
            if ($tmp401 < $tmp403) goto $l405; else goto $l407;
            $l405:;
            {
                panda$core$Bit $tmp413 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i400, ((panda$core$Int64) { 0 }));
                if ($tmp413.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result389, &$s414);
                }
                }
                panda$core$Object* $tmp415 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i400);
                panda$core$String* $tmp416 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp415));
                panda$core$MutableString$append$panda$core$String(result389, $tmp416);
            }
            $l408:;
            int64_t $tmp418 = $tmp403 - i400.value;
            if ($tmp404) goto $l419; else goto $l420;
            $l419:;
            if ($tmp418 >= 1) goto $l417; else goto $l407;
            $l420:;
            if ($tmp418 > 1) goto $l417; else goto $l407;
            $l417:;
            i400.value += 1;
            goto $l405;
            $l407:;
            panda$core$MutableString$append$panda$core$String(result389, &$s423);
            panda$core$String* $tmp424 = panda$core$MutableString$finish$R$panda$core$String(result389);
            return $tmp424;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp425.value) {
    {
        panda$core$Object* $tmp426 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp427 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp426));
        return $tmp427;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, p_t);
    panda$core$String* $tmp429 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s428, $tmp429);
    panda$core$String* $tmp432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp430, &$s431);
    return $tmp432;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp433 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp433, &$s434);
    return $tmp435;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType436;
    panda$core$MutableString* result438;
    panda$core$Char8 $tmp445;
    panda$core$Char8 $tmp454;
    panda$core$Range$LTpanda$core$Int64$GT $tmp455;
    org$pandalanguage$pandac$Type* $tmp437 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType436 = $tmp437;
    panda$core$MutableString* $tmp439 = (panda$core$MutableString*) malloc(48);
    $tmp439->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp439->refCount.value = 1;
    panda$core$MutableString$init($tmp439);
    result438 = $tmp439;
    panda$core$Int64 $tmp441 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType436->subtypes);
    panda$core$Int64 $tmp442 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp441, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp443 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType436->subtypes, $tmp442);
    panda$core$String* $tmp444 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp443));
    panda$core$MutableString$append$panda$core$String(result438, $tmp444);
    panda$core$Char8$init$panda$core$UInt8(&$tmp445, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(result438, $tmp445);
    panda$core$Bit $tmp446 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp446.value);
    panda$core$String* $tmp448 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s447, $tmp448);
    panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp449, &$s450);
    panda$core$MutableString$append$panda$core$String(result438, $tmp451);
    panda$core$Bit $tmp452 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp452.value) {
    {
        panda$core$MutableString$append$panda$core$String(result438, &$s453);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp454, ((panda$core$UInt8) { 42 }));
    panda$core$MutableString$append$panda$core$Char8(result438, $tmp454);
    panda$core$Int64 $tmp456 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType436->subtypes);
    panda$core$Int64 $tmp457 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp456, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp455, ((panda$core$Int64) { 0 }), $tmp457, ((panda$core$Bit) { false }));
    int64_t $tmp459 = $tmp455.min.value;
    panda$core$Int64 i458 = { $tmp459 };
    int64_t $tmp461 = $tmp455.max.value;
    bool $tmp462 = $tmp455.inclusive.value;
    if ($tmp462) goto $l469; else goto $l470;
    $l469:;
    if ($tmp459 <= $tmp461) goto $l463; else goto $l465;
    $l470:;
    if ($tmp459 < $tmp461) goto $l463; else goto $l465;
    $l463:;
    {
        panda$core$MutableString$append$panda$core$String(result438, &$s471);
        panda$core$Object* $tmp472 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType436->subtypes, i458);
        panda$core$String* $tmp473 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp472));
        panda$core$MutableString$append$panda$core$String(result438, $tmp473);
    }
    $l466:;
    int64_t $tmp475 = $tmp461 - i458.value;
    if ($tmp462) goto $l476; else goto $l477;
    $l476:;
    if ($tmp475 >= 1) goto $l474; else goto $l465;
    $l477:;
    if ($tmp475 > 1) goto $l474; else goto $l465;
    $l474:;
    i458.value += 1;
    goto $l463;
    $l465:;
    panda$core$MutableString$append$panda$core$String(result438, &$s480);
    panda$core$String* $tmp481 = panda$core$MutableString$finish$R$panda$core$String(result438);
    return $tmp481;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp482.value);
    panda$core$Object* $tmp483 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp483));
    panda$core$Object* $tmp484 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp485 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp484));
    panda$core$String* $tmp486 = panda$core$String$convert$R$panda$core$String($tmp485);
    panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp486, &$s487);
    return $tmp488;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces489;
    panda$core$String* previous492;
    panda$collections$Iterator* intfType$Iter494;
    org$pandalanguage$pandac$Type* intfType506;
    org$pandalanguage$pandac$ClassDecl* intf511;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC513;
    panda$collections$ListView* methods515;
    panda$core$String* name517;
    panda$core$String* t527;
    panda$core$String* intfCCCast541;
    panda$core$MutableString* result557;
    panda$core$String* separator589;
    panda$collections$Iterator* m$Iter591;
    org$pandalanguage$pandac$MethodDecl* m603;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry611;
    org$pandalanguage$pandac$Type* $tmp490 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp491 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp490);
    interfaces489 = $tmp491;
    previous492 = &$s493;
    {
        ITable* $tmp495 = ((panda$collections$Iterable*) interfaces489)->$class->itable;
        while ($tmp495->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp495 = $tmp495->next;
        }
        $fn497 $tmp496 = $tmp495->methods[0];
        panda$collections$Iterator* $tmp498 = $tmp496(((panda$collections$Iterable*) interfaces489));
        intfType$Iter494 = $tmp498;
        $l499:;
        ITable* $tmp501 = intfType$Iter494->$class->itable;
        while ($tmp501->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp501 = $tmp501->next;
        }
        $fn503 $tmp502 = $tmp501->methods[0];
        panda$core$Bit $tmp504 = $tmp502(intfType$Iter494);
        panda$core$Bit $tmp505 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp504);
        if (!$tmp505.value) goto $l500;
        {
            ITable* $tmp507 = intfType$Iter494->$class->itable;
            while ($tmp507->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp507 = $tmp507->next;
            }
            $fn509 $tmp508 = $tmp507->methods[1];
            panda$core$Object* $tmp510 = $tmp508(intfType$Iter494);
            intfType506 = ((org$pandalanguage$pandac$Type*) $tmp510);
            org$pandalanguage$pandac$ClassDecl* $tmp512 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType506);
            intf511 = $tmp512;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp514 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf511);
            intfCC513 = $tmp514;
            panda$collections$ListView* $tmp516 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType506);
            methods515 = $tmp516;
            panda$core$String* $tmp519 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s518, $tmp519);
            panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp520, &$s521);
            panda$core$String* $tmp523 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf511)->name);
            panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp522, $tmp523);
            panda$core$String* $tmp526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp524, &$s525);
            name517 = $tmp526;
            org$pandalanguage$pandac$Type* $tmp529 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp530 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp529);
            panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s528, $tmp530);
            panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp531, &$s532);
            ITable* $tmp534 = ((panda$collections$CollectionView*) methods515)->$class->itable;
            while ($tmp534->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp534 = $tmp534->next;
            }
            $fn536 $tmp535 = $tmp534->methods[0];
            panda$core$Int64 $tmp537 = $tmp535(((panda$collections$CollectionView*) methods515));
            panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp533, ((panda$core$Object*) wrap_panda$core$Int64($tmp537)));
            panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s539);
            t527 = $tmp540;
            org$pandalanguage$pandac$Type* $tmp542 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp543 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp542);
            panda$core$Bit $tmp544 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(intfCC513->type, $tmp543);
            if ($tmp544.value) {
            {
                panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s545, intfCC513->type);
                panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, &$s547);
                panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, intfCC513->name);
                panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s550);
                org$pandalanguage$pandac$Type* $tmp552 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                panda$core$String* $tmp553 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp552);
                panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, $tmp553);
                panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp554, &$s555);
                intfCCCast541 = $tmp556;
            }
            }
            else {
            {
                intfCCCast541 = intfCC513->name;
            }
            }
            panda$core$MutableString* $tmp558 = (panda$core$MutableString*) malloc(48);
            $tmp558->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp558->refCount.value = 1;
            panda$core$String* $tmp560 = panda$core$String$convert$R$panda$core$String(name517);
            panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s561);
            panda$core$MutableString$init$panda$core$String($tmp558, $tmp562);
            result557 = $tmp558;
            panda$core$Bit $tmp563 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp563.value) {
            {
                panda$core$MutableString$append$panda$core$String(result557, &$s564);
            }
            }
            panda$core$String* $tmp566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s565, t527);
            panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp566, &$s567);
            org$pandalanguage$pandac$Type* $tmp569 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp570 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp569);
            panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, $tmp570);
            panda$core$String* $tmp573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp571, &$s572);
            panda$core$String* $tmp574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp573, intfCCCast541);
            panda$core$String* $tmp576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp574, &$s575);
            panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp576, previous492);
            panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, &$s578);
            ITable* $tmp581 = ((panda$collections$CollectionView*) methods515)->$class->itable;
            while ($tmp581->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp581 = $tmp581->next;
            }
            $fn583 $tmp582 = $tmp581->methods[0];
            panda$core$Int64 $tmp584 = $tmp582(((panda$collections$CollectionView*) methods515));
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s580, ((panda$core$Object*) wrap_panda$core$Int64($tmp584)));
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, &$s586);
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, $tmp587);
            panda$core$MutableString$append$panda$core$String(result557, $tmp588);
            separator589 = &$s590;
            {
                ITable* $tmp592 = ((panda$collections$Iterable*) methods515)->$class->itable;
                while ($tmp592->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp592 = $tmp592->next;
                }
                $fn594 $tmp593 = $tmp592->methods[0];
                panda$collections$Iterator* $tmp595 = $tmp593(((panda$collections$Iterable*) methods515));
                m$Iter591 = $tmp595;
                $l596:;
                ITable* $tmp598 = m$Iter591->$class->itable;
                while ($tmp598->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp598 = $tmp598->next;
                }
                $fn600 $tmp599 = $tmp598->methods[0];
                panda$core$Bit $tmp601 = $tmp599(m$Iter591);
                panda$core$Bit $tmp602 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp601);
                if (!$tmp602.value) goto $l597;
                {
                    ITable* $tmp604 = m$Iter591->$class->itable;
                    while ($tmp604->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp604 = $tmp604->next;
                    }
                    $fn606 $tmp605 = $tmp604->methods[1];
                    panda$core$Object* $tmp607 = $tmp605(m$Iter591);
                    m603 = ((org$pandalanguage$pandac$MethodDecl*) $tmp607);
                    panda$core$MutableString$append$panda$core$String(result557, separator589);
                    separator589 = &$s608;
                    panda$core$Bit $tmp609 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m603->annotations);
                    if ($tmp609.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result557, &$s610);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp612 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m603);
                        entry611 = $tmp612;
                        panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s613, ((panda$core$String*) entry611->second));
                        panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp614, &$s615);
                        panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp616, ((panda$core$String*) entry611->first));
                        panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp617, &$s618);
                        panda$core$MutableString$append$panda$core$String(result557, $tmp619);
                    }
                    }
                }
                goto $l596;
                $l597:;
            }
            panda$core$MutableString$append$panda$core$String(result557, &$s620);
            panda$core$String* $tmp621 = panda$core$MutableString$finish$R$panda$core$String(result557);
            (($fn622) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp621);
            panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s623, t527);
            panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s625);
            panda$core$String* $tmp627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp626, name517);
            panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp627, &$s628);
            previous492 = $tmp629;
        }
        goto $l499;
        $l500:;
    }
    return previous492;
}
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* out630;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* found633;
    panda$core$Int64 oldVarCount641;
    org$pandalanguage$pandac$Type* effectiveReturnType642;
    panda$core$String* resultName646;
    panda$core$MutableString* resultType650;
    panda$core$String* self_t666;
    panda$core$Char8 $tmp672;
    panda$core$Range$LTpanda$core$Int64$GT $tmp673;
    panda$core$String* pType688;
    panda$collections$Array* casts709;
    panda$core$Range$LTpanda$core$Int64$GT $tmp712;
    panda$core$String* p727;
    panda$core$String* returnValue744;
    panda$core$Range$LTpanda$core$Int64$GT $tmp771;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* result819;
    panda$io$MemoryOutputStream* $tmp631 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp631->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp631->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp631);
    out630 = $tmp631;
    panda$core$Object* $tmp634 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found633 = ((org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) $tmp634);
    if (((panda$core$Bit) { found633 != NULL }).value) {
    {
        return found633;
    }
    }
    panda$core$Bit $tmp635 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp635.value);
    panda$core$Int64 $tmp636 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp637 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp638 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp637, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp636, $tmp638);
    PANDA_ASSERT($tmp639.value);
    panda$core$Bit $tmp640 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp640.value);
    oldVarCount641 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp643 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp644 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp643, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp645 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp644);
    effectiveReturnType642 = ((org$pandalanguage$pandac$Type*) $tmp645);
    panda$core$String* $tmp647 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp647, &$s648);
    resultName646 = $tmp649;
    panda$core$MutableString* $tmp651 = (panda$core$MutableString*) malloc(48);
    $tmp651->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp651->refCount.value = 1;
    panda$core$String* $tmp653 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType642);
    panda$core$MutableString$init$panda$core$String($tmp651, $tmp653);
    resultType650 = $tmp651;
    (($fn655) ((panda$io$OutputStream*) out630)->$class->vtable[16])(((panda$io$OutputStream*) out630), &$s654);
    panda$core$Bit $tmp656 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_raw->owner);
    if ($tmp656.value) {
    {
        (($fn658) ((panda$io$OutputStream*) out630)->$class->vtable[16])(((panda$io$OutputStream*) out630), &$s657);
    }
    }
    panda$core$String* $tmp659 = panda$core$MutableString$convert$R$panda$core$String(resultType650);
    panda$core$String* $tmp661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp659, &$s660);
    panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp661, resultName646);
    panda$core$String* $tmp664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp662, &$s663);
    (($fn665) ((panda$io$OutputStream*) out630)->$class->vtable[16])(((panda$io$OutputStream*) out630), $tmp664);
    panda$core$String* $tmp667 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t666 = $tmp667;
    panda$core$String* $tmp668 = panda$core$String$convert$R$panda$core$String(self_t666);
    panda$core$String* $tmp670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp668, &$s669);
    (($fn671) ((panda$io$OutputStream*) out630)->$class->vtable[16])(((panda$io$OutputStream*) out630), $tmp670);
    panda$core$Char8$init$panda$core$UInt8(&$tmp672, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(resultType650, $tmp672);
    panda$core$MutableString$append$panda$core$String(resultType650, self_t666);
    panda$core$Int64 $tmp674 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp673, ((panda$core$Int64) { 0 }), $tmp674, ((panda$core$Bit) { false }));
    int64_t $tmp676 = $tmp673.min.value;
    panda$core$Int64 i675 = { $tmp676 };
    int64_t $tmp678 = $tmp673.max.value;
    bool $tmp679 = $tmp673.inclusive.value;
    if ($tmp679) goto $l686; else goto $l687;
    $l686:;
    if ($tmp676 <= $tmp678) goto $l680; else goto $l682;
    $l687:;
    if ($tmp676 < $tmp678) goto $l680; else goto $l682;
    $l680:;
    {
        panda$core$Object* $tmp689 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i675);
        panda$core$String* $tmp690 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp689));
        pType688 = $tmp690;
        panda$core$MutableString$append$panda$core$String(resultType650, &$s691);
        panda$core$MutableString$append$panda$core$String(resultType650, pType688);
        panda$core$String* $tmp693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s692, pType688);
        panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp693, &$s694);
        panda$core$String* $tmp696 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp695, ((panda$core$Object*) wrap_panda$core$Int64(i675)));
        panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp696, &$s697);
        (($fn699) ((panda$io$OutputStream*) out630)->$class->vtable[16])(((panda$io$OutputStream*) out630), $tmp698);
    }
    $l683:;
    int64_t $tmp701 = $tmp678 - i675.value;
    if ($tmp679) goto $l702; else goto $l703;
    $l702:;
    if ($tmp701 >= 1) goto $l700; else goto $l682;
    $l703:;
    if ($tmp701 > 1) goto $l700; else goto $l682;
    $l700:;
    i675.value += 1;
    goto $l680;
    $l682:;
    (($fn707) ((panda$io$OutputStream*) out630)->$class->vtable[19])(((panda$io$OutputStream*) out630), &$s706);
    panda$core$MutableString$append$panda$core$String(resultType650, &$s708);
    panda$collections$Array* $tmp710 = (panda$collections$Array*) malloc(40);
    $tmp710->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp710->refCount.value = 1;
    panda$collections$Array$init($tmp710);
    casts709 = $tmp710;
    panda$core$Int64 $tmp713 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp712, ((panda$core$Int64) { 0 }), $tmp713, ((panda$core$Bit) { false }));
    int64_t $tmp715 = $tmp712.min.value;
    panda$core$Int64 i714 = { $tmp715 };
    int64_t $tmp717 = $tmp712.max.value;
    bool $tmp718 = $tmp712.inclusive.value;
    if ($tmp718) goto $l725; else goto $l726;
    $l725:;
    if ($tmp715 <= $tmp717) goto $l719; else goto $l721;
    $l726:;
    if ($tmp715 < $tmp717) goto $l719; else goto $l721;
    $l719:;
    {
        panda$core$String* $tmp729 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s728, ((panda$core$Object*) wrap_panda$core$Int64(i714)));
        panda$core$String* $tmp731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp729, &$s730);
        p727 = $tmp731;
        panda$core$Object* $tmp732 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i714);
        panda$core$Object* $tmp733 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i714);
        panda$core$Bit $tmp734 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp732)->type, ((org$pandalanguage$pandac$Type*) $tmp733));
        if ($tmp734.value) {
        {
            panda$core$Object* $tmp735 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i714);
            panda$core$Object* $tmp736 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i714);
            panda$core$String* $tmp737 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p727, ((org$pandalanguage$pandac$Type*) $tmp735), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp736)->type, ((panda$io$OutputStream*) out630));
            panda$collections$Array$add$panda$collections$Array$T(casts709, ((panda$core$Object*) $tmp737));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts709, ((panda$core$Object*) p727));
        }
        }
    }
    $l722:;
    int64_t $tmp739 = $tmp717 - i714.value;
    if ($tmp718) goto $l740; else goto $l741;
    $l740:;
    if ($tmp739 >= 1) goto $l738; else goto $l721;
    $l741:;
    if ($tmp739 > 1) goto $l738; else goto $l721;
    $l738:;
    i714.value += 1;
    goto $l719;
    $l721:;
    org$pandalanguage$pandac$Type* $tmp745 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp746 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp745);
    if ($tmp746.value) {
    {
        panda$core$String* $tmp747 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue744 = $tmp747;
        panda$core$String* $tmp748 = panda$core$String$convert$R$panda$core$String(returnValue744);
        panda$core$String* $tmp750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp748, &$s749);
        (($fn751) ((panda$io$OutputStream*) out630)->$class->vtable[16])(((panda$io$OutputStream*) out630), $tmp750);
    }
    }
    else {
    {
        returnValue744 = &$s752;
    }
    }
    panda$core$String* $tmp754 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s753, $tmp754);
    panda$core$String* $tmp757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp755, &$s756);
    panda$core$String* $tmp758 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
    panda$core$String* $tmp759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp757, $tmp758);
    panda$core$String* $tmp761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp759, &$s760);
    panda$core$String* $tmp762 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp761, $tmp762);
    panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp763, &$s764);
    panda$core$String* $tmp766 = panda$core$String$convert$R$panda$core$String(self_t666);
    panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, &$s767);
    panda$core$String* $tmp769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, $tmp768);
    (($fn770) ((panda$io$OutputStream*) out630)->$class->vtable[16])(((panda$io$OutputStream*) out630), $tmp769);
    panda$core$Int64 $tmp772 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp771, ((panda$core$Int64) { 0 }), $tmp772, ((panda$core$Bit) { false }));
    int64_t $tmp774 = $tmp771.min.value;
    panda$core$Int64 i773 = { $tmp774 };
    int64_t $tmp776 = $tmp771.max.value;
    bool $tmp777 = $tmp771.inclusive.value;
    if ($tmp777) goto $l784; else goto $l785;
    $l784:;
    if ($tmp774 <= $tmp776) goto $l778; else goto $l780;
    $l785:;
    if ($tmp774 < $tmp776) goto $l778; else goto $l780;
    $l778:;
    {
        panda$core$Object* $tmp787 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i773);
        panda$core$String* $tmp788 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp787)->type);
        panda$core$String* $tmp789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s786, $tmp788);
        panda$core$String* $tmp791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp789, &$s790);
        panda$core$Object* $tmp792 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts709, i773);
        panda$core$String* $tmp793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp791, ((panda$core$String*) $tmp792));
        panda$core$String* $tmp795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp793, &$s794);
        (($fn796) ((panda$io$OutputStream*) out630)->$class->vtable[16])(((panda$io$OutputStream*) out630), $tmp795);
    }
    $l781:;
    int64_t $tmp798 = $tmp776 - i773.value;
    if ($tmp777) goto $l799; else goto $l800;
    $l799:;
    if ($tmp798 >= 1) goto $l797; else goto $l780;
    $l800:;
    if ($tmp798 > 1) goto $l797; else goto $l780;
    $l797:;
    i773.value += 1;
    goto $l778;
    $l780:;
    (($fn804) ((panda$io$OutputStream*) out630)->$class->vtable[19])(((panda$io$OutputStream*) out630), &$s803);
    org$pandalanguage$pandac$Type* $tmp805 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp806 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp805);
    if ($tmp806.value) {
    {
        panda$core$String* $tmp807 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType642);
        panda$core$String* $tmp809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp807, &$s808);
        panda$core$String* $tmp810 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, returnValue744, p_raw->returnType, effectiveReturnType642, ((panda$io$OutputStream*) out630));
        panda$core$String* $tmp811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp809, $tmp810);
        returnValue744 = $tmp811;
    }
    }
    panda$core$String* $tmp813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s812, returnValue744);
    panda$core$String* $tmp815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp813, &$s814);
    (($fn816) ((panda$io$OutputStream*) out630)->$class->vtable[19])(((panda$io$OutputStream*) out630), $tmp815);
    (($fn818) ((panda$io$OutputStream*) out630)->$class->vtable[19])(((panda$io$OutputStream*) out630), &$s817);
    self->varCount = oldVarCount641;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp820 = (org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) malloc(32);
    $tmp820->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class;
    $tmp820->refCount.value = 1;
    panda$core$String* $tmp822 = panda$core$MutableString$finish$R$panda$core$String(resultType650);
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp820, resultName646, $tmp822);
    result819 = $tmp820;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result819));
    panda$core$String* $tmp823 = panda$io$MemoryOutputStream$finish$R$panda$core$String(out630);
    (($fn824) p_rawOut->$class->vtable[16])(p_rawOut, $tmp823);
    return result819;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    panda$core$Int64 oldVarCount826;
    panda$core$String* result827;
    panda$core$String* selfType832;
    org$pandalanguage$pandac$Type* actualMethodType854;
    org$pandalanguage$pandac$Type* inheritedMethodType856;
    panda$core$Range$LTpanda$core$Int64$GT $tmp858;
    panda$collections$Array* parameters897;
    panda$core$Range$LTpanda$core$Int64$GT $tmp900;
    panda$collections$Array* children927;
    org$pandalanguage$pandac$Position $tmp932;
    panda$core$String* unwrapped934;
    org$pandalanguage$pandac$Position $tmp937;
    panda$core$String* returnValue940;
    panda$core$Range$LTpanda$core$Int64$GT $tmp973;
    panda$core$Bit $tmp825 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp825.value);
    oldVarCount826 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$String* $tmp828 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp829 = panda$core$String$convert$R$panda$core$String($tmp828);
    panda$core$String* $tmp831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp829, &$s830);
    result827 = $tmp831;
    panda$core$String* $tmp834 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s833, $tmp834);
    panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp835, &$s836);
    selfType832 = $tmp837;
    (($fn839) p_out->$class->vtable[16])(p_out, &$s838);
    panda$core$Bit $tmp840 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp840.value) {
    {
        (($fn842) p_out->$class->vtable[16])(p_out, &$s841);
    }
    }
    panda$core$String* $tmp843 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp844 = panda$core$String$convert$R$panda$core$String($tmp843);
    panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp844, &$s845);
    panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, result827);
    panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp847, &$s848);
    panda$core$String* $tmp850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp849, selfType832);
    panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp850, &$s851);
    (($fn853) p_out->$class->vtable[16])(p_out, $tmp852);
    org$pandalanguage$pandac$Type* $tmp855 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType854 = $tmp855;
    org$pandalanguage$pandac$Type* $tmp857 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType856 = $tmp857;
    panda$core$Int64 $tmp859 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp858, ((panda$core$Int64) { 0 }), $tmp859, ((panda$core$Bit) { false }));
    int64_t $tmp861 = $tmp858.min.value;
    panda$core$Int64 i860 = { $tmp861 };
    int64_t $tmp863 = $tmp858.max.value;
    bool $tmp864 = $tmp858.inclusive.value;
    if ($tmp864) goto $l871; else goto $l872;
    $l871:;
    if ($tmp861 <= $tmp863) goto $l865; else goto $l867;
    $l872:;
    if ($tmp861 < $tmp863) goto $l865; else goto $l867;
    $l865:;
    {
        panda$core$Object* $tmp874 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType856->subtypes, i860);
        panda$core$String* $tmp875 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp874));
        panda$core$String* $tmp876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s873, $tmp875);
        panda$core$String* $tmp878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp876, &$s877);
        panda$core$Object* $tmp879 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i860);
        panda$core$String* $tmp880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp878, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp879)->name);
        panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp880, &$s881);
        (($fn883) p_out->$class->vtable[16])(p_out, $tmp882);
    }
    $l868:;
    int64_t $tmp885 = $tmp863 - i860.value;
    if ($tmp864) goto $l886; else goto $l887;
    $l886:;
    if ($tmp885 >= 1) goto $l884; else goto $l867;
    $l887:;
    if ($tmp885 > 1) goto $l884; else goto $l867;
    $l884:;
    i860.value += 1;
    goto $l865;
    $l867:;
    (($fn891) p_out->$class->vtable[19])(p_out, &$s890);
    panda$core$String* $tmp893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s892, selfType832);
    panda$core$String* $tmp895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp893, &$s894);
    (($fn896) p_out->$class->vtable[19])(p_out, $tmp895);
    panda$collections$Array* $tmp898 = (panda$collections$Array*) malloc(40);
    $tmp898->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp898->refCount.value = 1;
    panda$collections$Array$init($tmp898);
    parameters897 = $tmp898;
    panda$core$Int64 $tmp901 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp900, ((panda$core$Int64) { 0 }), $tmp901, ((panda$core$Bit) { false }));
    int64_t $tmp903 = $tmp900.min.value;
    panda$core$Int64 i902 = { $tmp903 };
    int64_t $tmp905 = $tmp900.max.value;
    bool $tmp906 = $tmp900.inclusive.value;
    if ($tmp906) goto $l913; else goto $l914;
    $l913:;
    if ($tmp903 <= $tmp905) goto $l907; else goto $l909;
    $l914:;
    if ($tmp903 < $tmp905) goto $l907; else goto $l909;
    $l907:;
    {
        panda$core$Object* $tmp916 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i902);
        panda$core$String* $tmp917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s915, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp916)->name);
        panda$core$Object* $tmp918 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType856->subtypes, i902);
        panda$core$Object* $tmp919 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType854->subtypes, i902);
        panda$core$String* $tmp920 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, $tmp917, ((org$pandalanguage$pandac$Type*) $tmp918), ((org$pandalanguage$pandac$Type*) $tmp919), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters897, ((panda$core$Object*) $tmp920));
    }
    $l910:;
    int64_t $tmp922 = $tmp905 - i902.value;
    if ($tmp906) goto $l923; else goto $l924;
    $l923:;
    if ($tmp922 >= 1) goto $l921; else goto $l909;
    $l924:;
    if ($tmp922 > 1) goto $l921; else goto $l909;
    $l921:;
    i902.value += 1;
    goto $l907;
    $l909:;
    panda$collections$Array* $tmp928 = (panda$collections$Array*) malloc(40);
    $tmp928->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp928->refCount.value = 1;
    panda$collections$Array$init($tmp928);
    children927 = $tmp928;
    org$pandalanguage$pandac$IRNode* $tmp930 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp930->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp930->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp932);
    org$pandalanguage$pandac$Type* $tmp933 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp930, ((panda$core$Int64) { 1025 }), $tmp932, $tmp933);
    panda$collections$Array$add$panda$collections$Array$T(children927, ((panda$core$Object*) $tmp930));
    org$pandalanguage$pandac$IRNode* $tmp935 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp935->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp935->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp937);
    org$pandalanguage$pandac$Type* $tmp938 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp935, ((panda$core$Int64) { 1009 }), $tmp937, $tmp938, ((panda$collections$ListView*) children927));
    panda$core$String* $tmp939 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp935, p_out);
    unwrapped934 = $tmp939;
    org$pandalanguage$pandac$Type* $tmp941 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp942 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp941);
    if ($tmp942.value) {
    {
        panda$core$String* $tmp943 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue940 = $tmp943;
        panda$core$String* $tmp944 = panda$core$String$convert$R$panda$core$String(returnValue940);
        panda$core$String* $tmp946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp944, &$s945);
        (($fn947) p_out->$class->vtable[16])(p_out, $tmp946);
        panda$core$String* $tmp948 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp949 = panda$core$String$convert$R$panda$core$String($tmp948);
        panda$core$String* $tmp951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp949, &$s950);
        panda$core$String* $tmp952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp951, returnValue940);
        panda$core$String* $tmp954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp952, &$s953);
        returnValue940 = $tmp954;
    }
    }
    else {
    {
        returnValue940 = &$s955;
    }
    }
    panda$core$String* $tmp957 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s956, $tmp957);
    panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp958, &$s959);
    panda$core$String* $tmp961 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp960, $tmp961);
    panda$core$String* $tmp964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp962, &$s963);
    panda$core$String* $tmp965 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp964, $tmp965);
    panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp966, &$s967);
    panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp968, unwrapped934);
    panda$core$String* $tmp971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp969, &$s970);
    (($fn972) p_out->$class->vtable[16])(p_out, $tmp971);
    panda$core$Int64 $tmp974 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp973, ((panda$core$Int64) { 0 }), $tmp974, ((panda$core$Bit) { false }));
    int64_t $tmp976 = $tmp973.min.value;
    panda$core$Int64 i975 = { $tmp976 };
    int64_t $tmp978 = $tmp973.max.value;
    bool $tmp979 = $tmp973.inclusive.value;
    if ($tmp979) goto $l986; else goto $l987;
    $l986:;
    if ($tmp976 <= $tmp978) goto $l980; else goto $l982;
    $l987:;
    if ($tmp976 < $tmp978) goto $l980; else goto $l982;
    $l980:;
    {
        panda$core$Object* $tmp989 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType854->subtypes, i975);
        panda$core$String* $tmp990 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp989));
        panda$core$String* $tmp991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s988, $tmp990);
        panda$core$String* $tmp993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp991, &$s992);
        panda$core$Object* $tmp994 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters897, i975);
        panda$core$String* $tmp995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp993, ((panda$core$String*) $tmp994));
        panda$core$String* $tmp997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp995, &$s996);
        (($fn998) p_out->$class->vtable[16])(p_out, $tmp997);
    }
    $l983:;
    int64_t $tmp1000 = $tmp978 - i975.value;
    if ($tmp979) goto $l1001; else goto $l1002;
    $l1001:;
    if ($tmp1000 >= 1) goto $l999; else goto $l982;
    $l1002:;
    if ($tmp1000 > 1) goto $l999; else goto $l982;
    $l999:;
    i975.value += 1;
    goto $l980;
    $l982:;
    (($fn1006) p_out->$class->vtable[19])(p_out, &$s1005);
    panda$core$String* $tmp1008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1007, returnValue940);
    panda$core$String* $tmp1010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1008, &$s1009);
    (($fn1011) p_out->$class->vtable[19])(p_out, $tmp1010);
    (($fn1013) p_out->$class->vtable[19])(p_out, &$s1012);
    self->varCount = oldVarCount826;
    return result827;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1014;
    panda$core$String* previous1017;
    panda$collections$Iterator* intfType$Iter1019;
    org$pandalanguage$pandac$Type* intfType1031;
    org$pandalanguage$pandac$ClassDecl* intf1036;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1038;
    panda$collections$ListView* methods1040;
    panda$core$String* name1042;
    panda$core$String* t1052;
    panda$core$String* intfCCCast1066;
    panda$core$MutableString* result1082;
    panda$core$String* separator1114;
    panda$collections$Iterator* m$Iter1116;
    org$pandalanguage$pandac$MethodDecl* m1128;
    panda$core$String* shim1136;
    org$pandalanguage$pandac$Type* $tmp1015 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp1016 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp1015);
    interfaces1014 = $tmp1016;
    previous1017 = &$s1018;
    {
        ITable* $tmp1020 = ((panda$collections$Iterable*) interfaces1014)->$class->itable;
        while ($tmp1020->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1020 = $tmp1020->next;
        }
        $fn1022 $tmp1021 = $tmp1020->methods[0];
        panda$collections$Iterator* $tmp1023 = $tmp1021(((panda$collections$Iterable*) interfaces1014));
        intfType$Iter1019 = $tmp1023;
        $l1024:;
        ITable* $tmp1026 = intfType$Iter1019->$class->itable;
        while ($tmp1026->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1026 = $tmp1026->next;
        }
        $fn1028 $tmp1027 = $tmp1026->methods[0];
        panda$core$Bit $tmp1029 = $tmp1027(intfType$Iter1019);
        panda$core$Bit $tmp1030 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1029);
        if (!$tmp1030.value) goto $l1025;
        {
            ITable* $tmp1032 = intfType$Iter1019->$class->itable;
            while ($tmp1032->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1032 = $tmp1032->next;
            }
            $fn1034 $tmp1033 = $tmp1032->methods[1];
            panda$core$Object* $tmp1035 = $tmp1033(intfType$Iter1019);
            intfType1031 = ((org$pandalanguage$pandac$Type*) $tmp1035);
            org$pandalanguage$pandac$ClassDecl* $tmp1037 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType1031);
            intf1036 = $tmp1037;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1039 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf1036);
            intfCC1038 = $tmp1039;
            panda$collections$ListView* $tmp1041 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType1031);
            methods1040 = $tmp1041;
            panda$core$String* $tmp1044 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1043, $tmp1044);
            panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1045, &$s1046);
            panda$core$String* $tmp1048 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf1036)->name);
            panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, $tmp1048);
            panda$core$String* $tmp1051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, &$s1050);
            name1042 = $tmp1051;
            org$pandalanguage$pandac$Type* $tmp1054 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1055 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1054);
            panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1053, $tmp1055);
            panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1056, &$s1057);
            ITable* $tmp1059 = ((panda$collections$CollectionView*) methods1040)->$class->itable;
            while ($tmp1059->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1059 = $tmp1059->next;
            }
            $fn1061 $tmp1060 = $tmp1059->methods[0];
            panda$core$Int64 $tmp1062 = $tmp1060(((panda$collections$CollectionView*) methods1040));
            panda$core$String* $tmp1063 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1058, ((panda$core$Object*) wrap_panda$core$Int64($tmp1062)));
            panda$core$String* $tmp1065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1063, &$s1064);
            t1052 = $tmp1065;
            org$pandalanguage$pandac$Type* $tmp1067 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1068 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1067);
            panda$core$Bit $tmp1069 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(intfCC1038->type, $tmp1068);
            if ($tmp1069.value) {
            {
                panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1070, intfCC1038->type);
                panda$core$String* $tmp1073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1071, &$s1072);
                panda$core$String* $tmp1074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1073, intfCC1038->name);
                panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1074, &$s1075);
                org$pandalanguage$pandac$Type* $tmp1077 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                panda$core$String* $tmp1078 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1077);
                panda$core$String* $tmp1079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1076, $tmp1078);
                panda$core$String* $tmp1081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1079, &$s1080);
                intfCCCast1066 = $tmp1081;
            }
            }
            else {
            {
                intfCCCast1066 = intfCC1038->name;
            }
            }
            panda$core$MutableString* $tmp1083 = (panda$core$MutableString*) malloc(48);
            $tmp1083->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1083->refCount.value = 1;
            panda$core$String* $tmp1085 = panda$core$String$convert$R$panda$core$String(name1042);
            panda$core$String* $tmp1087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1085, &$s1086);
            panda$core$MutableString$init$panda$core$String($tmp1083, $tmp1087);
            result1082 = $tmp1083;
            panda$core$Bit $tmp1088 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1088.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1082, &$s1089);
            }
            }
            panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1090, t1052);
            panda$core$String* $tmp1093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, &$s1092);
            org$pandalanguage$pandac$Type* $tmp1094 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1095 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1094);
            panda$core$String* $tmp1096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1093, $tmp1095);
            panda$core$String* $tmp1098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1096, &$s1097);
            panda$core$String* $tmp1099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, intfCCCast1066);
            panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1099, &$s1100);
            panda$core$String* $tmp1102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1101, previous1017);
            panda$core$String* $tmp1104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1102, &$s1103);
            ITable* $tmp1106 = ((panda$collections$CollectionView*) methods1040)->$class->itable;
            while ($tmp1106->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1106 = $tmp1106->next;
            }
            $fn1108 $tmp1107 = $tmp1106->methods[0];
            panda$core$Int64 $tmp1109 = $tmp1107(((panda$collections$CollectionView*) methods1040));
            panda$core$String* $tmp1110 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1105, ((panda$core$Object*) wrap_panda$core$Int64($tmp1109)));
            panda$core$String* $tmp1112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1110, &$s1111);
            panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1104, $tmp1112);
            panda$core$MutableString$append$panda$core$String(result1082, $tmp1113);
            separator1114 = &$s1115;
            {
                ITable* $tmp1117 = ((panda$collections$Iterable*) methods1040)->$class->itable;
                while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1117 = $tmp1117->next;
                }
                $fn1119 $tmp1118 = $tmp1117->methods[0];
                panda$collections$Iterator* $tmp1120 = $tmp1118(((panda$collections$Iterable*) methods1040));
                m$Iter1116 = $tmp1120;
                $l1121:;
                ITable* $tmp1123 = m$Iter1116->$class->itable;
                while ($tmp1123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1123 = $tmp1123->next;
                }
                $fn1125 $tmp1124 = $tmp1123->methods[0];
                panda$core$Bit $tmp1126 = $tmp1124(m$Iter1116);
                panda$core$Bit $tmp1127 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1126);
                if (!$tmp1127.value) goto $l1122;
                {
                    ITable* $tmp1129 = m$Iter1116->$class->itable;
                    while ($tmp1129->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1129 = $tmp1129->next;
                    }
                    $fn1131 $tmp1130 = $tmp1129->methods[1];
                    panda$core$Object* $tmp1132 = $tmp1130(m$Iter1116);
                    m1128 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1132);
                    panda$core$MutableString$append$panda$core$String(result1082, separator1114);
                    separator1114 = &$s1133;
                    panda$core$Bit $tmp1134 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1128->annotations);
                    if ($tmp1134.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1082, &$s1135);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1137 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, m1128, ((panda$io$OutputStream*) self->wrapperShims));
                        shim1136 = $tmp1137;
                        panda$core$String* $tmp1139 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1128);
                        panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1138, $tmp1139);
                        panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1140, &$s1141);
                        panda$core$String* $tmp1143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1142, shim1136);
                        panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1143, &$s1144);
                        panda$core$MutableString$append$panda$core$String(result1082, $tmp1145);
                    }
                    }
                }
                goto $l1121;
                $l1122:;
            }
            panda$core$MutableString$append$panda$core$String(result1082, &$s1146);
            panda$core$String* $tmp1147 = panda$core$MutableString$finish$R$panda$core$String(result1082);
            (($fn1148) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1147);
            panda$core$String* $tmp1150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1149, t1052);
            panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1150, &$s1151);
            panda$core$String* $tmp1153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, name1042);
            panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1153, &$s1154);
            previous1017 = $tmp1155;
        }
        goto $l1024;
        $l1025:;
    }
    return previous1017;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1158;
    panda$core$Bit $tmp1156 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp1157 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1156);
    if ($tmp1157.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1161 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1160 = $tmp1161.value;
    if (!$tmp1160) goto $l1162;
    panda$core$Bit $tmp1163 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp1160 = $tmp1163.value;
    $l1162:;
    panda$core$Bit $tmp1164 = { $tmp1160 };
    bool $tmp1159 = $tmp1164.value;
    if (!$tmp1159) goto $l1165;
    org$pandalanguage$pandac$ClassDecl* $tmp1166 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1167 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp1166);
    $tmp1159 = $tmp1167.value;
    $l1165:;
    panda$core$Bit $tmp1168 = { $tmp1159 };
    result1158 = $tmp1168;
    panda$core$Bit $tmp1170 = panda$core$Bit$$NOT$R$panda$core$Bit(result1158);
    bool $tmp1169 = $tmp1170.value;
    if ($tmp1169) goto $l1171;
    panda$core$Bit $tmp1173 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1174 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1173);
    bool $tmp1172 = $tmp1174.value;
    if (!$tmp1172) goto $l1175;
    panda$core$Bit $tmp1177 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1176 = $tmp1177.value;
    if ($tmp1176) goto $l1178;
    panda$core$Bit $tmp1179 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp1176 = $tmp1179.value;
    $l1178:;
    panda$core$Bit $tmp1180 = { $tmp1176 };
    $tmp1172 = $tmp1180.value;
    $l1175:;
    panda$core$Bit $tmp1181 = { $tmp1172 };
    $tmp1169 = $tmp1181.value;
    $l1171:;
    panda$core$Bit $tmp1182 = { $tmp1169 };
    PANDA_ASSERT($tmp1182.value);
    return result1158;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1183;
    org$pandalanguage$pandac$Type* declared1184;
    org$pandalanguage$pandac$Type* inherited1187;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1190;
    panda$core$MutableString* resultType1195;
    panda$core$Char8 $tmp1203;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1204;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1185 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1186 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp1185);
    declared1184 = $tmp1186;
    org$pandalanguage$pandac$Type* $tmp1188 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited1187 = $tmp1188;
    panda$core$Bit $tmp1189 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared1184, inherited1187);
    if ($tmp1189.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1191 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1192 = org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(self, p_m, $tmp1191, ((panda$io$OutputStream*) self->shims));
        shim1190 = $tmp1192;
        resultName1183 = shim1190->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1193 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        resultName1183 = $tmp1193;
    }
    }
    panda$core$Bit $tmp1194 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp1194.value) {
    {
        panda$core$MutableString* $tmp1196 = (panda$core$MutableString*) malloc(48);
        $tmp1196->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1196->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1196, &$s1198);
        resultType1195 = $tmp1196;
        panda$core$Int64 $tmp1199 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1187->subtypes);
        panda$core$Int64 $tmp1200 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1199, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1201 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1187->subtypes, $tmp1200);
        panda$core$String* $tmp1202 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1201));
        panda$core$MutableString$append$panda$core$String(resultType1195, $tmp1202);
        panda$core$Char8$init$panda$core$UInt8(&$tmp1203, ((panda$core$UInt8) { 42 }));
        panda$core$MutableString$append$panda$core$Char8(resultType1195, $tmp1203);
        panda$core$Int64 $tmp1205 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1187->subtypes);
        panda$core$Int64 $tmp1206 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1205, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1204, ((panda$core$Int64) { 0 }), $tmp1206, ((panda$core$Bit) { false }));
        int64_t $tmp1208 = $tmp1204.min.value;
        panda$core$Int64 i1207 = { $tmp1208 };
        int64_t $tmp1210 = $tmp1204.max.value;
        bool $tmp1211 = $tmp1204.inclusive.value;
        if ($tmp1211) goto $l1218; else goto $l1219;
        $l1218:;
        if ($tmp1208 <= $tmp1210) goto $l1212; else goto $l1214;
        $l1219:;
        if ($tmp1208 < $tmp1210) goto $l1212; else goto $l1214;
        $l1212:;
        {
            panda$core$MutableString$append$panda$core$String(resultType1195, &$s1220);
            panda$core$Object* $tmp1221 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1187->subtypes, i1207);
            panda$core$String* $tmp1222 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1221));
            panda$core$MutableString$append$panda$core$String(resultType1195, $tmp1222);
        }
        $l1215:;
        int64_t $tmp1224 = $tmp1210 - i1207.value;
        if ($tmp1211) goto $l1225; else goto $l1226;
        $l1225:;
        if ($tmp1224 >= 1) goto $l1223; else goto $l1214;
        $l1226:;
        if ($tmp1224 > 1) goto $l1223; else goto $l1214;
        $l1223:;
        i1207.value += 1;
        goto $l1212;
        $l1214:;
        panda$core$MutableString$append$panda$core$String(resultType1195, &$s1229);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1230 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1230->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1230->refCount.value = 1;
        panda$core$String* $tmp1232 = panda$core$MutableString$finish$R$panda$core$String(resultType1195);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1230, ((panda$core$Object*) resultName1183), ((panda$core$Object*) $tmp1232));
        return $tmp1230;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1233 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1233->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1233->refCount.value = 1;
    panda$core$String* $tmp1235 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, inherited1187);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1233, ((panda$core$Object*) resultName1183), ((panda$core$Object*) $tmp1235));
    return $tmp1233;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1238;
    panda$core$String* type1240;
    panda$collections$ListView* vtable1258;
    panda$core$String* superPtr1282;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1283;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1294;
    panda$core$MutableString* code1298;
    panda$core$String* separator1339;
    panda$collections$Iterator* m$Iter1341;
    org$pandalanguage$pandac$MethodDecl* m1353;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1360;
    panda$core$Bit $tmp1236 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp1237 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1236);
    PANDA_ASSERT($tmp1237.value);
    panda$core$Object* $tmp1239 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result1238 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1239);
    if (((panda$core$Bit) { result1238 == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1241 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1241->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1241->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1244 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp1245 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1244)->name);
            panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1243, $tmp1245);
            panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1246, &$s1247);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1241, $tmp1248, &$s1249);
            result1238 = $tmp1241;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1238));
            panda$core$String* $tmp1250 = panda$core$String$convert$R$panda$core$String(result1238->name);
            panda$core$String* $tmp1252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1250, &$s1251);
            panda$core$String* $tmp1253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1252, result1238->type);
            panda$core$String* $tmp1255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1253, &$s1254);
            (($fn1256) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1255);
            panda$core$Object* $tmp1257 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1257);
        }
        }
        panda$collections$ListView* $tmp1259 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable1258 = $tmp1259;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1260 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1260->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1260->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1263 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp1264 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1263)->name);
        panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1262, $tmp1264);
        panda$core$String* $tmp1267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1265, &$s1266);
        panda$core$String* $tmp1270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1268, &$s1269);
        panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1270, &$s1271);
        ITable* $tmp1274 = ((panda$collections$CollectionView*) vtable1258)->$class->itable;
        while ($tmp1274->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1274 = $tmp1274->next;
        }
        $fn1276 $tmp1275 = $tmp1274->methods[0];
        panda$core$Int64 $tmp1277 = $tmp1275(((panda$collections$CollectionView*) vtable1258));
        panda$core$String* $tmp1278 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1273, ((panda$core$Object*) wrap_panda$core$Int64($tmp1277)));
        panda$core$String* $tmp1280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1278, &$s1279);
        panda$core$String* $tmp1281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1272, $tmp1280);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1260, $tmp1267, $tmp1281);
        result1238 = $tmp1260;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1238));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1284 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1285 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1284);
            superCC1283 = $tmp1285;
            panda$core$String* $tmp1287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1286, superCC1283->type);
            panda$core$String* $tmp1289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1287, &$s1288);
            panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1289, superCC1283->name);
            panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1290, &$s1291);
            superPtr1282 = $tmp1292;
        }
        }
        else {
        {
            superPtr1282 = &$s1293;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1295 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1296 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1295);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1297 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1296);
        clConstant1294 = $tmp1297;
        panda$core$MutableString* $tmp1299 = (panda$core$MutableString*) malloc(48);
        $tmp1299->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1299->refCount.value = 1;
        panda$core$String* $tmp1301 = panda$core$String$convert$R$panda$core$String(result1238->name);
        panda$core$String* $tmp1303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1301, &$s1302);
        panda$core$MutableString$init$panda$core$String($tmp1299, $tmp1303);
        code1298 = $tmp1299;
        panda$core$Bit $tmp1304 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
        if ($tmp1304.value) {
        {
            panda$core$MutableString$append$panda$core$String(code1298, &$s1305);
        }
        }
        panda$core$String* $tmp1307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1306, result1238->type);
        panda$core$String* $tmp1309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1307, &$s1308);
        panda$core$String* $tmp1311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1310, clConstant1294->type);
        panda$core$String* $tmp1313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1311, &$s1312);
        panda$core$String* $tmp1314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1313, clConstant1294->name);
        panda$core$String* $tmp1316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1314, &$s1315);
        panda$core$String* $tmp1317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1309, $tmp1316);
        panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1318, &$s1319);
        panda$core$String* $tmp1322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1320, &$s1321);
        panda$core$String* $tmp1323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1322, superPtr1282);
        panda$core$String* $tmp1325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1323, &$s1324);
        panda$core$String* $tmp1326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1317, $tmp1325);
        panda$core$String* $tmp1327 = org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1328 = panda$core$String$convert$R$panda$core$String($tmp1327);
        panda$core$String* $tmp1330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1328, &$s1329);
        ITable* $tmp1331 = ((panda$collections$CollectionView*) vtable1258)->$class->itable;
        while ($tmp1331->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1331 = $tmp1331->next;
        }
        $fn1333 $tmp1332 = $tmp1331->methods[0];
        panda$core$Int64 $tmp1334 = $tmp1332(((panda$collections$CollectionView*) vtable1258));
        panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1330, ((panda$core$Object*) wrap_panda$core$Int64($tmp1334)));
        panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1335, &$s1336);
        panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1326, $tmp1337);
        panda$core$MutableString$append$panda$core$String(code1298, $tmp1338);
        separator1339 = &$s1340;
        {
            ITable* $tmp1342 = ((panda$collections$Iterable*) vtable1258)->$class->itable;
            while ($tmp1342->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1342 = $tmp1342->next;
            }
            $fn1344 $tmp1343 = $tmp1342->methods[0];
            panda$collections$Iterator* $tmp1345 = $tmp1343(((panda$collections$Iterable*) vtable1258));
            m$Iter1341 = $tmp1345;
            $l1346:;
            ITable* $tmp1348 = m$Iter1341->$class->itable;
            while ($tmp1348->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1348 = $tmp1348->next;
            }
            $fn1350 $tmp1349 = $tmp1348->methods[0];
            panda$core$Bit $tmp1351 = $tmp1349(m$Iter1341);
            panda$core$Bit $tmp1352 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1351);
            if (!$tmp1352.value) goto $l1347;
            {
                ITable* $tmp1354 = m$Iter1341->$class->itable;
                while ($tmp1354->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1354 = $tmp1354->next;
                }
                $fn1356 $tmp1355 = $tmp1354->methods[1];
                panda$core$Object* $tmp1357 = $tmp1355(m$Iter1341);
                m1353 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1357);
                panda$core$MutableString$append$panda$core$String(code1298, separator1339);
                panda$core$Bit $tmp1358 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1353->annotations);
                if ($tmp1358.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code1298, &$s1359);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1361 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m1353);
                    entry1360 = $tmp1361;
                    panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1362, ((panda$core$String*) entry1360->second));
                    panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1363, &$s1364);
                    panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1365, ((panda$core$String*) entry1360->first));
                    panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, &$s1367);
                    panda$core$MutableString$append$panda$core$String(code1298, $tmp1368);
                }
                }
                separator1339 = &$s1369;
            }
            goto $l1346;
            $l1347:;
        }
        panda$core$MutableString$append$panda$core$String(code1298, &$s1370);
        panda$core$String* $tmp1371 = panda$core$MutableString$finish$R$panda$core$String(code1298);
        (($fn1372) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1371);
    }
    }
    return result1238;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1373;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1379;
    panda$core$String* type1382;
    org$pandalanguage$pandac$ClassDecl* value1393;
    panda$collections$ListView* valueVTable1396;
    panda$collections$ListView* vtable1419;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1421;
    panda$core$String* superCast1424;
    panda$core$String* itable1435;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1437;
    panda$core$MutableString* code1441;
    panda$core$String* separator1486;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1488;
    org$pandalanguage$pandac$MethodDecl* m1506;
    panda$core$String* methodName1511;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
    panda$core$String* $tmp1375 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1374, $tmp1375);
    panda$core$String* $tmp1378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1376, &$s1377);
    name1373 = $tmp1378;
    panda$core$Object* $tmp1380 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name1373));
    result1379 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1380);
    if (((panda$core$Bit) { result1379 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1381 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1381);
            type1382 = &$s1383;
            panda$core$String* $tmp1384 = panda$core$String$convert$R$panda$core$String(name1373);
            panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1384, &$s1385);
            panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1386, type1382);
            panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1387, &$s1388);
            (($fn1390) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1389);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1391 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1391->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1391->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1391, name1373, type1382);
            result1379 = $tmp1391;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1394 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1395 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1394);
            value1393 = $tmp1395;
            panda$collections$ListView* $tmp1397 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1393);
            valueVTable1396 = $tmp1397;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1398 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1398->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1398->refCount.value = 1;
            panda$core$String* $tmp1401 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1400, $tmp1401);
            panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, &$s1403);
            panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1405, &$s1406);
            panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1407, &$s1408);
            ITable* $tmp1411 = ((panda$collections$CollectionView*) valueVTable1396)->$class->itable;
            while ($tmp1411->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1411 = $tmp1411->next;
            }
            $fn1413 $tmp1412 = $tmp1411->methods[0];
            panda$core$Int64 $tmp1414 = $tmp1412(((panda$collections$CollectionView*) valueVTable1396));
            panda$core$String* $tmp1415 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1410, ((panda$core$Object*) wrap_panda$core$Int64($tmp1414)));
            panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1415, &$s1416);
            panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1409, $tmp1417);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1398, $tmp1404, $tmp1418);
            result1379 = $tmp1398;
            panda$collections$ListView* $tmp1420 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1419 = $tmp1420;
            org$pandalanguage$pandac$ClassDecl* $tmp1422 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1423 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1422);
            superCC1421 = $tmp1423;
            org$pandalanguage$pandac$Type* $tmp1425 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1426 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1425);
            panda$core$Bit $tmp1427 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(superCC1421->type, $tmp1426);
            if ($tmp1427.value) {
            {
                panda$core$String* $tmp1429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1428, superCC1421->type);
                panda$core$String* $tmp1431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1429, &$s1430);
                panda$core$String* $tmp1432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1431, superCC1421->name);
                panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1432, &$s1433);
                superCast1424 = $tmp1434;
            }
            }
            else {
            {
                superCast1424 = superCC1421->name;
            }
            }
            panda$core$String* $tmp1436 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1435 = $tmp1436;
            org$pandalanguage$pandac$Type* $tmp1438 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1439 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1438);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1440 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1439);
            clConstant1437 = $tmp1440;
            panda$core$MutableString* $tmp1442 = (panda$core$MutableString*) malloc(48);
            $tmp1442->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1442->refCount.value = 1;
            panda$core$String* $tmp1444 = panda$core$String$convert$R$panda$core$String(result1379->name);
            panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1444, &$s1445);
            panda$core$MutableString$init$panda$core$String($tmp1442, $tmp1446);
            code1441 = $tmp1442;
            panda$core$Bit $tmp1447 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1447.value) {
            {
                panda$core$MutableString$append$panda$core$String(code1441, &$s1448);
            }
            }
            panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1449, result1379->type);
            panda$core$String* $tmp1452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1450, &$s1451);
            panda$core$String* $tmp1454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1453, clConstant1437->type);
            panda$core$String* $tmp1456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1454, &$s1455);
            panda$core$String* $tmp1457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1456, clConstant1437->name);
            panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1457, &$s1458);
            panda$core$String* $tmp1460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1452, $tmp1459);
            panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1461, &$s1462);
            panda$core$String* $tmp1465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, &$s1464);
            org$pandalanguage$pandac$Type* $tmp1466 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1467 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1466);
            panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1465, $tmp1467);
            panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, &$s1469);
            panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1470, superCast1424);
            panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1471, &$s1472);
            panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1460, $tmp1473);
            panda$core$String* $tmp1475 = panda$core$String$convert$R$panda$core$String(itable1435);
            panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1475, &$s1476);
            ITable* $tmp1478 = ((panda$collections$CollectionView*) valueVTable1396)->$class->itable;
            while ($tmp1478->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1478 = $tmp1478->next;
            }
            $fn1480 $tmp1479 = $tmp1478->methods[0];
            panda$core$Int64 $tmp1481 = $tmp1479(((panda$collections$CollectionView*) valueVTable1396));
            panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1477, ((panda$core$Object*) wrap_panda$core$Int64($tmp1481)));
            panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1482, &$s1483);
            panda$core$String* $tmp1485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1474, $tmp1484);
            panda$core$MutableString$append$panda$core$String(code1441, $tmp1485);
            separator1486 = &$s1487;
            ITable* $tmp1489 = ((panda$collections$CollectionView*) valueVTable1396)->$class->itable;
            while ($tmp1489->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1489 = $tmp1489->next;
            }
            $fn1491 $tmp1490 = $tmp1489->methods[0];
            panda$core$Int64 $tmp1492 = $tmp1490(((panda$collections$CollectionView*) valueVTable1396));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1488, ((panda$core$Int64) { 0 }), $tmp1492, ((panda$core$Bit) { false }));
            int64_t $tmp1494 = $tmp1488.min.value;
            panda$core$Int64 i1493 = { $tmp1494 };
            int64_t $tmp1496 = $tmp1488.max.value;
            bool $tmp1497 = $tmp1488.inclusive.value;
            if ($tmp1497) goto $l1504; else goto $l1505;
            $l1504:;
            if ($tmp1494 <= $tmp1496) goto $l1498; else goto $l1500;
            $l1505:;
            if ($tmp1494 < $tmp1496) goto $l1498; else goto $l1500;
            $l1498:;
            {
                ITable* $tmp1507 = vtable1419->$class->itable;
                while ($tmp1507->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1507 = $tmp1507->next;
                }
                $fn1509 $tmp1508 = $tmp1507->methods[0];
                panda$core$Object* $tmp1510 = $tmp1508(vtable1419, i1493);
                m1506 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1510);
                if (((panda$core$Bit) { ((panda$core$Object*) m1506->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1512 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, m1506, ((panda$io$OutputStream*) self->wrapperShims));
                    methodName1511 = $tmp1512;
                }
                }
                else {
                {
                    panda$core$String* $tmp1513 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1506);
                    methodName1511 = $tmp1513;
                    if (m1506->owner->external.value) {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1506);
                    }
                    }
                }
                }
                panda$core$String* $tmp1514 = panda$core$String$convert$R$panda$core$String(separator1486);
                panda$core$String* $tmp1516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1514, &$s1515);
                panda$core$String* $tmp1517 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1506);
                panda$core$String* $tmp1518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1516, $tmp1517);
                panda$core$String* $tmp1520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1518, &$s1519);
                panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1520, methodName1511);
                panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1521, &$s1522);
                panda$core$MutableString$append$panda$core$String(code1441, $tmp1523);
                separator1486 = &$s1524;
            }
            $l1501:;
            int64_t $tmp1526 = $tmp1496 - i1493.value;
            if ($tmp1497) goto $l1527; else goto $l1528;
            $l1527:;
            if ($tmp1526 >= 1) goto $l1525; else goto $l1500;
            $l1528:;
            if ($tmp1526 > 1) goto $l1525; else goto $l1500;
            $l1525:;
            i1493.value += 1;
            goto $l1498;
            $l1500:;
            panda$core$MutableString$append$panda$core$String(code1441, &$s1531);
            panda$core$String* $tmp1532 = panda$core$MutableString$finish$R$panda$core$String(code1441);
            (($fn1533) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1532);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name1373), ((panda$core$Object*) result1379));
    }
    }
    return result1379;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$MutableString* result1534;
    panda$core$String$Index current1539;
    panda$core$String$Index end1541;
    panda$core$Char32 c1546;
    panda$core$Char32 $match$844_131548;
    panda$core$Char32 $tmp1549;
    panda$core$Char8 $tmp1551;
    panda$core$Char32 $tmp1552;
    panda$core$Char32 $tmp1555;
    panda$core$Char32 $tmp1558;
    panda$core$Char32 $tmp1561;
    panda$core$Char32 $tmp1563;
    panda$core$MutableString* $tmp1535 = (panda$core$MutableString*) malloc(48);
    $tmp1535->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1535->refCount.value = 1;
    panda$core$Int64 $tmp1537 = panda$core$String$byteLength$R$panda$core$Int64(p_s);
    panda$core$Int64 $tmp1538 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp1537, ((panda$core$Int64) { 2 }));
    panda$core$MutableString$init$panda$core$Int64($tmp1535, $tmp1538);
    result1534 = $tmp1535;
    panda$core$String$Index $tmp1540 = panda$core$String$start$R$panda$core$String$Index(p_s);
    current1539 = $tmp1540;
    panda$core$String$Index $tmp1542 = panda$core$String$end$R$panda$core$String$Index(p_s);
    end1541 = $tmp1542;
    $l1543:;
    panda$core$Bit $tmp1545 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(current1539, end1541);
    if (!$tmp1545.value) goto $l1544;
    {
        panda$core$Char32 $tmp1547 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_s, current1539);
        c1546 = $tmp1547;
        {
            $match$844_131548 = c1546;
            panda$core$Char32$init$panda$core$Int32(&$tmp1549, ((panda$core$Int32) { 46 }));
            panda$core$Bit $tmp1550 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$844_131548, $tmp1549);
            if ($tmp1550.value) {
            {
                panda$core$Char8$init$panda$core$UInt8(&$tmp1551, ((panda$core$UInt8) { 36 }));
                panda$core$MutableString$append$panda$core$Char8(result1534, $tmp1551);
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp1552, ((panda$core$Int32) { 63 }));
            panda$core$Bit $tmp1553 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$844_131548, $tmp1552);
            if ($tmp1553.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1534, &$s1554);
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp1555, ((panda$core$Int32) { 60 }));
            panda$core$Bit $tmp1556 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$844_131548, $tmp1555);
            if ($tmp1556.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1534, &$s1557);
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp1558, ((panda$core$Int32) { 62 }));
            panda$core$Bit $tmp1559 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$844_131548, $tmp1558);
            if ($tmp1559.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1534, &$s1560);
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp1561, ((panda$core$Int32) { 32 }));
            panda$core$Bit $tmp1562 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$844_131548, $tmp1561);
            if ($tmp1562.value) {
            {
                {
                }
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp1563, ((panda$core$Int32) { 44 }));
            panda$core$Bit $tmp1564 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$844_131548, $tmp1563);
            if ($tmp1564.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1534, &$s1565);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$Char32(result1534, c1546);
            }
            }
            }
            }
            }
            }
            }
        }
        panda$core$String$Index $tmp1566 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_s, current1539);
        current1539 = $tmp1566;
    }
    goto $l1543;
    $l1544:;
    panda$core$String* $tmp1567 = panda$core$MutableString$finish$R$panda$core$String(result1534);
    return $tmp1567;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1571;
    panda$core$String* result1599;
    panda$core$Bit $tmp1568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1568.value) {
    {
        panda$core$Int64 $tmp1569 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1570 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1569, ((panda$core$Int64) { 0 }));
        if ($tmp1570.value) {
        {
            panda$core$Int64 $tmp1572 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1571, ((panda$core$Int64) { 0 }), $tmp1572, ((panda$core$Bit) { false }));
            int64_t $tmp1574 = $tmp1571.min.value;
            panda$core$Int64 i1573 = { $tmp1574 };
            int64_t $tmp1576 = $tmp1571.max.value;
            bool $tmp1577 = $tmp1571.inclusive.value;
            if ($tmp1577) goto $l1584; else goto $l1585;
            $l1584:;
            if ($tmp1574 <= $tmp1576) goto $l1578; else goto $l1580;
            $l1585:;
            if ($tmp1574 < $tmp1576) goto $l1578; else goto $l1580;
            $l1578:;
            {
                panda$core$Object* $tmp1586 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1573);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1586)->name) }).value) {
                {
                    panda$core$Object* $tmp1587 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1588 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1587)->argRefs, i1573);
                    return ((panda$core$String*) $tmp1588);
                }
                }
            }
            $l1581:;
            int64_t $tmp1590 = $tmp1576 - i1573.value;
            if ($tmp1577) goto $l1591; else goto $l1592;
            $l1591:;
            if ($tmp1590 >= 1) goto $l1589; else goto $l1580;
            $l1592:;
            if ($tmp1590 > 1) goto $l1589; else goto $l1580;
            $l1589:;
            i1573.value += 1;
            goto $l1578;
            $l1580:;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp1596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1595, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1596, &$s1597);
        return $tmp1598;
    }
    }
    panda$core$Object* $tmp1600 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1599 = ((panda$core$String*) $tmp1600);
    if (((panda$core$Bit) { result1599 == NULL }).value) {
    {
        panda$core$Int64 $tmp1601 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1601;
        panda$core$String* $tmp1603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1602, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1603, &$s1604);
        panda$core$String* $tmp1606 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1605, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1606, &$s1607);
        result1599 = $tmp1608;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1599));
    }
    }
    panda$core$Int64 $tmp1609 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1610 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1609, ((panda$core$Int64) { 0 }));
    if ($tmp1610.value) {
    {
        panda$core$Object* $tmp1611 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1599, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1611)->varSuffix);
        result1599 = $tmp1612;
    }
    }
    return result1599;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1616;
    panda$core$Char8 $tmp1621;
    panda$core$String* $match$889_91622;
    panda$collections$Iterator* p$Iter1699;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1711;
    panda$core$Bit $tmp1614 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1613);
    if ($tmp1614.value) {
    {
        return &$s1615;
    }
    }
    panda$core$MutableString* $tmp1617 = (panda$core$MutableString*) malloc(48);
    $tmp1617->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1617->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1617, &$s1619);
    result1616 = $tmp1617;
    panda$core$String* $tmp1620 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1616, $tmp1620);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1621, ((panda$core$UInt8) { 36 }));
    panda$core$MutableString$append$panda$core$Char8(result1616, $tmp1621);
    {
        $match$889_91622 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1624 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1623);
        if ($tmp1624.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1625);
        }
        }
        else {
        panda$core$Bit $tmp1627 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1626);
        if ($tmp1627.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1628);
        }
        }
        else {
        panda$core$Bit $tmp1630 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1629);
        if ($tmp1630.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1631);
        }
        }
        else {
        panda$core$Bit $tmp1633 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1632);
        if ($tmp1633.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1634);
        }
        }
        else {
        panda$core$Bit $tmp1636 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1635);
        if ($tmp1636.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1637);
        }
        }
        else {
        panda$core$Bit $tmp1639 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1638);
        if ($tmp1639.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1640);
        }
        }
        else {
        panda$core$Bit $tmp1642 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1641);
        if ($tmp1642.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1643);
        }
        }
        else {
        panda$core$Bit $tmp1645 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1644);
        if ($tmp1645.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1646);
        }
        }
        else {
        panda$core$Bit $tmp1648 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1647);
        if ($tmp1648.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1649);
        }
        }
        else {
        panda$core$Bit $tmp1651 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1650);
        if ($tmp1651.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1652);
        }
        }
        else {
        panda$core$Bit $tmp1654 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1653);
        if ($tmp1654.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1655);
        }
        }
        else {
        panda$core$Bit $tmp1657 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1656);
        if ($tmp1657.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1658);
        }
        }
        else {
        panda$core$Bit $tmp1660 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1659);
        if ($tmp1660.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1661);
        }
        }
        else {
        panda$core$Bit $tmp1663 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1662);
        if ($tmp1663.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1664);
        }
        }
        else {
        panda$core$Bit $tmp1666 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1665);
        if ($tmp1666.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1667);
        }
        }
        else {
        panda$core$Bit $tmp1669 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1668);
        if ($tmp1669.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1670);
        }
        }
        else {
        panda$core$Bit $tmp1672 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1671);
        if ($tmp1672.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1673);
        }
        }
        else {
        panda$core$Bit $tmp1675 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1674);
        if ($tmp1675.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1676);
        }
        }
        else {
        panda$core$Bit $tmp1678 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1677);
        if ($tmp1678.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1679);
        }
        }
        else {
        panda$core$Bit $tmp1681 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1680);
        if ($tmp1681.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1682);
        }
        }
        else {
        panda$core$Bit $tmp1684 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1683);
        if ($tmp1684.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1685);
        }
        }
        else {
        panda$core$Bit $tmp1687 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1686);
        if ($tmp1687.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1688);
        }
        }
        else {
        panda$core$Bit $tmp1690 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1689);
        if ($tmp1690.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1691);
        }
        }
        else {
        panda$core$Bit $tmp1693 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1692);
        if ($tmp1693.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1694);
        }
        }
        else {
        panda$core$Bit $tmp1696 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91622, &$s1695);
        if ($tmp1696.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1616, &$s1697);
        }
        }
        else {
        {
            panda$core$String* $tmp1698 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1616, $tmp1698);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        ITable* $tmp1700 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1700->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1700 = $tmp1700->next;
        }
        $fn1702 $tmp1701 = $tmp1700->methods[0];
        panda$collections$Iterator* $tmp1703 = $tmp1701(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1699 = $tmp1703;
        $l1704:;
        ITable* $tmp1706 = p$Iter1699->$class->itable;
        while ($tmp1706->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1706 = $tmp1706->next;
        }
        $fn1708 $tmp1707 = $tmp1706->methods[0];
        panda$core$Bit $tmp1709 = $tmp1707(p$Iter1699);
        panda$core$Bit $tmp1710 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1709);
        if (!$tmp1710.value) goto $l1705;
        {
            ITable* $tmp1712 = p$Iter1699->$class->itable;
            while ($tmp1712->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1712 = $tmp1712->next;
            }
            $fn1714 $tmp1713 = $tmp1712->methods[1];
            panda$core$Object* $tmp1715 = $tmp1713(p$Iter1699);
            p1711 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1715);
            panda$core$String* $tmp1717 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1711->type)->name);
            panda$core$String* $tmp1718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1716, $tmp1717);
            panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1718, &$s1719);
            panda$core$MutableString$append$panda$core$String(result1616, $tmp1720);
        }
        goto $l1704;
        $l1705:;
    }
    org$pandalanguage$pandac$Type* $tmp1721 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1722 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1721);
    if ($tmp1722.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1616, &$s1723);
        panda$core$String* $tmp1724 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1616, $tmp1724);
    }
    }
    panda$core$String* $tmp1725 = panda$core$MutableString$finish$R$panda$core$String(result1616);
    return $tmp1725;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1726 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1726.value);
    panda$core$String* $tmp1728 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1727, $tmp1728);
    panda$core$String* $tmp1731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1729, &$s1730);
    panda$core$String* $tmp1732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1731, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1732, &$s1733);
    return $tmp1734;
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
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1735;
    panda$core$String* leftField1739;
    panda$core$String* start1748;
    panda$core$String* ifTrue1749;
    panda$core$String* ifFalse1751;
    panda$core$String* rightRef1764;
    panda$core$String* rightField1768;
    panda$core$String* truePred1777;
    panda$core$String* result1783;
    panda$core$String* $tmp1736 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1735 = $tmp1736;
    org$pandalanguage$pandac$Type* $tmp1737 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1738 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1737);
    if ($tmp1738.value) {
    {
        panda$core$String* $tmp1740 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1739 = $tmp1740;
        panda$core$String* $tmp1741 = panda$core$String$convert$R$panda$core$String(leftField1739);
        panda$core$String* $tmp1743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1741, &$s1742);
        panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1743, leftRef1735);
        panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1744, &$s1745);
        (($fn1747) p_out->$class->vtable[19])(p_out, $tmp1746);
        leftRef1735 = leftField1739;
    }
    }
    start1748 = self->currentBlock;
    panda$core$String* $tmp1750 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1749 = $tmp1750;
    panda$core$String* $tmp1752 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1751 = $tmp1752;
    panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1753, leftRef1735);
    panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1754, &$s1755);
    panda$core$String* $tmp1757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1756, ifTrue1749);
    panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1757, &$s1758);
    panda$core$String* $tmp1760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1759, ifFalse1751);
    panda$core$String* $tmp1762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1760, &$s1761);
    (($fn1763) p_out->$class->vtable[19])(p_out, $tmp1762);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue1749, p_out);
    panda$core$String* $tmp1765 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1764 = $tmp1765;
    org$pandalanguage$pandac$Type* $tmp1766 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1767 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1766);
    if ($tmp1767.value) {
    {
        panda$core$String* $tmp1769 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1768 = $tmp1769;
        panda$core$String* $tmp1770 = panda$core$String$convert$R$panda$core$String(rightField1768);
        panda$core$String* $tmp1772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1770, &$s1771);
        panda$core$String* $tmp1773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1772, rightRef1764);
        panda$core$String* $tmp1775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1773, &$s1774);
        (($fn1776) p_out->$class->vtable[19])(p_out, $tmp1775);
        rightRef1764 = rightField1768;
    }
    }
    truePred1777 = self->currentBlock;
    panda$core$String* $tmp1779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1778, ifFalse1751);
    panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1779, &$s1780);
    (($fn1782) p_out->$class->vtable[19])(p_out, $tmp1781);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse1751, p_out);
    panda$core$String* $tmp1784 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1783 = $tmp1784;
    panda$core$String* $tmp1785 = panda$core$String$convert$R$panda$core$String(result1783);
    panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1785, &$s1786);
    panda$core$String* $tmp1788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1787, start1748);
    panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1788, &$s1789);
    panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1790, rightRef1764);
    panda$core$String* $tmp1793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1791, &$s1792);
    panda$core$String* $tmp1794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1793, truePred1777);
    panda$core$String* $tmp1796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1794, &$s1795);
    (($fn1797) p_out->$class->vtable[19])(p_out, $tmp1796);
    return result1783;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1798;
    panda$core$String* leftField1802;
    panda$core$String* start1811;
    panda$core$String* ifTrue1812;
    panda$core$String* ifFalse1814;
    panda$core$String* rightRef1827;
    panda$core$String* rightField1831;
    panda$core$String* falsePred1840;
    panda$core$String* result1846;
    panda$core$String* $tmp1799 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1798 = $tmp1799;
    org$pandalanguage$pandac$Type* $tmp1800 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1801 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1800);
    if ($tmp1801.value) {
    {
        panda$core$String* $tmp1803 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1802 = $tmp1803;
        panda$core$String* $tmp1804 = panda$core$String$convert$R$panda$core$String(leftField1802);
        panda$core$String* $tmp1806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1804, &$s1805);
        panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1806, leftRef1798);
        panda$core$String* $tmp1809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1807, &$s1808);
        (($fn1810) p_out->$class->vtable[19])(p_out, $tmp1809);
        leftRef1798 = leftField1802;
    }
    }
    start1811 = self->currentBlock;
    panda$core$String* $tmp1813 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1812 = $tmp1813;
    panda$core$String* $tmp1815 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1814 = $tmp1815;
    panda$core$String* $tmp1817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1816, leftRef1798);
    panda$core$String* $tmp1819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1817, &$s1818);
    panda$core$String* $tmp1820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1819, ifTrue1812);
    panda$core$String* $tmp1822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1820, &$s1821);
    panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, ifFalse1814);
    panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1823, &$s1824);
    (($fn1826) p_out->$class->vtable[19])(p_out, $tmp1825);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse1814, p_out);
    panda$core$String* $tmp1828 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1827 = $tmp1828;
    org$pandalanguage$pandac$Type* $tmp1829 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1830 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1829);
    if ($tmp1830.value) {
    {
        panda$core$String* $tmp1832 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1831 = $tmp1832;
        panda$core$String* $tmp1833 = panda$core$String$convert$R$panda$core$String(rightField1831);
        panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1833, &$s1834);
        panda$core$String* $tmp1836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1835, rightRef1827);
        panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1836, &$s1837);
        (($fn1839) p_out->$class->vtable[19])(p_out, $tmp1838);
        rightRef1827 = rightField1831;
    }
    }
    falsePred1840 = self->currentBlock;
    panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1841, ifTrue1812);
    panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1842, &$s1843);
    (($fn1845) p_out->$class->vtable[19])(p_out, $tmp1844);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue1812, p_out);
    panda$core$String* $tmp1847 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1846 = $tmp1847;
    panda$core$String* $tmp1848 = panda$core$String$convert$R$panda$core$String(result1846);
    panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1848, &$s1849);
    panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1850, start1811);
    panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1851, &$s1852);
    panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1853, rightRef1827);
    panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1854, &$s1855);
    panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, falsePred1840);
    panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1857, &$s1858);
    (($fn1860) p_out->$class->vtable[19])(p_out, $tmp1859);
    return result1846;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$OutputStream* p_out) {
    panda$core$String* llvmOp1861;
    panda$core$String* result1904;
    switch (p_cl.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1861 = &$s1862;
                }
                break;
                case 52:
                {
                    llvmOp1861 = &$s1863;
                }
                break;
                case 53:
                {
                    llvmOp1861 = &$s1864;
                }
                break;
                case 55:
                {
                    llvmOp1861 = &$s1865;
                }
                break;
                case 56:
                {
                    llvmOp1861 = &$s1866;
                }
                break;
                case 72:
                {
                    llvmOp1861 = &$s1867;
                }
                break;
                case 1:
                {
                    llvmOp1861 = &$s1868;
                }
                break;
                case 67:
                {
                    llvmOp1861 = &$s1869;
                }
                break;
                case 69:
                {
                    llvmOp1861 = &$s1870;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1861 = &$s1871;
                }
                break;
                case 58:
                {
                    llvmOp1861 = &$s1872;
                }
                break;
                case 59:
                {
                    llvmOp1861 = &$s1873;
                }
                break;
                case 63:
                {
                    llvmOp1861 = &$s1874;
                }
                break;
                case 62:
                {
                    llvmOp1861 = &$s1875;
                }
                break;
                case 65:
                {
                    llvmOp1861 = &$s1876;
                }
                break;
                case 64:
                {
                    llvmOp1861 = &$s1877;
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
                    llvmOp1861 = &$s1878;
                }
                break;
                case 52:
                {
                    llvmOp1861 = &$s1879;
                }
                break;
                case 53:
                {
                    llvmOp1861 = &$s1880;
                }
                break;
                case 55:
                {
                    llvmOp1861 = &$s1881;
                }
                break;
                case 56:
                {
                    llvmOp1861 = &$s1882;
                }
                break;
                case 72:
                {
                    llvmOp1861 = &$s1883;
                }
                break;
                case 1:
                {
                    llvmOp1861 = &$s1884;
                }
                break;
                case 67:
                {
                    llvmOp1861 = &$s1885;
                }
                break;
                case 69:
                {
                    llvmOp1861 = &$s1886;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1861 = &$s1887;
                }
                break;
                case 58:
                {
                    llvmOp1861 = &$s1888;
                }
                break;
                case 59:
                {
                    llvmOp1861 = &$s1889;
                }
                break;
                case 63:
                {
                    llvmOp1861 = &$s1890;
                }
                break;
                case 62:
                {
                    llvmOp1861 = &$s1891;
                }
                break;
                case 65:
                {
                    llvmOp1861 = &$s1892;
                }
                break;
                case 64:
                {
                    llvmOp1861 = &$s1893;
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
                    llvmOp1861 = &$s1894;
                }
                break;
                case 52:
                {
                    llvmOp1861 = &$s1895;
                }
                break;
                case 53:
                {
                    llvmOp1861 = &$s1896;
                }
                break;
                case 55:
                {
                    llvmOp1861 = &$s1897;
                }
                break;
                case 58:
                {
                    llvmOp1861 = &$s1898;
                }
                break;
                case 59:
                {
                    llvmOp1861 = &$s1899;
                }
                break;
                case 63:
                {
                    llvmOp1861 = &$s1900;
                }
                break;
                case 62:
                {
                    llvmOp1861 = &$s1901;
                }
                break;
                case 65:
                {
                    llvmOp1861 = &$s1902;
                }
                break;
                case 64:
                {
                    llvmOp1861 = &$s1903;
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
    panda$core$String* $tmp1905 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1904 = $tmp1905;
    panda$core$String* $tmp1906 = panda$core$String$convert$R$panda$core$String(result1904);
    panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1906, &$s1907);
    panda$core$String* $tmp1909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1908, llvmOp1861);
    panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1909, &$s1910);
    panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1911, p_leftRef);
    panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1912, &$s1913);
    panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1914, p_rightRef);
    panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, &$s1916);
    (($fn1918) p_out->$class->vtable[19])(p_out, $tmp1917);
    return result1904;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1919;
    panda$core$String* rightRef1921;
    panda$core$String* raw1923;
    panda$core$String* result1935;
    panda$core$String* $tmp1920 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1919 = $tmp1920;
    panda$core$String* $tmp1922 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1921 = $tmp1922;
    panda$core$String* $tmp1924 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1923 = $tmp1924;
    panda$core$String* $tmp1925 = panda$core$String$convert$R$panda$core$String(raw1923);
    panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1925, &$s1926);
    panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1927, leftRef1919);
    panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1928, &$s1929);
    panda$core$String* $tmp1931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1930, rightRef1921);
    panda$core$String* $tmp1933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1931, &$s1932);
    (($fn1934) p_out->$class->vtable[19])(p_out, $tmp1933);
    panda$core$String* $tmp1936 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1935 = $tmp1936;
    panda$core$String* $tmp1937 = panda$core$String$convert$R$panda$core$String(result1935);
    panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1937, &$s1938);
    panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1939, raw1923);
    panda$core$String* $tmp1942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1940, &$s1941);
    (($fn1943) p_out->$class->vtable[19])(p_out, $tmp1942);
    return result1935;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1944;
    panda$core$String* rightRef1946;
    panda$core$String* raw1948;
    panda$core$String* result1960;
    panda$core$String* $tmp1945 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1944 = $tmp1945;
    panda$core$String* $tmp1947 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1946 = $tmp1947;
    panda$core$String* $tmp1949 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1948 = $tmp1949;
    panda$core$String* $tmp1950 = panda$core$String$convert$R$panda$core$String(raw1948);
    panda$core$String* $tmp1952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1950, &$s1951);
    panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1952, leftRef1944);
    panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, &$s1954);
    panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1955, rightRef1946);
    panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, &$s1957);
    (($fn1959) p_out->$class->vtable[19])(p_out, $tmp1958);
    panda$core$String* $tmp1961 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1960 = $tmp1961;
    panda$core$String* $tmp1962 = panda$core$String$convert$R$panda$core$String(result1960);
    panda$core$String* $tmp1964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1962, &$s1963);
    panda$core$String* $tmp1965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1964, raw1948);
    panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1965, &$s1966);
    (($fn1968) p_out->$class->vtable[19])(p_out, $tmp1967);
    return result1960;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1974;
    panda$core$String* rightRef1976;
    panda$core$Bit $tmp1969 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1969.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1970 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1970;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1971 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1971;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1972 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1972;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1973 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1973;
        }
        break;
        default:
        {
            panda$core$String* $tmp1975 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1974 = $tmp1975;
            panda$core$String* $tmp1977 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1976 = $tmp1977;
            panda$core$Int64 $tmp1978 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1979 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, $tmp1978, leftRef1974, p_op, rightRef1976, p_out);
            return $tmp1979;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp1980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1980.value);
    panda$core$Int64 $tmp1981 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1981, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1982.value);
    panda$core$Object* $tmp1983 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1984 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1985 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1983), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1984), p_out);
    return $tmp1985;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_t, panda$io$OutputStream* p_out) {
    panda$core$String* test1995;
    panda$core$String* testBit1998;
    panda$core$String* trueLabel2007;
    panda$core$String* falseLabel2009;
    panda$core$String* merge2011;
    panda$core$String* ifTrue2024;
    panda$core$String* ifFalse2032;
    panda$core$String* result2040;
    panda$core$Bit $tmp1986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->kind, ((panda$core$Int64) { 1044 }));
    PANDA_ASSERT($tmp1986.value);
    panda$core$Int64 $tmp1987 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
    panda$core$Bit $tmp1988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1987, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp1988.value);
    panda$core$Object* $tmp1989 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1990 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1991 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1989)->type, $tmp1990);
    PANDA_ASSERT($tmp1991.value);
    panda$core$Object* $tmp1992 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp1993 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp1994 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1992)->type, ((org$pandalanguage$pandac$IRNode*) $tmp1993)->type);
    PANDA_ASSERT($tmp1994.value);
    panda$core$Object* $tmp1996 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1997 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1996), p_out);
    test1995 = $tmp1997;
    panda$core$String* $tmp1999 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit1998 = $tmp1999;
    panda$core$String* $tmp2000 = panda$core$String$convert$R$panda$core$String(testBit1998);
    panda$core$String* $tmp2002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2000, &$s2001);
    panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2002, test1995);
    panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2003, &$s2004);
    (($fn2006) p_out->$class->vtable[19])(p_out, $tmp2005);
    panda$core$String* $tmp2008 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2007 = $tmp2008;
    panda$core$String* $tmp2010 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2009 = $tmp2010;
    panda$core$String* $tmp2012 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2011 = $tmp2012;
    panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2013, testBit1998);
    panda$core$String* $tmp2016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, &$s2015);
    panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, trueLabel2007);
    panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2017, &$s2018);
    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2019, falseLabel2009);
    panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, &$s2021);
    (($fn2023) p_out->$class->vtable[19])(p_out, $tmp2022);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, trueLabel2007, p_out);
    panda$core$Object* $tmp2025 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2026 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2025), p_out);
    ifTrue2024 = $tmp2026;
    trueLabel2007 = self->currentBlock;
    panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2027, merge2011);
    panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2028, &$s2029);
    (($fn2031) p_out->$class->vtable[19])(p_out, $tmp2030);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, falseLabel2009, p_out);
    panda$core$Object* $tmp2033 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$String* $tmp2034 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2033), p_out);
    ifFalse2032 = $tmp2034;
    falseLabel2009 = self->currentBlock;
    panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2035, merge2011);
    panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2036, &$s2037);
    (($fn2039) p_out->$class->vtable[19])(p_out, $tmp2038);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, merge2011, p_out);
    panda$core$String* $tmp2041 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2040 = $tmp2041;
    panda$core$String* $tmp2042 = panda$core$String$convert$R$panda$core$String(result2040);
    panda$core$String* $tmp2044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2042, &$s2043);
    panda$core$Object* $tmp2045 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2046 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2045)->type);
    panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2044, $tmp2046);
    panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, &$s2048);
    panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2049, ifTrue2024);
    panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2050, &$s2051);
    panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, trueLabel2007);
    panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2053, &$s2054);
    panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2056, ifFalse2032);
    panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2057, &$s2058);
    panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2059, falseLabel2009);
    panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2060, &$s2061);
    panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2055, $tmp2062);
    (($fn2064) p_out->$class->vtable[19])(p_out, $tmp2063);
    return result2040;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp2067 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp2066 = $tmp2067.value;
    if (!$tmp2066) goto $l2068;
    panda$core$Bit $tmp2069 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp2070 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2069);
    $tmp2066 = $tmp2070.value;
    $l2068:;
    panda$core$Bit $tmp2071 = { $tmp2066 };
    bool $tmp2065 = $tmp2071.value;
    if (!$tmp2065) goto $l2072;
    panda$core$Bit $tmp2073 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp2074 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2073);
    $tmp2065 = $tmp2074.value;
    $l2072:;
    panda$core$Bit $tmp2075 = { $tmp2065 };
    if ($tmp2075.value) {
    {
        return &$s2076;
    }
    }
    return &$s2077;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc2078;
    panda$core$Int64 index2080;
    panda$collections$ListView* vtable2081;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2083;
    panda$core$String* classPtrPtr2112;
    panda$core$String* classPtr2127;
    panda$core$String* cast2136;
    panda$core$String* ptr2148;
    panda$core$String* load2171;
    panda$core$String* result2180;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2079 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc2078 = $tmp2079;
    index2080 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2082 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2081 = $tmp2082;
    ITable* $tmp2084 = ((panda$collections$CollectionView*) vtable2081)->$class->itable;
    while ($tmp2084->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2084 = $tmp2084->next;
    }
    $fn2086 $tmp2085 = $tmp2084->methods[0];
    panda$core$Int64 $tmp2087 = $tmp2085(((panda$collections$CollectionView*) vtable2081));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2083, ((panda$core$Int64) { 0 }), $tmp2087, ((panda$core$Bit) { false }));
    int64_t $tmp2089 = $tmp2083.min.value;
    panda$core$Int64 i2088 = { $tmp2089 };
    int64_t $tmp2091 = $tmp2083.max.value;
    bool $tmp2092 = $tmp2083.inclusive.value;
    if ($tmp2092) goto $l2099; else goto $l2100;
    $l2099:;
    if ($tmp2089 <= $tmp2091) goto $l2093; else goto $l2095;
    $l2100:;
    if ($tmp2089 < $tmp2091) goto $l2093; else goto $l2095;
    $l2093:;
    {
        ITable* $tmp2101 = vtable2081->$class->itable;
        while ($tmp2101->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2101 = $tmp2101->next;
        }
        $fn2103 $tmp2102 = $tmp2101->methods[0];
        panda$core$Object* $tmp2104 = $tmp2102(vtable2081, i2088);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2104)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2080 = i2088;
            goto $l2095;
        }
        }
    }
    $l2096:;
    int64_t $tmp2106 = $tmp2091 - i2088.value;
    if ($tmp2092) goto $l2107; else goto $l2108;
    $l2107:;
    if ($tmp2106 >= 1) goto $l2105; else goto $l2095;
    $l2108:;
    if ($tmp2106 > 1) goto $l2105; else goto $l2095;
    $l2105:;
    i2088.value += 1;
    goto $l2093;
    $l2095:;
    panda$core$Bit $tmp2111 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2080, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2111.value);
    panda$core$String* $tmp2113 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2112 = $tmp2113;
    panda$core$String* $tmp2114 = panda$core$String$convert$R$panda$core$String(classPtrPtr2112);
    panda$core$String* $tmp2116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2114, &$s2115);
    org$pandalanguage$pandac$Type* $tmp2117 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2118 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2117);
    panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2116, $tmp2118);
    panda$core$String* $tmp2121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2119, &$s2120);
    panda$core$String* $tmp2122 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2123);
    panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, $tmp2124);
    (($fn2126) p_out->$class->vtable[19])(p_out, $tmp2125);
    panda$core$String* $tmp2128 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2127 = $tmp2128;
    panda$core$String* $tmp2129 = panda$core$String$convert$R$panda$core$String(classPtr2127);
    panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2129, &$s2130);
    panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2131, classPtrPtr2112);
    panda$core$String* $tmp2134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2132, &$s2133);
    (($fn2135) p_out->$class->vtable[19])(p_out, $tmp2134);
    panda$core$String* $tmp2137 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2136 = $tmp2137;
    panda$core$String* $tmp2138 = panda$core$String$convert$R$panda$core$String(cast2136);
    panda$core$String* $tmp2140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2138, &$s2139);
    panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, classPtr2127);
    panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2141, &$s2142);
    panda$core$String* $tmp2144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, cc2078->type);
    panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2144, &$s2145);
    (($fn2147) p_out->$class->vtable[19])(p_out, $tmp2146);
    panda$core$String* $tmp2149 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2148 = $tmp2149;
    panda$core$String* $tmp2150 = panda$core$String$convert$R$panda$core$String(ptr2148);
    panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
    panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, cc2078->type);
    panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, &$s2154);
    panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, cc2078->type);
    panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2156, &$s2157);
    panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2158, cast2136);
    panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2159, &$s2160);
    panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2162, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2163, &$s2164);
    panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2165, ((panda$core$Object*) wrap_panda$core$Int64(index2080)));
    panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, &$s2167);
    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, $tmp2168);
    (($fn2170) p_out->$class->vtable[19])(p_out, $tmp2169);
    panda$core$String* $tmp2172 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2171 = $tmp2172;
    panda$core$String* $tmp2173 = panda$core$String$convert$R$panda$core$String(load2171);
    panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2174);
    panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2175, ptr2148);
    panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, &$s2177);
    (($fn2179) p_out->$class->vtable[19])(p_out, $tmp2178);
    panda$core$String* $tmp2181 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2180 = $tmp2181;
    panda$core$String* $tmp2182 = panda$core$String$convert$R$panda$core$String(result2180);
    panda$core$String* $tmp2184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2182, &$s2183);
    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2184, load2171);
    panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, &$s2186);
    org$pandalanguage$pandac$Type* $tmp2188 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2189 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2188);
    panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, $tmp2189);
    (($fn2191) p_out->$class->vtable[19])(p_out, $tmp2190);
    return result2180;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    panda$core$String* methodType2192;
    panda$core$String* entry2195;
    panda$core$String* rawClassPointer2202;
    panda$core$String* classPointer2224;
    panda$core$String* classType2226;
    panda$core$String* loadedClass2239;
    panda$core$String* itableFirst2254;
    panda$core$String* next2277;
    panda$core$String* leavingEntryLabel2284;
    panda$core$String* itableNext2286;
    panda$core$String* itablePtrPtr2291;
    panda$core$String* fail2293;
    panda$core$String* itablePtr2313;
    panda$core$String* itableClassPtr2322;
    panda$core$String* itableClass2336;
    panda$core$String* test2351;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2353;
    panda$core$String* success2375;
    panda$core$Int64 index2405;
    panda$collections$ListView* vtable2406;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2408;
    panda$core$String* methodPtrPtr2445;
    panda$core$String* cast2462;
    panda$core$String* methodPtr2474;
    org$pandalanguage$pandac$Type* $tmp2193 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2194 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2193);
    methodType2192 = $tmp2194;
    panda$core$String* $tmp2196 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2195 = $tmp2196;
    panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2197, entry2195);
    panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2198, &$s2199);
    (($fn2201) p_out->$class->vtable[19])(p_out, $tmp2200);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, entry2195, p_out);
    panda$core$String* $tmp2203 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawClassPointer2202 = $tmp2203;
    panda$core$String* $tmp2204 = panda$core$String$convert$R$panda$core$String(rawClassPointer2202);
    panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2204, &$s2205);
    org$pandalanguage$pandac$Type* $tmp2207 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2208 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2207);
    panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2206, $tmp2208);
    panda$core$String* $tmp2211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, &$s2210);
    panda$core$String* $tmp2212 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2212, &$s2213);
    panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, &$s2215);
    panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, &$s2217);
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2218, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, &$s2220);
    panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2211, $tmp2221);
    (($fn2223) p_out->$class->vtable[19])(p_out, $tmp2222);
    panda$core$String* $tmp2225 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2224 = $tmp2225;
    org$pandalanguage$pandac$Type* $tmp2227 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2228 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2227);
    classType2226 = $tmp2228;
    panda$core$String* $tmp2229 = panda$core$String$convert$R$panda$core$String(classPointer2224);
    panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2229, &$s2230);
    panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2231, rawClassPointer2202);
    panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2232, &$s2233);
    panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2234, classType2226);
    panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, &$s2236);
    (($fn2238) p_out->$class->vtable[19])(p_out, $tmp2237);
    panda$core$String* $tmp2240 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2239 = $tmp2240;
    panda$core$String* $tmp2241 = panda$core$String$convert$R$panda$core$String(loadedClass2239);
    panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2241, &$s2242);
    panda$core$String* $tmp2244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2243, classType2226);
    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2244, &$s2245);
    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, classType2226);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, &$s2248);
    panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, classPointer2224);
    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2250, &$s2251);
    (($fn2253) p_out->$class->vtable[19])(p_out, $tmp2252);
    panda$core$String* $tmp2255 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2254 = $tmp2255;
    panda$core$String* $tmp2256 = panda$core$String$convert$R$panda$core$String(itableFirst2254);
    panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2256, &$s2257);
    panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2258, classType2226);
    panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2259, &$s2260);
    panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2261, classType2226);
    panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2262, &$s2263);
    panda$core$String* $tmp2265 = panda$core$String$convert$R$panda$core$String(loadedClass2239);
    panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2265, &$s2266);
    panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, &$s2268);
    panda$core$String* $tmp2271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, &$s2270);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2271, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, &$s2273);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, $tmp2274);
    (($fn2276) p_out->$class->vtable[19])(p_out, $tmp2275);
    panda$core$String* $tmp2278 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2277 = $tmp2278;
    panda$core$String* $tmp2280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2279, next2277);
    panda$core$String* $tmp2282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2280, &$s2281);
    (($fn2283) p_out->$class->vtable[19])(p_out, $tmp2282);
    leavingEntryLabel2284 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, next2277, p_out);
    panda$core$Int64 $tmp2285 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2285;
    panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2287, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, &$s2289);
    itableNext2286 = $tmp2290;
    panda$core$String* $tmp2292 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2291 = $tmp2292;
    panda$core$String* $tmp2294 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2293 = $tmp2294;
    panda$core$String* $tmp2295 = panda$core$String$convert$R$panda$core$String(itablePtrPtr2291);
    panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2295, &$s2296);
    panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2297, itableFirst2254);
    panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2298, &$s2299);
    panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2300, leavingEntryLabel2284);
    panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2301, &$s2302);
    panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2304, itableNext2286);
    panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, &$s2306);
    panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2307, fail2293);
    panda$core$String* $tmp2310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2308, &$s2309);
    panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, $tmp2310);
    (($fn2312) p_out->$class->vtable[19])(p_out, $tmp2311);
    panda$core$String* $tmp2314 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2313 = $tmp2314;
    panda$core$String* $tmp2315 = panda$core$String$convert$R$panda$core$String(itablePtr2313);
    panda$core$String* $tmp2317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2315, &$s2316);
    panda$core$String* $tmp2318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2317, itablePtrPtr2291);
    panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2318, &$s2319);
    (($fn2321) p_out->$class->vtable[19])(p_out, $tmp2320);
    panda$core$String* $tmp2323 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2322 = $tmp2323;
    panda$core$String* $tmp2324 = panda$core$String$convert$R$panda$core$String(itableClassPtr2322);
    panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2324, &$s2325);
    panda$core$String* $tmp2327 = panda$core$String$convert$R$panda$core$String(itablePtr2313);
    panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2327, &$s2328);
    panda$core$String* $tmp2331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2329, &$s2330);
    panda$core$String* $tmp2333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2331, &$s2332);
    panda$core$String* $tmp2334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2326, $tmp2333);
    (($fn2335) p_out->$class->vtable[19])(p_out, $tmp2334);
    panda$core$String* $tmp2337 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2336 = $tmp2337;
    panda$core$String* $tmp2338 = panda$core$String$convert$R$panda$core$String(itableClass2336);
    panda$core$String* $tmp2340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2338, &$s2339);
    panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2340, classType2226);
    panda$core$String* $tmp2343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2341, &$s2342);
    panda$core$String* $tmp2344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2343, classType2226);
    panda$core$String* $tmp2346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2344, &$s2345);
    panda$core$String* $tmp2347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2346, itableClassPtr2322);
    panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2347, &$s2348);
    (($fn2350) p_out->$class->vtable[19])(p_out, $tmp2349);
    panda$core$String* $tmp2352 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2351 = $tmp2352;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2354 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2353 = $tmp2354;
    panda$core$String* $tmp2355 = panda$core$String$convert$R$panda$core$String(test2351);
    panda$core$String* $tmp2357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2355, &$s2356);
    panda$core$String* $tmp2358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2357, classType2226);
    panda$core$String* $tmp2360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2358, &$s2359);
    panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2360, intfCC2353->type);
    panda$core$String* $tmp2363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2361, &$s2362);
    panda$core$String* $tmp2364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2363, intfCC2353->name);
    panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2364, &$s2365);
    panda$core$String* $tmp2367 = panda$core$String$convert$R$panda$core$String(classType2226);
    panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2367, &$s2368);
    panda$core$String* $tmp2370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2369, itableClass2336);
    panda$core$String* $tmp2372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2370, &$s2371);
    panda$core$String* $tmp2373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2366, $tmp2372);
    (($fn2374) p_out->$class->vtable[19])(p_out, $tmp2373);
    panda$core$String* $tmp2376 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2375 = $tmp2376;
    panda$core$String* $tmp2378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2377, test2351);
    panda$core$String* $tmp2380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2378, &$s2379);
    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2380, success2375);
    panda$core$String* $tmp2383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2381, &$s2382);
    panda$core$String* $tmp2384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2383, fail2293);
    panda$core$String* $tmp2386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2384, &$s2385);
    (($fn2387) p_out->$class->vtable[19])(p_out, $tmp2386);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, fail2293, p_out);
    panda$core$String* $tmp2388 = panda$core$String$convert$R$panda$core$String(itableNext2286);
    panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2388, &$s2389);
    panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2390, itablePtr2313);
    panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2391, &$s2392);
    panda$core$String* $tmp2395 = panda$core$String$convert$R$panda$core$String(&$s2394);
    panda$core$String* $tmp2397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2395, &$s2396);
    panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2393, $tmp2397);
    (($fn2399) p_out->$class->vtable[19])(p_out, $tmp2398);
    panda$core$String* $tmp2401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2400, next2277);
    panda$core$String* $tmp2403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2401, &$s2402);
    (($fn2404) p_out->$class->vtable[19])(p_out, $tmp2403);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, success2375, p_out);
    index2405 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2407 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2406 = $tmp2407;
    ITable* $tmp2409 = ((panda$collections$CollectionView*) vtable2406)->$class->itable;
    while ($tmp2409->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2409 = $tmp2409->next;
    }
    $fn2411 $tmp2410 = $tmp2409->methods[0];
    panda$core$Int64 $tmp2412 = $tmp2410(((panda$collections$CollectionView*) vtable2406));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2408, ((panda$core$Int64) { 0 }), $tmp2412, ((panda$core$Bit) { false }));
    int64_t $tmp2414 = $tmp2408.min.value;
    panda$core$Int64 i2413 = { $tmp2414 };
    int64_t $tmp2416 = $tmp2408.max.value;
    bool $tmp2417 = $tmp2408.inclusive.value;
    if ($tmp2417) goto $l2424; else goto $l2425;
    $l2424:;
    if ($tmp2414 <= $tmp2416) goto $l2418; else goto $l2420;
    $l2425:;
    if ($tmp2414 < $tmp2416) goto $l2418; else goto $l2420;
    $l2418:;
    {
        ITable* $tmp2426 = vtable2406->$class->itable;
        while ($tmp2426->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2426 = $tmp2426->next;
        }
        $fn2428 $tmp2427 = $tmp2426->methods[0];
        panda$core$Object* $tmp2429 = $tmp2427(vtable2406, i2413);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2429)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2405 = i2413;
            goto $l2420;
        }
        }
    }
    $l2421:;
    int64_t $tmp2431 = $tmp2416 - i2413.value;
    if ($tmp2417) goto $l2432; else goto $l2433;
    $l2432:;
    if ($tmp2431 >= 1) goto $l2430; else goto $l2420;
    $l2433:;
    if ($tmp2431 > 1) goto $l2430; else goto $l2420;
    $l2430:;
    i2413.value += 1;
    goto $l2418;
    $l2420:;
    org$pandalanguage$pandac$Type* $tmp2436 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2437 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2436);
    panda$collections$ListView* $tmp2438 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2437);
    ITable* $tmp2439 = ((panda$collections$CollectionView*) $tmp2438)->$class->itable;
    while ($tmp2439->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2439 = $tmp2439->next;
    }
    $fn2441 $tmp2440 = $tmp2439->methods[0];
    panda$core$Int64 $tmp2442 = $tmp2440(((panda$collections$CollectionView*) $tmp2438));
    panda$core$Int64 $tmp2443 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2405, $tmp2442);
    index2405 = $tmp2443;
    panda$core$Bit $tmp2444 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2405, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2444.value);
    panda$core$String* $tmp2446 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2445 = $tmp2446;
    panda$core$String* $tmp2447 = panda$core$String$convert$R$panda$core$String(methodPtrPtr2445);
    panda$core$String* $tmp2449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2447, &$s2448);
    panda$core$String* $tmp2450 = panda$core$String$convert$R$panda$core$String(itablePtr2313);
    panda$core$String* $tmp2452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2450, &$s2451);
    panda$core$String* $tmp2454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2452, &$s2453);
    panda$core$String* $tmp2456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2454, &$s2455);
    panda$core$String* $tmp2457 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2456, ((panda$core$Object*) wrap_panda$core$Int64(index2405)));
    panda$core$String* $tmp2459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2457, &$s2458);
    panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2449, $tmp2459);
    (($fn2461) p_out->$class->vtable[19])(p_out, $tmp2460);
    panda$core$String* $tmp2463 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2462 = $tmp2463;
    panda$core$String* $tmp2464 = panda$core$String$convert$R$panda$core$String(cast2462);
    panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2464, &$s2465);
    panda$core$String* $tmp2467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, methodPtrPtr2445);
    panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, &$s2468);
    panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, methodType2192);
    panda$core$String* $tmp2472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2471);
    (($fn2473) p_out->$class->vtable[19])(p_out, $tmp2472);
    panda$core$String* $tmp2475 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2474 = $tmp2475;
    panda$core$String* $tmp2476 = panda$core$String$convert$R$panda$core$String(methodPtr2474);
    panda$core$String* $tmp2478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2476, &$s2477);
    panda$core$String* $tmp2479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2478, methodType2192);
    panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, &$s2480);
    panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2481, methodType2192);
    panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2482, &$s2483);
    panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2484, cast2462);
    panda$core$String* $tmp2487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2485, &$s2486);
    (($fn2488) p_out->$class->vtable[19])(p_out, $tmp2487);
    return methodPtr2474;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp2490 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2489 = $tmp2490.value;
    if (!$tmp2489) goto $l2491;
    panda$core$Bit $tmp2492 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2489 = $tmp2492.value;
    $l2491:;
    panda$core$Bit $tmp2493 = { $tmp2489 };
    if ($tmp2493.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2494.value) {
        {
            panda$core$String* $tmp2495 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2495;
        }
        }
        else {
        {
            panda$core$String* $tmp2496 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2496;
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
        panda$core$String* $tmp2497 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2497;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2498;
    panda$core$String* $match$1264_92499;
    panda$core$String* countStruct2504;
    panda$core$String* count2507;
    panda$core$String* size2516;
    panda$core$Int64 elementSize2518;
    panda$core$String* malloc2537;
    panda$core$String* result2550;
    panda$core$String* ptr2568;
    panda$core$String* baseType2571;
    panda$core$String* ptrType2574;
    panda$core$String* cast2577;
    panda$core$String* load2589;
    panda$core$String* ptr2608;
    panda$core$String* baseType2611;
    panda$core$String* ptrType2614;
    panda$core$String* cast2617;
    panda$core$String* indexStruct2629;
    panda$core$String* index2632;
    panda$core$String* offsetPtr2641;
    panda$core$String* load2661;
    panda$core$String* ptr2680;
    panda$core$String* ptrCast2683;
    panda$core$String* countStruct2692;
    panda$core$String* count2695;
    panda$core$String* size2704;
    panda$core$String* realloc2721;
    panda$core$String* result2738;
    panda$core$String* ptr2756;
    panda$core$String* baseType2759;
    panda$core$String* offsetStruct2763;
    panda$core$String* offset2766;
    panda$core$String* result2775;
    m2498 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$1264_92499 = ((org$pandalanguage$pandac$Symbol*) m2498->value)->name;
        panda$core$Bit $tmp2501 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1264_92499, &$s2500);
        if ($tmp2501.value) {
        {
            panda$core$Int64 $tmp2502 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2502, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2503.value);
            panda$core$Object* $tmp2505 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2506 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2505), p_out);
            countStruct2504 = $tmp2506;
            panda$core$String* $tmp2508 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2507 = $tmp2508;
            panda$core$String* $tmp2509 = panda$core$String$convert$R$panda$core$String(count2507);
            panda$core$String* $tmp2511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2509, &$s2510);
            panda$core$String* $tmp2512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2511, countStruct2504);
            panda$core$String* $tmp2514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2512, &$s2513);
            (($fn2515) p_out->$class->vtable[19])(p_out, $tmp2514);
            panda$core$String* $tmp2517 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2516 = $tmp2517;
            org$pandalanguage$pandac$Type* $tmp2519 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2498);
            panda$core$Object* $tmp2520 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2519->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2521 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2520));
            elementSize2518 = $tmp2521;
            panda$core$Bit $tmp2522 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2518, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2522.value);
            panda$core$String* $tmp2523 = panda$core$String$convert$R$panda$core$String(size2516);
            panda$core$String* $tmp2525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2523, &$s2524);
            panda$core$String* $tmp2527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2525, &$s2526);
            panda$core$String* $tmp2529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2527, &$s2528);
            panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2529, count2507);
            panda$core$String* $tmp2532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, &$s2531);
            panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2532, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2518)));
            panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, &$s2534);
            (($fn2536) p_out->$class->vtable[19])(p_out, $tmp2535);
            panda$core$String* $tmp2538 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2537 = $tmp2538;
            panda$core$String* $tmp2539 = panda$core$String$convert$R$panda$core$String(malloc2537);
            panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2539, &$s2540);
            panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2542);
            panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2543, &$s2544);
            panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2545, size2516);
            panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, &$s2547);
            (($fn2549) p_out->$class->vtable[19])(p_out, $tmp2548);
            panda$core$String* $tmp2551 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2550 = $tmp2551;
            panda$core$String* $tmp2552 = panda$core$String$convert$R$panda$core$String(result2550);
            panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2552, &$s2553);
            panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, malloc2537);
            panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, &$s2556);
            org$pandalanguage$pandac$Type* $tmp2558 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2498);
            panda$core$String* $tmp2559 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2558);
            panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, $tmp2559);
            panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, &$s2561);
            (($fn2563) p_out->$class->vtable[19])(p_out, $tmp2562);
            return result2550;
        }
        }
        else {
        panda$core$Bit $tmp2565 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1264_92499, &$s2564);
        if ($tmp2565.value) {
        {
            panda$core$Int64 $tmp2566 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2566, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2567.value);
            panda$core$Object* $tmp2569 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2570 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2569), p_out);
            ptr2568 = $tmp2570;
            org$pandalanguage$pandac$Type* $tmp2572 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2498);
            panda$core$String* $tmp2573 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2572);
            baseType2571 = $tmp2573;
            panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2571, &$s2575);
            ptrType2574 = $tmp2576;
            panda$core$String* $tmp2578 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2577 = $tmp2578;
            panda$core$String* $tmp2579 = panda$core$String$convert$R$panda$core$String(cast2577);
            panda$core$String* $tmp2581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2579, &$s2580);
            panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2581, ptr2568);
            panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, &$s2583);
            panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, ptrType2574);
            panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2586);
            (($fn2588) p_out->$class->vtable[19])(p_out, $tmp2587);
            panda$core$String* $tmp2590 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2589 = $tmp2590;
            panda$core$String* $tmp2591 = panda$core$String$convert$R$panda$core$String(load2589);
            panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2592);
            panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, baseType2571);
            panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, &$s2595);
            panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, ptrType2574);
            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2598);
            panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, cast2577);
            panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2600, &$s2601);
            (($fn2603) p_out->$class->vtable[19])(p_out, $tmp2602);
            return load2589;
        }
        }
        else {
        panda$core$Bit $tmp2605 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1264_92499, &$s2604);
        if ($tmp2605.value) {
        {
            panda$core$Int64 $tmp2606 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2606, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2607.value);
            panda$core$Object* $tmp2609 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2610 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2609), p_out);
            ptr2608 = $tmp2610;
            org$pandalanguage$pandac$Type* $tmp2612 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2498);
            panda$core$String* $tmp2613 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2612);
            baseType2611 = $tmp2613;
            panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2611, &$s2615);
            ptrType2614 = $tmp2616;
            panda$core$String* $tmp2618 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2617 = $tmp2618;
            panda$core$String* $tmp2619 = panda$core$String$convert$R$panda$core$String(cast2617);
            panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, &$s2620);
            panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2621, ptr2608);
            panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, &$s2623);
            panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2624, ptrType2614);
            panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2625, &$s2626);
            (($fn2628) p_out->$class->vtable[19])(p_out, $tmp2627);
            panda$core$Object* $tmp2630 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2631 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2630), p_out);
            indexStruct2629 = $tmp2631;
            panda$core$String* $tmp2633 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2632 = $tmp2633;
            panda$core$String* $tmp2634 = panda$core$String$convert$R$panda$core$String(index2632);
            panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2634, &$s2635);
            panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2636, indexStruct2629);
            panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, &$s2638);
            (($fn2640) p_out->$class->vtable[19])(p_out, $tmp2639);
            panda$core$String* $tmp2642 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2641 = $tmp2642;
            panda$core$String* $tmp2643 = panda$core$String$convert$R$panda$core$String(offsetPtr2641);
            panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2643, &$s2644);
            panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2645, baseType2611);
            panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2646, &$s2647);
            panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, ptrType2614);
            panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2650);
            panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, cast2617);
            panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, &$s2653);
            panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2655, index2632);
            panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, &$s2657);
            panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, $tmp2658);
            (($fn2660) p_out->$class->vtable[19])(p_out, $tmp2659);
            panda$core$String* $tmp2662 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2661 = $tmp2662;
            panda$core$String* $tmp2663 = panda$core$String$convert$R$panda$core$String(load2661);
            panda$core$String* $tmp2665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2663, &$s2664);
            panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2665, baseType2611);
            panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, &$s2667);
            panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2668, ptrType2614);
            panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2669, &$s2670);
            panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, offsetPtr2641);
            panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2672, &$s2673);
            (($fn2675) p_out->$class->vtable[19])(p_out, $tmp2674);
            return load2661;
        }
        }
        else {
        panda$core$Bit $tmp2677 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1264_92499, &$s2676);
        if ($tmp2677.value) {
        {
            panda$core$Int64 $tmp2678 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2678, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2679.value);
            panda$core$Object* $tmp2681 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2682 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2681), p_out);
            ptr2680 = $tmp2682;
            panda$core$String* $tmp2684 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2683 = $tmp2684;
            panda$core$String* $tmp2685 = panda$core$String$convert$R$panda$core$String(ptrCast2683);
            panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, &$s2686);
            panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2687, ptr2680);
            panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2688, &$s2689);
            (($fn2691) p_out->$class->vtable[19])(p_out, $tmp2690);
            panda$core$Object* $tmp2693 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2694 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2693), p_out);
            countStruct2692 = $tmp2694;
            panda$core$String* $tmp2696 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2695 = $tmp2696;
            panda$core$String* $tmp2697 = panda$core$String$convert$R$panda$core$String(count2695);
            panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, &$s2698);
            panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2699, countStruct2692);
            panda$core$String* $tmp2702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, &$s2701);
            (($fn2703) p_out->$class->vtable[19])(p_out, $tmp2702);
            panda$core$String* $tmp2705 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2704 = $tmp2705;
            panda$core$String* $tmp2706 = panda$core$String$convert$R$panda$core$String(size2704);
            panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2706, &$s2707);
            panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, &$s2709);
            panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, &$s2711);
            panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2712, count2695);
            panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2714);
            org$pandalanguage$pandac$Type* $tmp2716 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2498);
            panda$core$Object* $tmp2717 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2716->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2718 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2717));
            panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2715, ((panda$core$Object*) wrap_panda$core$Int64($tmp2718)));
            (($fn2720) p_out->$class->vtable[19])(p_out, $tmp2719);
            panda$core$String* $tmp2722 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2721 = $tmp2722;
            panda$core$String* $tmp2723 = panda$core$String$convert$R$panda$core$String(realloc2721);
            panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, &$s2724);
            panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2725, ptrCast2683);
            panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, &$s2727);
            panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2728, &$s2729);
            panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2730, &$s2731);
            panda$core$String* $tmp2733 = panda$core$String$convert$R$panda$core$String(size2704);
            panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, &$s2734);
            panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2732, $tmp2735);
            (($fn2737) p_out->$class->vtable[19])(p_out, $tmp2736);
            panda$core$String* $tmp2739 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2738 = $tmp2739;
            panda$core$String* $tmp2740 = panda$core$String$convert$R$panda$core$String(result2738);
            panda$core$String* $tmp2742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2740, &$s2741);
            panda$core$String* $tmp2743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2742, realloc2721);
            panda$core$String* $tmp2745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2743, &$s2744);
            org$pandalanguage$pandac$Type* $tmp2746 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2498);
            panda$core$String* $tmp2747 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2746);
            panda$core$String* $tmp2748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2745, $tmp2747);
            panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2748, &$s2749);
            (($fn2751) p_out->$class->vtable[19])(p_out, $tmp2750);
            return result2738;
        }
        }
        else {
        panda$core$Bit $tmp2753 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1264_92499, &$s2752);
        if ($tmp2753.value) {
        {
            panda$core$Int64 $tmp2754 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2754, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2755.value);
            panda$core$Object* $tmp2757 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2758 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2757), p_out);
            ptr2756 = $tmp2758;
            panda$core$Object* $tmp2760 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2761 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2760)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2762 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2761));
            baseType2759 = $tmp2762;
            panda$core$Object* $tmp2764 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2765 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2764), p_out);
            offsetStruct2763 = $tmp2765;
            panda$core$String* $tmp2767 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2766 = $tmp2767;
            panda$core$String* $tmp2768 = panda$core$String$convert$R$panda$core$String(offset2766);
            panda$core$String* $tmp2770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2768, &$s2769);
            panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2770, offsetStruct2763);
            panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2771, &$s2772);
            (($fn2774) p_out->$class->vtable[19])(p_out, $tmp2773);
            panda$core$String* $tmp2776 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2775 = $tmp2776;
            panda$core$String* $tmp2777 = panda$core$String$convert$R$panda$core$String(result2775);
            panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, &$s2778);
            panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, baseType2759);
            panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, &$s2781);
            panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2782, ptr2756);
            panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2783, &$s2784);
            panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2785, offset2766);
            panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2786, &$s2787);
            (($fn2789) p_out->$class->vtable[19])(p_out, $tmp2788);
            return result2775;
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
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, org$pandalanguage$pandac$IRNode* p_body, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2790;
    panda$core$String* selfRef2791;
    panda$core$Int64 argStart2793;
    panda$core$String* selfLoad2807;
    panda$core$String* t2809;
    panda$collections$Array* args2825;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2828;
    panda$core$String* end2851;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2860;
    org$pandalanguage$pandac$MethodDecl* old2867;
    panda$core$String* phi2880;
    panda$core$String* separator2890;
    panda$collections$Iterator* ret$Iter2892;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2904;
    m2790 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) m2790->owner));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2790), ((panda$core$Object*) m2790));
    selfRef2791 = &$s2792;
    panda$core$Bit $tmp2794 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2790);
    if ($tmp2794.value) {
    {
        argStart2793 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2795 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2796 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2795), p_out);
        selfRef2791 = $tmp2796;
        panda$core$Bit $tmp2799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->currentMethod->methodKind, ((panda$core$Int64) { 59 }));
        bool $tmp2798 = $tmp2799.value;
        if (!$tmp2798) goto $l2800;
        panda$core$Object* $tmp2801 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2801)->kind, ((panda$core$Int64) { 1025 }));
        $tmp2798 = $tmp2802.value;
        $l2800:;
        panda$core$Bit $tmp2803 = { $tmp2798 };
        bool $tmp2797 = $tmp2803.value;
        if (!$tmp2797) goto $l2804;
        panda$core$Bit $tmp2805 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, self->currentMethod->owner);
        $tmp2797 = $tmp2805.value;
        $l2804:;
        panda$core$Bit $tmp2806 = { $tmp2797 };
        if ($tmp2806.value) {
        {
            panda$core$String* $tmp2808 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            selfLoad2807 = $tmp2808;
            org$pandalanguage$pandac$Type* $tmp2810 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
            panda$core$String* $tmp2811 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2810);
            t2809 = $tmp2811;
            panda$core$String* $tmp2812 = panda$core$String$convert$R$panda$core$String(selfLoad2807);
            panda$core$String* $tmp2814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, &$s2813);
            panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2814, t2809);
            panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, &$s2816);
            panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, t2809);
            panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, &$s2819);
            panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, selfRef2791);
            panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
            (($fn2824) p_out->$class->vtable[19])(p_out, $tmp2823);
            selfRef2791 = selfLoad2807;
        }
        }
    }
    }
    else {
    {
        argStart2793 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2826 = (panda$collections$Array*) malloc(40);
    $tmp2826->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2826->refCount.value = 1;
    panda$collections$Array$init($tmp2826);
    args2825 = $tmp2826;
    panda$core$Int64 $tmp2829 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2828, argStart2793, $tmp2829, ((panda$core$Bit) { false }));
    int64_t $tmp2831 = $tmp2828.min.value;
    panda$core$Int64 i2830 = { $tmp2831 };
    int64_t $tmp2833 = $tmp2828.max.value;
    bool $tmp2834 = $tmp2828.inclusive.value;
    if ($tmp2834) goto $l2841; else goto $l2842;
    $l2841:;
    if ($tmp2831 <= $tmp2833) goto $l2835; else goto $l2837;
    $l2842:;
    if ($tmp2831 < $tmp2833) goto $l2835; else goto $l2837;
    $l2835:;
    {
        panda$core$Object* $tmp2843 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2830);
        panda$core$String* $tmp2844 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2843), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2825, ((panda$core$Object*) $tmp2844));
    }
    $l2838:;
    int64_t $tmp2846 = $tmp2833 - i2830.value;
    if ($tmp2834) goto $l2847; else goto $l2848;
    $l2847:;
    if ($tmp2846 >= 1) goto $l2845; else goto $l2837;
    $l2848:;
    if ($tmp2846 > 1) goto $l2845; else goto $l2837;
    $l2845:;
    i2830.value += 1;
    goto $l2835;
    $l2837:;
    panda$core$String* $tmp2852 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2851 = $tmp2852;
    panda$core$Int64 $tmp2853 = panda$collections$Array$get_count$R$panda$core$Int64(args2825);
    panda$core$Int64 $tmp2854 = panda$collections$Array$get_count$R$panda$core$Int64(m2790->parameters);
    panda$core$Bit $tmp2855 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2853, $tmp2854);
    if ($tmp2855.value) {
    {
        panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2856, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2857, &$s2858);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2859));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2861 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2861->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2861->refCount.value = 1;
    panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2863, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, &$s2865);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2861, $tmp2866, selfRef2791, ((panda$collections$ListView*) args2825), end2851);
    inline2860 = $tmp2861;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2860));
    old2867 = self->currentMethod;
    self->currentMethod = m2790;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_body, p_out);
    self->currentMethod = old2867;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2868 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2869 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2868);
    if ($tmp2869.value) {
    {
        (($fn2871) p_out->$class->vtable[19])(p_out, &$s2870);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end2851, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2790));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    panda$core$Int64 $tmp2872 = panda$collections$Array$get_count$R$panda$core$Int64(inline2860->returns);
    panda$core$Bit $tmp2873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2872, ((panda$core$Int64) { 1 }));
    if ($tmp2873.value) {
    {
        panda$core$Object* $tmp2874 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2860->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2874)->second);
    }
    }
    panda$core$Int64 $tmp2875 = panda$collections$Array$get_count$R$panda$core$Int64(inline2860->returns);
    panda$core$Bit $tmp2876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2875, ((panda$core$Int64) { 0 }));
    if ($tmp2876.value) {
    {
        (($fn2878) p_out->$class->vtable[16])(p_out, &$s2877);
        return &$s2879;
    }
    }
    panda$core$String* $tmp2881 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2880 = $tmp2881;
    panda$core$String* $tmp2882 = panda$core$String$convert$R$panda$core$String(phi2880);
    panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2882, &$s2883);
    panda$core$String* $tmp2885 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2790->returnType);
    panda$core$String* $tmp2886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, $tmp2885);
    panda$core$String* $tmp2888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2886, &$s2887);
    (($fn2889) p_out->$class->vtable[16])(p_out, $tmp2888);
    separator2890 = &$s2891;
    {
        ITable* $tmp2893 = ((panda$collections$Iterable*) inline2860->returns)->$class->itable;
        while ($tmp2893->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2893 = $tmp2893->next;
        }
        $fn2895 $tmp2894 = $tmp2893->methods[0];
        panda$collections$Iterator* $tmp2896 = $tmp2894(((panda$collections$Iterable*) inline2860->returns));
        ret$Iter2892 = $tmp2896;
        $l2897:;
        ITable* $tmp2899 = ret$Iter2892->$class->itable;
        while ($tmp2899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2899 = $tmp2899->next;
        }
        $fn2901 $tmp2900 = $tmp2899->methods[0];
        panda$core$Bit $tmp2902 = $tmp2900(ret$Iter2892);
        panda$core$Bit $tmp2903 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2902);
        if (!$tmp2903.value) goto $l2898;
        {
            ITable* $tmp2905 = ret$Iter2892->$class->itable;
            while ($tmp2905->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2905 = $tmp2905->next;
            }
            $fn2907 $tmp2906 = $tmp2905->methods[1];
            panda$core$Object* $tmp2908 = $tmp2906(ret$Iter2892);
            ret2904 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2908);
            panda$core$String* $tmp2909 = panda$core$String$convert$R$panda$core$String(separator2890);
            panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2909, &$s2910);
            panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2911, ((panda$core$String*) ret2904->second));
            panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2912, &$s2913);
            panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, ((panda$core$String*) ret2904->first));
            panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2915, &$s2916);
            (($fn2918) p_out->$class->vtable[16])(p_out, $tmp2917);
            separator2890 = &$s2919;
        }
        goto $l2897;
        $l2898:;
    }
    (($fn2920) p_out->$class->vtable[17])(p_out);
    return phi2880;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2922;
    panda$core$String* bit2932;
    panda$core$String* result2936;
    panda$core$String* bit2950;
    panda$core$String* result2954;
    org$pandalanguage$pandac$IRNode* block2969;
    panda$collections$Array* args2973;
    org$pandalanguage$pandac$Type* actualMethodType2977;
    panda$core$String* actualResultType2978;
    panda$core$Bit isSuper2979;
    panda$core$Int64 offset2999;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3004;
    panda$core$String* arg3019;
    panda$core$String* target3051;
    panda$core$String* methodRef3055;
    panda$core$String* result3057;
    panda$core$Bit indirect3058;
    panda$core$String* separator3083;
    panda$core$String* indirectVar3085;
    panda$collections$Iterator* arg$Iter3104;
    panda$core$String* arg3116;
    panda$core$Bit $tmp2921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2921.value);
    m2922 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2924 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2922->owner)->name, &$s2923);
    if ($tmp2924.value) {
    {
        panda$core$String* $tmp2925 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2925;
    }
    }
    if (m2922->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2922);
    }
    }
    panda$core$Bit $tmp2927 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2922->owner)->name, &$s2926);
    if ($tmp2927.value) {
    {
        panda$core$Bit $tmp2929 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2922)->name, &$s2928);
        if ($tmp2929.value) {
        {
            panda$core$Int64 $tmp2930 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2930, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2931.value);
            panda$core$Object* $tmp2933 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2934 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2935 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2933), ((org$pandalanguage$pandac$IRNode*) $tmp2934), p_out);
            bit2932 = $tmp2935;
            panda$core$String* $tmp2937 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2936 = $tmp2937;
            panda$core$String* $tmp2938 = panda$core$String$convert$R$panda$core$String(result2936);
            panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2938, &$s2939);
            panda$core$String* $tmp2941 = panda$core$String$convert$R$panda$core$String(bit2932);
            panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2941, &$s2942);
            panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2940, $tmp2943);
            (($fn2945) p_out->$class->vtable[19])(p_out, $tmp2944);
            return result2936;
        }
        }
        panda$core$Bit $tmp2947 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2922)->name, &$s2946);
        if ($tmp2947.value) {
        {
            panda$core$Int64 $tmp2948 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2948, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2949.value);
            panda$core$Object* $tmp2951 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2952 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2953 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2951), ((org$pandalanguage$pandac$IRNode*) $tmp2952), p_out);
            bit2950 = $tmp2953;
            panda$core$String* $tmp2955 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2954 = $tmp2955;
            panda$core$String* $tmp2956 = panda$core$String$convert$R$panda$core$String(result2954);
            panda$core$String* $tmp2958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2956, &$s2957);
            panda$core$String* $tmp2959 = panda$core$String$convert$R$panda$core$String(bit2950);
            panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, &$s2960);
            panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2958, $tmp2961);
            (($fn2963) p_out->$class->vtable[19])(p_out, $tmp2962);
            return result2954;
        }
        }
    }
    }
    panda$core$Bit $tmp2965 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2922->annotations);
    bool $tmp2964 = $tmp2965.value;
    if (!$tmp2964) goto $l2966;
    panda$core$Object* $tmp2967 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2922));
    $tmp2964 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp2967) == NULL }).value;
    $l2966:;
    panda$core$Bit $tmp2968 = { $tmp2964 };
    if ($tmp2968.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2970 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2922);
        block2969 = $tmp2970;
        if (((panda$core$Bit) { block2969 != NULL }).value) {
        {
            panda$core$String* $tmp2971 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, block2969, p_out);
            return $tmp2971;
        }
        }
        return &$s2972;
    }
    }
    panda$collections$Array* $tmp2974 = (panda$collections$Array*) malloc(40);
    $tmp2974->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2974->refCount.value = 1;
    panda$core$Int64 $tmp2976 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp2974, $tmp2976);
    args2973 = $tmp2974;
    panda$core$Int64 $tmp2981 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2982 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2981, ((panda$core$Int64) { 1 }));
    bool $tmp2980 = $tmp2982.value;
    if (!$tmp2980) goto $l2983;
    panda$core$Object* $tmp2984 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2984)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2980 = $tmp2985.value;
    $l2983:;
    panda$core$Bit $tmp2986 = { $tmp2980 };
    isSuper2979 = $tmp2986;
    panda$core$Bit $tmp2988 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2979);
    bool $tmp2987 = $tmp2988.value;
    if (!$tmp2987) goto $l2989;
    panda$core$Bit $tmp2990 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2922);
    $tmp2987 = $tmp2990.value;
    $l2989:;
    panda$core$Bit $tmp2991 = { $tmp2987 };
    if ($tmp2991.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2992 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2922);
        actualMethodType2977 = $tmp2992;
        panda$core$Int64 $tmp2993 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2977->subtypes);
        panda$core$Int64 $tmp2994 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2993, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2995 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2977->subtypes, $tmp2994);
        panda$core$String* $tmp2996 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2995));
        actualResultType2978 = $tmp2996;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2997 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2922);
        actualMethodType2977 = $tmp2997;
        panda$core$String* $tmp2998 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2978 = $tmp2998;
    }
    }
    panda$core$Int64 $tmp3000 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp3001 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2977->subtypes);
    panda$core$Int64 $tmp3002 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3000, $tmp3001);
    panda$core$Int64 $tmp3003 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp3002, ((panda$core$Int64) { 1 }));
    offset2999 = $tmp3003;
    panda$core$Int64 $tmp3005 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3004, ((panda$core$Int64) { 0 }), $tmp3005, ((panda$core$Bit) { false }));
    int64_t $tmp3007 = $tmp3004.min.value;
    panda$core$Int64 i3006 = { $tmp3007 };
    int64_t $tmp3009 = $tmp3004.max.value;
    bool $tmp3010 = $tmp3004.inclusive.value;
    if ($tmp3010) goto $l3017; else goto $l3018;
    $l3017:;
    if ($tmp3007 <= $tmp3009) goto $l3011; else goto $l3013;
    $l3018:;
    if ($tmp3007 < $tmp3009) goto $l3011; else goto $l3013;
    $l3011:;
    {
        panda$core$Object* $tmp3020 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i3006);
        panda$core$String* $tmp3021 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3020), p_out);
        arg3019 = $tmp3021;
        panda$core$Bit $tmp3023 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i3006, offset2999);
        bool $tmp3022 = $tmp3023.value;
        if (!$tmp3022) goto $l3024;
        panda$core$Int64 $tmp3025 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3006, offset2999);
        panda$core$Object* $tmp3026 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2977->subtypes, $tmp3025);
        panda$core$Object* $tmp3027 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i3006);
        panda$core$Bit $tmp3028 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3026), ((org$pandalanguage$pandac$IRNode*) $tmp3027)->type);
        $tmp3022 = $tmp3028.value;
        $l3024:;
        panda$core$Bit $tmp3029 = { $tmp3022 };
        if ($tmp3029.value) {
        {
            panda$core$Int64 $tmp3030 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3006, offset2999);
            panda$core$Object* $tmp3031 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2977->subtypes, $tmp3030);
            panda$core$String* $tmp3032 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3031));
            panda$core$String* $tmp3034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3032, &$s3033);
            panda$core$Object* $tmp3035 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i3006);
            panda$core$Int64 $tmp3036 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3006, offset2999);
            panda$core$Object* $tmp3037 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2977->subtypes, $tmp3036);
            panda$core$String* $tmp3038 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg3019, ((org$pandalanguage$pandac$IRNode*) $tmp3035)->type, ((org$pandalanguage$pandac$Type*) $tmp3037), p_out);
            panda$core$String* $tmp3039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3034, $tmp3038);
            arg3019 = $tmp3039;
        }
        }
        else {
        {
            panda$core$Object* $tmp3040 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i3006);
            panda$core$String* $tmp3041 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3040)->type);
            panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
            panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3043, arg3019);
            arg3019 = $tmp3044;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2973, ((panda$core$Object*) arg3019));
    }
    $l3014:;
    int64_t $tmp3046 = $tmp3009 - i3006.value;
    if ($tmp3010) goto $l3047; else goto $l3048;
    $l3047:;
    if ($tmp3046 >= 1) goto $l3045; else goto $l3013;
    $l3048:;
    if ($tmp3046 > 1) goto $l3045; else goto $l3013;
    $l3045:;
    i3006.value += 1;
    goto $l3011;
    $l3013:;
    panda$core$Int64 $tmp3052 = panda$collections$Array$get_count$R$panda$core$Int64(args2973);
    panda$core$Bit $tmp3053 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3052, ((panda$core$Int64) { 0 }));
    if ($tmp3053.value) {
    {
        panda$core$Object* $tmp3054 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2973, ((panda$core$Int64) { 0 }));
        target3051 = ((panda$core$String*) $tmp3054);
    }
    }
    else {
    {
        target3051 = NULL;
    }
    }
    panda$core$String* $tmp3056 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, target3051, m2922, isSuper2979, p_out);
    methodRef3055 = $tmp3056;
    panda$core$Bit $tmp3059 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2922);
    indirect3058 = $tmp3059;
    if (indirect3058.value) {
    {
        panda$core$String* $tmp3061 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2922);
        panda$core$String* $tmp3062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3060, $tmp3061);
        panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3062, &$s3063);
        (($fn3065) p_out->$class->vtable[16])(p_out, $tmp3064);
    }
    }
    else {
    {
        panda$core$String* $tmp3066 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3057 = $tmp3066;
        panda$core$String* $tmp3067 = panda$core$String$convert$R$panda$core$String(result3057);
        panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3067, &$s3068);
        panda$core$String* $tmp3070 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2922);
        panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, $tmp3070);
        panda$core$String* $tmp3073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3071, &$s3072);
        panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3073, actualResultType2978);
        panda$core$String* $tmp3076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3074, &$s3075);
        (($fn3077) p_out->$class->vtable[16])(p_out, $tmp3076);
    }
    }
    panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3078, methodRef3055);
    panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3079, &$s3080);
    (($fn3082) p_out->$class->vtable[16])(p_out, $tmp3081);
    separator3083 = &$s3084;
    if (indirect3058.value) {
    {
        panda$core$Int64 $tmp3086 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3086;
        panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3087, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3085 = $tmp3088;
        panda$core$String* $tmp3089 = panda$core$String$convert$R$panda$core$String(indirectVar3085);
        panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3089, &$s3090);
        panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3091, actualResultType2978);
        panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3093);
        (($fn3095) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3094);
        panda$core$String* $tmp3096 = panda$core$String$convert$R$panda$core$String(actualResultType2978);
        panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
        panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3098, indirectVar3085);
        panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, &$s3100);
        (($fn3102) p_out->$class->vtable[16])(p_out, $tmp3101);
        separator3083 = &$s3103;
    }
    }
    {
        ITable* $tmp3105 = ((panda$collections$Iterable*) args2973)->$class->itable;
        while ($tmp3105->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3105 = $tmp3105->next;
        }
        $fn3107 $tmp3106 = $tmp3105->methods[0];
        panda$collections$Iterator* $tmp3108 = $tmp3106(((panda$collections$Iterable*) args2973));
        arg$Iter3104 = $tmp3108;
        $l3109:;
        ITable* $tmp3111 = arg$Iter3104->$class->itable;
        while ($tmp3111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3111 = $tmp3111->next;
        }
        $fn3113 $tmp3112 = $tmp3111->methods[0];
        panda$core$Bit $tmp3114 = $tmp3112(arg$Iter3104);
        panda$core$Bit $tmp3115 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3114);
        if (!$tmp3115.value) goto $l3110;
        {
            ITable* $tmp3117 = arg$Iter3104->$class->itable;
            while ($tmp3117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3117 = $tmp3117->next;
            }
            $fn3119 $tmp3118 = $tmp3117->methods[1];
            panda$core$Object* $tmp3120 = $tmp3118(arg$Iter3104);
            arg3116 = ((panda$core$String*) $tmp3120);
            panda$core$String* $tmp3121 = panda$core$String$convert$R$panda$core$String(separator3083);
            panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, &$s3122);
            panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3123, arg3116);
            panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, &$s3125);
            (($fn3127) p_out->$class->vtable[16])(p_out, $tmp3126);
            separator3083 = &$s3128;
        }
        goto $l3109;
        $l3110:;
    }
    (($fn3130) p_out->$class->vtable[19])(p_out, &$s3129);
    if (indirect3058.value) {
    {
        panda$core$String* $tmp3131 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3057 = $tmp3131;
        panda$core$String* $tmp3132 = panda$core$String$convert$R$panda$core$String(result3057);
        panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3132, &$s3133);
        panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3134, actualResultType2978);
        panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, &$s3136);
        panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, actualResultType2978);
        panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3138, &$s3139);
        panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3140, indirectVar3085);
        (($fn3142) p_out->$class->vtable[19])(p_out, $tmp3141);
    }
    }
    panda$core$String* $tmp3143 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3144 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3143, actualResultType2978);
    if ($tmp3144.value) {
    {
        panda$core$Int64 $tmp3145 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2977->subtypes);
        panda$core$Int64 $tmp3146 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3145, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2977->subtypes, $tmp3146);
        panda$core$String* $tmp3148 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, result3057, ((org$pandalanguage$pandac$Type*) $tmp3147), p_call->type, p_out);
        return $tmp3148;
    }
    }
    return result3057;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3149;
    panda$core$String* testStart3152;
    panda$core$String* isNonNull3153;
    panda$core$String* nonNullLabel3166;
    panda$core$String* endLabel3168;
    panda$core$String* unwrapped3181;
    panda$core$String* nonNullValue3184;
    panda$core$String* result3192;
    panda$core$String* mallocRef3213;
    panda$core$String* wrapperTypeName3224;
    panda$core$String* wrapperType3227;
    panda$core$String* wrapperCast3230;
    panda$core$String* classPtr3242;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3258;
    panda$core$String* ccCast3260;
    panda$core$String* refCount3278;
    panda$core$String* target3299;
    panda$core$String* result3333;
    org$pandalanguage$pandac$ClassDecl* $tmp3150 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3149 = $tmp3150;
    PANDA_ASSERT(((panda$core$Bit) { src3149 != NULL }).value);
    panda$core$Bit $tmp3151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3151.value) {
    {
        testStart3152 = self->currentBlock;
        panda$core$String* $tmp3154 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3153 = $tmp3154;
        panda$core$String* $tmp3155 = panda$core$String$convert$R$panda$core$String(isNonNull3153);
        panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, &$s3156);
        panda$core$String* $tmp3158 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3157, $tmp3158);
        panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, &$s3160);
        panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, p_value);
        panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, &$s3163);
        (($fn3165) p_out->$class->vtable[19])(p_out, $tmp3164);
        panda$core$String* $tmp3167 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3166 = $tmp3167;
        panda$core$String* $tmp3169 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3168 = $tmp3169;
        panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3170, isNonNull3153);
        panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, &$s3172);
        panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, nonNullLabel3166);
        panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, &$s3175);
        panda$core$String* $tmp3177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, endLabel3168);
        panda$core$String* $tmp3179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3177, &$s3178);
        (($fn3180) p_out->$class->vtable[19])(p_out, $tmp3179);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3166, p_out);
        panda$core$Object* $tmp3182 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3183 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3182), p_out);
        unwrapped3181 = $tmp3183;
        panda$core$Object* $tmp3185 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3186 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, unwrapped3181, ((org$pandalanguage$pandac$Type*) $tmp3185), p_dstType, p_out);
        nonNullValue3184 = $tmp3186;
        panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3187, endLabel3168);
        panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3188, &$s3189);
        (($fn3191) p_out->$class->vtable[19])(p_out, $tmp3190);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3168, p_out);
        panda$core$String* $tmp3193 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3192 = $tmp3193;
        panda$core$String* $tmp3194 = panda$core$String$convert$R$panda$core$String(result3192);
        panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, &$s3195);
        panda$core$String* $tmp3197 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, $tmp3197);
        panda$core$String* $tmp3200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3198, &$s3199);
        panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3200, testStart3152);
        panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3201, &$s3202);
        panda$core$String* $tmp3205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3204, nonNullValue3184);
        panda$core$String* $tmp3207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3205, &$s3206);
        panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, nonNullLabel3166);
        panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, &$s3209);
        panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3203, $tmp3210);
        (($fn3212) p_out->$class->vtable[19])(p_out, $tmp3211);
        return result3192;
    }
    }
    panda$core$String* $tmp3214 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3213 = $tmp3214;
    panda$core$String* $tmp3215 = panda$core$String$convert$R$panda$core$String(mallocRef3213);
    panda$core$String* $tmp3217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3215, &$s3216);
    org$pandalanguage$pandac$Type* $tmp3218 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3149);
    panda$core$Int64 $tmp3219 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3218);
    panda$core$String* $tmp3220 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3217, ((panda$core$Object*) wrap_panda$core$Int64($tmp3219)));
    panda$core$String* $tmp3222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3220, &$s3221);
    (($fn3223) p_out->$class->vtable[19])(p_out, $tmp3222);
    org$pandalanguage$pandac$Type* $tmp3225 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3149);
    panda$core$String* $tmp3226 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3225);
    wrapperTypeName3224 = $tmp3226;
    org$pandalanguage$pandac$Type* $tmp3228 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3149);
    panda$core$String* $tmp3229 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3228);
    wrapperType3227 = $tmp3229;
    panda$core$String* $tmp3231 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3230 = $tmp3231;
    panda$core$String* $tmp3232 = panda$core$String$convert$R$panda$core$String(wrapperCast3230);
    panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3232, &$s3233);
    panda$core$String* $tmp3235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3234, mallocRef3213);
    panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3235, &$s3236);
    panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3237, wrapperType3227);
    panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, &$s3239);
    (($fn3241) p_out->$class->vtable[19])(p_out, $tmp3240);
    panda$core$String* $tmp3243 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3242 = $tmp3243;
    panda$core$String* $tmp3244 = panda$core$String$convert$R$panda$core$String(classPtr3242);
    panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3244, &$s3245);
    panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, wrapperTypeName3224);
    panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3247, &$s3248);
    panda$core$String* $tmp3250 = panda$core$String$convert$R$panda$core$String(wrapperType3227);
    panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3250, &$s3251);
    panda$core$String* $tmp3253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3252, wrapperCast3230);
    panda$core$String* $tmp3255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3253, &$s3254);
    panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, $tmp3255);
    (($fn3257) p_out->$class->vtable[19])(p_out, $tmp3256);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3259 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3149);
    cc3258 = $tmp3259;
    panda$core$Bit $tmp3262 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(cc3258->type, &$s3261);
    if ($tmp3262.value) {
    {
        panda$core$String* $tmp3264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3263, cc3258->type);
        panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3264, &$s3265);
        panda$core$String* $tmp3267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3266, cc3258->name);
        panda$core$String* $tmp3269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3267, &$s3268);
        ccCast3260 = $tmp3269;
    }
    }
    else {
    {
        ccCast3260 = cc3258->name;
    }
    }
    panda$core$String* $tmp3271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3270, ccCast3260);
    panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3271, &$s3272);
    panda$core$String* $tmp3274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3273, classPtr3242);
    panda$core$String* $tmp3276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3274, &$s3275);
    (($fn3277) p_out->$class->vtable[19])(p_out, $tmp3276);
    panda$core$String* $tmp3279 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3278 = $tmp3279;
    panda$core$String* $tmp3280 = panda$core$String$convert$R$panda$core$String(refCount3278);
    panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3280, &$s3281);
    panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, wrapperTypeName3224);
    panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3284);
    panda$core$String* $tmp3286 = panda$core$String$convert$R$panda$core$String(wrapperType3227);
    panda$core$String* $tmp3288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3286, &$s3287);
    panda$core$String* $tmp3289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3288, wrapperCast3230);
    panda$core$String* $tmp3291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3289, &$s3290);
    panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3285, $tmp3291);
    (($fn3293) p_out->$class->vtable[19])(p_out, $tmp3292);
    panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3294, refCount3278);
    panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3295, &$s3296);
    (($fn3298) p_out->$class->vtable[19])(p_out, $tmp3297);
    panda$core$String* $tmp3300 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3299 = $tmp3300;
    panda$core$String* $tmp3301 = panda$core$String$convert$R$panda$core$String(target3299);
    panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3301, &$s3302);
    panda$core$String* $tmp3304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, wrapperTypeName3224);
    panda$core$String* $tmp3306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3304, &$s3305);
    panda$core$String* $tmp3307 = panda$core$String$convert$R$panda$core$String(wrapperType3227);
    panda$core$String* $tmp3309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3307, &$s3308);
    panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3309, wrapperCast3230);
    panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, &$s3311);
    panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3306, $tmp3312);
    (($fn3314) p_out->$class->vtable[19])(p_out, $tmp3313);
    panda$core$String* $tmp3316 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3315, $tmp3316);
    panda$core$String* $tmp3319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3317, &$s3318);
    panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3319, p_value);
    panda$core$String* $tmp3322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3320, &$s3321);
    panda$core$String* $tmp3323 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3322, $tmp3323);
    panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3324, &$s3325);
    panda$core$String* $tmp3327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, target3299);
    panda$core$String* $tmp3329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3327, &$s3328);
    (($fn3330) p_out->$class->vtable[19])(p_out, $tmp3329);
    panda$core$String* $tmp3331 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3332 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3227, $tmp3331);
    if ($tmp3332.value) {
    {
        panda$core$String* $tmp3334 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3333 = $tmp3334;
        panda$core$String* $tmp3335 = panda$core$String$convert$R$panda$core$String(result3333);
        panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, &$s3336);
        panda$core$String* $tmp3338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, wrapperType3227);
        panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3338, &$s3339);
        panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3340, wrapperCast3230);
        panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
        panda$core$String* $tmp3344 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, $tmp3344);
        panda$core$String* $tmp3347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3345, &$s3346);
        (($fn3348) p_out->$class->vtable[19])(p_out, $tmp3347);
        return result3333;
    }
    }
    return wrapperCast3230;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3352;
    panda$core$String* t3353;
    org$pandalanguage$pandac$ClassDecl* cl3357;
    panda$core$String* base3370;
    panda$collections$ListView* fields3373;
    panda$core$Int64$nullable index3375;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3376;
    panda$core$String* result3404;
    panda$core$String* cast3426;
    panda$core$String* ptr3439;
    panda$core$String* result3447;
    panda$core$Bit $tmp3349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3349.value);
    panda$core$Int64 $tmp3350 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3350, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3351.value);
    field3352 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3354 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3352->type);
    t3353 = $tmp3354;
    panda$core$Bit $tmp3355 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3352->annotations);
    if ($tmp3355.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3352->value != NULL }).value);
        panda$core$String* $tmp3356 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, field3352->value, p_out);
        return $tmp3356;
    }
    }
    panda$core$Object* $tmp3358 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3359 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3358)->type);
    cl3357 = $tmp3359;
    PANDA_ASSERT(((panda$core$Bit) { cl3357 != NULL }).value);
    panda$core$Bit $tmp3361 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3357);
    bool $tmp3360 = $tmp3361.value;
    if (!$tmp3360) goto $l3362;
    panda$core$Object* $tmp3364 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3365 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3364)->kind, ((panda$core$Int64) { 1025 }));
    bool $tmp3363 = $tmp3365.value;
    if ($tmp3363) goto $l3366;
    panda$core$Bit $tmp3367 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->currentMethod->methodKind, ((panda$core$Int64) { 59 }));
    $tmp3363 = $tmp3367.value;
    $l3366:;
    panda$core$Bit $tmp3368 = { $tmp3363 };
    $tmp3360 = $tmp3368.value;
    $l3362:;
    panda$core$Bit $tmp3369 = { $tmp3360 };
    if ($tmp3369.value) {
    {
        panda$core$Object* $tmp3371 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3372 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3371), p_out);
        base3370 = $tmp3372;
        panda$collections$ListView* $tmp3374 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3357);
        fields3373 = $tmp3374;
        index3375 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3377 = ((panda$collections$CollectionView*) fields3373)->$class->itable;
        while ($tmp3377->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3377 = $tmp3377->next;
        }
        $fn3379 $tmp3378 = $tmp3377->methods[0];
        panda$core$Int64 $tmp3380 = $tmp3378(((panda$collections$CollectionView*) fields3373));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3376, ((panda$core$Int64) { 0 }), $tmp3380, ((panda$core$Bit) { false }));
        int64_t $tmp3382 = $tmp3376.min.value;
        panda$core$Int64 i3381 = { $tmp3382 };
        int64_t $tmp3384 = $tmp3376.max.value;
        bool $tmp3385 = $tmp3376.inclusive.value;
        if ($tmp3385) goto $l3392; else goto $l3393;
        $l3392:;
        if ($tmp3382 <= $tmp3384) goto $l3386; else goto $l3388;
        $l3393:;
        if ($tmp3382 < $tmp3384) goto $l3386; else goto $l3388;
        $l3386:;
        {
            ITable* $tmp3394 = fields3373->$class->itable;
            while ($tmp3394->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3394 = $tmp3394->next;
            }
            $fn3396 $tmp3395 = $tmp3394->methods[0];
            panda$core$Object* $tmp3397 = $tmp3395(fields3373, i3381);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3397)) == ((panda$core$Object*) field3352) }).value) {
            {
                index3375 = ((panda$core$Int64$nullable) { i3381, true });
                goto $l3388;
            }
            }
        }
        $l3389:;
        int64_t $tmp3399 = $tmp3384 - i3381.value;
        if ($tmp3385) goto $l3400; else goto $l3401;
        $l3400:;
        if ($tmp3399 >= 1) goto $l3398; else goto $l3388;
        $l3401:;
        if ($tmp3399 > 1) goto $l3398; else goto $l3388;
        $l3398:;
        i3381.value += 1;
        goto $l3386;
        $l3388:;
        PANDA_ASSERT(((panda$core$Bit) { index3375.nonnull }).value);
        panda$core$String* $tmp3405 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3404 = $tmp3405;
        panda$core$String* $tmp3406 = panda$core$String$convert$R$panda$core$String(result3404);
        panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3406, &$s3407);
        panda$core$Object* $tmp3409 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3410 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3409)->type);
        panda$core$String* $tmp3411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3408, $tmp3410);
        panda$core$String* $tmp3413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3411, &$s3412);
        panda$core$String* $tmp3414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, base3370);
        panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3414, &$s3415);
        panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3416, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3375.value))));
        (($fn3418) p_out->$class->vtable[19])(p_out, $tmp3417);
        panda$core$Bit $tmp3420 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(field3352->type);
        bool $tmp3419 = $tmp3420.value;
        if (!$tmp3419) goto $l3421;
        org$pandalanguage$pandac$ClassDecl* $tmp3422 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, field3352->type);
        panda$core$Bit $tmp3423 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp3422);
        panda$core$Bit $tmp3424 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3423);
        $tmp3419 = $tmp3424.value;
        $l3421:;
        panda$core$Bit $tmp3425 = { $tmp3419 };
        if ($tmp3425.value) {
        {
            panda$core$String* $tmp3427 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast3426 = $tmp3427;
            panda$core$String* $tmp3428 = panda$core$String$convert$R$panda$core$String(cast3426);
            panda$core$String* $tmp3430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3428, &$s3429);
            panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3430, result3404);
            panda$core$String* $tmp3433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3431, &$s3432);
            panda$core$String* $tmp3434 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_fieldRef->type);
            panda$core$String* $tmp3435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3433, $tmp3434);
            panda$core$String* $tmp3437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3435, &$s3436);
            (($fn3438) p_out->$class->vtable[19])(p_out, $tmp3437);
            result3404 = cast3426;
        }
        }
        return result3404;
    }
    }
    panda$core$String* $tmp3440 = panda$core$String$convert$R$panda$core$String(t3353);
    panda$core$String* $tmp3442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3440, &$s3441);
    panda$core$String* $tmp3443 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3442, $tmp3443);
    panda$core$String* $tmp3446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3444, &$s3445);
    ptr3439 = $tmp3446;
    panda$core$String* $tmp3448 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3447 = $tmp3448;
    panda$core$String* $tmp3449 = panda$core$String$convert$R$panda$core$String(result3447);
    panda$core$String* $tmp3451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3449, &$s3450);
    panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3451, t3353);
    panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, &$s3453);
    panda$core$String* $tmp3455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3454, ptr3439);
    panda$core$String* $tmp3457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3455, &$s3456);
    (($fn3458) p_out->$class->vtable[19])(p_out, $tmp3457);
    return result3447;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3459;
    panda$core$String* testStart3462;
    panda$core$String* isNonNull3463;
    panda$core$String* nonNullLabel3476;
    panda$core$String* endLabel3478;
    panda$core$String* wrapped3491;
    panda$core$String* nonNullValue3494;
    panda$core$String* result3502;
    panda$core$String* targetType3530;
    panda$core$String* wrapperTypeName3532;
    panda$core$String* wrapperType3534;
    panda$core$String* srcCast3536;
    panda$core$String* load3552;
    panda$core$String* result3567;
    org$pandalanguage$pandac$ClassDecl* $tmp3460 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3459 = $tmp3460;
    PANDA_ASSERT(((panda$core$Bit) { target3459 != NULL }).value);
    panda$core$Bit $tmp3461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3461.value) {
    {
        testStart3462 = self->currentBlock;
        panda$core$String* $tmp3464 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3463 = $tmp3464;
        panda$core$String* $tmp3465 = panda$core$String$convert$R$panda$core$String(isNonNull3463);
        panda$core$String* $tmp3467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3465, &$s3466);
        panda$core$String* $tmp3468 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3467, $tmp3468);
        panda$core$String* $tmp3471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3469, &$s3470);
        panda$core$String* $tmp3472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3471, p_value);
        panda$core$String* $tmp3474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3472, &$s3473);
        (($fn3475) p_out->$class->vtable[19])(p_out, $tmp3474);
        panda$core$String* $tmp3477 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3476 = $tmp3477;
        panda$core$String* $tmp3479 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3478 = $tmp3479;
        panda$core$String* $tmp3481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3480, isNonNull3463);
        panda$core$String* $tmp3483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3481, &$s3482);
        panda$core$String* $tmp3484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3483, nonNullLabel3476);
        panda$core$String* $tmp3486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3484, &$s3485);
        panda$core$String* $tmp3487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3486, endLabel3478);
        panda$core$String* $tmp3489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3487, &$s3488);
        (($fn3490) p_out->$class->vtable[19])(p_out, $tmp3489);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3476, p_out);
        panda$core$Object* $tmp3492 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3493 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3492), p_out);
        wrapped3491 = $tmp3493;
        panda$core$Object* $tmp3495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3496 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, wrapped3491, ((org$pandalanguage$pandac$Type*) $tmp3495), p_dstType, p_out);
        nonNullValue3494 = $tmp3496;
        panda$core$String* $tmp3498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3497, endLabel3478);
        panda$core$String* $tmp3500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3498, &$s3499);
        (($fn3501) p_out->$class->vtable[19])(p_out, $tmp3500);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3478, p_out);
        panda$core$String* $tmp3503 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3502 = $tmp3503;
        panda$core$String* $tmp3504 = panda$core$String$convert$R$panda$core$String(result3502);
        panda$core$String* $tmp3506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3504, &$s3505);
        panda$core$String* $tmp3507 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3506, $tmp3507);
        panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3508, &$s3509);
        panda$core$Object* $tmp3512 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3513 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3512));
        panda$core$String* $tmp3514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3511, $tmp3513);
        panda$core$String* $tmp3516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3514, &$s3515);
        panda$core$String* $tmp3517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3510, $tmp3516);
        panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3518, testStart3462);
        panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, &$s3520);
        panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3521, nonNullValue3494);
        panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, &$s3523);
        panda$core$String* $tmp3525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3524, nonNullLabel3476);
        panda$core$String* $tmp3527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3525, &$s3526);
        panda$core$String* $tmp3528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3517, $tmp3527);
        (($fn3529) p_out->$class->vtable[19])(p_out, $tmp3528);
        return result3502;
    }
    }
    panda$core$String* $tmp3531 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3530 = $tmp3531;
    panda$core$String* $tmp3533 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3532 = $tmp3533;
    panda$core$String* $tmp3535 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3534 = $tmp3535;
    panda$core$String* $tmp3537 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3536 = $tmp3537;
    panda$core$String* $tmp3538 = panda$core$String$convert$R$panda$core$String(srcCast3536);
    panda$core$String* $tmp3540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3538, &$s3539);
    panda$core$String* $tmp3541 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3540, $tmp3541);
    panda$core$String* $tmp3544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3542, &$s3543);
    panda$core$String* $tmp3545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3544, p_value);
    panda$core$String* $tmp3547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3545, &$s3546);
    panda$core$String* $tmp3548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3547, wrapperType3534);
    panda$core$String* $tmp3550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3548, &$s3549);
    (($fn3551) p_out->$class->vtable[19])(p_out, $tmp3550);
    panda$core$String* $tmp3553 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3552 = $tmp3553;
    panda$core$String* $tmp3554 = panda$core$String$convert$R$panda$core$String(load3552);
    panda$core$String* $tmp3556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3554, &$s3555);
    panda$core$String* $tmp3557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3556, wrapperTypeName3532);
    panda$core$String* $tmp3559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3557, &$s3558);
    panda$core$String* $tmp3560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3559, wrapperType3534);
    panda$core$String* $tmp3562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3560, &$s3561);
    panda$core$String* $tmp3563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3562, srcCast3536);
    panda$core$String* $tmp3565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3563, &$s3564);
    (($fn3566) p_out->$class->vtable[19])(p_out, $tmp3565);
    panda$core$String* $tmp3568 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3567 = $tmp3568;
    panda$core$String* $tmp3569 = panda$core$String$convert$R$panda$core$String(result3567);
    panda$core$String* $tmp3571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3569, &$s3570);
    panda$core$String* $tmp3572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3571, wrapperTypeName3532);
    panda$core$String* $tmp3574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3572, &$s3573);
    panda$core$String* $tmp3575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3574, load3552);
    panda$core$String* $tmp3577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3575, &$s3576);
    panda$core$String* $tmp3578 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3577, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3578, &$s3579);
    (($fn3581) p_out->$class->vtable[19])(p_out, $tmp3580);
    return result3567;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* nullableType3582;
    panda$core$String* result3584;
    panda$core$String* $tmp3583 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3582 = $tmp3583;
    panda$core$String* $tmp3585 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3584 = $tmp3585;
    panda$core$String* $tmp3586 = panda$core$String$convert$R$panda$core$String(result3584);
    panda$core$String* $tmp3588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3586, &$s3587);
    panda$core$String* $tmp3589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3588, nullableType3582);
    panda$core$String* $tmp3591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3589, &$s3590);
    panda$core$String* $tmp3593 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3592, $tmp3593);
    panda$core$String* $tmp3596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3594, &$s3595);
    panda$core$String* $tmp3597 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3596, $tmp3597);
    panda$core$String* $tmp3600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3598, &$s3599);
    panda$core$String* $tmp3601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3600, p_value);
    panda$core$String* $tmp3603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3601, &$s3602);
    panda$core$String* $tmp3604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3591, $tmp3603);
    (($fn3605) p_out->$class->vtable[19])(p_out, $tmp3604);
    return result3584;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* result3606;
    panda$core$String* $tmp3607 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3606 = $tmp3607;
    panda$core$String* $tmp3608 = panda$core$String$convert$R$panda$core$String(result3606);
    panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3608, &$s3609);
    panda$core$String* $tmp3611 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3610, $tmp3611);
    panda$core$String* $tmp3614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3612, &$s3613);
    panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3614, p_value);
    panda$core$String* $tmp3617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3615, &$s3616);
    (($fn3618) p_out->$class->vtable[19])(p_out, $tmp3617);
    return result3606;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$OutputStream* p_out) {
    panda$core$String* op3619;
    panda$core$Int64 size13622;
    panda$core$Int64 size23624;
    org$pandalanguage$pandac$ClassDecl* srcClass3632;
    org$pandalanguage$pandac$ClassDecl* targetClass3634;
    panda$core$String* srcType3673;
    panda$core$String* dstType3675;
    panda$core$String* result3678;
    panda$core$Bit $tmp3620 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3620.value) {
    {
        panda$core$Bit $tmp3621 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3621.value);
        panda$core$Int64 $tmp3623 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13622 = $tmp3623;
        panda$core$Int64 $tmp3625 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23624 = $tmp3625;
        panda$core$Bit $tmp3626 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13622, size23624);
        if ($tmp3626.value) {
        {
            op3619 = &$s3627;
        }
        }
        else {
        panda$core$Bit $tmp3628 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13622, size23624);
        if ($tmp3628.value) {
        {
            panda$core$Bit $tmp3629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3629.value) {
            {
                op3619 = &$s3630;
            }
            }
            else {
            {
                op3619 = &$s3631;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3633 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3632 = $tmp3633;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3632 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3635 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3634 = $tmp3635;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3634 != NULL }).value);
        panda$core$Bit $tmp3637 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3632);
        bool $tmp3636 = $tmp3637.value;
        if (!$tmp3636) goto $l3638;
        panda$core$Bit $tmp3639 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3634);
        panda$core$Bit $tmp3640 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3639);
        $tmp3636 = $tmp3640.value;
        $l3638:;
        panda$core$Bit $tmp3641 = { $tmp3636 };
        if ($tmp3641.value) {
        {
            panda$core$String* $tmp3642 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3642;
        }
        }
        else {
        panda$core$Bit $tmp3644 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3632);
        panda$core$Bit $tmp3645 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3644);
        bool $tmp3643 = $tmp3645.value;
        if (!$tmp3643) goto $l3646;
        panda$core$Bit $tmp3647 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3634);
        $tmp3643 = $tmp3647.value;
        $l3646:;
        panda$core$Bit $tmp3648 = { $tmp3643 };
        if ($tmp3648.value) {
        {
            panda$core$String* $tmp3649 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3649;
        }
        }
        else {
        panda$core$Bit $tmp3652 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3632);
        bool $tmp3651 = $tmp3652.value;
        if (!$tmp3651) goto $l3653;
        panda$core$Bit $tmp3654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3651 = $tmp3654.value;
        $l3653:;
        panda$core$Bit $tmp3655 = { $tmp3651 };
        bool $tmp3650 = $tmp3655.value;
        if (!$tmp3650) goto $l3656;
        panda$core$Object* $tmp3657 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3658 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3657), p_src);
        $tmp3650 = $tmp3658.value;
        $l3656:;
        panda$core$Bit $tmp3659 = { $tmp3650 };
        if ($tmp3659.value) {
        {
            panda$core$String* $tmp3660 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3660;
        }
        }
        else {
        panda$core$Bit $tmp3663 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3634);
        bool $tmp3662 = $tmp3663.value;
        if (!$tmp3662) goto $l3664;
        panda$core$Bit $tmp3665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3662 = $tmp3665.value;
        $l3664:;
        panda$core$Bit $tmp3666 = { $tmp3662 };
        bool $tmp3661 = $tmp3666.value;
        if (!$tmp3661) goto $l3667;
        panda$core$Object* $tmp3668 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3669 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3668), p_target);
        $tmp3661 = $tmp3669.value;
        $l3667:;
        panda$core$Bit $tmp3670 = { $tmp3661 };
        if ($tmp3670.value) {
        {
            panda$core$String* $tmp3671 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3671;
        }
        }
        }
        }
        }
        op3619 = &$s3672;
    }
    }
    panda$core$String* $tmp3674 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3673 = $tmp3674;
    panda$core$String* $tmp3676 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3675 = $tmp3676;
    panda$core$Bit $tmp3677 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3673, dstType3675);
    if ($tmp3677.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3679 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3678 = $tmp3679;
    panda$core$String* $tmp3680 = panda$core$String$convert$R$panda$core$String(result3678);
    panda$core$String* $tmp3682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3680, &$s3681);
    panda$core$String* $tmp3683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3682, op3619);
    panda$core$String* $tmp3685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3683, &$s3684);
    panda$core$String* $tmp3686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3685, srcType3673);
    panda$core$String* $tmp3688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3686, &$s3687);
    panda$core$String* $tmp3689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3688, p_value);
    panda$core$String* $tmp3691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3689, &$s3690);
    panda$core$String* $tmp3692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3691, dstType3675);
    panda$core$String* $tmp3694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3692, &$s3693);
    (($fn3695) p_out->$class->vtable[19])(p_out, $tmp3694);
    return result3678;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$OutputStream* p_out) {
    panda$core$String* base3699;
    panda$core$Bit $tmp3696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3696.value);
    panda$core$Int64 $tmp3697 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3697, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3698.value);
    panda$core$Object* $tmp3700 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3701 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3700), p_out);
    base3699 = $tmp3701;
    panda$core$Object* $tmp3702 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3703 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, base3699, ((org$pandalanguage$pandac$IRNode*) $tmp3702)->type, p_cast->type, p_out);
    return $tmp3703;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3707;
    panda$core$String* t3709;
    panda$core$String* value3717;
    panda$core$String* result3728;
    org$pandalanguage$pandac$FieldDecl* lastField3730;
    panda$core$String* value3758;
    panda$core$String* result3769;
    org$pandalanguage$pandac$FieldDecl* lastField3771;
    panda$core$String* alloca3794;
    panda$core$String* result3813;
    panda$core$String* callRef3828;
    panda$core$String* result3838;
    panda$core$String* classPtr3851;
    panda$core$String* className3853;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3878;
    panda$core$Bit $tmp3704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3704.value);
    panda$core$Int64 $tmp3705 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3706 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3705, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3706.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3708 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3707 = $tmp3708;
    PANDA_ASSERT(((panda$core$Bit) { cl3707 != NULL }).value);
    panda$core$String* $tmp3710 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3709 = $tmp3710;
    panda$core$Bit $tmp3711 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3711.value) {
    {
        panda$core$Int64 $tmp3712 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3712, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3713.value);
        panda$core$Object* $tmp3714 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3715 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3714)->children);
        panda$core$Bit $tmp3716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3715, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3716.value);
        panda$core$Object* $tmp3718 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3719 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3718)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3720 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3719), p_out);
        value3717 = $tmp3720;
        panda$core$Object* $tmp3721 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3722 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3721)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3722)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3723.value) {
        {
            panda$core$String* $tmp3725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3724, value3717);
            panda$core$String* $tmp3727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3725, &$s3726);
            return $tmp3727;
        }
        }
        panda$core$String* $tmp3729 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3728 = $tmp3729;
        panda$core$Int64 $tmp3731 = panda$collections$Array$get_count$R$panda$core$Int64(cl3707->fields);
        panda$core$Int64 $tmp3732 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3731, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3733 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3707->fields, $tmp3732);
        lastField3730 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3733);
        panda$core$Bit $tmp3734 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3730->annotations);
        panda$core$Bit $tmp3735 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3734);
        PANDA_ASSERT($tmp3735.value);
        panda$core$String* $tmp3736 = panda$core$String$convert$R$panda$core$String(result3728);
        panda$core$String* $tmp3738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3736, &$s3737);
        panda$core$String* $tmp3739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3738, t3709);
        panda$core$String* $tmp3741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3739, &$s3740);
        panda$core$String* $tmp3742 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3730->type);
        panda$core$String* $tmp3743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3741, $tmp3742);
        panda$core$String* $tmp3745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3743, &$s3744);
        panda$core$String* $tmp3746 = panda$core$String$convert$R$panda$core$String(value3717);
        panda$core$String* $tmp3748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3746, &$s3747);
        panda$core$String* $tmp3749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3745, $tmp3748);
        (($fn3750) p_out->$class->vtable[19])(p_out, $tmp3749);
        return result3728;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3751 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3752 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3751);
    if ($tmp3752.value) {
    {
        panda$core$Int64 $tmp3753 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3753, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3754.value);
        panda$core$Object* $tmp3755 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3756 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3755)->children);
        panda$core$Bit $tmp3757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3756, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3757.value);
        panda$core$Object* $tmp3759 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3760 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3759)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3761 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3760), p_out);
        value3758 = $tmp3761;
        panda$core$Object* $tmp3762 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3763 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3762)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3763)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3764.value) {
        {
            panda$core$String* $tmp3766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3765, value3758);
            panda$core$String* $tmp3768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3766, &$s3767);
            return $tmp3768;
        }
        }
        panda$core$String* $tmp3770 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3769 = $tmp3770;
        panda$core$Int64 $tmp3772 = panda$collections$Array$get_count$R$panda$core$Int64(cl3707->fields);
        panda$core$Int64 $tmp3773 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3772, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3774 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3707->fields, $tmp3773);
        lastField3771 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3774);
        panda$core$Bit $tmp3775 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3771->annotations);
        panda$core$Bit $tmp3776 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3775);
        PANDA_ASSERT($tmp3776.value);
        panda$core$String* $tmp3777 = panda$core$String$convert$R$panda$core$String(result3769);
        panda$core$String* $tmp3779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3777, &$s3778);
        panda$core$String* $tmp3780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3779, t3709);
        panda$core$String* $tmp3782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3780, &$s3781);
        panda$core$String* $tmp3783 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3771->type);
        panda$core$String* $tmp3784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3782, $tmp3783);
        panda$core$String* $tmp3786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3784, &$s3785);
        panda$core$String* $tmp3787 = panda$core$String$convert$R$panda$core$String(value3758);
        panda$core$String* $tmp3789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3787, &$s3788);
        panda$core$String* $tmp3790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3786, $tmp3789);
        (($fn3791) p_out->$class->vtable[19])(p_out, $tmp3790);
        return result3769;
    }
    }
    panda$core$Bit $tmp3792 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3707);
    if ($tmp3792.value) {
    {
        panda$core$Int64 $tmp3793 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3793;
        panda$core$String* $tmp3796 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3795, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3796, &$s3797);
        alloca3794 = $tmp3798;
        panda$core$String* $tmp3799 = panda$core$String$convert$R$panda$core$String(alloca3794);
        panda$core$String* $tmp3801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3799, &$s3800);
        panda$core$String* $tmp3802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3801, t3709);
        panda$core$String* $tmp3804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3802, &$s3803);
        (($fn3805) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3804);
        panda$core$Object* $tmp3806 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3807 = panda$core$String$convert$R$panda$core$String(t3709);
        panda$core$String* $tmp3809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3807, &$s3808);
        panda$core$String* $tmp3810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3809, alloca3794);
        panda$core$String* $tmp3812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3810, &$s3811);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3806), $tmp3812, p_out);
        panda$core$String* $tmp3814 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3813 = $tmp3814;
        panda$core$String* $tmp3815 = panda$core$String$convert$R$panda$core$String(result3813);
        panda$core$String* $tmp3817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3815, &$s3816);
        panda$core$String* $tmp3818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3817, t3709);
        panda$core$String* $tmp3820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3818, &$s3819);
        panda$core$String* $tmp3821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3820, t3709);
        panda$core$String* $tmp3823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3821, &$s3822);
        panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3823, alloca3794);
        panda$core$String* $tmp3826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3824, &$s3825);
        (($fn3827) p_out->$class->vtable[19])(p_out, $tmp3826);
        return result3813;
    }
    }
    panda$core$String* $tmp3829 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3828 = $tmp3829;
    panda$core$String* $tmp3830 = panda$core$String$convert$R$panda$core$String(callRef3828);
    panda$core$String* $tmp3832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3830, &$s3831);
    panda$core$Int64 $tmp3833 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3834 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3832, ((panda$core$Object*) wrap_panda$core$Int64($tmp3833)));
    panda$core$String* $tmp3836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3834, &$s3835);
    (($fn3837) p_out->$class->vtable[19])(p_out, $tmp3836);
    panda$core$String* $tmp3839 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3838 = $tmp3839;
    panda$core$String* $tmp3840 = panda$core$String$convert$R$panda$core$String(result3838);
    panda$core$String* $tmp3842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3840, &$s3841);
    panda$core$String* $tmp3843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3842, callRef3828);
    panda$core$String* $tmp3845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3843, &$s3844);
    panda$core$String* $tmp3846 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3845, $tmp3846);
    panda$core$String* $tmp3849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3847, &$s3848);
    (($fn3850) p_out->$class->vtable[19])(p_out, $tmp3849);
    panda$core$String* $tmp3852 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3851 = $tmp3852;
    panda$core$Bit $tmp3855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3854 = $tmp3855.value;
    if (!$tmp3854) goto $l3856;
    panda$core$Bit $tmp3857 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3707);
    panda$core$Bit $tmp3858 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3857);
    $tmp3854 = $tmp3858.value;
    $l3856:;
    panda$core$Bit $tmp3859 = { $tmp3854 };
    if ($tmp3859.value) {
    {
        panda$core$Object* $tmp3860 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3861 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3860));
        className3853 = $tmp3861;
    }
    }
    else {
    {
        panda$core$String* $tmp3862 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3853 = $tmp3862;
    }
    }
    panda$core$String* $tmp3863 = panda$core$String$convert$R$panda$core$String(classPtr3851);
    panda$core$String* $tmp3865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3863, &$s3864);
    panda$core$String* $tmp3866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3865, className3853);
    panda$core$String* $tmp3868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3866, &$s3867);
    panda$core$String* $tmp3869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3868, t3709);
    panda$core$String* $tmp3871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3869, &$s3870);
    panda$core$String* $tmp3872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3871, result3838);
    panda$core$String* $tmp3874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3872, &$s3873);
    panda$core$String* $tmp3876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3874, &$s3875);
    (($fn3877) p_out->$class->vtable[19])(p_out, $tmp3876);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3879 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3707);
    cc3878 = $tmp3879;
    panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3880, cc3878->type);
    panda$core$String* $tmp3883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3881, &$s3882);
    panda$core$String* $tmp3884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3883, cc3878->name);
    panda$core$String* $tmp3886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3884, &$s3885);
    panda$core$String* $tmp3888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3887, classPtr3851);
    panda$core$String* $tmp3890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3888, &$s3889);
    panda$core$String* $tmp3891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3886, $tmp3890);
    (($fn3892) p_out->$class->vtable[19])(p_out, $tmp3891);
    panda$core$Object* $tmp3893 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3894 = panda$core$String$convert$R$panda$core$String(t3709);
    panda$core$String* $tmp3896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3894, &$s3895);
    panda$core$String* $tmp3897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3896, result3838);
    panda$core$String* $tmp3899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3897, &$s3898);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3893), $tmp3899, p_out);
    return result3838;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3900 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3900;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3902 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3901, $tmp3902);
    return $tmp3903;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$OutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3904;
    }
    }
    return &$s3905;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$OutputStream* p_out) {
    panda$core$String* result3908;
    panda$core$String* t3910;
    panda$core$Bit $tmp3906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3906.value) {
    {
        panda$core$String* $tmp3907 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3907;
    }
    }
    panda$core$String* $tmp3909 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3908 = $tmp3909;
    panda$core$String* $tmp3911 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3910 = $tmp3911;
    panda$core$String* $tmp3912 = panda$core$String$convert$R$panda$core$String(result3908);
    panda$core$String* $tmp3914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3912, &$s3913);
    panda$core$String* $tmp3915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3914, t3910);
    panda$core$String* $tmp3917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3915, &$s3916);
    panda$core$String* $tmp3918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3917, t3910);
    panda$core$String* $tmp3920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3918, &$s3919);
    panda$core$String* $tmp3921 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3920, $tmp3921);
    panda$core$String* $tmp3924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3922, &$s3923);
    (($fn3925) p_out->$class->vtable[19])(p_out, $tmp3924);
    return result3908;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* chars3927;
    panda$core$String* charsType3932;
    panda$core$String* separator3949;
    panda$collections$Iterator* c$Iter3951;
    panda$core$Char8 c3964;
    panda$core$String* result3981;
    org$pandalanguage$pandac$ClassDecl* string3986;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3989;
    panda$core$Int64 $tmp3926 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3926;
    panda$core$String* $tmp3929 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3928, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3929, &$s3930);
    chars3927 = $tmp3931;
    panda$collections$ListView* $tmp3934 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3935 = ((panda$collections$CollectionView*) $tmp3934)->$class->itable;
    while ($tmp3935->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3935 = $tmp3935->next;
    }
    $fn3937 $tmp3936 = $tmp3935->methods[0];
    panda$core$Int64 $tmp3938 = $tmp3936(((panda$collections$CollectionView*) $tmp3934));
    panda$core$String* $tmp3939 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3933, ((panda$core$Object*) wrap_panda$core$Int64($tmp3938)));
    panda$core$String* $tmp3941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3939, &$s3940);
    charsType3932 = $tmp3941;
    panda$core$String* $tmp3942 = panda$core$String$convert$R$panda$core$String(chars3927);
    panda$core$String* $tmp3944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3942, &$s3943);
    panda$core$String* $tmp3945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3944, charsType3932);
    panda$core$String* $tmp3947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3945, &$s3946);
    (($fn3948) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3947);
    separator3949 = &$s3950;
    {
        panda$collections$ListView* $tmp3952 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp3953 = ((panda$collections$Iterable*) $tmp3952)->$class->itable;
        while ($tmp3953->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3953 = $tmp3953->next;
        }
        $fn3955 $tmp3954 = $tmp3953->methods[0];
        panda$collections$Iterator* $tmp3956 = $tmp3954(((panda$collections$Iterable*) $tmp3952));
        c$Iter3951 = $tmp3956;
        $l3957:;
        ITable* $tmp3959 = c$Iter3951->$class->itable;
        while ($tmp3959->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3959 = $tmp3959->next;
        }
        $fn3961 $tmp3960 = $tmp3959->methods[0];
        panda$core$Bit $tmp3962 = $tmp3960(c$Iter3951);
        panda$core$Bit $tmp3963 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3962);
        if (!$tmp3963.value) goto $l3958;
        {
            ITable* $tmp3965 = c$Iter3951->$class->itable;
            while ($tmp3965->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3965 = $tmp3965->next;
            }
            $fn3967 $tmp3966 = $tmp3965->methods[1];
            panda$core$Object* $tmp3968 = $tmp3966(c$Iter3951);
            c3964 = ((panda$core$Char8$wrapper*) $tmp3968)->value;
            panda$core$String* $tmp3969 = panda$core$String$convert$R$panda$core$String(separator3949);
            panda$core$String* $tmp3971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3969, &$s3970);
            panda$core$Int8 $tmp3972 = panda$core$Char8$convert$R$panda$core$Int8(c3964);
            panda$core$String* $tmp3973 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3971, ((panda$core$Object*) wrap_panda$core$Int8($tmp3972)));
            panda$core$String* $tmp3975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3973, &$s3974);
            (($fn3976) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3975);
            separator3949 = &$s3977;
        }
        goto $l3957;
        $l3958:;
    }
    (($fn3979) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s3978);
    panda$core$Int64 $tmp3980 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3980;
    panda$core$String* $tmp3983 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3982, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3983, &$s3984);
    result3981 = $tmp3985;
    org$pandalanguage$pandac$Type* $tmp3987 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3988 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp3987);
    string3986 = $tmp3988;
    PANDA_ASSERT(((panda$core$Bit) { string3986 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3990 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string3986);
    cc3989 = $tmp3990;
    panda$core$String* $tmp3991 = panda$core$String$convert$R$panda$core$String(result3981);
    panda$core$String* $tmp3993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3991, &$s3992);
    panda$core$String* $tmp3995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3994, cc3989->type);
    panda$core$String* $tmp3997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3995, &$s3996);
    panda$core$String* $tmp3998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3997, cc3989->name);
    panda$core$String* $tmp4000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3998, &$s3999);
    panda$core$String* $tmp4001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3993, $tmp4000);
    panda$core$String* $tmp4003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4001, &$s4002);
    panda$core$String* $tmp4005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4004, charsType3932);
    panda$core$String* $tmp4007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4005, &$s4006);
    panda$core$String* $tmp4008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4007, chars3927);
    panda$core$String* $tmp4010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4008, &$s4009);
    panda$core$String* $tmp4011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4003, $tmp4010);
    panda$collections$ListView* $tmp4013 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4014 = ((panda$collections$CollectionView*) $tmp4013)->$class->itable;
    while ($tmp4014->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4014 = $tmp4014->next;
    }
    $fn4016 $tmp4015 = $tmp4014->methods[0];
    panda$core$Int64 $tmp4017 = $tmp4015(((panda$collections$CollectionView*) $tmp4013));
    panda$core$String* $tmp4018 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4012, ((panda$core$Object*) wrap_panda$core$Int64($tmp4017)));
    panda$core$String* $tmp4020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4018, &$s4019);
    panda$core$String* $tmp4021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4011, $tmp4020);
    panda$core$Int64 $tmp4023 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$String* $tmp4024 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4022, ((panda$core$Object*) wrap_panda$core$Int64($tmp4023)));
    panda$core$String* $tmp4026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4024, &$s4025);
    panda$core$String* $tmp4027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4021, $tmp4026);
    (($fn4028) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp4027);
    return result3981;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$Int64 $tmp4029 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp4030 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4029, ((panda$core$Int64) { 0 }));
    if ($tmp4030.value) {
    {
        panda$core$Object* $tmp4031 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp4031)->selfRef;
    }
    }
    return &$s4032;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* result4033;
    panda$core$String* ref4035;
    panda$core$String* $tmp4034 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4033 = $tmp4034;
    panda$core$String* $tmp4036 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_s, p_out);
    ref4035 = $tmp4036;
    panda$core$String* $tmp4037 = panda$core$String$convert$R$panda$core$String(result4033);
    panda$core$String* $tmp4039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4037, &$s4038);
    panda$core$String* $tmp4040 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, self->currentMethod);
    panda$core$String* $tmp4041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4039, $tmp4040);
    panda$core$String* $tmp4043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4041, &$s4042);
    panda$core$String* $tmp4044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4043, ref4035);
    panda$core$String* $tmp4046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4044, &$s4045);
    panda$core$String* $tmp4047 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp4048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4046, $tmp4047);
    panda$core$String* $tmp4050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4048, &$s4049);
    (($fn4051) p_out->$class->vtable[19])(p_out, $tmp4050);
    return result4033;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value4055;
    org$pandalanguage$pandac$ClassDecl* cl4058;
    panda$core$String* resultValue4061;
    panda$core$String* field4066;
    panda$core$String* result4091;
    panda$core$Bit $tmp4052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp4052.value);
    panda$core$Int64 $tmp4053 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4053, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4054.value);
    panda$core$Object* $tmp4056 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4057 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4056), p_out);
    value4055 = $tmp4057;
    panda$core$Object* $tmp4059 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4060 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4059)->type);
    cl4058 = $tmp4060;
    panda$core$Bit $tmp4062 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4058);
    if ($tmp4062.value) {
    {
        panda$core$Object* $tmp4063 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4064 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4063)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4064.value) {
        {
            return &$s4065;
        }
        }
        panda$core$String* $tmp4067 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field4066 = $tmp4067;
        panda$core$String* $tmp4068 = panda$core$String$convert$R$panda$core$String(field4066);
        panda$core$String* $tmp4070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4068, &$s4069);
        panda$core$String* $tmp4071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4070, value4055);
        panda$core$String* $tmp4073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4071, &$s4072);
        (($fn4074) p_out->$class->vtable[19])(p_out, $tmp4073);
        panda$core$String* $tmp4075 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4061 = $tmp4075;
        panda$core$String* $tmp4076 = panda$core$String$convert$R$panda$core$String(resultValue4061);
        panda$core$String* $tmp4078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4076, &$s4077);
        panda$core$String* $tmp4079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4078, field4066);
        panda$core$String* $tmp4081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4079, &$s4080);
        (($fn4082) p_out->$class->vtable[19])(p_out, $tmp4081);
    }
    }
    else {
    {
        panda$core$String* $tmp4083 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4061 = $tmp4083;
        panda$core$String* $tmp4084 = panda$core$String$convert$R$panda$core$String(resultValue4061);
        panda$core$String* $tmp4086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4084, &$s4085);
        panda$core$String* $tmp4087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4086, value4055);
        panda$core$String* $tmp4089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4087, &$s4088);
        (($fn4090) p_out->$class->vtable[19])(p_out, $tmp4089);
    }
    }
    panda$core$String* $tmp4092 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4091 = $tmp4092;
    panda$core$String* $tmp4093 = panda$core$String$convert$R$panda$core$String(result4091);
    panda$core$String* $tmp4095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4093, &$s4094);
    panda$core$String* $tmp4096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4095, resultValue4061);
    panda$core$String* $tmp4098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4096, &$s4097);
    (($fn4099) p_out->$class->vtable[19])(p_out, $tmp4098);
    return result4091;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value4103;
    org$pandalanguage$pandac$ClassDecl* cl4106;
    panda$core$String* resultValue4109;
    panda$core$String* result4130;
    panda$core$Bit $tmp4100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp4100.value);
    panda$core$Int64 $tmp4101 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4101, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4102.value);
    panda$core$Object* $tmp4104 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4105 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4104), p_out);
    value4103 = $tmp4105;
    panda$core$Object* $tmp4107 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4108 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4107)->type);
    cl4106 = $tmp4108;
    panda$core$Bit $tmp4110 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4106);
    if ($tmp4110.value) {
    {
        panda$core$Object* $tmp4111 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4112 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4111)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4112.value) {
        {
            return &$s4113;
        }
        }
        panda$core$String* $tmp4114 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4109 = $tmp4114;
        panda$core$String* $tmp4115 = panda$core$String$convert$R$panda$core$String(resultValue4109);
        panda$core$String* $tmp4117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4115, &$s4116);
        panda$core$String* $tmp4118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4117, value4103);
        panda$core$String* $tmp4120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4118, &$s4119);
        (($fn4121) p_out->$class->vtable[19])(p_out, $tmp4120);
    }
    }
    else {
    {
        panda$core$String* $tmp4122 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4109 = $tmp4122;
        panda$core$String* $tmp4123 = panda$core$String$convert$R$panda$core$String(resultValue4109);
        panda$core$String* $tmp4125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4123, &$s4124);
        panda$core$String* $tmp4126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4125, value4103);
        panda$core$String* $tmp4128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4126, &$s4127);
        (($fn4129) p_out->$class->vtable[19])(p_out, $tmp4128);
    }
    }
    panda$core$String* $tmp4131 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4130 = $tmp4131;
    panda$core$String* $tmp4132 = panda$core$String$convert$R$panda$core$String(result4130);
    panda$core$String* $tmp4134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4132, &$s4133);
    panda$core$String* $tmp4135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4134, resultValue4109);
    panda$core$String* $tmp4137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4135, &$s4136);
    (($fn4138) p_out->$class->vtable[19])(p_out, $tmp4137);
    return result4130;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4140;
    panda$core$Bit $tmp4139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp4139.value);
    panda$core$Object* $tmp4141 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4142 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4141));
    cl4140 = $tmp4142;
    PANDA_ASSERT(((panda$core$Bit) { cl4140 != NULL }).value);
    panda$core$Bit $tmp4143 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4140);
    if ($tmp4143.value) {
    {
        panda$core$Object* $tmp4145 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4146 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4145));
        panda$core$String* $tmp4147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4144, $tmp4146);
        panda$core$String* $tmp4149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4147, &$s4148);
        return $tmp4149;
    }
    }
    else {
    {
        return &$s4150;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* base4154;
    panda$core$String* result4157;
    panda$core$Bit $tmp4151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp4151.value);
    panda$core$Int64 $tmp4152 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp4153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4152, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4153.value);
    panda$core$Object* $tmp4155 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4156 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4155), p_out);
    base4154 = $tmp4156;
    panda$core$String* $tmp4158 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4157 = $tmp4158;
    panda$core$Int64 $tmp4159 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp4159.value) {
        case 52:
        {
            panda$core$String* $tmp4160 = panda$core$String$convert$R$panda$core$String(result4157);
            panda$core$String* $tmp4162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4160, &$s4161);
            panda$core$String* $tmp4163 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4162, $tmp4163);
            panda$core$String* $tmp4166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4164, &$s4165);
            panda$core$String* $tmp4167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4166, base4154);
            panda$core$String* $tmp4169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4167, &$s4168);
            (($fn4170) p_out->$class->vtable[19])(p_out, $tmp4169);
            return result4157;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp4171 = panda$core$String$convert$R$panda$core$String(result4157);
            panda$core$String* $tmp4173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4171, &$s4172);
            panda$core$String* $tmp4174 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4173, $tmp4174);
            panda$core$String* $tmp4177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4175, &$s4176);
            panda$core$String* $tmp4178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4177, base4154);
            panda$core$String* $tmp4180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4178, &$s4179);
            (($fn4181) p_out->$class->vtable[19])(p_out, $tmp4180);
            return result4157;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* value4195;
    panda$core$String* result4198;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4182 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4182;
        }
        break;
        case 1044:
        {
            panda$core$String* $tmp4183 = org$pandalanguage$pandac$LLVMCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4183;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4184 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4184;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4185 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4185;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4186 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4186;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4187 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4187;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4188 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4188;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4189 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4189;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4190 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4190;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4191 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4191;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4192 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4192;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4193 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4193;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4194 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4194;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4196 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4197 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4196), p_out);
            value4195 = $tmp4197;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4195));
            return value4195;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4199 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4198 = ((panda$core$String*) $tmp4199);
            PANDA_ASSERT(((panda$core$Bit) { result4198 != NULL }).value);
            return result4198;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4200 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4200;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4201 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4201;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4202 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4202;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4203 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4203;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp4204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1025 }));
    if ($tmp4204.value) {
    {
        panda$core$String* $tmp4205 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, self->currentMethod);
        panda$core$String* $tmp4206 = panda$core$String$convert$R$panda$core$String($tmp4205);
        panda$core$String* $tmp4208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4206, &$s4207);
        panda$core$String* $tmp4209 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
        panda$core$String* $tmp4210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4208, $tmp4209);
        panda$core$String* $tmp4212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4210, &$s4211);
        return $tmp4212;
    }
    }
    panda$core$String* $tmp4213 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4214 = panda$core$String$convert$R$panda$core$String($tmp4213);
    panda$core$String* $tmp4216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4214, &$s4215);
    panda$core$String* $tmp4217 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4216, $tmp4217);
    panda$core$String* $tmp4220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4218, &$s4219);
    return $tmp4220;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$OutputStream* p_out) {
    panda$collections$Iterator* s$Iter4222;
    org$pandalanguage$pandac$IRNode* s4234;
    panda$core$Bit $tmp4221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4221.value);
    {
        ITable* $tmp4223 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4223->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4223 = $tmp4223->next;
        }
        $fn4225 $tmp4224 = $tmp4223->methods[0];
        panda$collections$Iterator* $tmp4226 = $tmp4224(((panda$collections$Iterable*) p_block->children));
        s$Iter4222 = $tmp4226;
        $l4227:;
        ITable* $tmp4229 = s$Iter4222->$class->itable;
        while ($tmp4229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4229 = $tmp4229->next;
        }
        $fn4231 $tmp4230 = $tmp4229->methods[0];
        panda$core$Bit $tmp4232 = $tmp4230(s$Iter4222);
        panda$core$Bit $tmp4233 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4232);
        if (!$tmp4233.value) goto $l4228;
        {
            ITable* $tmp4235 = s$Iter4222->$class->itable;
            while ($tmp4235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4235 = $tmp4235->next;
            }
            $fn4237 $tmp4236 = $tmp4235->methods[1];
            panda$core$Object* $tmp4238 = $tmp4236(s$Iter4222);
            s4234 = ((org$pandalanguage$pandac$IRNode*) $tmp4238);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s4234, p_out);
        }
        goto $l4227;
        $l4228:;
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4239;
    panda$core$String* $match$1977_94240;
    panda$core$String* ptr4245;
    panda$core$String* arg4248;
    org$pandalanguage$pandac$Type* baseType4268;
    panda$core$String* base4272;
    panda$core$String* indexStruct4275;
    panda$core$String* index4278;
    panda$core$String* value4287;
    panda$core$String* ptr4291;
    panda$core$String* ptr4328;
    panda$core$String* cast4331;
    m4239 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1977_94240 = ((org$pandalanguage$pandac$Symbol*) m4239->value)->name;
        panda$core$Bit $tmp4242 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1977_94240, &$s4241);
        if ($tmp4242.value) {
        {
            panda$core$Int64 $tmp4243 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4243, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4244.value);
            panda$core$Object* $tmp4246 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4247 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4246), p_out);
            ptr4245 = $tmp4247;
            panda$core$Object* $tmp4249 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4250 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4249));
            panda$core$String* $tmp4251 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4250, p_out);
            arg4248 = $tmp4251;
            panda$core$String* $tmp4253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4252, arg4248);
            panda$core$String* $tmp4255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4253, &$s4254);
            panda$core$String* $tmp4256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4255, ptr4245);
            panda$core$String* $tmp4258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4256, &$s4257);
            (($fn4259) p_out->$class->vtable[19])(p_out, $tmp4258);
        }
        }
        else {
        panda$core$Bit $tmp4261 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1977_94240, &$s4260);
        if ($tmp4261.value) {
        {
            panda$core$Int64 $tmp4262 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4262, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4263.value);
            panda$core$Object* $tmp4264 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4265 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4264));
            panda$core$Int64 $tmp4266 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4265->type->subtypes);
            panda$core$Bit $tmp4267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4266, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4267.value);
            panda$core$Object* $tmp4269 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4270 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4269));
            panda$core$Object* $tmp4271 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4270->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4268 = ((org$pandalanguage$pandac$Type*) $tmp4271);
            panda$core$Object* $tmp4273 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4274 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4273), p_out);
            base4272 = $tmp4274;
            panda$core$Object* $tmp4276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4277 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4276), p_out);
            indexStruct4275 = $tmp4277;
            panda$core$String* $tmp4279 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4278 = $tmp4279;
            panda$core$String* $tmp4280 = panda$core$String$convert$R$panda$core$String(index4278);
            panda$core$String* $tmp4282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4280, &$s4281);
            panda$core$String* $tmp4283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4282, indexStruct4275);
            panda$core$String* $tmp4285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4283, &$s4284);
            (($fn4286) p_out->$class->vtable[19])(p_out, $tmp4285);
            panda$core$Object* $tmp4288 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4289 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4288));
            panda$core$String* $tmp4290 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4289, p_out);
            value4287 = $tmp4290;
            panda$core$String* $tmp4292 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4291 = $tmp4292;
            panda$core$String* $tmp4293 = panda$core$String$convert$R$panda$core$String(ptr4291);
            panda$core$String* $tmp4295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4293, &$s4294);
            panda$core$String* $tmp4296 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4268);
            panda$core$String* $tmp4297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4295, $tmp4296);
            panda$core$String* $tmp4299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4297, &$s4298);
            panda$core$String* $tmp4300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4299, base4272);
            panda$core$String* $tmp4302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4300, &$s4301);
            panda$core$String* $tmp4304 = panda$core$String$convert$R$panda$core$String(&$s4303);
            panda$core$String* $tmp4306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4304, &$s4305);
            panda$core$String* $tmp4307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4306, index4278);
            panda$core$String* $tmp4309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4307, &$s4308);
            panda$core$String* $tmp4310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4302, $tmp4309);
            (($fn4311) p_out->$class->vtable[19])(p_out, $tmp4310);
            panda$core$String* $tmp4313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4312, value4287);
            panda$core$String* $tmp4315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4313, &$s4314);
            panda$core$String* $tmp4316 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4268);
            panda$core$String* $tmp4317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4315, $tmp4316);
            panda$core$String* $tmp4319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4317, &$s4318);
            panda$core$String* $tmp4320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4319, ptr4291);
            panda$core$String* $tmp4322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4320, &$s4321);
            (($fn4323) p_out->$class->vtable[19])(p_out, $tmp4322);
        }
        }
        else {
        panda$core$Bit $tmp4325 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1977_94240, &$s4324);
        if ($tmp4325.value) {
        {
            panda$core$Int64 $tmp4326 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4326, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4327.value);
            panda$core$Object* $tmp4329 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4330 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4329), p_out);
            ptr4328 = $tmp4330;
            panda$core$String* $tmp4332 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4331 = $tmp4332;
            panda$core$String* $tmp4333 = panda$core$String$convert$R$panda$core$String(cast4331);
            panda$core$String* $tmp4335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4333, &$s4334);
            panda$core$String* $tmp4336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4335, ptr4328);
            panda$core$String* $tmp4338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4336, &$s4337);
            (($fn4339) p_out->$class->vtable[19])(p_out, $tmp4338);
            panda$core$String* $tmp4341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4340, cast4331);
            panda$core$String* $tmp4343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4341, &$s4342);
            (($fn4344) p_out->$class->vtable[19])(p_out, $tmp4343);
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
void org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$core$String* p_target, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m4346;
    org$pandalanguage$pandac$Type* actualMethodType4349;
    panda$core$String* actualResultType4350;
    panda$core$Bit isSuper4351;
    panda$collections$Array* args4371;
    panda$core$Int64 offset4374;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4379;
    panda$core$String* arg4398;
    panda$core$String* refTarget4430;
    panda$core$String* methodRef4434;
    panda$core$String* separator4436;
    panda$core$String* indirectVar4440;
    panda$core$String* resultType4443;
    panda$collections$Iterator* a$Iter4485;
    panda$core$String* a4497;
    panda$core$Bit $tmp4345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4345.value);
    m4346 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4348 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4346->owner)->name, &$s4347);
    if ($tmp4348.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4346->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4346);
    }
    }
    panda$core$Int64 $tmp4353 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4354 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4353, ((panda$core$Int64) { 1 }));
    bool $tmp4352 = $tmp4354.value;
    if (!$tmp4352) goto $l4355;
    panda$core$Object* $tmp4356 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4356)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4352 = $tmp4357.value;
    $l4355:;
    panda$core$Bit $tmp4358 = { $tmp4352 };
    isSuper4351 = $tmp4358;
    panda$core$Bit $tmp4360 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4351);
    bool $tmp4359 = $tmp4360.value;
    if (!$tmp4359) goto $l4361;
    panda$core$Bit $tmp4362 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4346);
    $tmp4359 = $tmp4362.value;
    $l4361:;
    panda$core$Bit $tmp4363 = { $tmp4359 };
    if ($tmp4363.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4364 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4346);
        actualMethodType4349 = $tmp4364;
        panda$core$Int64 $tmp4365 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4349->subtypes);
        panda$core$Int64 $tmp4366 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4365, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4367 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4349->subtypes, $tmp4366);
        panda$core$String* $tmp4368 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4367));
        actualResultType4350 = $tmp4368;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4369 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4346);
        actualMethodType4349 = $tmp4369;
        panda$core$String* $tmp4370 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4350 = $tmp4370;
    }
    }
    panda$collections$Array* $tmp4372 = (panda$collections$Array*) malloc(40);
    $tmp4372->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4372->refCount.value = 1;
    panda$collections$Array$init($tmp4372);
    args4371 = $tmp4372;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4371, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4375 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4376 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4349->subtypes);
    panda$core$Int64 $tmp4377 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4375, $tmp4376);
    panda$core$Int64 $tmp4378 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4377, ((panda$core$Int64) { 1 }));
    offset4374 = $tmp4378;
    panda$core$Int64 $tmp4380 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4379, ((panda$core$Int64) { 0 }), $tmp4380, ((panda$core$Bit) { false }));
    int64_t $tmp4382 = $tmp4379.min.value;
    panda$core$Int64 i4381 = { $tmp4382 };
    int64_t $tmp4384 = $tmp4379.max.value;
    bool $tmp4385 = $tmp4379.inclusive.value;
    if ($tmp4385) goto $l4392; else goto $l4393;
    $l4392:;
    if ($tmp4382 <= $tmp4384) goto $l4386; else goto $l4388;
    $l4393:;
    if ($tmp4382 < $tmp4384) goto $l4386; else goto $l4388;
    $l4386:;
    {
        panda$core$Object* $tmp4394 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4381);
        panda$core$Bit $tmp4395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4394)->kind, ((panda$core$Int64) { 1025 }));
        if ($tmp4395.value) {
        {
            panda$core$Object* $tmp4396 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4381);
            panda$core$String* $tmp4397 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4396), p_out);
            panda$collections$Array$add$panda$collections$Array$T(args4371, ((panda$core$Object*) $tmp4397));
            goto $l4389;
        }
        }
        panda$core$Object* $tmp4399 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4381);
        panda$core$String* $tmp4400 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4399), p_out);
        arg4398 = $tmp4400;
        panda$core$Bit $tmp4402 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4381, offset4374);
        bool $tmp4401 = $tmp4402.value;
        if (!$tmp4401) goto $l4403;
        panda$core$Int64 $tmp4404 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4381, offset4374);
        panda$core$Object* $tmp4405 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4349->subtypes, $tmp4404);
        panda$core$Object* $tmp4406 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4381);
        panda$core$Bit $tmp4407 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4405), ((org$pandalanguage$pandac$IRNode*) $tmp4406)->type);
        $tmp4401 = $tmp4407.value;
        $l4403:;
        panda$core$Bit $tmp4408 = { $tmp4401 };
        if ($tmp4408.value) {
        {
            panda$core$Int64 $tmp4409 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4381, offset4374);
            panda$core$Object* $tmp4410 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4349->subtypes, $tmp4409);
            panda$core$String* $tmp4411 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4410));
            panda$core$String* $tmp4413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4411, &$s4412);
            panda$core$Object* $tmp4414 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4381);
            panda$core$Int64 $tmp4415 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4381, offset4374);
            panda$core$Object* $tmp4416 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4349->subtypes, $tmp4415);
            panda$core$String* $tmp4417 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg4398, ((org$pandalanguage$pandac$IRNode*) $tmp4414)->type, ((org$pandalanguage$pandac$Type*) $tmp4416), p_out);
            panda$core$String* $tmp4418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4413, $tmp4417);
            arg4398 = $tmp4418;
        }
        }
        else {
        {
            panda$core$Object* $tmp4419 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4381);
            panda$core$String* $tmp4420 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4419)->type);
            panda$core$String* $tmp4422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4420, &$s4421);
            panda$core$String* $tmp4423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4422, arg4398);
            arg4398 = $tmp4423;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4371, ((panda$core$Object*) arg4398));
    }
    $l4389:;
    int64_t $tmp4425 = $tmp4384 - i4381.value;
    if ($tmp4385) goto $l4426; else goto $l4427;
    $l4426:;
    if ($tmp4425 >= 1) goto $l4424; else goto $l4388;
    $l4427:;
    if ($tmp4425 > 1) goto $l4424; else goto $l4388;
    $l4424:;
    i4381.value += 1;
    goto $l4386;
    $l4388:;
    panda$core$Int64 $tmp4431 = panda$collections$Array$get_count$R$panda$core$Int64(args4371);
    panda$core$Bit $tmp4432 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4431, ((panda$core$Int64) { 0 }));
    if ($tmp4432.value) {
    {
        panda$core$Object* $tmp4433 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4371, ((panda$core$Int64) { 0 }));
        refTarget4430 = ((panda$core$String*) $tmp4433);
    }
    }
    else {
    {
        refTarget4430 = NULL;
    }
    }
    panda$core$String* $tmp4435 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, refTarget4430, m4346, isSuper4351, p_out);
    methodRef4434 = $tmp4435;
    separator4436 = &$s4437;
    panda$core$Bit $tmp4438 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4346);
    if ($tmp4438.value) {
    {
        panda$core$Int64 $tmp4439 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4439;
        panda$core$String* $tmp4442 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4441, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4440 = $tmp4442;
        panda$core$String* $tmp4444 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4443 = $tmp4444;
        panda$core$String* $tmp4445 = panda$core$String$convert$R$panda$core$String(indirectVar4440);
        panda$core$String* $tmp4447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4445, &$s4446);
        panda$core$String* $tmp4448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4447, resultType4443);
        panda$core$String* $tmp4450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4448, &$s4449);
        (($fn4451) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4450);
        panda$core$String* $tmp4453 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4346);
        panda$core$String* $tmp4454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4452, $tmp4453);
        panda$core$String* $tmp4456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4454, &$s4455);
        panda$core$String* $tmp4457 = panda$core$String$convert$R$panda$core$String(methodRef4434);
        panda$core$String* $tmp4459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4457, &$s4458);
        panda$core$String* $tmp4460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4459, resultType4443);
        panda$core$String* $tmp4462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4460, &$s4461);
        panda$core$String* $tmp4463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4462, indirectVar4440);
        panda$core$String* $tmp4465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4463, &$s4464);
        panda$core$String* $tmp4466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4456, $tmp4465);
        (($fn4467) p_out->$class->vtable[16])(p_out, $tmp4466);
        separator4436 = &$s4468;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4469 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4470 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4469);
        if ($tmp4470.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4472 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4346);
        panda$core$String* $tmp4473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4471, $tmp4472);
        panda$core$String* $tmp4475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4473, &$s4474);
        panda$core$String* $tmp4476 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4475, $tmp4476);
        panda$core$String* $tmp4479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4477, &$s4478);
        panda$core$String* $tmp4480 = panda$core$String$convert$R$panda$core$String(methodRef4434);
        panda$core$String* $tmp4482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4480, &$s4481);
        panda$core$String* $tmp4483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4479, $tmp4482);
        (($fn4484) p_out->$class->vtable[16])(p_out, $tmp4483);
    }
    }
    {
        ITable* $tmp4486 = ((panda$collections$Iterable*) args4371)->$class->itable;
        while ($tmp4486->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4486 = $tmp4486->next;
        }
        $fn4488 $tmp4487 = $tmp4486->methods[0];
        panda$collections$Iterator* $tmp4489 = $tmp4487(((panda$collections$Iterable*) args4371));
        a$Iter4485 = $tmp4489;
        $l4490:;
        ITable* $tmp4492 = a$Iter4485->$class->itable;
        while ($tmp4492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4492 = $tmp4492->next;
        }
        $fn4494 $tmp4493 = $tmp4492->methods[0];
        panda$core$Bit $tmp4495 = $tmp4493(a$Iter4485);
        panda$core$Bit $tmp4496 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4495);
        if (!$tmp4496.value) goto $l4491;
        {
            ITable* $tmp4498 = a$Iter4485->$class->itable;
            while ($tmp4498->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4498 = $tmp4498->next;
            }
            $fn4500 $tmp4499 = $tmp4498->methods[1];
            panda$core$Object* $tmp4501 = $tmp4499(a$Iter4485);
            a4497 = ((panda$core$String*) $tmp4501);
            (($fn4502) p_out->$class->vtable[16])(p_out, separator4436);
            (($fn4503) p_out->$class->vtable[16])(p_out, a4497);
            separator4436 = &$s4504;
        }
        goto $l4490;
        $l4491:;
    }
    (($fn4506) p_out->$class->vtable[19])(p_out, &$s4505);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* test4518;
    panda$core$String* testBit4521;
    panda$core$String* ifTrue4530;
    panda$core$String* ifFalse4532;
    panda$core$String* end4546;
    panda$core$Bit $tmp4507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4507.value);
    panda$core$Int64 $tmp4509 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4509, ((panda$core$Int64) { 2 }));
    bool $tmp4508 = $tmp4510.value;
    if ($tmp4508) goto $l4511;
    panda$core$Int64 $tmp4512 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4512, ((panda$core$Int64) { 3 }));
    $tmp4508 = $tmp4513.value;
    $l4511:;
    panda$core$Bit $tmp4514 = { $tmp4508 };
    PANDA_ASSERT($tmp4514.value);
    panda$core$Object* $tmp4515 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4516 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4517 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4515)->type, $tmp4516);
    PANDA_ASSERT($tmp4517.value);
    panda$core$Object* $tmp4519 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4520 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4519), p_out);
    test4518 = $tmp4520;
    panda$core$String* $tmp4522 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4521 = $tmp4522;
    panda$core$String* $tmp4523 = panda$core$String$convert$R$panda$core$String(testBit4521);
    panda$core$String* $tmp4525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4523, &$s4524);
    panda$core$String* $tmp4526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4525, test4518);
    panda$core$String* $tmp4528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4526, &$s4527);
    (($fn4529) p_out->$class->vtable[19])(p_out, $tmp4528);
    panda$core$String* $tmp4531 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4530 = $tmp4531;
    panda$core$String* $tmp4533 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4532 = $tmp4533;
    panda$core$String* $tmp4535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4534, testBit4521);
    panda$core$String* $tmp4537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4535, &$s4536);
    panda$core$String* $tmp4538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4537, ifTrue4530);
    panda$core$String* $tmp4540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4538, &$s4539);
    panda$core$String* $tmp4541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4540, ifFalse4532);
    panda$core$String* $tmp4543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4541, &$s4542);
    (($fn4544) p_out->$class->vtable[19])(p_out, $tmp4543);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue4530, p_out);
    panda$core$Object* $tmp4545 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4545), p_out);
    panda$core$Int64 $tmp4547 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4547, ((panda$core$Int64) { 3 }));
    if ($tmp4548.value) {
    {
        panda$core$String* $tmp4549 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4546 = $tmp4549;
    }
    }
    else {
    {
        end4546 = ifFalse4532;
    }
    }
    panda$core$Object* $tmp4550 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4551 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4550));
    panda$core$Bit $tmp4552 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4551);
    if ($tmp4552.value) {
    {
        panda$core$String* $tmp4554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4553, end4546);
        panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4554, &$s4555);
        (($fn4557) p_out->$class->vtable[19])(p_out, $tmp4556);
    }
    }
    panda$core$Int64 $tmp4558 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4558, ((panda$core$Int64) { 3 }));
    if ($tmp4559.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse4532, p_out);
        panda$core$Object* $tmp4560 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4560), p_out);
        panda$core$Object* $tmp4561 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4562 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4561));
        panda$core$Bit $tmp4563 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4562);
        if ($tmp4563.value) {
        {
            panda$core$String* $tmp4565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4564, end4546);
            panda$core$String* $tmp4567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4565, &$s4566);
            (($fn4568) p_out->$class->vtable[19])(p_out, $tmp4567);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end4546, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4572;
    panda$core$String* range4583;
    org$pandalanguage$pandac$IRNode* block4586;
    org$pandalanguage$pandac$Type* t4588;
    panda$core$String* llt4591;
    panda$core$String* indexType4593;
    org$pandalanguage$pandac$ClassDecl* cl4599;
    panda$core$String* numberType4607;
    panda$core$String* index4615;
    panda$core$String* start4624;
    panda$core$String* indexValuePtr4633;
    panda$core$String* end4664;
    panda$core$String* inclusive4673;
    panda$core$String* loopStart4682;
    panda$core$String* loopBody4684;
    panda$core$String* loopEnd4686;
    panda$core$String* loopTest4688;
    panda$core$String* forwardEntry4692;
    panda$core$String* backwardEntry4694;
    panda$core$String* signPrefix4696;
    panda$core$String* forwardEntryInclusive4708;
    panda$core$String* forwardEntryExclusive4710;
    panda$core$String* forwardEntryInclusiveTest4725;
    panda$core$String* forwardEntryExclusiveTest4755;
    panda$core$String* indexValue4785;
    panda$core$String* loopInc4807;
    panda$core$String* forwardDelta4809;
    panda$core$String* forwardInclusiveLabel4824;
    panda$core$String* forwardExclusiveLabel4826;
    panda$core$String* forwardInclusiveTest4837;
    panda$core$String* forwardExclusiveTest4860;
    panda$core$String* inc4883;
    panda$core$String* incStruct4895;
    panda$core$Bit $tmp4569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4569.value);
    panda$core$Int64 $tmp4570 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4570, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4571.value);
    panda$core$Object* $tmp4573 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4572 = ((org$pandalanguage$pandac$IRNode*) $tmp4573);
    panda$core$Object* $tmp4574 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4574)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4575.value);
    panda$core$Object* $tmp4576 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4577 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4576)->type->subtypes);
    panda$core$Bit $tmp4578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4577, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4578.value);
    panda$core$Object* $tmp4579 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4580 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4579)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4582 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4580))->name, &$s4581);
    PANDA_ASSERT($tmp4582.value);
    panda$core$Object* $tmp4584 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4585 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4584), p_out);
    range4583 = $tmp4585;
    panda$core$Object* $tmp4587 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4586 = ((org$pandalanguage$pandac$IRNode*) $tmp4587);
    panda$core$Object* $tmp4589 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4589)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4588 = ((org$pandalanguage$pandac$Type*) $tmp4590);
    panda$core$String* $tmp4592 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4588);
    llt4591 = $tmp4592;
    panda$core$Bit $tmp4594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4588->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4594.value) {
    {
        panda$core$Int64 $tmp4595 = panda$collections$Array$get_count$R$panda$core$Int64(t4588->subtypes);
        panda$core$Bit $tmp4596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4595, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4596.value);
        panda$core$Object* $tmp4597 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4588->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4598 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4597));
        indexType4593 = $tmp4598;
    }
    }
    else {
    {
        indexType4593 = llt4591;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4600 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4588);
    cl4599 = $tmp4600;
    PANDA_ASSERT(((panda$core$Bit) { cl4599 != NULL }).value);
    panda$collections$ListView* $tmp4601 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4599);
    ITable* $tmp4602 = ((panda$collections$CollectionView*) $tmp4601)->$class->itable;
    while ($tmp4602->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4602 = $tmp4602->next;
    }
    $fn4604 $tmp4603 = $tmp4602->methods[0];
    panda$core$Int64 $tmp4605 = $tmp4603(((panda$collections$CollectionView*) $tmp4601));
    panda$core$Bit $tmp4606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4605, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4606.value);
    panda$collections$ListView* $tmp4608 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4599);
    ITable* $tmp4609 = $tmp4608->$class->itable;
    while ($tmp4609->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4609 = $tmp4609->next;
    }
    $fn4611 $tmp4610 = $tmp4609->methods[0];
    panda$core$Object* $tmp4612 = $tmp4610($tmp4608, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4613 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4612)->type);
    numberType4607 = $tmp4613;
    panda$core$Bit $tmp4614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4572->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4614.value);
    panda$core$String* $tmp4616 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4572->payload));
    index4615 = $tmp4616;
    panda$core$String* $tmp4617 = panda$core$String$convert$R$panda$core$String(index4615);
    panda$core$String* $tmp4619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4617, &$s4618);
    panda$core$String* $tmp4620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4619, indexType4593);
    panda$core$String* $tmp4622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4620, &$s4621);
    (($fn4623) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4622);
    panda$core$String* $tmp4625 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4624 = $tmp4625;
    panda$core$String* $tmp4626 = panda$core$String$convert$R$panda$core$String(start4624);
    panda$core$String* $tmp4628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4626, &$s4627);
    panda$core$String* $tmp4629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4628, range4583);
    panda$core$String* $tmp4631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4629, &$s4630);
    (($fn4632) p_out->$class->vtable[19])(p_out, $tmp4631);
    panda$core$String* $tmp4634 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4633 = $tmp4634;
    panda$core$String* $tmp4635 = panda$core$String$convert$R$panda$core$String(indexValuePtr4633);
    panda$core$String* $tmp4637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4635, &$s4636);
    panda$core$String* $tmp4638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4637, indexType4593);
    panda$core$String* $tmp4640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4638, &$s4639);
    panda$core$String* $tmp4641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4640, indexType4593);
    panda$core$String* $tmp4643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4641, &$s4642);
    panda$core$String* $tmp4644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4643, index4615);
    panda$core$String* $tmp4646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4644, &$s4645);
    panda$core$String* $tmp4648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4646, &$s4647);
    (($fn4649) p_out->$class->vtable[19])(p_out, $tmp4648);
    panda$core$String* $tmp4651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4650, numberType4607);
    panda$core$String* $tmp4653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4651, &$s4652);
    panda$core$String* $tmp4654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4653, start4624);
    panda$core$String* $tmp4656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4654, &$s4655);
    panda$core$String* $tmp4657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4656, numberType4607);
    panda$core$String* $tmp4659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4657, &$s4658);
    panda$core$String* $tmp4660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4659, indexValuePtr4633);
    panda$core$String* $tmp4662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4660, &$s4661);
    (($fn4663) p_out->$class->vtable[19])(p_out, $tmp4662);
    panda$core$String* $tmp4665 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4664 = $tmp4665;
    panda$core$String* $tmp4666 = panda$core$String$convert$R$panda$core$String(end4664);
    panda$core$String* $tmp4668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4666, &$s4667);
    panda$core$String* $tmp4669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4668, range4583);
    panda$core$String* $tmp4671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4669, &$s4670);
    (($fn4672) p_out->$class->vtable[19])(p_out, $tmp4671);
    panda$core$String* $tmp4674 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4673 = $tmp4674;
    panda$core$String* $tmp4675 = panda$core$String$convert$R$panda$core$String(inclusive4673);
    panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4675, &$s4676);
    panda$core$String* $tmp4678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4677, range4583);
    panda$core$String* $tmp4680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4678, &$s4679);
    (($fn4681) p_out->$class->vtable[19])(p_out, $tmp4680);
    panda$core$String* $tmp4683 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4682 = $tmp4683;
    panda$core$String* $tmp4685 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4684 = $tmp4685;
    panda$core$String* $tmp4687 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4686 = $tmp4687;
    panda$core$String* $tmp4689 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4688 = $tmp4689;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4690 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4690->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4690->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4690, ((panda$core$String*) p_f->payload), loopEnd4686, loopTest4688);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4690));
    panda$core$String* $tmp4693 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4692 = $tmp4693;
    panda$core$String* $tmp4695 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4694 = $tmp4695;
    panda$core$Bit $tmp4698 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4588)->name, &$s4697);
    if ($tmp4698.value) {
    {
        signPrefix4696 = &$s4699;
    }
    }
    else {
    {
        panda$core$Bit $tmp4702 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4588)->name, &$s4701);
        bool $tmp4700 = $tmp4702.value;
        if ($tmp4700) goto $l4703;
        panda$core$Bit $tmp4705 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4588)->name, &$s4704);
        $tmp4700 = $tmp4705.value;
        $l4703:;
        panda$core$Bit $tmp4706 = { $tmp4700 };
        PANDA_ASSERT($tmp4706.value);
        signPrefix4696 = &$s4707;
    }
    }
    panda$core$String* $tmp4709 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4708 = $tmp4709;
    panda$core$String* $tmp4711 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4710 = $tmp4711;
    panda$core$String* $tmp4713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4712, inclusive4673);
    panda$core$String* $tmp4715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4713, &$s4714);
    panda$core$String* $tmp4716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4715, forwardEntryInclusive4708);
    panda$core$String* $tmp4718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4716, &$s4717);
    panda$core$String* $tmp4720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4719, forwardEntryExclusive4710);
    panda$core$String* $tmp4722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4720, &$s4721);
    panda$core$String* $tmp4723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4718, $tmp4722);
    (($fn4724) p_out->$class->vtable[19])(p_out, $tmp4723);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive4708, p_out);
    panda$core$String* $tmp4726 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4725 = $tmp4726;
    panda$core$String* $tmp4727 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4725);
    panda$core$String* $tmp4729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4727, &$s4728);
    panda$core$String* $tmp4730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4729, signPrefix4696);
    panda$core$String* $tmp4732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4730, &$s4731);
    panda$core$String* $tmp4733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4732, numberType4607);
    panda$core$String* $tmp4735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4733, &$s4734);
    panda$core$String* $tmp4736 = panda$core$String$convert$R$panda$core$String(start4624);
    panda$core$String* $tmp4738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4736, &$s4737);
    panda$core$String* $tmp4739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4738, end4664);
    panda$core$String* $tmp4741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4739, &$s4740);
    panda$core$String* $tmp4742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4735, $tmp4741);
    (($fn4743) p_out->$class->vtable[19])(p_out, $tmp4742);
    panda$core$String* $tmp4745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4744, forwardEntryInclusiveTest4725);
    panda$core$String* $tmp4747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4745, &$s4746);
    panda$core$String* $tmp4748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4747, loopStart4682);
    panda$core$String* $tmp4750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4748, &$s4749);
    panda$core$String* $tmp4751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4750, loopEnd4686);
    panda$core$String* $tmp4753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4751, &$s4752);
    (($fn4754) p_out->$class->vtable[19])(p_out, $tmp4753);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive4710, p_out);
    panda$core$String* $tmp4756 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4755 = $tmp4756;
    panda$core$String* $tmp4757 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4755);
    panda$core$String* $tmp4759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4757, &$s4758);
    panda$core$String* $tmp4760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4759, signPrefix4696);
    panda$core$String* $tmp4762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4760, &$s4761);
    panda$core$String* $tmp4763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4762, numberType4607);
    panda$core$String* $tmp4765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4763, &$s4764);
    panda$core$String* $tmp4766 = panda$core$String$convert$R$panda$core$String(start4624);
    panda$core$String* $tmp4768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4766, &$s4767);
    panda$core$String* $tmp4769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4768, end4664);
    panda$core$String* $tmp4771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4769, &$s4770);
    panda$core$String* $tmp4772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4765, $tmp4771);
    (($fn4773) p_out->$class->vtable[19])(p_out, $tmp4772);
    panda$core$String* $tmp4775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4774, forwardEntryExclusiveTest4755);
    panda$core$String* $tmp4777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4775, &$s4776);
    panda$core$String* $tmp4778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4777, loopStart4682);
    panda$core$String* $tmp4780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4778, &$s4779);
    panda$core$String* $tmp4781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4780, loopEnd4686);
    panda$core$String* $tmp4783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4781, &$s4782);
    (($fn4784) p_out->$class->vtable[19])(p_out, $tmp4783);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart4682, p_out);
    panda$core$String* $tmp4786 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4785 = $tmp4786;
    panda$core$String* $tmp4787 = panda$core$String$convert$R$panda$core$String(indexValue4785);
    panda$core$String* $tmp4789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4787, &$s4788);
    panda$core$String* $tmp4790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4789, numberType4607);
    panda$core$String* $tmp4792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4790, &$s4791);
    panda$core$String* $tmp4793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4792, numberType4607);
    panda$core$String* $tmp4795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4793, &$s4794);
    panda$core$String* $tmp4796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4795, indexValuePtr4633);
    panda$core$String* $tmp4798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4796, &$s4797);
    (($fn4799) p_out->$class->vtable[19])(p_out, $tmp4798);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block4586, p_out);
    panda$core$Bit $tmp4800 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4586);
    panda$core$Bit $tmp4801 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4800);
    if ($tmp4801.value) {
    {
        panda$core$String* $tmp4803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4802, loopTest4688);
        panda$core$String* $tmp4805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4803, &$s4804);
        (($fn4806) p_out->$class->vtable[19])(p_out, $tmp4805);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest4688, p_out);
    panda$core$String* $tmp4808 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc4807 = $tmp4808;
    panda$core$String* $tmp4810 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta4809 = $tmp4810;
    panda$core$String* $tmp4811 = panda$core$String$convert$R$panda$core$String(forwardDelta4809);
    panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4811, &$s4812);
    panda$core$String* $tmp4814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4813, numberType4607);
    panda$core$String* $tmp4816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, &$s4815);
    panda$core$String* $tmp4817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4816, end4664);
    panda$core$String* $tmp4819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4817, &$s4818);
    panda$core$String* $tmp4820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4819, indexValue4785);
    panda$core$String* $tmp4822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4820, &$s4821);
    (($fn4823) p_out->$class->vtable[19])(p_out, $tmp4822);
    panda$core$String* $tmp4825 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel4824 = $tmp4825;
    panda$core$String* $tmp4827 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel4826 = $tmp4827;
    panda$core$String* $tmp4829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4828, inclusive4673);
    panda$core$String* $tmp4831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4829, &$s4830);
    panda$core$String* $tmp4832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4831, forwardInclusiveLabel4824);
    panda$core$String* $tmp4834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4832, &$s4833);
    panda$core$String* $tmp4835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4834, forwardExclusiveLabel4826);
    (($fn4836) p_out->$class->vtable[19])(p_out, $tmp4835);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel4824, p_out);
    panda$core$String* $tmp4838 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest4837 = $tmp4838;
    panda$core$String* $tmp4839 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest4837);
    panda$core$String* $tmp4841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4839, &$s4840);
    panda$core$String* $tmp4842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4841, numberType4607);
    panda$core$String* $tmp4844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4842, &$s4843);
    panda$core$String* $tmp4845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4844, forwardDelta4809);
    panda$core$String* $tmp4847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4845, &$s4846);
    (($fn4848) p_out->$class->vtable[19])(p_out, $tmp4847);
    panda$core$String* $tmp4850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4849, forwardInclusiveTest4837);
    panda$core$String* $tmp4852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4850, &$s4851);
    panda$core$String* $tmp4853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4852, loopInc4807);
    panda$core$String* $tmp4855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4853, &$s4854);
    panda$core$String* $tmp4856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4855, loopEnd4686);
    panda$core$String* $tmp4858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4856, &$s4857);
    (($fn4859) p_out->$class->vtable[19])(p_out, $tmp4858);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel4826, p_out);
    panda$core$String* $tmp4861 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest4860 = $tmp4861;
    panda$core$String* $tmp4862 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest4860);
    panda$core$String* $tmp4864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4862, &$s4863);
    panda$core$String* $tmp4865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4864, numberType4607);
    panda$core$String* $tmp4867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4865, &$s4866);
    panda$core$String* $tmp4868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4867, forwardDelta4809);
    panda$core$String* $tmp4870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4868, &$s4869);
    (($fn4871) p_out->$class->vtable[19])(p_out, $tmp4870);
    panda$core$String* $tmp4873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4872, forwardExclusiveTest4860);
    panda$core$String* $tmp4875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4873, &$s4874);
    panda$core$String* $tmp4876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4875, loopInc4807);
    panda$core$String* $tmp4878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4876, &$s4877);
    panda$core$String* $tmp4879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4878, loopEnd4686);
    panda$core$String* $tmp4881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4879, &$s4880);
    (($fn4882) p_out->$class->vtable[19])(p_out, $tmp4881);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc4807, p_out);
    panda$core$String* $tmp4884 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc4883 = $tmp4884;
    panda$core$String* $tmp4885 = panda$core$String$convert$R$panda$core$String(inc4883);
    panda$core$String* $tmp4887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4885, &$s4886);
    panda$core$String* $tmp4888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4887, numberType4607);
    panda$core$String* $tmp4890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4888, &$s4889);
    panda$core$String* $tmp4891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4890, indexValue4785);
    panda$core$String* $tmp4893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4891, &$s4892);
    (($fn4894) p_out->$class->vtable[19])(p_out, $tmp4893);
    panda$core$String* $tmp4896 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct4895 = $tmp4896;
    panda$core$String* $tmp4897 = panda$core$String$convert$R$panda$core$String(incStruct4895);
    panda$core$String* $tmp4899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4897, &$s4898);
    panda$core$String* $tmp4900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4899, indexType4593);
    panda$core$String* $tmp4902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4900, &$s4901);
    panda$core$String* $tmp4903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4902, numberType4607);
    panda$core$String* $tmp4905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4903, &$s4904);
    (($fn4906) p_out->$class->vtable[19])(p_out, $tmp4905);
    panda$core$String* $tmp4908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4907, numberType4607);
    panda$core$String* $tmp4910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4908, &$s4909);
    panda$core$String* $tmp4911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4910, inc4883);
    panda$core$String* $tmp4913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4911, &$s4912);
    (($fn4914) p_out->$class->vtable[19])(p_out, $tmp4913);
    panda$core$String* $tmp4916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4915, indexType4593);
    panda$core$String* $tmp4918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4916, &$s4917);
    panda$core$String* $tmp4919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4918, incStruct4895);
    panda$core$String* $tmp4921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4919, &$s4920);
    panda$core$String* $tmp4922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4921, indexType4593);
    panda$core$String* $tmp4924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4922, &$s4923);
    panda$core$String* $tmp4925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4924, index4615);
    panda$core$String* $tmp4927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4925, &$s4926);
    (($fn4928) p_out->$class->vtable[19])(p_out, $tmp4927);
    panda$core$String* $tmp4930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4929, loopStart4682);
    panda$core$String* $tmp4932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4930, &$s4931);
    (($fn4933) p_out->$class->vtable[19])(p_out, $tmp4932);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd4686, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4937;
    panda$core$String* range4948;
    org$pandalanguage$pandac$IRNode* block4951;
    org$pandalanguage$pandac$Type* t4953;
    panda$core$String* llt4956;
    panda$core$String* indexType4958;
    org$pandalanguage$pandac$ClassDecl* cl4964;
    panda$core$String* numberType4972;
    panda$core$String* index4980;
    panda$core$String* start4989;
    panda$core$String* indexValuePtr4998;
    panda$core$String* end5029;
    panda$core$String* rawStep5038;
    panda$core$String* step5047;
    panda$core$String* inclusive5061;
    panda$core$String* loopStart5070;
    panda$core$String* loopBody5072;
    panda$core$String* loopEnd5074;
    panda$core$String* loopTest5076;
    panda$core$String* forwardEntry5080;
    panda$core$String* backwardEntry5082;
    panda$core$String* signPrefix5084;
    panda$core$String* direction5096;
    panda$core$String* forwardEntryInclusive5122;
    panda$core$String* forwardEntryExclusive5124;
    panda$core$String* forwardEntryInclusiveTest5139;
    panda$core$String* forwardEntryExclusiveTest5169;
    panda$core$String* backwardEntryInclusive5199;
    panda$core$String* backwardEntryExclusive5201;
    panda$core$String* backwardEntryInclusiveTest5216;
    panda$core$String* backwardEntryExclusiveTest5246;
    panda$core$String* indexValue5276;
    panda$core$String* loopInc5298;
    panda$core$String* forwardLabel5300;
    panda$core$String* backwardLabel5302;
    panda$core$String* forwardDelta5315;
    panda$core$String* forwardInclusiveLabel5330;
    panda$core$String* forwardExclusiveLabel5332;
    panda$core$String* forwardInclusiveTest5343;
    panda$core$String* forwardExclusiveTest5369;
    panda$core$String* backwardDelta5395;
    panda$core$String* negStep5410;
    panda$core$String* backwardInclusiveLabel5422;
    panda$core$String* backwardExclusiveLabel5424;
    panda$core$String* backwardInclusiveTest5435;
    panda$core$String* backwardExclusiveTest5459;
    panda$core$String* inc5483;
    panda$core$String* incStruct5498;
    panda$core$Bit $tmp4934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4934.value);
    panda$core$Int64 $tmp4935 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4935, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4936.value);
    panda$core$Object* $tmp4938 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4937 = ((org$pandalanguage$pandac$IRNode*) $tmp4938);
    panda$core$Object* $tmp4939 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4939)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4940.value);
    panda$core$Object* $tmp4941 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4942 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4941)->type->subtypes);
    panda$core$Bit $tmp4943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4942, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4943.value);
    panda$core$Object* $tmp4944 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4945 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4944)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4947 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4945))->name, &$s4946);
    PANDA_ASSERT($tmp4947.value);
    panda$core$Object* $tmp4949 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4950 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4949), p_out);
    range4948 = $tmp4950;
    panda$core$Object* $tmp4952 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4951 = ((org$pandalanguage$pandac$IRNode*) $tmp4952);
    panda$core$Object* $tmp4954 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4955 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4954)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4953 = ((org$pandalanguage$pandac$Type*) $tmp4955);
    panda$core$String* $tmp4957 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4953);
    llt4956 = $tmp4957;
    panda$core$Bit $tmp4959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4953->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4959.value) {
    {
        panda$core$Int64 $tmp4960 = panda$collections$Array$get_count$R$panda$core$Int64(t4953->subtypes);
        panda$core$Bit $tmp4961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4960, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4961.value);
        panda$core$Object* $tmp4962 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4953->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4963 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4962));
        indexType4958 = $tmp4963;
    }
    }
    else {
    {
        indexType4958 = llt4956;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4965 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4953);
    cl4964 = $tmp4965;
    PANDA_ASSERT(((panda$core$Bit) { cl4964 != NULL }).value);
    panda$collections$ListView* $tmp4966 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4964);
    ITable* $tmp4967 = ((panda$collections$CollectionView*) $tmp4966)->$class->itable;
    while ($tmp4967->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4967 = $tmp4967->next;
    }
    $fn4969 $tmp4968 = $tmp4967->methods[0];
    panda$core$Int64 $tmp4970 = $tmp4968(((panda$collections$CollectionView*) $tmp4966));
    panda$core$Bit $tmp4971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4970, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4971.value);
    panda$collections$ListView* $tmp4973 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4964);
    ITable* $tmp4974 = $tmp4973->$class->itable;
    while ($tmp4974->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4974 = $tmp4974->next;
    }
    $fn4976 $tmp4975 = $tmp4974->methods[0];
    panda$core$Object* $tmp4977 = $tmp4975($tmp4973, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4978 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4977)->type);
    numberType4972 = $tmp4978;
    panda$core$Bit $tmp4979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4937->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4979.value);
    panda$core$String* $tmp4981 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4937->payload));
    index4980 = $tmp4981;
    panda$core$String* $tmp4982 = panda$core$String$convert$R$panda$core$String(index4980);
    panda$core$String* $tmp4984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4982, &$s4983);
    panda$core$String* $tmp4985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4984, indexType4958);
    panda$core$String* $tmp4987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4985, &$s4986);
    (($fn4988) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4987);
    panda$core$String* $tmp4990 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4989 = $tmp4990;
    panda$core$String* $tmp4991 = panda$core$String$convert$R$panda$core$String(start4989);
    panda$core$String* $tmp4993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4991, &$s4992);
    panda$core$String* $tmp4994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4993, range4948);
    panda$core$String* $tmp4996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4994, &$s4995);
    (($fn4997) p_out->$class->vtable[19])(p_out, $tmp4996);
    panda$core$String* $tmp4999 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4998 = $tmp4999;
    panda$core$String* $tmp5000 = panda$core$String$convert$R$panda$core$String(indexValuePtr4998);
    panda$core$String* $tmp5002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5000, &$s5001);
    panda$core$String* $tmp5003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5002, indexType4958);
    panda$core$String* $tmp5005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5003, &$s5004);
    panda$core$String* $tmp5006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5005, indexType4958);
    panda$core$String* $tmp5008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5006, &$s5007);
    panda$core$String* $tmp5009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5008, index4980);
    panda$core$String* $tmp5011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5009, &$s5010);
    panda$core$String* $tmp5013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5011, &$s5012);
    (($fn5014) p_out->$class->vtable[19])(p_out, $tmp5013);
    panda$core$String* $tmp5016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5015, numberType4972);
    panda$core$String* $tmp5018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5016, &$s5017);
    panda$core$String* $tmp5019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5018, start4989);
    panda$core$String* $tmp5021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5019, &$s5020);
    panda$core$String* $tmp5022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5021, numberType4972);
    panda$core$String* $tmp5024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5022, &$s5023);
    panda$core$String* $tmp5025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5024, indexValuePtr4998);
    panda$core$String* $tmp5027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5025, &$s5026);
    (($fn5028) p_out->$class->vtable[19])(p_out, $tmp5027);
    panda$core$String* $tmp5030 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end5029 = $tmp5030;
    panda$core$String* $tmp5031 = panda$core$String$convert$R$panda$core$String(end5029);
    panda$core$String* $tmp5033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5031, &$s5032);
    panda$core$String* $tmp5034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5033, range4948);
    panda$core$String* $tmp5036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5034, &$s5035);
    (($fn5037) p_out->$class->vtable[19])(p_out, $tmp5036);
    panda$core$String* $tmp5039 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep5038 = $tmp5039;
    panda$core$String* $tmp5040 = panda$core$String$convert$R$panda$core$String(rawStep5038);
    panda$core$String* $tmp5042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5040, &$s5041);
    panda$core$String* $tmp5043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5042, range4948);
    panda$core$String* $tmp5045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5043, &$s5044);
    (($fn5046) p_out->$class->vtable[19])(p_out, $tmp5045);
    panda$core$Bit $tmp5049 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4972, &$s5048);
    if ($tmp5049.value) {
    {
        panda$core$String* $tmp5050 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step5047 = $tmp5050;
        panda$core$String* $tmp5051 = panda$core$String$convert$R$panda$core$String(step5047);
        panda$core$String* $tmp5053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5051, &$s5052);
        panda$core$String* $tmp5054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5053, rawStep5038);
        panda$core$String* $tmp5056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5054, &$s5055);
        panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5056, numberType4972);
        panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5057, &$s5058);
        (($fn5060) p_out->$class->vtable[19])(p_out, $tmp5059);
    }
    }
    else {
    {
        step5047 = rawStep5038;
    }
    }
    panda$core$String* $tmp5062 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive5061 = $tmp5062;
    panda$core$String* $tmp5063 = panda$core$String$convert$R$panda$core$String(inclusive5061);
    panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5063, &$s5064);
    panda$core$String* $tmp5066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5065, range4948);
    panda$core$String* $tmp5068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5066, &$s5067);
    (($fn5069) p_out->$class->vtable[19])(p_out, $tmp5068);
    panda$core$String* $tmp5071 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5070 = $tmp5071;
    panda$core$String* $tmp5073 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5072 = $tmp5073;
    panda$core$String* $tmp5075 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5074 = $tmp5075;
    panda$core$String* $tmp5077 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest5076 = $tmp5077;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5078 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5078->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5078->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5078, ((panda$core$String*) p_f->payload), loopEnd5074, loopTest5076);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5078));
    panda$core$String* $tmp5081 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry5080 = $tmp5081;
    panda$core$String* $tmp5083 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry5082 = $tmp5083;
    panda$core$Bit $tmp5086 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4953)->name, &$s5085);
    if ($tmp5086.value) {
    {
        signPrefix5084 = &$s5087;
    }
    }
    else {
    {
        panda$core$Bit $tmp5090 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4953)->name, &$s5089);
        bool $tmp5088 = $tmp5090.value;
        if ($tmp5088) goto $l5091;
        panda$core$Bit $tmp5093 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4953)->name, &$s5092);
        $tmp5088 = $tmp5093.value;
        $l5091:;
        panda$core$Bit $tmp5094 = { $tmp5088 };
        PANDA_ASSERT($tmp5094.value);
        signPrefix5084 = &$s5095;
    }
    }
    panda$core$Bit $tmp5098 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix5084, &$s5097);
    if ($tmp5098.value) {
    {
        panda$core$String* $tmp5099 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction5096 = $tmp5099;
        panda$core$String* $tmp5100 = panda$core$String$convert$R$panda$core$String(direction5096);
        panda$core$String* $tmp5102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5100, &$s5101);
        panda$core$String* $tmp5103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5102, numberType4972);
        panda$core$String* $tmp5105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5103, &$s5104);
        panda$core$String* $tmp5106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5105, step5047);
        panda$core$String* $tmp5108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5106, &$s5107);
        (($fn5109) p_out->$class->vtable[19])(p_out, $tmp5108);
    }
    }
    else {
    {
        direction5096 = &$s5110;
    }
    }
    panda$core$String* $tmp5112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5111, direction5096);
    panda$core$String* $tmp5114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5112, &$s5113);
    panda$core$String* $tmp5115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5114, forwardEntry5080);
    panda$core$String* $tmp5117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5115, &$s5116);
    panda$core$String* $tmp5118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5117, backwardEntry5082);
    panda$core$String* $tmp5120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5118, &$s5119);
    (($fn5121) p_out->$class->vtable[19])(p_out, $tmp5120);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntry5080, p_out);
    panda$core$String* $tmp5123 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive5122 = $tmp5123;
    panda$core$String* $tmp5125 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive5124 = $tmp5125;
    panda$core$String* $tmp5127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5126, inclusive5061);
    panda$core$String* $tmp5129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5127, &$s5128);
    panda$core$String* $tmp5130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5129, forwardEntryInclusive5122);
    panda$core$String* $tmp5132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5130, &$s5131);
    panda$core$String* $tmp5134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5133, forwardEntryExclusive5124);
    panda$core$String* $tmp5136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5134, &$s5135);
    panda$core$String* $tmp5137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5132, $tmp5136);
    (($fn5138) p_out->$class->vtable[19])(p_out, $tmp5137);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive5122, p_out);
    panda$core$String* $tmp5140 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest5139 = $tmp5140;
    panda$core$String* $tmp5141 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest5139);
    panda$core$String* $tmp5143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5141, &$s5142);
    panda$core$String* $tmp5144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5143, signPrefix5084);
    panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5144, &$s5145);
    panda$core$String* $tmp5147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5146, numberType4972);
    panda$core$String* $tmp5149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5147, &$s5148);
    panda$core$String* $tmp5150 = panda$core$String$convert$R$panda$core$String(start4989);
    panda$core$String* $tmp5152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5150, &$s5151);
    panda$core$String* $tmp5153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5152, end5029);
    panda$core$String* $tmp5155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5153, &$s5154);
    panda$core$String* $tmp5156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5149, $tmp5155);
    (($fn5157) p_out->$class->vtable[19])(p_out, $tmp5156);
    panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5158, forwardEntryInclusiveTest5139);
    panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, &$s5160);
    panda$core$String* $tmp5162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5161, loopStart5070);
    panda$core$String* $tmp5164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5162, &$s5163);
    panda$core$String* $tmp5165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5164, loopEnd5074);
    panda$core$String* $tmp5167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5165, &$s5166);
    (($fn5168) p_out->$class->vtable[19])(p_out, $tmp5167);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive5124, p_out);
    panda$core$String* $tmp5170 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest5169 = $tmp5170;
    panda$core$String* $tmp5171 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest5169);
    panda$core$String* $tmp5173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5171, &$s5172);
    panda$core$String* $tmp5174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5173, signPrefix5084);
    panda$core$String* $tmp5176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5174, &$s5175);
    panda$core$String* $tmp5177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5176, numberType4972);
    panda$core$String* $tmp5179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5177, &$s5178);
    panda$core$String* $tmp5180 = panda$core$String$convert$R$panda$core$String(start4989);
    panda$core$String* $tmp5182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5180, &$s5181);
    panda$core$String* $tmp5183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5182, end5029);
    panda$core$String* $tmp5185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5183, &$s5184);
    panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5179, $tmp5185);
    (($fn5187) p_out->$class->vtable[19])(p_out, $tmp5186);
    panda$core$String* $tmp5189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5188, forwardEntryExclusiveTest5169);
    panda$core$String* $tmp5191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5189, &$s5190);
    panda$core$String* $tmp5192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5191, loopStart5070);
    panda$core$String* $tmp5194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5192, &$s5193);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5194, loopEnd5074);
    panda$core$String* $tmp5197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, &$s5196);
    (($fn5198) p_out->$class->vtable[19])(p_out, $tmp5197);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntry5082, p_out);
    panda$core$String* $tmp5200 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive5199 = $tmp5200;
    panda$core$String* $tmp5202 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive5201 = $tmp5202;
    panda$core$String* $tmp5204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5203, inclusive5061);
    panda$core$String* $tmp5206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5204, &$s5205);
    panda$core$String* $tmp5207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5206, backwardEntryInclusive5199);
    panda$core$String* $tmp5209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5207, &$s5208);
    panda$core$String* $tmp5211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5210, backwardEntryExclusive5201);
    panda$core$String* $tmp5213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5211, &$s5212);
    panda$core$String* $tmp5214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5209, $tmp5213);
    (($fn5215) p_out->$class->vtable[19])(p_out, $tmp5214);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryInclusive5199, p_out);
    panda$core$String* $tmp5217 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5216 = $tmp5217;
    panda$core$String* $tmp5218 = panda$core$String$convert$R$panda$core$String(backwardEntryInclusiveTest5216);
    panda$core$String* $tmp5220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5218, &$s5219);
    panda$core$String* $tmp5221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5220, signPrefix5084);
    panda$core$String* $tmp5223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5221, &$s5222);
    panda$core$String* $tmp5224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5223, numberType4972);
    panda$core$String* $tmp5226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5224, &$s5225);
    panda$core$String* $tmp5227 = panda$core$String$convert$R$panda$core$String(start4989);
    panda$core$String* $tmp5229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5227, &$s5228);
    panda$core$String* $tmp5230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5229, end5029);
    panda$core$String* $tmp5232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5230, &$s5231);
    panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5226, $tmp5232);
    (($fn5234) p_out->$class->vtable[19])(p_out, $tmp5233);
    panda$core$String* $tmp5236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5235, backwardEntryInclusiveTest5216);
    panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5236, &$s5237);
    panda$core$String* $tmp5239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5238, loopStart5070);
    panda$core$String* $tmp5241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5239, &$s5240);
    panda$core$String* $tmp5242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5241, loopEnd5074);
    panda$core$String* $tmp5244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5242, &$s5243);
    (($fn5245) p_out->$class->vtable[19])(p_out, $tmp5244);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryExclusive5201, p_out);
    panda$core$String* $tmp5247 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5246 = $tmp5247;
    panda$core$String* $tmp5248 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusiveTest5246);
    panda$core$String* $tmp5250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5248, &$s5249);
    panda$core$String* $tmp5251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5250, signPrefix5084);
    panda$core$String* $tmp5253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5251, &$s5252);
    panda$core$String* $tmp5254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5253, numberType4972);
    panda$core$String* $tmp5256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5254, &$s5255);
    panda$core$String* $tmp5257 = panda$core$String$convert$R$panda$core$String(start4989);
    panda$core$String* $tmp5259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5257, &$s5258);
    panda$core$String* $tmp5260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5259, end5029);
    panda$core$String* $tmp5262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5260, &$s5261);
    panda$core$String* $tmp5263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5256, $tmp5262);
    (($fn5264) p_out->$class->vtable[19])(p_out, $tmp5263);
    panda$core$String* $tmp5266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5265, backwardEntryExclusiveTest5246);
    panda$core$String* $tmp5268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5266, &$s5267);
    panda$core$String* $tmp5269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5268, loopStart5070);
    panda$core$String* $tmp5271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5269, &$s5270);
    panda$core$String* $tmp5272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5271, loopEnd5074);
    panda$core$String* $tmp5274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5272, &$s5273);
    (($fn5275) p_out->$class->vtable[19])(p_out, $tmp5274);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5070, p_out);
    panda$core$String* $tmp5277 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5276 = $tmp5277;
    panda$core$String* $tmp5278 = panda$core$String$convert$R$panda$core$String(indexValue5276);
    panda$core$String* $tmp5280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5278, &$s5279);
    panda$core$String* $tmp5281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5280, numberType4972);
    panda$core$String* $tmp5283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5281, &$s5282);
    panda$core$String* $tmp5284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5283, numberType4972);
    panda$core$String* $tmp5286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5284, &$s5285);
    panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5286, indexValuePtr4998);
    panda$core$String* $tmp5289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5287, &$s5288);
    (($fn5290) p_out->$class->vtable[19])(p_out, $tmp5289);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block4951, p_out);
    panda$core$Bit $tmp5291 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4951);
    panda$core$Bit $tmp5292 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5291);
    if ($tmp5292.value) {
    {
        panda$core$String* $tmp5294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5293, loopTest5076);
        panda$core$String* $tmp5296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5294, &$s5295);
        (($fn5297) p_out->$class->vtable[19])(p_out, $tmp5296);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest5076, p_out);
    panda$core$String* $tmp5299 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5298 = $tmp5299;
    panda$core$String* $tmp5301 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5300 = $tmp5301;
    panda$core$String* $tmp5303 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5302 = $tmp5303;
    panda$core$String* $tmp5305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5304, direction5096);
    panda$core$String* $tmp5307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5305, &$s5306);
    panda$core$String* $tmp5308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5307, forwardLabel5300);
    panda$core$String* $tmp5310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5308, &$s5309);
    panda$core$String* $tmp5311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5310, backwardLabel5302);
    panda$core$String* $tmp5313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5311, &$s5312);
    (($fn5314) p_out->$class->vtable[19])(p_out, $tmp5313);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardLabel5300, p_out);
    panda$core$String* $tmp5316 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5315 = $tmp5316;
    panda$core$String* $tmp5317 = panda$core$String$convert$R$panda$core$String(forwardDelta5315);
    panda$core$String* $tmp5319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5317, &$s5318);
    panda$core$String* $tmp5320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5319, numberType4972);
    panda$core$String* $tmp5322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5320, &$s5321);
    panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5322, end5029);
    panda$core$String* $tmp5325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5323, &$s5324);
    panda$core$String* $tmp5326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5325, indexValue5276);
    panda$core$String* $tmp5328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5326, &$s5327);
    (($fn5329) p_out->$class->vtable[19])(p_out, $tmp5328);
    panda$core$String* $tmp5331 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5330 = $tmp5331;
    panda$core$String* $tmp5333 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5332 = $tmp5333;
    panda$core$String* $tmp5335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5334, inclusive5061);
    panda$core$String* $tmp5337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5335, &$s5336);
    panda$core$String* $tmp5338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5337, forwardInclusiveLabel5330);
    panda$core$String* $tmp5340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5338, &$s5339);
    panda$core$String* $tmp5341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5340, forwardExclusiveLabel5332);
    (($fn5342) p_out->$class->vtable[19])(p_out, $tmp5341);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel5330, p_out);
    panda$core$String* $tmp5344 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5343 = $tmp5344;
    panda$core$String* $tmp5345 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest5343);
    panda$core$String* $tmp5347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5345, &$s5346);
    panda$core$String* $tmp5348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5347, numberType4972);
    panda$core$String* $tmp5350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5348, &$s5349);
    panda$core$String* $tmp5351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5350, forwardDelta5315);
    panda$core$String* $tmp5353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5351, &$s5352);
    panda$core$String* $tmp5354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5353, step5047);
    panda$core$String* $tmp5356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5354, &$s5355);
    (($fn5357) p_out->$class->vtable[19])(p_out, $tmp5356);
    panda$core$String* $tmp5359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5358, forwardInclusiveTest5343);
    panda$core$String* $tmp5361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5359, &$s5360);
    panda$core$String* $tmp5362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5361, loopInc5298);
    panda$core$String* $tmp5364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5362, &$s5363);
    panda$core$String* $tmp5365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5364, loopEnd5074);
    panda$core$String* $tmp5367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5365, &$s5366);
    (($fn5368) p_out->$class->vtable[19])(p_out, $tmp5367);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel5332, p_out);
    panda$core$String* $tmp5370 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5369 = $tmp5370;
    panda$core$String* $tmp5371 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest5369);
    panda$core$String* $tmp5373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5371, &$s5372);
    panda$core$String* $tmp5374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5373, numberType4972);
    panda$core$String* $tmp5376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5374, &$s5375);
    panda$core$String* $tmp5377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5376, forwardDelta5315);
    panda$core$String* $tmp5379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5377, &$s5378);
    panda$core$String* $tmp5380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5379, step5047);
    panda$core$String* $tmp5382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5380, &$s5381);
    (($fn5383) p_out->$class->vtable[19])(p_out, $tmp5382);
    panda$core$String* $tmp5385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5384, forwardExclusiveTest5369);
    panda$core$String* $tmp5387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5385, &$s5386);
    panda$core$String* $tmp5388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5387, loopInc5298);
    panda$core$String* $tmp5390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5388, &$s5389);
    panda$core$String* $tmp5391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5390, loopEnd5074);
    panda$core$String* $tmp5393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5391, &$s5392);
    (($fn5394) p_out->$class->vtable[19])(p_out, $tmp5393);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardLabel5302, p_out);
    panda$core$String* $tmp5396 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5395 = $tmp5396;
    panda$core$String* $tmp5397 = panda$core$String$convert$R$panda$core$String(backwardDelta5395);
    panda$core$String* $tmp5399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5397, &$s5398);
    panda$core$String* $tmp5400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5399, numberType4972);
    panda$core$String* $tmp5402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5400, &$s5401);
    panda$core$String* $tmp5403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5402, indexValue5276);
    panda$core$String* $tmp5405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5403, &$s5404);
    panda$core$String* $tmp5406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5405, end5029);
    panda$core$String* $tmp5408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5406, &$s5407);
    (($fn5409) p_out->$class->vtable[19])(p_out, $tmp5408);
    panda$core$String* $tmp5411 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5410 = $tmp5411;
    panda$core$String* $tmp5412 = panda$core$String$convert$R$panda$core$String(negStep5410);
    panda$core$String* $tmp5414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5412, &$s5413);
    panda$core$String* $tmp5415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5414, numberType4972);
    panda$core$String* $tmp5417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5415, &$s5416);
    panda$core$String* $tmp5418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5417, step5047);
    panda$core$String* $tmp5420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5418, &$s5419);
    (($fn5421) p_out->$class->vtable[19])(p_out, $tmp5420);
    panda$core$String* $tmp5423 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5422 = $tmp5423;
    panda$core$String* $tmp5425 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5424 = $tmp5425;
    panda$core$String* $tmp5427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5426, inclusive5061);
    panda$core$String* $tmp5429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5427, &$s5428);
    panda$core$String* $tmp5430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5429, backwardInclusiveLabel5422);
    panda$core$String* $tmp5432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5430, &$s5431);
    panda$core$String* $tmp5433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5432, backwardExclusiveLabel5424);
    (($fn5434) p_out->$class->vtable[19])(p_out, $tmp5433);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardInclusiveLabel5422, p_out);
    panda$core$String* $tmp5436 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5435 = $tmp5436;
    panda$core$String* $tmp5437 = panda$core$String$convert$R$panda$core$String(backwardInclusiveTest5435);
    panda$core$String* $tmp5439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5437, &$s5438);
    panda$core$String* $tmp5440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5439, numberType4972);
    panda$core$String* $tmp5442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5440, &$s5441);
    panda$core$String* $tmp5443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5442, backwardDelta5395);
    panda$core$String* $tmp5445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5443, &$s5444);
    panda$core$String* $tmp5446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5445, negStep5410);
    (($fn5447) p_out->$class->vtable[19])(p_out, $tmp5446);
    panda$core$String* $tmp5449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5448, backwardInclusiveTest5435);
    panda$core$String* $tmp5451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5449, &$s5450);
    panda$core$String* $tmp5452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5451, loopInc5298);
    panda$core$String* $tmp5454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5452, &$s5453);
    panda$core$String* $tmp5455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5454, loopEnd5074);
    panda$core$String* $tmp5457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5455, &$s5456);
    (($fn5458) p_out->$class->vtable[19])(p_out, $tmp5457);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardExclusiveLabel5424, p_out);
    panda$core$String* $tmp5460 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5459 = $tmp5460;
    panda$core$String* $tmp5461 = panda$core$String$convert$R$panda$core$String(backwardExclusiveTest5459);
    panda$core$String* $tmp5463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5461, &$s5462);
    panda$core$String* $tmp5464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5463, numberType4972);
    panda$core$String* $tmp5466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5464, &$s5465);
    panda$core$String* $tmp5467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5466, backwardDelta5395);
    panda$core$String* $tmp5469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5467, &$s5468);
    panda$core$String* $tmp5470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5469, negStep5410);
    (($fn5471) p_out->$class->vtable[19])(p_out, $tmp5470);
    panda$core$String* $tmp5473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5472, backwardExclusiveTest5459);
    panda$core$String* $tmp5475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5473, &$s5474);
    panda$core$String* $tmp5476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5475, loopInc5298);
    panda$core$String* $tmp5478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5476, &$s5477);
    panda$core$String* $tmp5479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5478, loopEnd5074);
    panda$core$String* $tmp5481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5479, &$s5480);
    (($fn5482) p_out->$class->vtable[19])(p_out, $tmp5481);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc5298, p_out);
    panda$core$String* $tmp5484 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5483 = $tmp5484;
    panda$core$String* $tmp5485 = panda$core$String$convert$R$panda$core$String(inc5483);
    panda$core$String* $tmp5487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5485, &$s5486);
    panda$core$String* $tmp5488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5487, numberType4972);
    panda$core$String* $tmp5490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5488, &$s5489);
    panda$core$String* $tmp5491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5490, indexValue5276);
    panda$core$String* $tmp5493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5491, &$s5492);
    panda$core$String* $tmp5494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5493, step5047);
    panda$core$String* $tmp5496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5494, &$s5495);
    (($fn5497) p_out->$class->vtable[19])(p_out, $tmp5496);
    panda$core$String* $tmp5499 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5498 = $tmp5499;
    panda$core$String* $tmp5500 = panda$core$String$convert$R$panda$core$String(incStruct5498);
    panda$core$String* $tmp5502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5500, &$s5501);
    panda$core$String* $tmp5503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5502, indexType4958);
    panda$core$String* $tmp5505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5503, &$s5504);
    panda$core$String* $tmp5506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5505, numberType4972);
    panda$core$String* $tmp5508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5506, &$s5507);
    (($fn5509) p_out->$class->vtable[19])(p_out, $tmp5508);
    panda$core$String* $tmp5511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5510, numberType4972);
    panda$core$String* $tmp5513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5511, &$s5512);
    panda$core$String* $tmp5514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5513, inc5483);
    panda$core$String* $tmp5516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5514, &$s5515);
    (($fn5517) p_out->$class->vtable[19])(p_out, $tmp5516);
    panda$core$String* $tmp5519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5518, indexType4958);
    panda$core$String* $tmp5521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5519, &$s5520);
    panda$core$String* $tmp5522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5521, incStruct5498);
    panda$core$String* $tmp5524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5522, &$s5523);
    panda$core$String* $tmp5525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5524, indexType4958);
    panda$core$String* $tmp5527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5525, &$s5526);
    panda$core$String* $tmp5528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5527, index4980);
    panda$core$String* $tmp5530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5528, &$s5529);
    (($fn5531) p_out->$class->vtable[19])(p_out, $tmp5530);
    panda$core$String* $tmp5533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5532, loopStart5070);
    panda$core$String* $tmp5535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5533, &$s5534);
    (($fn5536) p_out->$class->vtable[19])(p_out, $tmp5535);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5074, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    panda$core$Object* $tmp5537 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5538 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5537)->type);
    if ($tmp5538.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5540 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5539)->type);
    if ($tmp5540.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_f, p_out);
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5547;
    panda$core$String* loopBody5549;
    panda$core$String* loopEnd5551;
    panda$core$String* test5560;
    panda$core$String* testBit5563;
    panda$core$Bit $tmp5541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5541.value);
    panda$core$Int64 $tmp5542 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5542, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5543.value);
    panda$core$Object* $tmp5544 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
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
    (($fn5559) p_out->$class->vtable[19])(p_out, $tmp5558);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5547, p_out);
    panda$core$Object* $tmp5561 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5562 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5561), p_out);
    test5560 = $tmp5562;
    panda$core$String* $tmp5564 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5563 = $tmp5564;
    panda$core$String* $tmp5565 = panda$core$String$convert$R$panda$core$String(testBit5563);
    panda$core$String* $tmp5567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5565, &$s5566);
    panda$core$String* $tmp5568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5567, test5560);
    panda$core$String* $tmp5570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5568, &$s5569);
    (($fn5571) p_out->$class->vtable[19])(p_out, $tmp5570);
    panda$core$String* $tmp5573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5572, testBit5563);
    panda$core$String* $tmp5575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5573, &$s5574);
    panda$core$String* $tmp5576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5575, loopBody5549);
    panda$core$String* $tmp5578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5576, &$s5577);
    panda$core$String* $tmp5579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5578, loopEnd5551);
    panda$core$String* $tmp5581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5579, &$s5580);
    (($fn5582) p_out->$class->vtable[19])(p_out, $tmp5581);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5549, p_out);
    panda$core$Object* $tmp5583 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5583), p_out);
    panda$core$Object* $tmp5584 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5585 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5584));
    panda$core$Bit $tmp5586 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5585);
    if ($tmp5586.value) {
    {
        panda$core$String* $tmp5588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5587, loopStart5547);
        panda$core$String* $tmp5590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5588, &$s5589);
        (($fn5591) p_out->$class->vtable[19])(p_out, $tmp5590);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5551, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5598;
    panda$core$String* loopBody5600;
    panda$core$String* loopEnd5602;
    panda$core$String* test5611;
    panda$core$String* testBit5614;
    panda$core$Bit $tmp5592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5592.value);
    panda$core$Int64 $tmp5593 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5593, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5594.value);
    panda$core$Object* $tmp5595 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5596 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5597 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5595)->type, $tmp5596);
    PANDA_ASSERT($tmp5597.value);
    panda$core$String* $tmp5599 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5598 = $tmp5599;
    panda$core$String* $tmp5601 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5600 = $tmp5601;
    panda$core$String* $tmp5603 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5602 = $tmp5603;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5604 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5604->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5604->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5604, ((panda$core$String*) p_d->payload), loopEnd5602, loopStart5598);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5604));
    panda$core$String* $tmp5607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5606, loopBody5600);
    panda$core$String* $tmp5609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5607, &$s5608);
    (($fn5610) p_out->$class->vtable[19])(p_out, $tmp5609);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5598, p_out);
    panda$core$Object* $tmp5612 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5613 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5612), p_out);
    test5611 = $tmp5613;
    panda$core$String* $tmp5615 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5614 = $tmp5615;
    panda$core$String* $tmp5616 = panda$core$String$convert$R$panda$core$String(testBit5614);
    panda$core$String* $tmp5618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5616, &$s5617);
    panda$core$String* $tmp5619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5618, test5611);
    panda$core$String* $tmp5621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5619, &$s5620);
    (($fn5622) p_out->$class->vtable[19])(p_out, $tmp5621);
    panda$core$String* $tmp5624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5623, testBit5614);
    panda$core$String* $tmp5626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5624, &$s5625);
    panda$core$String* $tmp5627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5626, loopBody5600);
    panda$core$String* $tmp5629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5627, &$s5628);
    panda$core$String* $tmp5630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5629, loopEnd5602);
    panda$core$String* $tmp5632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5630, &$s5631);
    (($fn5633) p_out->$class->vtable[19])(p_out, $tmp5632);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5600, p_out);
    panda$core$Object* $tmp5634 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5634), p_out);
    panda$core$Object* $tmp5635 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5636 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5635));
    panda$core$Bit $tmp5637 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5636);
    if ($tmp5637.value) {
    {
        panda$core$String* $tmp5639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5638, loopStart5598);
        panda$core$String* $tmp5641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5639, &$s5640);
        (($fn5642) p_out->$class->vtable[19])(p_out, $tmp5641);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5602, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5646;
    panda$core$String* loopEnd5648;
    panda$core$Bit $tmp5643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5643.value);
    panda$core$Int64 $tmp5644 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5644, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5645.value);
    panda$core$String* $tmp5647 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5646 = $tmp5647;
    panda$core$String* $tmp5649 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5648 = $tmp5649;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5650 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5650->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5650->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5650, ((panda$core$String*) p_l->payload), loopEnd5648, loopStart5646);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5650));
    panda$core$String* $tmp5653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5652, loopStart5646);
    panda$core$String* $tmp5655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5653, &$s5654);
    (($fn5656) p_out->$class->vtable[19])(p_out, $tmp5655);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5646, p_out);
    panda$core$Object* $tmp5657 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5657), p_out);
    panda$core$Object* $tmp5658 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5659 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5658));
    panda$core$Bit $tmp5660 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5659);
    if ($tmp5660.value) {
    {
        panda$core$String* $tmp5662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5661, loopStart5646);
        panda$core$String* $tmp5664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5662, &$s5663);
        (($fn5665) p_out->$class->vtable[19])(p_out, $tmp5664);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5648, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5666;
    panda$core$String* ref5676;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5666 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5667 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5666);
            panda$core$String* $tmp5668 = panda$core$String$convert$R$panda$core$String($tmp5667);
            panda$core$String* $tmp5670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5668, &$s5669);
            panda$core$String* $tmp5671 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5666->type);
            panda$core$String* $tmp5672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5670, $tmp5671);
            panda$core$String* $tmp5674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5672, &$s5673);
            (($fn5675) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5674);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5677 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_value, p_out);
                ref5676 = $tmp5677;
                panda$core$String* $tmp5679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5678, ref5676);
                panda$core$String* $tmp5681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5679, &$s5680);
                panda$core$String* $tmp5682 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5666->type);
                panda$core$String* $tmp5683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5681, $tmp5682);
                panda$core$String* $tmp5685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5683, &$s5684);
                panda$core$String* $tmp5686 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5666);
                panda$core$String* $tmp5687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5685, $tmp5686);
                panda$core$String* $tmp5689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5687, &$s5688);
                (($fn5690) p_out->$class->vtable[19])(p_out, $tmp5689);
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
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_v, panda$io$OutputStream* p_out) {
    panda$collections$Iterator* decl$Iter5704;
    org$pandalanguage$pandac$IRNode* decl5716;
    panda$core$Bit $tmp5694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5693 = $tmp5694.value;
    if ($tmp5693) goto $l5695;
    panda$core$Bit $tmp5696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5693 = $tmp5696.value;
    $l5695:;
    panda$core$Bit $tmp5697 = { $tmp5693 };
    bool $tmp5692 = $tmp5697.value;
    if ($tmp5692) goto $l5698;
    panda$core$Bit $tmp5699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5692 = $tmp5699.value;
    $l5698:;
    panda$core$Bit $tmp5700 = { $tmp5692 };
    bool $tmp5691 = $tmp5700.value;
    if ($tmp5691) goto $l5701;
    panda$core$Bit $tmp5702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5691 = $tmp5702.value;
    $l5701:;
    panda$core$Bit $tmp5703 = { $tmp5691 };
    PANDA_ASSERT($tmp5703.value);
    {
        ITable* $tmp5705 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5705->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5705 = $tmp5705->next;
        }
        $fn5707 $tmp5706 = $tmp5705->methods[0];
        panda$collections$Iterator* $tmp5708 = $tmp5706(((panda$collections$Iterable*) p_v->children));
        decl$Iter5704 = $tmp5708;
        $l5709:;
        ITable* $tmp5711 = decl$Iter5704->$class->itable;
        while ($tmp5711->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5711 = $tmp5711->next;
        }
        $fn5713 $tmp5712 = $tmp5711->methods[0];
        panda$core$Bit $tmp5714 = $tmp5712(decl$Iter5704);
        panda$core$Bit $tmp5715 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5714);
        if (!$tmp5715.value) goto $l5710;
        {
            ITable* $tmp5717 = decl$Iter5704->$class->itable;
            while ($tmp5717->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5717 = $tmp5717->next;
            }
            $fn5719 $tmp5718 = $tmp5717->methods[1];
            panda$core$Object* $tmp5720 = $tmp5718(decl$Iter5704);
            decl5716 = ((org$pandalanguage$pandac$IRNode*) $tmp5720);
            panda$core$Bit $tmp5721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5716->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5721.value);
            panda$core$Int64 $tmp5722 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl5716->children);
            panda$core$Bit $tmp5723 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5722, ((panda$core$Int64) { 1 }));
            if ($tmp5723.value) {
            {
                panda$core$Object* $tmp5724 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5716->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5725 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5716->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5724), ((org$pandalanguage$pandac$IRNode*) $tmp5725), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5726 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5716->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5726), NULL, p_out);
            }
            }
        }
        goto $l5709;
        $l5710:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$OutputStream* p_out) {
    panda$core$String* base5730;
    panda$core$String* raw5733;
    org$pandalanguage$pandac$ClassDecl* cl5735;
    org$pandalanguage$pandac$FieldDecl* f5738;
    panda$collections$ListView* fields5739;
    panda$core$Int64 index5741;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5742;
    panda$core$String* result5799;
    panda$core$String* result5812;
    panda$core$String* reused5815;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5727 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5728 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp5727, p_out);
            return $tmp5728;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5729 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5729;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5731 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5732 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5731), p_out);
            base5730 = $tmp5732;
            panda$core$String* $tmp5734 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            raw5733 = $tmp5734;
            panda$core$Object* $tmp5736 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5737 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5736)->type);
            cl5735 = $tmp5737;
            PANDA_ASSERT(((panda$core$Bit) { cl5735 != NULL }).value);
            f5738 = ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload);
            panda$collections$ListView* $tmp5740 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5735);
            fields5739 = $tmp5740;
            index5741 = ((panda$core$Int64) { -1 });
            ITable* $tmp5743 = ((panda$collections$CollectionView*) fields5739)->$class->itable;
            while ($tmp5743->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5743 = $tmp5743->next;
            }
            $fn5745 $tmp5744 = $tmp5743->methods[0];
            panda$core$Int64 $tmp5746 = $tmp5744(((panda$collections$CollectionView*) fields5739));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5742, ((panda$core$Int64) { 0 }), $tmp5746, ((panda$core$Bit) { false }));
            int64_t $tmp5748 = $tmp5742.min.value;
            panda$core$Int64 i5747 = { $tmp5748 };
            int64_t $tmp5750 = $tmp5742.max.value;
            bool $tmp5751 = $tmp5742.inclusive.value;
            if ($tmp5751) goto $l5758; else goto $l5759;
            $l5758:;
            if ($tmp5748 <= $tmp5750) goto $l5752; else goto $l5754;
            $l5759:;
            if ($tmp5748 < $tmp5750) goto $l5752; else goto $l5754;
            $l5752:;
            {
                ITable* $tmp5760 = fields5739->$class->itable;
                while ($tmp5760->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5760 = $tmp5760->next;
                }
                $fn5762 $tmp5761 = $tmp5760->methods[0];
                panda$core$Object* $tmp5763 = $tmp5761(fields5739, i5747);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5763))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) f5738)->name) }).value) {
                {
                    index5741 = i5747;
                    goto $l5754;
                }
                }
            }
            $l5755:;
            int64_t $tmp5765 = $tmp5750 - i5747.value;
            if ($tmp5751) goto $l5766; else goto $l5767;
            $l5766:;
            if ($tmp5765 >= 1) goto $l5764; else goto $l5754;
            $l5767:;
            if ($tmp5765 > 1) goto $l5764; else goto $l5754;
            $l5764:;
            i5747.value += 1;
            goto $l5752;
            $l5754:;
            panda$core$Bit $tmp5770 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5741, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5770.value);
            panda$core$String* $tmp5771 = panda$core$String$convert$R$panda$core$String(raw5733);
            panda$core$String* $tmp5773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5771, &$s5772);
            org$pandalanguage$pandac$Type* $tmp5774 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5735);
            panda$core$String* $tmp5775 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5774);
            panda$core$String* $tmp5776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5773, $tmp5775);
            panda$core$String* $tmp5778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5776, &$s5777);
            org$pandalanguage$pandac$Type* $tmp5779 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5735);
            panda$core$String* $tmp5780 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5779);
            panda$core$String* $tmp5781 = panda$core$String$convert$R$panda$core$String($tmp5780);
            panda$core$String* $tmp5783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5781, &$s5782);
            panda$core$String* $tmp5784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5783, base5730);
            panda$core$String* $tmp5786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5784, &$s5785);
            panda$core$String* $tmp5787 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5786, ((panda$core$Object*) wrap_panda$core$Int64(index5741)));
            panda$core$String* $tmp5789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5787, &$s5788);
            panda$core$String* $tmp5790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5778, $tmp5789);
            (($fn5791) p_out->$class->vtable[19])(p_out, $tmp5790);
            panda$core$Bit $tmp5793 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f5738->type);
            panda$core$Bit $tmp5794 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5793);
            bool $tmp5792 = $tmp5794.value;
            if ($tmp5792) goto $l5795;
            org$pandalanguage$pandac$ClassDecl* $tmp5796 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f5738->type);
            panda$core$Bit $tmp5797 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp5796);
            $tmp5792 = $tmp5797.value;
            $l5795:;
            panda$core$Bit $tmp5798 = { $tmp5792 };
            if ($tmp5798.value) {
            {
                return raw5733;
            }
            }
            panda$core$String* $tmp5800 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result5799 = $tmp5800;
            panda$core$String* $tmp5801 = panda$core$String$convert$R$panda$core$String(result5799);
            panda$core$String* $tmp5803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5801, &$s5802);
            panda$core$String* $tmp5804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5803, raw5733);
            panda$core$String* $tmp5806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5804, &$s5805);
            panda$core$String* $tmp5807 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5806, $tmp5807);
            panda$core$String* $tmp5810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5808, &$s5809);
            (($fn5811) p_out->$class->vtable[19])(p_out, $tmp5810);
            return result5799;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5813 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5814 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5813), p_out);
            result5812 = $tmp5814;
            panda$core$String* $tmp5816 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5815 = $tmp5816;
            panda$core$String* $tmp5817 = panda$core$String$convert$R$panda$core$String(reused5815);
            panda$core$String* $tmp5819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5817, &$s5818);
            panda$core$String* $tmp5820 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5819, $tmp5820);
            panda$core$String* $tmp5823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5821, &$s5822);
            panda$core$String* $tmp5824 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5825 = panda$core$String$convert$R$panda$core$String($tmp5824);
            panda$core$String* $tmp5827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5825, &$s5826);
            panda$core$String* $tmp5828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5827, result5812);
            panda$core$String* $tmp5830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5828, &$s5829);
            panda$core$String* $tmp5831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5823, $tmp5830);
            (($fn5832) p_out->$class->vtable[19])(p_out, $tmp5831);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5815));
            return result5812;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* lvalue5836;
    panda$core$String* value5847;
    panda$core$String* t5848;
    panda$core$Int64 op5851;
    panda$core$String* right5853;
    panda$core$Bit $tmp5833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5833.value);
    panda$core$Int64 $tmp5834 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5834, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5835.value);
    panda$core$Object* $tmp5837 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5838 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5837)->type);
    panda$core$String* $tmp5839 = panda$core$String$convert$R$panda$core$String($tmp5838);
    panda$core$String* $tmp5841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5839, &$s5840);
    panda$core$Object* $tmp5842 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5843 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5842), p_out);
    panda$core$String* $tmp5844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5841, $tmp5843);
    panda$core$String* $tmp5846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5844, &$s5845);
    lvalue5836 = $tmp5846;
    panda$core$Object* $tmp5849 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5850 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5849)->type);
    t5848 = $tmp5850;
    op5851 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5851, ((panda$core$Int64) { 73 }));
    if ($tmp5852.value) {
    {
        panda$core$Object* $tmp5854 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5855 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5854), p_out);
        right5853 = $tmp5855;
        panda$core$String* $tmp5856 = panda$core$String$convert$R$panda$core$String(t5848);
        panda$core$String* $tmp5858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5856, &$s5857);
        panda$core$String* $tmp5859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5858, right5853);
        panda$core$String* $tmp5861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5859, &$s5860);
        value5847 = $tmp5861;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5862, value5847);
    panda$core$String* $tmp5865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5863, &$s5864);
    panda$core$String* $tmp5866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5865, lvalue5836);
    panda$core$String* $tmp5868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5866, &$s5867);
    (($fn5869) p_out->$class->vtable[19])(p_out, $tmp5868);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5879;
    panda$core$String* result5881;
    bool $tmp5870 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp5870) goto $l5871;
    panda$core$Int64 $tmp5872 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5873 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5872, ((panda$core$Int64) { 0 }));
    $tmp5870 = $tmp5873.value;
    $l5871:;
    panda$core$Bit $tmp5874 = { $tmp5870 };
    if ($tmp5874.value) {
    {
        panda$core$Int64 $tmp5875 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5875, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp5876.value);
        panda$core$Int64 $tmp5877 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5878 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5877, ((panda$core$Int64) { 0 }));
        if ($tmp5878.value) {
        {
            panda$core$Object* $tmp5880 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5879 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5880);
            panda$core$Object* $tmp5882 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5883 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5882), p_out);
            result5881 = $tmp5883;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5884 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5884->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5884->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5884, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5881));
            panda$collections$Array$add$panda$collections$Array$T(inline5879->returns, ((panda$core$Object*) $tmp5884));
            panda$core$String* $tmp5887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5886, inline5879->exitLabel);
            panda$core$String* $tmp5889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5887, &$s5888);
            (($fn5890) p_out->$class->vtable[19])(p_out, $tmp5889);
        }
        }
        else {
        {
            panda$core$Object* $tmp5892 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5893 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5892), p_out);
            panda$core$String* $tmp5894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5891, $tmp5893);
            panda$core$String* $tmp5896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5894, &$s5895);
            (($fn5897) p_out->$class->vtable[19])(p_out, $tmp5896);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5898 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5899 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5898, ((panda$core$Int64) { 0 }));
        if ($tmp5899.value) {
        {
            panda$core$Object* $tmp5901 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5900, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5901)->exitLabel);
            panda$core$String* $tmp5904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5902, &$s5903);
            (($fn5905) p_out->$class->vtable[19])(p_out, $tmp5904);
        }
        }
        else {
        {
            (($fn5907) p_out->$class->vtable[19])(p_out, &$s5906);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5911;
    panda$core$Int64 $tmp5908 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5909 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5908, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5909.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5910 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5910);
    }
    }
    panda$core$Int64 $tmp5912 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5911, ((panda$core$Int64) { 0 }), $tmp5912, ((panda$core$Bit) { false }));
    int64_t $tmp5914 = $tmp5911.min.value;
    panda$core$Int64 i5913 = { $tmp5914 };
    int64_t $tmp5916 = $tmp5911.max.value;
    bool $tmp5917 = $tmp5911.inclusive.value;
    if ($tmp5917) goto $l5924; else goto $l5925;
    $l5924:;
    if ($tmp5914 <= $tmp5916) goto $l5918; else goto $l5920;
    $l5925:;
    if ($tmp5914 < $tmp5916) goto $l5918; else goto $l5920;
    $l5918:;
    {
        panda$core$Object* $tmp5927 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5913);
        bool $tmp5926 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5927)->loopLabel != NULL }).value;
        if (!$tmp5926) goto $l5928;
        panda$core$Object* $tmp5929 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5913);
        panda$core$Bit $tmp5933;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5929)->loopLabel != NULL }).value) goto $l5930; else goto $l5931;
        $l5930:;
        panda$core$Bit $tmp5934 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5929)->loopLabel, p_name);
        $tmp5933 = $tmp5934;
        goto $l5932;
        $l5931:;
        $tmp5933 = ((panda$core$Bit) { false });
        goto $l5932;
        $l5932:;
        $tmp5926 = $tmp5933.value;
        $l5928:;
        panda$core$Bit $tmp5935 = { $tmp5926 };
        if ($tmp5935.value) {
        {
            panda$core$Object* $tmp5936 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5913);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5936);
        }
        }
    }
    $l5921:;
    int64_t $tmp5938 = $tmp5916 - i5913.value;
    if ($tmp5917) goto $l5939; else goto $l5940;
    $l5939:;
    if ($tmp5938 >= 1) goto $l5937; else goto $l5920;
    $l5940:;
    if ($tmp5938 > 1) goto $l5937; else goto $l5920;
    $l5937:;
    i5913.value += 1;
    goto $l5918;
    $l5920:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5943;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5944 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5943 = $tmp5944;
    panda$core$String* $tmp5946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5945, desc5943->breakLabel);
    panda$core$String* $tmp5948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5946, &$s5947);
    (($fn5949) p_out->$class->vtable[19])(p_out, $tmp5948);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5950;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5951 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5950 = $tmp5951;
    panda$core$String* $tmp5953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5952, desc5950->continueLabel);
    panda$core$String* $tmp5955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5953, &$s5954);
    (($fn5956) p_out->$class->vtable[19])(p_out, $tmp5955);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* test5966;
    panda$core$String* ifTrue5969;
    panda$core$String* ifFalse5971;
    panda$core$String* name5984;
    panda$core$String* path5985;
    panda$core$String$Index$nullable index5987;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5990;
    panda$core$String* nameRef5992;
    panda$core$String* line5994;
    panda$core$String* msg5999;
    panda$collections$Iterator* m$Iter6006;
    org$pandalanguage$pandac$MethodDecl* m6020;
    panda$core$Bit $tmp5957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5957.value);
    panda$core$Int64 $tmp5959 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5959, ((panda$core$Int64) { 1 }));
    bool $tmp5958 = $tmp5960.value;
    if ($tmp5958) goto $l5961;
    panda$core$Int64 $tmp5962 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5962, ((panda$core$Int64) { 2 }));
    $tmp5958 = $tmp5963.value;
    $l5961:;
    panda$core$Bit $tmp5964 = { $tmp5958 };
    PANDA_ASSERT($tmp5964.value);
    panda$core$Bit $tmp5965 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5965.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5967 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5968 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5967), p_out);
    test5966 = $tmp5968;
    panda$core$String* $tmp5970 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5969 = $tmp5970;
    panda$core$String* $tmp5972 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5971 = $tmp5972;
    panda$core$String* $tmp5974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5973, test5966);
    panda$core$String* $tmp5976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5974, &$s5975);
    panda$core$String* $tmp5977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5976, ifTrue5969);
    panda$core$String* $tmp5979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5977, &$s5978);
    panda$core$String* $tmp5980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5979, ifFalse5971);
    panda$core$String* $tmp5982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5980, &$s5981);
    (($fn5983) p_out->$class->vtable[19])(p_out, $tmp5982);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse5971, p_out);
    panda$core$Object* $tmp5986 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path5985 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5986)->source->path;
    panda$core$String$Index$nullable $tmp5989 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path5985, &$s5988);
    index5987 = $tmp5989;
    if (((panda$core$Bit) { !index5987.nonnull }).value) {
    {
        name5984 = path5985;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp5990, index5987, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5991 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path5985, $tmp5990);
        name5984 = $tmp5991;
    }
    }
    panda$core$String* $tmp5993 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, name5984, p_out);
    nameRef5992 = $tmp5993;
    panda$core$String* $tmp5996 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5995, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp5998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5996, &$s5997);
    line5994 = $tmp5998;
    panda$core$Int64 $tmp6000 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6000, ((panda$core$Int64) { 2 }));
    if ($tmp6001.value) {
    {
        panda$core$Object* $tmp6002 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp6003 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6002), p_out);
        msg5999 = $tmp6003;
    }
    }
    else {
    {
        msg5999 = NULL;
    }
    }
    (($fn6005) p_out->$class->vtable[16])(p_out, &$s6004);
    {
        org$pandalanguage$pandac$Type* $tmp6007 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp6008 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp6007);
        ITable* $tmp6009 = ((panda$collections$Iterable*) $tmp6008->methods)->$class->itable;
        while ($tmp6009->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6009 = $tmp6009->next;
        }
        $fn6011 $tmp6010 = $tmp6009->methods[0];
        panda$collections$Iterator* $tmp6012 = $tmp6010(((panda$collections$Iterable*) $tmp6008->methods));
        m$Iter6006 = $tmp6012;
        $l6013:;
        ITable* $tmp6015 = m$Iter6006->$class->itable;
        while ($tmp6015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6015 = $tmp6015->next;
        }
        $fn6017 $tmp6016 = $tmp6015->methods[0];
        panda$core$Bit $tmp6018 = $tmp6016(m$Iter6006);
        panda$core$Bit $tmp6019 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6018);
        if (!$tmp6019.value) goto $l6014;
        {
            ITable* $tmp6021 = m$Iter6006->$class->itable;
            while ($tmp6021->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6021 = $tmp6021->next;
            }
            $fn6023 $tmp6022 = $tmp6021->methods[1];
            panda$core$Object* $tmp6024 = $tmp6022(m$Iter6006);
            m6020 = ((org$pandalanguage$pandac$MethodDecl*) $tmp6024);
            panda$core$Bit $tmp6026 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m6020)->name, &$s6025);
            if ($tmp6026.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m6020);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m6020);
            }
            }
        }
        goto $l6013;
        $l6014:;
    }
    if (((panda$core$Bit) { msg5999 != NULL }).value) {
    {
        panda$core$String* $tmp6029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6027, &$s6028);
        (($fn6030) p_out->$class->vtable[16])(p_out, $tmp6029);
    }
    }
    else {
    {
        (($fn6032) p_out->$class->vtable[16])(p_out, &$s6031);
    }
    }
    panda$core$String* $tmp6034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6033, nameRef5992);
    panda$core$String* $tmp6036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6034, &$s6035);
    panda$core$String* $tmp6037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6036, line5994);
    panda$core$String* $tmp6039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6037, &$s6038);
    (($fn6040) p_out->$class->vtable[16])(p_out, $tmp6039);
    if (((panda$core$Bit) { msg5999 != NULL }).value) {
    {
        panda$core$String* $tmp6042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6041, msg5999);
        panda$core$String* $tmp6044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6042, &$s6043);
        (($fn6045) p_out->$class->vtable[16])(p_out, $tmp6044);
    }
    }
    (($fn6047) p_out->$class->vtable[19])(p_out, &$s6046);
    (($fn6049) p_out->$class->vtable[19])(p_out, &$s6048);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue5969, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$OutputStream* p_out) {
    panda$core$String* valueStruct6051;
    org$pandalanguage$pandac$ClassDecl* numberClass6054;
    panda$core$String* value6057;
    org$pandalanguage$pandac$FieldDecl* f6066;
    panda$core$String* switchType6069;
    panda$core$String* endLabel6079;
    panda$collections$Array* whenLabels6081;
    panda$core$String* otherwiseLabel6084;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6095;
    org$pandalanguage$pandac$IRNode* w6110;
    panda$core$String* label6114;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6116;
    panda$core$UInt64 number6132;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6160;
    org$pandalanguage$pandac$IRNode* w6175;
    org$pandalanguage$pandac$IRNode* block6177;
    panda$core$Bit $tmp6050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp6050.value);
    panda$core$Object* $tmp6052 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6053 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6052), p_out);
    valueStruct6051 = $tmp6053;
    panda$core$Object* $tmp6055 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp6056 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6055)->type);
    numberClass6054 = $tmp6056;
    panda$core$String* $tmp6058 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value6057 = $tmp6058;
    panda$core$String* $tmp6059 = panda$core$String$convert$R$panda$core$String(value6057);
    panda$core$String* $tmp6061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6059, &$s6060);
    panda$core$String* $tmp6062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6061, valueStruct6051);
    panda$core$String* $tmp6064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6062, &$s6063);
    (($fn6065) p_out->$class->vtable[19])(p_out, $tmp6064);
    org$pandalanguage$pandac$Symbol* $tmp6068 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass6054->symbolTable, &$s6067);
    f6066 = ((org$pandalanguage$pandac$FieldDecl*) $tmp6068);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f6066);
    panda$core$String* $tmp6070 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f6066->type);
    switchType6069 = $tmp6070;
    panda$core$String* $tmp6072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6071, switchType6069);
    panda$core$String* $tmp6074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6072, &$s6073);
    panda$core$String* $tmp6075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6074, value6057);
    panda$core$String* $tmp6077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6075, &$s6076);
    (($fn6078) p_out->$class->vtable[16])(p_out, $tmp6077);
    panda$core$String* $tmp6080 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel6079 = $tmp6080;
    panda$collections$Array* $tmp6082 = (panda$collections$Array*) malloc(40);
    $tmp6082->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp6082->refCount.value = 1;
    panda$collections$Array$init($tmp6082);
    whenLabels6081 = $tmp6082;
    panda$core$Int64 $tmp6085 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp6086 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6085, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp6087 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, $tmp6086);
    panda$core$Bit $tmp6088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp6087)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp6088.value) {
    {
        panda$core$String* $tmp6089 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel6084 = $tmp6089;
    }
    }
    else {
    {
        otherwiseLabel6084 = endLabel6079;
    }
    }
    panda$core$String* $tmp6091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6090, otherwiseLabel6084);
    panda$core$String* $tmp6093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6091, &$s6092);
    (($fn6094) p_out->$class->vtable[19])(p_out, $tmp6093);
    panda$core$Int64 $tmp6096 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6095, ((panda$core$Int64) { 1 }), $tmp6096, ((panda$core$Bit) { false }));
    int64_t $tmp6098 = $tmp6095.min.value;
    panda$core$Int64 i6097 = { $tmp6098 };
    int64_t $tmp6100 = $tmp6095.max.value;
    bool $tmp6101 = $tmp6095.inclusive.value;
    if ($tmp6101) goto $l6108; else goto $l6109;
    $l6108:;
    if ($tmp6098 <= $tmp6100) goto $l6102; else goto $l6104;
    $l6109:;
    if ($tmp6098 < $tmp6100) goto $l6102; else goto $l6104;
    $l6102:;
    {
        panda$core$Object* $tmp6111 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i6097);
        w6110 = ((org$pandalanguage$pandac$IRNode*) $tmp6111);
        panda$core$Bit $tmp6112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6110->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp6112.value) {
        {
            goto $l6105;
        }
        }
        panda$core$Bit $tmp6113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6110->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp6113.value);
        panda$core$String* $tmp6115 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label6114 = $tmp6115;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels6081, ((panda$core$Object*) label6114));
        panda$core$Int64 $tmp6117 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w6110->children);
        panda$core$Int64 $tmp6118 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6117, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6116, ((panda$core$Int64) { 0 }), $tmp6118, ((panda$core$Bit) { false }));
        int64_t $tmp6120 = $tmp6116.min.value;
        panda$core$Int64 i6119 = { $tmp6120 };
        int64_t $tmp6122 = $tmp6116.max.value;
        bool $tmp6123 = $tmp6116.inclusive.value;
        if ($tmp6123) goto $l6130; else goto $l6131;
        $l6130:;
        if ($tmp6120 <= $tmp6122) goto $l6124; else goto $l6126;
        $l6131:;
        if ($tmp6120 < $tmp6122) goto $l6124; else goto $l6126;
        $l6124:;
        {
            panda$core$Object* $tmp6133 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w6110->children, i6119);
            panda$core$UInt64 $tmp6134 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6133));
            number6132 = $tmp6134;
            panda$core$String* $tmp6136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6135, switchType6069);
            panda$core$String* $tmp6138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6136, &$s6137);
            panda$core$String* $tmp6139 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6138, ((panda$core$Object*) wrap_panda$core$UInt64(number6132)));
            panda$core$String* $tmp6141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6139, &$s6140);
            panda$core$String* $tmp6142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6141, label6114);
            panda$core$String* $tmp6144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6142, &$s6143);
            (($fn6145) p_out->$class->vtable[19])(p_out, $tmp6144);
        }
        $l6127:;
        int64_t $tmp6147 = $tmp6122 - i6119.value;
        if ($tmp6123) goto $l6148; else goto $l6149;
        $l6148:;
        if ($tmp6147 >= 1) goto $l6146; else goto $l6126;
        $l6149:;
        if ($tmp6147 > 1) goto $l6146; else goto $l6126;
        $l6146:;
        i6119.value += 1;
        goto $l6124;
        $l6126:;
    }
    $l6105:;
    int64_t $tmp6153 = $tmp6100 - i6097.value;
    if ($tmp6101) goto $l6154; else goto $l6155;
    $l6154:;
    if ($tmp6153 >= 1) goto $l6152; else goto $l6104;
    $l6155:;
    if ($tmp6153 > 1) goto $l6152; else goto $l6104;
    $l6152:;
    i6097.value += 1;
    goto $l6102;
    $l6104:;
    (($fn6159) p_out->$class->vtable[19])(p_out, &$s6158);
    panda$core$Int64 $tmp6161 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6160, ((panda$core$Int64) { 1 }), $tmp6161, ((panda$core$Bit) { false }));
    int64_t $tmp6163 = $tmp6160.min.value;
    panda$core$Int64 i6162 = { $tmp6163 };
    int64_t $tmp6165 = $tmp6160.max.value;
    bool $tmp6166 = $tmp6160.inclusive.value;
    if ($tmp6166) goto $l6173; else goto $l6174;
    $l6173:;
    if ($tmp6163 <= $tmp6165) goto $l6167; else goto $l6169;
    $l6174:;
    if ($tmp6163 < $tmp6165) goto $l6167; else goto $l6169;
    $l6167:;
    {
        panda$core$Object* $tmp6176 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i6162);
        w6175 = ((org$pandalanguage$pandac$IRNode*) $tmp6176);
        panda$core$Int64 $tmp6178 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w6175->children);
        panda$core$Int64 $tmp6179 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6178, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp6180 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w6175->children, $tmp6179);
        block6177 = ((org$pandalanguage$pandac$IRNode*) $tmp6180);
        panda$core$Int64 $tmp6181 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6162, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp6182 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels6081);
        panda$core$Bit $tmp6183 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp6181, $tmp6182);
        if ($tmp6183.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, otherwiseLabel6084, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp6184 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6162, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp6185 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels6081, $tmp6184);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ((panda$core$String*) $tmp6185), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block6177, p_out);
        panda$core$Bit $tmp6186 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block6177);
        panda$core$Bit $tmp6187 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6186);
        if ($tmp6187.value) {
        {
            panda$core$String* $tmp6189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6188, endLabel6079);
            panda$core$String* $tmp6191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6189, &$s6190);
            (($fn6192) p_out->$class->vtable[19])(p_out, $tmp6191);
        }
        }
    }
    $l6170:;
    int64_t $tmp6194 = $tmp6165 - i6162.value;
    if ($tmp6166) goto $l6195; else goto $l6196;
    $l6195:;
    if ($tmp6194 >= 1) goto $l6193; else goto $l6169;
    $l6196:;
    if ($tmp6194 > 1) goto $l6193; else goto $l6169;
    $l6193:;
    i6162.value += 1;
    goto $l6167;
    $l6169:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel6079, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$OutputStream* p_out) {
    switch (p_stmt->kind.value) {
        case 1023:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_stmt, p_out);
        }
        break;
        case 1000:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_stmt, p_out);
        }
        break;
        case 1005:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, p_stmt, NULL, p_out);
        }
        break;
        case 1012:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_stmt, p_out);
        }
        break;
        case 1029:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_stmt, p_out);
        }
        break;
        case 1013:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_stmt, p_out);
        }
        break;
        case 1014:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_stmt, p_out);
        }
        break;
        case 1015:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_stmt, p_out);
        }
        break;
        case 1017:
        case 1018:
        case 1019:
        case 1020:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_stmt, p_out);
        }
        break;
        case 1008:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_stmt, p_out);
        }
        break;
        case 1006:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_stmt, p_out);
        }
        break;
        case 1007:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_stmt, p_out);
        }
        break;
        case 1034:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_stmt, p_out);
        }
        break;
        case 1042:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_stmt, p_out);
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result6199;
    org$pandalanguage$pandac$Type* $tmp6200 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp6201 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6200);
    result6199 = $tmp6201;
    panda$core$Bit $tmp6203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6202 = $tmp6203.value;
    if (!$tmp6202) goto $l6204;
    panda$core$Bit $tmp6206 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6199, &$s6205);
    panda$core$Bit $tmp6207 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6206);
    $tmp6202 = $tmp6207.value;
    $l6204:;
    panda$core$Bit $tmp6208 = { $tmp6202 };
    if ($tmp6208.value) {
    {
        panda$core$String* $tmp6210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6199, &$s6209);
        return $tmp6210;
    }
    }
    return result6199;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6211;
    panda$core$Bit needsIndirection6220;
    panda$core$String* separator6232;
    panda$collections$Iterator* p$Iter6251;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6263;
    panda$core$String* $tmp6212 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6211 = $tmp6212;
    panda$core$Bit $tmp6213 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6211));
    if ($tmp6213.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6211));
    panda$core$String* $tmp6215 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6214, $tmp6215);
    panda$core$String* $tmp6218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6216, &$s6217);
    (($fn6219) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6218);
    panda$core$Bit $tmp6221 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6220 = $tmp6221;
    if (needsIndirection6220.value) {
    {
        (($fn6223) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6222);
    }
    }
    else {
    {
        panda$core$String* $tmp6224 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6225) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6224);
    }
    }
    panda$core$String* $tmp6227 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6226, $tmp6227);
    panda$core$String* $tmp6230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6228, &$s6229);
    (($fn6231) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6230);
    separator6232 = &$s6233;
    if (needsIndirection6220.value) {
    {
        panda$core$String* $tmp6234 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6235 = panda$core$String$convert$R$panda$core$String($tmp6234);
        panda$core$String* $tmp6237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6235, &$s6236);
        (($fn6238) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6237);
        separator6232 = &$s6239;
    }
    }
    panda$core$Bit $tmp6240 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6241 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6240);
    if ($tmp6241.value) {
    {
        panda$core$String* $tmp6242 = panda$core$String$convert$R$panda$core$String(separator6232);
        panda$core$String* $tmp6244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6242, &$s6243);
        panda$core$String* $tmp6245 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6244, $tmp6245);
        panda$core$String* $tmp6248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6246, &$s6247);
        (($fn6249) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6248);
        separator6232 = &$s6250;
    }
    }
    {
        ITable* $tmp6252 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6252->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6252 = $tmp6252->next;
        }
        $fn6254 $tmp6253 = $tmp6252->methods[0];
        panda$collections$Iterator* $tmp6255 = $tmp6253(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6251 = $tmp6255;
        $l6256:;
        ITable* $tmp6258 = p$Iter6251->$class->itable;
        while ($tmp6258->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6258 = $tmp6258->next;
        }
        $fn6260 $tmp6259 = $tmp6258->methods[0];
        panda$core$Bit $tmp6261 = $tmp6259(p$Iter6251);
        panda$core$Bit $tmp6262 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6261);
        if (!$tmp6262.value) goto $l6257;
        {
            ITable* $tmp6264 = p$Iter6251->$class->itable;
            while ($tmp6264->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6264 = $tmp6264->next;
            }
            $fn6266 $tmp6265 = $tmp6264->methods[1];
            panda$core$Object* $tmp6267 = $tmp6265(p$Iter6251);
            p6263 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6267);
            panda$core$String* $tmp6268 = panda$core$String$convert$R$panda$core$String(separator6232);
            panda$core$String* $tmp6270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6268, &$s6269);
            panda$core$String* $tmp6271 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6263->type);
            panda$core$String* $tmp6272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6270, $tmp6271);
            panda$core$String* $tmp6274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6272, &$s6273);
            panda$core$String* $tmp6275 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6263->name);
            panda$core$String* $tmp6276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6274, $tmp6275);
            panda$core$String* $tmp6278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6276, &$s6277);
            (($fn6279) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6278);
            separator6232 = &$s6280;
        }
        goto $l6256;
        $l6257:;
    }
    (($fn6282) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6281);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6305;
    panda$collections$Iterator* p$Iter6315;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6327;
    panda$io$MemoryOutputStream* bodyBuffer6348;
    panda$collections$Iterator* s$Iter6351;
    org$pandalanguage$pandac$IRNode* s6363;
    panda$core$Object* $tmp6283 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6283)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6284;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$io$MemoryOutputStream* $tmp6285 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6285->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6285->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6285);
    self->methodHeader = $tmp6285;
    (($fn6288) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6287);
    panda$core$Bit $tmp6289 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6289.value) {
    {
        (($fn6291) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6290);
    }
    }
    panda$core$String* $tmp6292 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6293 = panda$core$String$convert$R$panda$core$String($tmp6292);
    panda$core$String* $tmp6295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6293, &$s6294);
    panda$core$String* $tmp6296 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6295, $tmp6296);
    panda$core$String* $tmp6299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6297, &$s6298);
    panda$core$String* $tmp6300 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6299, $tmp6300);
    panda$core$String* $tmp6303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6301, &$s6302);
    (($fn6304) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6303);
    separator6305 = &$s6306;
    panda$core$Bit $tmp6307 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6308 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6307);
    if ($tmp6308.value) {
    {
        panda$core$String* $tmp6309 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6310 = panda$core$String$convert$R$panda$core$String($tmp6309);
        panda$core$String* $tmp6312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6310, &$s6311);
        (($fn6313) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6312);
        separator6305 = &$s6314;
    }
    }
    {
        ITable* $tmp6316 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6316->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6316 = $tmp6316->next;
        }
        $fn6318 $tmp6317 = $tmp6316->methods[0];
        panda$collections$Iterator* $tmp6319 = $tmp6317(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6315 = $tmp6319;
        $l6320:;
        ITable* $tmp6322 = p$Iter6315->$class->itable;
        while ($tmp6322->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6322 = $tmp6322->next;
        }
        $fn6324 $tmp6323 = $tmp6322->methods[0];
        panda$core$Bit $tmp6325 = $tmp6323(p$Iter6315);
        panda$core$Bit $tmp6326 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6325);
        if (!$tmp6326.value) goto $l6321;
        {
            ITable* $tmp6328 = p$Iter6315->$class->itable;
            while ($tmp6328->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6328 = $tmp6328->next;
            }
            $fn6330 $tmp6329 = $tmp6328->methods[1];
            panda$core$Object* $tmp6331 = $tmp6329(p$Iter6315);
            p6327 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6331);
            panda$core$String* $tmp6332 = panda$core$String$convert$R$panda$core$String(separator6305);
            panda$core$String* $tmp6334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6332, &$s6333);
            panda$core$String* $tmp6335 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6327->type);
            panda$core$String* $tmp6336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6334, $tmp6335);
            panda$core$String* $tmp6338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6336, &$s6337);
            panda$core$String* $tmp6339 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6327->name);
            panda$core$String* $tmp6340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6338, $tmp6339);
            panda$core$String* $tmp6342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6340, &$s6341);
            (($fn6343) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6342);
            separator6305 = &$s6344;
        }
        goto $l6320;
        $l6321:;
    }
    (($fn6346) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6345);
    panda$core$Bit $tmp6347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6347.value);
    panda$io$MemoryOutputStream* $tmp6349 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6349->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6349->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6349);
    bodyBuffer6348 = $tmp6349;
    {
        ITable* $tmp6352 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6352->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6352 = $tmp6352->next;
        }
        $fn6354 $tmp6353 = $tmp6352->methods[0];
        panda$collections$Iterator* $tmp6355 = $tmp6353(((panda$collections$Iterable*) p_body->children));
        s$Iter6351 = $tmp6355;
        $l6356:;
        ITable* $tmp6358 = s$Iter6351->$class->itable;
        while ($tmp6358->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6358 = $tmp6358->next;
        }
        $fn6360 $tmp6359 = $tmp6358->methods[0];
        panda$core$Bit $tmp6361 = $tmp6359(s$Iter6351);
        panda$core$Bit $tmp6362 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6361);
        if (!$tmp6362.value) goto $l6357;
        {
            ITable* $tmp6364 = s$Iter6351->$class->itable;
            while ($tmp6364->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6364 = $tmp6364->next;
            }
            $fn6366 $tmp6365 = $tmp6364->methods[1];
            panda$core$Object* $tmp6367 = $tmp6365(s$Iter6351);
            s6363 = ((org$pandalanguage$pandac$IRNode*) $tmp6367);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s6363, ((panda$io$OutputStream*) bodyBuffer6348));
        }
        goto $l6356;
        $l6357:;
    }
    panda$core$String* $tmp6368 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeader);
    (($fn6369) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6368);
    panda$core$String* $tmp6370 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer6348);
    (($fn6371) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6370);
    panda$core$Bit $tmp6372 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6373 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6372);
    if ($tmp6373.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6374 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6375 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6374);
        if ($tmp6375.value) {
        {
            (($fn6377) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6376);
        }
        }
        else {
        {
            (($fn6379) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6378);
        }
        }
    }
    }
    (($fn6381) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6380);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6382 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6382.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6383 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6383);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

