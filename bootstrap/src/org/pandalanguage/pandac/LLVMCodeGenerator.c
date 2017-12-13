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

org$pandalanguage$pandac$LLVMCodeGenerator$class_type org$pandalanguage$pandac$LLVMCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$finish, org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim, org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT, org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl} };

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
typedef panda$core$Int64 (*$fn2007)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2024)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2047)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2056)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2068)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2091)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2100)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2112)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2122)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2144)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2159)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2174)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2197)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2204)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2233)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2242)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2256)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2271)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2295)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2308)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2320)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2325)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2332)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2349)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2362)(panda$collections$CollectionView*);
typedef void (*$fn2382)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2394)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2457)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2470)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2484)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2509)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2524)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2549)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2561)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2581)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2596)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2612)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2624)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2641)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2658)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2695)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2710)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2745)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2792)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2810)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2816)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2822)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2828)(panda$collections$Iterator*);
typedef void (*$fn2839)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2841)(panda$io$OutputStream*);
typedef void (*$fn2866)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2884)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2986)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2998)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3003)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3016)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3023)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3028)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3034)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3040)(panda$collections$Iterator*);
typedef void (*$fn3048)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3051)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3063)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3086)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3101)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3112)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3133)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3144)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3162)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3198)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3219)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3235)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3251)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3269)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3300)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3317)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3359)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3379)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3396)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3411)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3422)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3450)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3472)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3487)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3502)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3526)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3539)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3616)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3671)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3712)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3726)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3748)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3758)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3771)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3798)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3813)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3846)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3858)(panda$collections$CollectionView*);
typedef void (*$fn3869)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3876)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3882)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3888)(panda$collections$Iterator*);
typedef void (*$fn3897)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3900)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3937)(panda$collections$CollectionView*);
typedef void (*$fn3949)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3972)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3995)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4003)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4020)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4042)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4050)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4059)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4091)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4102)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4145)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4151)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4157)(panda$collections$Iterator*);
typedef void (*$fn4179)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4243)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4264)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4371)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4387)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4404)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4408)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4414)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4420)(panda$collections$Iterator*);
typedef void (*$fn4422)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4423)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4426)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4449)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4464)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4477)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4488)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4524)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4531)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4543)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4552)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4569)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4592)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4601)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4644)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4663)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4674)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4704)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4719)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4726)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4743)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4756)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4768)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4779)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4802)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4814)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4834)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4848)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4853)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4889)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4896)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4908)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4917)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4934)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4948)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4957)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4966)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4980)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4989)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5029)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5041)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5058)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5077)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5088)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5107)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5135)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5154)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5184)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5195)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5210)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5217)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5234)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5262)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5277)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5288)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5303)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5314)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5329)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5341)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5354)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5367)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5378)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5391)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5402)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5417)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5429)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5437)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5451)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5456)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5479)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5491)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5502)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5511)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5530)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5542)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5553)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5562)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5576)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5585)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5595)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5610)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5627)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5633)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5639)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5665)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5682)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5711)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5731)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5752)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5789)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5810)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5817)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5825)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5872)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5899)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5921)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5927)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5933)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5939)(panda$collections$Iterator*);
typedef void (*$fn5946)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5948)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5956)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5961)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5965)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5981)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5994)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6010)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6061)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6075)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6108)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6135)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6139)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6141)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6154)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6165)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6170)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6176)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6182)(panda$collections$Iterator*);
typedef void (*$fn6195)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6198)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6204)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6207)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6220)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6229)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6234)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6240)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6246)(panda$collections$Iterator*);
typedef void (*$fn6259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6262)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6270)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6276)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6282)(panda$collections$Iterator*);
typedef void (*$fn6285)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6287)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6293)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6295)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6297)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x73\x74\x63\x63\x20", 7, 216520157801561, NULL };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, 212767339, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A", 2, 14485, NULL };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, 14834798317007399, NULL };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, 5996012307911795392, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, 19638, NULL };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, -284792955217493296, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, 1445392722364703443, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, 9180175165629405233, NULL };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, 147755760, NULL };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, 1445392722364703444, NULL };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, 2891297979021532403, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 20716344924, NULL };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, -68084191220774643, NULL };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, 212798144, NULL };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 229298558774239, NULL };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, 2946720541906757250, NULL };
static panda$core$String $s2648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, 178709719977385382, NULL };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, 2005081535935103476, NULL };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 146543380183876, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, 22799530931, NULL };
static panda$core$String $s2804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 171978245881277, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 14324499638457470, NULL };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1450073858438092980, NULL };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1983470, NULL };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s3182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s3184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s3191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 25, -6025032490972529456, NULL };
static panda$core$String $s3193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 22, 3938018972516606829, NULL };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, -6901405387198259419, NULL };
static panda$core$String $s3215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, -5055193716233257020, NULL };
static panda$core$String $s3217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, -38380777888947644, NULL };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s3239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1971047, NULL };
static panda$core$String $s3436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, -7594506016420023174, NULL };
static panda$core$String $s3439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 2084875595949565210, NULL };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 22699766057, NULL };
static panda$core$String $s3551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 223587553, NULL };
static panda$core$String $s3552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 230799660, NULL };
static panda$core$String $s3593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 212358244529747, NULL };
static panda$core$String $s3602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s3718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s3724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s3788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s3796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 21489501287, NULL };
static panda$core$String $s3801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 3556234982078979695, NULL };
static panda$core$String $s3803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x69\x38\x2A\x2A\x20", 11, -1701017812076485794, NULL };
static panda$core$String $s3810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s3825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 175539598599330, NULL };
static panda$core$String $s3851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1410364661239, NULL };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, -4682671939848071135, NULL };
static panda$core$String $s3867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s3871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 2107094, NULL };
static panda$core$String $s3895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s3903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 17208241946, NULL };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, -4560911471279777923, NULL };
static panda$core$String $s3915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s3917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 54, -4410989833928586841, NULL };
static panda$core$String $s3925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, -1652634297463438611, NULL };
static panda$core$String $s3927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, -1388553655089279848, NULL };
static panda$core$String $s3940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s3943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s3946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20\x69\x38\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 14, 8437322619071490889, NULL };
static panda$core$String $s3953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 14479861264, NULL };
static panda$core$String $s3959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, 24050909224991147, NULL };
static panda$core$String $s3990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, -1449709338160382639, NULL };
static panda$core$String $s4001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, 149724671, NULL };
static panda$core$String $s4006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s4009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s4015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s4018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 24050909225001348, NULL };
static panda$core$String $s4037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s4048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s4054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s4057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s4069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 2138506394783058478, NULL };
static panda$core$String $s4071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s4082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s4089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 141826750873303, NULL };
static panda$core$String $s4097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 13886901203, NULL };
static panda$core$String $s4100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s4172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s4201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s4218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s4225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 214439158056679, NULL };
static panda$core$String $s4254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s4257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s4260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 2149145203081189652, NULL };
static panda$core$String $s4262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s4332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s4366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s4378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s4538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s4556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s4559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s4570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s4596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s4617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s4624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s4627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s4632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s4641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s4654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s4684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s4711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s4763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s4786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s4809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s4821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s4824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s4827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s4829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s4903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s4921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s4924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s4935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s4961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s4968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s4972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, -8455018733144080751, NULL };
static panda$core$String $s4975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s4978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1527347502952, NULL };
static panda$core$String $s5005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s5007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s5009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s5012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s5015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s5017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s5021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 5640068998409967338, NULL };
static panda$core$String $s5024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 150, NULL };
static panda$core$String $s5031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s5068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s5098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 2091237, NULL };
static panda$core$String $s5145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 2092752, NULL };
static panda$core$String $s5175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s5339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s5409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s5424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s5427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s5430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s5432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s5593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s5697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 5661491935713932202, NULL };
static panda$core$String $s5708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s5725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s5729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s5738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s5815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s5861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s5911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s5913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s5920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x66\x61\x73\x74\x63\x63\x20\x76\x6F\x69\x64\x20", 17, 8605580293215133655, NULL };
static panda$core$String $s5941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1112391861657830585, NULL };
static panda$core$String $s5943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, -3426205430399916046, NULL };
static panda$core$String $s5944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, -6932554582644871757, NULL };
static panda$core$String $s5947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, -418642434149121372, NULL };
static panda$core$String $s5949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, -3066853447063148068, NULL };
static panda$core$String $s5951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 3939743058867758116, NULL };
static panda$core$String $s5959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s5964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s5976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s5987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, 230550101366891, NULL };
static panda$core$String $s5989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s6008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 13524, NULL };
static panda$core$String $s6051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, 14293708514290657, NULL };
static panda$core$String $s6053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s6059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, 13873332722, NULL };
static panda$core$String $s6104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s6106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 21658185952146853, NULL };
static panda$core$String $s6133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s6142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s6200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s6203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s6206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s6210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s6292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s6294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s6296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };

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
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp1988 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1987 = $tmp1988.value;
    if (!$tmp1987) goto $l1989;
    panda$core$Bit $tmp1990 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1991 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1990);
    $tmp1987 = $tmp1991.value;
    $l1989:;
    panda$core$Bit $tmp1992 = { $tmp1987 };
    bool $tmp1986 = $tmp1992.value;
    if (!$tmp1986) goto $l1993;
    panda$core$Bit $tmp1994 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1995 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1994);
    $tmp1986 = $tmp1995.value;
    $l1993:;
    panda$core$Bit $tmp1996 = { $tmp1986 };
    if ($tmp1996.value) {
    {
        return &$s1997;
    }
    }
    return &$s1998;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc1999;
    panda$core$Int64 index2001;
    panda$collections$ListView* vtable2002;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2004;
    panda$core$String* classPtrPtr2033;
    panda$core$String* classPtr2048;
    panda$core$String* cast2057;
    panda$core$String* ptr2069;
    panda$core$String* load2092;
    panda$core$String* result2101;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2000 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc1999 = $tmp2000;
    index2001 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2003 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2002 = $tmp2003;
    ITable* $tmp2005 = ((panda$collections$CollectionView*) vtable2002)->$class->itable;
    while ($tmp2005->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2005 = $tmp2005->next;
    }
    $fn2007 $tmp2006 = $tmp2005->methods[0];
    panda$core$Int64 $tmp2008 = $tmp2006(((panda$collections$CollectionView*) vtable2002));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2004, ((panda$core$Int64) { 0 }), $tmp2008, ((panda$core$Bit) { false }));
    int64_t $tmp2010 = $tmp2004.min.value;
    panda$core$Int64 i2009 = { $tmp2010 };
    int64_t $tmp2012 = $tmp2004.max.value;
    bool $tmp2013 = $tmp2004.inclusive.value;
    if ($tmp2013) goto $l2020; else goto $l2021;
    $l2020:;
    if ($tmp2010 <= $tmp2012) goto $l2014; else goto $l2016;
    $l2021:;
    if ($tmp2010 < $tmp2012) goto $l2014; else goto $l2016;
    $l2014:;
    {
        ITable* $tmp2022 = vtable2002->$class->itable;
        while ($tmp2022->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2022 = $tmp2022->next;
        }
        $fn2024 $tmp2023 = $tmp2022->methods[0];
        panda$core$Object* $tmp2025 = $tmp2023(vtable2002, i2009);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2025)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2001 = i2009;
            goto $l2016;
        }
        }
    }
    $l2017:;
    int64_t $tmp2027 = $tmp2012 - i2009.value;
    if ($tmp2013) goto $l2028; else goto $l2029;
    $l2028:;
    if ($tmp2027 >= 1) goto $l2026; else goto $l2016;
    $l2029:;
    if ($tmp2027 > 1) goto $l2026; else goto $l2016;
    $l2026:;
    i2009.value += 1;
    goto $l2014;
    $l2016:;
    panda$core$Bit $tmp2032 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2001, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2032.value);
    panda$core$String* $tmp2034 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2033 = $tmp2034;
    panda$core$String* $tmp2035 = panda$core$String$convert$R$panda$core$String(classPtrPtr2033);
    panda$core$String* $tmp2037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2035, &$s2036);
    org$pandalanguage$pandac$Type* $tmp2038 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2039 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2038);
    panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2037, $tmp2039);
    panda$core$String* $tmp2042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2040, &$s2041);
    panda$core$String* $tmp2043 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2043, &$s2044);
    panda$core$String* $tmp2046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2042, $tmp2045);
    (($fn2047) p_out->$class->vtable[19])(p_out, $tmp2046);
    panda$core$String* $tmp2049 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2048 = $tmp2049;
    panda$core$String* $tmp2050 = panda$core$String$convert$R$panda$core$String(classPtr2048);
    panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2050, &$s2051);
    panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, classPtrPtr2033);
    panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2053, &$s2054);
    (($fn2056) p_out->$class->vtable[19])(p_out, $tmp2055);
    panda$core$String* $tmp2058 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2057 = $tmp2058;
    panda$core$String* $tmp2059 = panda$core$String$convert$R$panda$core$String(cast2057);
    panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2059, &$s2060);
    panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2061, classPtr2048);
    panda$core$String* $tmp2064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2062, &$s2063);
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2064, cc1999->type);
    panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
    (($fn2068) p_out->$class->vtable[19])(p_out, $tmp2067);
    panda$core$String* $tmp2070 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2069 = $tmp2070;
    panda$core$String* $tmp2071 = panda$core$String$convert$R$panda$core$String(ptr2069);
    panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2071, &$s2072);
    panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, cc1999->type);
    panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2074, &$s2075);
    panda$core$String* $tmp2077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, cc1999->type);
    panda$core$String* $tmp2079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2077, &$s2078);
    panda$core$String* $tmp2080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2079, cast2057);
    panda$core$String* $tmp2082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2080, &$s2081);
    panda$core$String* $tmp2084 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2083, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2084, &$s2085);
    panda$core$String* $tmp2087 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2086, ((panda$core$Object*) wrap_panda$core$Int64(index2001)));
    panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2087, &$s2088);
    panda$core$String* $tmp2090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2082, $tmp2089);
    (($fn2091) p_out->$class->vtable[19])(p_out, $tmp2090);
    panda$core$String* $tmp2093 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2092 = $tmp2093;
    panda$core$String* $tmp2094 = panda$core$String$convert$R$panda$core$String(load2092);
    panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2094, &$s2095);
    panda$core$String* $tmp2097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2096, ptr2069);
    panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2097, &$s2098);
    (($fn2100) p_out->$class->vtable[19])(p_out, $tmp2099);
    panda$core$String* $tmp2102 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2101 = $tmp2102;
    panda$core$String* $tmp2103 = panda$core$String$convert$R$panda$core$String(result2101);
    panda$core$String* $tmp2105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2103, &$s2104);
    panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2105, load2092);
    panda$core$String* $tmp2108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2106, &$s2107);
    org$pandalanguage$pandac$Type* $tmp2109 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2110 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2109);
    panda$core$String* $tmp2111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2108, $tmp2110);
    (($fn2112) p_out->$class->vtable[19])(p_out, $tmp2111);
    return result2101;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    panda$core$String* methodType2113;
    panda$core$String* entry2116;
    panda$core$String* rawClassPointer2123;
    panda$core$String* classPointer2145;
    panda$core$String* classType2147;
    panda$core$String* loadedClass2160;
    panda$core$String* itableFirst2175;
    panda$core$String* next2198;
    panda$core$String* leavingEntryLabel2205;
    panda$core$String* itableNext2207;
    panda$core$String* itablePtrPtr2212;
    panda$core$String* fail2214;
    panda$core$String* itablePtr2234;
    panda$core$String* itableClassPtr2243;
    panda$core$String* itableClass2257;
    panda$core$String* test2272;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2274;
    panda$core$String* success2296;
    panda$core$Int64 index2326;
    panda$collections$ListView* vtable2327;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2329;
    panda$core$String* methodPtrPtr2366;
    panda$core$String* cast2383;
    panda$core$String* methodPtr2395;
    org$pandalanguage$pandac$Type* $tmp2114 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2115 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2114);
    methodType2113 = $tmp2115;
    panda$core$String* $tmp2117 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2116 = $tmp2117;
    panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2118, entry2116);
    panda$core$String* $tmp2121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2119, &$s2120);
    (($fn2122) p_out->$class->vtable[19])(p_out, $tmp2121);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, entry2116, p_out);
    panda$core$String* $tmp2124 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawClassPointer2123 = $tmp2124;
    panda$core$String* $tmp2125 = panda$core$String$convert$R$panda$core$String(rawClassPointer2123);
    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2125, &$s2126);
    org$pandalanguage$pandac$Type* $tmp2128 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2129 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2128);
    panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2127, $tmp2129);
    panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2131);
    panda$core$String* $tmp2133 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2134);
    panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2135, &$s2136);
    panda$core$String* $tmp2139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2137, &$s2138);
    panda$core$String* $tmp2140 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2139, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, &$s2141);
    panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2132, $tmp2142);
    (($fn2144) p_out->$class->vtable[19])(p_out, $tmp2143);
    panda$core$String* $tmp2146 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2145 = $tmp2146;
    org$pandalanguage$pandac$Type* $tmp2148 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2149 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2148);
    classType2147 = $tmp2149;
    panda$core$String* $tmp2150 = panda$core$String$convert$R$panda$core$String(classPointer2145);
    panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
    panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, rawClassPointer2123);
    panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, &$s2154);
    panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, classType2147);
    panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2156, &$s2157);
    (($fn2159) p_out->$class->vtable[19])(p_out, $tmp2158);
    panda$core$String* $tmp2161 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2160 = $tmp2161;
    panda$core$String* $tmp2162 = panda$core$String$convert$R$panda$core$String(loadedClass2160);
    panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, &$s2163);
    panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2164, classType2147);
    panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, &$s2166);
    panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2167, classType2147);
    panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2168, &$s2169);
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2170, classPointer2145);
    panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2171, &$s2172);
    (($fn2174) p_out->$class->vtable[19])(p_out, $tmp2173);
    panda$core$String* $tmp2176 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2175 = $tmp2176;
    panda$core$String* $tmp2177 = panda$core$String$convert$R$panda$core$String(itableFirst2175);
    panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2177, &$s2178);
    panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2179, classType2147);
    panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, &$s2181);
    panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2182, classType2147);
    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2183, &$s2184);
    panda$core$String* $tmp2186 = panda$core$String$convert$R$panda$core$String(loadedClass2160);
    panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2186, &$s2187);
    panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2188, &$s2189);
    panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2191);
    panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2192, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, &$s2194);
    panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, $tmp2195);
    (($fn2197) p_out->$class->vtable[19])(p_out, $tmp2196);
    panda$core$String* $tmp2199 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2198 = $tmp2199;
    panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2200, next2198);
    panda$core$String* $tmp2203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2201, &$s2202);
    (($fn2204) p_out->$class->vtable[19])(p_out, $tmp2203);
    leavingEntryLabel2205 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, next2198, p_out);
    panda$core$Int64 $tmp2206 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2206;
    panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2208, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, &$s2210);
    itableNext2207 = $tmp2211;
    panda$core$String* $tmp2213 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2212 = $tmp2213;
    panda$core$String* $tmp2215 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2214 = $tmp2215;
    panda$core$String* $tmp2216 = panda$core$String$convert$R$panda$core$String(itablePtrPtr2212);
    panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, &$s2217);
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2218, itableFirst2175);
    panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, &$s2220);
    panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2221, leavingEntryLabel2205);
    panda$core$String* $tmp2224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2222, &$s2223);
    panda$core$String* $tmp2226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2225, itableNext2207);
    panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2226, &$s2227);
    panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2228, fail2214);
    panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2229, &$s2230);
    panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2224, $tmp2231);
    (($fn2233) p_out->$class->vtable[19])(p_out, $tmp2232);
    panda$core$String* $tmp2235 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2234 = $tmp2235;
    panda$core$String* $tmp2236 = panda$core$String$convert$R$panda$core$String(itablePtr2234);
    panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2236, &$s2237);
    panda$core$String* $tmp2239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, itablePtrPtr2212);
    panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2239, &$s2240);
    (($fn2242) p_out->$class->vtable[19])(p_out, $tmp2241);
    panda$core$String* $tmp2244 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2243 = $tmp2244;
    panda$core$String* $tmp2245 = panda$core$String$convert$R$panda$core$String(itableClassPtr2243);
    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2245, &$s2246);
    panda$core$String* $tmp2248 = panda$core$String$convert$R$panda$core$String(itablePtr2234);
    panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2248, &$s2249);
    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2250, &$s2251);
    panda$core$String* $tmp2254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, &$s2253);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, $tmp2254);
    (($fn2256) p_out->$class->vtable[19])(p_out, $tmp2255);
    panda$core$String* $tmp2258 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2257 = $tmp2258;
    panda$core$String* $tmp2259 = panda$core$String$convert$R$panda$core$String(itableClass2257);
    panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2259, &$s2260);
    panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2261, classType2147);
    panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2262, &$s2263);
    panda$core$String* $tmp2265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, classType2147);
    panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2265, &$s2266);
    panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, itableClassPtr2243);
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2268, &$s2269);
    (($fn2271) p_out->$class->vtable[19])(p_out, $tmp2270);
    panda$core$String* $tmp2273 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2272 = $tmp2273;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2275 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2274 = $tmp2275;
    panda$core$String* $tmp2276 = panda$core$String$convert$R$panda$core$String(test2272);
    panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2276, &$s2277);
    panda$core$String* $tmp2279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2278, classType2147);
    panda$core$String* $tmp2281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2279, &$s2280);
    panda$core$String* $tmp2282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2281, intfCC2274->type);
    panda$core$String* $tmp2284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2282, &$s2283);
    panda$core$String* $tmp2285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2284, intfCC2274->name);
    panda$core$String* $tmp2287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2285, &$s2286);
    panda$core$String* $tmp2288 = panda$core$String$convert$R$panda$core$String(classType2147);
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, &$s2289);
    panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, itableClass2257);
    panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2291, &$s2292);
    panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, $tmp2293);
    (($fn2295) p_out->$class->vtable[19])(p_out, $tmp2294);
    panda$core$String* $tmp2297 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2296 = $tmp2297;
    panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2298, test2272);
    panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2299, &$s2300);
    panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2301, success2296);
    panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2302, &$s2303);
    panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2304, fail2214);
    panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, &$s2306);
    (($fn2308) p_out->$class->vtable[19])(p_out, $tmp2307);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, fail2214, p_out);
    panda$core$String* $tmp2309 = panda$core$String$convert$R$panda$core$String(itableNext2207);
    panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2309, &$s2310);
    panda$core$String* $tmp2312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2311, itablePtr2234);
    panda$core$String* $tmp2314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2312, &$s2313);
    panda$core$String* $tmp2316 = panda$core$String$convert$R$panda$core$String(&$s2315);
    panda$core$String* $tmp2318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2316, &$s2317);
    panda$core$String* $tmp2319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2314, $tmp2318);
    (($fn2320) p_out->$class->vtable[19])(p_out, $tmp2319);
    panda$core$String* $tmp2322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2321, next2198);
    panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2322, &$s2323);
    (($fn2325) p_out->$class->vtable[19])(p_out, $tmp2324);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, success2296, p_out);
    index2326 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2328 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2327 = $tmp2328;
    ITable* $tmp2330 = ((panda$collections$CollectionView*) vtable2327)->$class->itable;
    while ($tmp2330->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2330 = $tmp2330->next;
    }
    $fn2332 $tmp2331 = $tmp2330->methods[0];
    panda$core$Int64 $tmp2333 = $tmp2331(((panda$collections$CollectionView*) vtable2327));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2329, ((panda$core$Int64) { 0 }), $tmp2333, ((panda$core$Bit) { false }));
    int64_t $tmp2335 = $tmp2329.min.value;
    panda$core$Int64 i2334 = { $tmp2335 };
    int64_t $tmp2337 = $tmp2329.max.value;
    bool $tmp2338 = $tmp2329.inclusive.value;
    if ($tmp2338) goto $l2345; else goto $l2346;
    $l2345:;
    if ($tmp2335 <= $tmp2337) goto $l2339; else goto $l2341;
    $l2346:;
    if ($tmp2335 < $tmp2337) goto $l2339; else goto $l2341;
    $l2339:;
    {
        ITable* $tmp2347 = vtable2327->$class->itable;
        while ($tmp2347->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2347 = $tmp2347->next;
        }
        $fn2349 $tmp2348 = $tmp2347->methods[0];
        panda$core$Object* $tmp2350 = $tmp2348(vtable2327, i2334);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2350)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2326 = i2334;
            goto $l2341;
        }
        }
    }
    $l2342:;
    int64_t $tmp2352 = $tmp2337 - i2334.value;
    if ($tmp2338) goto $l2353; else goto $l2354;
    $l2353:;
    if ($tmp2352 >= 1) goto $l2351; else goto $l2341;
    $l2354:;
    if ($tmp2352 > 1) goto $l2351; else goto $l2341;
    $l2351:;
    i2334.value += 1;
    goto $l2339;
    $l2341:;
    org$pandalanguage$pandac$Type* $tmp2357 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2358 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2357);
    panda$collections$ListView* $tmp2359 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2358);
    ITable* $tmp2360 = ((panda$collections$CollectionView*) $tmp2359)->$class->itable;
    while ($tmp2360->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2360 = $tmp2360->next;
    }
    $fn2362 $tmp2361 = $tmp2360->methods[0];
    panda$core$Int64 $tmp2363 = $tmp2361(((panda$collections$CollectionView*) $tmp2359));
    panda$core$Int64 $tmp2364 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2326, $tmp2363);
    index2326 = $tmp2364;
    panda$core$Bit $tmp2365 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2326, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2365.value);
    panda$core$String* $tmp2367 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2366 = $tmp2367;
    panda$core$String* $tmp2368 = panda$core$String$convert$R$panda$core$String(methodPtrPtr2366);
    panda$core$String* $tmp2370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2368, &$s2369);
    panda$core$String* $tmp2371 = panda$core$String$convert$R$panda$core$String(itablePtr2234);
    panda$core$String* $tmp2373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2371, &$s2372);
    panda$core$String* $tmp2375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2373, &$s2374);
    panda$core$String* $tmp2377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2375, &$s2376);
    panda$core$String* $tmp2378 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2377, ((panda$core$Object*) wrap_panda$core$Int64(index2326)));
    panda$core$String* $tmp2380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2378, &$s2379);
    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2370, $tmp2380);
    (($fn2382) p_out->$class->vtable[19])(p_out, $tmp2381);
    panda$core$String* $tmp2384 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2383 = $tmp2384;
    panda$core$String* $tmp2385 = panda$core$String$convert$R$panda$core$String(cast2383);
    panda$core$String* $tmp2387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2385, &$s2386);
    panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2387, methodPtrPtr2366);
    panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2388, &$s2389);
    panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2390, methodType2113);
    panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2391, &$s2392);
    (($fn2394) p_out->$class->vtable[19])(p_out, $tmp2393);
    panda$core$String* $tmp2396 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2395 = $tmp2396;
    panda$core$String* $tmp2397 = panda$core$String$convert$R$panda$core$String(methodPtr2395);
    panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2397, &$s2398);
    panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2399, methodType2113);
    panda$core$String* $tmp2402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2400, &$s2401);
    panda$core$String* $tmp2403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2402, methodType2113);
    panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2403, &$s2404);
    panda$core$String* $tmp2406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, cast2383);
    panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2406, &$s2407);
    (($fn2409) p_out->$class->vtable[19])(p_out, $tmp2408);
    return methodPtr2395;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp2411 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2410 = $tmp2411.value;
    if (!$tmp2410) goto $l2412;
    panda$core$Bit $tmp2413 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2410 = $tmp2413.value;
    $l2412:;
    panda$core$Bit $tmp2414 = { $tmp2410 };
    if ($tmp2414.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2415.value) {
        {
            panda$core$String* $tmp2416 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2416;
        }
        }
        else {
        {
            panda$core$String* $tmp2417 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2417;
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
        panda$core$String* $tmp2418 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2418;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2419;
    panda$core$String* $match$1237_92420;
    panda$core$String* countStruct2425;
    panda$core$String* count2428;
    panda$core$String* size2437;
    panda$core$Int64 elementSize2439;
    panda$core$String* malloc2458;
    panda$core$String* result2471;
    panda$core$String* ptr2489;
    panda$core$String* baseType2492;
    panda$core$String* ptrType2495;
    panda$core$String* cast2498;
    panda$core$String* load2510;
    panda$core$String* ptr2529;
    panda$core$String* baseType2532;
    panda$core$String* ptrType2535;
    panda$core$String* cast2538;
    panda$core$String* indexStruct2550;
    panda$core$String* index2553;
    panda$core$String* offsetPtr2562;
    panda$core$String* load2582;
    panda$core$String* ptr2601;
    panda$core$String* ptrCast2604;
    panda$core$String* countStruct2613;
    panda$core$String* count2616;
    panda$core$String* size2625;
    panda$core$String* realloc2642;
    panda$core$String* result2659;
    panda$core$String* ptr2677;
    panda$core$String* baseType2680;
    panda$core$String* offsetStruct2684;
    panda$core$String* offset2687;
    panda$core$String* result2696;
    m2419 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$1237_92420 = ((org$pandalanguage$pandac$Symbol*) m2419->value)->name;
        panda$core$Bit $tmp2422 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1237_92420, &$s2421);
        if ($tmp2422.value) {
        {
            panda$core$Int64 $tmp2423 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2423, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2424.value);
            panda$core$Object* $tmp2426 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2427 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2426), p_out);
            countStruct2425 = $tmp2427;
            panda$core$String* $tmp2429 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2428 = $tmp2429;
            panda$core$String* $tmp2430 = panda$core$String$convert$R$panda$core$String(count2428);
            panda$core$String* $tmp2432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2430, &$s2431);
            panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2432, countStruct2425);
            panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2433, &$s2434);
            (($fn2436) p_out->$class->vtable[19])(p_out, $tmp2435);
            panda$core$String* $tmp2438 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2437 = $tmp2438;
            org$pandalanguage$pandac$Type* $tmp2440 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2419);
            panda$core$Object* $tmp2441 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2440->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2442 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2441));
            elementSize2439 = $tmp2442;
            panda$core$Bit $tmp2443 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2439, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2443.value);
            panda$core$String* $tmp2444 = panda$core$String$convert$R$panda$core$String(size2437);
            panda$core$String* $tmp2446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2444, &$s2445);
            panda$core$String* $tmp2448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2446, &$s2447);
            panda$core$String* $tmp2450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2448, &$s2449);
            panda$core$String* $tmp2451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2450, count2428);
            panda$core$String* $tmp2453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2451, &$s2452);
            panda$core$String* $tmp2454 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2453, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2439)));
            panda$core$String* $tmp2456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2454, &$s2455);
            (($fn2457) p_out->$class->vtable[19])(p_out, $tmp2456);
            panda$core$String* $tmp2459 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2458 = $tmp2459;
            panda$core$String* $tmp2460 = panda$core$String$convert$R$panda$core$String(malloc2458);
            panda$core$String* $tmp2462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2460, &$s2461);
            panda$core$String* $tmp2464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2462, &$s2463);
            panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2464, &$s2465);
            panda$core$String* $tmp2467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, size2437);
            panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, &$s2468);
            (($fn2470) p_out->$class->vtable[19])(p_out, $tmp2469);
            panda$core$String* $tmp2472 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2471 = $tmp2472;
            panda$core$String* $tmp2473 = panda$core$String$convert$R$panda$core$String(result2471);
            panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, &$s2474);
            panda$core$String* $tmp2476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2475, malloc2458);
            panda$core$String* $tmp2478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2476, &$s2477);
            org$pandalanguage$pandac$Type* $tmp2479 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2419);
            panda$core$String* $tmp2480 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2479);
            panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2478, $tmp2480);
            panda$core$String* $tmp2483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2481, &$s2482);
            (($fn2484) p_out->$class->vtable[19])(p_out, $tmp2483);
            return result2471;
        }
        }
        else {
        panda$core$Bit $tmp2486 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1237_92420, &$s2485);
        if ($tmp2486.value) {
        {
            panda$core$Int64 $tmp2487 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2487, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2488.value);
            panda$core$Object* $tmp2490 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2491 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2490), p_out);
            ptr2489 = $tmp2491;
            org$pandalanguage$pandac$Type* $tmp2493 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2419);
            panda$core$String* $tmp2494 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2493);
            baseType2492 = $tmp2494;
            panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2492, &$s2496);
            ptrType2495 = $tmp2497;
            panda$core$String* $tmp2499 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2498 = $tmp2499;
            panda$core$String* $tmp2500 = panda$core$String$convert$R$panda$core$String(cast2498);
            panda$core$String* $tmp2502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2500, &$s2501);
            panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2502, ptr2489);
            panda$core$String* $tmp2505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2503, &$s2504);
            panda$core$String* $tmp2506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2505, ptrType2495);
            panda$core$String* $tmp2508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2506, &$s2507);
            (($fn2509) p_out->$class->vtable[19])(p_out, $tmp2508);
            panda$core$String* $tmp2511 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2510 = $tmp2511;
            panda$core$String* $tmp2512 = panda$core$String$convert$R$panda$core$String(load2510);
            panda$core$String* $tmp2514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2512, &$s2513);
            panda$core$String* $tmp2515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2514, baseType2492);
            panda$core$String* $tmp2517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2515, &$s2516);
            panda$core$String* $tmp2518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2517, ptrType2495);
            panda$core$String* $tmp2520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2518, &$s2519);
            panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2520, cast2498);
            panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2521, &$s2522);
            (($fn2524) p_out->$class->vtable[19])(p_out, $tmp2523);
            return load2510;
        }
        }
        else {
        panda$core$Bit $tmp2526 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1237_92420, &$s2525);
        if ($tmp2526.value) {
        {
            panda$core$Int64 $tmp2527 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2527, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2528.value);
            panda$core$Object* $tmp2530 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2531 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2530), p_out);
            ptr2529 = $tmp2531;
            org$pandalanguage$pandac$Type* $tmp2533 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2419);
            panda$core$String* $tmp2534 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2533);
            baseType2532 = $tmp2534;
            panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2532, &$s2536);
            ptrType2535 = $tmp2537;
            panda$core$String* $tmp2539 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2538 = $tmp2539;
            panda$core$String* $tmp2540 = panda$core$String$convert$R$panda$core$String(cast2538);
            panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2540, &$s2541);
            panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2542, ptr2529);
            panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2543, &$s2544);
            panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2545, ptrType2535);
            panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, &$s2547);
            (($fn2549) p_out->$class->vtable[19])(p_out, $tmp2548);
            panda$core$Object* $tmp2551 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2552 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2551), p_out);
            indexStruct2550 = $tmp2552;
            panda$core$String* $tmp2554 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2553 = $tmp2554;
            panda$core$String* $tmp2555 = panda$core$String$convert$R$panda$core$String(index2553);
            panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, &$s2556);
            panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, indexStruct2550);
            panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2558, &$s2559);
            (($fn2561) p_out->$class->vtable[19])(p_out, $tmp2560);
            panda$core$String* $tmp2563 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2562 = $tmp2563;
            panda$core$String* $tmp2564 = panda$core$String$convert$R$panda$core$String(offsetPtr2562);
            panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2564, &$s2565);
            panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2566, baseType2532);
            panda$core$String* $tmp2569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2567, &$s2568);
            panda$core$String* $tmp2570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2569, ptrType2535);
            panda$core$String* $tmp2572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2570, &$s2571);
            panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2572, cast2538);
            panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2573, &$s2574);
            panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2576, index2553);
            panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2577, &$s2578);
            panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2575, $tmp2579);
            (($fn2581) p_out->$class->vtable[19])(p_out, $tmp2580);
            panda$core$String* $tmp2583 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2582 = $tmp2583;
            panda$core$String* $tmp2584 = panda$core$String$convert$R$panda$core$String(load2582);
            panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, &$s2585);
            panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, baseType2532);
            panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, &$s2588);
            panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2589, ptrType2535);
            panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, &$s2591);
            panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2592, offsetPtr2562);
            panda$core$String* $tmp2595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, &$s2594);
            (($fn2596) p_out->$class->vtable[19])(p_out, $tmp2595);
            return load2582;
        }
        }
        else {
        panda$core$Bit $tmp2598 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1237_92420, &$s2597);
        if ($tmp2598.value) {
        {
            panda$core$Int64 $tmp2599 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2599, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2600.value);
            panda$core$Object* $tmp2602 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2603 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2602), p_out);
            ptr2601 = $tmp2603;
            panda$core$String* $tmp2605 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2604 = $tmp2605;
            panda$core$String* $tmp2606 = panda$core$String$convert$R$panda$core$String(ptrCast2604);
            panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, &$s2607);
            panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, ptr2601);
            panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, &$s2610);
            (($fn2612) p_out->$class->vtable[19])(p_out, $tmp2611);
            panda$core$Object* $tmp2614 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2615 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2614), p_out);
            countStruct2613 = $tmp2615;
            panda$core$String* $tmp2617 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2616 = $tmp2617;
            panda$core$String* $tmp2618 = panda$core$String$convert$R$panda$core$String(count2616);
            panda$core$String* $tmp2620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2618, &$s2619);
            panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2620, countStruct2613);
            panda$core$String* $tmp2623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2621, &$s2622);
            (($fn2624) p_out->$class->vtable[19])(p_out, $tmp2623);
            panda$core$String* $tmp2626 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2625 = $tmp2626;
            panda$core$String* $tmp2627 = panda$core$String$convert$R$panda$core$String(size2625);
            panda$core$String* $tmp2629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, &$s2628);
            panda$core$String* $tmp2631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2629, &$s2630);
            panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2631, &$s2632);
            panda$core$String* $tmp2634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2633, count2616);
            panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2634, &$s2635);
            org$pandalanguage$pandac$Type* $tmp2637 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2419);
            panda$core$Object* $tmp2638 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2637->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2639 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2638));
            panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2636, ((panda$core$Object*) wrap_panda$core$Int64($tmp2639)));
            (($fn2641) p_out->$class->vtable[19])(p_out, $tmp2640);
            panda$core$String* $tmp2643 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2642 = $tmp2643;
            panda$core$String* $tmp2644 = panda$core$String$convert$R$panda$core$String(realloc2642);
            panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, &$s2645);
            panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2646, ptrCast2604);
            panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2647, &$s2648);
            panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2650);
            panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, &$s2652);
            panda$core$String* $tmp2654 = panda$core$String$convert$R$panda$core$String(size2625);
            panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, &$s2655);
            panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2653, $tmp2656);
            (($fn2658) p_out->$class->vtable[19])(p_out, $tmp2657);
            panda$core$String* $tmp2660 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2659 = $tmp2660;
            panda$core$String* $tmp2661 = panda$core$String$convert$R$panda$core$String(result2659);
            panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2661, &$s2662);
            panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2663, realloc2642);
            panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, &$s2665);
            org$pandalanguage$pandac$Type* $tmp2667 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2419);
            panda$core$String* $tmp2668 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2667);
            panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, $tmp2668);
            panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2669, &$s2670);
            (($fn2672) p_out->$class->vtable[19])(p_out, $tmp2671);
            return result2659;
        }
        }
        else {
        panda$core$Bit $tmp2674 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1237_92420, &$s2673);
        if ($tmp2674.value) {
        {
            panda$core$Int64 $tmp2675 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2675, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2676.value);
            panda$core$Object* $tmp2678 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2679 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2678), p_out);
            ptr2677 = $tmp2679;
            panda$core$Object* $tmp2681 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2682 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2681)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2683 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2682));
            baseType2680 = $tmp2683;
            panda$core$Object* $tmp2685 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2686 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2685), p_out);
            offsetStruct2684 = $tmp2686;
            panda$core$String* $tmp2688 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2687 = $tmp2688;
            panda$core$String* $tmp2689 = panda$core$String$convert$R$panda$core$String(offset2687);
            panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2689, &$s2690);
            panda$core$String* $tmp2692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2691, offsetStruct2684);
            panda$core$String* $tmp2694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2692, &$s2693);
            (($fn2695) p_out->$class->vtable[19])(p_out, $tmp2694);
            panda$core$String* $tmp2697 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2696 = $tmp2697;
            panda$core$String* $tmp2698 = panda$core$String$convert$R$panda$core$String(result2696);
            panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
            panda$core$String* $tmp2701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, baseType2680);
            panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2701, &$s2702);
            panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, ptr2677);
            panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, &$s2705);
            panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2706, offset2687);
            panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2707, &$s2708);
            (($fn2710) p_out->$class->vtable[19])(p_out, $tmp2709);
            return result2696;
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
    org$pandalanguage$pandac$MethodDecl* m2711;
    panda$core$String* selfRef2712;
    panda$core$Int64 argStart2714;
    panda$core$String* selfLoad2728;
    panda$core$String* t2730;
    panda$collections$Array* args2746;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2749;
    panda$core$String* end2772;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2781;
    org$pandalanguage$pandac$MethodDecl* old2788;
    panda$core$String* phi2801;
    panda$core$String* separator2811;
    panda$collections$Iterator* ret$Iter2813;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2825;
    m2711 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) m2711->owner));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2711), ((panda$core$Object*) m2711));
    selfRef2712 = &$s2713;
    panda$core$Bit $tmp2715 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2711);
    if ($tmp2715.value) {
    {
        argStart2714 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2716 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2717 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2716), p_out);
        selfRef2712 = $tmp2717;
        panda$core$Bit $tmp2720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->currentMethod->methodKind, ((panda$core$Int64) { 59 }));
        bool $tmp2719 = $tmp2720.value;
        if (!$tmp2719) goto $l2721;
        panda$core$Object* $tmp2722 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2722)->kind, ((panda$core$Int64) { 1025 }));
        $tmp2719 = $tmp2723.value;
        $l2721:;
        panda$core$Bit $tmp2724 = { $tmp2719 };
        bool $tmp2718 = $tmp2724.value;
        if (!$tmp2718) goto $l2725;
        panda$core$Bit $tmp2726 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, self->currentMethod->owner);
        $tmp2718 = $tmp2726.value;
        $l2725:;
        panda$core$Bit $tmp2727 = { $tmp2718 };
        if ($tmp2727.value) {
        {
            panda$core$String* $tmp2729 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            selfLoad2728 = $tmp2729;
            org$pandalanguage$pandac$Type* $tmp2731 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
            panda$core$String* $tmp2732 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2731);
            t2730 = $tmp2732;
            panda$core$String* $tmp2733 = panda$core$String$convert$R$panda$core$String(selfLoad2728);
            panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, &$s2734);
            panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2735, t2730);
            panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, &$s2737);
            panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, t2730);
            panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, &$s2740);
            panda$core$String* $tmp2742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2741, selfRef2712);
            panda$core$String* $tmp2744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2742, &$s2743);
            (($fn2745) p_out->$class->vtable[19])(p_out, $tmp2744);
            selfRef2712 = selfLoad2728;
        }
        }
    }
    }
    else {
    {
        argStart2714 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2747 = (panda$collections$Array*) malloc(40);
    $tmp2747->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2747->refCount.value = 1;
    panda$collections$Array$init($tmp2747);
    args2746 = $tmp2747;
    panda$core$Int64 $tmp2750 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2749, argStart2714, $tmp2750, ((panda$core$Bit) { false }));
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
        panda$core$Object* $tmp2764 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2751);
        panda$core$String* $tmp2765 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2764), p_out);
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
    panda$core$Int64 $tmp2775 = panda$collections$Array$get_count$R$panda$core$Int64(m2711->parameters);
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
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2782, $tmp2787, selfRef2712, ((panda$collections$ListView*) args2746), end2772);
    inline2781 = $tmp2782;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2781));
    old2788 = self->currentMethod;
    self->currentMethod = m2711;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_body, p_out);
    self->currentMethod = old2788;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2789 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2790 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2789);
    if ($tmp2790.value) {
    {
        (($fn2792) p_out->$class->vtable[19])(p_out, &$s2791);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end2772, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2711));
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
        (($fn2799) p_out->$class->vtable[16])(p_out, &$s2798);
        return &$s2800;
    }
    }
    panda$core$String* $tmp2802 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2801 = $tmp2802;
    panda$core$String* $tmp2803 = panda$core$String$convert$R$panda$core$String(phi2801);
    panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2803, &$s2804);
    panda$core$String* $tmp2806 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2711->returnType);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, $tmp2806);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, &$s2808);
    (($fn2810) p_out->$class->vtable[16])(p_out, $tmp2809);
    separator2811 = &$s2812;
    {
        ITable* $tmp2814 = ((panda$collections$Iterable*) inline2781->returns)->$class->itable;
        while ($tmp2814->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2814 = $tmp2814->next;
        }
        $fn2816 $tmp2815 = $tmp2814->methods[0];
        panda$collections$Iterator* $tmp2817 = $tmp2815(((panda$collections$Iterable*) inline2781->returns));
        ret$Iter2813 = $tmp2817;
        $l2818:;
        ITable* $tmp2820 = ret$Iter2813->$class->itable;
        while ($tmp2820->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2820 = $tmp2820->next;
        }
        $fn2822 $tmp2821 = $tmp2820->methods[0];
        panda$core$Bit $tmp2823 = $tmp2821(ret$Iter2813);
        panda$core$Bit $tmp2824 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2823);
        if (!$tmp2824.value) goto $l2819;
        {
            ITable* $tmp2826 = ret$Iter2813->$class->itable;
            while ($tmp2826->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2826 = $tmp2826->next;
            }
            $fn2828 $tmp2827 = $tmp2826->methods[1];
            panda$core$Object* $tmp2829 = $tmp2827(ret$Iter2813);
            ret2825 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2829);
            panda$core$String* $tmp2830 = panda$core$String$convert$R$panda$core$String(separator2811);
            panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2830, &$s2831);
            panda$core$String* $tmp2833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, ((panda$core$String*) ret2825->second));
            panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2833, &$s2834);
            panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, ((panda$core$String*) ret2825->first));
            panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, &$s2837);
            (($fn2839) p_out->$class->vtable[16])(p_out, $tmp2838);
            separator2811 = &$s2840;
        }
        goto $l2818;
        $l2819:;
    }
    (($fn2841) p_out->$class->vtable[17])(p_out);
    return phi2801;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2843;
    panda$core$String* bit2853;
    panda$core$String* result2857;
    panda$core$String* bit2871;
    panda$core$String* result2875;
    org$pandalanguage$pandac$IRNode* block2890;
    panda$collections$Array* args2894;
    org$pandalanguage$pandac$Type* actualMethodType2898;
    panda$core$String* actualResultType2899;
    panda$core$Bit isSuper2900;
    panda$core$Int64 offset2920;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2925;
    panda$core$String* arg2940;
    panda$core$String* target2972;
    panda$core$String* methodRef2976;
    panda$core$String* result2978;
    panda$core$Bit indirect2979;
    panda$core$String* separator3004;
    panda$core$String* indirectVar3006;
    panda$collections$Iterator* arg$Iter3025;
    panda$core$String* arg3037;
    panda$core$Bit $tmp2842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2842.value);
    m2843 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2845 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2843->owner)->name, &$s2844);
    if ($tmp2845.value) {
    {
        panda$core$String* $tmp2846 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2846;
    }
    }
    if (m2843->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2843);
    }
    }
    panda$core$Bit $tmp2848 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2843->owner)->name, &$s2847);
    if ($tmp2848.value) {
    {
        panda$core$Bit $tmp2850 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2843)->name, &$s2849);
        if ($tmp2850.value) {
        {
            panda$core$Int64 $tmp2851 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2851, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2852.value);
            panda$core$Object* $tmp2854 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2855 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2856 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2854), ((org$pandalanguage$pandac$IRNode*) $tmp2855), p_out);
            bit2853 = $tmp2856;
            panda$core$String* $tmp2858 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2857 = $tmp2858;
            panda$core$String* $tmp2859 = panda$core$String$convert$R$panda$core$String(result2857);
            panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2859, &$s2860);
            panda$core$String* $tmp2862 = panda$core$String$convert$R$panda$core$String(bit2853);
            panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, &$s2863);
            panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, $tmp2864);
            (($fn2866) p_out->$class->vtable[19])(p_out, $tmp2865);
            return result2857;
        }
        }
        panda$core$Bit $tmp2868 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2843)->name, &$s2867);
        if ($tmp2868.value) {
        {
            panda$core$Int64 $tmp2869 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2869, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2870.value);
            panda$core$Object* $tmp2872 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2873 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2874 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2872), ((org$pandalanguage$pandac$IRNode*) $tmp2873), p_out);
            bit2871 = $tmp2874;
            panda$core$String* $tmp2876 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2875 = $tmp2876;
            panda$core$String* $tmp2877 = panda$core$String$convert$R$panda$core$String(result2875);
            panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2877, &$s2878);
            panda$core$String* $tmp2880 = panda$core$String$convert$R$panda$core$String(bit2871);
            panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2880, &$s2881);
            panda$core$String* $tmp2883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, $tmp2882);
            (($fn2884) p_out->$class->vtable[19])(p_out, $tmp2883);
            return result2875;
        }
        }
    }
    }
    panda$core$Bit $tmp2886 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2843->annotations);
    bool $tmp2885 = $tmp2886.value;
    if (!$tmp2885) goto $l2887;
    panda$core$Object* $tmp2888 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2843));
    $tmp2885 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp2888) == NULL }).value;
    $l2887:;
    panda$core$Bit $tmp2889 = { $tmp2885 };
    if ($tmp2889.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2891 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2843);
        block2890 = $tmp2891;
        if (((panda$core$Bit) { block2890 != NULL }).value) {
        {
            panda$core$String* $tmp2892 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, block2890, p_out);
            return $tmp2892;
        }
        }
        return &$s2893;
    }
    }
    panda$collections$Array* $tmp2895 = (panda$collections$Array*) malloc(40);
    $tmp2895->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2895->refCount.value = 1;
    panda$core$Int64 $tmp2897 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp2895, $tmp2897);
    args2894 = $tmp2895;
    panda$core$Int64 $tmp2902 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2903 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2902, ((panda$core$Int64) { 1 }));
    bool $tmp2901 = $tmp2903.value;
    if (!$tmp2901) goto $l2904;
    panda$core$Object* $tmp2905 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2905)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2901 = $tmp2906.value;
    $l2904:;
    panda$core$Bit $tmp2907 = { $tmp2901 };
    isSuper2900 = $tmp2907;
    panda$core$Bit $tmp2909 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2900);
    bool $tmp2908 = $tmp2909.value;
    if (!$tmp2908) goto $l2910;
    panda$core$Bit $tmp2911 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2843);
    $tmp2908 = $tmp2911.value;
    $l2910:;
    panda$core$Bit $tmp2912 = { $tmp2908 };
    if ($tmp2912.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2913 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2843);
        actualMethodType2898 = $tmp2913;
        panda$core$Int64 $tmp2914 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2898->subtypes);
        panda$core$Int64 $tmp2915 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2914, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2916 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2898->subtypes, $tmp2915);
        panda$core$String* $tmp2917 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2916));
        actualResultType2899 = $tmp2917;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2918 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2843);
        actualMethodType2898 = $tmp2918;
        panda$core$String* $tmp2919 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2899 = $tmp2919;
    }
    }
    panda$core$Int64 $tmp2921 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2922 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2898->subtypes);
    panda$core$Int64 $tmp2923 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2921, $tmp2922);
    panda$core$Int64 $tmp2924 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2923, ((panda$core$Int64) { 1 }));
    offset2920 = $tmp2924;
    panda$core$Int64 $tmp2926 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2925, ((panda$core$Int64) { 0 }), $tmp2926, ((panda$core$Bit) { false }));
    int64_t $tmp2928 = $tmp2925.min.value;
    panda$core$Int64 i2927 = { $tmp2928 };
    int64_t $tmp2930 = $tmp2925.max.value;
    bool $tmp2931 = $tmp2925.inclusive.value;
    if ($tmp2931) goto $l2938; else goto $l2939;
    $l2938:;
    if ($tmp2928 <= $tmp2930) goto $l2932; else goto $l2934;
    $l2939:;
    if ($tmp2928 < $tmp2930) goto $l2932; else goto $l2934;
    $l2932:;
    {
        panda$core$Object* $tmp2941 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2927);
        panda$core$String* $tmp2942 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2941), p_out);
        arg2940 = $tmp2942;
        panda$core$Bit $tmp2944 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2927, offset2920);
        bool $tmp2943 = $tmp2944.value;
        if (!$tmp2943) goto $l2945;
        panda$core$Int64 $tmp2946 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2927, offset2920);
        panda$core$Object* $tmp2947 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2898->subtypes, $tmp2946);
        panda$core$Object* $tmp2948 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2927);
        panda$core$Bit $tmp2949 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2947), ((org$pandalanguage$pandac$IRNode*) $tmp2948)->type);
        $tmp2943 = $tmp2949.value;
        $l2945:;
        panda$core$Bit $tmp2950 = { $tmp2943 };
        if ($tmp2950.value) {
        {
            panda$core$Int64 $tmp2951 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2927, offset2920);
            panda$core$Object* $tmp2952 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2898->subtypes, $tmp2951);
            panda$core$String* $tmp2953 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2952));
            panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, &$s2954);
            panda$core$Object* $tmp2956 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2927);
            panda$core$Int64 $tmp2957 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2927, offset2920);
            panda$core$Object* $tmp2958 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2898->subtypes, $tmp2957);
            panda$core$String* $tmp2959 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg2940, ((org$pandalanguage$pandac$IRNode*) $tmp2956)->type, ((org$pandalanguage$pandac$Type*) $tmp2958), p_out);
            panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2955, $tmp2959);
            arg2940 = $tmp2960;
        }
        }
        else {
        {
            panda$core$Object* $tmp2961 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2927);
            panda$core$String* $tmp2962 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2961)->type);
            panda$core$String* $tmp2964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, &$s2963);
            panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2964, arg2940);
            arg2940 = $tmp2965;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2894, ((panda$core$Object*) arg2940));
    }
    $l2935:;
    int64_t $tmp2967 = $tmp2930 - i2927.value;
    if ($tmp2931) goto $l2968; else goto $l2969;
    $l2968:;
    if ($tmp2967 >= 1) goto $l2966; else goto $l2934;
    $l2969:;
    if ($tmp2967 > 1) goto $l2966; else goto $l2934;
    $l2966:;
    i2927.value += 1;
    goto $l2932;
    $l2934:;
    panda$core$Int64 $tmp2973 = panda$collections$Array$get_count$R$panda$core$Int64(args2894);
    panda$core$Bit $tmp2974 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2973, ((panda$core$Int64) { 0 }));
    if ($tmp2974.value) {
    {
        panda$core$Object* $tmp2975 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2894, ((panda$core$Int64) { 0 }));
        target2972 = ((panda$core$String*) $tmp2975);
    }
    }
    else {
    {
        target2972 = NULL;
    }
    }
    panda$core$String* $tmp2977 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, target2972, m2843, isSuper2900, p_out);
    methodRef2976 = $tmp2977;
    panda$core$Bit $tmp2980 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2843);
    indirect2979 = $tmp2980;
    if (indirect2979.value) {
    {
        panda$core$String* $tmp2982 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2843);
        panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2981, $tmp2982);
        panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, &$s2984);
        (($fn2986) p_out->$class->vtable[16])(p_out, $tmp2985);
    }
    }
    else {
    {
        panda$core$String* $tmp2987 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2978 = $tmp2987;
        panda$core$String* $tmp2988 = panda$core$String$convert$R$panda$core$String(result2978);
        panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2988, &$s2989);
        panda$core$String* $tmp2991 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2843);
        panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, $tmp2991);
        panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2992, &$s2993);
        panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2994, actualResultType2899);
        panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, &$s2996);
        (($fn2998) p_out->$class->vtable[16])(p_out, $tmp2997);
    }
    }
    panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2999, methodRef2976);
    panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3000, &$s3001);
    (($fn3003) p_out->$class->vtable[16])(p_out, $tmp3002);
    separator3004 = &$s3005;
    if (indirect2979.value) {
    {
        panda$core$Int64 $tmp3007 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3007;
        panda$core$String* $tmp3009 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3008, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3006 = $tmp3009;
        panda$core$String* $tmp3010 = panda$core$String$convert$R$panda$core$String(indirectVar3006);
        panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3010, &$s3011);
        panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, actualResultType2899);
        panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, &$s3014);
        (($fn3016) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3015);
        panda$core$String* $tmp3017 = panda$core$String$convert$R$panda$core$String(actualResultType2899);
        panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3017, &$s3018);
        panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, indirectVar3006);
        panda$core$String* $tmp3022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, &$s3021);
        (($fn3023) p_out->$class->vtable[16])(p_out, $tmp3022);
        separator3004 = &$s3024;
    }
    }
    {
        ITable* $tmp3026 = ((panda$collections$Iterable*) args2894)->$class->itable;
        while ($tmp3026->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3026 = $tmp3026->next;
        }
        $fn3028 $tmp3027 = $tmp3026->methods[0];
        panda$collections$Iterator* $tmp3029 = $tmp3027(((panda$collections$Iterable*) args2894));
        arg$Iter3025 = $tmp3029;
        $l3030:;
        ITable* $tmp3032 = arg$Iter3025->$class->itable;
        while ($tmp3032->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3032 = $tmp3032->next;
        }
        $fn3034 $tmp3033 = $tmp3032->methods[0];
        panda$core$Bit $tmp3035 = $tmp3033(arg$Iter3025);
        panda$core$Bit $tmp3036 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3035);
        if (!$tmp3036.value) goto $l3031;
        {
            ITable* $tmp3038 = arg$Iter3025->$class->itable;
            while ($tmp3038->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3038 = $tmp3038->next;
            }
            $fn3040 $tmp3039 = $tmp3038->methods[1];
            panda$core$Object* $tmp3041 = $tmp3039(arg$Iter3025);
            arg3037 = ((panda$core$String*) $tmp3041);
            panda$core$String* $tmp3042 = panda$core$String$convert$R$panda$core$String(separator3004);
            panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3042, &$s3043);
            panda$core$String* $tmp3045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, arg3037);
            panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3045, &$s3046);
            (($fn3048) p_out->$class->vtable[16])(p_out, $tmp3047);
            separator3004 = &$s3049;
        }
        goto $l3030;
        $l3031:;
    }
    (($fn3051) p_out->$class->vtable[19])(p_out, &$s3050);
    if (indirect2979.value) {
    {
        panda$core$String* $tmp3052 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2978 = $tmp3052;
        panda$core$String* $tmp3053 = panda$core$String$convert$R$panda$core$String(result2978);
        panda$core$String* $tmp3055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3053, &$s3054);
        panda$core$String* $tmp3056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3055, actualResultType2899);
        panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3056, &$s3057);
        panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, actualResultType2899);
        panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, &$s3060);
        panda$core$String* $tmp3062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, indirectVar3006);
        (($fn3063) p_out->$class->vtable[19])(p_out, $tmp3062);
    }
    }
    panda$core$String* $tmp3064 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3065 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3064, actualResultType2899);
    if ($tmp3065.value) {
    {
        panda$core$Int64 $tmp3066 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2898->subtypes);
        panda$core$Int64 $tmp3067 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3066, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3068 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2898->subtypes, $tmp3067);
        panda$core$String* $tmp3069 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, result2978, ((org$pandalanguage$pandac$Type*) $tmp3068), p_call->type, p_out);
        return $tmp3069;
    }
    }
    return result2978;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3070;
    panda$core$String* testStart3073;
    panda$core$String* isNonNull3074;
    panda$core$String* nonNullLabel3087;
    panda$core$String* endLabel3089;
    panda$core$String* unwrapped3102;
    panda$core$String* nonNullValue3105;
    panda$core$String* result3113;
    panda$core$String* mallocRef3134;
    panda$core$String* wrapperTypeName3145;
    panda$core$String* wrapperType3148;
    panda$core$String* wrapperCast3151;
    panda$core$String* classPtr3163;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3179;
    panda$core$String* ccCast3181;
    panda$core$String* refCount3199;
    panda$core$String* target3220;
    panda$core$String* result3254;
    org$pandalanguage$pandac$ClassDecl* $tmp3071 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3070 = $tmp3071;
    PANDA_ASSERT(((panda$core$Bit) { src3070 != NULL }).value);
    panda$core$Bit $tmp3072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3072.value) {
    {
        testStart3073 = self->currentBlock;
        panda$core$String* $tmp3075 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3074 = $tmp3075;
        panda$core$String* $tmp3076 = panda$core$String$convert$R$panda$core$String(isNonNull3074);
        panda$core$String* $tmp3078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3076, &$s3077);
        panda$core$String* $tmp3079 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3078, $tmp3079);
        panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3080, &$s3081);
        panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3082, p_value);
        panda$core$String* $tmp3085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, &$s3084);
        (($fn3086) p_out->$class->vtable[19])(p_out, $tmp3085);
        panda$core$String* $tmp3088 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3087 = $tmp3088;
        panda$core$String* $tmp3090 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3089 = $tmp3090;
        panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3091, isNonNull3074);
        panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3093);
        panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, nonNullLabel3087);
        panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, &$s3096);
        panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, endLabel3089);
        panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3098, &$s3099);
        (($fn3101) p_out->$class->vtable[19])(p_out, $tmp3100);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3087, p_out);
        panda$core$Object* $tmp3103 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3104 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3103), p_out);
        unwrapped3102 = $tmp3104;
        panda$core$Object* $tmp3106 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3107 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, unwrapped3102, ((org$pandalanguage$pandac$Type*) $tmp3106), p_dstType, p_out);
        nonNullValue3105 = $tmp3107;
        panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3108, endLabel3089);
        panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, &$s3110);
        (($fn3112) p_out->$class->vtable[19])(p_out, $tmp3111);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3089, p_out);
        panda$core$String* $tmp3114 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3113 = $tmp3114;
        panda$core$String* $tmp3115 = panda$core$String$convert$R$panda$core$String(result3113);
        panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3115, &$s3116);
        panda$core$String* $tmp3118 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, $tmp3118);
        panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, &$s3120);
        panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, testStart3073);
        panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, &$s3123);
        panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3125, nonNullValue3105);
        panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3126, &$s3127);
        panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3128, nonNullLabel3087);
        panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, &$s3130);
        panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, $tmp3131);
        (($fn3133) p_out->$class->vtable[19])(p_out, $tmp3132);
        return result3113;
    }
    }
    panda$core$String* $tmp3135 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3134 = $tmp3135;
    panda$core$String* $tmp3136 = panda$core$String$convert$R$panda$core$String(mallocRef3134);
    panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3136, &$s3137);
    org$pandalanguage$pandac$Type* $tmp3139 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3070);
    panda$core$Int64 $tmp3140 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3139);
    panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3138, ((panda$core$Object*) wrap_panda$core$Int64($tmp3140)));
    panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, &$s3142);
    (($fn3144) p_out->$class->vtable[19])(p_out, $tmp3143);
    org$pandalanguage$pandac$Type* $tmp3146 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3070);
    panda$core$String* $tmp3147 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3146);
    wrapperTypeName3145 = $tmp3147;
    org$pandalanguage$pandac$Type* $tmp3149 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3070);
    panda$core$String* $tmp3150 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3149);
    wrapperType3148 = $tmp3150;
    panda$core$String* $tmp3152 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3151 = $tmp3152;
    panda$core$String* $tmp3153 = panda$core$String$convert$R$panda$core$String(wrapperCast3151);
    panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3153, &$s3154);
    panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, mallocRef3134);
    panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3156, &$s3157);
    panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, wrapperType3148);
    panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, &$s3160);
    (($fn3162) p_out->$class->vtable[19])(p_out, $tmp3161);
    panda$core$String* $tmp3164 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3163 = $tmp3164;
    panda$core$String* $tmp3165 = panda$core$String$convert$R$panda$core$String(classPtr3163);
    panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, &$s3166);
    panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, wrapperTypeName3145);
    panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3168, &$s3169);
    panda$core$String* $tmp3171 = panda$core$String$convert$R$panda$core$String(wrapperType3148);
    panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, &$s3172);
    panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, wrapperCast3151);
    panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, &$s3175);
    panda$core$String* $tmp3177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, $tmp3176);
    (($fn3178) p_out->$class->vtable[19])(p_out, $tmp3177);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3180 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3070);
    cc3179 = $tmp3180;
    panda$core$Bit $tmp3183 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(cc3179->type, &$s3182);
    if ($tmp3183.value) {
    {
        panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3184, cc3179->type);
        panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3185, &$s3186);
        panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3187, cc3179->name);
        panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3188, &$s3189);
        ccCast3181 = $tmp3190;
    }
    }
    else {
    {
        ccCast3181 = cc3179->name;
    }
    }
    panda$core$String* $tmp3192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3191, ccCast3181);
    panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3192, &$s3193);
    panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, classPtr3163);
    panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, &$s3196);
    (($fn3198) p_out->$class->vtable[19])(p_out, $tmp3197);
    panda$core$String* $tmp3200 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3199 = $tmp3200;
    panda$core$String* $tmp3201 = panda$core$String$convert$R$panda$core$String(refCount3199);
    panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3201, &$s3202);
    panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3203, wrapperTypeName3145);
    panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, &$s3205);
    panda$core$String* $tmp3207 = panda$core$String$convert$R$panda$core$String(wrapperType3148);
    panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, &$s3208);
    panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3209, wrapperCast3151);
    panda$core$String* $tmp3212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3210, &$s3211);
    panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, $tmp3212);
    (($fn3214) p_out->$class->vtable[19])(p_out, $tmp3213);
    panda$core$String* $tmp3216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3215, refCount3199);
    panda$core$String* $tmp3218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3216, &$s3217);
    (($fn3219) p_out->$class->vtable[19])(p_out, $tmp3218);
    panda$core$String* $tmp3221 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3220 = $tmp3221;
    panda$core$String* $tmp3222 = panda$core$String$convert$R$panda$core$String(target3220);
    panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3222, &$s3223);
    panda$core$String* $tmp3225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3224, wrapperTypeName3145);
    panda$core$String* $tmp3227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3225, &$s3226);
    panda$core$String* $tmp3228 = panda$core$String$convert$R$panda$core$String(wrapperType3148);
    panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3228, &$s3229);
    panda$core$String* $tmp3231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3230, wrapperCast3151);
    panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3231, &$s3232);
    panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3227, $tmp3233);
    (($fn3235) p_out->$class->vtable[19])(p_out, $tmp3234);
    panda$core$String* $tmp3237 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3236, $tmp3237);
    panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, &$s3239);
    panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3240, p_value);
    panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, &$s3242);
    panda$core$String* $tmp3244 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3243, $tmp3244);
    panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3245, &$s3246);
    panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3247, target3220);
    panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3248, &$s3249);
    (($fn3251) p_out->$class->vtable[19])(p_out, $tmp3250);
    panda$core$String* $tmp3252 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3253 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3148, $tmp3252);
    if ($tmp3253.value) {
    {
        panda$core$String* $tmp3255 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3254 = $tmp3255;
        panda$core$String* $tmp3256 = panda$core$String$convert$R$panda$core$String(result3254);
        panda$core$String* $tmp3258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, &$s3257);
        panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3258, wrapperType3148);
        panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3259, &$s3260);
        panda$core$String* $tmp3262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3261, wrapperCast3151);
        panda$core$String* $tmp3264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3262, &$s3263);
        panda$core$String* $tmp3265 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3264, $tmp3265);
        panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3266, &$s3267);
        (($fn3269) p_out->$class->vtable[19])(p_out, $tmp3268);
        return result3254;
    }
    }
    return wrapperCast3151;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3273;
    panda$core$String* t3274;
    org$pandalanguage$pandac$ClassDecl* cl3278;
    panda$core$String* base3291;
    panda$collections$ListView* fields3294;
    panda$core$Int64$nullable index3296;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3297;
    panda$core$String* result3325;
    panda$core$String* cast3347;
    panda$core$String* ptr3360;
    panda$core$String* result3368;
    panda$core$Bit $tmp3270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3270.value);
    panda$core$Int64 $tmp3271 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3271, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3272.value);
    field3273 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3275 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3273->type);
    t3274 = $tmp3275;
    panda$core$Bit $tmp3276 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3273->annotations);
    if ($tmp3276.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3273->value != NULL }).value);
        panda$core$String* $tmp3277 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, field3273->value, p_out);
        return $tmp3277;
    }
    }
    panda$core$Object* $tmp3279 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3280 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3279)->type);
    cl3278 = $tmp3280;
    PANDA_ASSERT(((panda$core$Bit) { cl3278 != NULL }).value);
    panda$core$Bit $tmp3282 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3278);
    bool $tmp3281 = $tmp3282.value;
    if (!$tmp3281) goto $l3283;
    panda$core$Object* $tmp3285 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3286 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3285)->kind, ((panda$core$Int64) { 1025 }));
    bool $tmp3284 = $tmp3286.value;
    if ($tmp3284) goto $l3287;
    panda$core$Bit $tmp3288 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->currentMethod->methodKind, ((panda$core$Int64) { 59 }));
    $tmp3284 = $tmp3288.value;
    $l3287:;
    panda$core$Bit $tmp3289 = { $tmp3284 };
    $tmp3281 = $tmp3289.value;
    $l3283:;
    panda$core$Bit $tmp3290 = { $tmp3281 };
    if ($tmp3290.value) {
    {
        panda$core$Object* $tmp3292 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3293 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3292), p_out);
        base3291 = $tmp3293;
        panda$collections$ListView* $tmp3295 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3278);
        fields3294 = $tmp3295;
        index3296 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3298 = ((panda$collections$CollectionView*) fields3294)->$class->itable;
        while ($tmp3298->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3298 = $tmp3298->next;
        }
        $fn3300 $tmp3299 = $tmp3298->methods[0];
        panda$core$Int64 $tmp3301 = $tmp3299(((panda$collections$CollectionView*) fields3294));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3297, ((panda$core$Int64) { 0 }), $tmp3301, ((panda$core$Bit) { false }));
        int64_t $tmp3303 = $tmp3297.min.value;
        panda$core$Int64 i3302 = { $tmp3303 };
        int64_t $tmp3305 = $tmp3297.max.value;
        bool $tmp3306 = $tmp3297.inclusive.value;
        if ($tmp3306) goto $l3313; else goto $l3314;
        $l3313:;
        if ($tmp3303 <= $tmp3305) goto $l3307; else goto $l3309;
        $l3314:;
        if ($tmp3303 < $tmp3305) goto $l3307; else goto $l3309;
        $l3307:;
        {
            ITable* $tmp3315 = fields3294->$class->itable;
            while ($tmp3315->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3315 = $tmp3315->next;
            }
            $fn3317 $tmp3316 = $tmp3315->methods[0];
            panda$core$Object* $tmp3318 = $tmp3316(fields3294, i3302);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3318)) == ((panda$core$Object*) field3273) }).value) {
            {
                index3296 = ((panda$core$Int64$nullable) { i3302, true });
                goto $l3309;
            }
            }
        }
        $l3310:;
        int64_t $tmp3320 = $tmp3305 - i3302.value;
        if ($tmp3306) goto $l3321; else goto $l3322;
        $l3321:;
        if ($tmp3320 >= 1) goto $l3319; else goto $l3309;
        $l3322:;
        if ($tmp3320 > 1) goto $l3319; else goto $l3309;
        $l3319:;
        i3302.value += 1;
        goto $l3307;
        $l3309:;
        PANDA_ASSERT(((panda$core$Bit) { index3296.nonnull }).value);
        panda$core$String* $tmp3326 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3325 = $tmp3326;
        panda$core$String* $tmp3327 = panda$core$String$convert$R$panda$core$String(result3325);
        panda$core$String* $tmp3329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3327, &$s3328);
        panda$core$Object* $tmp3330 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3331 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3330)->type);
        panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3329, $tmp3331);
        panda$core$String* $tmp3334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3332, &$s3333);
        panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3334, base3291);
        panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, &$s3336);
        panda$core$String* $tmp3338 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3337, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3296.value))));
        (($fn3339) p_out->$class->vtable[19])(p_out, $tmp3338);
        panda$core$Bit $tmp3341 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(field3273->type);
        bool $tmp3340 = $tmp3341.value;
        if (!$tmp3340) goto $l3342;
        org$pandalanguage$pandac$ClassDecl* $tmp3343 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, field3273->type);
        panda$core$Bit $tmp3344 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp3343);
        panda$core$Bit $tmp3345 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3344);
        $tmp3340 = $tmp3345.value;
        $l3342:;
        panda$core$Bit $tmp3346 = { $tmp3340 };
        if ($tmp3346.value) {
        {
            panda$core$String* $tmp3348 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast3347 = $tmp3348;
            panda$core$String* $tmp3349 = panda$core$String$convert$R$panda$core$String(cast3347);
            panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3349, &$s3350);
            panda$core$String* $tmp3352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3351, result3325);
            panda$core$String* $tmp3354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3352, &$s3353);
            panda$core$String* $tmp3355 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_fieldRef->type);
            panda$core$String* $tmp3356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3354, $tmp3355);
            panda$core$String* $tmp3358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3356, &$s3357);
            (($fn3359) p_out->$class->vtable[19])(p_out, $tmp3358);
            result3325 = cast3347;
        }
        }
        return result3325;
    }
    }
    panda$core$String* $tmp3361 = panda$core$String$convert$R$panda$core$String(t3274);
    panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3361, &$s3362);
    panda$core$String* $tmp3364 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, $tmp3364);
    panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, &$s3366);
    ptr3360 = $tmp3367;
    panda$core$String* $tmp3369 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3368 = $tmp3369;
    panda$core$String* $tmp3370 = panda$core$String$convert$R$panda$core$String(result3368);
    panda$core$String* $tmp3372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3370, &$s3371);
    panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3372, t3274);
    panda$core$String* $tmp3375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3373, &$s3374);
    panda$core$String* $tmp3376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3375, ptr3360);
    panda$core$String* $tmp3378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3376, &$s3377);
    (($fn3379) p_out->$class->vtable[19])(p_out, $tmp3378);
    return result3368;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3380;
    panda$core$String* testStart3383;
    panda$core$String* isNonNull3384;
    panda$core$String* nonNullLabel3397;
    panda$core$String* endLabel3399;
    panda$core$String* wrapped3412;
    panda$core$String* nonNullValue3415;
    panda$core$String* result3423;
    panda$core$String* targetType3451;
    panda$core$String* wrapperTypeName3453;
    panda$core$String* wrapperType3455;
    panda$core$String* srcCast3457;
    panda$core$String* load3473;
    panda$core$String* result3488;
    org$pandalanguage$pandac$ClassDecl* $tmp3381 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3380 = $tmp3381;
    PANDA_ASSERT(((panda$core$Bit) { target3380 != NULL }).value);
    panda$core$Bit $tmp3382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3382.value) {
    {
        testStart3383 = self->currentBlock;
        panda$core$String* $tmp3385 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3384 = $tmp3385;
        panda$core$String* $tmp3386 = panda$core$String$convert$R$panda$core$String(isNonNull3384);
        panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, &$s3387);
        panda$core$String* $tmp3389 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, $tmp3389);
        panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, &$s3391);
        panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3392, p_value);
        panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3393, &$s3394);
        (($fn3396) p_out->$class->vtable[19])(p_out, $tmp3395);
        panda$core$String* $tmp3398 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3397 = $tmp3398;
        panda$core$String* $tmp3400 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3399 = $tmp3400;
        panda$core$String* $tmp3402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3401, isNonNull3384);
        panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3402, &$s3403);
        panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3404, nonNullLabel3397);
        panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, &$s3406);
        panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3407, endLabel3399);
        panda$core$String* $tmp3410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3408, &$s3409);
        (($fn3411) p_out->$class->vtable[19])(p_out, $tmp3410);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3397, p_out);
        panda$core$Object* $tmp3413 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3414 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3413), p_out);
        wrapped3412 = $tmp3414;
        panda$core$Object* $tmp3416 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3417 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, wrapped3412, ((org$pandalanguage$pandac$Type*) $tmp3416), p_dstType, p_out);
        nonNullValue3415 = $tmp3417;
        panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3418, endLabel3399);
        panda$core$String* $tmp3421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3419, &$s3420);
        (($fn3422) p_out->$class->vtable[19])(p_out, $tmp3421);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3399, p_out);
        panda$core$String* $tmp3424 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3423 = $tmp3424;
        panda$core$String* $tmp3425 = panda$core$String$convert$R$panda$core$String(result3423);
        panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3425, &$s3426);
        panda$core$String* $tmp3428 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3427, $tmp3428);
        panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3429, &$s3430);
        panda$core$Object* $tmp3433 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3434 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3433));
        panda$core$String* $tmp3435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3432, $tmp3434);
        panda$core$String* $tmp3437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3435, &$s3436);
        panda$core$String* $tmp3438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3431, $tmp3437);
        panda$core$String* $tmp3440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3439, testStart3383);
        panda$core$String* $tmp3442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3440, &$s3441);
        panda$core$String* $tmp3443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3442, nonNullValue3415);
        panda$core$String* $tmp3445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3443, &$s3444);
        panda$core$String* $tmp3446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3445, nonNullLabel3397);
        panda$core$String* $tmp3448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3446, &$s3447);
        panda$core$String* $tmp3449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3438, $tmp3448);
        (($fn3450) p_out->$class->vtable[19])(p_out, $tmp3449);
        return result3423;
    }
    }
    panda$core$String* $tmp3452 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3451 = $tmp3452;
    panda$core$String* $tmp3454 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3453 = $tmp3454;
    panda$core$String* $tmp3456 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3455 = $tmp3456;
    panda$core$String* $tmp3458 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3457 = $tmp3458;
    panda$core$String* $tmp3459 = panda$core$String$convert$R$panda$core$String(srcCast3457);
    panda$core$String* $tmp3461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3459, &$s3460);
    panda$core$String* $tmp3462 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3461, $tmp3462);
    panda$core$String* $tmp3465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3463, &$s3464);
    panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3465, p_value);
    panda$core$String* $tmp3468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, &$s3467);
    panda$core$String* $tmp3469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3468, wrapperType3455);
    panda$core$String* $tmp3471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3469, &$s3470);
    (($fn3472) p_out->$class->vtable[19])(p_out, $tmp3471);
    panda$core$String* $tmp3474 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3473 = $tmp3474;
    panda$core$String* $tmp3475 = panda$core$String$convert$R$panda$core$String(load3473);
    panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3475, &$s3476);
    panda$core$String* $tmp3478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3477, wrapperTypeName3453);
    panda$core$String* $tmp3480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3478, &$s3479);
    panda$core$String* $tmp3481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3480, wrapperType3455);
    panda$core$String* $tmp3483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3481, &$s3482);
    panda$core$String* $tmp3484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3483, srcCast3457);
    panda$core$String* $tmp3486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3484, &$s3485);
    (($fn3487) p_out->$class->vtable[19])(p_out, $tmp3486);
    panda$core$String* $tmp3489 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3488 = $tmp3489;
    panda$core$String* $tmp3490 = panda$core$String$convert$R$panda$core$String(result3488);
    panda$core$String* $tmp3492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3490, &$s3491);
    panda$core$String* $tmp3493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3492, wrapperTypeName3453);
    panda$core$String* $tmp3495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3493, &$s3494);
    panda$core$String* $tmp3496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3495, load3473);
    panda$core$String* $tmp3498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3496, &$s3497);
    panda$core$String* $tmp3499 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3498, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3499, &$s3500);
    (($fn3502) p_out->$class->vtable[19])(p_out, $tmp3501);
    return result3488;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* nullableType3503;
    panda$core$String* result3505;
    panda$core$String* $tmp3504 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3503 = $tmp3504;
    panda$core$String* $tmp3506 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3505 = $tmp3506;
    panda$core$String* $tmp3507 = panda$core$String$convert$R$panda$core$String(result3505);
    panda$core$String* $tmp3509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3507, &$s3508);
    panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3509, nullableType3503);
    panda$core$String* $tmp3512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3510, &$s3511);
    panda$core$String* $tmp3514 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3513, $tmp3514);
    panda$core$String* $tmp3517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3515, &$s3516);
    panda$core$String* $tmp3518 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3517, $tmp3518);
    panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, &$s3520);
    panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3521, p_value);
    panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, &$s3523);
    panda$core$String* $tmp3525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3512, $tmp3524);
    (($fn3526) p_out->$class->vtable[19])(p_out, $tmp3525);
    return result3505;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* result3527;
    panda$core$String* $tmp3528 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3527 = $tmp3528;
    panda$core$String* $tmp3529 = panda$core$String$convert$R$panda$core$String(result3527);
    panda$core$String* $tmp3531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3529, &$s3530);
    panda$core$String* $tmp3532 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3531, $tmp3532);
    panda$core$String* $tmp3535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3533, &$s3534);
    panda$core$String* $tmp3536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3535, p_value);
    panda$core$String* $tmp3538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3536, &$s3537);
    (($fn3539) p_out->$class->vtable[19])(p_out, $tmp3538);
    return result3527;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$OutputStream* p_out) {
    panda$core$String* op3540;
    panda$core$Int64 size13543;
    panda$core$Int64 size23545;
    org$pandalanguage$pandac$ClassDecl* srcClass3553;
    org$pandalanguage$pandac$ClassDecl* targetClass3555;
    panda$core$String* srcType3594;
    panda$core$String* dstType3596;
    panda$core$String* result3599;
    panda$core$Bit $tmp3541 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3541.value) {
    {
        panda$core$Bit $tmp3542 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3542.value);
        panda$core$Int64 $tmp3544 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13543 = $tmp3544;
        panda$core$Int64 $tmp3546 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23545 = $tmp3546;
        panda$core$Bit $tmp3547 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13543, size23545);
        if ($tmp3547.value) {
        {
            op3540 = &$s3548;
        }
        }
        else {
        panda$core$Bit $tmp3549 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13543, size23545);
        if ($tmp3549.value) {
        {
            panda$core$Bit $tmp3550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3550.value) {
            {
                op3540 = &$s3551;
            }
            }
            else {
            {
                op3540 = &$s3552;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3554 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3553 = $tmp3554;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3553 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3556 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3555 = $tmp3556;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3555 != NULL }).value);
        panda$core$Bit $tmp3558 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3553);
        bool $tmp3557 = $tmp3558.value;
        if (!$tmp3557) goto $l3559;
        panda$core$Bit $tmp3560 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3555);
        panda$core$Bit $tmp3561 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3560);
        $tmp3557 = $tmp3561.value;
        $l3559:;
        panda$core$Bit $tmp3562 = { $tmp3557 };
        if ($tmp3562.value) {
        {
            panda$core$String* $tmp3563 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3563;
        }
        }
        else {
        panda$core$Bit $tmp3565 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3553);
        panda$core$Bit $tmp3566 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3565);
        bool $tmp3564 = $tmp3566.value;
        if (!$tmp3564) goto $l3567;
        panda$core$Bit $tmp3568 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3555);
        $tmp3564 = $tmp3568.value;
        $l3567:;
        panda$core$Bit $tmp3569 = { $tmp3564 };
        if ($tmp3569.value) {
        {
            panda$core$String* $tmp3570 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3570;
        }
        }
        else {
        panda$core$Bit $tmp3573 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3553);
        bool $tmp3572 = $tmp3573.value;
        if (!$tmp3572) goto $l3574;
        panda$core$Bit $tmp3575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3572 = $tmp3575.value;
        $l3574:;
        panda$core$Bit $tmp3576 = { $tmp3572 };
        bool $tmp3571 = $tmp3576.value;
        if (!$tmp3571) goto $l3577;
        panda$core$Object* $tmp3578 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3579 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3578), p_src);
        $tmp3571 = $tmp3579.value;
        $l3577:;
        panda$core$Bit $tmp3580 = { $tmp3571 };
        if ($tmp3580.value) {
        {
            panda$core$String* $tmp3581 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3581;
        }
        }
        else {
        panda$core$Bit $tmp3584 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3555);
        bool $tmp3583 = $tmp3584.value;
        if (!$tmp3583) goto $l3585;
        panda$core$Bit $tmp3586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3583 = $tmp3586.value;
        $l3585:;
        panda$core$Bit $tmp3587 = { $tmp3583 };
        bool $tmp3582 = $tmp3587.value;
        if (!$tmp3582) goto $l3588;
        panda$core$Object* $tmp3589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3590 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3589), p_target);
        $tmp3582 = $tmp3590.value;
        $l3588:;
        panda$core$Bit $tmp3591 = { $tmp3582 };
        if ($tmp3591.value) {
        {
            panda$core$String* $tmp3592 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3592;
        }
        }
        }
        }
        }
        op3540 = &$s3593;
    }
    }
    panda$core$String* $tmp3595 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3594 = $tmp3595;
    panda$core$String* $tmp3597 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3596 = $tmp3597;
    panda$core$Bit $tmp3598 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3594, dstType3596);
    if ($tmp3598.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3600 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3599 = $tmp3600;
    panda$core$String* $tmp3601 = panda$core$String$convert$R$panda$core$String(result3599);
    panda$core$String* $tmp3603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3601, &$s3602);
    panda$core$String* $tmp3604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3603, op3540);
    panda$core$String* $tmp3606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3604, &$s3605);
    panda$core$String* $tmp3607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3606, srcType3594);
    panda$core$String* $tmp3609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3607, &$s3608);
    panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3609, p_value);
    panda$core$String* $tmp3612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3610, &$s3611);
    panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3612, dstType3596);
    panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3613, &$s3614);
    (($fn3616) p_out->$class->vtable[19])(p_out, $tmp3615);
    return result3599;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$OutputStream* p_out) {
    panda$core$String* base3620;
    panda$core$Bit $tmp3617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3617.value);
    panda$core$Int64 $tmp3618 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3618, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3619.value);
    panda$core$Object* $tmp3621 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3622 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3621), p_out);
    base3620 = $tmp3622;
    panda$core$Object* $tmp3623 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3624 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, base3620, ((org$pandalanguage$pandac$IRNode*) $tmp3623)->type, p_cast->type, p_out);
    return $tmp3624;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3628;
    panda$core$String* t3630;
    panda$core$String* value3638;
    panda$core$String* result3649;
    org$pandalanguage$pandac$FieldDecl* lastField3651;
    panda$core$String* value3679;
    panda$core$String* result3690;
    org$pandalanguage$pandac$FieldDecl* lastField3692;
    panda$core$String* alloca3715;
    panda$core$String* result3734;
    panda$core$String* callRef3749;
    panda$core$String* result3759;
    panda$core$String* classPtr3772;
    panda$core$String* className3774;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3799;
    panda$core$Bit $tmp3625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3625.value);
    panda$core$Int64 $tmp3626 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3627 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3626, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3627.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3629 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3628 = $tmp3629;
    PANDA_ASSERT(((panda$core$Bit) { cl3628 != NULL }).value);
    panda$core$String* $tmp3631 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3630 = $tmp3631;
    panda$core$Bit $tmp3632 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3632.value) {
    {
        panda$core$Int64 $tmp3633 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3633, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3634.value);
        panda$core$Object* $tmp3635 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3636 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3635)->children);
        panda$core$Bit $tmp3637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3636, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3637.value);
        panda$core$Object* $tmp3639 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3640 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3639)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3641 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3640), p_out);
        value3638 = $tmp3641;
        panda$core$Object* $tmp3642 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3643 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3642)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3643)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3644.value) {
        {
            panda$core$String* $tmp3646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3645, value3638);
            panda$core$String* $tmp3648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3646, &$s3647);
            return $tmp3648;
        }
        }
        panda$core$String* $tmp3650 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3649 = $tmp3650;
        panda$core$Int64 $tmp3652 = panda$collections$Array$get_count$R$panda$core$Int64(cl3628->fields);
        panda$core$Int64 $tmp3653 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3652, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3654 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3628->fields, $tmp3653);
        lastField3651 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3654);
        panda$core$Bit $tmp3655 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3651->annotations);
        panda$core$Bit $tmp3656 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3655);
        PANDA_ASSERT($tmp3656.value);
        panda$core$String* $tmp3657 = panda$core$String$convert$R$panda$core$String(result3649);
        panda$core$String* $tmp3659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3657, &$s3658);
        panda$core$String* $tmp3660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3659, t3630);
        panda$core$String* $tmp3662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3660, &$s3661);
        panda$core$String* $tmp3663 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3651->type);
        panda$core$String* $tmp3664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3662, $tmp3663);
        panda$core$String* $tmp3666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3664, &$s3665);
        panda$core$String* $tmp3667 = panda$core$String$convert$R$panda$core$String(value3638);
        panda$core$String* $tmp3669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3667, &$s3668);
        panda$core$String* $tmp3670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3666, $tmp3669);
        (($fn3671) p_out->$class->vtable[19])(p_out, $tmp3670);
        return result3649;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3672 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3673 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3672);
    if ($tmp3673.value) {
    {
        panda$core$Int64 $tmp3674 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3674, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3675.value);
        panda$core$Object* $tmp3676 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3677 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3676)->children);
        panda$core$Bit $tmp3678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3677, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3678.value);
        panda$core$Object* $tmp3680 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3681 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3680)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3682 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3681), p_out);
        value3679 = $tmp3682;
        panda$core$Object* $tmp3683 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3684 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3683)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3684)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3685.value) {
        {
            panda$core$String* $tmp3687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3686, value3679);
            panda$core$String* $tmp3689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3687, &$s3688);
            return $tmp3689;
        }
        }
        panda$core$String* $tmp3691 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3690 = $tmp3691;
        panda$core$Int64 $tmp3693 = panda$collections$Array$get_count$R$panda$core$Int64(cl3628->fields);
        panda$core$Int64 $tmp3694 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3693, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3695 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3628->fields, $tmp3694);
        lastField3692 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3695);
        panda$core$Bit $tmp3696 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3692->annotations);
        panda$core$Bit $tmp3697 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3696);
        PANDA_ASSERT($tmp3697.value);
        panda$core$String* $tmp3698 = panda$core$String$convert$R$panda$core$String(result3690);
        panda$core$String* $tmp3700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3698, &$s3699);
        panda$core$String* $tmp3701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3700, t3630);
        panda$core$String* $tmp3703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3701, &$s3702);
        panda$core$String* $tmp3704 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3692->type);
        panda$core$String* $tmp3705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3703, $tmp3704);
        panda$core$String* $tmp3707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3705, &$s3706);
        panda$core$String* $tmp3708 = panda$core$String$convert$R$panda$core$String(value3679);
        panda$core$String* $tmp3710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3708, &$s3709);
        panda$core$String* $tmp3711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3707, $tmp3710);
        (($fn3712) p_out->$class->vtable[19])(p_out, $tmp3711);
        return result3690;
    }
    }
    panda$core$Bit $tmp3713 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3628);
    if ($tmp3713.value) {
    {
        panda$core$Int64 $tmp3714 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3714;
        panda$core$String* $tmp3717 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3716, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3717, &$s3718);
        alloca3715 = $tmp3719;
        panda$core$String* $tmp3720 = panda$core$String$convert$R$panda$core$String(alloca3715);
        panda$core$String* $tmp3722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3720, &$s3721);
        panda$core$String* $tmp3723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3722, t3630);
        panda$core$String* $tmp3725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3723, &$s3724);
        (($fn3726) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3725);
        panda$core$Object* $tmp3727 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3728 = panda$core$String$convert$R$panda$core$String(t3630);
        panda$core$String* $tmp3730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3728, &$s3729);
        panda$core$String* $tmp3731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3730, alloca3715);
        panda$core$String* $tmp3733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3731, &$s3732);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3727), $tmp3733, p_out);
        panda$core$String* $tmp3735 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3734 = $tmp3735;
        panda$core$String* $tmp3736 = panda$core$String$convert$R$panda$core$String(result3734);
        panda$core$String* $tmp3738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3736, &$s3737);
        panda$core$String* $tmp3739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3738, t3630);
        panda$core$String* $tmp3741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3739, &$s3740);
        panda$core$String* $tmp3742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3741, t3630);
        panda$core$String* $tmp3744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3742, &$s3743);
        panda$core$String* $tmp3745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3744, alloca3715);
        panda$core$String* $tmp3747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3745, &$s3746);
        (($fn3748) p_out->$class->vtable[19])(p_out, $tmp3747);
        return result3734;
    }
    }
    panda$core$String* $tmp3750 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3749 = $tmp3750;
    panda$core$String* $tmp3751 = panda$core$String$convert$R$panda$core$String(callRef3749);
    panda$core$String* $tmp3753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3751, &$s3752);
    panda$core$Int64 $tmp3754 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3755 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3753, ((panda$core$Object*) wrap_panda$core$Int64($tmp3754)));
    panda$core$String* $tmp3757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3755, &$s3756);
    (($fn3758) p_out->$class->vtable[19])(p_out, $tmp3757);
    panda$core$String* $tmp3760 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3759 = $tmp3760;
    panda$core$String* $tmp3761 = panda$core$String$convert$R$panda$core$String(result3759);
    panda$core$String* $tmp3763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3761, &$s3762);
    panda$core$String* $tmp3764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3763, callRef3749);
    panda$core$String* $tmp3766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3764, &$s3765);
    panda$core$String* $tmp3767 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3766, $tmp3767);
    panda$core$String* $tmp3770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3768, &$s3769);
    (($fn3771) p_out->$class->vtable[19])(p_out, $tmp3770);
    panda$core$String* $tmp3773 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3772 = $tmp3773;
    panda$core$Bit $tmp3776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3775 = $tmp3776.value;
    if (!$tmp3775) goto $l3777;
    panda$core$Bit $tmp3778 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3628);
    panda$core$Bit $tmp3779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3778);
    $tmp3775 = $tmp3779.value;
    $l3777:;
    panda$core$Bit $tmp3780 = { $tmp3775 };
    if ($tmp3780.value) {
    {
        panda$core$Object* $tmp3781 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3782 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3781));
        className3774 = $tmp3782;
    }
    }
    else {
    {
        panda$core$String* $tmp3783 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3774 = $tmp3783;
    }
    }
    panda$core$String* $tmp3784 = panda$core$String$convert$R$panda$core$String(classPtr3772);
    panda$core$String* $tmp3786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3784, &$s3785);
    panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3786, className3774);
    panda$core$String* $tmp3789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3787, &$s3788);
    panda$core$String* $tmp3790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3789, t3630);
    panda$core$String* $tmp3792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3790, &$s3791);
    panda$core$String* $tmp3793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3792, result3759);
    panda$core$String* $tmp3795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3793, &$s3794);
    panda$core$String* $tmp3797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3795, &$s3796);
    (($fn3798) p_out->$class->vtable[19])(p_out, $tmp3797);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3800 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3628);
    cc3799 = $tmp3800;
    panda$core$String* $tmp3802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3801, cc3799->type);
    panda$core$String* $tmp3804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3802, &$s3803);
    panda$core$String* $tmp3805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3804, cc3799->name);
    panda$core$String* $tmp3807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3805, &$s3806);
    panda$core$String* $tmp3809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3808, classPtr3772);
    panda$core$String* $tmp3811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3809, &$s3810);
    panda$core$String* $tmp3812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3807, $tmp3811);
    (($fn3813) p_out->$class->vtable[19])(p_out, $tmp3812);
    panda$core$Object* $tmp3814 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3815 = panda$core$String$convert$R$panda$core$String(t3630);
    panda$core$String* $tmp3817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3815, &$s3816);
    panda$core$String* $tmp3818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3817, result3759);
    panda$core$String* $tmp3820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3818, &$s3819);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3814), $tmp3820, p_out);
    return result3759;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3821 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3821;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3823 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3822, $tmp3823);
    return $tmp3824;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$OutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3825;
    }
    }
    return &$s3826;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$OutputStream* p_out) {
    panda$core$String* result3829;
    panda$core$String* t3831;
    panda$core$Bit $tmp3827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3827.value) {
    {
        panda$core$String* $tmp3828 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3828;
    }
    }
    panda$core$String* $tmp3830 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3829 = $tmp3830;
    panda$core$String* $tmp3832 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3831 = $tmp3832;
    panda$core$String* $tmp3833 = panda$core$String$convert$R$panda$core$String(result3829);
    panda$core$String* $tmp3835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3833, &$s3834);
    panda$core$String* $tmp3836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3835, t3831);
    panda$core$String* $tmp3838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3836, &$s3837);
    panda$core$String* $tmp3839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3838, t3831);
    panda$core$String* $tmp3841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3839, &$s3840);
    panda$core$String* $tmp3842 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3841, $tmp3842);
    panda$core$String* $tmp3845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3843, &$s3844);
    (($fn3846) p_out->$class->vtable[19])(p_out, $tmp3845);
    return result3829;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* chars3848;
    panda$core$String* charsType3853;
    panda$core$String* separator3870;
    panda$collections$Iterator* c$Iter3872;
    panda$core$Char8 c3885;
    panda$core$String* result3902;
    org$pandalanguage$pandac$ClassDecl* string3907;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3910;
    panda$core$Int64 $tmp3847 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3847;
    panda$core$String* $tmp3850 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3849, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3850, &$s3851);
    chars3848 = $tmp3852;
    panda$collections$ListView* $tmp3855 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3856 = ((panda$collections$CollectionView*) $tmp3855)->$class->itable;
    while ($tmp3856->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3856 = $tmp3856->next;
    }
    $fn3858 $tmp3857 = $tmp3856->methods[0];
    panda$core$Int64 $tmp3859 = $tmp3857(((panda$collections$CollectionView*) $tmp3855));
    panda$core$String* $tmp3860 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3854, ((panda$core$Object*) wrap_panda$core$Int64($tmp3859)));
    panda$core$String* $tmp3862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3860, &$s3861);
    charsType3853 = $tmp3862;
    panda$core$String* $tmp3863 = panda$core$String$convert$R$panda$core$String(chars3848);
    panda$core$String* $tmp3865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3863, &$s3864);
    panda$core$String* $tmp3866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3865, charsType3853);
    panda$core$String* $tmp3868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3866, &$s3867);
    (($fn3869) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3868);
    separator3870 = &$s3871;
    {
        panda$collections$ListView* $tmp3873 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp3874 = ((panda$collections$Iterable*) $tmp3873)->$class->itable;
        while ($tmp3874->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3874 = $tmp3874->next;
        }
        $fn3876 $tmp3875 = $tmp3874->methods[0];
        panda$collections$Iterator* $tmp3877 = $tmp3875(((panda$collections$Iterable*) $tmp3873));
        c$Iter3872 = $tmp3877;
        $l3878:;
        ITable* $tmp3880 = c$Iter3872->$class->itable;
        while ($tmp3880->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3880 = $tmp3880->next;
        }
        $fn3882 $tmp3881 = $tmp3880->methods[0];
        panda$core$Bit $tmp3883 = $tmp3881(c$Iter3872);
        panda$core$Bit $tmp3884 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3883);
        if (!$tmp3884.value) goto $l3879;
        {
            ITable* $tmp3886 = c$Iter3872->$class->itable;
            while ($tmp3886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3886 = $tmp3886->next;
            }
            $fn3888 $tmp3887 = $tmp3886->methods[1];
            panda$core$Object* $tmp3889 = $tmp3887(c$Iter3872);
            c3885 = ((panda$core$Char8$wrapper*) $tmp3889)->value;
            panda$core$String* $tmp3890 = panda$core$String$convert$R$panda$core$String(separator3870);
            panda$core$String* $tmp3892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3890, &$s3891);
            panda$core$Int8 $tmp3893 = panda$core$Char8$convert$R$panda$core$Int8(c3885);
            panda$core$String* $tmp3894 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3892, ((panda$core$Object*) wrap_panda$core$Int8($tmp3893)));
            panda$core$String* $tmp3896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3894, &$s3895);
            (($fn3897) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3896);
            separator3870 = &$s3898;
        }
        goto $l3878;
        $l3879:;
    }
    (($fn3900) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s3899);
    panda$core$Int64 $tmp3901 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3901;
    panda$core$String* $tmp3904 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3903, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3904, &$s3905);
    result3902 = $tmp3906;
    org$pandalanguage$pandac$Type* $tmp3908 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3909 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp3908);
    string3907 = $tmp3909;
    PANDA_ASSERT(((panda$core$Bit) { string3907 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3911 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string3907);
    cc3910 = $tmp3911;
    panda$core$String* $tmp3912 = panda$core$String$convert$R$panda$core$String(result3902);
    panda$core$String* $tmp3914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3912, &$s3913);
    panda$core$String* $tmp3916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3915, cc3910->type);
    panda$core$String* $tmp3918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3916, &$s3917);
    panda$core$String* $tmp3919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3918, cc3910->name);
    panda$core$String* $tmp3921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3919, &$s3920);
    panda$core$String* $tmp3922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3914, $tmp3921);
    panda$core$String* $tmp3924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3922, &$s3923);
    panda$core$String* $tmp3926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3925, charsType3853);
    panda$core$String* $tmp3928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3926, &$s3927);
    panda$core$String* $tmp3929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3928, chars3848);
    panda$core$String* $tmp3931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3929, &$s3930);
    panda$core$String* $tmp3932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3924, $tmp3931);
    panda$collections$ListView* $tmp3934 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3935 = ((panda$collections$CollectionView*) $tmp3934)->$class->itable;
    while ($tmp3935->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3935 = $tmp3935->next;
    }
    $fn3937 $tmp3936 = $tmp3935->methods[0];
    panda$core$Int64 $tmp3938 = $tmp3936(((panda$collections$CollectionView*) $tmp3934));
    panda$core$String* $tmp3939 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3933, ((panda$core$Object*) wrap_panda$core$Int64($tmp3938)));
    panda$core$String* $tmp3941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3939, &$s3940);
    panda$core$String* $tmp3942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3932, $tmp3941);
    panda$core$Int64 $tmp3944 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$String* $tmp3945 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3943, ((panda$core$Object*) wrap_panda$core$Int64($tmp3944)));
    panda$core$String* $tmp3947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3945, &$s3946);
    panda$core$String* $tmp3948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3942, $tmp3947);
    (($fn3949) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp3948);
    return result3902;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$Int64 $tmp3950 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp3951 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3950, ((panda$core$Int64) { 0 }));
    if ($tmp3951.value) {
    {
        panda$core$Object* $tmp3952 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp3952)->selfRef;
    }
    }
    return &$s3953;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* result3954;
    panda$core$String* ref3956;
    panda$core$String* $tmp3955 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3954 = $tmp3955;
    panda$core$String* $tmp3957 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_s, p_out);
    ref3956 = $tmp3957;
    panda$core$String* $tmp3958 = panda$core$String$convert$R$panda$core$String(result3954);
    panda$core$String* $tmp3960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3958, &$s3959);
    panda$core$String* $tmp3961 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, self->currentMethod);
    panda$core$String* $tmp3962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3960, $tmp3961);
    panda$core$String* $tmp3964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3962, &$s3963);
    panda$core$String* $tmp3965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3964, ref3956);
    panda$core$String* $tmp3967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3965, &$s3966);
    panda$core$String* $tmp3968 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp3969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3967, $tmp3968);
    panda$core$String* $tmp3971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3969, &$s3970);
    (($fn3972) p_out->$class->vtable[19])(p_out, $tmp3971);
    return result3954;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value3976;
    org$pandalanguage$pandac$ClassDecl* cl3979;
    panda$core$String* resultValue3982;
    panda$core$String* field3987;
    panda$core$String* result4012;
    panda$core$Bit $tmp3973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp3973.value);
    panda$core$Int64 $tmp3974 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3974, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3975.value);
    panda$core$Object* $tmp3977 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3978 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3977), p_out);
    value3976 = $tmp3978;
    panda$core$Object* $tmp3980 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3981 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3980)->type);
    cl3979 = $tmp3981;
    panda$core$Bit $tmp3983 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3979);
    if ($tmp3983.value) {
    {
        panda$core$Object* $tmp3984 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3985 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3984)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3985.value) {
        {
            return &$s3986;
        }
        }
        panda$core$String* $tmp3988 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field3987 = $tmp3988;
        panda$core$String* $tmp3989 = panda$core$String$convert$R$panda$core$String(field3987);
        panda$core$String* $tmp3991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3989, &$s3990);
        panda$core$String* $tmp3992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3991, value3976);
        panda$core$String* $tmp3994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3992, &$s3993);
        (($fn3995) p_out->$class->vtable[19])(p_out, $tmp3994);
        panda$core$String* $tmp3996 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3982 = $tmp3996;
        panda$core$String* $tmp3997 = panda$core$String$convert$R$panda$core$String(resultValue3982);
        panda$core$String* $tmp3999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3997, &$s3998);
        panda$core$String* $tmp4000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3999, field3987);
        panda$core$String* $tmp4002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4000, &$s4001);
        (($fn4003) p_out->$class->vtable[19])(p_out, $tmp4002);
    }
    }
    else {
    {
        panda$core$String* $tmp4004 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3982 = $tmp4004;
        panda$core$String* $tmp4005 = panda$core$String$convert$R$panda$core$String(resultValue3982);
        panda$core$String* $tmp4007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4005, &$s4006);
        panda$core$String* $tmp4008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4007, value3976);
        panda$core$String* $tmp4010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4008, &$s4009);
        (($fn4011) p_out->$class->vtable[19])(p_out, $tmp4010);
    }
    }
    panda$core$String* $tmp4013 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4012 = $tmp4013;
    panda$core$String* $tmp4014 = panda$core$String$convert$R$panda$core$String(result4012);
    panda$core$String* $tmp4016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4014, &$s4015);
    panda$core$String* $tmp4017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4016, resultValue3982);
    panda$core$String* $tmp4019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4017, &$s4018);
    (($fn4020) p_out->$class->vtable[19])(p_out, $tmp4019);
    return result4012;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value4024;
    org$pandalanguage$pandac$ClassDecl* cl4027;
    panda$core$String* resultValue4030;
    panda$core$String* result4051;
    panda$core$Bit $tmp4021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp4021.value);
    panda$core$Int64 $tmp4022 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4022, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4023.value);
    panda$core$Object* $tmp4025 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4026 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4025), p_out);
    value4024 = $tmp4026;
    panda$core$Object* $tmp4028 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4029 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4028)->type);
    cl4027 = $tmp4029;
    panda$core$Bit $tmp4031 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4027);
    if ($tmp4031.value) {
    {
        panda$core$Object* $tmp4032 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4033 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4032)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4033.value) {
        {
            return &$s4034;
        }
        }
        panda$core$String* $tmp4035 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4030 = $tmp4035;
        panda$core$String* $tmp4036 = panda$core$String$convert$R$panda$core$String(resultValue4030);
        panda$core$String* $tmp4038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4036, &$s4037);
        panda$core$String* $tmp4039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4038, value4024);
        panda$core$String* $tmp4041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4039, &$s4040);
        (($fn4042) p_out->$class->vtable[19])(p_out, $tmp4041);
    }
    }
    else {
    {
        panda$core$String* $tmp4043 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4030 = $tmp4043;
        panda$core$String* $tmp4044 = panda$core$String$convert$R$panda$core$String(resultValue4030);
        panda$core$String* $tmp4046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4044, &$s4045);
        panda$core$String* $tmp4047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4046, value4024);
        panda$core$String* $tmp4049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4047, &$s4048);
        (($fn4050) p_out->$class->vtable[19])(p_out, $tmp4049);
    }
    }
    panda$core$String* $tmp4052 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4051 = $tmp4052;
    panda$core$String* $tmp4053 = panda$core$String$convert$R$panda$core$String(result4051);
    panda$core$String* $tmp4055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4053, &$s4054);
    panda$core$String* $tmp4056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4055, resultValue4030);
    panda$core$String* $tmp4058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4056, &$s4057);
    (($fn4059) p_out->$class->vtable[19])(p_out, $tmp4058);
    return result4051;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4061;
    panda$core$Bit $tmp4060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp4060.value);
    panda$core$Object* $tmp4062 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4063 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4062));
    cl4061 = $tmp4063;
    PANDA_ASSERT(((panda$core$Bit) { cl4061 != NULL }).value);
    panda$core$Bit $tmp4064 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4061);
    if ($tmp4064.value) {
    {
        panda$core$Object* $tmp4066 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4067 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4066));
        panda$core$String* $tmp4068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4065, $tmp4067);
        panda$core$String* $tmp4070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4068, &$s4069);
        return $tmp4070;
    }
    }
    else {
    {
        return &$s4071;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* base4075;
    panda$core$String* result4078;
    panda$core$Bit $tmp4072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp4072.value);
    panda$core$Int64 $tmp4073 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp4074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4073, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4074.value);
    panda$core$Object* $tmp4076 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4077 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4076), p_out);
    base4075 = $tmp4077;
    panda$core$String* $tmp4079 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4078 = $tmp4079;
    panda$core$Int64 $tmp4080 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp4080.value) {
        case 52:
        {
            panda$core$String* $tmp4081 = panda$core$String$convert$R$panda$core$String(result4078);
            panda$core$String* $tmp4083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4081, &$s4082);
            panda$core$String* $tmp4084 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4083, $tmp4084);
            panda$core$String* $tmp4087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4085, &$s4086);
            panda$core$String* $tmp4088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4087, base4075);
            panda$core$String* $tmp4090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4088, &$s4089);
            (($fn4091) p_out->$class->vtable[19])(p_out, $tmp4090);
            return result4078;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp4092 = panda$core$String$convert$R$panda$core$String(result4078);
            panda$core$String* $tmp4094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4092, &$s4093);
            panda$core$String* $tmp4095 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4094, $tmp4095);
            panda$core$String* $tmp4098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4096, &$s4097);
            panda$core$String* $tmp4099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4098, base4075);
            panda$core$String* $tmp4101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4099, &$s4100);
            (($fn4102) p_out->$class->vtable[19])(p_out, $tmp4101);
            return result4078;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* value4115;
    panda$core$String* result4118;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4103 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4103;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4104 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4104;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4105 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4105;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4106 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4106;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4107 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4107;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4108 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4108;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4109 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4109;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4110 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4110;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4111 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4111;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4112 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4112;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4113 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4113;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4114 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4114;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4116 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4117 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4116), p_out);
            value4115 = $tmp4117;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4115));
            return value4115;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4119 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4118 = ((panda$core$String*) $tmp4119);
            PANDA_ASSERT(((panda$core$Bit) { result4118 != NULL }).value);
            return result4118;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4120 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4120;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4121 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4121;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4122 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4122;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4123 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4123;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp4124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1025 }));
    if ($tmp4124.value) {
    {
        panda$core$String* $tmp4125 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, self->currentMethod);
        panda$core$String* $tmp4126 = panda$core$String$convert$R$panda$core$String($tmp4125);
        panda$core$String* $tmp4128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4126, &$s4127);
        panda$core$String* $tmp4129 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
        panda$core$String* $tmp4130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4128, $tmp4129);
        panda$core$String* $tmp4132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4130, &$s4131);
        return $tmp4132;
    }
    }
    panda$core$String* $tmp4133 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4134 = panda$core$String$convert$R$panda$core$String($tmp4133);
    panda$core$String* $tmp4136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4134, &$s4135);
    panda$core$String* $tmp4137 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4136, $tmp4137);
    panda$core$String* $tmp4140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4138, &$s4139);
    return $tmp4140;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$OutputStream* p_out) {
    panda$collections$Iterator* s$Iter4142;
    org$pandalanguage$pandac$IRNode* s4154;
    panda$core$Bit $tmp4141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4141.value);
    {
        ITable* $tmp4143 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4143->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4143 = $tmp4143->next;
        }
        $fn4145 $tmp4144 = $tmp4143->methods[0];
        panda$collections$Iterator* $tmp4146 = $tmp4144(((panda$collections$Iterable*) p_block->children));
        s$Iter4142 = $tmp4146;
        $l4147:;
        ITable* $tmp4149 = s$Iter4142->$class->itable;
        while ($tmp4149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4149 = $tmp4149->next;
        }
        $fn4151 $tmp4150 = $tmp4149->methods[0];
        panda$core$Bit $tmp4152 = $tmp4150(s$Iter4142);
        panda$core$Bit $tmp4153 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4152);
        if (!$tmp4153.value) goto $l4148;
        {
            ITable* $tmp4155 = s$Iter4142->$class->itable;
            while ($tmp4155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4155 = $tmp4155->next;
            }
            $fn4157 $tmp4156 = $tmp4155->methods[1];
            panda$core$Object* $tmp4158 = $tmp4156(s$Iter4142);
            s4154 = ((org$pandalanguage$pandac$IRNode*) $tmp4158);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s4154, p_out);
        }
        goto $l4147;
        $l4148:;
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4159;
    panda$core$String* $match$1948_94160;
    panda$core$String* ptr4165;
    panda$core$String* arg4168;
    org$pandalanguage$pandac$Type* baseType4188;
    panda$core$String* base4192;
    panda$core$String* indexStruct4195;
    panda$core$String* index4198;
    panda$core$String* value4207;
    panda$core$String* ptr4211;
    panda$core$String* ptr4248;
    panda$core$String* cast4251;
    m4159 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1948_94160 = ((org$pandalanguage$pandac$Symbol*) m4159->value)->name;
        panda$core$Bit $tmp4162 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1948_94160, &$s4161);
        if ($tmp4162.value) {
        {
            panda$core$Int64 $tmp4163 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4163, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4164.value);
            panda$core$Object* $tmp4166 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4167 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4166), p_out);
            ptr4165 = $tmp4167;
            panda$core$Object* $tmp4169 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4170 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4169));
            panda$core$String* $tmp4171 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4170, p_out);
            arg4168 = $tmp4171;
            panda$core$String* $tmp4173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4172, arg4168);
            panda$core$String* $tmp4175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4173, &$s4174);
            panda$core$String* $tmp4176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4175, ptr4165);
            panda$core$String* $tmp4178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4176, &$s4177);
            (($fn4179) p_out->$class->vtable[19])(p_out, $tmp4178);
        }
        }
        else {
        panda$core$Bit $tmp4181 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1948_94160, &$s4180);
        if ($tmp4181.value) {
        {
            panda$core$Int64 $tmp4182 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4182, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4183.value);
            panda$core$Object* $tmp4184 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4185 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4184));
            panda$core$Int64 $tmp4186 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4185->type->subtypes);
            panda$core$Bit $tmp4187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4186, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4187.value);
            panda$core$Object* $tmp4189 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4190 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4189));
            panda$core$Object* $tmp4191 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4190->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4188 = ((org$pandalanguage$pandac$Type*) $tmp4191);
            panda$core$Object* $tmp4193 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4194 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4193), p_out);
            base4192 = $tmp4194;
            panda$core$Object* $tmp4196 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4197 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4196), p_out);
            indexStruct4195 = $tmp4197;
            panda$core$String* $tmp4199 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4198 = $tmp4199;
            panda$core$String* $tmp4200 = panda$core$String$convert$R$panda$core$String(index4198);
            panda$core$String* $tmp4202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4200, &$s4201);
            panda$core$String* $tmp4203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4202, indexStruct4195);
            panda$core$String* $tmp4205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4203, &$s4204);
            (($fn4206) p_out->$class->vtable[19])(p_out, $tmp4205);
            panda$core$Object* $tmp4208 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4209 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4208));
            panda$core$String* $tmp4210 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4209, p_out);
            value4207 = $tmp4210;
            panda$core$String* $tmp4212 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4211 = $tmp4212;
            panda$core$String* $tmp4213 = panda$core$String$convert$R$panda$core$String(ptr4211);
            panda$core$String* $tmp4215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4213, &$s4214);
            panda$core$String* $tmp4216 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4188);
            panda$core$String* $tmp4217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4215, $tmp4216);
            panda$core$String* $tmp4219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4217, &$s4218);
            panda$core$String* $tmp4220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4219, base4192);
            panda$core$String* $tmp4222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4220, &$s4221);
            panda$core$String* $tmp4224 = panda$core$String$convert$R$panda$core$String(&$s4223);
            panda$core$String* $tmp4226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4224, &$s4225);
            panda$core$String* $tmp4227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4226, index4198);
            panda$core$String* $tmp4229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4227, &$s4228);
            panda$core$String* $tmp4230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4222, $tmp4229);
            (($fn4231) p_out->$class->vtable[19])(p_out, $tmp4230);
            panda$core$String* $tmp4233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4232, value4207);
            panda$core$String* $tmp4235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4233, &$s4234);
            panda$core$String* $tmp4236 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4188);
            panda$core$String* $tmp4237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4235, $tmp4236);
            panda$core$String* $tmp4239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4237, &$s4238);
            panda$core$String* $tmp4240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4239, ptr4211);
            panda$core$String* $tmp4242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4240, &$s4241);
            (($fn4243) p_out->$class->vtable[19])(p_out, $tmp4242);
        }
        }
        else {
        panda$core$Bit $tmp4245 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1948_94160, &$s4244);
        if ($tmp4245.value) {
        {
            panda$core$Int64 $tmp4246 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4246, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4247.value);
            panda$core$Object* $tmp4249 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4250 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4249), p_out);
            ptr4248 = $tmp4250;
            panda$core$String* $tmp4252 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4251 = $tmp4252;
            panda$core$String* $tmp4253 = panda$core$String$convert$R$panda$core$String(cast4251);
            panda$core$String* $tmp4255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4253, &$s4254);
            panda$core$String* $tmp4256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4255, ptr4248);
            panda$core$String* $tmp4258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4256, &$s4257);
            (($fn4259) p_out->$class->vtable[19])(p_out, $tmp4258);
            panda$core$String* $tmp4261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4260, cast4251);
            panda$core$String* $tmp4263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4261, &$s4262);
            (($fn4264) p_out->$class->vtable[19])(p_out, $tmp4263);
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
    org$pandalanguage$pandac$MethodDecl* m4266;
    org$pandalanguage$pandac$Type* actualMethodType4269;
    panda$core$String* actualResultType4270;
    panda$core$Bit isSuper4271;
    panda$collections$Array* args4291;
    panda$core$Int64 offset4294;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4299;
    panda$core$String* arg4318;
    panda$core$String* refTarget4350;
    panda$core$String* methodRef4354;
    panda$core$String* separator4356;
    panda$core$String* indirectVar4360;
    panda$core$String* resultType4363;
    panda$collections$Iterator* a$Iter4405;
    panda$core$String* a4417;
    panda$core$Bit $tmp4265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4265.value);
    m4266 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4268 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4266->owner)->name, &$s4267);
    if ($tmp4268.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4266->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4266);
    }
    }
    panda$core$Int64 $tmp4273 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4274 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4273, ((panda$core$Int64) { 1 }));
    bool $tmp4272 = $tmp4274.value;
    if (!$tmp4272) goto $l4275;
    panda$core$Object* $tmp4276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4276)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4272 = $tmp4277.value;
    $l4275:;
    panda$core$Bit $tmp4278 = { $tmp4272 };
    isSuper4271 = $tmp4278;
    panda$core$Bit $tmp4280 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4271);
    bool $tmp4279 = $tmp4280.value;
    if (!$tmp4279) goto $l4281;
    panda$core$Bit $tmp4282 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4266);
    $tmp4279 = $tmp4282.value;
    $l4281:;
    panda$core$Bit $tmp4283 = { $tmp4279 };
    if ($tmp4283.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4284 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4266);
        actualMethodType4269 = $tmp4284;
        panda$core$Int64 $tmp4285 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4269->subtypes);
        panda$core$Int64 $tmp4286 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4285, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4287 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4269->subtypes, $tmp4286);
        panda$core$String* $tmp4288 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4287));
        actualResultType4270 = $tmp4288;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4289 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4266);
        actualMethodType4269 = $tmp4289;
        panda$core$String* $tmp4290 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4270 = $tmp4290;
    }
    }
    panda$collections$Array* $tmp4292 = (panda$collections$Array*) malloc(40);
    $tmp4292->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4292->refCount.value = 1;
    panda$collections$Array$init($tmp4292);
    args4291 = $tmp4292;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4291, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4295 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4296 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4269->subtypes);
    panda$core$Int64 $tmp4297 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4295, $tmp4296);
    panda$core$Int64 $tmp4298 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4297, ((panda$core$Int64) { 1 }));
    offset4294 = $tmp4298;
    panda$core$Int64 $tmp4300 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4299, ((panda$core$Int64) { 0 }), $tmp4300, ((panda$core$Bit) { false }));
    int64_t $tmp4302 = $tmp4299.min.value;
    panda$core$Int64 i4301 = { $tmp4302 };
    int64_t $tmp4304 = $tmp4299.max.value;
    bool $tmp4305 = $tmp4299.inclusive.value;
    if ($tmp4305) goto $l4312; else goto $l4313;
    $l4312:;
    if ($tmp4302 <= $tmp4304) goto $l4306; else goto $l4308;
    $l4313:;
    if ($tmp4302 < $tmp4304) goto $l4306; else goto $l4308;
    $l4306:;
    {
        panda$core$Object* $tmp4314 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4301);
        panda$core$Bit $tmp4315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4314)->kind, ((panda$core$Int64) { 1025 }));
        if ($tmp4315.value) {
        {
            panda$core$Object* $tmp4316 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4301);
            panda$core$String* $tmp4317 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4316), p_out);
            panda$collections$Array$add$panda$collections$Array$T(args4291, ((panda$core$Object*) $tmp4317));
            goto $l4309;
        }
        }
        panda$core$Object* $tmp4319 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4301);
        panda$core$String* $tmp4320 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4319), p_out);
        arg4318 = $tmp4320;
        panda$core$Bit $tmp4322 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4301, offset4294);
        bool $tmp4321 = $tmp4322.value;
        if (!$tmp4321) goto $l4323;
        panda$core$Int64 $tmp4324 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4301, offset4294);
        panda$core$Object* $tmp4325 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4269->subtypes, $tmp4324);
        panda$core$Object* $tmp4326 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4301);
        panda$core$Bit $tmp4327 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4325), ((org$pandalanguage$pandac$IRNode*) $tmp4326)->type);
        $tmp4321 = $tmp4327.value;
        $l4323:;
        panda$core$Bit $tmp4328 = { $tmp4321 };
        if ($tmp4328.value) {
        {
            panda$core$Int64 $tmp4329 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4301, offset4294);
            panda$core$Object* $tmp4330 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4269->subtypes, $tmp4329);
            panda$core$String* $tmp4331 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4330));
            panda$core$String* $tmp4333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4331, &$s4332);
            panda$core$Object* $tmp4334 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4301);
            panda$core$Int64 $tmp4335 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4301, offset4294);
            panda$core$Object* $tmp4336 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4269->subtypes, $tmp4335);
            panda$core$String* $tmp4337 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg4318, ((org$pandalanguage$pandac$IRNode*) $tmp4334)->type, ((org$pandalanguage$pandac$Type*) $tmp4336), p_out);
            panda$core$String* $tmp4338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4333, $tmp4337);
            arg4318 = $tmp4338;
        }
        }
        else {
        {
            panda$core$Object* $tmp4339 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4301);
            panda$core$String* $tmp4340 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4339)->type);
            panda$core$String* $tmp4342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4340, &$s4341);
            panda$core$String* $tmp4343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4342, arg4318);
            arg4318 = $tmp4343;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4291, ((panda$core$Object*) arg4318));
    }
    $l4309:;
    int64_t $tmp4345 = $tmp4304 - i4301.value;
    if ($tmp4305) goto $l4346; else goto $l4347;
    $l4346:;
    if ($tmp4345 >= 1) goto $l4344; else goto $l4308;
    $l4347:;
    if ($tmp4345 > 1) goto $l4344; else goto $l4308;
    $l4344:;
    i4301.value += 1;
    goto $l4306;
    $l4308:;
    panda$core$Int64 $tmp4351 = panda$collections$Array$get_count$R$panda$core$Int64(args4291);
    panda$core$Bit $tmp4352 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4351, ((panda$core$Int64) { 0 }));
    if ($tmp4352.value) {
    {
        panda$core$Object* $tmp4353 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4291, ((panda$core$Int64) { 0 }));
        refTarget4350 = ((panda$core$String*) $tmp4353);
    }
    }
    else {
    {
        refTarget4350 = NULL;
    }
    }
    panda$core$String* $tmp4355 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, refTarget4350, m4266, isSuper4271, p_out);
    methodRef4354 = $tmp4355;
    separator4356 = &$s4357;
    panda$core$Bit $tmp4358 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4266);
    if ($tmp4358.value) {
    {
        panda$core$Int64 $tmp4359 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4359;
        panda$core$String* $tmp4362 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4361, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4360 = $tmp4362;
        panda$core$String* $tmp4364 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4363 = $tmp4364;
        panda$core$String* $tmp4365 = panda$core$String$convert$R$panda$core$String(indirectVar4360);
        panda$core$String* $tmp4367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4365, &$s4366);
        panda$core$String* $tmp4368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4367, resultType4363);
        panda$core$String* $tmp4370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4368, &$s4369);
        (($fn4371) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4370);
        panda$core$String* $tmp4373 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4266);
        panda$core$String* $tmp4374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4372, $tmp4373);
        panda$core$String* $tmp4376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4374, &$s4375);
        panda$core$String* $tmp4377 = panda$core$String$convert$R$panda$core$String(methodRef4354);
        panda$core$String* $tmp4379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4377, &$s4378);
        panda$core$String* $tmp4380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4379, resultType4363);
        panda$core$String* $tmp4382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4380, &$s4381);
        panda$core$String* $tmp4383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4382, indirectVar4360);
        panda$core$String* $tmp4385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4383, &$s4384);
        panda$core$String* $tmp4386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4376, $tmp4385);
        (($fn4387) p_out->$class->vtable[16])(p_out, $tmp4386);
        separator4356 = &$s4388;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4389 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4390 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4389);
        if ($tmp4390.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4392 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4266);
        panda$core$String* $tmp4393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4391, $tmp4392);
        panda$core$String* $tmp4395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4393, &$s4394);
        panda$core$String* $tmp4396 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4395, $tmp4396);
        panda$core$String* $tmp4399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4397, &$s4398);
        panda$core$String* $tmp4400 = panda$core$String$convert$R$panda$core$String(methodRef4354);
        panda$core$String* $tmp4402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4400, &$s4401);
        panda$core$String* $tmp4403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4399, $tmp4402);
        (($fn4404) p_out->$class->vtable[16])(p_out, $tmp4403);
    }
    }
    {
        ITable* $tmp4406 = ((panda$collections$Iterable*) args4291)->$class->itable;
        while ($tmp4406->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4406 = $tmp4406->next;
        }
        $fn4408 $tmp4407 = $tmp4406->methods[0];
        panda$collections$Iterator* $tmp4409 = $tmp4407(((panda$collections$Iterable*) args4291));
        a$Iter4405 = $tmp4409;
        $l4410:;
        ITable* $tmp4412 = a$Iter4405->$class->itable;
        while ($tmp4412->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4412 = $tmp4412->next;
        }
        $fn4414 $tmp4413 = $tmp4412->methods[0];
        panda$core$Bit $tmp4415 = $tmp4413(a$Iter4405);
        panda$core$Bit $tmp4416 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4415);
        if (!$tmp4416.value) goto $l4411;
        {
            ITable* $tmp4418 = a$Iter4405->$class->itable;
            while ($tmp4418->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4418 = $tmp4418->next;
            }
            $fn4420 $tmp4419 = $tmp4418->methods[1];
            panda$core$Object* $tmp4421 = $tmp4419(a$Iter4405);
            a4417 = ((panda$core$String*) $tmp4421);
            (($fn4422) p_out->$class->vtable[16])(p_out, separator4356);
            (($fn4423) p_out->$class->vtable[16])(p_out, a4417);
            separator4356 = &$s4424;
        }
        goto $l4410;
        $l4411:;
    }
    (($fn4426) p_out->$class->vtable[19])(p_out, &$s4425);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* test4438;
    panda$core$String* testBit4441;
    panda$core$String* ifTrue4450;
    panda$core$String* ifFalse4452;
    panda$core$String* end4466;
    panda$core$Bit $tmp4427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4427.value);
    panda$core$Int64 $tmp4429 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4429, ((panda$core$Int64) { 2 }));
    bool $tmp4428 = $tmp4430.value;
    if ($tmp4428) goto $l4431;
    panda$core$Int64 $tmp4432 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4432, ((panda$core$Int64) { 3 }));
    $tmp4428 = $tmp4433.value;
    $l4431:;
    panda$core$Bit $tmp4434 = { $tmp4428 };
    PANDA_ASSERT($tmp4434.value);
    panda$core$Object* $tmp4435 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4436 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4437 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4435)->type, $tmp4436);
    PANDA_ASSERT($tmp4437.value);
    panda$core$Object* $tmp4439 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4440 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4439), p_out);
    test4438 = $tmp4440;
    panda$core$String* $tmp4442 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4441 = $tmp4442;
    panda$core$String* $tmp4443 = panda$core$String$convert$R$panda$core$String(testBit4441);
    panda$core$String* $tmp4445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4443, &$s4444);
    panda$core$String* $tmp4446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4445, test4438);
    panda$core$String* $tmp4448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4446, &$s4447);
    (($fn4449) p_out->$class->vtable[19])(p_out, $tmp4448);
    panda$core$String* $tmp4451 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4450 = $tmp4451;
    panda$core$String* $tmp4453 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4452 = $tmp4453;
    panda$core$String* $tmp4455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4454, testBit4441);
    panda$core$String* $tmp4457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4455, &$s4456);
    panda$core$String* $tmp4458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4457, ifTrue4450);
    panda$core$String* $tmp4460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4458, &$s4459);
    panda$core$String* $tmp4461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4460, ifFalse4452);
    panda$core$String* $tmp4463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4461, &$s4462);
    (($fn4464) p_out->$class->vtable[19])(p_out, $tmp4463);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue4450, p_out);
    panda$core$Object* $tmp4465 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4465), p_out);
    panda$core$Int64 $tmp4467 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4467, ((panda$core$Int64) { 3 }));
    if ($tmp4468.value) {
    {
        panda$core$String* $tmp4469 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4466 = $tmp4469;
    }
    }
    else {
    {
        end4466 = ifFalse4452;
    }
    }
    panda$core$Object* $tmp4470 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4471 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4470));
    panda$core$Bit $tmp4472 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4471);
    if ($tmp4472.value) {
    {
        panda$core$String* $tmp4474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4473, end4466);
        panda$core$String* $tmp4476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4474, &$s4475);
        (($fn4477) p_out->$class->vtable[19])(p_out, $tmp4476);
    }
    }
    panda$core$Int64 $tmp4478 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4478, ((panda$core$Int64) { 3 }));
    if ($tmp4479.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse4452, p_out);
        panda$core$Object* $tmp4480 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4480), p_out);
        panda$core$Object* $tmp4481 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4482 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4481));
        panda$core$Bit $tmp4483 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4482);
        if ($tmp4483.value) {
        {
            panda$core$String* $tmp4485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4484, end4466);
            panda$core$String* $tmp4487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4485, &$s4486);
            (($fn4488) p_out->$class->vtable[19])(p_out, $tmp4487);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end4466, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4492;
    panda$core$String* range4503;
    org$pandalanguage$pandac$IRNode* block4506;
    org$pandalanguage$pandac$Type* t4508;
    panda$core$String* llt4511;
    panda$core$String* indexType4513;
    org$pandalanguage$pandac$ClassDecl* cl4519;
    panda$core$String* numberType4527;
    panda$core$String* index4535;
    panda$core$String* start4544;
    panda$core$String* indexValuePtr4553;
    panda$core$String* end4584;
    panda$core$String* inclusive4593;
    panda$core$String* loopStart4602;
    panda$core$String* loopBody4604;
    panda$core$String* loopEnd4606;
    panda$core$String* loopTest4608;
    panda$core$String* forwardEntry4612;
    panda$core$String* backwardEntry4614;
    panda$core$String* signPrefix4616;
    panda$core$String* forwardEntryInclusive4628;
    panda$core$String* forwardEntryExclusive4630;
    panda$core$String* forwardEntryInclusiveTest4645;
    panda$core$String* forwardEntryExclusiveTest4675;
    panda$core$String* indexValue4705;
    panda$core$String* loopInc4727;
    panda$core$String* forwardDelta4729;
    panda$core$String* forwardInclusiveLabel4744;
    panda$core$String* forwardExclusiveLabel4746;
    panda$core$String* forwardInclusiveTest4757;
    panda$core$String* forwardExclusiveTest4780;
    panda$core$String* inc4803;
    panda$core$String* incStruct4815;
    panda$core$Bit $tmp4489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4489.value);
    panda$core$Int64 $tmp4490 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4490, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4491.value);
    panda$core$Object* $tmp4493 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4492 = ((org$pandalanguage$pandac$IRNode*) $tmp4493);
    panda$core$Object* $tmp4494 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4494)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4495.value);
    panda$core$Object* $tmp4496 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4497 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4496)->type->subtypes);
    panda$core$Bit $tmp4498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4497, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4498.value);
    panda$core$Object* $tmp4499 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4499)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4502 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4500))->name, &$s4501);
    PANDA_ASSERT($tmp4502.value);
    panda$core$Object* $tmp4504 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4505 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4504), p_out);
    range4503 = $tmp4505;
    panda$core$Object* $tmp4507 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4506 = ((org$pandalanguage$pandac$IRNode*) $tmp4507);
    panda$core$Object* $tmp4509 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4510 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4509)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4508 = ((org$pandalanguage$pandac$Type*) $tmp4510);
    panda$core$String* $tmp4512 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4508);
    llt4511 = $tmp4512;
    panda$core$Bit $tmp4514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4508->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4514.value) {
    {
        panda$core$Int64 $tmp4515 = panda$collections$Array$get_count$R$panda$core$Int64(t4508->subtypes);
        panda$core$Bit $tmp4516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4515, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4516.value);
        panda$core$Object* $tmp4517 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4508->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4518 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4517));
        indexType4513 = $tmp4518;
    }
    }
    else {
    {
        indexType4513 = llt4511;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4520 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4508);
    cl4519 = $tmp4520;
    PANDA_ASSERT(((panda$core$Bit) { cl4519 != NULL }).value);
    panda$collections$ListView* $tmp4521 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4519);
    ITable* $tmp4522 = ((panda$collections$CollectionView*) $tmp4521)->$class->itable;
    while ($tmp4522->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4522 = $tmp4522->next;
    }
    $fn4524 $tmp4523 = $tmp4522->methods[0];
    panda$core$Int64 $tmp4525 = $tmp4523(((panda$collections$CollectionView*) $tmp4521));
    panda$core$Bit $tmp4526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4525, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4526.value);
    panda$collections$ListView* $tmp4528 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4519);
    ITable* $tmp4529 = $tmp4528->$class->itable;
    while ($tmp4529->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4529 = $tmp4529->next;
    }
    $fn4531 $tmp4530 = $tmp4529->methods[0];
    panda$core$Object* $tmp4532 = $tmp4530($tmp4528, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4533 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4532)->type);
    numberType4527 = $tmp4533;
    panda$core$Bit $tmp4534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4492->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4534.value);
    panda$core$String* $tmp4536 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4492->payload));
    index4535 = $tmp4536;
    panda$core$String* $tmp4537 = panda$core$String$convert$R$panda$core$String(index4535);
    panda$core$String* $tmp4539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4537, &$s4538);
    panda$core$String* $tmp4540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4539, indexType4513);
    panda$core$String* $tmp4542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4540, &$s4541);
    (($fn4543) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4542);
    panda$core$String* $tmp4545 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4544 = $tmp4545;
    panda$core$String* $tmp4546 = panda$core$String$convert$R$panda$core$String(start4544);
    panda$core$String* $tmp4548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4546, &$s4547);
    panda$core$String* $tmp4549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4548, range4503);
    panda$core$String* $tmp4551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4549, &$s4550);
    (($fn4552) p_out->$class->vtable[19])(p_out, $tmp4551);
    panda$core$String* $tmp4554 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4553 = $tmp4554;
    panda$core$String* $tmp4555 = panda$core$String$convert$R$panda$core$String(indexValuePtr4553);
    panda$core$String* $tmp4557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4555, &$s4556);
    panda$core$String* $tmp4558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4557, indexType4513);
    panda$core$String* $tmp4560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4558, &$s4559);
    panda$core$String* $tmp4561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4560, indexType4513);
    panda$core$String* $tmp4563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4561, &$s4562);
    panda$core$String* $tmp4564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4563, index4535);
    panda$core$String* $tmp4566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4564, &$s4565);
    panda$core$String* $tmp4568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4566, &$s4567);
    (($fn4569) p_out->$class->vtable[19])(p_out, $tmp4568);
    panda$core$String* $tmp4571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4570, numberType4527);
    panda$core$String* $tmp4573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4571, &$s4572);
    panda$core$String* $tmp4574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4573, start4544);
    panda$core$String* $tmp4576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4574, &$s4575);
    panda$core$String* $tmp4577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4576, numberType4527);
    panda$core$String* $tmp4579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4577, &$s4578);
    panda$core$String* $tmp4580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4579, indexValuePtr4553);
    panda$core$String* $tmp4582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4580, &$s4581);
    (($fn4583) p_out->$class->vtable[19])(p_out, $tmp4582);
    panda$core$String* $tmp4585 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4584 = $tmp4585;
    panda$core$String* $tmp4586 = panda$core$String$convert$R$panda$core$String(end4584);
    panda$core$String* $tmp4588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4586, &$s4587);
    panda$core$String* $tmp4589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4588, range4503);
    panda$core$String* $tmp4591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4589, &$s4590);
    (($fn4592) p_out->$class->vtable[19])(p_out, $tmp4591);
    panda$core$String* $tmp4594 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4593 = $tmp4594;
    panda$core$String* $tmp4595 = panda$core$String$convert$R$panda$core$String(inclusive4593);
    panda$core$String* $tmp4597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4595, &$s4596);
    panda$core$String* $tmp4598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4597, range4503);
    panda$core$String* $tmp4600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4598, &$s4599);
    (($fn4601) p_out->$class->vtable[19])(p_out, $tmp4600);
    panda$core$String* $tmp4603 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4602 = $tmp4603;
    panda$core$String* $tmp4605 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4604 = $tmp4605;
    panda$core$String* $tmp4607 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4606 = $tmp4607;
    panda$core$String* $tmp4609 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4608 = $tmp4609;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4610 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4610->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4610->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4610, ((panda$core$String*) p_f->payload), loopEnd4606, loopTest4608);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4610));
    panda$core$String* $tmp4613 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4612 = $tmp4613;
    panda$core$String* $tmp4615 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4614 = $tmp4615;
    panda$core$Bit $tmp4618 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4508)->name, &$s4617);
    if ($tmp4618.value) {
    {
        signPrefix4616 = &$s4619;
    }
    }
    else {
    {
        panda$core$Bit $tmp4622 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4508)->name, &$s4621);
        bool $tmp4620 = $tmp4622.value;
        if ($tmp4620) goto $l4623;
        panda$core$Bit $tmp4625 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4508)->name, &$s4624);
        $tmp4620 = $tmp4625.value;
        $l4623:;
        panda$core$Bit $tmp4626 = { $tmp4620 };
        PANDA_ASSERT($tmp4626.value);
        signPrefix4616 = &$s4627;
    }
    }
    panda$core$String* $tmp4629 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4628 = $tmp4629;
    panda$core$String* $tmp4631 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4630 = $tmp4631;
    panda$core$String* $tmp4633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4632, inclusive4593);
    panda$core$String* $tmp4635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4633, &$s4634);
    panda$core$String* $tmp4636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4635, forwardEntryInclusive4628);
    panda$core$String* $tmp4638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4636, &$s4637);
    panda$core$String* $tmp4640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4639, forwardEntryExclusive4630);
    panda$core$String* $tmp4642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4640, &$s4641);
    panda$core$String* $tmp4643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4638, $tmp4642);
    (($fn4644) p_out->$class->vtable[19])(p_out, $tmp4643);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive4628, p_out);
    panda$core$String* $tmp4646 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4645 = $tmp4646;
    panda$core$String* $tmp4647 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4645);
    panda$core$String* $tmp4649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4647, &$s4648);
    panda$core$String* $tmp4650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4649, signPrefix4616);
    panda$core$String* $tmp4652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4650, &$s4651);
    panda$core$String* $tmp4653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4652, numberType4527);
    panda$core$String* $tmp4655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4653, &$s4654);
    panda$core$String* $tmp4656 = panda$core$String$convert$R$panda$core$String(start4544);
    panda$core$String* $tmp4658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4656, &$s4657);
    panda$core$String* $tmp4659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4658, end4584);
    panda$core$String* $tmp4661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4659, &$s4660);
    panda$core$String* $tmp4662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4655, $tmp4661);
    (($fn4663) p_out->$class->vtable[19])(p_out, $tmp4662);
    panda$core$String* $tmp4665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4664, forwardEntryInclusiveTest4645);
    panda$core$String* $tmp4667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4665, &$s4666);
    panda$core$String* $tmp4668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4667, loopStart4602);
    panda$core$String* $tmp4670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4668, &$s4669);
    panda$core$String* $tmp4671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4670, loopEnd4606);
    panda$core$String* $tmp4673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4671, &$s4672);
    (($fn4674) p_out->$class->vtable[19])(p_out, $tmp4673);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive4630, p_out);
    panda$core$String* $tmp4676 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4675 = $tmp4676;
    panda$core$String* $tmp4677 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4675);
    panda$core$String* $tmp4679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4677, &$s4678);
    panda$core$String* $tmp4680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4679, signPrefix4616);
    panda$core$String* $tmp4682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4680, &$s4681);
    panda$core$String* $tmp4683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4682, numberType4527);
    panda$core$String* $tmp4685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4683, &$s4684);
    panda$core$String* $tmp4686 = panda$core$String$convert$R$panda$core$String(start4544);
    panda$core$String* $tmp4688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4686, &$s4687);
    panda$core$String* $tmp4689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4688, end4584);
    panda$core$String* $tmp4691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4689, &$s4690);
    panda$core$String* $tmp4692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4685, $tmp4691);
    (($fn4693) p_out->$class->vtable[19])(p_out, $tmp4692);
    panda$core$String* $tmp4695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4694, forwardEntryExclusiveTest4675);
    panda$core$String* $tmp4697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4695, &$s4696);
    panda$core$String* $tmp4698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4697, loopStart4602);
    panda$core$String* $tmp4700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4698, &$s4699);
    panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4700, loopEnd4606);
    panda$core$String* $tmp4703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4701, &$s4702);
    (($fn4704) p_out->$class->vtable[19])(p_out, $tmp4703);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart4602, p_out);
    panda$core$String* $tmp4706 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4705 = $tmp4706;
    panda$core$String* $tmp4707 = panda$core$String$convert$R$panda$core$String(indexValue4705);
    panda$core$String* $tmp4709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4707, &$s4708);
    panda$core$String* $tmp4710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4709, numberType4527);
    panda$core$String* $tmp4712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4710, &$s4711);
    panda$core$String* $tmp4713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4712, numberType4527);
    panda$core$String* $tmp4715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4713, &$s4714);
    panda$core$String* $tmp4716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4715, indexValuePtr4553);
    panda$core$String* $tmp4718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4716, &$s4717);
    (($fn4719) p_out->$class->vtable[19])(p_out, $tmp4718);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block4506, p_out);
    panda$core$Bit $tmp4720 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4506);
    panda$core$Bit $tmp4721 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4720);
    if ($tmp4721.value) {
    {
        panda$core$String* $tmp4723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4722, loopTest4608);
        panda$core$String* $tmp4725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4723, &$s4724);
        (($fn4726) p_out->$class->vtable[19])(p_out, $tmp4725);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest4608, p_out);
    panda$core$String* $tmp4728 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc4727 = $tmp4728;
    panda$core$String* $tmp4730 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta4729 = $tmp4730;
    panda$core$String* $tmp4731 = panda$core$String$convert$R$panda$core$String(forwardDelta4729);
    panda$core$String* $tmp4733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4731, &$s4732);
    panda$core$String* $tmp4734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4733, numberType4527);
    panda$core$String* $tmp4736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4734, &$s4735);
    panda$core$String* $tmp4737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4736, end4584);
    panda$core$String* $tmp4739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4737, &$s4738);
    panda$core$String* $tmp4740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4739, indexValue4705);
    panda$core$String* $tmp4742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4740, &$s4741);
    (($fn4743) p_out->$class->vtable[19])(p_out, $tmp4742);
    panda$core$String* $tmp4745 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel4744 = $tmp4745;
    panda$core$String* $tmp4747 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel4746 = $tmp4747;
    panda$core$String* $tmp4749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4748, inclusive4593);
    panda$core$String* $tmp4751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4749, &$s4750);
    panda$core$String* $tmp4752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4751, forwardInclusiveLabel4744);
    panda$core$String* $tmp4754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4752, &$s4753);
    panda$core$String* $tmp4755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4754, forwardExclusiveLabel4746);
    (($fn4756) p_out->$class->vtable[19])(p_out, $tmp4755);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel4744, p_out);
    panda$core$String* $tmp4758 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest4757 = $tmp4758;
    panda$core$String* $tmp4759 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest4757);
    panda$core$String* $tmp4761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4759, &$s4760);
    panda$core$String* $tmp4762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4761, numberType4527);
    panda$core$String* $tmp4764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4762, &$s4763);
    panda$core$String* $tmp4765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4764, forwardDelta4729);
    panda$core$String* $tmp4767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4765, &$s4766);
    (($fn4768) p_out->$class->vtable[19])(p_out, $tmp4767);
    panda$core$String* $tmp4770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4769, forwardInclusiveTest4757);
    panda$core$String* $tmp4772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4770, &$s4771);
    panda$core$String* $tmp4773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4772, loopInc4727);
    panda$core$String* $tmp4775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4773, &$s4774);
    panda$core$String* $tmp4776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4775, loopEnd4606);
    panda$core$String* $tmp4778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4776, &$s4777);
    (($fn4779) p_out->$class->vtable[19])(p_out, $tmp4778);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel4746, p_out);
    panda$core$String* $tmp4781 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest4780 = $tmp4781;
    panda$core$String* $tmp4782 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest4780);
    panda$core$String* $tmp4784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4782, &$s4783);
    panda$core$String* $tmp4785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4784, numberType4527);
    panda$core$String* $tmp4787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4785, &$s4786);
    panda$core$String* $tmp4788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4787, forwardDelta4729);
    panda$core$String* $tmp4790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4788, &$s4789);
    (($fn4791) p_out->$class->vtable[19])(p_out, $tmp4790);
    panda$core$String* $tmp4793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4792, forwardExclusiveTest4780);
    panda$core$String* $tmp4795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4793, &$s4794);
    panda$core$String* $tmp4796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4795, loopInc4727);
    panda$core$String* $tmp4798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4796, &$s4797);
    panda$core$String* $tmp4799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4798, loopEnd4606);
    panda$core$String* $tmp4801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4799, &$s4800);
    (($fn4802) p_out->$class->vtable[19])(p_out, $tmp4801);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc4727, p_out);
    panda$core$String* $tmp4804 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc4803 = $tmp4804;
    panda$core$String* $tmp4805 = panda$core$String$convert$R$panda$core$String(inc4803);
    panda$core$String* $tmp4807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4805, &$s4806);
    panda$core$String* $tmp4808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4807, numberType4527);
    panda$core$String* $tmp4810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4808, &$s4809);
    panda$core$String* $tmp4811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4810, indexValue4705);
    panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4811, &$s4812);
    (($fn4814) p_out->$class->vtable[19])(p_out, $tmp4813);
    panda$core$String* $tmp4816 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct4815 = $tmp4816;
    panda$core$String* $tmp4817 = panda$core$String$convert$R$panda$core$String(incStruct4815);
    panda$core$String* $tmp4819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4817, &$s4818);
    panda$core$String* $tmp4820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4819, indexType4513);
    panda$core$String* $tmp4822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4820, &$s4821);
    panda$core$String* $tmp4823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4822, numberType4527);
    panda$core$String* $tmp4825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4823, &$s4824);
    (($fn4826) p_out->$class->vtable[19])(p_out, $tmp4825);
    panda$core$String* $tmp4828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4827, numberType4527);
    panda$core$String* $tmp4830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4828, &$s4829);
    panda$core$String* $tmp4831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4830, inc4803);
    panda$core$String* $tmp4833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4831, &$s4832);
    (($fn4834) p_out->$class->vtable[19])(p_out, $tmp4833);
    panda$core$String* $tmp4836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4835, indexType4513);
    panda$core$String* $tmp4838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4836, &$s4837);
    panda$core$String* $tmp4839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4838, incStruct4815);
    panda$core$String* $tmp4841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4839, &$s4840);
    panda$core$String* $tmp4842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4841, indexType4513);
    panda$core$String* $tmp4844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4842, &$s4843);
    panda$core$String* $tmp4845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4844, index4535);
    panda$core$String* $tmp4847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4845, &$s4846);
    (($fn4848) p_out->$class->vtable[19])(p_out, $tmp4847);
    panda$core$String* $tmp4850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4849, loopStart4602);
    panda$core$String* $tmp4852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4850, &$s4851);
    (($fn4853) p_out->$class->vtable[19])(p_out, $tmp4852);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd4606, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4857;
    panda$core$String* range4868;
    org$pandalanguage$pandac$IRNode* block4871;
    org$pandalanguage$pandac$Type* t4873;
    panda$core$String* llt4876;
    panda$core$String* indexType4878;
    org$pandalanguage$pandac$ClassDecl* cl4884;
    panda$core$String* numberType4892;
    panda$core$String* index4900;
    panda$core$String* start4909;
    panda$core$String* indexValuePtr4918;
    panda$core$String* end4949;
    panda$core$String* rawStep4958;
    panda$core$String* step4967;
    panda$core$String* inclusive4981;
    panda$core$String* loopStart4990;
    panda$core$String* loopBody4992;
    panda$core$String* loopEnd4994;
    panda$core$String* loopTest4996;
    panda$core$String* forwardEntry5000;
    panda$core$String* backwardEntry5002;
    panda$core$String* signPrefix5004;
    panda$core$String* direction5016;
    panda$core$String* forwardEntryInclusive5042;
    panda$core$String* forwardEntryExclusive5044;
    panda$core$String* forwardEntryInclusiveTest5059;
    panda$core$String* forwardEntryExclusiveTest5089;
    panda$core$String* backwardEntryInclusive5119;
    panda$core$String* backwardEntryExclusive5121;
    panda$core$String* backwardEntryInclusiveTest5136;
    panda$core$String* backwardEntryExclusiveTest5166;
    panda$core$String* indexValue5196;
    panda$core$String* loopInc5218;
    panda$core$String* forwardLabel5220;
    panda$core$String* backwardLabel5222;
    panda$core$String* forwardDelta5235;
    panda$core$String* forwardInclusiveLabel5250;
    panda$core$String* forwardExclusiveLabel5252;
    panda$core$String* forwardInclusiveTest5263;
    panda$core$String* forwardExclusiveTest5289;
    panda$core$String* backwardDelta5315;
    panda$core$String* negStep5330;
    panda$core$String* backwardInclusiveLabel5342;
    panda$core$String* backwardExclusiveLabel5344;
    panda$core$String* backwardInclusiveTest5355;
    panda$core$String* backwardExclusiveTest5379;
    panda$core$String* inc5403;
    panda$core$String* incStruct5418;
    panda$core$Bit $tmp4854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4854.value);
    panda$core$Int64 $tmp4855 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4855, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4856.value);
    panda$core$Object* $tmp4858 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4857 = ((org$pandalanguage$pandac$IRNode*) $tmp4858);
    panda$core$Object* $tmp4859 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4859)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4860.value);
    panda$core$Object* $tmp4861 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4862 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4861)->type->subtypes);
    panda$core$Bit $tmp4863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4862, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4863.value);
    panda$core$Object* $tmp4864 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4865 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4864)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4867 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4865))->name, &$s4866);
    PANDA_ASSERT($tmp4867.value);
    panda$core$Object* $tmp4869 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4870 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4869), p_out);
    range4868 = $tmp4870;
    panda$core$Object* $tmp4872 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4871 = ((org$pandalanguage$pandac$IRNode*) $tmp4872);
    panda$core$Object* $tmp4874 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4875 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4874)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4873 = ((org$pandalanguage$pandac$Type*) $tmp4875);
    panda$core$String* $tmp4877 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4873);
    llt4876 = $tmp4877;
    panda$core$Bit $tmp4879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4873->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4879.value) {
    {
        panda$core$Int64 $tmp4880 = panda$collections$Array$get_count$R$panda$core$Int64(t4873->subtypes);
        panda$core$Bit $tmp4881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4880, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4881.value);
        panda$core$Object* $tmp4882 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4873->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4883 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4882));
        indexType4878 = $tmp4883;
    }
    }
    else {
    {
        indexType4878 = llt4876;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4885 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4873);
    cl4884 = $tmp4885;
    PANDA_ASSERT(((panda$core$Bit) { cl4884 != NULL }).value);
    panda$collections$ListView* $tmp4886 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4884);
    ITable* $tmp4887 = ((panda$collections$CollectionView*) $tmp4886)->$class->itable;
    while ($tmp4887->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4887 = $tmp4887->next;
    }
    $fn4889 $tmp4888 = $tmp4887->methods[0];
    panda$core$Int64 $tmp4890 = $tmp4888(((panda$collections$CollectionView*) $tmp4886));
    panda$core$Bit $tmp4891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4890, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4891.value);
    panda$collections$ListView* $tmp4893 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4884);
    ITable* $tmp4894 = $tmp4893->$class->itable;
    while ($tmp4894->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4894 = $tmp4894->next;
    }
    $fn4896 $tmp4895 = $tmp4894->methods[0];
    panda$core$Object* $tmp4897 = $tmp4895($tmp4893, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4898 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4897)->type);
    numberType4892 = $tmp4898;
    panda$core$Bit $tmp4899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4857->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4899.value);
    panda$core$String* $tmp4901 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4857->payload));
    index4900 = $tmp4901;
    panda$core$String* $tmp4902 = panda$core$String$convert$R$panda$core$String(index4900);
    panda$core$String* $tmp4904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4902, &$s4903);
    panda$core$String* $tmp4905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4904, indexType4878);
    panda$core$String* $tmp4907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4905, &$s4906);
    (($fn4908) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4907);
    panda$core$String* $tmp4910 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4909 = $tmp4910;
    panda$core$String* $tmp4911 = panda$core$String$convert$R$panda$core$String(start4909);
    panda$core$String* $tmp4913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4911, &$s4912);
    panda$core$String* $tmp4914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4913, range4868);
    panda$core$String* $tmp4916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4914, &$s4915);
    (($fn4917) p_out->$class->vtable[19])(p_out, $tmp4916);
    panda$core$String* $tmp4919 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4918 = $tmp4919;
    panda$core$String* $tmp4920 = panda$core$String$convert$R$panda$core$String(indexValuePtr4918);
    panda$core$String* $tmp4922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4920, &$s4921);
    panda$core$String* $tmp4923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4922, indexType4878);
    panda$core$String* $tmp4925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4923, &$s4924);
    panda$core$String* $tmp4926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4925, indexType4878);
    panda$core$String* $tmp4928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4926, &$s4927);
    panda$core$String* $tmp4929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4928, index4900);
    panda$core$String* $tmp4931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4929, &$s4930);
    panda$core$String* $tmp4933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4931, &$s4932);
    (($fn4934) p_out->$class->vtable[19])(p_out, $tmp4933);
    panda$core$String* $tmp4936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4935, numberType4892);
    panda$core$String* $tmp4938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4936, &$s4937);
    panda$core$String* $tmp4939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4938, start4909);
    panda$core$String* $tmp4941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4939, &$s4940);
    panda$core$String* $tmp4942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4941, numberType4892);
    panda$core$String* $tmp4944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4942, &$s4943);
    panda$core$String* $tmp4945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4944, indexValuePtr4918);
    panda$core$String* $tmp4947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4945, &$s4946);
    (($fn4948) p_out->$class->vtable[19])(p_out, $tmp4947);
    panda$core$String* $tmp4950 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4949 = $tmp4950;
    panda$core$String* $tmp4951 = panda$core$String$convert$R$panda$core$String(end4949);
    panda$core$String* $tmp4953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4951, &$s4952);
    panda$core$String* $tmp4954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4953, range4868);
    panda$core$String* $tmp4956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4954, &$s4955);
    (($fn4957) p_out->$class->vtable[19])(p_out, $tmp4956);
    panda$core$String* $tmp4959 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep4958 = $tmp4959;
    panda$core$String* $tmp4960 = panda$core$String$convert$R$panda$core$String(rawStep4958);
    panda$core$String* $tmp4962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4960, &$s4961);
    panda$core$String* $tmp4963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4962, range4868);
    panda$core$String* $tmp4965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4963, &$s4964);
    (($fn4966) p_out->$class->vtable[19])(p_out, $tmp4965);
    panda$core$Bit $tmp4969 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4892, &$s4968);
    if ($tmp4969.value) {
    {
        panda$core$String* $tmp4970 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step4967 = $tmp4970;
        panda$core$String* $tmp4971 = panda$core$String$convert$R$panda$core$String(step4967);
        panda$core$String* $tmp4973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4971, &$s4972);
        panda$core$String* $tmp4974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4973, rawStep4958);
        panda$core$String* $tmp4976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4974, &$s4975);
        panda$core$String* $tmp4977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4976, numberType4892);
        panda$core$String* $tmp4979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4977, &$s4978);
        (($fn4980) p_out->$class->vtable[19])(p_out, $tmp4979);
    }
    }
    else {
    {
        step4967 = rawStep4958;
    }
    }
    panda$core$String* $tmp4982 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4981 = $tmp4982;
    panda$core$String* $tmp4983 = panda$core$String$convert$R$panda$core$String(inclusive4981);
    panda$core$String* $tmp4985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4983, &$s4984);
    panda$core$String* $tmp4986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4985, range4868);
    panda$core$String* $tmp4988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4986, &$s4987);
    (($fn4989) p_out->$class->vtable[19])(p_out, $tmp4988);
    panda$core$String* $tmp4991 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4990 = $tmp4991;
    panda$core$String* $tmp4993 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4992 = $tmp4993;
    panda$core$String* $tmp4995 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4994 = $tmp4995;
    panda$core$String* $tmp4997 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4996 = $tmp4997;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4998 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4998->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4998->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4998, ((panda$core$String*) p_f->payload), loopEnd4994, loopTest4996);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4998));
    panda$core$String* $tmp5001 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry5000 = $tmp5001;
    panda$core$String* $tmp5003 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry5002 = $tmp5003;
    panda$core$Bit $tmp5006 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4873)->name, &$s5005);
    if ($tmp5006.value) {
    {
        signPrefix5004 = &$s5007;
    }
    }
    else {
    {
        panda$core$Bit $tmp5010 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4873)->name, &$s5009);
        bool $tmp5008 = $tmp5010.value;
        if ($tmp5008) goto $l5011;
        panda$core$Bit $tmp5013 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4873)->name, &$s5012);
        $tmp5008 = $tmp5013.value;
        $l5011:;
        panda$core$Bit $tmp5014 = { $tmp5008 };
        PANDA_ASSERT($tmp5014.value);
        signPrefix5004 = &$s5015;
    }
    }
    panda$core$Bit $tmp5018 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix5004, &$s5017);
    if ($tmp5018.value) {
    {
        panda$core$String* $tmp5019 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction5016 = $tmp5019;
        panda$core$String* $tmp5020 = panda$core$String$convert$R$panda$core$String(direction5016);
        panda$core$String* $tmp5022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5020, &$s5021);
        panda$core$String* $tmp5023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5022, numberType4892);
        panda$core$String* $tmp5025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5023, &$s5024);
        panda$core$String* $tmp5026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5025, step4967);
        panda$core$String* $tmp5028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5026, &$s5027);
        (($fn5029) p_out->$class->vtable[19])(p_out, $tmp5028);
    }
    }
    else {
    {
        direction5016 = &$s5030;
    }
    }
    panda$core$String* $tmp5032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5031, direction5016);
    panda$core$String* $tmp5034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5032, &$s5033);
    panda$core$String* $tmp5035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5034, forwardEntry5000);
    panda$core$String* $tmp5037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5035, &$s5036);
    panda$core$String* $tmp5038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5037, backwardEntry5002);
    panda$core$String* $tmp5040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5038, &$s5039);
    (($fn5041) p_out->$class->vtable[19])(p_out, $tmp5040);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntry5000, p_out);
    panda$core$String* $tmp5043 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive5042 = $tmp5043;
    panda$core$String* $tmp5045 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive5044 = $tmp5045;
    panda$core$String* $tmp5047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5046, inclusive4981);
    panda$core$String* $tmp5049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5047, &$s5048);
    panda$core$String* $tmp5050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5049, forwardEntryInclusive5042);
    panda$core$String* $tmp5052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5050, &$s5051);
    panda$core$String* $tmp5054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5053, forwardEntryExclusive5044);
    panda$core$String* $tmp5056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5054, &$s5055);
    panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5052, $tmp5056);
    (($fn5058) p_out->$class->vtable[19])(p_out, $tmp5057);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive5042, p_out);
    panda$core$String* $tmp5060 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest5059 = $tmp5060;
    panda$core$String* $tmp5061 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest5059);
    panda$core$String* $tmp5063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5061, &$s5062);
    panda$core$String* $tmp5064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5063, signPrefix5004);
    panda$core$String* $tmp5066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5064, &$s5065);
    panda$core$String* $tmp5067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5066, numberType4892);
    panda$core$String* $tmp5069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5067, &$s5068);
    panda$core$String* $tmp5070 = panda$core$String$convert$R$panda$core$String(start4909);
    panda$core$String* $tmp5072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5070, &$s5071);
    panda$core$String* $tmp5073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5072, end4949);
    panda$core$String* $tmp5075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5073, &$s5074);
    panda$core$String* $tmp5076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5069, $tmp5075);
    (($fn5077) p_out->$class->vtable[19])(p_out, $tmp5076);
    panda$core$String* $tmp5079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5078, forwardEntryInclusiveTest5059);
    panda$core$String* $tmp5081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5079, &$s5080);
    panda$core$String* $tmp5082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5081, loopStart4990);
    panda$core$String* $tmp5084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5082, &$s5083);
    panda$core$String* $tmp5085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5084, loopEnd4994);
    panda$core$String* $tmp5087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5085, &$s5086);
    (($fn5088) p_out->$class->vtable[19])(p_out, $tmp5087);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive5044, p_out);
    panda$core$String* $tmp5090 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest5089 = $tmp5090;
    panda$core$String* $tmp5091 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest5089);
    panda$core$String* $tmp5093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5091, &$s5092);
    panda$core$String* $tmp5094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5093, signPrefix5004);
    panda$core$String* $tmp5096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5094, &$s5095);
    panda$core$String* $tmp5097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5096, numberType4892);
    panda$core$String* $tmp5099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5097, &$s5098);
    panda$core$String* $tmp5100 = panda$core$String$convert$R$panda$core$String(start4909);
    panda$core$String* $tmp5102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5100, &$s5101);
    panda$core$String* $tmp5103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5102, end4949);
    panda$core$String* $tmp5105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5103, &$s5104);
    panda$core$String* $tmp5106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5099, $tmp5105);
    (($fn5107) p_out->$class->vtable[19])(p_out, $tmp5106);
    panda$core$String* $tmp5109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5108, forwardEntryExclusiveTest5089);
    panda$core$String* $tmp5111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5109, &$s5110);
    panda$core$String* $tmp5112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5111, loopStart4990);
    panda$core$String* $tmp5114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5112, &$s5113);
    panda$core$String* $tmp5115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5114, loopEnd4994);
    panda$core$String* $tmp5117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5115, &$s5116);
    (($fn5118) p_out->$class->vtable[19])(p_out, $tmp5117);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntry5002, p_out);
    panda$core$String* $tmp5120 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive5119 = $tmp5120;
    panda$core$String* $tmp5122 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive5121 = $tmp5122;
    panda$core$String* $tmp5124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5123, inclusive4981);
    panda$core$String* $tmp5126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5124, &$s5125);
    panda$core$String* $tmp5127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5126, backwardEntryInclusive5119);
    panda$core$String* $tmp5129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5127, &$s5128);
    panda$core$String* $tmp5131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5130, backwardEntryExclusive5121);
    panda$core$String* $tmp5133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5131, &$s5132);
    panda$core$String* $tmp5134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5129, $tmp5133);
    (($fn5135) p_out->$class->vtable[19])(p_out, $tmp5134);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryInclusive5119, p_out);
    panda$core$String* $tmp5137 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5136 = $tmp5137;
    panda$core$String* $tmp5138 = panda$core$String$convert$R$panda$core$String(backwardEntryInclusiveTest5136);
    panda$core$String* $tmp5140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5138, &$s5139);
    panda$core$String* $tmp5141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5140, signPrefix5004);
    panda$core$String* $tmp5143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5141, &$s5142);
    panda$core$String* $tmp5144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5143, numberType4892);
    panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5144, &$s5145);
    panda$core$String* $tmp5147 = panda$core$String$convert$R$panda$core$String(start4909);
    panda$core$String* $tmp5149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5147, &$s5148);
    panda$core$String* $tmp5150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5149, end4949);
    panda$core$String* $tmp5152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5150, &$s5151);
    panda$core$String* $tmp5153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5146, $tmp5152);
    (($fn5154) p_out->$class->vtable[19])(p_out, $tmp5153);
    panda$core$String* $tmp5156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5155, backwardEntryInclusiveTest5136);
    panda$core$String* $tmp5158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5156, &$s5157);
    panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5158, loopStart4990);
    panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, &$s5160);
    panda$core$String* $tmp5162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5161, loopEnd4994);
    panda$core$String* $tmp5164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5162, &$s5163);
    (($fn5165) p_out->$class->vtable[19])(p_out, $tmp5164);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryExclusive5121, p_out);
    panda$core$String* $tmp5167 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5166 = $tmp5167;
    panda$core$String* $tmp5168 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusiveTest5166);
    panda$core$String* $tmp5170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5168, &$s5169);
    panda$core$String* $tmp5171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5170, signPrefix5004);
    panda$core$String* $tmp5173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5171, &$s5172);
    panda$core$String* $tmp5174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5173, numberType4892);
    panda$core$String* $tmp5176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5174, &$s5175);
    panda$core$String* $tmp5177 = panda$core$String$convert$R$panda$core$String(start4909);
    panda$core$String* $tmp5179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5177, &$s5178);
    panda$core$String* $tmp5180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5179, end4949);
    panda$core$String* $tmp5182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5180, &$s5181);
    panda$core$String* $tmp5183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5176, $tmp5182);
    (($fn5184) p_out->$class->vtable[19])(p_out, $tmp5183);
    panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5185, backwardEntryExclusiveTest5166);
    panda$core$String* $tmp5188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5186, &$s5187);
    panda$core$String* $tmp5189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5188, loopStart4990);
    panda$core$String* $tmp5191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5189, &$s5190);
    panda$core$String* $tmp5192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5191, loopEnd4994);
    panda$core$String* $tmp5194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5192, &$s5193);
    (($fn5195) p_out->$class->vtable[19])(p_out, $tmp5194);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart4990, p_out);
    panda$core$String* $tmp5197 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5196 = $tmp5197;
    panda$core$String* $tmp5198 = panda$core$String$convert$R$panda$core$String(indexValue5196);
    panda$core$String* $tmp5200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5198, &$s5199);
    panda$core$String* $tmp5201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5200, numberType4892);
    panda$core$String* $tmp5203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5201, &$s5202);
    panda$core$String* $tmp5204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5203, numberType4892);
    panda$core$String* $tmp5206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5204, &$s5205);
    panda$core$String* $tmp5207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5206, indexValuePtr4918);
    panda$core$String* $tmp5209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5207, &$s5208);
    (($fn5210) p_out->$class->vtable[19])(p_out, $tmp5209);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block4871, p_out);
    panda$core$Bit $tmp5211 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4871);
    panda$core$Bit $tmp5212 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5211);
    if ($tmp5212.value) {
    {
        panda$core$String* $tmp5214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5213, loopTest4996);
        panda$core$String* $tmp5216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5214, &$s5215);
        (($fn5217) p_out->$class->vtable[19])(p_out, $tmp5216);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest4996, p_out);
    panda$core$String* $tmp5219 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5218 = $tmp5219;
    panda$core$String* $tmp5221 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5220 = $tmp5221;
    panda$core$String* $tmp5223 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5222 = $tmp5223;
    panda$core$String* $tmp5225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5224, direction5016);
    panda$core$String* $tmp5227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5225, &$s5226);
    panda$core$String* $tmp5228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5227, forwardLabel5220);
    panda$core$String* $tmp5230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5228, &$s5229);
    panda$core$String* $tmp5231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5230, backwardLabel5222);
    panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5231, &$s5232);
    (($fn5234) p_out->$class->vtable[19])(p_out, $tmp5233);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardLabel5220, p_out);
    panda$core$String* $tmp5236 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5235 = $tmp5236;
    panda$core$String* $tmp5237 = panda$core$String$convert$R$panda$core$String(forwardDelta5235);
    panda$core$String* $tmp5239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5237, &$s5238);
    panda$core$String* $tmp5240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5239, numberType4892);
    panda$core$String* $tmp5242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5240, &$s5241);
    panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5242, end4949);
    panda$core$String* $tmp5245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5243, &$s5244);
    panda$core$String* $tmp5246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5245, indexValue5196);
    panda$core$String* $tmp5248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5246, &$s5247);
    (($fn5249) p_out->$class->vtable[19])(p_out, $tmp5248);
    panda$core$String* $tmp5251 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5250 = $tmp5251;
    panda$core$String* $tmp5253 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5252 = $tmp5253;
    panda$core$String* $tmp5255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5254, inclusive4981);
    panda$core$String* $tmp5257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5255, &$s5256);
    panda$core$String* $tmp5258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5257, forwardInclusiveLabel5250);
    panda$core$String* $tmp5260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5258, &$s5259);
    panda$core$String* $tmp5261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5260, forwardExclusiveLabel5252);
    (($fn5262) p_out->$class->vtable[19])(p_out, $tmp5261);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel5250, p_out);
    panda$core$String* $tmp5264 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5263 = $tmp5264;
    panda$core$String* $tmp5265 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest5263);
    panda$core$String* $tmp5267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5265, &$s5266);
    panda$core$String* $tmp5268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5267, numberType4892);
    panda$core$String* $tmp5270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5268, &$s5269);
    panda$core$String* $tmp5271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5270, forwardDelta5235);
    panda$core$String* $tmp5273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5271, &$s5272);
    panda$core$String* $tmp5274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5273, step4967);
    panda$core$String* $tmp5276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5274, &$s5275);
    (($fn5277) p_out->$class->vtable[19])(p_out, $tmp5276);
    panda$core$String* $tmp5279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5278, forwardInclusiveTest5263);
    panda$core$String* $tmp5281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5279, &$s5280);
    panda$core$String* $tmp5282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5281, loopInc5218);
    panda$core$String* $tmp5284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5282, &$s5283);
    panda$core$String* $tmp5285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5284, loopEnd4994);
    panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5285, &$s5286);
    (($fn5288) p_out->$class->vtable[19])(p_out, $tmp5287);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel5252, p_out);
    panda$core$String* $tmp5290 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5289 = $tmp5290;
    panda$core$String* $tmp5291 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest5289);
    panda$core$String* $tmp5293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5291, &$s5292);
    panda$core$String* $tmp5294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5293, numberType4892);
    panda$core$String* $tmp5296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5294, &$s5295);
    panda$core$String* $tmp5297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5296, forwardDelta5235);
    panda$core$String* $tmp5299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5297, &$s5298);
    panda$core$String* $tmp5300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5299, step4967);
    panda$core$String* $tmp5302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5300, &$s5301);
    (($fn5303) p_out->$class->vtable[19])(p_out, $tmp5302);
    panda$core$String* $tmp5305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5304, forwardExclusiveTest5289);
    panda$core$String* $tmp5307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5305, &$s5306);
    panda$core$String* $tmp5308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5307, loopInc5218);
    panda$core$String* $tmp5310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5308, &$s5309);
    panda$core$String* $tmp5311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5310, loopEnd4994);
    panda$core$String* $tmp5313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5311, &$s5312);
    (($fn5314) p_out->$class->vtable[19])(p_out, $tmp5313);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardLabel5222, p_out);
    panda$core$String* $tmp5316 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5315 = $tmp5316;
    panda$core$String* $tmp5317 = panda$core$String$convert$R$panda$core$String(backwardDelta5315);
    panda$core$String* $tmp5319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5317, &$s5318);
    panda$core$String* $tmp5320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5319, numberType4892);
    panda$core$String* $tmp5322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5320, &$s5321);
    panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5322, indexValue5196);
    panda$core$String* $tmp5325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5323, &$s5324);
    panda$core$String* $tmp5326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5325, end4949);
    panda$core$String* $tmp5328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5326, &$s5327);
    (($fn5329) p_out->$class->vtable[19])(p_out, $tmp5328);
    panda$core$String* $tmp5331 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5330 = $tmp5331;
    panda$core$String* $tmp5332 = panda$core$String$convert$R$panda$core$String(negStep5330);
    panda$core$String* $tmp5334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5332, &$s5333);
    panda$core$String* $tmp5335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5334, numberType4892);
    panda$core$String* $tmp5337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5335, &$s5336);
    panda$core$String* $tmp5338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5337, step4967);
    panda$core$String* $tmp5340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5338, &$s5339);
    (($fn5341) p_out->$class->vtable[19])(p_out, $tmp5340);
    panda$core$String* $tmp5343 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5342 = $tmp5343;
    panda$core$String* $tmp5345 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5344 = $tmp5345;
    panda$core$String* $tmp5347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5346, inclusive4981);
    panda$core$String* $tmp5349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5347, &$s5348);
    panda$core$String* $tmp5350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5349, backwardInclusiveLabel5342);
    panda$core$String* $tmp5352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5350, &$s5351);
    panda$core$String* $tmp5353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5352, backwardExclusiveLabel5344);
    (($fn5354) p_out->$class->vtable[19])(p_out, $tmp5353);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardInclusiveLabel5342, p_out);
    panda$core$String* $tmp5356 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5355 = $tmp5356;
    panda$core$String* $tmp5357 = panda$core$String$convert$R$panda$core$String(backwardInclusiveTest5355);
    panda$core$String* $tmp5359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5357, &$s5358);
    panda$core$String* $tmp5360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5359, numberType4892);
    panda$core$String* $tmp5362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5360, &$s5361);
    panda$core$String* $tmp5363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5362, backwardDelta5315);
    panda$core$String* $tmp5365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5363, &$s5364);
    panda$core$String* $tmp5366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5365, negStep5330);
    (($fn5367) p_out->$class->vtable[19])(p_out, $tmp5366);
    panda$core$String* $tmp5369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5368, backwardInclusiveTest5355);
    panda$core$String* $tmp5371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5369, &$s5370);
    panda$core$String* $tmp5372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5371, loopInc5218);
    panda$core$String* $tmp5374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5372, &$s5373);
    panda$core$String* $tmp5375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5374, loopEnd4994);
    panda$core$String* $tmp5377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5375, &$s5376);
    (($fn5378) p_out->$class->vtable[19])(p_out, $tmp5377);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardExclusiveLabel5344, p_out);
    panda$core$String* $tmp5380 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5379 = $tmp5380;
    panda$core$String* $tmp5381 = panda$core$String$convert$R$panda$core$String(backwardExclusiveTest5379);
    panda$core$String* $tmp5383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5381, &$s5382);
    panda$core$String* $tmp5384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5383, numberType4892);
    panda$core$String* $tmp5386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5384, &$s5385);
    panda$core$String* $tmp5387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5386, backwardDelta5315);
    panda$core$String* $tmp5389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5387, &$s5388);
    panda$core$String* $tmp5390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5389, negStep5330);
    (($fn5391) p_out->$class->vtable[19])(p_out, $tmp5390);
    panda$core$String* $tmp5393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5392, backwardExclusiveTest5379);
    panda$core$String* $tmp5395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5393, &$s5394);
    panda$core$String* $tmp5396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5395, loopInc5218);
    panda$core$String* $tmp5398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5396, &$s5397);
    panda$core$String* $tmp5399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5398, loopEnd4994);
    panda$core$String* $tmp5401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5399, &$s5400);
    (($fn5402) p_out->$class->vtable[19])(p_out, $tmp5401);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc5218, p_out);
    panda$core$String* $tmp5404 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5403 = $tmp5404;
    panda$core$String* $tmp5405 = panda$core$String$convert$R$panda$core$String(inc5403);
    panda$core$String* $tmp5407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5405, &$s5406);
    panda$core$String* $tmp5408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5407, numberType4892);
    panda$core$String* $tmp5410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5408, &$s5409);
    panda$core$String* $tmp5411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5410, indexValue5196);
    panda$core$String* $tmp5413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5411, &$s5412);
    panda$core$String* $tmp5414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5413, step4967);
    panda$core$String* $tmp5416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5414, &$s5415);
    (($fn5417) p_out->$class->vtable[19])(p_out, $tmp5416);
    panda$core$String* $tmp5419 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5418 = $tmp5419;
    panda$core$String* $tmp5420 = panda$core$String$convert$R$panda$core$String(incStruct5418);
    panda$core$String* $tmp5422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5420, &$s5421);
    panda$core$String* $tmp5423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5422, indexType4878);
    panda$core$String* $tmp5425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5423, &$s5424);
    panda$core$String* $tmp5426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5425, numberType4892);
    panda$core$String* $tmp5428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5426, &$s5427);
    (($fn5429) p_out->$class->vtable[19])(p_out, $tmp5428);
    panda$core$String* $tmp5431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5430, numberType4892);
    panda$core$String* $tmp5433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5431, &$s5432);
    panda$core$String* $tmp5434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5433, inc5403);
    panda$core$String* $tmp5436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5434, &$s5435);
    (($fn5437) p_out->$class->vtable[19])(p_out, $tmp5436);
    panda$core$String* $tmp5439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5438, indexType4878);
    panda$core$String* $tmp5441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5439, &$s5440);
    panda$core$String* $tmp5442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5441, incStruct5418);
    panda$core$String* $tmp5444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5442, &$s5443);
    panda$core$String* $tmp5445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5444, indexType4878);
    panda$core$String* $tmp5447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5445, &$s5446);
    panda$core$String* $tmp5448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5447, index4900);
    panda$core$String* $tmp5450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5448, &$s5449);
    (($fn5451) p_out->$class->vtable[19])(p_out, $tmp5450);
    panda$core$String* $tmp5453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5452, loopStart4990);
    panda$core$String* $tmp5455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5453, &$s5454);
    (($fn5456) p_out->$class->vtable[19])(p_out, $tmp5455);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd4994, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    panda$core$Object* $tmp5457 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5458 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5457)->type);
    if ($tmp5458.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5459 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5460 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5459)->type);
    if ($tmp5460.value) {
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
    panda$core$String* loopStart5467;
    panda$core$String* loopBody5469;
    panda$core$String* loopEnd5471;
    panda$core$String* test5480;
    panda$core$String* testBit5483;
    panda$core$Bit $tmp5461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5461.value);
    panda$core$Int64 $tmp5462 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5462, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5463.value);
    panda$core$Object* $tmp5464 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5465 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5466 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5464)->type, $tmp5465);
    PANDA_ASSERT($tmp5466.value);
    panda$core$String* $tmp5468 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5467 = $tmp5468;
    panda$core$String* $tmp5470 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5469 = $tmp5470;
    panda$core$String* $tmp5472 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5471 = $tmp5472;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5473 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5473->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5473->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5473, ((panda$core$String*) p_w->payload), loopEnd5471, loopStart5467);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5473));
    panda$core$String* $tmp5476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5475, loopStart5467);
    panda$core$String* $tmp5478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5476, &$s5477);
    (($fn5479) p_out->$class->vtable[19])(p_out, $tmp5478);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5467, p_out);
    panda$core$Object* $tmp5481 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5482 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5481), p_out);
    test5480 = $tmp5482;
    panda$core$String* $tmp5484 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5483 = $tmp5484;
    panda$core$String* $tmp5485 = panda$core$String$convert$R$panda$core$String(testBit5483);
    panda$core$String* $tmp5487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5485, &$s5486);
    panda$core$String* $tmp5488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5487, test5480);
    panda$core$String* $tmp5490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5488, &$s5489);
    (($fn5491) p_out->$class->vtable[19])(p_out, $tmp5490);
    panda$core$String* $tmp5493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5492, testBit5483);
    panda$core$String* $tmp5495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5493, &$s5494);
    panda$core$String* $tmp5496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5495, loopBody5469);
    panda$core$String* $tmp5498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5496, &$s5497);
    panda$core$String* $tmp5499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5498, loopEnd5471);
    panda$core$String* $tmp5501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5499, &$s5500);
    (($fn5502) p_out->$class->vtable[19])(p_out, $tmp5501);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5469, p_out);
    panda$core$Object* $tmp5503 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5503), p_out);
    panda$core$Object* $tmp5504 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5505 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5504));
    panda$core$Bit $tmp5506 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5505);
    if ($tmp5506.value) {
    {
        panda$core$String* $tmp5508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5507, loopStart5467);
        panda$core$String* $tmp5510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5508, &$s5509);
        (($fn5511) p_out->$class->vtable[19])(p_out, $tmp5510);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5471, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5518;
    panda$core$String* loopBody5520;
    panda$core$String* loopEnd5522;
    panda$core$String* test5531;
    panda$core$String* testBit5534;
    panda$core$Bit $tmp5512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5512.value);
    panda$core$Int64 $tmp5513 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5513, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5514.value);
    panda$core$Object* $tmp5515 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5516 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5517 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5515)->type, $tmp5516);
    PANDA_ASSERT($tmp5517.value);
    panda$core$String* $tmp5519 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5518 = $tmp5519;
    panda$core$String* $tmp5521 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5520 = $tmp5521;
    panda$core$String* $tmp5523 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5522 = $tmp5523;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5524 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5524->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5524->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5524, ((panda$core$String*) p_d->payload), loopEnd5522, loopStart5518);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5524));
    panda$core$String* $tmp5527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5526, loopBody5520);
    panda$core$String* $tmp5529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5527, &$s5528);
    (($fn5530) p_out->$class->vtable[19])(p_out, $tmp5529);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5518, p_out);
    panda$core$Object* $tmp5532 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5533 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5532), p_out);
    test5531 = $tmp5533;
    panda$core$String* $tmp5535 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5534 = $tmp5535;
    panda$core$String* $tmp5536 = panda$core$String$convert$R$panda$core$String(testBit5534);
    panda$core$String* $tmp5538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5536, &$s5537);
    panda$core$String* $tmp5539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5538, test5531);
    panda$core$String* $tmp5541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5539, &$s5540);
    (($fn5542) p_out->$class->vtable[19])(p_out, $tmp5541);
    panda$core$String* $tmp5544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5543, testBit5534);
    panda$core$String* $tmp5546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5544, &$s5545);
    panda$core$String* $tmp5547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5546, loopBody5520);
    panda$core$String* $tmp5549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5547, &$s5548);
    panda$core$String* $tmp5550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5549, loopEnd5522);
    panda$core$String* $tmp5552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5550, &$s5551);
    (($fn5553) p_out->$class->vtable[19])(p_out, $tmp5552);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5520, p_out);
    panda$core$Object* $tmp5554 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5554), p_out);
    panda$core$Object* $tmp5555 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5556 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5555));
    panda$core$Bit $tmp5557 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5556);
    if ($tmp5557.value) {
    {
        panda$core$String* $tmp5559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5558, loopStart5518);
        panda$core$String* $tmp5561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5559, &$s5560);
        (($fn5562) p_out->$class->vtable[19])(p_out, $tmp5561);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5522, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5566;
    panda$core$String* loopEnd5568;
    panda$core$Bit $tmp5563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5563.value);
    panda$core$Int64 $tmp5564 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5564, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5565.value);
    panda$core$String* $tmp5567 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5566 = $tmp5567;
    panda$core$String* $tmp5569 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5568 = $tmp5569;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5570 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5570->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5570->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5570, ((panda$core$String*) p_l->payload), loopEnd5568, loopStart5566);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5570));
    panda$core$String* $tmp5573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5572, loopStart5566);
    panda$core$String* $tmp5575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5573, &$s5574);
    (($fn5576) p_out->$class->vtable[19])(p_out, $tmp5575);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5566, p_out);
    panda$core$Object* $tmp5577 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5577), p_out);
    panda$core$Object* $tmp5578 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5579 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5578));
    panda$core$Bit $tmp5580 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5579);
    if ($tmp5580.value) {
    {
        panda$core$String* $tmp5582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5581, loopStart5566);
        panda$core$String* $tmp5584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5582, &$s5583);
        (($fn5585) p_out->$class->vtable[19])(p_out, $tmp5584);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5568, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5586;
    panda$core$String* ref5596;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5586 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5587 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5586);
            panda$core$String* $tmp5588 = panda$core$String$convert$R$panda$core$String($tmp5587);
            panda$core$String* $tmp5590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5588, &$s5589);
            panda$core$String* $tmp5591 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5586->type);
            panda$core$String* $tmp5592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5590, $tmp5591);
            panda$core$String* $tmp5594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5592, &$s5593);
            (($fn5595) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5594);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5597 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_value, p_out);
                ref5596 = $tmp5597;
                panda$core$String* $tmp5599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5598, ref5596);
                panda$core$String* $tmp5601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5599, &$s5600);
                panda$core$String* $tmp5602 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5586->type);
                panda$core$String* $tmp5603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5601, $tmp5602);
                panda$core$String* $tmp5605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5603, &$s5604);
                panda$core$String* $tmp5606 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5586);
                panda$core$String* $tmp5607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5605, $tmp5606);
                panda$core$String* $tmp5609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5607, &$s5608);
                (($fn5610) p_out->$class->vtable[19])(p_out, $tmp5609);
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
    panda$collections$Iterator* decl$Iter5624;
    org$pandalanguage$pandac$IRNode* decl5636;
    panda$core$Bit $tmp5614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5613 = $tmp5614.value;
    if ($tmp5613) goto $l5615;
    panda$core$Bit $tmp5616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5613 = $tmp5616.value;
    $l5615:;
    panda$core$Bit $tmp5617 = { $tmp5613 };
    bool $tmp5612 = $tmp5617.value;
    if ($tmp5612) goto $l5618;
    panda$core$Bit $tmp5619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5612 = $tmp5619.value;
    $l5618:;
    panda$core$Bit $tmp5620 = { $tmp5612 };
    bool $tmp5611 = $tmp5620.value;
    if ($tmp5611) goto $l5621;
    panda$core$Bit $tmp5622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5611 = $tmp5622.value;
    $l5621:;
    panda$core$Bit $tmp5623 = { $tmp5611 };
    PANDA_ASSERT($tmp5623.value);
    {
        ITable* $tmp5625 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5625->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5625 = $tmp5625->next;
        }
        $fn5627 $tmp5626 = $tmp5625->methods[0];
        panda$collections$Iterator* $tmp5628 = $tmp5626(((panda$collections$Iterable*) p_v->children));
        decl$Iter5624 = $tmp5628;
        $l5629:;
        ITable* $tmp5631 = decl$Iter5624->$class->itable;
        while ($tmp5631->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5631 = $tmp5631->next;
        }
        $fn5633 $tmp5632 = $tmp5631->methods[0];
        panda$core$Bit $tmp5634 = $tmp5632(decl$Iter5624);
        panda$core$Bit $tmp5635 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5634);
        if (!$tmp5635.value) goto $l5630;
        {
            ITable* $tmp5637 = decl$Iter5624->$class->itable;
            while ($tmp5637->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5637 = $tmp5637->next;
            }
            $fn5639 $tmp5638 = $tmp5637->methods[1];
            panda$core$Object* $tmp5640 = $tmp5638(decl$Iter5624);
            decl5636 = ((org$pandalanguage$pandac$IRNode*) $tmp5640);
            panda$core$Bit $tmp5641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5636->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5641.value);
            panda$core$Int64 $tmp5642 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl5636->children);
            panda$core$Bit $tmp5643 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5642, ((panda$core$Int64) { 1 }));
            if ($tmp5643.value) {
            {
                panda$core$Object* $tmp5644 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5636->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5645 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5636->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5644), ((org$pandalanguage$pandac$IRNode*) $tmp5645), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5646 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5636->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5646), NULL, p_out);
            }
            }
        }
        goto $l5629;
        $l5630:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$OutputStream* p_out) {
    panda$core$String* base5650;
    panda$core$String* raw5653;
    org$pandalanguage$pandac$ClassDecl* cl5655;
    org$pandalanguage$pandac$FieldDecl* f5658;
    panda$collections$ListView* fields5659;
    panda$core$Int64 index5661;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5662;
    panda$core$String* result5719;
    panda$core$String* result5732;
    panda$core$String* reused5735;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5647 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5648 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp5647, p_out);
            return $tmp5648;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5649 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5649;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5651 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5652 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5651), p_out);
            base5650 = $tmp5652;
            panda$core$String* $tmp5654 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            raw5653 = $tmp5654;
            panda$core$Object* $tmp5656 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5657 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5656)->type);
            cl5655 = $tmp5657;
            PANDA_ASSERT(((panda$core$Bit) { cl5655 != NULL }).value);
            f5658 = ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload);
            panda$collections$ListView* $tmp5660 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5655);
            fields5659 = $tmp5660;
            index5661 = ((panda$core$Int64) { -1 });
            ITable* $tmp5663 = ((panda$collections$CollectionView*) fields5659)->$class->itable;
            while ($tmp5663->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5663 = $tmp5663->next;
            }
            $fn5665 $tmp5664 = $tmp5663->methods[0];
            panda$core$Int64 $tmp5666 = $tmp5664(((panda$collections$CollectionView*) fields5659));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5662, ((panda$core$Int64) { 0 }), $tmp5666, ((panda$core$Bit) { false }));
            int64_t $tmp5668 = $tmp5662.min.value;
            panda$core$Int64 i5667 = { $tmp5668 };
            int64_t $tmp5670 = $tmp5662.max.value;
            bool $tmp5671 = $tmp5662.inclusive.value;
            if ($tmp5671) goto $l5678; else goto $l5679;
            $l5678:;
            if ($tmp5668 <= $tmp5670) goto $l5672; else goto $l5674;
            $l5679:;
            if ($tmp5668 < $tmp5670) goto $l5672; else goto $l5674;
            $l5672:;
            {
                ITable* $tmp5680 = fields5659->$class->itable;
                while ($tmp5680->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5680 = $tmp5680->next;
                }
                $fn5682 $tmp5681 = $tmp5680->methods[0];
                panda$core$Object* $tmp5683 = $tmp5681(fields5659, i5667);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5683))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) f5658)->name) }).value) {
                {
                    index5661 = i5667;
                    goto $l5674;
                }
                }
            }
            $l5675:;
            int64_t $tmp5685 = $tmp5670 - i5667.value;
            if ($tmp5671) goto $l5686; else goto $l5687;
            $l5686:;
            if ($tmp5685 >= 1) goto $l5684; else goto $l5674;
            $l5687:;
            if ($tmp5685 > 1) goto $l5684; else goto $l5674;
            $l5684:;
            i5667.value += 1;
            goto $l5672;
            $l5674:;
            panda$core$Bit $tmp5690 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5661, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5690.value);
            panda$core$String* $tmp5691 = panda$core$String$convert$R$panda$core$String(raw5653);
            panda$core$String* $tmp5693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5691, &$s5692);
            org$pandalanguage$pandac$Type* $tmp5694 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5655);
            panda$core$String* $tmp5695 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5694);
            panda$core$String* $tmp5696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5693, $tmp5695);
            panda$core$String* $tmp5698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5696, &$s5697);
            org$pandalanguage$pandac$Type* $tmp5699 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5655);
            panda$core$String* $tmp5700 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5699);
            panda$core$String* $tmp5701 = panda$core$String$convert$R$panda$core$String($tmp5700);
            panda$core$String* $tmp5703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5701, &$s5702);
            panda$core$String* $tmp5704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5703, base5650);
            panda$core$String* $tmp5706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5704, &$s5705);
            panda$core$String* $tmp5707 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5706, ((panda$core$Object*) wrap_panda$core$Int64(index5661)));
            panda$core$String* $tmp5709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5707, &$s5708);
            panda$core$String* $tmp5710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5698, $tmp5709);
            (($fn5711) p_out->$class->vtable[19])(p_out, $tmp5710);
            panda$core$Bit $tmp5713 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f5658->type);
            panda$core$Bit $tmp5714 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5713);
            bool $tmp5712 = $tmp5714.value;
            if ($tmp5712) goto $l5715;
            org$pandalanguage$pandac$ClassDecl* $tmp5716 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f5658->type);
            panda$core$Bit $tmp5717 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp5716);
            $tmp5712 = $tmp5717.value;
            $l5715:;
            panda$core$Bit $tmp5718 = { $tmp5712 };
            if ($tmp5718.value) {
            {
                return raw5653;
            }
            }
            panda$core$String* $tmp5720 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result5719 = $tmp5720;
            panda$core$String* $tmp5721 = panda$core$String$convert$R$panda$core$String(result5719);
            panda$core$String* $tmp5723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5721, &$s5722);
            panda$core$String* $tmp5724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5723, raw5653);
            panda$core$String* $tmp5726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5724, &$s5725);
            panda$core$String* $tmp5727 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5726, $tmp5727);
            panda$core$String* $tmp5730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5728, &$s5729);
            (($fn5731) p_out->$class->vtable[19])(p_out, $tmp5730);
            return result5719;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5733 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5734 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5733), p_out);
            result5732 = $tmp5734;
            panda$core$String* $tmp5736 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5735 = $tmp5736;
            panda$core$String* $tmp5737 = panda$core$String$convert$R$panda$core$String(reused5735);
            panda$core$String* $tmp5739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5737, &$s5738);
            panda$core$String* $tmp5740 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5739, $tmp5740);
            panda$core$String* $tmp5743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5741, &$s5742);
            panda$core$String* $tmp5744 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5745 = panda$core$String$convert$R$panda$core$String($tmp5744);
            panda$core$String* $tmp5747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5745, &$s5746);
            panda$core$String* $tmp5748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5747, result5732);
            panda$core$String* $tmp5750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5748, &$s5749);
            panda$core$String* $tmp5751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5743, $tmp5750);
            (($fn5752) p_out->$class->vtable[19])(p_out, $tmp5751);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5735));
            return result5732;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* lvalue5756;
    panda$core$String* value5767;
    panda$core$String* t5768;
    panda$core$Int64 op5771;
    panda$core$String* right5773;
    panda$core$Bit $tmp5753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5753.value);
    panda$core$Int64 $tmp5754 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5754, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5755.value);
    panda$core$Object* $tmp5757 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5758 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5757)->type);
    panda$core$String* $tmp5759 = panda$core$String$convert$R$panda$core$String($tmp5758);
    panda$core$String* $tmp5761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5759, &$s5760);
    panda$core$Object* $tmp5762 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5763 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5762), p_out);
    panda$core$String* $tmp5764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5761, $tmp5763);
    panda$core$String* $tmp5766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5764, &$s5765);
    lvalue5756 = $tmp5766;
    panda$core$Object* $tmp5769 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5770 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5769)->type);
    t5768 = $tmp5770;
    op5771 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5771, ((panda$core$Int64) { 73 }));
    if ($tmp5772.value) {
    {
        panda$core$Object* $tmp5774 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5775 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5774), p_out);
        right5773 = $tmp5775;
        panda$core$String* $tmp5776 = panda$core$String$convert$R$panda$core$String(t5768);
        panda$core$String* $tmp5778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5776, &$s5777);
        panda$core$String* $tmp5779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5778, right5773);
        panda$core$String* $tmp5781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5779, &$s5780);
        value5767 = $tmp5781;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5782, value5767);
    panda$core$String* $tmp5785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5783, &$s5784);
    panda$core$String* $tmp5786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5785, lvalue5756);
    panda$core$String* $tmp5788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5786, &$s5787);
    (($fn5789) p_out->$class->vtable[19])(p_out, $tmp5788);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5799;
    panda$core$String* result5801;
    bool $tmp5790 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp5790) goto $l5791;
    panda$core$Int64 $tmp5792 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5793 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5792, ((panda$core$Int64) { 0 }));
    $tmp5790 = $tmp5793.value;
    $l5791:;
    panda$core$Bit $tmp5794 = { $tmp5790 };
    if ($tmp5794.value) {
    {
        panda$core$Int64 $tmp5795 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5795, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp5796.value);
        panda$core$Int64 $tmp5797 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5798 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5797, ((panda$core$Int64) { 0 }));
        if ($tmp5798.value) {
        {
            panda$core$Object* $tmp5800 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5799 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5800);
            panda$core$Object* $tmp5802 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5803 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5802), p_out);
            result5801 = $tmp5803;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5804 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5804->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5804->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5804, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5801));
            panda$collections$Array$add$panda$collections$Array$T(inline5799->returns, ((panda$core$Object*) $tmp5804));
            panda$core$String* $tmp5807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5806, inline5799->exitLabel);
            panda$core$String* $tmp5809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5807, &$s5808);
            (($fn5810) p_out->$class->vtable[19])(p_out, $tmp5809);
        }
        }
        else {
        {
            panda$core$Object* $tmp5812 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5813 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5812), p_out);
            panda$core$String* $tmp5814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5811, $tmp5813);
            panda$core$String* $tmp5816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5814, &$s5815);
            (($fn5817) p_out->$class->vtable[19])(p_out, $tmp5816);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5818 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5819 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5818, ((panda$core$Int64) { 0 }));
        if ($tmp5819.value) {
        {
            panda$core$Object* $tmp5821 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5820, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5821)->exitLabel);
            panda$core$String* $tmp5824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5822, &$s5823);
            (($fn5825) p_out->$class->vtable[19])(p_out, $tmp5824);
        }
        }
        else {
        {
            (($fn5827) p_out->$class->vtable[19])(p_out, &$s5826);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5831;
    panda$core$Int64 $tmp5828 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5829 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5828, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5829.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5830 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5830);
    }
    }
    panda$core$Int64 $tmp5832 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5831, ((panda$core$Int64) { 0 }), $tmp5832, ((panda$core$Bit) { false }));
    int64_t $tmp5834 = $tmp5831.min.value;
    panda$core$Int64 i5833 = { $tmp5834 };
    int64_t $tmp5836 = $tmp5831.max.value;
    bool $tmp5837 = $tmp5831.inclusive.value;
    if ($tmp5837) goto $l5844; else goto $l5845;
    $l5844:;
    if ($tmp5834 <= $tmp5836) goto $l5838; else goto $l5840;
    $l5845:;
    if ($tmp5834 < $tmp5836) goto $l5838; else goto $l5840;
    $l5838:;
    {
        panda$core$Object* $tmp5847 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5833);
        bool $tmp5846 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5847)->loopLabel != NULL }).value;
        if (!$tmp5846) goto $l5848;
        panda$core$Object* $tmp5849 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5833);
        panda$core$Bit $tmp5850 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5849)->loopLabel, p_name);
        $tmp5846 = $tmp5850.value;
        $l5848:;
        panda$core$Bit $tmp5851 = { $tmp5846 };
        if ($tmp5851.value) {
        {
            panda$core$Object* $tmp5852 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5833);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5852);
        }
        }
    }
    $l5841:;
    int64_t $tmp5854 = $tmp5836 - i5833.value;
    if ($tmp5837) goto $l5855; else goto $l5856;
    $l5855:;
    if ($tmp5854 >= 1) goto $l5853; else goto $l5840;
    $l5856:;
    if ($tmp5854 > 1) goto $l5853; else goto $l5840;
    $l5853:;
    i5833.value += 1;
    goto $l5838;
    $l5840:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5859;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5860 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5859 = $tmp5860;
    panda$core$String* $tmp5862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5861, desc5859->breakLabel);
    panda$core$String* $tmp5864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5862, &$s5863);
    (($fn5865) p_out->$class->vtable[19])(p_out, $tmp5864);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5866;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5867 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5866 = $tmp5867;
    panda$core$String* $tmp5869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5868, desc5866->continueLabel);
    panda$core$String* $tmp5871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5869, &$s5870);
    (($fn5872) p_out->$class->vtable[19])(p_out, $tmp5871);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* test5882;
    panda$core$String* ifTrue5885;
    panda$core$String* ifFalse5887;
    panda$core$String* name5900;
    panda$core$String* path5901;
    panda$core$String$Index$nullable index5903;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5906;
    panda$core$String* nameRef5908;
    panda$core$String* line5910;
    panda$core$String* msg5915;
    panda$collections$Iterator* m$Iter5922;
    org$pandalanguage$pandac$MethodDecl* m5936;
    panda$core$Bit $tmp5873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5873.value);
    panda$core$Int64 $tmp5875 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5875, ((panda$core$Int64) { 1 }));
    bool $tmp5874 = $tmp5876.value;
    if ($tmp5874) goto $l5877;
    panda$core$Int64 $tmp5878 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5878, ((panda$core$Int64) { 2 }));
    $tmp5874 = $tmp5879.value;
    $l5877:;
    panda$core$Bit $tmp5880 = { $tmp5874 };
    PANDA_ASSERT($tmp5880.value);
    panda$core$Bit $tmp5881 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5881.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5883 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5884 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5883), p_out);
    test5882 = $tmp5884;
    panda$core$String* $tmp5886 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5885 = $tmp5886;
    panda$core$String* $tmp5888 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5887 = $tmp5888;
    panda$core$String* $tmp5890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5889, test5882);
    panda$core$String* $tmp5892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5890, &$s5891);
    panda$core$String* $tmp5893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5892, ifTrue5885);
    panda$core$String* $tmp5895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5893, &$s5894);
    panda$core$String* $tmp5896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5895, ifFalse5887);
    panda$core$String* $tmp5898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5896, &$s5897);
    (($fn5899) p_out->$class->vtable[19])(p_out, $tmp5898);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse5887, p_out);
    panda$core$Object* $tmp5902 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path5901 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5902)->source->path;
    panda$core$String$Index$nullable $tmp5905 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path5901, &$s5904);
    index5903 = $tmp5905;
    if (((panda$core$Bit) { !index5903.nonnull }).value) {
    {
        name5900 = path5901;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp5906, index5903, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5907 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path5901, $tmp5906);
        name5900 = $tmp5907;
    }
    }
    panda$core$String* $tmp5909 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, name5900, p_out);
    nameRef5908 = $tmp5909;
    panda$core$String* $tmp5912 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5911, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp5914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5912, &$s5913);
    line5910 = $tmp5914;
    panda$core$Int64 $tmp5916 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5916, ((panda$core$Int64) { 2 }));
    if ($tmp5917.value) {
    {
        panda$core$Object* $tmp5918 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5919 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5918), p_out);
        msg5915 = $tmp5919;
    }
    }
    else {
    {
        msg5915 = NULL;
    }
    }
    (($fn5921) p_out->$class->vtable[16])(p_out, &$s5920);
    {
        org$pandalanguage$pandac$Type* $tmp5923 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp5924 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp5923);
        ITable* $tmp5925 = ((panda$collections$Iterable*) $tmp5924->methods)->$class->itable;
        while ($tmp5925->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5925 = $tmp5925->next;
        }
        $fn5927 $tmp5926 = $tmp5925->methods[0];
        panda$collections$Iterator* $tmp5928 = $tmp5926(((panda$collections$Iterable*) $tmp5924->methods));
        m$Iter5922 = $tmp5928;
        $l5929:;
        ITable* $tmp5931 = m$Iter5922->$class->itable;
        while ($tmp5931->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5931 = $tmp5931->next;
        }
        $fn5933 $tmp5932 = $tmp5931->methods[0];
        panda$core$Bit $tmp5934 = $tmp5932(m$Iter5922);
        panda$core$Bit $tmp5935 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5934);
        if (!$tmp5935.value) goto $l5930;
        {
            ITable* $tmp5937 = m$Iter5922->$class->itable;
            while ($tmp5937->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5937 = $tmp5937->next;
            }
            $fn5939 $tmp5938 = $tmp5937->methods[1];
            panda$core$Object* $tmp5940 = $tmp5938(m$Iter5922);
            m5936 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5940);
            panda$core$Bit $tmp5942 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5936)->name, &$s5941);
            if ($tmp5942.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m5936);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m5936);
            }
            }
        }
        goto $l5929;
        $l5930:;
    }
    if (((panda$core$Bit) { msg5915 != NULL }).value) {
    {
        panda$core$String* $tmp5945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5943, &$s5944);
        (($fn5946) p_out->$class->vtable[16])(p_out, $tmp5945);
    }
    }
    else {
    {
        (($fn5948) p_out->$class->vtable[16])(p_out, &$s5947);
    }
    }
    panda$core$String* $tmp5950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5949, nameRef5908);
    panda$core$String* $tmp5952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5950, &$s5951);
    panda$core$String* $tmp5953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5952, line5910);
    panda$core$String* $tmp5955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5953, &$s5954);
    (($fn5956) p_out->$class->vtable[16])(p_out, $tmp5955);
    if (((panda$core$Bit) { msg5915 != NULL }).value) {
    {
        panda$core$String* $tmp5958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5957, msg5915);
        panda$core$String* $tmp5960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5958, &$s5959);
        (($fn5961) p_out->$class->vtable[16])(p_out, $tmp5960);
    }
    }
    (($fn5963) p_out->$class->vtable[19])(p_out, &$s5962);
    (($fn5965) p_out->$class->vtable[19])(p_out, &$s5964);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue5885, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$OutputStream* p_out) {
    panda$core$String* valueStruct5967;
    org$pandalanguage$pandac$ClassDecl* numberClass5970;
    panda$core$String* value5973;
    org$pandalanguage$pandac$FieldDecl* f5982;
    panda$core$String* switchType5985;
    panda$core$String* endLabel5995;
    panda$collections$Array* whenLabels5997;
    panda$core$String* otherwiseLabel6000;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6011;
    org$pandalanguage$pandac$IRNode* w6026;
    panda$core$String* label6030;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6032;
    panda$core$UInt64 number6048;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6076;
    org$pandalanguage$pandac$IRNode* w6091;
    org$pandalanguage$pandac$IRNode* block6093;
    panda$core$Bit $tmp5966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp5966.value);
    panda$core$Object* $tmp5968 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5969 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5968), p_out);
    valueStruct5967 = $tmp5969;
    panda$core$Object* $tmp5971 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp5972 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5971)->type);
    numberClass5970 = $tmp5972;
    panda$core$String* $tmp5974 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value5973 = $tmp5974;
    panda$core$String* $tmp5975 = panda$core$String$convert$R$panda$core$String(value5973);
    panda$core$String* $tmp5977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5975, &$s5976);
    panda$core$String* $tmp5978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5977, valueStruct5967);
    panda$core$String* $tmp5980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5978, &$s5979);
    (($fn5981) p_out->$class->vtable[19])(p_out, $tmp5980);
    org$pandalanguage$pandac$Symbol* $tmp5984 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass5970->symbolTable, &$s5983);
    f5982 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5984);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f5982);
    panda$core$String* $tmp5986 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f5982->type);
    switchType5985 = $tmp5986;
    panda$core$String* $tmp5988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5987, switchType5985);
    panda$core$String* $tmp5990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5988, &$s5989);
    panda$core$String* $tmp5991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5990, value5973);
    panda$core$String* $tmp5993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5991, &$s5992);
    (($fn5994) p_out->$class->vtable[16])(p_out, $tmp5993);
    panda$core$String* $tmp5996 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel5995 = $tmp5996;
    panda$collections$Array* $tmp5998 = (panda$collections$Array*) malloc(40);
    $tmp5998->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5998->refCount.value = 1;
    panda$collections$Array$init($tmp5998);
    whenLabels5997 = $tmp5998;
    panda$core$Int64 $tmp6001 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp6002 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6001, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp6003 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, $tmp6002);
    panda$core$Bit $tmp6004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp6003)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp6004.value) {
    {
        panda$core$String* $tmp6005 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel6000 = $tmp6005;
    }
    }
    else {
    {
        otherwiseLabel6000 = endLabel5995;
    }
    }
    panda$core$String* $tmp6007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6006, otherwiseLabel6000);
    panda$core$String* $tmp6009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6007, &$s6008);
    (($fn6010) p_out->$class->vtable[19])(p_out, $tmp6009);
    panda$core$Int64 $tmp6012 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6011, ((panda$core$Int64) { 1 }), $tmp6012, ((panda$core$Bit) { false }));
    int64_t $tmp6014 = $tmp6011.min.value;
    panda$core$Int64 i6013 = { $tmp6014 };
    int64_t $tmp6016 = $tmp6011.max.value;
    bool $tmp6017 = $tmp6011.inclusive.value;
    if ($tmp6017) goto $l6024; else goto $l6025;
    $l6024:;
    if ($tmp6014 <= $tmp6016) goto $l6018; else goto $l6020;
    $l6025:;
    if ($tmp6014 < $tmp6016) goto $l6018; else goto $l6020;
    $l6018:;
    {
        panda$core$Object* $tmp6027 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i6013);
        w6026 = ((org$pandalanguage$pandac$IRNode*) $tmp6027);
        panda$core$Bit $tmp6028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6026->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp6028.value) {
        {
            goto $l6021;
        }
        }
        panda$core$Bit $tmp6029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6026->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp6029.value);
        panda$core$String* $tmp6031 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label6030 = $tmp6031;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels5997, ((panda$core$Object*) label6030));
        panda$core$Int64 $tmp6033 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w6026->children);
        panda$core$Int64 $tmp6034 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6033, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6032, ((panda$core$Int64) { 0 }), $tmp6034, ((panda$core$Bit) { false }));
        int64_t $tmp6036 = $tmp6032.min.value;
        panda$core$Int64 i6035 = { $tmp6036 };
        int64_t $tmp6038 = $tmp6032.max.value;
        bool $tmp6039 = $tmp6032.inclusive.value;
        if ($tmp6039) goto $l6046; else goto $l6047;
        $l6046:;
        if ($tmp6036 <= $tmp6038) goto $l6040; else goto $l6042;
        $l6047:;
        if ($tmp6036 < $tmp6038) goto $l6040; else goto $l6042;
        $l6040:;
        {
            panda$core$Object* $tmp6049 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w6026->children, i6035);
            panda$core$UInt64 $tmp6050 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6049));
            number6048 = $tmp6050;
            panda$core$String* $tmp6052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6051, switchType5985);
            panda$core$String* $tmp6054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6052, &$s6053);
            panda$core$String* $tmp6055 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6054, ((panda$core$Object*) wrap_panda$core$UInt64(number6048)));
            panda$core$String* $tmp6057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6055, &$s6056);
            panda$core$String* $tmp6058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6057, label6030);
            panda$core$String* $tmp6060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6058, &$s6059);
            (($fn6061) p_out->$class->vtable[19])(p_out, $tmp6060);
        }
        $l6043:;
        int64_t $tmp6063 = $tmp6038 - i6035.value;
        if ($tmp6039) goto $l6064; else goto $l6065;
        $l6064:;
        if ($tmp6063 >= 1) goto $l6062; else goto $l6042;
        $l6065:;
        if ($tmp6063 > 1) goto $l6062; else goto $l6042;
        $l6062:;
        i6035.value += 1;
        goto $l6040;
        $l6042:;
    }
    $l6021:;
    int64_t $tmp6069 = $tmp6016 - i6013.value;
    if ($tmp6017) goto $l6070; else goto $l6071;
    $l6070:;
    if ($tmp6069 >= 1) goto $l6068; else goto $l6020;
    $l6071:;
    if ($tmp6069 > 1) goto $l6068; else goto $l6020;
    $l6068:;
    i6013.value += 1;
    goto $l6018;
    $l6020:;
    (($fn6075) p_out->$class->vtable[19])(p_out, &$s6074);
    panda$core$Int64 $tmp6077 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6076, ((panda$core$Int64) { 1 }), $tmp6077, ((panda$core$Bit) { false }));
    int64_t $tmp6079 = $tmp6076.min.value;
    panda$core$Int64 i6078 = { $tmp6079 };
    int64_t $tmp6081 = $tmp6076.max.value;
    bool $tmp6082 = $tmp6076.inclusive.value;
    if ($tmp6082) goto $l6089; else goto $l6090;
    $l6089:;
    if ($tmp6079 <= $tmp6081) goto $l6083; else goto $l6085;
    $l6090:;
    if ($tmp6079 < $tmp6081) goto $l6083; else goto $l6085;
    $l6083:;
    {
        panda$core$Object* $tmp6092 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i6078);
        w6091 = ((org$pandalanguage$pandac$IRNode*) $tmp6092);
        panda$core$Int64 $tmp6094 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w6091->children);
        panda$core$Int64 $tmp6095 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6094, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp6096 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w6091->children, $tmp6095);
        block6093 = ((org$pandalanguage$pandac$IRNode*) $tmp6096);
        panda$core$Int64 $tmp6097 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6078, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp6098 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels5997);
        panda$core$Bit $tmp6099 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp6097, $tmp6098);
        if ($tmp6099.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, otherwiseLabel6000, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp6100 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6078, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp6101 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels5997, $tmp6100);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ((panda$core$String*) $tmp6101), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block6093, p_out);
        panda$core$Bit $tmp6102 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block6093);
        panda$core$Bit $tmp6103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6102);
        if ($tmp6103.value) {
        {
            panda$core$String* $tmp6105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6104, endLabel5995);
            panda$core$String* $tmp6107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6105, &$s6106);
            (($fn6108) p_out->$class->vtable[19])(p_out, $tmp6107);
        }
        }
    }
    $l6086:;
    int64_t $tmp6110 = $tmp6081 - i6078.value;
    if ($tmp6082) goto $l6111; else goto $l6112;
    $l6111:;
    if ($tmp6110 >= 1) goto $l6109; else goto $l6085;
    $l6112:;
    if ($tmp6110 > 1) goto $l6109; else goto $l6085;
    $l6109:;
    i6078.value += 1;
    goto $l6083;
    $l6085:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel5995, p_out);
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
    panda$core$String* result6115;
    org$pandalanguage$pandac$Type* $tmp6116 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp6117 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6116);
    result6115 = $tmp6117;
    panda$core$Bit $tmp6119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6118 = $tmp6119.value;
    if (!$tmp6118) goto $l6120;
    panda$core$Bit $tmp6122 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6115, &$s6121);
    panda$core$Bit $tmp6123 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6122);
    $tmp6118 = $tmp6123.value;
    $l6120:;
    panda$core$Bit $tmp6124 = { $tmp6118 };
    if ($tmp6124.value) {
    {
        panda$core$String* $tmp6126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6115, &$s6125);
        return $tmp6126;
    }
    }
    return result6115;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6127;
    panda$core$Bit needsIndirection6136;
    panda$core$String* separator6148;
    panda$collections$Iterator* p$Iter6167;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6179;
    panda$core$String* $tmp6128 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6127 = $tmp6128;
    panda$core$Bit $tmp6129 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6127));
    if ($tmp6129.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6127));
    panda$core$String* $tmp6131 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6130, $tmp6131);
    panda$core$String* $tmp6134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6132, &$s6133);
    (($fn6135) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6134);
    panda$core$Bit $tmp6137 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6136 = $tmp6137;
    if (needsIndirection6136.value) {
    {
        (($fn6139) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6138);
    }
    }
    else {
    {
        panda$core$String* $tmp6140 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6141) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6140);
    }
    }
    panda$core$String* $tmp6143 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6142, $tmp6143);
    panda$core$String* $tmp6146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6144, &$s6145);
    (($fn6147) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6146);
    separator6148 = &$s6149;
    if (needsIndirection6136.value) {
    {
        panda$core$String* $tmp6150 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6151 = panda$core$String$convert$R$panda$core$String($tmp6150);
        panda$core$String* $tmp6153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6151, &$s6152);
        (($fn6154) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6153);
        separator6148 = &$s6155;
    }
    }
    panda$core$Bit $tmp6156 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6157 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6156);
    if ($tmp6157.value) {
    {
        panda$core$String* $tmp6158 = panda$core$String$convert$R$panda$core$String(separator6148);
        panda$core$String* $tmp6160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6158, &$s6159);
        panda$core$String* $tmp6161 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6160, $tmp6161);
        panda$core$String* $tmp6164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6162, &$s6163);
        (($fn6165) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6164);
        separator6148 = &$s6166;
    }
    }
    {
        ITable* $tmp6168 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6168->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6168 = $tmp6168->next;
        }
        $fn6170 $tmp6169 = $tmp6168->methods[0];
        panda$collections$Iterator* $tmp6171 = $tmp6169(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6167 = $tmp6171;
        $l6172:;
        ITable* $tmp6174 = p$Iter6167->$class->itable;
        while ($tmp6174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6174 = $tmp6174->next;
        }
        $fn6176 $tmp6175 = $tmp6174->methods[0];
        panda$core$Bit $tmp6177 = $tmp6175(p$Iter6167);
        panda$core$Bit $tmp6178 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6177);
        if (!$tmp6178.value) goto $l6173;
        {
            ITable* $tmp6180 = p$Iter6167->$class->itable;
            while ($tmp6180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6180 = $tmp6180->next;
            }
            $fn6182 $tmp6181 = $tmp6180->methods[1];
            panda$core$Object* $tmp6183 = $tmp6181(p$Iter6167);
            p6179 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6183);
            panda$core$String* $tmp6184 = panda$core$String$convert$R$panda$core$String(separator6148);
            panda$core$String* $tmp6186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6184, &$s6185);
            panda$core$String* $tmp6187 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6179->type);
            panda$core$String* $tmp6188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6186, $tmp6187);
            panda$core$String* $tmp6190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6188, &$s6189);
            panda$core$String* $tmp6191 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6179->name);
            panda$core$String* $tmp6192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6190, $tmp6191);
            panda$core$String* $tmp6194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6192, &$s6193);
            (($fn6195) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6194);
            separator6148 = &$s6196;
        }
        goto $l6172;
        $l6173:;
    }
    (($fn6198) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6197);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6221;
    panda$collections$Iterator* p$Iter6231;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6243;
    panda$io$MemoryOutputStream* bodyBuffer6264;
    panda$collections$Iterator* s$Iter6267;
    org$pandalanguage$pandac$IRNode* s6279;
    panda$core$Object* $tmp6199 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6199)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6200;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$io$MemoryOutputStream* $tmp6201 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6201->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6201->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6201);
    self->methodHeader = $tmp6201;
    (($fn6204) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6203);
    panda$core$Bit $tmp6205 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6205.value) {
    {
        (($fn6207) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6206);
    }
    }
    panda$core$String* $tmp6208 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6209 = panda$core$String$convert$R$panda$core$String($tmp6208);
    panda$core$String* $tmp6211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6209, &$s6210);
    panda$core$String* $tmp6212 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6211, $tmp6212);
    panda$core$String* $tmp6215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6213, &$s6214);
    panda$core$String* $tmp6216 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6215, $tmp6216);
    panda$core$String* $tmp6219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6217, &$s6218);
    (($fn6220) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6219);
    separator6221 = &$s6222;
    panda$core$Bit $tmp6223 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6224 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6223);
    if ($tmp6224.value) {
    {
        panda$core$String* $tmp6225 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6226 = panda$core$String$convert$R$panda$core$String($tmp6225);
        panda$core$String* $tmp6228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6226, &$s6227);
        (($fn6229) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6228);
        separator6221 = &$s6230;
    }
    }
    {
        ITable* $tmp6232 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6232->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6232 = $tmp6232->next;
        }
        $fn6234 $tmp6233 = $tmp6232->methods[0];
        panda$collections$Iterator* $tmp6235 = $tmp6233(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6231 = $tmp6235;
        $l6236:;
        ITable* $tmp6238 = p$Iter6231->$class->itable;
        while ($tmp6238->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6238 = $tmp6238->next;
        }
        $fn6240 $tmp6239 = $tmp6238->methods[0];
        panda$core$Bit $tmp6241 = $tmp6239(p$Iter6231);
        panda$core$Bit $tmp6242 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6241);
        if (!$tmp6242.value) goto $l6237;
        {
            ITable* $tmp6244 = p$Iter6231->$class->itable;
            while ($tmp6244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6244 = $tmp6244->next;
            }
            $fn6246 $tmp6245 = $tmp6244->methods[1];
            panda$core$Object* $tmp6247 = $tmp6245(p$Iter6231);
            p6243 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6247);
            panda$core$String* $tmp6248 = panda$core$String$convert$R$panda$core$String(separator6221);
            panda$core$String* $tmp6250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6248, &$s6249);
            panda$core$String* $tmp6251 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6243->type);
            panda$core$String* $tmp6252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6250, $tmp6251);
            panda$core$String* $tmp6254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6252, &$s6253);
            panda$core$String* $tmp6255 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6243->name);
            panda$core$String* $tmp6256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6254, $tmp6255);
            panda$core$String* $tmp6258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6256, &$s6257);
            (($fn6259) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6258);
            separator6221 = &$s6260;
        }
        goto $l6236;
        $l6237:;
    }
    (($fn6262) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6261);
    panda$core$Bit $tmp6263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6263.value);
    panda$io$MemoryOutputStream* $tmp6265 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6265->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6265->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6265);
    bodyBuffer6264 = $tmp6265;
    {
        ITable* $tmp6268 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6268->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6268 = $tmp6268->next;
        }
        $fn6270 $tmp6269 = $tmp6268->methods[0];
        panda$collections$Iterator* $tmp6271 = $tmp6269(((panda$collections$Iterable*) p_body->children));
        s$Iter6267 = $tmp6271;
        $l6272:;
        ITable* $tmp6274 = s$Iter6267->$class->itable;
        while ($tmp6274->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6274 = $tmp6274->next;
        }
        $fn6276 $tmp6275 = $tmp6274->methods[0];
        panda$core$Bit $tmp6277 = $tmp6275(s$Iter6267);
        panda$core$Bit $tmp6278 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6277);
        if (!$tmp6278.value) goto $l6273;
        {
            ITable* $tmp6280 = s$Iter6267->$class->itable;
            while ($tmp6280->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6280 = $tmp6280->next;
            }
            $fn6282 $tmp6281 = $tmp6280->methods[1];
            panda$core$Object* $tmp6283 = $tmp6281(s$Iter6267);
            s6279 = ((org$pandalanguage$pandac$IRNode*) $tmp6283);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s6279, ((panda$io$OutputStream*) bodyBuffer6264));
        }
        goto $l6272;
        $l6273:;
    }
    panda$core$String* $tmp6284 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeader);
    (($fn6285) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6284);
    panda$core$String* $tmp6286 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer6264);
    (($fn6287) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6286);
    panda$core$Bit $tmp6288 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6289 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6288);
    if ($tmp6289.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6290 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6291 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6290);
        if ($tmp6291.value) {
        {
            (($fn6293) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6292);
        }
        }
        else {
        {
            (($fn6295) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6294);
        }
        }
    }
    }
    (($fn6297) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6296);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6298 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6298.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6299 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6299);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

