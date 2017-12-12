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
#include "panda/core/String/Index.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/collections/ImmutableArray.h"
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
typedef panda$collections$Iterator* (*$fn1690)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1696)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1702)(panda$collections$Iterator*);
typedef void (*$fn1735)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1751)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1764)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1770)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1785)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1798)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1814)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1833)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1848)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1906)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1922)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1931)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1947)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1956)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1995)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2012)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2035)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2044)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2056)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2079)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2088)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2100)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2110)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2132)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2162)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2185)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2192)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2221)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2230)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2244)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2283)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2296)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2308)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2313)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2320)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2337)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2350)(panda$collections$CollectionView*);
typedef void (*$fn2370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2382)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2424)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2445)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2458)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2472)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2497)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2512)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2537)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2549)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2569)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2584)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2600)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2612)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2629)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2646)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2660)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2683)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2698)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2752)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2759)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2770)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2776)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2782)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2788)(panda$collections$Iterator*);
typedef void (*$fn2799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2801)(panda$io$OutputStream*);
typedef void (*$fn2826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2946)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2958)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2976)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2983)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2988)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2994)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3000)(panda$collections$Iterator*);
typedef void (*$fn3008)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3023)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3046)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3061)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3072)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3093)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3104)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3122)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3158)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3174)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3179)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3195)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3211)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3229)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3251)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3268)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3294)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3314)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3331)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3346)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3357)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3385)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3407)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3422)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3437)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3474)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3551)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3606)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3647)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3661)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3683)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3706)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3733)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3748)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3781)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3793)(panda$collections$CollectionView*);
typedef void (*$fn3804)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3811)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3817)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3823)(panda$collections$Iterator*);
typedef void (*$fn3832)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3835)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3872)(panda$collections$CollectionView*);
typedef void (*$fn3884)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3901)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3924)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3932)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3940)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3949)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3971)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3979)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4020)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4031)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4065)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4071)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4077)(panda$collections$Iterator*);
typedef void (*$fn4099)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4126)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4151)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4163)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4179)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4184)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4287)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4303)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4320)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4324)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4330)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4336)(panda$collections$Iterator*);
typedef void (*$fn4338)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4342)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4365)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4380)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4393)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4404)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4440)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4447)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4468)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4485)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4499)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4508)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4517)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4560)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4579)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4590)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4609)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4620)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4635)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4642)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4659)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4684)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4695)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4718)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4730)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4750)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4764)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4769)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4805)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4812)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4824)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4833)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4850)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4864)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4873)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4882)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4896)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4945)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4957)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4974)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4993)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5004)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5023)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5034)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5051)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5070)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5081)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5100)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5111)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5126)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5133)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5193)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5204)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5219)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5230)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5245)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5257)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5270)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5283)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5294)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5307)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5318)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5333)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5345)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5353)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5367)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5372)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5395)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5407)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5418)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5427)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5446)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5458)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5469)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5478)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5492)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5501)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5511)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5526)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5543)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5549)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5555)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5581)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5598)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5627)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5650)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5671)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5708)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5729)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5736)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5744)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5746)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5818)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5840)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5846)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5852)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5858)(panda$collections$Iterator*);
typedef void (*$fn5865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5867)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5875)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5880)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5882)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5884)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5900)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5913)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5929)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5980)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5994)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6027)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6054)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6058)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6060)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6066)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6073)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6084)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6089)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6095)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6101)(panda$collections$Iterator*);
typedef void (*$fn6114)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6117)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6123)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6126)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6139)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6148)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6159)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6165)(panda$collections$Iterator*);
typedef void (*$fn6178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6181)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6189)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6195)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6201)(panda$collections$Iterator*);
typedef void (*$fn6204)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6212)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6216)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
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
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
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
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
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
static panda$core$String $s1550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, 13918, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1405297, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1404792, NULL };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, 13904, NULL };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, 217363422, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, -2786053692556271290, NULL };
static panda$core$String $s1607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, 141821238, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, 142006571, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s1619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, 141945375, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s1622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, 141852364, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, 146203701926599, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, 141994765, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, 141975383, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, 141902866, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, 1447551143116, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, 1404587, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, 141953965, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1404792, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1405297, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, 1404777, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, 1405282, NULL };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, 1405598, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, 141832564, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, 141822248, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, 14324945814, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, 142056986, NULL };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, 14325180552, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, 141954978, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, 14325078544, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, 142005268, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, 142005274, NULL };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, 1405855, NULL };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, -8516432373732149011, NULL };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, -8516432373731118710, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 2215331, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 2154135, NULL };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, 223575839, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, 223718240, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 2214028, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, 205183331, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 2031008, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 21526, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 2265746, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 219725109287572, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 219725109288469, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, 22192236038186692, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, 22192236038187197, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, 22192236038186677, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, 22192236038187182, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 2215331, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 2154135, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, 225636441, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, 225778842, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 2214028, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, 216516642, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 2031008, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 21526, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 2265746, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 219725109287572, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 219725109288469, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, 22192236038207094, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, 22192236038207599, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, 22192236038207079, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, 22192236038207584, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, 210150800, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, 210336133, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, 210274937, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, 210181926, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, 21870595432513580, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, 21870595432514477, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, 21870595432513785, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, 21870595432514290, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, 21870595432513770, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, 21870595432514275, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x73\x74\x63\x63\x20", 7, 216520157801561, NULL };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, 212767339, NULL };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A", 2, 14485, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, 14834798317007399, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, 5996012307911795392, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, 19638, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, -284792955217493296, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, 1445392722364703443, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, 9180175165629405233, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, 147755760, NULL };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, 1445392722364703444, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, 2891297979021532403, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 20716344924, NULL };
static panda$core$String $s2419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, -68084191220774643, NULL };
static panda$core$String $s2451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, 212798144, NULL };
static panda$core$String $s2566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 229298558774239, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, 2946720541906757250, NULL };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, 178709719977385382, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, 2005081535935103476, NULL };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 146543380183876, NULL };
static panda$core$String $s2746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, 22799530931, NULL };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s2768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 171978245881277, NULL };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s2944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s2949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 14324499638457470, NULL };
static panda$core$String $s2953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s2971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s2974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1450073858438092980, NULL };
static panda$core$String $s3083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1983470, NULL };
static panda$core$String $s3085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s3151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 25, -6025032490972529456, NULL };
static panda$core$String $s3153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 22, 3938018972516606829, NULL };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, -6901405387198259419, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, -5055193716233257020, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, -38380777888947644, NULL };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s3326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1971047, NULL };
static panda$core$String $s3371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, -7594506016420023174, NULL };
static panda$core$String $s3374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 2084875595949565210, NULL };
static panda$core$String $s3455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 22699766057, NULL };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 223587553, NULL };
static panda$core$String $s3487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 230799660, NULL };
static panda$core$String $s3528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 212358244529747, NULL };
static panda$core$String $s3537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s3653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s3659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s3723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s3731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 21489501287, NULL };
static panda$core$String $s3736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 3556234982078979695, NULL };
static panda$core$String $s3738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x69\x38\x2A\x2A\x20", 11, -1701017812076485794, NULL };
static panda$core$String $s3745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s3760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 175539598599330, NULL };
static panda$core$String $s3786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1410364661239, NULL };
static panda$core$String $s3799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, -4682671939848071135, NULL };
static panda$core$String $s3802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s3806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 2107094, NULL };
static panda$core$String $s3830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s3838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 17208241946, NULL };
static panda$core$String $s3840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, -4560911471279777923, NULL };
static panda$core$String $s3850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s3852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 54, -4410989833928586841, NULL };
static panda$core$String $s3860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, -1652634297463438611, NULL };
static panda$core$String $s3862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, -1388553655089279848, NULL };
static panda$core$String $s3875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s3878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s3881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20\x69\x38\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 14, 8437322619071490889, NULL };
static panda$core$String $s3888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 14479861264, NULL };
static panda$core$String $s3892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, -1700716425750402941, NULL };
static panda$core$String $s3915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, 24050909224991147, NULL };
static panda$core$String $s3919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, -1449709338160382639, NULL };
static panda$core$String $s3930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, 149724671, NULL };
static panda$core$String $s3935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s3938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s3947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 24050909225001348, NULL };
static panda$core$String $s3966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s3977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 2138506394783058478, NULL };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s4011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s4018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 141826750873303, NULL };
static panda$core$String $s4026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 13886901203, NULL };
static panda$core$String $s4029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s4092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s4121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s4138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s4145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 214439158056679, NULL };
static panda$core$String $s4174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s4177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s4180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 2149145203081189652, NULL };
static panda$core$String $s4182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s4248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s4282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s4294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s4454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s4472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s4475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s4486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s4512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s4533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s4540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s4543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s4548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s4557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s4570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s4600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s4627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s4679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s4702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s4725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s4737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s4740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s4743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s4745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s4819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s4837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s4840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s4851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s4877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s4884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s4888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, -8455018733144080751, NULL };
static panda$core$String $s4891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s4894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1527347502952, NULL };
static panda$core$String $s4921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s4928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s4931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s4933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 5640068998409967338, NULL };
static panda$core$String $s4940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 150, NULL };
static panda$core$String $s4947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s4971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s4984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s5014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 2091237, NULL };
static panda$core$String $s5061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 2092752, NULL };
static panda$core$String $s5091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s5255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s5325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s5340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s5343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s5346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s5348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s5509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s5613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 5661491935713932202, NULL };
static panda$core$String $s5624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s5644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s5648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s5657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s5734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s5780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s5830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s5832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s5839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x66\x61\x73\x74\x63\x63\x20\x76\x6F\x69\x64\x20", 17, 8605580293215133655, NULL };
static panda$core$String $s5860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1112391861657830585, NULL };
static panda$core$String $s5862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, -3426205430399916046, NULL };
static panda$core$String $s5863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, -6932554582644871757, NULL };
static panda$core$String $s5866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, -418642434149121372, NULL };
static panda$core$String $s5868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, -3066853447063148068, NULL };
static panda$core$String $s5870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 3939743058867758116, NULL };
static panda$core$String $s5878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s5883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s5895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s5906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, 230550101366891, NULL };
static panda$core$String $s5908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 13524, NULL };
static panda$core$String $s5970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, 14293708514290657, NULL };
static panda$core$String $s5972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, 13873332722, NULL };
static panda$core$String $s6023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s6025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 21658185952146853, NULL };
static panda$core$String $s6052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s6061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s6119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s6122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s6125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s6129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s6211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s6213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s6215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };

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
            panda$core$Int64 $tmp80 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp81 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp80, ((panda$core$Int64) { 0 }));
            if ($tmp81.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp82 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp83 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp82, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp84 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, $tmp83);
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
    panda$core$MutableString$append$panda$core$String(result438, &$s445);
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
    panda$core$MutableString$append$panda$core$String(result438, &$s454);
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
    panda$core$MutableString$append$panda$core$String(resultType650, &$s672);
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
        panda$core$MutableString$append$panda$core$String(resultType1195, &$s1203);
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
    panda$core$Char8 $tmp1549;
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
        panda$core$Int32 $tmp1548 = panda$core$Char32$convert$R$panda$core$Int32(c1546);
        switch ($tmp1548.value) {
            case 46:
            {
                panda$core$Char8$init$panda$core$UInt8(&$tmp1549, ((panda$core$UInt8) { 36 }));
                panda$core$MutableString$append$panda$core$Char8(result1534, $tmp1549);
            }
            break;
            case 63:
            {
                panda$core$MutableString$append$panda$core$String(result1534, &$s1550);
            }
            break;
            case 60:
            {
                panda$core$MutableString$append$panda$core$String(result1534, &$s1551);
            }
            break;
            case 62:
            {
                panda$core$MutableString$append$panda$core$String(result1534, &$s1552);
            }
            break;
            case 32:
            {
                {
                }
            }
            break;
            case 44:
            {
                panda$core$MutableString$append$panda$core$String(result1534, &$s1553);
            }
            break;
            default:
            {
                panda$core$MutableString$append$panda$core$Char32(result1534, c1546);
            }
        }
        panda$core$String$Index $tmp1554 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_s, current1539);
        current1539 = $tmp1554;
    }
    goto $l1543;
    $l1544:;
    panda$core$String* $tmp1555 = panda$core$MutableString$finish$R$panda$core$String(result1534);
    return $tmp1555;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1559;
    panda$core$String* result1587;
    panda$core$Bit $tmp1556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1556.value) {
    {
        panda$core$Int64 $tmp1557 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1558 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1557, ((panda$core$Int64) { 0 }));
        if ($tmp1558.value) {
        {
            panda$core$Int64 $tmp1560 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1559, ((panda$core$Int64) { 0 }), $tmp1560, ((panda$core$Bit) { false }));
            int64_t $tmp1562 = $tmp1559.min.value;
            panda$core$Int64 i1561 = { $tmp1562 };
            int64_t $tmp1564 = $tmp1559.max.value;
            bool $tmp1565 = $tmp1559.inclusive.value;
            if ($tmp1565) goto $l1572; else goto $l1573;
            $l1572:;
            if ($tmp1562 <= $tmp1564) goto $l1566; else goto $l1568;
            $l1573:;
            if ($tmp1562 < $tmp1564) goto $l1566; else goto $l1568;
            $l1566:;
            {
                panda$core$Object* $tmp1574 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1561);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1574)->name) }).value) {
                {
                    panda$core$Object* $tmp1575 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1576 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1575)->argRefs, i1561);
                    return ((panda$core$String*) $tmp1576);
                }
                }
            }
            $l1569:;
            int64_t $tmp1578 = $tmp1564 - i1561.value;
            if ($tmp1565) goto $l1579; else goto $l1580;
            $l1579:;
            if ($tmp1578 >= 1) goto $l1577; else goto $l1568;
            $l1580:;
            if ($tmp1578 > 1) goto $l1577; else goto $l1568;
            $l1577:;
            i1561.value += 1;
            goto $l1566;
            $l1568:;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp1584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1583, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1584, &$s1585);
        return $tmp1586;
    }
    }
    panda$core$Object* $tmp1588 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1587 = ((panda$core$String*) $tmp1588);
    if (((panda$core$Bit) { result1587 == NULL }).value) {
    {
        panda$core$Int64 $tmp1589 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1589;
        panda$core$String* $tmp1591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1590, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1591, &$s1592);
        panda$core$String* $tmp1594 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1593, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1594, &$s1595);
        result1587 = $tmp1596;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1587));
    }
    }
    panda$core$Int64 $tmp1597 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1598 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1597, ((panda$core$Int64) { 0 }));
    if ($tmp1598.value) {
    {
        panda$core$Object* $tmp1599 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1587, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1599)->varSuffix);
        result1587 = $tmp1600;
    }
    }
    return result1587;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1604;
    panda$core$String* $match$889_91610;
    panda$collections$Iterator* p$Iter1687;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1699;
    panda$core$Bit $tmp1602 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1601);
    if ($tmp1602.value) {
    {
        return &$s1603;
    }
    }
    panda$core$MutableString* $tmp1605 = (panda$core$MutableString*) malloc(48);
    $tmp1605->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1605->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1605, &$s1607);
    result1604 = $tmp1605;
    panda$core$String* $tmp1608 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1604, $tmp1608);
    panda$core$MutableString$append$panda$core$String(result1604, &$s1609);
    {
        $match$889_91610 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1612 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1611);
        if ($tmp1612.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1613);
        }
        }
        else {
        panda$core$Bit $tmp1615 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1614);
        if ($tmp1615.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1616);
        }
        }
        else {
        panda$core$Bit $tmp1618 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1617);
        if ($tmp1618.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1619);
        }
        }
        else {
        panda$core$Bit $tmp1621 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1620);
        if ($tmp1621.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1622);
        }
        }
        else {
        panda$core$Bit $tmp1624 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1623);
        if ($tmp1624.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1625);
        }
        }
        else {
        panda$core$Bit $tmp1627 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1626);
        if ($tmp1627.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1628);
        }
        }
        else {
        panda$core$Bit $tmp1630 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1629);
        if ($tmp1630.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1631);
        }
        }
        else {
        panda$core$Bit $tmp1633 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1632);
        if ($tmp1633.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1634);
        }
        }
        else {
        panda$core$Bit $tmp1636 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1635);
        if ($tmp1636.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1637);
        }
        }
        else {
        panda$core$Bit $tmp1639 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1638);
        if ($tmp1639.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1640);
        }
        }
        else {
        panda$core$Bit $tmp1642 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1641);
        if ($tmp1642.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1643);
        }
        }
        else {
        panda$core$Bit $tmp1645 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1644);
        if ($tmp1645.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1646);
        }
        }
        else {
        panda$core$Bit $tmp1648 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1647);
        if ($tmp1648.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1649);
        }
        }
        else {
        panda$core$Bit $tmp1651 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1650);
        if ($tmp1651.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1652);
        }
        }
        else {
        panda$core$Bit $tmp1654 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1653);
        if ($tmp1654.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1655);
        }
        }
        else {
        panda$core$Bit $tmp1657 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1656);
        if ($tmp1657.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1658);
        }
        }
        else {
        panda$core$Bit $tmp1660 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1659);
        if ($tmp1660.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1661);
        }
        }
        else {
        panda$core$Bit $tmp1663 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1662);
        if ($tmp1663.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1664);
        }
        }
        else {
        panda$core$Bit $tmp1666 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1665);
        if ($tmp1666.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1667);
        }
        }
        else {
        panda$core$Bit $tmp1669 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1668);
        if ($tmp1669.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1670);
        }
        }
        else {
        panda$core$Bit $tmp1672 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1671);
        if ($tmp1672.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1673);
        }
        }
        else {
        panda$core$Bit $tmp1675 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1674);
        if ($tmp1675.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1676);
        }
        }
        else {
        panda$core$Bit $tmp1678 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1677);
        if ($tmp1678.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1679);
        }
        }
        else {
        panda$core$Bit $tmp1681 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1680);
        if ($tmp1681.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1682);
        }
        }
        else {
        panda$core$Bit $tmp1684 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$889_91610, &$s1683);
        if ($tmp1684.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1604, &$s1685);
        }
        }
        else {
        {
            panda$core$String* $tmp1686 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1604, $tmp1686);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        ITable* $tmp1688 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1688->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1688 = $tmp1688->next;
        }
        $fn1690 $tmp1689 = $tmp1688->methods[0];
        panda$collections$Iterator* $tmp1691 = $tmp1689(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1687 = $tmp1691;
        $l1692:;
        ITable* $tmp1694 = p$Iter1687->$class->itable;
        while ($tmp1694->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1694 = $tmp1694->next;
        }
        $fn1696 $tmp1695 = $tmp1694->methods[0];
        panda$core$Bit $tmp1697 = $tmp1695(p$Iter1687);
        panda$core$Bit $tmp1698 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1697);
        if (!$tmp1698.value) goto $l1693;
        {
            ITable* $tmp1700 = p$Iter1687->$class->itable;
            while ($tmp1700->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1700 = $tmp1700->next;
            }
            $fn1702 $tmp1701 = $tmp1700->methods[1];
            panda$core$Object* $tmp1703 = $tmp1701(p$Iter1687);
            p1699 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1703);
            panda$core$String* $tmp1705 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1699->type)->name);
            panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1704, $tmp1705);
            panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1707);
            panda$core$MutableString$append$panda$core$String(result1604, $tmp1708);
        }
        goto $l1692;
        $l1693:;
    }
    org$pandalanguage$pandac$Type* $tmp1709 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1710 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1709);
    if ($tmp1710.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1604, &$s1711);
        panda$core$String* $tmp1712 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1604, $tmp1712);
    }
    }
    panda$core$String* $tmp1713 = panda$core$MutableString$finish$R$panda$core$String(result1604);
    return $tmp1713;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1714 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1714.value);
    panda$core$String* $tmp1716 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1715, $tmp1716);
    panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1717, &$s1718);
    panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1720, &$s1721);
    return $tmp1722;
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
    panda$core$String* leftRef1723;
    panda$core$String* leftField1727;
    panda$core$String* start1736;
    panda$core$String* ifTrue1737;
    panda$core$String* ifFalse1739;
    panda$core$String* rightRef1752;
    panda$core$String* rightField1756;
    panda$core$String* truePred1765;
    panda$core$String* result1771;
    panda$core$String* $tmp1724 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1723 = $tmp1724;
    org$pandalanguage$pandac$Type* $tmp1725 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1726 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1725);
    if ($tmp1726.value) {
    {
        panda$core$String* $tmp1728 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1727 = $tmp1728;
        panda$core$String* $tmp1729 = panda$core$String$convert$R$panda$core$String(leftField1727);
        panda$core$String* $tmp1731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1729, &$s1730);
        panda$core$String* $tmp1732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1731, leftRef1723);
        panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1732, &$s1733);
        (($fn1735) p_out->$class->vtable[19])(p_out, $tmp1734);
        leftRef1723 = leftField1727;
    }
    }
    start1736 = self->currentBlock;
    panda$core$String* $tmp1738 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1737 = $tmp1738;
    panda$core$String* $tmp1740 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1739 = $tmp1740;
    panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1741, leftRef1723);
    panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1742, &$s1743);
    panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1744, ifTrue1737);
    panda$core$String* $tmp1747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1745, &$s1746);
    panda$core$String* $tmp1748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1747, ifFalse1739);
    panda$core$String* $tmp1750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1748, &$s1749);
    (($fn1751) p_out->$class->vtable[19])(p_out, $tmp1750);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue1737, p_out);
    panda$core$String* $tmp1753 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1752 = $tmp1753;
    org$pandalanguage$pandac$Type* $tmp1754 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1755 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1754);
    if ($tmp1755.value) {
    {
        panda$core$String* $tmp1757 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1756 = $tmp1757;
        panda$core$String* $tmp1758 = panda$core$String$convert$R$panda$core$String(rightField1756);
        panda$core$String* $tmp1760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1758, &$s1759);
        panda$core$String* $tmp1761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1760, rightRef1752);
        panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1761, &$s1762);
        (($fn1764) p_out->$class->vtable[19])(p_out, $tmp1763);
        rightRef1752 = rightField1756;
    }
    }
    truePred1765 = self->currentBlock;
    panda$core$String* $tmp1767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1766, ifFalse1739);
    panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1767, &$s1768);
    (($fn1770) p_out->$class->vtable[19])(p_out, $tmp1769);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse1739, p_out);
    panda$core$String* $tmp1772 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1771 = $tmp1772;
    panda$core$String* $tmp1773 = panda$core$String$convert$R$panda$core$String(result1771);
    panda$core$String* $tmp1775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1773, &$s1774);
    panda$core$String* $tmp1776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1775, start1736);
    panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1776, &$s1777);
    panda$core$String* $tmp1779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1778, rightRef1752);
    panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1779, &$s1780);
    panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1781, truePred1765);
    panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1782, &$s1783);
    (($fn1785) p_out->$class->vtable[19])(p_out, $tmp1784);
    return result1771;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1786;
    panda$core$String* leftField1790;
    panda$core$String* start1799;
    panda$core$String* ifTrue1800;
    panda$core$String* ifFalse1802;
    panda$core$String* rightRef1815;
    panda$core$String* rightField1819;
    panda$core$String* falsePred1828;
    panda$core$String* result1834;
    panda$core$String* $tmp1787 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1786 = $tmp1787;
    org$pandalanguage$pandac$Type* $tmp1788 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1789 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1788);
    if ($tmp1789.value) {
    {
        panda$core$String* $tmp1791 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1790 = $tmp1791;
        panda$core$String* $tmp1792 = panda$core$String$convert$R$panda$core$String(leftField1790);
        panda$core$String* $tmp1794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1792, &$s1793);
        panda$core$String* $tmp1795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1794, leftRef1786);
        panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1795, &$s1796);
        (($fn1798) p_out->$class->vtable[19])(p_out, $tmp1797);
        leftRef1786 = leftField1790;
    }
    }
    start1799 = self->currentBlock;
    panda$core$String* $tmp1801 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1800 = $tmp1801;
    panda$core$String* $tmp1803 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1802 = $tmp1803;
    panda$core$String* $tmp1805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1804, leftRef1786);
    panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1805, &$s1806);
    panda$core$String* $tmp1808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1807, ifTrue1800);
    panda$core$String* $tmp1810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1808, &$s1809);
    panda$core$String* $tmp1811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1810, ifFalse1802);
    panda$core$String* $tmp1813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1811, &$s1812);
    (($fn1814) p_out->$class->vtable[19])(p_out, $tmp1813);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse1802, p_out);
    panda$core$String* $tmp1816 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1815 = $tmp1816;
    org$pandalanguage$pandac$Type* $tmp1817 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1818 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1817);
    if ($tmp1818.value) {
    {
        panda$core$String* $tmp1820 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1819 = $tmp1820;
        panda$core$String* $tmp1821 = panda$core$String$convert$R$panda$core$String(rightField1819);
        panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1821, &$s1822);
        panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1823, rightRef1815);
        panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1824, &$s1825);
        (($fn1827) p_out->$class->vtable[19])(p_out, $tmp1826);
        rightRef1815 = rightField1819;
    }
    }
    falsePred1828 = self->currentBlock;
    panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1829, ifTrue1800);
    panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, &$s1831);
    (($fn1833) p_out->$class->vtable[19])(p_out, $tmp1832);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue1800, p_out);
    panda$core$String* $tmp1835 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1834 = $tmp1835;
    panda$core$String* $tmp1836 = panda$core$String$convert$R$panda$core$String(result1834);
    panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1836, &$s1837);
    panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1838, start1799);
    panda$core$String* $tmp1841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1839, &$s1840);
    panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1841, rightRef1815);
    panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1842, &$s1843);
    panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1844, falsePred1828);
    panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1845, &$s1846);
    (($fn1848) p_out->$class->vtable[19])(p_out, $tmp1847);
    return result1834;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$OutputStream* p_out) {
    panda$core$String* llvmOp1849;
    panda$core$String* result1892;
    switch (p_cl.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1849 = &$s1850;
                }
                break;
                case 52:
                {
                    llvmOp1849 = &$s1851;
                }
                break;
                case 53:
                {
                    llvmOp1849 = &$s1852;
                }
                break;
                case 55:
                {
                    llvmOp1849 = &$s1853;
                }
                break;
                case 56:
                {
                    llvmOp1849 = &$s1854;
                }
                break;
                case 72:
                {
                    llvmOp1849 = &$s1855;
                }
                break;
                case 1:
                {
                    llvmOp1849 = &$s1856;
                }
                break;
                case 67:
                {
                    llvmOp1849 = &$s1857;
                }
                break;
                case 69:
                {
                    llvmOp1849 = &$s1858;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1849 = &$s1859;
                }
                break;
                case 58:
                {
                    llvmOp1849 = &$s1860;
                }
                break;
                case 59:
                {
                    llvmOp1849 = &$s1861;
                }
                break;
                case 63:
                {
                    llvmOp1849 = &$s1862;
                }
                break;
                case 62:
                {
                    llvmOp1849 = &$s1863;
                }
                break;
                case 65:
                {
                    llvmOp1849 = &$s1864;
                }
                break;
                case 64:
                {
                    llvmOp1849 = &$s1865;
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
                    llvmOp1849 = &$s1866;
                }
                break;
                case 52:
                {
                    llvmOp1849 = &$s1867;
                }
                break;
                case 53:
                {
                    llvmOp1849 = &$s1868;
                }
                break;
                case 55:
                {
                    llvmOp1849 = &$s1869;
                }
                break;
                case 56:
                {
                    llvmOp1849 = &$s1870;
                }
                break;
                case 72:
                {
                    llvmOp1849 = &$s1871;
                }
                break;
                case 1:
                {
                    llvmOp1849 = &$s1872;
                }
                break;
                case 67:
                {
                    llvmOp1849 = &$s1873;
                }
                break;
                case 69:
                {
                    llvmOp1849 = &$s1874;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1849 = &$s1875;
                }
                break;
                case 58:
                {
                    llvmOp1849 = &$s1876;
                }
                break;
                case 59:
                {
                    llvmOp1849 = &$s1877;
                }
                break;
                case 63:
                {
                    llvmOp1849 = &$s1878;
                }
                break;
                case 62:
                {
                    llvmOp1849 = &$s1879;
                }
                break;
                case 65:
                {
                    llvmOp1849 = &$s1880;
                }
                break;
                case 64:
                {
                    llvmOp1849 = &$s1881;
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
                    llvmOp1849 = &$s1882;
                }
                break;
                case 52:
                {
                    llvmOp1849 = &$s1883;
                }
                break;
                case 53:
                {
                    llvmOp1849 = &$s1884;
                }
                break;
                case 55:
                {
                    llvmOp1849 = &$s1885;
                }
                break;
                case 58:
                {
                    llvmOp1849 = &$s1886;
                }
                break;
                case 59:
                {
                    llvmOp1849 = &$s1887;
                }
                break;
                case 63:
                {
                    llvmOp1849 = &$s1888;
                }
                break;
                case 62:
                {
                    llvmOp1849 = &$s1889;
                }
                break;
                case 65:
                {
                    llvmOp1849 = &$s1890;
                }
                break;
                case 64:
                {
                    llvmOp1849 = &$s1891;
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
    panda$core$String* $tmp1893 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1892 = $tmp1893;
    panda$core$String* $tmp1894 = panda$core$String$convert$R$panda$core$String(result1892);
    panda$core$String* $tmp1896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1894, &$s1895);
    panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1896, llvmOp1849);
    panda$core$String* $tmp1899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1897, &$s1898);
    panda$core$String* $tmp1900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1899, p_leftRef);
    panda$core$String* $tmp1902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1900, &$s1901);
    panda$core$String* $tmp1903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1902, p_rightRef);
    panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1903, &$s1904);
    (($fn1906) p_out->$class->vtable[19])(p_out, $tmp1905);
    return result1892;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1907;
    panda$core$String* rightRef1909;
    panda$core$String* raw1911;
    panda$core$String* result1923;
    panda$core$String* $tmp1908 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1907 = $tmp1908;
    panda$core$String* $tmp1910 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1909 = $tmp1910;
    panda$core$String* $tmp1912 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1911 = $tmp1912;
    panda$core$String* $tmp1913 = panda$core$String$convert$R$panda$core$String(raw1911);
    panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1913, &$s1914);
    panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, leftRef1907);
    panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, &$s1917);
    panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1918, rightRef1909);
    panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1919, &$s1920);
    (($fn1922) p_out->$class->vtable[19])(p_out, $tmp1921);
    panda$core$String* $tmp1924 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1923 = $tmp1924;
    panda$core$String* $tmp1925 = panda$core$String$convert$R$panda$core$String(result1923);
    panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1925, &$s1926);
    panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1927, raw1911);
    panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1928, &$s1929);
    (($fn1931) p_out->$class->vtable[19])(p_out, $tmp1930);
    return result1923;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1932;
    panda$core$String* rightRef1934;
    panda$core$String* raw1936;
    panda$core$String* result1948;
    panda$core$String* $tmp1933 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1932 = $tmp1933;
    panda$core$String* $tmp1935 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1934 = $tmp1935;
    panda$core$String* $tmp1937 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1936 = $tmp1937;
    panda$core$String* $tmp1938 = panda$core$String$convert$R$panda$core$String(raw1936);
    panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1938, &$s1939);
    panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1940, leftRef1932);
    panda$core$String* $tmp1943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1941, &$s1942);
    panda$core$String* $tmp1944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1943, rightRef1934);
    panda$core$String* $tmp1946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1944, &$s1945);
    (($fn1947) p_out->$class->vtable[19])(p_out, $tmp1946);
    panda$core$String* $tmp1949 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1948 = $tmp1949;
    panda$core$String* $tmp1950 = panda$core$String$convert$R$panda$core$String(result1948);
    panda$core$String* $tmp1952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1950, &$s1951);
    panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1952, raw1936);
    panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, &$s1954);
    (($fn1956) p_out->$class->vtable[19])(p_out, $tmp1955);
    return result1948;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1962;
    panda$core$String* rightRef1964;
    panda$core$Bit $tmp1957 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1957.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1958 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1958;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1959 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1959;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1960 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1960;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1961 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1961;
        }
        break;
        default:
        {
            panda$core$String* $tmp1963 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1962 = $tmp1963;
            panda$core$String* $tmp1965 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1964 = $tmp1965;
            panda$core$Int64 $tmp1966 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1967 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, $tmp1966, leftRef1962, p_op, rightRef1964, p_out);
            return $tmp1967;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp1968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1968.value);
    panda$core$Int64 $tmp1969 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1969, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1970.value);
    panda$core$Object* $tmp1971 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1972 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1973 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1971), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1972), p_out);
    return $tmp1973;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp1976 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1975 = $tmp1976.value;
    if (!$tmp1975) goto $l1977;
    panda$core$Bit $tmp1978 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1979 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1978);
    $tmp1975 = $tmp1979.value;
    $l1977:;
    panda$core$Bit $tmp1980 = { $tmp1975 };
    bool $tmp1974 = $tmp1980.value;
    if (!$tmp1974) goto $l1981;
    panda$core$Bit $tmp1982 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1983 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1982);
    $tmp1974 = $tmp1983.value;
    $l1981:;
    panda$core$Bit $tmp1984 = { $tmp1974 };
    if ($tmp1984.value) {
    {
        return &$s1985;
    }
    }
    return &$s1986;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc1987;
    panda$core$Int64 index1989;
    panda$collections$ListView* vtable1990;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1992;
    panda$core$String* classPtrPtr2021;
    panda$core$String* classPtr2036;
    panda$core$String* cast2045;
    panda$core$String* ptr2057;
    panda$core$String* load2080;
    panda$core$String* result2089;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1988 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc1987 = $tmp1988;
    index1989 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1991 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1990 = $tmp1991;
    ITable* $tmp1993 = ((panda$collections$CollectionView*) vtable1990)->$class->itable;
    while ($tmp1993->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1993 = $tmp1993->next;
    }
    $fn1995 $tmp1994 = $tmp1993->methods[0];
    panda$core$Int64 $tmp1996 = $tmp1994(((panda$collections$CollectionView*) vtable1990));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1992, ((panda$core$Int64) { 0 }), $tmp1996, ((panda$core$Bit) { false }));
    int64_t $tmp1998 = $tmp1992.min.value;
    panda$core$Int64 i1997 = { $tmp1998 };
    int64_t $tmp2000 = $tmp1992.max.value;
    bool $tmp2001 = $tmp1992.inclusive.value;
    if ($tmp2001) goto $l2008; else goto $l2009;
    $l2008:;
    if ($tmp1998 <= $tmp2000) goto $l2002; else goto $l2004;
    $l2009:;
    if ($tmp1998 < $tmp2000) goto $l2002; else goto $l2004;
    $l2002:;
    {
        ITable* $tmp2010 = vtable1990->$class->itable;
        while ($tmp2010->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2010 = $tmp2010->next;
        }
        $fn2012 $tmp2011 = $tmp2010->methods[0];
        panda$core$Object* $tmp2013 = $tmp2011(vtable1990, i1997);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2013)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1989 = i1997;
            goto $l2004;
        }
        }
    }
    $l2005:;
    int64_t $tmp2015 = $tmp2000 - i1997.value;
    if ($tmp2001) goto $l2016; else goto $l2017;
    $l2016:;
    if ($tmp2015 >= 1) goto $l2014; else goto $l2004;
    $l2017:;
    if ($tmp2015 > 1) goto $l2014; else goto $l2004;
    $l2014:;
    i1997.value += 1;
    goto $l2002;
    $l2004:;
    panda$core$Bit $tmp2020 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1989, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2020.value);
    panda$core$String* $tmp2022 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2021 = $tmp2022;
    panda$core$String* $tmp2023 = panda$core$String$convert$R$panda$core$String(classPtrPtr2021);
    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2023, &$s2024);
    org$pandalanguage$pandac$Type* $tmp2026 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2027 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2026);
    panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2025, $tmp2027);
    panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2028, &$s2029);
    panda$core$String* $tmp2031 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2031, &$s2032);
    panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2030, $tmp2033);
    (($fn2035) p_out->$class->vtable[19])(p_out, $tmp2034);
    panda$core$String* $tmp2037 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2036 = $tmp2037;
    panda$core$String* $tmp2038 = panda$core$String$convert$R$panda$core$String(classPtr2036);
    panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2038, &$s2039);
    panda$core$String* $tmp2041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2040, classPtrPtr2021);
    panda$core$String* $tmp2043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2041, &$s2042);
    (($fn2044) p_out->$class->vtable[19])(p_out, $tmp2043);
    panda$core$String* $tmp2046 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2045 = $tmp2046;
    panda$core$String* $tmp2047 = panda$core$String$convert$R$panda$core$String(cast2045);
    panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, &$s2048);
    panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2049, classPtr2036);
    panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2050, &$s2051);
    panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, cc1987->type);
    panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2053, &$s2054);
    (($fn2056) p_out->$class->vtable[19])(p_out, $tmp2055);
    panda$core$String* $tmp2058 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2057 = $tmp2058;
    panda$core$String* $tmp2059 = panda$core$String$convert$R$panda$core$String(ptr2057);
    panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2059, &$s2060);
    panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2061, cc1987->type);
    panda$core$String* $tmp2064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2062, &$s2063);
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2064, cc1987->type);
    panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
    panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2067, cast2045);
    panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2068, &$s2069);
    panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2071, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2072, &$s2073);
    panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2074, ((panda$core$Object*) wrap_panda$core$Int64(index1989)));
    panda$core$String* $tmp2077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2075, &$s2076);
    panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2070, $tmp2077);
    (($fn2079) p_out->$class->vtable[19])(p_out, $tmp2078);
    panda$core$String* $tmp2081 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2080 = $tmp2081;
    panda$core$String* $tmp2082 = panda$core$String$convert$R$panda$core$String(load2080);
    panda$core$String* $tmp2084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2082, &$s2083);
    panda$core$String* $tmp2085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2084, ptr2057);
    panda$core$String* $tmp2087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2085, &$s2086);
    (($fn2088) p_out->$class->vtable[19])(p_out, $tmp2087);
    panda$core$String* $tmp2090 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2089 = $tmp2090;
    panda$core$String* $tmp2091 = panda$core$String$convert$R$panda$core$String(result2089);
    panda$core$String* $tmp2093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, &$s2092);
    panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2093, load2080);
    panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2094, &$s2095);
    org$pandalanguage$pandac$Type* $tmp2097 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2098 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2097);
    panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2096, $tmp2098);
    (($fn2100) p_out->$class->vtable[19])(p_out, $tmp2099);
    return result2089;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    panda$core$String* methodType2101;
    panda$core$String* entry2104;
    panda$core$String* rawClassPointer2111;
    panda$core$String* classPointer2133;
    panda$core$String* classType2135;
    panda$core$String* loadedClass2148;
    panda$core$String* itableFirst2163;
    panda$core$String* next2186;
    panda$core$String* leavingEntryLabel2193;
    panda$core$String* itableNext2195;
    panda$core$String* itablePtrPtr2200;
    panda$core$String* fail2202;
    panda$core$String* itablePtr2222;
    panda$core$String* itableClassPtr2231;
    panda$core$String* itableClass2245;
    panda$core$String* test2260;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2262;
    panda$core$String* success2284;
    panda$core$Int64 index2314;
    panda$collections$ListView* vtable2315;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2317;
    panda$core$String* methodPtrPtr2354;
    panda$core$String* cast2371;
    panda$core$String* methodPtr2383;
    org$pandalanguage$pandac$Type* $tmp2102 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2103 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2102);
    methodType2101 = $tmp2103;
    panda$core$String* $tmp2105 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2104 = $tmp2105;
    panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2106, entry2104);
    panda$core$String* $tmp2109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2107, &$s2108);
    (($fn2110) p_out->$class->vtable[19])(p_out, $tmp2109);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, entry2104, p_out);
    panda$core$String* $tmp2112 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawClassPointer2111 = $tmp2112;
    panda$core$String* $tmp2113 = panda$core$String$convert$R$panda$core$String(rawClassPointer2111);
    panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2113, &$s2114);
    org$pandalanguage$pandac$Type* $tmp2116 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2117 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2116);
    panda$core$String* $tmp2118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, $tmp2117);
    panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2118, &$s2119);
    panda$core$String* $tmp2121 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, &$s2122);
    panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2123, &$s2124);
    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2125, &$s2126);
    panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2127, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2128, &$s2129);
    panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2120, $tmp2130);
    (($fn2132) p_out->$class->vtable[19])(p_out, $tmp2131);
    panda$core$String* $tmp2134 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2133 = $tmp2134;
    org$pandalanguage$pandac$Type* $tmp2136 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2137 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2136);
    classType2135 = $tmp2137;
    panda$core$String* $tmp2138 = panda$core$String$convert$R$panda$core$String(classPointer2133);
    panda$core$String* $tmp2140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2138, &$s2139);
    panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, rawClassPointer2111);
    panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2141, &$s2142);
    panda$core$String* $tmp2144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, classType2135);
    panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2144, &$s2145);
    (($fn2147) p_out->$class->vtable[19])(p_out, $tmp2146);
    panda$core$String* $tmp2149 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2148 = $tmp2149;
    panda$core$String* $tmp2150 = panda$core$String$convert$R$panda$core$String(loadedClass2148);
    panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
    panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, classType2135);
    panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, &$s2154);
    panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, classType2135);
    panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2156, &$s2157);
    panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2158, classPointer2133);
    panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2159, &$s2160);
    (($fn2162) p_out->$class->vtable[19])(p_out, $tmp2161);
    panda$core$String* $tmp2164 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2163 = $tmp2164;
    panda$core$String* $tmp2165 = panda$core$String$convert$R$panda$core$String(itableFirst2163);
    panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, &$s2166);
    panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2167, classType2135);
    panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2168, &$s2169);
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2170, classType2135);
    panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2171, &$s2172);
    panda$core$String* $tmp2174 = panda$core$String$convert$R$panda$core$String(loadedClass2148);
    panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2174, &$s2175);
    panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, &$s2177);
    panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, &$s2179);
    panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2180, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2181, &$s2182);
    panda$core$String* $tmp2184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, $tmp2183);
    (($fn2185) p_out->$class->vtable[19])(p_out, $tmp2184);
    panda$core$String* $tmp2187 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2186 = $tmp2187;
    panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2188, next2186);
    panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2190);
    (($fn2192) p_out->$class->vtable[19])(p_out, $tmp2191);
    leavingEntryLabel2193 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, next2186, p_out);
    panda$core$Int64 $tmp2194 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2194;
    panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2196, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2197, &$s2198);
    itableNext2195 = $tmp2199;
    panda$core$String* $tmp2201 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2200 = $tmp2201;
    panda$core$String* $tmp2203 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2202 = $tmp2203;
    panda$core$String* $tmp2204 = panda$core$String$convert$R$panda$core$String(itablePtrPtr2200);
    panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2204, &$s2205);
    panda$core$String* $tmp2207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2206, itableFirst2163);
    panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2207, &$s2208);
    panda$core$String* $tmp2210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, leavingEntryLabel2193);
    panda$core$String* $tmp2212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2210, &$s2211);
    panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2213, itableNext2195);
    panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, &$s2215);
    panda$core$String* $tmp2217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, fail2202);
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2217, &$s2218);
    panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2212, $tmp2219);
    (($fn2221) p_out->$class->vtable[19])(p_out, $tmp2220);
    panda$core$String* $tmp2223 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2222 = $tmp2223;
    panda$core$String* $tmp2224 = panda$core$String$convert$R$panda$core$String(itablePtr2222);
    panda$core$String* $tmp2226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2224, &$s2225);
    panda$core$String* $tmp2227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2226, itablePtrPtr2200);
    panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2227, &$s2228);
    (($fn2230) p_out->$class->vtable[19])(p_out, $tmp2229);
    panda$core$String* $tmp2232 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2231 = $tmp2232;
    panda$core$String* $tmp2233 = panda$core$String$convert$R$panda$core$String(itableClassPtr2231);
    panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2233, &$s2234);
    panda$core$String* $tmp2236 = panda$core$String$convert$R$panda$core$String(itablePtr2222);
    panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2236, &$s2237);
    panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, &$s2239);
    panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2240, &$s2241);
    panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, $tmp2242);
    (($fn2244) p_out->$class->vtable[19])(p_out, $tmp2243);
    panda$core$String* $tmp2246 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2245 = $tmp2246;
    panda$core$String* $tmp2247 = panda$core$String$convert$R$panda$core$String(itableClass2245);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, &$s2248);
    panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, classType2135);
    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2250, &$s2251);
    panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, classType2135);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2253, &$s2254);
    panda$core$String* $tmp2256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2255, itableClassPtr2231);
    panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2256, &$s2257);
    (($fn2259) p_out->$class->vtable[19])(p_out, $tmp2258);
    panda$core$String* $tmp2261 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2260 = $tmp2261;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2263 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2262 = $tmp2263;
    panda$core$String* $tmp2264 = panda$core$String$convert$R$panda$core$String(test2260);
    panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, &$s2265);
    panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2266, classType2135);
    panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, &$s2268);
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, intfCC2262->type);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, &$s2271);
    panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, intfCC2262->name);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2273, &$s2274);
    panda$core$String* $tmp2276 = panda$core$String$convert$R$panda$core$String(classType2135);
    panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2276, &$s2277);
    panda$core$String* $tmp2279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2278, itableClass2245);
    panda$core$String* $tmp2281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2279, &$s2280);
    panda$core$String* $tmp2282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2275, $tmp2281);
    (($fn2283) p_out->$class->vtable[19])(p_out, $tmp2282);
    panda$core$String* $tmp2285 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2284 = $tmp2285;
    panda$core$String* $tmp2287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2286, test2260);
    panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, &$s2288);
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2289, success2284);
    panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, &$s2291);
    panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, fail2202);
    panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, &$s2294);
    (($fn2296) p_out->$class->vtable[19])(p_out, $tmp2295);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, fail2202, p_out);
    panda$core$String* $tmp2297 = panda$core$String$convert$R$panda$core$String(itableNext2195);
    panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2297, &$s2298);
    panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2299, itablePtr2222);
    panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2300, &$s2301);
    panda$core$String* $tmp2304 = panda$core$String$convert$R$panda$core$String(&$s2303);
    panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2304, &$s2305);
    panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2302, $tmp2306);
    (($fn2308) p_out->$class->vtable[19])(p_out, $tmp2307);
    panda$core$String* $tmp2310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2309, next2186);
    panda$core$String* $tmp2312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2310, &$s2311);
    (($fn2313) p_out->$class->vtable[19])(p_out, $tmp2312);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, success2284, p_out);
    index2314 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2316 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2315 = $tmp2316;
    ITable* $tmp2318 = ((panda$collections$CollectionView*) vtable2315)->$class->itable;
    while ($tmp2318->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2318 = $tmp2318->next;
    }
    $fn2320 $tmp2319 = $tmp2318->methods[0];
    panda$core$Int64 $tmp2321 = $tmp2319(((panda$collections$CollectionView*) vtable2315));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2317, ((panda$core$Int64) { 0 }), $tmp2321, ((panda$core$Bit) { false }));
    int64_t $tmp2323 = $tmp2317.min.value;
    panda$core$Int64 i2322 = { $tmp2323 };
    int64_t $tmp2325 = $tmp2317.max.value;
    bool $tmp2326 = $tmp2317.inclusive.value;
    if ($tmp2326) goto $l2333; else goto $l2334;
    $l2333:;
    if ($tmp2323 <= $tmp2325) goto $l2327; else goto $l2329;
    $l2334:;
    if ($tmp2323 < $tmp2325) goto $l2327; else goto $l2329;
    $l2327:;
    {
        ITable* $tmp2335 = vtable2315->$class->itable;
        while ($tmp2335->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2335 = $tmp2335->next;
        }
        $fn2337 $tmp2336 = $tmp2335->methods[0];
        panda$core$Object* $tmp2338 = $tmp2336(vtable2315, i2322);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2338)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2314 = i2322;
            goto $l2329;
        }
        }
    }
    $l2330:;
    int64_t $tmp2340 = $tmp2325 - i2322.value;
    if ($tmp2326) goto $l2341; else goto $l2342;
    $l2341:;
    if ($tmp2340 >= 1) goto $l2339; else goto $l2329;
    $l2342:;
    if ($tmp2340 > 1) goto $l2339; else goto $l2329;
    $l2339:;
    i2322.value += 1;
    goto $l2327;
    $l2329:;
    org$pandalanguage$pandac$Type* $tmp2345 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2346 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2345);
    panda$collections$ListView* $tmp2347 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2346);
    ITable* $tmp2348 = ((panda$collections$CollectionView*) $tmp2347)->$class->itable;
    while ($tmp2348->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2348 = $tmp2348->next;
    }
    $fn2350 $tmp2349 = $tmp2348->methods[0];
    panda$core$Int64 $tmp2351 = $tmp2349(((panda$collections$CollectionView*) $tmp2347));
    panda$core$Int64 $tmp2352 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2314, $tmp2351);
    index2314 = $tmp2352;
    panda$core$Bit $tmp2353 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2314, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2353.value);
    panda$core$String* $tmp2355 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2354 = $tmp2355;
    panda$core$String* $tmp2356 = panda$core$String$convert$R$panda$core$String(methodPtrPtr2354);
    panda$core$String* $tmp2358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2356, &$s2357);
    panda$core$String* $tmp2359 = panda$core$String$convert$R$panda$core$String(itablePtr2222);
    panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2359, &$s2360);
    panda$core$String* $tmp2363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2361, &$s2362);
    panda$core$String* $tmp2365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2363, &$s2364);
    panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2365, ((panda$core$Object*) wrap_panda$core$Int64(index2314)));
    panda$core$String* $tmp2368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2366, &$s2367);
    panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2358, $tmp2368);
    (($fn2370) p_out->$class->vtable[19])(p_out, $tmp2369);
    panda$core$String* $tmp2372 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2371 = $tmp2372;
    panda$core$String* $tmp2373 = panda$core$String$convert$R$panda$core$String(cast2371);
    panda$core$String* $tmp2375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2373, &$s2374);
    panda$core$String* $tmp2376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2375, methodPtrPtr2354);
    panda$core$String* $tmp2378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2376, &$s2377);
    panda$core$String* $tmp2379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2378, methodType2101);
    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2379, &$s2380);
    (($fn2382) p_out->$class->vtable[19])(p_out, $tmp2381);
    panda$core$String* $tmp2384 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2383 = $tmp2384;
    panda$core$String* $tmp2385 = panda$core$String$convert$R$panda$core$String(methodPtr2383);
    panda$core$String* $tmp2387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2385, &$s2386);
    panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2387, methodType2101);
    panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2388, &$s2389);
    panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2390, methodType2101);
    panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2391, &$s2392);
    panda$core$String* $tmp2394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2393, cast2371);
    panda$core$String* $tmp2396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2394, &$s2395);
    (($fn2397) p_out->$class->vtable[19])(p_out, $tmp2396);
    return methodPtr2383;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp2399 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2398 = $tmp2399.value;
    if (!$tmp2398) goto $l2400;
    panda$core$Bit $tmp2401 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2398 = $tmp2401.value;
    $l2400:;
    panda$core$Bit $tmp2402 = { $tmp2398 };
    if ($tmp2402.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2403.value) {
        {
            panda$core$String* $tmp2404 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2404;
        }
        }
        else {
        {
            panda$core$String* $tmp2405 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2405;
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
        panda$core$String* $tmp2406 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2406;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2407;
    panda$core$String* $match$1237_92408;
    panda$core$String* countStruct2413;
    panda$core$String* count2416;
    panda$core$String* size2425;
    panda$core$Int64 elementSize2427;
    panda$core$String* malloc2446;
    panda$core$String* result2459;
    panda$core$String* ptr2477;
    panda$core$String* baseType2480;
    panda$core$String* ptrType2483;
    panda$core$String* cast2486;
    panda$core$String* load2498;
    panda$core$String* ptr2517;
    panda$core$String* baseType2520;
    panda$core$String* ptrType2523;
    panda$core$String* cast2526;
    panda$core$String* indexStruct2538;
    panda$core$String* index2541;
    panda$core$String* offsetPtr2550;
    panda$core$String* load2570;
    panda$core$String* ptr2589;
    panda$core$String* ptrCast2592;
    panda$core$String* countStruct2601;
    panda$core$String* count2604;
    panda$core$String* size2613;
    panda$core$String* realloc2630;
    panda$core$String* result2647;
    panda$core$String* ptr2665;
    panda$core$String* baseType2668;
    panda$core$String* offsetStruct2672;
    panda$core$String* offset2675;
    panda$core$String* result2684;
    m2407 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$1237_92408 = ((org$pandalanguage$pandac$Symbol*) m2407->value)->name;
        panda$core$Bit $tmp2410 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1237_92408, &$s2409);
        if ($tmp2410.value) {
        {
            panda$core$Int64 $tmp2411 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2411, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2412.value);
            panda$core$Object* $tmp2414 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2415 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2414), p_out);
            countStruct2413 = $tmp2415;
            panda$core$String* $tmp2417 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2416 = $tmp2417;
            panda$core$String* $tmp2418 = panda$core$String$convert$R$panda$core$String(count2416);
            panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2418, &$s2419);
            panda$core$String* $tmp2421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2420, countStruct2413);
            panda$core$String* $tmp2423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2421, &$s2422);
            (($fn2424) p_out->$class->vtable[19])(p_out, $tmp2423);
            panda$core$String* $tmp2426 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2425 = $tmp2426;
            org$pandalanguage$pandac$Type* $tmp2428 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2407);
            panda$core$Object* $tmp2429 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2428->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2430 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2429));
            elementSize2427 = $tmp2430;
            panda$core$Bit $tmp2431 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2427, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2431.value);
            panda$core$String* $tmp2432 = panda$core$String$convert$R$panda$core$String(size2425);
            panda$core$String* $tmp2434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2432, &$s2433);
            panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2434, &$s2435);
            panda$core$String* $tmp2438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2436, &$s2437);
            panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2438, count2416);
            panda$core$String* $tmp2441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2439, &$s2440);
            panda$core$String* $tmp2442 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2441, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2427)));
            panda$core$String* $tmp2444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2442, &$s2443);
            (($fn2445) p_out->$class->vtable[19])(p_out, $tmp2444);
            panda$core$String* $tmp2447 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2446 = $tmp2447;
            panda$core$String* $tmp2448 = panda$core$String$convert$R$panda$core$String(malloc2446);
            panda$core$String* $tmp2450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2448, &$s2449);
            panda$core$String* $tmp2452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2450, &$s2451);
            panda$core$String* $tmp2454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2452, &$s2453);
            panda$core$String* $tmp2455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2454, size2425);
            panda$core$String* $tmp2457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2455, &$s2456);
            (($fn2458) p_out->$class->vtable[19])(p_out, $tmp2457);
            panda$core$String* $tmp2460 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2459 = $tmp2460;
            panda$core$String* $tmp2461 = panda$core$String$convert$R$panda$core$String(result2459);
            panda$core$String* $tmp2463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2461, &$s2462);
            panda$core$String* $tmp2464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2463, malloc2446);
            panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2464, &$s2465);
            org$pandalanguage$pandac$Type* $tmp2467 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2407);
            panda$core$String* $tmp2468 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2467);
            panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, $tmp2468);
            panda$core$String* $tmp2471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, &$s2470);
            (($fn2472) p_out->$class->vtable[19])(p_out, $tmp2471);
            return result2459;
        }
        }
        else {
        panda$core$Bit $tmp2474 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1237_92408, &$s2473);
        if ($tmp2474.value) {
        {
            panda$core$Int64 $tmp2475 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2475, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2476.value);
            panda$core$Object* $tmp2478 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2479 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2478), p_out);
            ptr2477 = $tmp2479;
            org$pandalanguage$pandac$Type* $tmp2481 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2407);
            panda$core$String* $tmp2482 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2481);
            baseType2480 = $tmp2482;
            panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2480, &$s2484);
            ptrType2483 = $tmp2485;
            panda$core$String* $tmp2487 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2486 = $tmp2487;
            panda$core$String* $tmp2488 = panda$core$String$convert$R$panda$core$String(cast2486);
            panda$core$String* $tmp2490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2488, &$s2489);
            panda$core$String* $tmp2491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2490, ptr2477);
            panda$core$String* $tmp2493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2491, &$s2492);
            panda$core$String* $tmp2494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2493, ptrType2483);
            panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2494, &$s2495);
            (($fn2497) p_out->$class->vtable[19])(p_out, $tmp2496);
            panda$core$String* $tmp2499 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2498 = $tmp2499;
            panda$core$String* $tmp2500 = panda$core$String$convert$R$panda$core$String(load2498);
            panda$core$String* $tmp2502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2500, &$s2501);
            panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2502, baseType2480);
            panda$core$String* $tmp2505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2503, &$s2504);
            panda$core$String* $tmp2506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2505, ptrType2483);
            panda$core$String* $tmp2508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2506, &$s2507);
            panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2508, cast2486);
            panda$core$String* $tmp2511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2509, &$s2510);
            (($fn2512) p_out->$class->vtable[19])(p_out, $tmp2511);
            return load2498;
        }
        }
        else {
        panda$core$Bit $tmp2514 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1237_92408, &$s2513);
        if ($tmp2514.value) {
        {
            panda$core$Int64 $tmp2515 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2515, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2516.value);
            panda$core$Object* $tmp2518 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2519 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2518), p_out);
            ptr2517 = $tmp2519;
            org$pandalanguage$pandac$Type* $tmp2521 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2407);
            panda$core$String* $tmp2522 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2521);
            baseType2520 = $tmp2522;
            panda$core$String* $tmp2525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2520, &$s2524);
            ptrType2523 = $tmp2525;
            panda$core$String* $tmp2527 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2526 = $tmp2527;
            panda$core$String* $tmp2528 = panda$core$String$convert$R$panda$core$String(cast2526);
            panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, &$s2529);
            panda$core$String* $tmp2531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, ptr2517);
            panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, &$s2532);
            panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, ptrType2523);
            panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, &$s2535);
            (($fn2537) p_out->$class->vtable[19])(p_out, $tmp2536);
            panda$core$Object* $tmp2539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2540 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2539), p_out);
            indexStruct2538 = $tmp2540;
            panda$core$String* $tmp2542 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2541 = $tmp2542;
            panda$core$String* $tmp2543 = panda$core$String$convert$R$panda$core$String(index2541);
            panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2543, &$s2544);
            panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2545, indexStruct2538);
            panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, &$s2547);
            (($fn2549) p_out->$class->vtable[19])(p_out, $tmp2548);
            panda$core$String* $tmp2551 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2550 = $tmp2551;
            panda$core$String* $tmp2552 = panda$core$String$convert$R$panda$core$String(offsetPtr2550);
            panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2552, &$s2553);
            panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, baseType2520);
            panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, &$s2556);
            panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, ptrType2523);
            panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2558, &$s2559);
            panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, cast2526);
            panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2561, &$s2562);
            panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2564, index2541);
            panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, &$s2566);
            panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, $tmp2567);
            (($fn2569) p_out->$class->vtable[19])(p_out, $tmp2568);
            panda$core$String* $tmp2571 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2570 = $tmp2571;
            panda$core$String* $tmp2572 = panda$core$String$convert$R$panda$core$String(load2570);
            panda$core$String* $tmp2574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2572, &$s2573);
            panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2574, baseType2520);
            panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2575, &$s2576);
            panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2577, ptrType2523);
            panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2578, &$s2579);
            panda$core$String* $tmp2581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, offsetPtr2550);
            panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2581, &$s2582);
            (($fn2584) p_out->$class->vtable[19])(p_out, $tmp2583);
            return load2570;
        }
        }
        else {
        panda$core$Bit $tmp2586 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1237_92408, &$s2585);
        if ($tmp2586.value) {
        {
            panda$core$Int64 $tmp2587 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2587, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2588.value);
            panda$core$Object* $tmp2590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2591 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2590), p_out);
            ptr2589 = $tmp2591;
            panda$core$String* $tmp2593 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2592 = $tmp2593;
            panda$core$String* $tmp2594 = panda$core$String$convert$R$panda$core$String(ptrCast2592);
            panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, &$s2595);
            panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, ptr2589);
            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2598);
            (($fn2600) p_out->$class->vtable[19])(p_out, $tmp2599);
            panda$core$Object* $tmp2602 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2603 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2602), p_out);
            countStruct2601 = $tmp2603;
            panda$core$String* $tmp2605 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2604 = $tmp2605;
            panda$core$String* $tmp2606 = panda$core$String$convert$R$panda$core$String(count2604);
            panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, &$s2607);
            panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, countStruct2601);
            panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, &$s2610);
            (($fn2612) p_out->$class->vtable[19])(p_out, $tmp2611);
            panda$core$String* $tmp2614 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2613 = $tmp2614;
            panda$core$String* $tmp2615 = panda$core$String$convert$R$panda$core$String(size2613);
            panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2615, &$s2616);
            panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2617, &$s2618);
            panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, &$s2620);
            panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2621, count2604);
            panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, &$s2623);
            org$pandalanguage$pandac$Type* $tmp2625 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2407);
            panda$core$Object* $tmp2626 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2625->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2627 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2626));
            panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2624, ((panda$core$Object*) wrap_panda$core$Int64($tmp2627)));
            (($fn2629) p_out->$class->vtable[19])(p_out, $tmp2628);
            panda$core$String* $tmp2631 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2630 = $tmp2631;
            panda$core$String* $tmp2632 = panda$core$String$convert$R$panda$core$String(realloc2630);
            panda$core$String* $tmp2634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2632, &$s2633);
            panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2634, ptrCast2592);
            panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2635, &$s2636);
            panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, &$s2638);
            panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, &$s2640);
            panda$core$String* $tmp2642 = panda$core$String$convert$R$panda$core$String(size2613);
            panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2643);
            panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, $tmp2644);
            (($fn2646) p_out->$class->vtable[19])(p_out, $tmp2645);
            panda$core$String* $tmp2648 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2647 = $tmp2648;
            panda$core$String* $tmp2649 = panda$core$String$convert$R$panda$core$String(result2647);
            panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2650);
            panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, realloc2630);
            panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, &$s2653);
            org$pandalanguage$pandac$Type* $tmp2655 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2407);
            panda$core$String* $tmp2656 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2655);
            panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, $tmp2656);
            panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, &$s2658);
            (($fn2660) p_out->$class->vtable[19])(p_out, $tmp2659);
            return result2647;
        }
        }
        else {
        panda$core$Bit $tmp2662 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1237_92408, &$s2661);
        if ($tmp2662.value) {
        {
            panda$core$Int64 $tmp2663 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2663, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2664.value);
            panda$core$Object* $tmp2666 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2667 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2666), p_out);
            ptr2665 = $tmp2667;
            panda$core$Object* $tmp2669 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2670 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2669)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2671 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2670));
            baseType2668 = $tmp2671;
            panda$core$Object* $tmp2673 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2674 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2673), p_out);
            offsetStruct2672 = $tmp2674;
            panda$core$String* $tmp2676 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2675 = $tmp2676;
            panda$core$String* $tmp2677 = panda$core$String$convert$R$panda$core$String(offset2675);
            panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, &$s2678);
            panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, offsetStruct2672);
            panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2680, &$s2681);
            (($fn2683) p_out->$class->vtable[19])(p_out, $tmp2682);
            panda$core$String* $tmp2685 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2684 = $tmp2685;
            panda$core$String* $tmp2686 = panda$core$String$convert$R$panda$core$String(result2684);
            panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2686, &$s2687);
            panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2688, baseType2668);
            panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2689, &$s2690);
            panda$core$String* $tmp2692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2691, ptr2665);
            panda$core$String* $tmp2694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2692, &$s2693);
            panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2694, offset2675);
            panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, &$s2696);
            (($fn2698) p_out->$class->vtable[19])(p_out, $tmp2697);
            return result2684;
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
    org$pandalanguage$pandac$MethodDecl* m2699;
    panda$core$String* selfRef2700;
    panda$core$Int64 argStart2702;
    panda$collections$Array* args2706;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2709;
    panda$core$String* end2732;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2741;
    org$pandalanguage$pandac$MethodDecl* old2748;
    panda$core$String* phi2761;
    panda$core$String* separator2771;
    panda$collections$Iterator* ret$Iter2773;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2785;
    m2699 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) m2699->owner));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2699), ((panda$core$Object*) m2699));
    selfRef2700 = &$s2701;
    panda$core$Bit $tmp2703 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2699);
    if ($tmp2703.value) {
    {
        argStart2702 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2704 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2705 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2704), p_out);
        selfRef2700 = $tmp2705;
    }
    }
    else {
    {
        argStart2702 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2707 = (panda$collections$Array*) malloc(40);
    $tmp2707->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2707->refCount.value = 1;
    panda$collections$Array$init($tmp2707);
    args2706 = $tmp2707;
    panda$core$Int64 $tmp2710 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2709, argStart2702, $tmp2710, ((panda$core$Bit) { false }));
    int64_t $tmp2712 = $tmp2709.min.value;
    panda$core$Int64 i2711 = { $tmp2712 };
    int64_t $tmp2714 = $tmp2709.max.value;
    bool $tmp2715 = $tmp2709.inclusive.value;
    if ($tmp2715) goto $l2722; else goto $l2723;
    $l2722:;
    if ($tmp2712 <= $tmp2714) goto $l2716; else goto $l2718;
    $l2723:;
    if ($tmp2712 < $tmp2714) goto $l2716; else goto $l2718;
    $l2716:;
    {
        panda$core$Object* $tmp2724 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2711);
        panda$core$String* $tmp2725 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2724), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2706, ((panda$core$Object*) $tmp2725));
    }
    $l2719:;
    int64_t $tmp2727 = $tmp2714 - i2711.value;
    if ($tmp2715) goto $l2728; else goto $l2729;
    $l2728:;
    if ($tmp2727 >= 1) goto $l2726; else goto $l2718;
    $l2729:;
    if ($tmp2727 > 1) goto $l2726; else goto $l2718;
    $l2726:;
    i2711.value += 1;
    goto $l2716;
    $l2718:;
    panda$core$String* $tmp2733 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2732 = $tmp2733;
    panda$core$Int64 $tmp2734 = panda$collections$Array$get_count$R$panda$core$Int64(args2706);
    panda$core$Int64 $tmp2735 = panda$collections$Array$get_count$R$panda$core$Int64(m2699->parameters);
    panda$core$Bit $tmp2736 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2734, $tmp2735);
    if ($tmp2736.value) {
    {
        panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2737, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, &$s2739);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2740));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2742 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2742->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2742->refCount.value = 1;
    panda$core$String* $tmp2745 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2744, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2745, &$s2746);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2742, $tmp2747, selfRef2700, ((panda$collections$ListView*) args2706), end2732);
    inline2741 = $tmp2742;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2741));
    old2748 = self->currentMethod;
    self->currentMethod = m2699;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_body, p_out);
    self->currentMethod = old2748;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2749 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2750 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2749);
    if ($tmp2750.value) {
    {
        (($fn2752) p_out->$class->vtable[19])(p_out, &$s2751);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end2732, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2699));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    panda$core$Int64 $tmp2753 = panda$collections$Array$get_count$R$panda$core$Int64(inline2741->returns);
    panda$core$Bit $tmp2754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2753, ((panda$core$Int64) { 1 }));
    if ($tmp2754.value) {
    {
        panda$core$Object* $tmp2755 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2741->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2755)->second);
    }
    }
    panda$core$Int64 $tmp2756 = panda$collections$Array$get_count$R$panda$core$Int64(inline2741->returns);
    panda$core$Bit $tmp2757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2756, ((panda$core$Int64) { 0 }));
    if ($tmp2757.value) {
    {
        (($fn2759) p_out->$class->vtable[16])(p_out, &$s2758);
        return &$s2760;
    }
    }
    panda$core$String* $tmp2762 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2761 = $tmp2762;
    panda$core$String* $tmp2763 = panda$core$String$convert$R$panda$core$String(phi2761);
    panda$core$String* $tmp2765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, &$s2764);
    panda$core$String* $tmp2766 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2699->returnType);
    panda$core$String* $tmp2767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, $tmp2766);
    panda$core$String* $tmp2769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2767, &$s2768);
    (($fn2770) p_out->$class->vtable[16])(p_out, $tmp2769);
    separator2771 = &$s2772;
    {
        ITable* $tmp2774 = ((panda$collections$Iterable*) inline2741->returns)->$class->itable;
        while ($tmp2774->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2774 = $tmp2774->next;
        }
        $fn2776 $tmp2775 = $tmp2774->methods[0];
        panda$collections$Iterator* $tmp2777 = $tmp2775(((panda$collections$Iterable*) inline2741->returns));
        ret$Iter2773 = $tmp2777;
        $l2778:;
        ITable* $tmp2780 = ret$Iter2773->$class->itable;
        while ($tmp2780->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2780 = $tmp2780->next;
        }
        $fn2782 $tmp2781 = $tmp2780->methods[0];
        panda$core$Bit $tmp2783 = $tmp2781(ret$Iter2773);
        panda$core$Bit $tmp2784 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2783);
        if (!$tmp2784.value) goto $l2779;
        {
            ITable* $tmp2786 = ret$Iter2773->$class->itable;
            while ($tmp2786->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2786 = $tmp2786->next;
            }
            $fn2788 $tmp2787 = $tmp2786->methods[1];
            panda$core$Object* $tmp2789 = $tmp2787(ret$Iter2773);
            ret2785 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2789);
            panda$core$String* $tmp2790 = panda$core$String$convert$R$panda$core$String(separator2771);
            panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, &$s2791);
            panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, ((panda$core$String*) ret2785->second));
            panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, &$s2794);
            panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, ((panda$core$String*) ret2785->first));
            panda$core$String* $tmp2798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2796, &$s2797);
            (($fn2799) p_out->$class->vtable[16])(p_out, $tmp2798);
            separator2771 = &$s2800;
        }
        goto $l2778;
        $l2779:;
    }
    (($fn2801) p_out->$class->vtable[17])(p_out);
    return phi2761;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2803;
    panda$core$String* bit2813;
    panda$core$String* result2817;
    panda$core$String* bit2831;
    panda$core$String* result2835;
    org$pandalanguage$pandac$IRNode* block2850;
    panda$collections$Array* args2854;
    org$pandalanguage$pandac$Type* actualMethodType2858;
    panda$core$String* actualResultType2859;
    panda$core$Bit isSuper2860;
    panda$core$Int64 offset2880;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2885;
    panda$core$String* arg2900;
    panda$core$String* target2932;
    panda$core$String* methodRef2936;
    panda$core$String* result2938;
    panda$core$Bit indirect2939;
    panda$core$String* separator2964;
    panda$core$String* indirectVar2966;
    panda$collections$Iterator* arg$Iter2985;
    panda$core$String* arg2997;
    panda$core$Bit $tmp2802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2802.value);
    m2803 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2805 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2803->owner)->name, &$s2804);
    if ($tmp2805.value) {
    {
        panda$core$String* $tmp2806 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2806;
    }
    }
    if (m2803->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2803);
    }
    }
    panda$core$Bit $tmp2808 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2803->owner)->name, &$s2807);
    if ($tmp2808.value) {
    {
        panda$core$Bit $tmp2810 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2803)->name, &$s2809);
        if ($tmp2810.value) {
        {
            panda$core$Int64 $tmp2811 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2811, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2812.value);
            panda$core$Object* $tmp2814 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2815 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2816 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2814), ((org$pandalanguage$pandac$IRNode*) $tmp2815), p_out);
            bit2813 = $tmp2816;
            panda$core$String* $tmp2818 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2817 = $tmp2818;
            panda$core$String* $tmp2819 = panda$core$String$convert$R$panda$core$String(result2817);
            panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2819, &$s2820);
            panda$core$String* $tmp2822 = panda$core$String$convert$R$panda$core$String(bit2813);
            panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2822, &$s2823);
            panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, $tmp2824);
            (($fn2826) p_out->$class->vtable[19])(p_out, $tmp2825);
            return result2817;
        }
        }
        panda$core$Bit $tmp2828 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2803)->name, &$s2827);
        if ($tmp2828.value) {
        {
            panda$core$Int64 $tmp2829 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2829, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2830.value);
            panda$core$Object* $tmp2832 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2833 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2834 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2832), ((org$pandalanguage$pandac$IRNode*) $tmp2833), p_out);
            bit2831 = $tmp2834;
            panda$core$String* $tmp2836 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2835 = $tmp2836;
            panda$core$String* $tmp2837 = panda$core$String$convert$R$panda$core$String(result2835);
            panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, &$s2838);
            panda$core$String* $tmp2840 = panda$core$String$convert$R$panda$core$String(bit2831);
            panda$core$String* $tmp2842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, &$s2841);
            panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, $tmp2842);
            (($fn2844) p_out->$class->vtable[19])(p_out, $tmp2843);
            return result2835;
        }
        }
    }
    }
    panda$core$Bit $tmp2846 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2803->annotations);
    bool $tmp2845 = $tmp2846.value;
    if (!$tmp2845) goto $l2847;
    panda$core$Object* $tmp2848 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2803));
    $tmp2845 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp2848) == NULL }).value;
    $l2847:;
    panda$core$Bit $tmp2849 = { $tmp2845 };
    if ($tmp2849.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2851 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2803);
        block2850 = $tmp2851;
        if (((panda$core$Bit) { block2850 != NULL }).value) {
        {
            panda$core$String* $tmp2852 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, block2850, p_out);
            return $tmp2852;
        }
        }
        return &$s2853;
    }
    }
    panda$collections$Array* $tmp2855 = (panda$collections$Array*) malloc(40);
    $tmp2855->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2855->refCount.value = 1;
    panda$core$Int64 $tmp2857 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp2855, $tmp2857);
    args2854 = $tmp2855;
    panda$core$Int64 $tmp2862 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2863 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2862, ((panda$core$Int64) { 1 }));
    bool $tmp2861 = $tmp2863.value;
    if (!$tmp2861) goto $l2864;
    panda$core$Object* $tmp2865 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2865)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2861 = $tmp2866.value;
    $l2864:;
    panda$core$Bit $tmp2867 = { $tmp2861 };
    isSuper2860 = $tmp2867;
    panda$core$Bit $tmp2869 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2860);
    bool $tmp2868 = $tmp2869.value;
    if (!$tmp2868) goto $l2870;
    panda$core$Bit $tmp2871 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2803);
    $tmp2868 = $tmp2871.value;
    $l2870:;
    panda$core$Bit $tmp2872 = { $tmp2868 };
    if ($tmp2872.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2873 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2803);
        actualMethodType2858 = $tmp2873;
        panda$core$Int64 $tmp2874 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2858->subtypes);
        panda$core$Int64 $tmp2875 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2874, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2876 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2858->subtypes, $tmp2875);
        panda$core$String* $tmp2877 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2876));
        actualResultType2859 = $tmp2877;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2878 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2803);
        actualMethodType2858 = $tmp2878;
        panda$core$String* $tmp2879 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2859 = $tmp2879;
    }
    }
    panda$core$Int64 $tmp2881 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2882 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2858->subtypes);
    panda$core$Int64 $tmp2883 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2881, $tmp2882);
    panda$core$Int64 $tmp2884 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2883, ((panda$core$Int64) { 1 }));
    offset2880 = $tmp2884;
    panda$core$Int64 $tmp2886 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2885, ((panda$core$Int64) { 0 }), $tmp2886, ((panda$core$Bit) { false }));
    int64_t $tmp2888 = $tmp2885.min.value;
    panda$core$Int64 i2887 = { $tmp2888 };
    int64_t $tmp2890 = $tmp2885.max.value;
    bool $tmp2891 = $tmp2885.inclusive.value;
    if ($tmp2891) goto $l2898; else goto $l2899;
    $l2898:;
    if ($tmp2888 <= $tmp2890) goto $l2892; else goto $l2894;
    $l2899:;
    if ($tmp2888 < $tmp2890) goto $l2892; else goto $l2894;
    $l2892:;
    {
        panda$core$Object* $tmp2901 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2887);
        panda$core$String* $tmp2902 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2901), p_out);
        arg2900 = $tmp2902;
        panda$core$Bit $tmp2904 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2887, offset2880);
        bool $tmp2903 = $tmp2904.value;
        if (!$tmp2903) goto $l2905;
        panda$core$Int64 $tmp2906 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2887, offset2880);
        panda$core$Object* $tmp2907 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2858->subtypes, $tmp2906);
        panda$core$Object* $tmp2908 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2887);
        panda$core$Bit $tmp2909 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2907), ((org$pandalanguage$pandac$IRNode*) $tmp2908)->type);
        $tmp2903 = $tmp2909.value;
        $l2905:;
        panda$core$Bit $tmp2910 = { $tmp2903 };
        if ($tmp2910.value) {
        {
            panda$core$Int64 $tmp2911 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2887, offset2880);
            panda$core$Object* $tmp2912 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2858->subtypes, $tmp2911);
            panda$core$String* $tmp2913 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2912));
            panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2913, &$s2914);
            panda$core$Object* $tmp2916 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2887);
            panda$core$Int64 $tmp2917 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2887, offset2880);
            panda$core$Object* $tmp2918 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2858->subtypes, $tmp2917);
            panda$core$String* $tmp2919 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg2900, ((org$pandalanguage$pandac$IRNode*) $tmp2916)->type, ((org$pandalanguage$pandac$Type*) $tmp2918), p_out);
            panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2915, $tmp2919);
            arg2900 = $tmp2920;
        }
        }
        else {
        {
            panda$core$Object* $tmp2921 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2887);
            panda$core$String* $tmp2922 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2921)->type);
            panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, &$s2923);
            panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, arg2900);
            arg2900 = $tmp2925;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2854, ((panda$core$Object*) arg2900));
    }
    $l2895:;
    int64_t $tmp2927 = $tmp2890 - i2887.value;
    if ($tmp2891) goto $l2928; else goto $l2929;
    $l2928:;
    if ($tmp2927 >= 1) goto $l2926; else goto $l2894;
    $l2929:;
    if ($tmp2927 > 1) goto $l2926; else goto $l2894;
    $l2926:;
    i2887.value += 1;
    goto $l2892;
    $l2894:;
    panda$core$Int64 $tmp2933 = panda$collections$Array$get_count$R$panda$core$Int64(args2854);
    panda$core$Bit $tmp2934 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2933, ((panda$core$Int64) { 0 }));
    if ($tmp2934.value) {
    {
        panda$core$Object* $tmp2935 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2854, ((panda$core$Int64) { 0 }));
        target2932 = ((panda$core$String*) $tmp2935);
    }
    }
    else {
    {
        target2932 = NULL;
    }
    }
    panda$core$String* $tmp2937 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, target2932, m2803, isSuper2860, p_out);
    methodRef2936 = $tmp2937;
    panda$core$Bit $tmp2940 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2803);
    indirect2939 = $tmp2940;
    if (indirect2939.value) {
    {
        panda$core$String* $tmp2942 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2803);
        panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2941, $tmp2942);
        panda$core$String* $tmp2945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2943, &$s2944);
        (($fn2946) p_out->$class->vtable[16])(p_out, $tmp2945);
    }
    }
    else {
    {
        panda$core$String* $tmp2947 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2938 = $tmp2947;
        panda$core$String* $tmp2948 = panda$core$String$convert$R$panda$core$String(result2938);
        panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, &$s2949);
        panda$core$String* $tmp2951 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2803);
        panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, $tmp2951);
        panda$core$String* $tmp2954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, &$s2953);
        panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2954, actualResultType2859);
        panda$core$String* $tmp2957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2955, &$s2956);
        (($fn2958) p_out->$class->vtable[16])(p_out, $tmp2957);
    }
    }
    panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2959, methodRef2936);
    panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2961);
    (($fn2963) p_out->$class->vtable[16])(p_out, $tmp2962);
    separator2964 = &$s2965;
    if (indirect2939.value) {
    {
        panda$core$Int64 $tmp2967 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp2967;
        panda$core$String* $tmp2969 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2968, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar2966 = $tmp2969;
        panda$core$String* $tmp2970 = panda$core$String$convert$R$panda$core$String(indirectVar2966);
        panda$core$String* $tmp2972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2970, &$s2971);
        panda$core$String* $tmp2973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2972, actualResultType2859);
        panda$core$String* $tmp2975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2973, &$s2974);
        (($fn2976) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2975);
        panda$core$String* $tmp2977 = panda$core$String$convert$R$panda$core$String(actualResultType2859);
        panda$core$String* $tmp2979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2977, &$s2978);
        panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2979, indirectVar2966);
        panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, &$s2981);
        (($fn2983) p_out->$class->vtable[16])(p_out, $tmp2982);
        separator2964 = &$s2984;
    }
    }
    {
        ITable* $tmp2986 = ((panda$collections$Iterable*) args2854)->$class->itable;
        while ($tmp2986->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2986 = $tmp2986->next;
        }
        $fn2988 $tmp2987 = $tmp2986->methods[0];
        panda$collections$Iterator* $tmp2989 = $tmp2987(((panda$collections$Iterable*) args2854));
        arg$Iter2985 = $tmp2989;
        $l2990:;
        ITable* $tmp2992 = arg$Iter2985->$class->itable;
        while ($tmp2992->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2992 = $tmp2992->next;
        }
        $fn2994 $tmp2993 = $tmp2992->methods[0];
        panda$core$Bit $tmp2995 = $tmp2993(arg$Iter2985);
        panda$core$Bit $tmp2996 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2995);
        if (!$tmp2996.value) goto $l2991;
        {
            ITable* $tmp2998 = arg$Iter2985->$class->itable;
            while ($tmp2998->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2998 = $tmp2998->next;
            }
            $fn3000 $tmp2999 = $tmp2998->methods[1];
            panda$core$Object* $tmp3001 = $tmp2999(arg$Iter2985);
            arg2997 = ((panda$core$String*) $tmp3001);
            panda$core$String* $tmp3002 = panda$core$String$convert$R$panda$core$String(separator2964);
            panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, &$s3003);
            panda$core$String* $tmp3005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3004, arg2997);
            panda$core$String* $tmp3007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3005, &$s3006);
            (($fn3008) p_out->$class->vtable[16])(p_out, $tmp3007);
            separator2964 = &$s3009;
        }
        goto $l2990;
        $l2991:;
    }
    (($fn3011) p_out->$class->vtable[19])(p_out, &$s3010);
    if (indirect2939.value) {
    {
        panda$core$String* $tmp3012 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2938 = $tmp3012;
        panda$core$String* $tmp3013 = panda$core$String$convert$R$panda$core$String(result2938);
        panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, &$s3014);
        panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3015, actualResultType2859);
        panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3017);
        panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, actualResultType2859);
        panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, &$s3020);
        panda$core$String* $tmp3022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3021, indirectVar2966);
        (($fn3023) p_out->$class->vtable[19])(p_out, $tmp3022);
    }
    }
    panda$core$String* $tmp3024 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3025 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3024, actualResultType2859);
    if ($tmp3025.value) {
    {
        panda$core$Int64 $tmp3026 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2858->subtypes);
        panda$core$Int64 $tmp3027 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3026, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3028 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2858->subtypes, $tmp3027);
        panda$core$String* $tmp3029 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, result2938, ((org$pandalanguage$pandac$Type*) $tmp3028), p_call->type, p_out);
        return $tmp3029;
    }
    }
    return result2938;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3030;
    panda$core$String* testStart3033;
    panda$core$String* isNonNull3034;
    panda$core$String* nonNullLabel3047;
    panda$core$String* endLabel3049;
    panda$core$String* unwrapped3062;
    panda$core$String* nonNullValue3065;
    panda$core$String* result3073;
    panda$core$String* mallocRef3094;
    panda$core$String* wrapperTypeName3105;
    panda$core$String* wrapperType3108;
    panda$core$String* wrapperCast3111;
    panda$core$String* classPtr3123;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3139;
    panda$core$String* ccCast3141;
    panda$core$String* refCount3159;
    panda$core$String* target3180;
    panda$core$String* result3214;
    org$pandalanguage$pandac$ClassDecl* $tmp3031 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3030 = $tmp3031;
    PANDA_ASSERT(((panda$core$Bit) { src3030 != NULL }).value);
    panda$core$Bit $tmp3032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3032.value) {
    {
        testStart3033 = self->currentBlock;
        panda$core$String* $tmp3035 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3034 = $tmp3035;
        panda$core$String* $tmp3036 = panda$core$String$convert$R$panda$core$String(isNonNull3034);
        panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3036, &$s3037);
        panda$core$String* $tmp3039 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3038, $tmp3039);
        panda$core$String* $tmp3042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3040, &$s3041);
        panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3042, p_value);
        panda$core$String* $tmp3045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3043, &$s3044);
        (($fn3046) p_out->$class->vtable[19])(p_out, $tmp3045);
        panda$core$String* $tmp3048 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3047 = $tmp3048;
        panda$core$String* $tmp3050 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3049 = $tmp3050;
        panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3051, isNonNull3034);
        panda$core$String* $tmp3054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3052, &$s3053);
        panda$core$String* $tmp3055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3054, nonNullLabel3047);
        panda$core$String* $tmp3057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3055, &$s3056);
        panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3057, endLabel3049);
        panda$core$String* $tmp3060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, &$s3059);
        (($fn3061) p_out->$class->vtable[19])(p_out, $tmp3060);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3047, p_out);
        panda$core$Object* $tmp3063 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3064 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3063), p_out);
        unwrapped3062 = $tmp3064;
        panda$core$Object* $tmp3066 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3067 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, unwrapped3062, ((org$pandalanguage$pandac$Type*) $tmp3066), p_dstType, p_out);
        nonNullValue3065 = $tmp3067;
        panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3068, endLabel3049);
        panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, &$s3070);
        (($fn3072) p_out->$class->vtable[19])(p_out, $tmp3071);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3049, p_out);
        panda$core$String* $tmp3074 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3073 = $tmp3074;
        panda$core$String* $tmp3075 = panda$core$String$convert$R$panda$core$String(result3073);
        panda$core$String* $tmp3077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3075, &$s3076);
        panda$core$String* $tmp3078 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3077, $tmp3078);
        panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3079, &$s3080);
        panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, testStart3033);
        panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3082, &$s3083);
        panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3085, nonNullValue3065);
        panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3086, &$s3087);
        panda$core$String* $tmp3089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3088, nonNullLabel3047);
        panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3089, &$s3090);
        panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3084, $tmp3091);
        (($fn3093) p_out->$class->vtable[19])(p_out, $tmp3092);
        return result3073;
    }
    }
    panda$core$String* $tmp3095 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3094 = $tmp3095;
    panda$core$String* $tmp3096 = panda$core$String$convert$R$panda$core$String(mallocRef3094);
    panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
    org$pandalanguage$pandac$Type* $tmp3099 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3030);
    panda$core$Int64 $tmp3100 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3099);
    panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3098, ((panda$core$Object*) wrap_panda$core$Int64($tmp3100)));
    panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3101, &$s3102);
    (($fn3104) p_out->$class->vtable[19])(p_out, $tmp3103);
    org$pandalanguage$pandac$Type* $tmp3106 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3030);
    panda$core$String* $tmp3107 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3106);
    wrapperTypeName3105 = $tmp3107;
    org$pandalanguage$pandac$Type* $tmp3109 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3030);
    panda$core$String* $tmp3110 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3109);
    wrapperType3108 = $tmp3110;
    panda$core$String* $tmp3112 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3111 = $tmp3112;
    panda$core$String* $tmp3113 = panda$core$String$convert$R$panda$core$String(wrapperCast3111);
    panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3113, &$s3114);
    panda$core$String* $tmp3116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3115, mallocRef3094);
    panda$core$String* $tmp3118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3116, &$s3117);
    panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3118, wrapperType3108);
    panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, &$s3120);
    (($fn3122) p_out->$class->vtable[19])(p_out, $tmp3121);
    panda$core$String* $tmp3124 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3123 = $tmp3124;
    panda$core$String* $tmp3125 = panda$core$String$convert$R$panda$core$String(classPtr3123);
    panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3125, &$s3126);
    panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3127, wrapperTypeName3105);
    panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3128, &$s3129);
    panda$core$String* $tmp3131 = panda$core$String$convert$R$panda$core$String(wrapperType3108);
    panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3131, &$s3132);
    panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3133, wrapperCast3111);
    panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3134, &$s3135);
    panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3130, $tmp3136);
    (($fn3138) p_out->$class->vtable[19])(p_out, $tmp3137);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3140 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3030);
    cc3139 = $tmp3140;
    panda$core$Bit $tmp3143 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(cc3139->type, &$s3142);
    if ($tmp3143.value) {
    {
        panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3144, cc3139->type);
        panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, &$s3146);
        panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, cc3139->name);
        panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3148, &$s3149);
        ccCast3141 = $tmp3150;
    }
    }
    else {
    {
        ccCast3141 = cc3139->name;
    }
    }
    panda$core$String* $tmp3152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3151, ccCast3141);
    panda$core$String* $tmp3154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3152, &$s3153);
    panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3154, classPtr3123);
    panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, &$s3156);
    (($fn3158) p_out->$class->vtable[19])(p_out, $tmp3157);
    panda$core$String* $tmp3160 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3159 = $tmp3160;
    panda$core$String* $tmp3161 = panda$core$String$convert$R$panda$core$String(refCount3159);
    panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, &$s3162);
    panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, wrapperTypeName3105);
    panda$core$String* $tmp3166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3164, &$s3165);
    panda$core$String* $tmp3167 = panda$core$String$convert$R$panda$core$String(wrapperType3108);
    panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, &$s3168);
    panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, wrapperCast3111);
    panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, &$s3171);
    panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3166, $tmp3172);
    (($fn3174) p_out->$class->vtable[19])(p_out, $tmp3173);
    panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3175, refCount3159);
    panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, &$s3177);
    (($fn3179) p_out->$class->vtable[19])(p_out, $tmp3178);
    panda$core$String* $tmp3181 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3180 = $tmp3181;
    panda$core$String* $tmp3182 = panda$core$String$convert$R$panda$core$String(target3180);
    panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3182, &$s3183);
    panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3184, wrapperTypeName3105);
    panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3185, &$s3186);
    panda$core$String* $tmp3188 = panda$core$String$convert$R$panda$core$String(wrapperType3108);
    panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3188, &$s3189);
    panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3190, wrapperCast3111);
    panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, &$s3192);
    panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3187, $tmp3193);
    (($fn3195) p_out->$class->vtable[19])(p_out, $tmp3194);
    panda$core$String* $tmp3197 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3196, $tmp3197);
    panda$core$String* $tmp3200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3198, &$s3199);
    panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3200, p_value);
    panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3201, &$s3202);
    panda$core$String* $tmp3204 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3203, $tmp3204);
    panda$core$String* $tmp3207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3205, &$s3206);
    panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, target3180);
    panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, &$s3209);
    (($fn3211) p_out->$class->vtable[19])(p_out, $tmp3210);
    panda$core$String* $tmp3212 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3213 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3108, $tmp3212);
    if ($tmp3213.value) {
    {
        panda$core$String* $tmp3215 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3214 = $tmp3215;
        panda$core$String* $tmp3216 = panda$core$String$convert$R$panda$core$String(result3214);
        panda$core$String* $tmp3218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3216, &$s3217);
        panda$core$String* $tmp3219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3218, wrapperType3108);
        panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3219, &$s3220);
        panda$core$String* $tmp3222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3221, wrapperCast3111);
        panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3222, &$s3223);
        panda$core$String* $tmp3225 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3224, $tmp3225);
        panda$core$String* $tmp3228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3226, &$s3227);
        (($fn3229) p_out->$class->vtable[19])(p_out, $tmp3228);
        return result3214;
    }
    }
    return wrapperCast3111;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3233;
    panda$core$String* t3234;
    org$pandalanguage$pandac$ClassDecl* cl3238;
    panda$core$String* base3242;
    panda$collections$ListView* fields3245;
    panda$core$Int64$nullable index3247;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3248;
    panda$core$String* result3276;
    panda$core$String* ptr3295;
    panda$core$String* result3303;
    panda$core$Bit $tmp3230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3230.value);
    panda$core$Int64 $tmp3231 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3231, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3232.value);
    field3233 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3235 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3233->type);
    t3234 = $tmp3235;
    panda$core$Bit $tmp3236 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3233->annotations);
    if ($tmp3236.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3233->value != NULL }).value);
        panda$core$String* $tmp3237 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, field3233->value, p_out);
        return $tmp3237;
    }
    }
    panda$core$Object* $tmp3239 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3240 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3239)->type);
    cl3238 = $tmp3240;
    PANDA_ASSERT(((panda$core$Bit) { cl3238 != NULL }).value);
    panda$core$Bit $tmp3241 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3238);
    if ($tmp3241.value) {
    {
        panda$core$Object* $tmp3243 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3244 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3243), p_out);
        base3242 = $tmp3244;
        panda$collections$ListView* $tmp3246 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3238);
        fields3245 = $tmp3246;
        index3247 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3249 = ((panda$collections$CollectionView*) fields3245)->$class->itable;
        while ($tmp3249->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3249 = $tmp3249->next;
        }
        $fn3251 $tmp3250 = $tmp3249->methods[0];
        panda$core$Int64 $tmp3252 = $tmp3250(((panda$collections$CollectionView*) fields3245));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3248, ((panda$core$Int64) { 0 }), $tmp3252, ((panda$core$Bit) { false }));
        int64_t $tmp3254 = $tmp3248.min.value;
        panda$core$Int64 i3253 = { $tmp3254 };
        int64_t $tmp3256 = $tmp3248.max.value;
        bool $tmp3257 = $tmp3248.inclusive.value;
        if ($tmp3257) goto $l3264; else goto $l3265;
        $l3264:;
        if ($tmp3254 <= $tmp3256) goto $l3258; else goto $l3260;
        $l3265:;
        if ($tmp3254 < $tmp3256) goto $l3258; else goto $l3260;
        $l3258:;
        {
            ITable* $tmp3266 = fields3245->$class->itable;
            while ($tmp3266->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3266 = $tmp3266->next;
            }
            $fn3268 $tmp3267 = $tmp3266->methods[0];
            panda$core$Object* $tmp3269 = $tmp3267(fields3245, i3253);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3269)) == ((panda$core$Object*) field3233) }).value) {
            {
                index3247 = ((panda$core$Int64$nullable) { i3253, true });
                goto $l3260;
            }
            }
        }
        $l3261:;
        int64_t $tmp3271 = $tmp3256 - i3253.value;
        if ($tmp3257) goto $l3272; else goto $l3273;
        $l3272:;
        if ($tmp3271 >= 1) goto $l3270; else goto $l3260;
        $l3273:;
        if ($tmp3271 > 1) goto $l3270; else goto $l3260;
        $l3270:;
        i3253.value += 1;
        goto $l3258;
        $l3260:;
        PANDA_ASSERT(((panda$core$Bit) { index3247.nonnull }).value);
        panda$core$String* $tmp3277 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3276 = $tmp3277;
        panda$core$String* $tmp3278 = panda$core$String$convert$R$panda$core$String(result3276);
        panda$core$String* $tmp3280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3278, &$s3279);
        panda$core$Object* $tmp3281 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3282 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3281)->type);
        panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3280, $tmp3282);
        panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3284);
        panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3285, base3242);
        panda$core$String* $tmp3288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3286, &$s3287);
        panda$core$String* $tmp3290 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3289, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3247.value))));
        panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3290, &$s3291);
        panda$core$String* $tmp3293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3288, $tmp3292);
        (($fn3294) p_out->$class->vtable[19])(p_out, $tmp3293);
        return result3276;
    }
    }
    panda$core$String* $tmp3296 = panda$core$String$convert$R$panda$core$String(t3234);
    panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, &$s3297);
    panda$core$String* $tmp3299 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3298, $tmp3299);
    panda$core$String* $tmp3302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3300, &$s3301);
    ptr3295 = $tmp3302;
    panda$core$String* $tmp3304 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3303 = $tmp3304;
    panda$core$String* $tmp3305 = panda$core$String$convert$R$panda$core$String(result3303);
    panda$core$String* $tmp3307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3305, &$s3306);
    panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3307, t3234);
    panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3308, &$s3309);
    panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, ptr3295);
    panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3311, &$s3312);
    (($fn3314) p_out->$class->vtable[19])(p_out, $tmp3313);
    return result3303;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3315;
    panda$core$String* testStart3318;
    panda$core$String* isNonNull3319;
    panda$core$String* nonNullLabel3332;
    panda$core$String* endLabel3334;
    panda$core$String* wrapped3347;
    panda$core$String* nonNullValue3350;
    panda$core$String* result3358;
    panda$core$String* targetType3386;
    panda$core$String* wrapperTypeName3388;
    panda$core$String* wrapperType3390;
    panda$core$String* srcCast3392;
    panda$core$String* load3408;
    panda$core$String* result3423;
    org$pandalanguage$pandac$ClassDecl* $tmp3316 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3315 = $tmp3316;
    PANDA_ASSERT(((panda$core$Bit) { target3315 != NULL }).value);
    panda$core$Bit $tmp3317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3317.value) {
    {
        testStart3318 = self->currentBlock;
        panda$core$String* $tmp3320 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3319 = $tmp3320;
        panda$core$String* $tmp3321 = panda$core$String$convert$R$panda$core$String(isNonNull3319);
        panda$core$String* $tmp3323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3321, &$s3322);
        panda$core$String* $tmp3324 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3323, $tmp3324);
        panda$core$String* $tmp3327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3325, &$s3326);
        panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3327, p_value);
        panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, &$s3329);
        (($fn3331) p_out->$class->vtable[19])(p_out, $tmp3330);
        panda$core$String* $tmp3333 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3332 = $tmp3333;
        panda$core$String* $tmp3335 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3334 = $tmp3335;
        panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3336, isNonNull3319);
        panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, &$s3338);
        panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3339, nonNullLabel3332);
        panda$core$String* $tmp3342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3340, &$s3341);
        panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3342, endLabel3334);
        panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, &$s3344);
        (($fn3346) p_out->$class->vtable[19])(p_out, $tmp3345);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3332, p_out);
        panda$core$Object* $tmp3348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3349 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3348), p_out);
        wrapped3347 = $tmp3349;
        panda$core$Object* $tmp3351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3352 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, wrapped3347, ((org$pandalanguage$pandac$Type*) $tmp3351), p_dstType, p_out);
        nonNullValue3350 = $tmp3352;
        panda$core$String* $tmp3354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3353, endLabel3334);
        panda$core$String* $tmp3356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3354, &$s3355);
        (($fn3357) p_out->$class->vtable[19])(p_out, $tmp3356);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3334, p_out);
        panda$core$String* $tmp3359 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3358 = $tmp3359;
        panda$core$String* $tmp3360 = panda$core$String$convert$R$panda$core$String(result3358);
        panda$core$String* $tmp3362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3360, &$s3361);
        panda$core$String* $tmp3363 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3362, $tmp3363);
        panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3364, &$s3365);
        panda$core$Object* $tmp3368 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3369 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3368));
        panda$core$String* $tmp3370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3367, $tmp3369);
        panda$core$String* $tmp3372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3370, &$s3371);
        panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3366, $tmp3372);
        panda$core$String* $tmp3375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3374, testStart3318);
        panda$core$String* $tmp3377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3375, &$s3376);
        panda$core$String* $tmp3378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3377, nonNullValue3350);
        panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3378, &$s3379);
        panda$core$String* $tmp3381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3380, nonNullLabel3332);
        panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3381, &$s3382);
        panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3373, $tmp3383);
        (($fn3385) p_out->$class->vtable[19])(p_out, $tmp3384);
        return result3358;
    }
    }
    panda$core$String* $tmp3387 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3386 = $tmp3387;
    panda$core$String* $tmp3389 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3388 = $tmp3389;
    panda$core$String* $tmp3391 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3390 = $tmp3391;
    panda$core$String* $tmp3393 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3392 = $tmp3393;
    panda$core$String* $tmp3394 = panda$core$String$convert$R$panda$core$String(srcCast3392);
    panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3394, &$s3395);
    panda$core$String* $tmp3397 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3396, $tmp3397);
    panda$core$String* $tmp3400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3398, &$s3399);
    panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3400, p_value);
    panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3401, &$s3402);
    panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3403, wrapperType3390);
    panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3404, &$s3405);
    (($fn3407) p_out->$class->vtable[19])(p_out, $tmp3406);
    panda$core$String* $tmp3409 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3408 = $tmp3409;
    panda$core$String* $tmp3410 = panda$core$String$convert$R$panda$core$String(load3408);
    panda$core$String* $tmp3412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3410, &$s3411);
    panda$core$String* $tmp3413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3412, wrapperTypeName3388);
    panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, &$s3414);
    panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3415, wrapperType3390);
    panda$core$String* $tmp3418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3416, &$s3417);
    panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3418, srcCast3392);
    panda$core$String* $tmp3421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3419, &$s3420);
    (($fn3422) p_out->$class->vtable[19])(p_out, $tmp3421);
    panda$core$String* $tmp3424 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3423 = $tmp3424;
    panda$core$String* $tmp3425 = panda$core$String$convert$R$panda$core$String(result3423);
    panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3425, &$s3426);
    panda$core$String* $tmp3428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3427, wrapperTypeName3388);
    panda$core$String* $tmp3430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3428, &$s3429);
    panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3430, load3408);
    panda$core$String* $tmp3433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3431, &$s3432);
    panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3433, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3434, &$s3435);
    (($fn3437) p_out->$class->vtable[19])(p_out, $tmp3436);
    return result3423;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* nullableType3438;
    panda$core$String* result3440;
    panda$core$String* $tmp3439 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3438 = $tmp3439;
    panda$core$String* $tmp3441 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3440 = $tmp3441;
    panda$core$String* $tmp3442 = panda$core$String$convert$R$panda$core$String(result3440);
    panda$core$String* $tmp3444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3442, &$s3443);
    panda$core$String* $tmp3445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3444, nullableType3438);
    panda$core$String* $tmp3447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3445, &$s3446);
    panda$core$String* $tmp3449 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3448, $tmp3449);
    panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3450, &$s3451);
    panda$core$String* $tmp3453 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, $tmp3453);
    panda$core$String* $tmp3456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3454, &$s3455);
    panda$core$String* $tmp3457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3456, p_value);
    panda$core$String* $tmp3459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3457, &$s3458);
    panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3447, $tmp3459);
    (($fn3461) p_out->$class->vtable[19])(p_out, $tmp3460);
    return result3440;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* result3462;
    panda$core$String* $tmp3463 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3462 = $tmp3463;
    panda$core$String* $tmp3464 = panda$core$String$convert$R$panda$core$String(result3462);
    panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3464, &$s3465);
    panda$core$String* $tmp3467 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, $tmp3467);
    panda$core$String* $tmp3470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3468, &$s3469);
    panda$core$String* $tmp3471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3470, p_value);
    panda$core$String* $tmp3473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3471, &$s3472);
    (($fn3474) p_out->$class->vtable[19])(p_out, $tmp3473);
    return result3462;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$OutputStream* p_out) {
    panda$core$String* op3475;
    panda$core$Int64 size13478;
    panda$core$Int64 size23480;
    org$pandalanguage$pandac$ClassDecl* srcClass3488;
    org$pandalanguage$pandac$ClassDecl* targetClass3490;
    panda$core$String* srcType3529;
    panda$core$String* dstType3531;
    panda$core$String* result3534;
    panda$core$Bit $tmp3476 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3476.value) {
    {
        panda$core$Bit $tmp3477 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3477.value);
        panda$core$Int64 $tmp3479 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13478 = $tmp3479;
        panda$core$Int64 $tmp3481 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23480 = $tmp3481;
        panda$core$Bit $tmp3482 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13478, size23480);
        if ($tmp3482.value) {
        {
            op3475 = &$s3483;
        }
        }
        else {
        panda$core$Bit $tmp3484 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13478, size23480);
        if ($tmp3484.value) {
        {
            panda$core$Bit $tmp3485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3485.value) {
            {
                op3475 = &$s3486;
            }
            }
            else {
            {
                op3475 = &$s3487;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3489 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3488 = $tmp3489;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3488 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3491 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3490 = $tmp3491;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3490 != NULL }).value);
        panda$core$Bit $tmp3493 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3488);
        bool $tmp3492 = $tmp3493.value;
        if (!$tmp3492) goto $l3494;
        panda$core$Bit $tmp3495 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3490);
        panda$core$Bit $tmp3496 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3495);
        $tmp3492 = $tmp3496.value;
        $l3494:;
        panda$core$Bit $tmp3497 = { $tmp3492 };
        if ($tmp3497.value) {
        {
            panda$core$String* $tmp3498 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3498;
        }
        }
        else {
        panda$core$Bit $tmp3500 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3488);
        panda$core$Bit $tmp3501 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3500);
        bool $tmp3499 = $tmp3501.value;
        if (!$tmp3499) goto $l3502;
        panda$core$Bit $tmp3503 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3490);
        $tmp3499 = $tmp3503.value;
        $l3502:;
        panda$core$Bit $tmp3504 = { $tmp3499 };
        if ($tmp3504.value) {
        {
            panda$core$String* $tmp3505 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3505;
        }
        }
        else {
        panda$core$Bit $tmp3508 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3488);
        bool $tmp3507 = $tmp3508.value;
        if (!$tmp3507) goto $l3509;
        panda$core$Bit $tmp3510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3507 = $tmp3510.value;
        $l3509:;
        panda$core$Bit $tmp3511 = { $tmp3507 };
        bool $tmp3506 = $tmp3511.value;
        if (!$tmp3506) goto $l3512;
        panda$core$Object* $tmp3513 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3514 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3513), p_src);
        $tmp3506 = $tmp3514.value;
        $l3512:;
        panda$core$Bit $tmp3515 = { $tmp3506 };
        if ($tmp3515.value) {
        {
            panda$core$String* $tmp3516 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3516;
        }
        }
        else {
        panda$core$Bit $tmp3519 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3490);
        bool $tmp3518 = $tmp3519.value;
        if (!$tmp3518) goto $l3520;
        panda$core$Bit $tmp3521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3518 = $tmp3521.value;
        $l3520:;
        panda$core$Bit $tmp3522 = { $tmp3518 };
        bool $tmp3517 = $tmp3522.value;
        if (!$tmp3517) goto $l3523;
        panda$core$Object* $tmp3524 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3525 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3524), p_target);
        $tmp3517 = $tmp3525.value;
        $l3523:;
        panda$core$Bit $tmp3526 = { $tmp3517 };
        if ($tmp3526.value) {
        {
            panda$core$String* $tmp3527 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3527;
        }
        }
        }
        }
        }
        op3475 = &$s3528;
    }
    }
    panda$core$String* $tmp3530 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3529 = $tmp3530;
    panda$core$String* $tmp3532 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3531 = $tmp3532;
    panda$core$Bit $tmp3533 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3529, dstType3531);
    if ($tmp3533.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3535 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3534 = $tmp3535;
    panda$core$String* $tmp3536 = panda$core$String$convert$R$panda$core$String(result3534);
    panda$core$String* $tmp3538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3536, &$s3537);
    panda$core$String* $tmp3539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3538, op3475);
    panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3539, &$s3540);
    panda$core$String* $tmp3542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3541, srcType3529);
    panda$core$String* $tmp3544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3542, &$s3543);
    panda$core$String* $tmp3545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3544, p_value);
    panda$core$String* $tmp3547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3545, &$s3546);
    panda$core$String* $tmp3548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3547, dstType3531);
    panda$core$String* $tmp3550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3548, &$s3549);
    (($fn3551) p_out->$class->vtable[19])(p_out, $tmp3550);
    return result3534;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$OutputStream* p_out) {
    panda$core$String* base3555;
    panda$core$Bit $tmp3552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3552.value);
    panda$core$Int64 $tmp3553 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3553, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3554.value);
    panda$core$Object* $tmp3556 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3557 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3556), p_out);
    base3555 = $tmp3557;
    panda$core$Object* $tmp3558 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3559 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, base3555, ((org$pandalanguage$pandac$IRNode*) $tmp3558)->type, p_cast->type, p_out);
    return $tmp3559;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3563;
    panda$core$String* t3565;
    panda$core$String* value3573;
    panda$core$String* result3584;
    org$pandalanguage$pandac$FieldDecl* lastField3586;
    panda$core$String* value3614;
    panda$core$String* result3625;
    org$pandalanguage$pandac$FieldDecl* lastField3627;
    panda$core$String* alloca3650;
    panda$core$String* result3669;
    panda$core$String* callRef3684;
    panda$core$String* result3694;
    panda$core$String* classPtr3707;
    panda$core$String* className3709;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3734;
    panda$core$Bit $tmp3560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3560.value);
    panda$core$Int64 $tmp3561 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3562 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3561, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3562.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3564 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3563 = $tmp3564;
    PANDA_ASSERT(((panda$core$Bit) { cl3563 != NULL }).value);
    panda$core$String* $tmp3566 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3565 = $tmp3566;
    panda$core$Bit $tmp3567 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3567.value) {
    {
        panda$core$Int64 $tmp3568 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3568, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3569.value);
        panda$core$Object* $tmp3570 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3571 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3570)->children);
        panda$core$Bit $tmp3572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3571, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3572.value);
        panda$core$Object* $tmp3574 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3575 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3574)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3576 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3575), p_out);
        value3573 = $tmp3576;
        panda$core$Object* $tmp3577 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3578 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3577)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3578)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3579.value) {
        {
            panda$core$String* $tmp3581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3580, value3573);
            panda$core$String* $tmp3583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3581, &$s3582);
            return $tmp3583;
        }
        }
        panda$core$String* $tmp3585 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3584 = $tmp3585;
        panda$core$Int64 $tmp3587 = panda$collections$Array$get_count$R$panda$core$Int64(cl3563->fields);
        panda$core$Int64 $tmp3588 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3587, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3563->fields, $tmp3588);
        lastField3586 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3589);
        panda$core$Bit $tmp3590 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3586->annotations);
        panda$core$Bit $tmp3591 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3590);
        PANDA_ASSERT($tmp3591.value);
        panda$core$String* $tmp3592 = panda$core$String$convert$R$panda$core$String(result3584);
        panda$core$String* $tmp3594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3592, &$s3593);
        panda$core$String* $tmp3595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3594, t3565);
        panda$core$String* $tmp3597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3595, &$s3596);
        panda$core$String* $tmp3598 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3586->type);
        panda$core$String* $tmp3599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3597, $tmp3598);
        panda$core$String* $tmp3601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3599, &$s3600);
        panda$core$String* $tmp3602 = panda$core$String$convert$R$panda$core$String(value3573);
        panda$core$String* $tmp3604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3602, &$s3603);
        panda$core$String* $tmp3605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3601, $tmp3604);
        (($fn3606) p_out->$class->vtable[19])(p_out, $tmp3605);
        return result3584;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3607 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3608 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3607);
    if ($tmp3608.value) {
    {
        panda$core$Int64 $tmp3609 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3609, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3610.value);
        panda$core$Object* $tmp3611 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3612 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3611)->children);
        panda$core$Bit $tmp3613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3612, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3613.value);
        panda$core$Object* $tmp3615 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3616 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3615)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3617 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3616), p_out);
        value3614 = $tmp3617;
        panda$core$Object* $tmp3618 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3619 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3618)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3619)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3620.value) {
        {
            panda$core$String* $tmp3622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3621, value3614);
            panda$core$String* $tmp3624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3622, &$s3623);
            return $tmp3624;
        }
        }
        panda$core$String* $tmp3626 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3625 = $tmp3626;
        panda$core$Int64 $tmp3628 = panda$collections$Array$get_count$R$panda$core$Int64(cl3563->fields);
        panda$core$Int64 $tmp3629 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3628, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3630 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3563->fields, $tmp3629);
        lastField3627 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3630);
        panda$core$Bit $tmp3631 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3627->annotations);
        panda$core$Bit $tmp3632 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3631);
        PANDA_ASSERT($tmp3632.value);
        panda$core$String* $tmp3633 = panda$core$String$convert$R$panda$core$String(result3625);
        panda$core$String* $tmp3635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3633, &$s3634);
        panda$core$String* $tmp3636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3635, t3565);
        panda$core$String* $tmp3638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3636, &$s3637);
        panda$core$String* $tmp3639 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3627->type);
        panda$core$String* $tmp3640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3638, $tmp3639);
        panda$core$String* $tmp3642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3640, &$s3641);
        panda$core$String* $tmp3643 = panda$core$String$convert$R$panda$core$String(value3614);
        panda$core$String* $tmp3645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3643, &$s3644);
        panda$core$String* $tmp3646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3642, $tmp3645);
        (($fn3647) p_out->$class->vtable[19])(p_out, $tmp3646);
        return result3625;
    }
    }
    panda$core$Bit $tmp3648 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3563);
    if ($tmp3648.value) {
    {
        panda$core$Int64 $tmp3649 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3649;
        panda$core$String* $tmp3652 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3651, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3652, &$s3653);
        alloca3650 = $tmp3654;
        panda$core$String* $tmp3655 = panda$core$String$convert$R$panda$core$String(alloca3650);
        panda$core$String* $tmp3657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3655, &$s3656);
        panda$core$String* $tmp3658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3657, t3565);
        panda$core$String* $tmp3660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3658, &$s3659);
        (($fn3661) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3660);
        panda$core$Object* $tmp3662 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3663 = panda$core$String$convert$R$panda$core$String(t3565);
        panda$core$String* $tmp3665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3663, &$s3664);
        panda$core$String* $tmp3666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3665, alloca3650);
        panda$core$String* $tmp3668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3666, &$s3667);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3662), $tmp3668, p_out);
        panda$core$String* $tmp3670 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3669 = $tmp3670;
        panda$core$String* $tmp3671 = panda$core$String$convert$R$panda$core$String(result3669);
        panda$core$String* $tmp3673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3671, &$s3672);
        panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3673, t3565);
        panda$core$String* $tmp3676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3674, &$s3675);
        panda$core$String* $tmp3677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3676, t3565);
        panda$core$String* $tmp3679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3677, &$s3678);
        panda$core$String* $tmp3680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3679, alloca3650);
        panda$core$String* $tmp3682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3680, &$s3681);
        (($fn3683) p_out->$class->vtable[19])(p_out, $tmp3682);
        return result3669;
    }
    }
    panda$core$String* $tmp3685 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3684 = $tmp3685;
    panda$core$String* $tmp3686 = panda$core$String$convert$R$panda$core$String(callRef3684);
    panda$core$String* $tmp3688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3686, &$s3687);
    panda$core$Int64 $tmp3689 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3690 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3688, ((panda$core$Object*) wrap_panda$core$Int64($tmp3689)));
    panda$core$String* $tmp3692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3690, &$s3691);
    (($fn3693) p_out->$class->vtable[19])(p_out, $tmp3692);
    panda$core$String* $tmp3695 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3694 = $tmp3695;
    panda$core$String* $tmp3696 = panda$core$String$convert$R$panda$core$String(result3694);
    panda$core$String* $tmp3698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3696, &$s3697);
    panda$core$String* $tmp3699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3698, callRef3684);
    panda$core$String* $tmp3701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3699, &$s3700);
    panda$core$String* $tmp3702 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3701, $tmp3702);
    panda$core$String* $tmp3705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3703, &$s3704);
    (($fn3706) p_out->$class->vtable[19])(p_out, $tmp3705);
    panda$core$String* $tmp3708 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3707 = $tmp3708;
    panda$core$Bit $tmp3711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3710 = $tmp3711.value;
    if (!$tmp3710) goto $l3712;
    panda$core$Bit $tmp3713 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3563);
    panda$core$Bit $tmp3714 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3713);
    $tmp3710 = $tmp3714.value;
    $l3712:;
    panda$core$Bit $tmp3715 = { $tmp3710 };
    if ($tmp3715.value) {
    {
        panda$core$Object* $tmp3716 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3717 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3716));
        className3709 = $tmp3717;
    }
    }
    else {
    {
        panda$core$String* $tmp3718 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3709 = $tmp3718;
    }
    }
    panda$core$String* $tmp3719 = panda$core$String$convert$R$panda$core$String(classPtr3707);
    panda$core$String* $tmp3721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3719, &$s3720);
    panda$core$String* $tmp3722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3721, className3709);
    panda$core$String* $tmp3724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3722, &$s3723);
    panda$core$String* $tmp3725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3724, t3565);
    panda$core$String* $tmp3727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3725, &$s3726);
    panda$core$String* $tmp3728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3727, result3694);
    panda$core$String* $tmp3730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3728, &$s3729);
    panda$core$String* $tmp3732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3730, &$s3731);
    (($fn3733) p_out->$class->vtable[19])(p_out, $tmp3732);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3735 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3563);
    cc3734 = $tmp3735;
    panda$core$String* $tmp3737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3736, cc3734->type);
    panda$core$String* $tmp3739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3737, &$s3738);
    panda$core$String* $tmp3740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3739, cc3734->name);
    panda$core$String* $tmp3742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3740, &$s3741);
    panda$core$String* $tmp3744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3743, classPtr3707);
    panda$core$String* $tmp3746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3744, &$s3745);
    panda$core$String* $tmp3747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3742, $tmp3746);
    (($fn3748) p_out->$class->vtable[19])(p_out, $tmp3747);
    panda$core$Object* $tmp3749 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3750 = panda$core$String$convert$R$panda$core$String(t3565);
    panda$core$String* $tmp3752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3750, &$s3751);
    panda$core$String* $tmp3753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3752, result3694);
    panda$core$String* $tmp3755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3753, &$s3754);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3749), $tmp3755, p_out);
    return result3694;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3756 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3756;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3758 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3757, $tmp3758);
    return $tmp3759;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$OutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3760;
    }
    }
    return &$s3761;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$OutputStream* p_out) {
    panda$core$String* result3764;
    panda$core$String* t3766;
    panda$core$Bit $tmp3762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3762.value) {
    {
        panda$core$String* $tmp3763 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3763;
    }
    }
    panda$core$String* $tmp3765 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3764 = $tmp3765;
    panda$core$String* $tmp3767 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3766 = $tmp3767;
    panda$core$String* $tmp3768 = panda$core$String$convert$R$panda$core$String(result3764);
    panda$core$String* $tmp3770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3768, &$s3769);
    panda$core$String* $tmp3771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3770, t3766);
    panda$core$String* $tmp3773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3771, &$s3772);
    panda$core$String* $tmp3774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3773, t3766);
    panda$core$String* $tmp3776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3774, &$s3775);
    panda$core$String* $tmp3777 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3776, $tmp3777);
    panda$core$String* $tmp3780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3778, &$s3779);
    (($fn3781) p_out->$class->vtable[19])(p_out, $tmp3780);
    return result3764;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* chars3783;
    panda$core$String* charsType3788;
    panda$core$String* separator3805;
    panda$collections$Iterator* c$Iter3807;
    panda$core$Char8 c3820;
    panda$core$String* result3837;
    org$pandalanguage$pandac$ClassDecl* string3842;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3845;
    panda$core$Int64 $tmp3782 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3782;
    panda$core$String* $tmp3785 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3784, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3785, &$s3786);
    chars3783 = $tmp3787;
    panda$collections$ListView* $tmp3790 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3791 = ((panda$collections$CollectionView*) $tmp3790)->$class->itable;
    while ($tmp3791->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3791 = $tmp3791->next;
    }
    $fn3793 $tmp3792 = $tmp3791->methods[0];
    panda$core$Int64 $tmp3794 = $tmp3792(((panda$collections$CollectionView*) $tmp3790));
    panda$core$String* $tmp3795 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3789, ((panda$core$Object*) wrap_panda$core$Int64($tmp3794)));
    panda$core$String* $tmp3797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3795, &$s3796);
    charsType3788 = $tmp3797;
    panda$core$String* $tmp3798 = panda$core$String$convert$R$panda$core$String(chars3783);
    panda$core$String* $tmp3800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3798, &$s3799);
    panda$core$String* $tmp3801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3800, charsType3788);
    panda$core$String* $tmp3803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3801, &$s3802);
    (($fn3804) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3803);
    separator3805 = &$s3806;
    {
        panda$collections$ListView* $tmp3808 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp3809 = ((panda$collections$Iterable*) $tmp3808)->$class->itable;
        while ($tmp3809->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3809 = $tmp3809->next;
        }
        $fn3811 $tmp3810 = $tmp3809->methods[0];
        panda$collections$Iterator* $tmp3812 = $tmp3810(((panda$collections$Iterable*) $tmp3808));
        c$Iter3807 = $tmp3812;
        $l3813:;
        ITable* $tmp3815 = c$Iter3807->$class->itable;
        while ($tmp3815->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3815 = $tmp3815->next;
        }
        $fn3817 $tmp3816 = $tmp3815->methods[0];
        panda$core$Bit $tmp3818 = $tmp3816(c$Iter3807);
        panda$core$Bit $tmp3819 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3818);
        if (!$tmp3819.value) goto $l3814;
        {
            ITable* $tmp3821 = c$Iter3807->$class->itable;
            while ($tmp3821->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3821 = $tmp3821->next;
            }
            $fn3823 $tmp3822 = $tmp3821->methods[1];
            panda$core$Object* $tmp3824 = $tmp3822(c$Iter3807);
            c3820 = ((panda$core$Char8$wrapper*) $tmp3824)->value;
            panda$core$String* $tmp3825 = panda$core$String$convert$R$panda$core$String(separator3805);
            panda$core$String* $tmp3827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3825, &$s3826);
            panda$core$Int8 $tmp3828 = panda$core$Char8$convert$R$panda$core$Int8(c3820);
            panda$core$String* $tmp3829 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3827, ((panda$core$Object*) wrap_panda$core$Int8($tmp3828)));
            panda$core$String* $tmp3831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3829, &$s3830);
            (($fn3832) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3831);
            separator3805 = &$s3833;
        }
        goto $l3813;
        $l3814:;
    }
    (($fn3835) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s3834);
    panda$core$Int64 $tmp3836 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3836;
    panda$core$String* $tmp3839 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3838, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3839, &$s3840);
    result3837 = $tmp3841;
    org$pandalanguage$pandac$Type* $tmp3843 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3844 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp3843);
    string3842 = $tmp3844;
    PANDA_ASSERT(((panda$core$Bit) { string3842 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3846 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string3842);
    cc3845 = $tmp3846;
    panda$core$String* $tmp3847 = panda$core$String$convert$R$panda$core$String(result3837);
    panda$core$String* $tmp3849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3847, &$s3848);
    panda$core$String* $tmp3851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3850, cc3845->type);
    panda$core$String* $tmp3853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3851, &$s3852);
    panda$core$String* $tmp3854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3853, cc3845->name);
    panda$core$String* $tmp3856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3854, &$s3855);
    panda$core$String* $tmp3857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3849, $tmp3856);
    panda$core$String* $tmp3859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3857, &$s3858);
    panda$core$String* $tmp3861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3860, charsType3788);
    panda$core$String* $tmp3863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3861, &$s3862);
    panda$core$String* $tmp3864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3863, chars3783);
    panda$core$String* $tmp3866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3864, &$s3865);
    panda$core$String* $tmp3867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3859, $tmp3866);
    panda$collections$ListView* $tmp3869 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3870 = ((panda$collections$CollectionView*) $tmp3869)->$class->itable;
    while ($tmp3870->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3870 = $tmp3870->next;
    }
    $fn3872 $tmp3871 = $tmp3870->methods[0];
    panda$core$Int64 $tmp3873 = $tmp3871(((panda$collections$CollectionView*) $tmp3869));
    panda$core$String* $tmp3874 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3868, ((panda$core$Object*) wrap_panda$core$Int64($tmp3873)));
    panda$core$String* $tmp3876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3874, &$s3875);
    panda$core$String* $tmp3877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3867, $tmp3876);
    panda$core$Int64 $tmp3879 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$String* $tmp3880 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3878, ((panda$core$Object*) wrap_panda$core$Int64($tmp3879)));
    panda$core$String* $tmp3882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3880, &$s3881);
    panda$core$String* $tmp3883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3877, $tmp3882);
    (($fn3884) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp3883);
    return result3837;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$Int64 $tmp3885 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp3886 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3885, ((panda$core$Int64) { 0 }));
    if ($tmp3886.value) {
    {
        panda$core$Object* $tmp3887 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp3887)->selfRef;
    }
    }
    return &$s3888;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* result3889;
    panda$core$String* $tmp3890 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3889 = $tmp3890;
    panda$core$String* $tmp3891 = panda$core$String$convert$R$panda$core$String(result3889);
    panda$core$String* $tmp3893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3891, &$s3892);
    org$pandalanguage$pandac$Type* $tmp3894 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
    panda$core$String* $tmp3895 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3894);
    panda$core$String* $tmp3896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3893, $tmp3895);
    panda$core$String* $tmp3898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3896, &$s3897);
    panda$core$String* $tmp3899 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp3900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3898, $tmp3899);
    (($fn3901) p_out->$class->vtable[19])(p_out, $tmp3900);
    return result3889;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value3905;
    org$pandalanguage$pandac$ClassDecl* cl3908;
    panda$core$String* resultValue3911;
    panda$core$String* field3916;
    panda$core$String* result3941;
    panda$core$Bit $tmp3902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp3902.value);
    panda$core$Int64 $tmp3903 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3903, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3904.value);
    panda$core$Object* $tmp3906 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3907 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3906), p_out);
    value3905 = $tmp3907;
    panda$core$Object* $tmp3909 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3910 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3909)->type);
    cl3908 = $tmp3910;
    panda$core$Bit $tmp3912 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3908);
    if ($tmp3912.value) {
    {
        panda$core$Object* $tmp3913 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3914 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3913)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3914.value) {
        {
            return &$s3915;
        }
        }
        panda$core$String* $tmp3917 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field3916 = $tmp3917;
        panda$core$String* $tmp3918 = panda$core$String$convert$R$panda$core$String(field3916);
        panda$core$String* $tmp3920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3918, &$s3919);
        panda$core$String* $tmp3921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3920, value3905);
        panda$core$String* $tmp3923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3921, &$s3922);
        (($fn3924) p_out->$class->vtable[19])(p_out, $tmp3923);
        panda$core$String* $tmp3925 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3911 = $tmp3925;
        panda$core$String* $tmp3926 = panda$core$String$convert$R$panda$core$String(resultValue3911);
        panda$core$String* $tmp3928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3926, &$s3927);
        panda$core$String* $tmp3929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3928, field3916);
        panda$core$String* $tmp3931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3929, &$s3930);
        (($fn3932) p_out->$class->vtable[19])(p_out, $tmp3931);
    }
    }
    else {
    {
        panda$core$String* $tmp3933 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3911 = $tmp3933;
        panda$core$String* $tmp3934 = panda$core$String$convert$R$panda$core$String(resultValue3911);
        panda$core$String* $tmp3936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3934, &$s3935);
        panda$core$String* $tmp3937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3936, value3905);
        panda$core$String* $tmp3939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3937, &$s3938);
        (($fn3940) p_out->$class->vtable[19])(p_out, $tmp3939);
    }
    }
    panda$core$String* $tmp3942 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3941 = $tmp3942;
    panda$core$String* $tmp3943 = panda$core$String$convert$R$panda$core$String(result3941);
    panda$core$String* $tmp3945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3943, &$s3944);
    panda$core$String* $tmp3946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3945, resultValue3911);
    panda$core$String* $tmp3948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3946, &$s3947);
    (($fn3949) p_out->$class->vtable[19])(p_out, $tmp3948);
    return result3941;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value3953;
    org$pandalanguage$pandac$ClassDecl* cl3956;
    panda$core$String* resultValue3959;
    panda$core$String* result3980;
    panda$core$Bit $tmp3950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp3950.value);
    panda$core$Int64 $tmp3951 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3951, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3952.value);
    panda$core$Object* $tmp3954 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3955 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3954), p_out);
    value3953 = $tmp3955;
    panda$core$Object* $tmp3957 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3958 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3957)->type);
    cl3956 = $tmp3958;
    panda$core$Bit $tmp3960 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3956);
    if ($tmp3960.value) {
    {
        panda$core$Object* $tmp3961 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3962 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3961)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3962.value) {
        {
            return &$s3963;
        }
        }
        panda$core$String* $tmp3964 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3959 = $tmp3964;
        panda$core$String* $tmp3965 = panda$core$String$convert$R$panda$core$String(resultValue3959);
        panda$core$String* $tmp3967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3965, &$s3966);
        panda$core$String* $tmp3968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3967, value3953);
        panda$core$String* $tmp3970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3968, &$s3969);
        (($fn3971) p_out->$class->vtable[19])(p_out, $tmp3970);
    }
    }
    else {
    {
        panda$core$String* $tmp3972 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3959 = $tmp3972;
        panda$core$String* $tmp3973 = panda$core$String$convert$R$panda$core$String(resultValue3959);
        panda$core$String* $tmp3975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3973, &$s3974);
        panda$core$String* $tmp3976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3975, value3953);
        panda$core$String* $tmp3978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3976, &$s3977);
        (($fn3979) p_out->$class->vtable[19])(p_out, $tmp3978);
    }
    }
    panda$core$String* $tmp3981 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3980 = $tmp3981;
    panda$core$String* $tmp3982 = panda$core$String$convert$R$panda$core$String(result3980);
    panda$core$String* $tmp3984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3982, &$s3983);
    panda$core$String* $tmp3985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3984, resultValue3959);
    panda$core$String* $tmp3987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3985, &$s3986);
    (($fn3988) p_out->$class->vtable[19])(p_out, $tmp3987);
    return result3980;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3990;
    panda$core$Bit $tmp3989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp3989.value);
    panda$core$Object* $tmp3991 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3992 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp3991));
    cl3990 = $tmp3992;
    PANDA_ASSERT(((panda$core$Bit) { cl3990 != NULL }).value);
    panda$core$Bit $tmp3993 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3990);
    if ($tmp3993.value) {
    {
        panda$core$Object* $tmp3995 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3996 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3995));
        panda$core$String* $tmp3997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3994, $tmp3996);
        panda$core$String* $tmp3999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3997, &$s3998);
        return $tmp3999;
    }
    }
    else {
    {
        return &$s4000;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* base4004;
    panda$core$String* result4007;
    panda$core$Bit $tmp4001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp4001.value);
    panda$core$Int64 $tmp4002 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp4003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4002, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4003.value);
    panda$core$Object* $tmp4005 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4006 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4005), p_out);
    base4004 = $tmp4006;
    panda$core$String* $tmp4008 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4007 = $tmp4008;
    panda$core$Int64 $tmp4009 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp4009.value) {
        case 52:
        {
            panda$core$String* $tmp4010 = panda$core$String$convert$R$panda$core$String(result4007);
            panda$core$String* $tmp4012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4010, &$s4011);
            panda$core$String* $tmp4013 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4012, $tmp4013);
            panda$core$String* $tmp4016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4014, &$s4015);
            panda$core$String* $tmp4017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4016, base4004);
            panda$core$String* $tmp4019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4017, &$s4018);
            (($fn4020) p_out->$class->vtable[19])(p_out, $tmp4019);
            return result4007;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp4021 = panda$core$String$convert$R$panda$core$String(result4007);
            panda$core$String* $tmp4023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4021, &$s4022);
            panda$core$String* $tmp4024 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4023, $tmp4024);
            panda$core$String* $tmp4027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4025, &$s4026);
            panda$core$String* $tmp4028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4027, base4004);
            panda$core$String* $tmp4030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4028, &$s4029);
            (($fn4031) p_out->$class->vtable[19])(p_out, $tmp4030);
            return result4007;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* value4044;
    panda$core$String* result4047;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4032 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4032;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4033 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4033;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4034 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4034;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4035 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4035;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4036 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4036;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4037 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4037;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4038 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4038;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4039 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4039;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4040 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4040;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4041 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4041;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4042 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4042;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4043 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4043;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4045 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4046 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4045), p_out);
            value4044 = $tmp4046;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4044));
            return value4044;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4048 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4047 = ((panda$core$String*) $tmp4048);
            PANDA_ASSERT(((panda$core$Bit) { result4047 != NULL }).value);
            return result4047;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4049 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4049;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4050 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4050;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4051 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4051;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4052 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4052;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp4053 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4054 = panda$core$String$convert$R$panda$core$String($tmp4053);
    panda$core$String* $tmp4056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4054, &$s4055);
    panda$core$String* $tmp4057 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4056, $tmp4057);
    panda$core$String* $tmp4060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4058, &$s4059);
    return $tmp4060;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$OutputStream* p_out) {
    panda$collections$Iterator* s$Iter4062;
    org$pandalanguage$pandac$IRNode* s4074;
    panda$core$Bit $tmp4061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4061.value);
    {
        ITable* $tmp4063 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4063->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4063 = $tmp4063->next;
        }
        $fn4065 $tmp4064 = $tmp4063->methods[0];
        panda$collections$Iterator* $tmp4066 = $tmp4064(((panda$collections$Iterable*) p_block->children));
        s$Iter4062 = $tmp4066;
        $l4067:;
        ITable* $tmp4069 = s$Iter4062->$class->itable;
        while ($tmp4069->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4069 = $tmp4069->next;
        }
        $fn4071 $tmp4070 = $tmp4069->methods[0];
        panda$core$Bit $tmp4072 = $tmp4070(s$Iter4062);
        panda$core$Bit $tmp4073 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4072);
        if (!$tmp4073.value) goto $l4068;
        {
            ITable* $tmp4075 = s$Iter4062->$class->itable;
            while ($tmp4075->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4075 = $tmp4075->next;
            }
            $fn4077 $tmp4076 = $tmp4075->methods[1];
            panda$core$Object* $tmp4078 = $tmp4076(s$Iter4062);
            s4074 = ((org$pandalanguage$pandac$IRNode*) $tmp4078);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s4074, p_out);
        }
        goto $l4067;
        $l4068:;
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4079;
    panda$core$String* $match$1931_94080;
    panda$core$String* ptr4085;
    panda$core$String* arg4088;
    org$pandalanguage$pandac$Type* baseType4108;
    panda$core$String* base4112;
    panda$core$String* indexStruct4115;
    panda$core$String* index4118;
    panda$core$String* value4127;
    panda$core$String* ptr4131;
    panda$core$String* ptr4168;
    panda$core$String* cast4171;
    m4079 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1931_94080 = ((org$pandalanguage$pandac$Symbol*) m4079->value)->name;
        panda$core$Bit $tmp4082 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1931_94080, &$s4081);
        if ($tmp4082.value) {
        {
            panda$core$Int64 $tmp4083 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4083, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4084.value);
            panda$core$Object* $tmp4086 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4087 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4086), p_out);
            ptr4085 = $tmp4087;
            panda$core$Object* $tmp4089 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4090 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4089));
            panda$core$String* $tmp4091 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4090, p_out);
            arg4088 = $tmp4091;
            panda$core$String* $tmp4093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4092, arg4088);
            panda$core$String* $tmp4095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4093, &$s4094);
            panda$core$String* $tmp4096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4095, ptr4085);
            panda$core$String* $tmp4098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4096, &$s4097);
            (($fn4099) p_out->$class->vtable[19])(p_out, $tmp4098);
        }
        }
        else {
        panda$core$Bit $tmp4101 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1931_94080, &$s4100);
        if ($tmp4101.value) {
        {
            panda$core$Int64 $tmp4102 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4102, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4103.value);
            panda$core$Object* $tmp4104 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4105 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4104));
            panda$core$Int64 $tmp4106 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4105->type->subtypes);
            panda$core$Bit $tmp4107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4106, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4107.value);
            panda$core$Object* $tmp4109 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4110 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4109));
            panda$core$Object* $tmp4111 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4110->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4108 = ((org$pandalanguage$pandac$Type*) $tmp4111);
            panda$core$Object* $tmp4113 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4114 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4113), p_out);
            base4112 = $tmp4114;
            panda$core$Object* $tmp4116 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4117 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4116), p_out);
            indexStruct4115 = $tmp4117;
            panda$core$String* $tmp4119 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4118 = $tmp4119;
            panda$core$String* $tmp4120 = panda$core$String$convert$R$panda$core$String(index4118);
            panda$core$String* $tmp4122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4120, &$s4121);
            panda$core$String* $tmp4123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4122, indexStruct4115);
            panda$core$String* $tmp4125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4123, &$s4124);
            (($fn4126) p_out->$class->vtable[19])(p_out, $tmp4125);
            panda$core$Object* $tmp4128 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4129 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4128));
            panda$core$String* $tmp4130 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4129, p_out);
            value4127 = $tmp4130;
            panda$core$String* $tmp4132 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4131 = $tmp4132;
            panda$core$String* $tmp4133 = panda$core$String$convert$R$panda$core$String(ptr4131);
            panda$core$String* $tmp4135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4133, &$s4134);
            panda$core$String* $tmp4136 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4108);
            panda$core$String* $tmp4137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4135, $tmp4136);
            panda$core$String* $tmp4139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4137, &$s4138);
            panda$core$String* $tmp4140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4139, base4112);
            panda$core$String* $tmp4142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4140, &$s4141);
            panda$core$String* $tmp4144 = panda$core$String$convert$R$panda$core$String(&$s4143);
            panda$core$String* $tmp4146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4144, &$s4145);
            panda$core$String* $tmp4147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4146, index4118);
            panda$core$String* $tmp4149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4147, &$s4148);
            panda$core$String* $tmp4150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4142, $tmp4149);
            (($fn4151) p_out->$class->vtable[19])(p_out, $tmp4150);
            panda$core$String* $tmp4153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4152, value4127);
            panda$core$String* $tmp4155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4153, &$s4154);
            panda$core$String* $tmp4156 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4108);
            panda$core$String* $tmp4157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4155, $tmp4156);
            panda$core$String* $tmp4159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4157, &$s4158);
            panda$core$String* $tmp4160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4159, ptr4131);
            panda$core$String* $tmp4162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4160, &$s4161);
            (($fn4163) p_out->$class->vtable[19])(p_out, $tmp4162);
        }
        }
        else {
        panda$core$Bit $tmp4165 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1931_94080, &$s4164);
        if ($tmp4165.value) {
        {
            panda$core$Int64 $tmp4166 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4166, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4167.value);
            panda$core$Object* $tmp4169 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4170 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4169), p_out);
            ptr4168 = $tmp4170;
            panda$core$String* $tmp4172 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4171 = $tmp4172;
            panda$core$String* $tmp4173 = panda$core$String$convert$R$panda$core$String(cast4171);
            panda$core$String* $tmp4175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4173, &$s4174);
            panda$core$String* $tmp4176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4175, ptr4168);
            panda$core$String* $tmp4178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4176, &$s4177);
            (($fn4179) p_out->$class->vtable[19])(p_out, $tmp4178);
            panda$core$String* $tmp4181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4180, cast4171);
            panda$core$String* $tmp4183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4181, &$s4182);
            (($fn4184) p_out->$class->vtable[19])(p_out, $tmp4183);
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
    org$pandalanguage$pandac$MethodDecl* m4186;
    org$pandalanguage$pandac$Type* actualMethodType4189;
    panda$core$String* actualResultType4190;
    panda$core$Bit isSuper4191;
    panda$collections$Array* args4211;
    panda$core$Int64 offset4214;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4219;
    panda$core$String* arg4234;
    panda$core$String* refTarget4266;
    panda$core$String* methodRef4270;
    panda$core$String* separator4272;
    panda$core$String* indirectVar4276;
    panda$core$String* resultType4279;
    panda$collections$Iterator* a$Iter4321;
    panda$core$String* a4333;
    panda$core$Bit $tmp4185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4185.value);
    m4186 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4188 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4186->owner)->name, &$s4187);
    if ($tmp4188.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4186->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4186);
    }
    }
    panda$core$Int64 $tmp4193 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4194 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4193, ((panda$core$Int64) { 1 }));
    bool $tmp4192 = $tmp4194.value;
    if (!$tmp4192) goto $l4195;
    panda$core$Object* $tmp4196 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4196)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4192 = $tmp4197.value;
    $l4195:;
    panda$core$Bit $tmp4198 = { $tmp4192 };
    isSuper4191 = $tmp4198;
    panda$core$Bit $tmp4200 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4191);
    bool $tmp4199 = $tmp4200.value;
    if (!$tmp4199) goto $l4201;
    panda$core$Bit $tmp4202 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4186);
    $tmp4199 = $tmp4202.value;
    $l4201:;
    panda$core$Bit $tmp4203 = { $tmp4199 };
    if ($tmp4203.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4204 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4186);
        actualMethodType4189 = $tmp4204;
        panda$core$Int64 $tmp4205 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4189->subtypes);
        panda$core$Int64 $tmp4206 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4205, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4207 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4189->subtypes, $tmp4206);
        panda$core$String* $tmp4208 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4207));
        actualResultType4190 = $tmp4208;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4209 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4186);
        actualMethodType4189 = $tmp4209;
        panda$core$String* $tmp4210 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4190 = $tmp4210;
    }
    }
    panda$collections$Array* $tmp4212 = (panda$collections$Array*) malloc(40);
    $tmp4212->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4212->refCount.value = 1;
    panda$collections$Array$init($tmp4212);
    args4211 = $tmp4212;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4211, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4215 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4216 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4189->subtypes);
    panda$core$Int64 $tmp4217 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4215, $tmp4216);
    panda$core$Int64 $tmp4218 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4217, ((panda$core$Int64) { 1 }));
    offset4214 = $tmp4218;
    panda$core$Int64 $tmp4220 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4219, ((panda$core$Int64) { 0 }), $tmp4220, ((panda$core$Bit) { false }));
    int64_t $tmp4222 = $tmp4219.min.value;
    panda$core$Int64 i4221 = { $tmp4222 };
    int64_t $tmp4224 = $tmp4219.max.value;
    bool $tmp4225 = $tmp4219.inclusive.value;
    if ($tmp4225) goto $l4232; else goto $l4233;
    $l4232:;
    if ($tmp4222 <= $tmp4224) goto $l4226; else goto $l4228;
    $l4233:;
    if ($tmp4222 < $tmp4224) goto $l4226; else goto $l4228;
    $l4226:;
    {
        panda$core$Object* $tmp4235 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4221);
        panda$core$String* $tmp4236 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4235), p_out);
        arg4234 = $tmp4236;
        panda$core$Bit $tmp4238 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4221, offset4214);
        bool $tmp4237 = $tmp4238.value;
        if (!$tmp4237) goto $l4239;
        panda$core$Int64 $tmp4240 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4221, offset4214);
        panda$core$Object* $tmp4241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4189->subtypes, $tmp4240);
        panda$core$Object* $tmp4242 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4221);
        panda$core$Bit $tmp4243 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4241), ((org$pandalanguage$pandac$IRNode*) $tmp4242)->type);
        $tmp4237 = $tmp4243.value;
        $l4239:;
        panda$core$Bit $tmp4244 = { $tmp4237 };
        if ($tmp4244.value) {
        {
            panda$core$Int64 $tmp4245 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4221, offset4214);
            panda$core$Object* $tmp4246 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4189->subtypes, $tmp4245);
            panda$core$String* $tmp4247 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4246));
            panda$core$String* $tmp4249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4247, &$s4248);
            panda$core$Object* $tmp4250 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4221);
            panda$core$Int64 $tmp4251 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4221, offset4214);
            panda$core$Object* $tmp4252 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4189->subtypes, $tmp4251);
            panda$core$String* $tmp4253 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg4234, ((org$pandalanguage$pandac$IRNode*) $tmp4250)->type, ((org$pandalanguage$pandac$Type*) $tmp4252), p_out);
            panda$core$String* $tmp4254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4249, $tmp4253);
            arg4234 = $tmp4254;
        }
        }
        else {
        {
            panda$core$Object* $tmp4255 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4221);
            panda$core$String* $tmp4256 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4255)->type);
            panda$core$String* $tmp4258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4256, &$s4257);
            panda$core$String* $tmp4259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4258, arg4234);
            arg4234 = $tmp4259;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4211, ((panda$core$Object*) arg4234));
    }
    $l4229:;
    int64_t $tmp4261 = $tmp4224 - i4221.value;
    if ($tmp4225) goto $l4262; else goto $l4263;
    $l4262:;
    if ($tmp4261 >= 1) goto $l4260; else goto $l4228;
    $l4263:;
    if ($tmp4261 > 1) goto $l4260; else goto $l4228;
    $l4260:;
    i4221.value += 1;
    goto $l4226;
    $l4228:;
    panda$core$Int64 $tmp4267 = panda$collections$Array$get_count$R$panda$core$Int64(args4211);
    panda$core$Bit $tmp4268 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4267, ((panda$core$Int64) { 0 }));
    if ($tmp4268.value) {
    {
        panda$core$Object* $tmp4269 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4211, ((panda$core$Int64) { 0 }));
        refTarget4266 = ((panda$core$String*) $tmp4269);
    }
    }
    else {
    {
        refTarget4266 = NULL;
    }
    }
    panda$core$String* $tmp4271 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, refTarget4266, m4186, isSuper4191, p_out);
    methodRef4270 = $tmp4271;
    separator4272 = &$s4273;
    panda$core$Bit $tmp4274 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4186);
    if ($tmp4274.value) {
    {
        panda$core$Int64 $tmp4275 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4275;
        panda$core$String* $tmp4278 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4277, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4276 = $tmp4278;
        panda$core$String* $tmp4280 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4279 = $tmp4280;
        panda$core$String* $tmp4281 = panda$core$String$convert$R$panda$core$String(indirectVar4276);
        panda$core$String* $tmp4283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4281, &$s4282);
        panda$core$String* $tmp4284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4283, resultType4279);
        panda$core$String* $tmp4286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4284, &$s4285);
        (($fn4287) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4286);
        panda$core$String* $tmp4289 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4186);
        panda$core$String* $tmp4290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4288, $tmp4289);
        panda$core$String* $tmp4292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4290, &$s4291);
        panda$core$String* $tmp4293 = panda$core$String$convert$R$panda$core$String(methodRef4270);
        panda$core$String* $tmp4295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4293, &$s4294);
        panda$core$String* $tmp4296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4295, resultType4279);
        panda$core$String* $tmp4298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4296, &$s4297);
        panda$core$String* $tmp4299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4298, indirectVar4276);
        panda$core$String* $tmp4301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4299, &$s4300);
        panda$core$String* $tmp4302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4292, $tmp4301);
        (($fn4303) p_out->$class->vtable[16])(p_out, $tmp4302);
        separator4272 = &$s4304;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4305 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4306 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4305);
        if ($tmp4306.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4308 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4186);
        panda$core$String* $tmp4309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4307, $tmp4308);
        panda$core$String* $tmp4311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4309, &$s4310);
        panda$core$String* $tmp4312 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4311, $tmp4312);
        panda$core$String* $tmp4315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4313, &$s4314);
        panda$core$String* $tmp4316 = panda$core$String$convert$R$panda$core$String(methodRef4270);
        panda$core$String* $tmp4318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4316, &$s4317);
        panda$core$String* $tmp4319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4315, $tmp4318);
        (($fn4320) p_out->$class->vtable[16])(p_out, $tmp4319);
    }
    }
    {
        ITable* $tmp4322 = ((panda$collections$Iterable*) args4211)->$class->itable;
        while ($tmp4322->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4322 = $tmp4322->next;
        }
        $fn4324 $tmp4323 = $tmp4322->methods[0];
        panda$collections$Iterator* $tmp4325 = $tmp4323(((panda$collections$Iterable*) args4211));
        a$Iter4321 = $tmp4325;
        $l4326:;
        ITable* $tmp4328 = a$Iter4321->$class->itable;
        while ($tmp4328->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4328 = $tmp4328->next;
        }
        $fn4330 $tmp4329 = $tmp4328->methods[0];
        panda$core$Bit $tmp4331 = $tmp4329(a$Iter4321);
        panda$core$Bit $tmp4332 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4331);
        if (!$tmp4332.value) goto $l4327;
        {
            ITable* $tmp4334 = a$Iter4321->$class->itable;
            while ($tmp4334->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4334 = $tmp4334->next;
            }
            $fn4336 $tmp4335 = $tmp4334->methods[1];
            panda$core$Object* $tmp4337 = $tmp4335(a$Iter4321);
            a4333 = ((panda$core$String*) $tmp4337);
            (($fn4338) p_out->$class->vtable[16])(p_out, separator4272);
            (($fn4339) p_out->$class->vtable[16])(p_out, a4333);
            separator4272 = &$s4340;
        }
        goto $l4326;
        $l4327:;
    }
    (($fn4342) p_out->$class->vtable[19])(p_out, &$s4341);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* test4354;
    panda$core$String* testBit4357;
    panda$core$String* ifTrue4366;
    panda$core$String* ifFalse4368;
    panda$core$String* end4382;
    panda$core$Bit $tmp4343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4343.value);
    panda$core$Int64 $tmp4345 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4345, ((panda$core$Int64) { 2 }));
    bool $tmp4344 = $tmp4346.value;
    if ($tmp4344) goto $l4347;
    panda$core$Int64 $tmp4348 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4348, ((panda$core$Int64) { 3 }));
    $tmp4344 = $tmp4349.value;
    $l4347:;
    panda$core$Bit $tmp4350 = { $tmp4344 };
    PANDA_ASSERT($tmp4350.value);
    panda$core$Object* $tmp4351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4352 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4353 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4351)->type, $tmp4352);
    PANDA_ASSERT($tmp4353.value);
    panda$core$Object* $tmp4355 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4356 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4355), p_out);
    test4354 = $tmp4356;
    panda$core$String* $tmp4358 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4357 = $tmp4358;
    panda$core$String* $tmp4359 = panda$core$String$convert$R$panda$core$String(testBit4357);
    panda$core$String* $tmp4361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4359, &$s4360);
    panda$core$String* $tmp4362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4361, test4354);
    panda$core$String* $tmp4364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4362, &$s4363);
    (($fn4365) p_out->$class->vtable[19])(p_out, $tmp4364);
    panda$core$String* $tmp4367 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4366 = $tmp4367;
    panda$core$String* $tmp4369 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4368 = $tmp4369;
    panda$core$String* $tmp4371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4370, testBit4357);
    panda$core$String* $tmp4373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4371, &$s4372);
    panda$core$String* $tmp4374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4373, ifTrue4366);
    panda$core$String* $tmp4376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4374, &$s4375);
    panda$core$String* $tmp4377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4376, ifFalse4368);
    panda$core$String* $tmp4379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4377, &$s4378);
    (($fn4380) p_out->$class->vtable[19])(p_out, $tmp4379);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue4366, p_out);
    panda$core$Object* $tmp4381 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4381), p_out);
    panda$core$Int64 $tmp4383 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4383, ((panda$core$Int64) { 3 }));
    if ($tmp4384.value) {
    {
        panda$core$String* $tmp4385 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4382 = $tmp4385;
    }
    }
    else {
    {
        end4382 = ifFalse4368;
    }
    }
    panda$core$Object* $tmp4386 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4387 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4386));
    panda$core$Bit $tmp4388 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4387);
    if ($tmp4388.value) {
    {
        panda$core$String* $tmp4390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4389, end4382);
        panda$core$String* $tmp4392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4390, &$s4391);
        (($fn4393) p_out->$class->vtable[19])(p_out, $tmp4392);
    }
    }
    panda$core$Int64 $tmp4394 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4394, ((panda$core$Int64) { 3 }));
    if ($tmp4395.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse4368, p_out);
        panda$core$Object* $tmp4396 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4396), p_out);
        panda$core$Object* $tmp4397 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4398 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4397));
        panda$core$Bit $tmp4399 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4398);
        if ($tmp4399.value) {
        {
            panda$core$String* $tmp4401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4400, end4382);
            panda$core$String* $tmp4403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4401, &$s4402);
            (($fn4404) p_out->$class->vtable[19])(p_out, $tmp4403);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end4382, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4408;
    panda$core$String* range4419;
    org$pandalanguage$pandac$IRNode* block4422;
    org$pandalanguage$pandac$Type* t4424;
    panda$core$String* llt4427;
    panda$core$String* indexType4429;
    org$pandalanguage$pandac$ClassDecl* cl4435;
    panda$core$String* numberType4443;
    panda$core$String* index4451;
    panda$core$String* start4460;
    panda$core$String* indexValuePtr4469;
    panda$core$String* end4500;
    panda$core$String* inclusive4509;
    panda$core$String* loopStart4518;
    panda$core$String* loopBody4520;
    panda$core$String* loopEnd4522;
    panda$core$String* loopTest4524;
    panda$core$String* forwardEntry4528;
    panda$core$String* backwardEntry4530;
    panda$core$String* signPrefix4532;
    panda$core$String* forwardEntryInclusive4544;
    panda$core$String* forwardEntryExclusive4546;
    panda$core$String* forwardEntryInclusiveTest4561;
    panda$core$String* forwardEntryExclusiveTest4591;
    panda$core$String* indexValue4621;
    panda$core$String* loopInc4643;
    panda$core$String* forwardDelta4645;
    panda$core$String* forwardInclusiveLabel4660;
    panda$core$String* forwardExclusiveLabel4662;
    panda$core$String* forwardInclusiveTest4673;
    panda$core$String* forwardExclusiveTest4696;
    panda$core$String* inc4719;
    panda$core$String* incStruct4731;
    panda$core$Bit $tmp4405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4405.value);
    panda$core$Int64 $tmp4406 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4406, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4407.value);
    panda$core$Object* $tmp4409 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4408 = ((org$pandalanguage$pandac$IRNode*) $tmp4409);
    panda$core$Object* $tmp4410 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4410)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4411.value);
    panda$core$Object* $tmp4412 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4413 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4412)->type->subtypes);
    panda$core$Bit $tmp4414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4413, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4414.value);
    panda$core$Object* $tmp4415 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4416 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4415)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4418 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4416))->name, &$s4417);
    PANDA_ASSERT($tmp4418.value);
    panda$core$Object* $tmp4420 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4421 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4420), p_out);
    range4419 = $tmp4421;
    panda$core$Object* $tmp4423 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4422 = ((org$pandalanguage$pandac$IRNode*) $tmp4423);
    panda$core$Object* $tmp4425 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4426 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4425)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4424 = ((org$pandalanguage$pandac$Type*) $tmp4426);
    panda$core$String* $tmp4428 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4424);
    llt4427 = $tmp4428;
    panda$core$Bit $tmp4430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4424->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4430.value) {
    {
        panda$core$Int64 $tmp4431 = panda$collections$Array$get_count$R$panda$core$Int64(t4424->subtypes);
        panda$core$Bit $tmp4432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4431, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4432.value);
        panda$core$Object* $tmp4433 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4424->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4434 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4433));
        indexType4429 = $tmp4434;
    }
    }
    else {
    {
        indexType4429 = llt4427;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4436 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4424);
    cl4435 = $tmp4436;
    PANDA_ASSERT(((panda$core$Bit) { cl4435 != NULL }).value);
    panda$collections$ListView* $tmp4437 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4435);
    ITable* $tmp4438 = ((panda$collections$CollectionView*) $tmp4437)->$class->itable;
    while ($tmp4438->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4438 = $tmp4438->next;
    }
    $fn4440 $tmp4439 = $tmp4438->methods[0];
    panda$core$Int64 $tmp4441 = $tmp4439(((panda$collections$CollectionView*) $tmp4437));
    panda$core$Bit $tmp4442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4441, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4442.value);
    panda$collections$ListView* $tmp4444 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4435);
    ITable* $tmp4445 = $tmp4444->$class->itable;
    while ($tmp4445->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4445 = $tmp4445->next;
    }
    $fn4447 $tmp4446 = $tmp4445->methods[0];
    panda$core$Object* $tmp4448 = $tmp4446($tmp4444, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4449 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4448)->type);
    numberType4443 = $tmp4449;
    panda$core$Bit $tmp4450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4408->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4450.value);
    panda$core$String* $tmp4452 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4408->payload));
    index4451 = $tmp4452;
    panda$core$String* $tmp4453 = panda$core$String$convert$R$panda$core$String(index4451);
    panda$core$String* $tmp4455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4453, &$s4454);
    panda$core$String* $tmp4456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4455, indexType4429);
    panda$core$String* $tmp4458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4456, &$s4457);
    (($fn4459) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4458);
    panda$core$String* $tmp4461 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4460 = $tmp4461;
    panda$core$String* $tmp4462 = panda$core$String$convert$R$panda$core$String(start4460);
    panda$core$String* $tmp4464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4462, &$s4463);
    panda$core$String* $tmp4465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4464, range4419);
    panda$core$String* $tmp4467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4465, &$s4466);
    (($fn4468) p_out->$class->vtable[19])(p_out, $tmp4467);
    panda$core$String* $tmp4470 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4469 = $tmp4470;
    panda$core$String* $tmp4471 = panda$core$String$convert$R$panda$core$String(indexValuePtr4469);
    panda$core$String* $tmp4473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4471, &$s4472);
    panda$core$String* $tmp4474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4473, indexType4429);
    panda$core$String* $tmp4476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4474, &$s4475);
    panda$core$String* $tmp4477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4476, indexType4429);
    panda$core$String* $tmp4479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4477, &$s4478);
    panda$core$String* $tmp4480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4479, index4451);
    panda$core$String* $tmp4482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4480, &$s4481);
    panda$core$String* $tmp4484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4482, &$s4483);
    (($fn4485) p_out->$class->vtable[19])(p_out, $tmp4484);
    panda$core$String* $tmp4487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4486, numberType4443);
    panda$core$String* $tmp4489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4487, &$s4488);
    panda$core$String* $tmp4490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4489, start4460);
    panda$core$String* $tmp4492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4490, &$s4491);
    panda$core$String* $tmp4493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4492, numberType4443);
    panda$core$String* $tmp4495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4493, &$s4494);
    panda$core$String* $tmp4496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4495, indexValuePtr4469);
    panda$core$String* $tmp4498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4496, &$s4497);
    (($fn4499) p_out->$class->vtable[19])(p_out, $tmp4498);
    panda$core$String* $tmp4501 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4500 = $tmp4501;
    panda$core$String* $tmp4502 = panda$core$String$convert$R$panda$core$String(end4500);
    panda$core$String* $tmp4504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4502, &$s4503);
    panda$core$String* $tmp4505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4504, range4419);
    panda$core$String* $tmp4507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4505, &$s4506);
    (($fn4508) p_out->$class->vtable[19])(p_out, $tmp4507);
    panda$core$String* $tmp4510 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4509 = $tmp4510;
    panda$core$String* $tmp4511 = panda$core$String$convert$R$panda$core$String(inclusive4509);
    panda$core$String* $tmp4513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4511, &$s4512);
    panda$core$String* $tmp4514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4513, range4419);
    panda$core$String* $tmp4516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4514, &$s4515);
    (($fn4517) p_out->$class->vtable[19])(p_out, $tmp4516);
    panda$core$String* $tmp4519 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4518 = $tmp4519;
    panda$core$String* $tmp4521 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4520 = $tmp4521;
    panda$core$String* $tmp4523 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4522 = $tmp4523;
    panda$core$String* $tmp4525 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4524 = $tmp4525;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4526 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4526->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4526->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4526, ((panda$core$String*) p_f->payload), loopEnd4522, loopTest4524);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4526));
    panda$core$String* $tmp4529 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4528 = $tmp4529;
    panda$core$String* $tmp4531 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4530 = $tmp4531;
    panda$core$Bit $tmp4534 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4424)->name, &$s4533);
    if ($tmp4534.value) {
    {
        signPrefix4532 = &$s4535;
    }
    }
    else {
    {
        panda$core$Bit $tmp4538 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4424)->name, &$s4537);
        bool $tmp4536 = $tmp4538.value;
        if ($tmp4536) goto $l4539;
        panda$core$Bit $tmp4541 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4424)->name, &$s4540);
        $tmp4536 = $tmp4541.value;
        $l4539:;
        panda$core$Bit $tmp4542 = { $tmp4536 };
        PANDA_ASSERT($tmp4542.value);
        signPrefix4532 = &$s4543;
    }
    }
    panda$core$String* $tmp4545 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4544 = $tmp4545;
    panda$core$String* $tmp4547 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4546 = $tmp4547;
    panda$core$String* $tmp4549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4548, inclusive4509);
    panda$core$String* $tmp4551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4549, &$s4550);
    panda$core$String* $tmp4552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4551, forwardEntryInclusive4544);
    panda$core$String* $tmp4554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4552, &$s4553);
    panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4555, forwardEntryExclusive4546);
    panda$core$String* $tmp4558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, &$s4557);
    panda$core$String* $tmp4559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4554, $tmp4558);
    (($fn4560) p_out->$class->vtable[19])(p_out, $tmp4559);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive4544, p_out);
    panda$core$String* $tmp4562 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4561 = $tmp4562;
    panda$core$String* $tmp4563 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4561);
    panda$core$String* $tmp4565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4563, &$s4564);
    panda$core$String* $tmp4566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4565, signPrefix4532);
    panda$core$String* $tmp4568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4566, &$s4567);
    panda$core$String* $tmp4569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4568, numberType4443);
    panda$core$String* $tmp4571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4569, &$s4570);
    panda$core$String* $tmp4572 = panda$core$String$convert$R$panda$core$String(start4460);
    panda$core$String* $tmp4574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4572, &$s4573);
    panda$core$String* $tmp4575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4574, end4500);
    panda$core$String* $tmp4577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4575, &$s4576);
    panda$core$String* $tmp4578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4571, $tmp4577);
    (($fn4579) p_out->$class->vtable[19])(p_out, $tmp4578);
    panda$core$String* $tmp4581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4580, forwardEntryInclusiveTest4561);
    panda$core$String* $tmp4583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4581, &$s4582);
    panda$core$String* $tmp4584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4583, loopStart4518);
    panda$core$String* $tmp4586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4584, &$s4585);
    panda$core$String* $tmp4587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4586, loopEnd4522);
    panda$core$String* $tmp4589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4587, &$s4588);
    (($fn4590) p_out->$class->vtable[19])(p_out, $tmp4589);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive4546, p_out);
    panda$core$String* $tmp4592 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4591 = $tmp4592;
    panda$core$String* $tmp4593 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4591);
    panda$core$String* $tmp4595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4593, &$s4594);
    panda$core$String* $tmp4596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4595, signPrefix4532);
    panda$core$String* $tmp4598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4596, &$s4597);
    panda$core$String* $tmp4599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4598, numberType4443);
    panda$core$String* $tmp4601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4599, &$s4600);
    panda$core$String* $tmp4602 = panda$core$String$convert$R$panda$core$String(start4460);
    panda$core$String* $tmp4604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4602, &$s4603);
    panda$core$String* $tmp4605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4604, end4500);
    panda$core$String* $tmp4607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4605, &$s4606);
    panda$core$String* $tmp4608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4601, $tmp4607);
    (($fn4609) p_out->$class->vtable[19])(p_out, $tmp4608);
    panda$core$String* $tmp4611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4610, forwardEntryExclusiveTest4591);
    panda$core$String* $tmp4613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4611, &$s4612);
    panda$core$String* $tmp4614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4613, loopStart4518);
    panda$core$String* $tmp4616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4614, &$s4615);
    panda$core$String* $tmp4617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4616, loopEnd4522);
    panda$core$String* $tmp4619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4617, &$s4618);
    (($fn4620) p_out->$class->vtable[19])(p_out, $tmp4619);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart4518, p_out);
    panda$core$String* $tmp4622 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4621 = $tmp4622;
    panda$core$String* $tmp4623 = panda$core$String$convert$R$panda$core$String(indexValue4621);
    panda$core$String* $tmp4625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4623, &$s4624);
    panda$core$String* $tmp4626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4625, numberType4443);
    panda$core$String* $tmp4628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4626, &$s4627);
    panda$core$String* $tmp4629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4628, numberType4443);
    panda$core$String* $tmp4631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4629, &$s4630);
    panda$core$String* $tmp4632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4631, indexValuePtr4469);
    panda$core$String* $tmp4634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4632, &$s4633);
    (($fn4635) p_out->$class->vtable[19])(p_out, $tmp4634);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block4422, p_out);
    panda$core$Bit $tmp4636 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4422);
    panda$core$Bit $tmp4637 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4636);
    if ($tmp4637.value) {
    {
        panda$core$String* $tmp4639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4638, loopTest4524);
        panda$core$String* $tmp4641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4639, &$s4640);
        (($fn4642) p_out->$class->vtable[19])(p_out, $tmp4641);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest4524, p_out);
    panda$core$String* $tmp4644 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc4643 = $tmp4644;
    panda$core$String* $tmp4646 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta4645 = $tmp4646;
    panda$core$String* $tmp4647 = panda$core$String$convert$R$panda$core$String(forwardDelta4645);
    panda$core$String* $tmp4649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4647, &$s4648);
    panda$core$String* $tmp4650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4649, numberType4443);
    panda$core$String* $tmp4652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4650, &$s4651);
    panda$core$String* $tmp4653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4652, end4500);
    panda$core$String* $tmp4655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4653, &$s4654);
    panda$core$String* $tmp4656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4655, indexValue4621);
    panda$core$String* $tmp4658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4656, &$s4657);
    (($fn4659) p_out->$class->vtable[19])(p_out, $tmp4658);
    panda$core$String* $tmp4661 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel4660 = $tmp4661;
    panda$core$String* $tmp4663 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel4662 = $tmp4663;
    panda$core$String* $tmp4665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4664, inclusive4509);
    panda$core$String* $tmp4667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4665, &$s4666);
    panda$core$String* $tmp4668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4667, forwardInclusiveLabel4660);
    panda$core$String* $tmp4670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4668, &$s4669);
    panda$core$String* $tmp4671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4670, forwardExclusiveLabel4662);
    (($fn4672) p_out->$class->vtable[19])(p_out, $tmp4671);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel4660, p_out);
    panda$core$String* $tmp4674 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest4673 = $tmp4674;
    panda$core$String* $tmp4675 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest4673);
    panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4675, &$s4676);
    panda$core$String* $tmp4678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4677, numberType4443);
    panda$core$String* $tmp4680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4678, &$s4679);
    panda$core$String* $tmp4681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4680, forwardDelta4645);
    panda$core$String* $tmp4683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4681, &$s4682);
    (($fn4684) p_out->$class->vtable[19])(p_out, $tmp4683);
    panda$core$String* $tmp4686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4685, forwardInclusiveTest4673);
    panda$core$String* $tmp4688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4686, &$s4687);
    panda$core$String* $tmp4689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4688, loopInc4643);
    panda$core$String* $tmp4691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4689, &$s4690);
    panda$core$String* $tmp4692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4691, loopEnd4522);
    panda$core$String* $tmp4694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4692, &$s4693);
    (($fn4695) p_out->$class->vtable[19])(p_out, $tmp4694);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel4662, p_out);
    panda$core$String* $tmp4697 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest4696 = $tmp4697;
    panda$core$String* $tmp4698 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest4696);
    panda$core$String* $tmp4700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4698, &$s4699);
    panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4700, numberType4443);
    panda$core$String* $tmp4703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4701, &$s4702);
    panda$core$String* $tmp4704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4703, forwardDelta4645);
    panda$core$String* $tmp4706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4704, &$s4705);
    (($fn4707) p_out->$class->vtable[19])(p_out, $tmp4706);
    panda$core$String* $tmp4709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4708, forwardExclusiveTest4696);
    panda$core$String* $tmp4711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4709, &$s4710);
    panda$core$String* $tmp4712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4711, loopInc4643);
    panda$core$String* $tmp4714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4712, &$s4713);
    panda$core$String* $tmp4715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4714, loopEnd4522);
    panda$core$String* $tmp4717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4715, &$s4716);
    (($fn4718) p_out->$class->vtable[19])(p_out, $tmp4717);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc4643, p_out);
    panda$core$String* $tmp4720 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc4719 = $tmp4720;
    panda$core$String* $tmp4721 = panda$core$String$convert$R$panda$core$String(inc4719);
    panda$core$String* $tmp4723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4721, &$s4722);
    panda$core$String* $tmp4724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4723, numberType4443);
    panda$core$String* $tmp4726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4724, &$s4725);
    panda$core$String* $tmp4727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4726, indexValue4621);
    panda$core$String* $tmp4729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4727, &$s4728);
    (($fn4730) p_out->$class->vtable[19])(p_out, $tmp4729);
    panda$core$String* $tmp4732 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct4731 = $tmp4732;
    panda$core$String* $tmp4733 = panda$core$String$convert$R$panda$core$String(incStruct4731);
    panda$core$String* $tmp4735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4733, &$s4734);
    panda$core$String* $tmp4736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4735, indexType4429);
    panda$core$String* $tmp4738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4736, &$s4737);
    panda$core$String* $tmp4739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4738, numberType4443);
    panda$core$String* $tmp4741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4739, &$s4740);
    (($fn4742) p_out->$class->vtable[19])(p_out, $tmp4741);
    panda$core$String* $tmp4744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4743, numberType4443);
    panda$core$String* $tmp4746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4744, &$s4745);
    panda$core$String* $tmp4747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4746, inc4719);
    panda$core$String* $tmp4749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4747, &$s4748);
    (($fn4750) p_out->$class->vtable[19])(p_out, $tmp4749);
    panda$core$String* $tmp4752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4751, indexType4429);
    panda$core$String* $tmp4754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4752, &$s4753);
    panda$core$String* $tmp4755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4754, incStruct4731);
    panda$core$String* $tmp4757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4755, &$s4756);
    panda$core$String* $tmp4758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4757, indexType4429);
    panda$core$String* $tmp4760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4758, &$s4759);
    panda$core$String* $tmp4761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4760, index4451);
    panda$core$String* $tmp4763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4761, &$s4762);
    (($fn4764) p_out->$class->vtable[19])(p_out, $tmp4763);
    panda$core$String* $tmp4766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4765, loopStart4518);
    panda$core$String* $tmp4768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4766, &$s4767);
    (($fn4769) p_out->$class->vtable[19])(p_out, $tmp4768);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd4522, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4773;
    panda$core$String* range4784;
    org$pandalanguage$pandac$IRNode* block4787;
    org$pandalanguage$pandac$Type* t4789;
    panda$core$String* llt4792;
    panda$core$String* indexType4794;
    org$pandalanguage$pandac$ClassDecl* cl4800;
    panda$core$String* numberType4808;
    panda$core$String* index4816;
    panda$core$String* start4825;
    panda$core$String* indexValuePtr4834;
    panda$core$String* end4865;
    panda$core$String* rawStep4874;
    panda$core$String* step4883;
    panda$core$String* inclusive4897;
    panda$core$String* loopStart4906;
    panda$core$String* loopBody4908;
    panda$core$String* loopEnd4910;
    panda$core$String* loopTest4912;
    panda$core$String* forwardEntry4916;
    panda$core$String* backwardEntry4918;
    panda$core$String* signPrefix4920;
    panda$core$String* direction4932;
    panda$core$String* forwardEntryInclusive4958;
    panda$core$String* forwardEntryExclusive4960;
    panda$core$String* forwardEntryInclusiveTest4975;
    panda$core$String* forwardEntryExclusiveTest5005;
    panda$core$String* backwardEntryInclusive5035;
    panda$core$String* backwardEntryExclusive5037;
    panda$core$String* backwardEntryInclusiveTest5052;
    panda$core$String* backwardEntryExclusiveTest5082;
    panda$core$String* indexValue5112;
    panda$core$String* loopInc5134;
    panda$core$String* forwardLabel5136;
    panda$core$String* backwardLabel5138;
    panda$core$String* forwardDelta5151;
    panda$core$String* forwardInclusiveLabel5166;
    panda$core$String* forwardExclusiveLabel5168;
    panda$core$String* forwardInclusiveTest5179;
    panda$core$String* forwardExclusiveTest5205;
    panda$core$String* backwardDelta5231;
    panda$core$String* negStep5246;
    panda$core$String* backwardInclusiveLabel5258;
    panda$core$String* backwardExclusiveLabel5260;
    panda$core$String* backwardInclusiveTest5271;
    panda$core$String* backwardExclusiveTest5295;
    panda$core$String* inc5319;
    panda$core$String* incStruct5334;
    panda$core$Bit $tmp4770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4770.value);
    panda$core$Int64 $tmp4771 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4771, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4772.value);
    panda$core$Object* $tmp4774 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4773 = ((org$pandalanguage$pandac$IRNode*) $tmp4774);
    panda$core$Object* $tmp4775 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4775)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4776.value);
    panda$core$Object* $tmp4777 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4778 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4777)->type->subtypes);
    panda$core$Bit $tmp4779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4778, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4779.value);
    panda$core$Object* $tmp4780 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4781 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4780)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4783 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4781))->name, &$s4782);
    PANDA_ASSERT($tmp4783.value);
    panda$core$Object* $tmp4785 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4786 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4785), p_out);
    range4784 = $tmp4786;
    panda$core$Object* $tmp4788 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4787 = ((org$pandalanguage$pandac$IRNode*) $tmp4788);
    panda$core$Object* $tmp4790 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4791 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4790)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4789 = ((org$pandalanguage$pandac$Type*) $tmp4791);
    panda$core$String* $tmp4793 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4789);
    llt4792 = $tmp4793;
    panda$core$Bit $tmp4795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4789->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4795.value) {
    {
        panda$core$Int64 $tmp4796 = panda$collections$Array$get_count$R$panda$core$Int64(t4789->subtypes);
        panda$core$Bit $tmp4797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4796, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4797.value);
        panda$core$Object* $tmp4798 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4789->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4799 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4798));
        indexType4794 = $tmp4799;
    }
    }
    else {
    {
        indexType4794 = llt4792;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4801 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4789);
    cl4800 = $tmp4801;
    PANDA_ASSERT(((panda$core$Bit) { cl4800 != NULL }).value);
    panda$collections$ListView* $tmp4802 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4800);
    ITable* $tmp4803 = ((panda$collections$CollectionView*) $tmp4802)->$class->itable;
    while ($tmp4803->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4803 = $tmp4803->next;
    }
    $fn4805 $tmp4804 = $tmp4803->methods[0];
    panda$core$Int64 $tmp4806 = $tmp4804(((panda$collections$CollectionView*) $tmp4802));
    panda$core$Bit $tmp4807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4806, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4807.value);
    panda$collections$ListView* $tmp4809 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4800);
    ITable* $tmp4810 = $tmp4809->$class->itable;
    while ($tmp4810->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4810 = $tmp4810->next;
    }
    $fn4812 $tmp4811 = $tmp4810->methods[0];
    panda$core$Object* $tmp4813 = $tmp4811($tmp4809, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4814 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4813)->type);
    numberType4808 = $tmp4814;
    panda$core$Bit $tmp4815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4773->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4815.value);
    panda$core$String* $tmp4817 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4773->payload));
    index4816 = $tmp4817;
    panda$core$String* $tmp4818 = panda$core$String$convert$R$panda$core$String(index4816);
    panda$core$String* $tmp4820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4818, &$s4819);
    panda$core$String* $tmp4821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4820, indexType4794);
    panda$core$String* $tmp4823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4821, &$s4822);
    (($fn4824) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4823);
    panda$core$String* $tmp4826 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4825 = $tmp4826;
    panda$core$String* $tmp4827 = panda$core$String$convert$R$panda$core$String(start4825);
    panda$core$String* $tmp4829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4827, &$s4828);
    panda$core$String* $tmp4830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4829, range4784);
    panda$core$String* $tmp4832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4830, &$s4831);
    (($fn4833) p_out->$class->vtable[19])(p_out, $tmp4832);
    panda$core$String* $tmp4835 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4834 = $tmp4835;
    panda$core$String* $tmp4836 = panda$core$String$convert$R$panda$core$String(indexValuePtr4834);
    panda$core$String* $tmp4838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4836, &$s4837);
    panda$core$String* $tmp4839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4838, indexType4794);
    panda$core$String* $tmp4841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4839, &$s4840);
    panda$core$String* $tmp4842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4841, indexType4794);
    panda$core$String* $tmp4844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4842, &$s4843);
    panda$core$String* $tmp4845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4844, index4816);
    panda$core$String* $tmp4847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4845, &$s4846);
    panda$core$String* $tmp4849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4847, &$s4848);
    (($fn4850) p_out->$class->vtable[19])(p_out, $tmp4849);
    panda$core$String* $tmp4852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4851, numberType4808);
    panda$core$String* $tmp4854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4852, &$s4853);
    panda$core$String* $tmp4855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4854, start4825);
    panda$core$String* $tmp4857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4855, &$s4856);
    panda$core$String* $tmp4858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4857, numberType4808);
    panda$core$String* $tmp4860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4858, &$s4859);
    panda$core$String* $tmp4861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4860, indexValuePtr4834);
    panda$core$String* $tmp4863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4861, &$s4862);
    (($fn4864) p_out->$class->vtable[19])(p_out, $tmp4863);
    panda$core$String* $tmp4866 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4865 = $tmp4866;
    panda$core$String* $tmp4867 = panda$core$String$convert$R$panda$core$String(end4865);
    panda$core$String* $tmp4869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4867, &$s4868);
    panda$core$String* $tmp4870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4869, range4784);
    panda$core$String* $tmp4872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4870, &$s4871);
    (($fn4873) p_out->$class->vtable[19])(p_out, $tmp4872);
    panda$core$String* $tmp4875 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep4874 = $tmp4875;
    panda$core$String* $tmp4876 = panda$core$String$convert$R$panda$core$String(rawStep4874);
    panda$core$String* $tmp4878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4876, &$s4877);
    panda$core$String* $tmp4879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4878, range4784);
    panda$core$String* $tmp4881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4879, &$s4880);
    (($fn4882) p_out->$class->vtable[19])(p_out, $tmp4881);
    panda$core$Bit $tmp4885 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4808, &$s4884);
    if ($tmp4885.value) {
    {
        panda$core$String* $tmp4886 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step4883 = $tmp4886;
        panda$core$String* $tmp4887 = panda$core$String$convert$R$panda$core$String(step4883);
        panda$core$String* $tmp4889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4887, &$s4888);
        panda$core$String* $tmp4890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4889, rawStep4874);
        panda$core$String* $tmp4892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4890, &$s4891);
        panda$core$String* $tmp4893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4892, numberType4808);
        panda$core$String* $tmp4895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4893, &$s4894);
        (($fn4896) p_out->$class->vtable[19])(p_out, $tmp4895);
    }
    }
    else {
    {
        step4883 = rawStep4874;
    }
    }
    panda$core$String* $tmp4898 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4897 = $tmp4898;
    panda$core$String* $tmp4899 = panda$core$String$convert$R$panda$core$String(inclusive4897);
    panda$core$String* $tmp4901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4899, &$s4900);
    panda$core$String* $tmp4902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4901, range4784);
    panda$core$String* $tmp4904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4902, &$s4903);
    (($fn4905) p_out->$class->vtable[19])(p_out, $tmp4904);
    panda$core$String* $tmp4907 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4906 = $tmp4907;
    panda$core$String* $tmp4909 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4908 = $tmp4909;
    panda$core$String* $tmp4911 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4910 = $tmp4911;
    panda$core$String* $tmp4913 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4912 = $tmp4913;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4914 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4914->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4914->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4914, ((panda$core$String*) p_f->payload), loopEnd4910, loopTest4912);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4914));
    panda$core$String* $tmp4917 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4916 = $tmp4917;
    panda$core$String* $tmp4919 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4918 = $tmp4919;
    panda$core$Bit $tmp4922 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4789)->name, &$s4921);
    if ($tmp4922.value) {
    {
        signPrefix4920 = &$s4923;
    }
    }
    else {
    {
        panda$core$Bit $tmp4926 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4789)->name, &$s4925);
        bool $tmp4924 = $tmp4926.value;
        if ($tmp4924) goto $l4927;
        panda$core$Bit $tmp4929 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4789)->name, &$s4928);
        $tmp4924 = $tmp4929.value;
        $l4927:;
        panda$core$Bit $tmp4930 = { $tmp4924 };
        PANDA_ASSERT($tmp4930.value);
        signPrefix4920 = &$s4931;
    }
    }
    panda$core$Bit $tmp4934 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix4920, &$s4933);
    if ($tmp4934.value) {
    {
        panda$core$String* $tmp4935 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction4932 = $tmp4935;
        panda$core$String* $tmp4936 = panda$core$String$convert$R$panda$core$String(direction4932);
        panda$core$String* $tmp4938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4936, &$s4937);
        panda$core$String* $tmp4939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4938, numberType4808);
        panda$core$String* $tmp4941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4939, &$s4940);
        panda$core$String* $tmp4942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4941, step4883);
        panda$core$String* $tmp4944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4942, &$s4943);
        (($fn4945) p_out->$class->vtable[19])(p_out, $tmp4944);
    }
    }
    else {
    {
        direction4932 = &$s4946;
    }
    }
    panda$core$String* $tmp4948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4947, direction4932);
    panda$core$String* $tmp4950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4948, &$s4949);
    panda$core$String* $tmp4951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4950, forwardEntry4916);
    panda$core$String* $tmp4953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4951, &$s4952);
    panda$core$String* $tmp4954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4953, backwardEntry4918);
    panda$core$String* $tmp4956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4954, &$s4955);
    (($fn4957) p_out->$class->vtable[19])(p_out, $tmp4956);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntry4916, p_out);
    panda$core$String* $tmp4959 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4958 = $tmp4959;
    panda$core$String* $tmp4961 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4960 = $tmp4961;
    panda$core$String* $tmp4963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4962, inclusive4897);
    panda$core$String* $tmp4965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4963, &$s4964);
    panda$core$String* $tmp4966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4965, forwardEntryInclusive4958);
    panda$core$String* $tmp4968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4966, &$s4967);
    panda$core$String* $tmp4970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4969, forwardEntryExclusive4960);
    panda$core$String* $tmp4972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4970, &$s4971);
    panda$core$String* $tmp4973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4968, $tmp4972);
    (($fn4974) p_out->$class->vtable[19])(p_out, $tmp4973);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive4958, p_out);
    panda$core$String* $tmp4976 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4975 = $tmp4976;
    panda$core$String* $tmp4977 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4975);
    panda$core$String* $tmp4979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4977, &$s4978);
    panda$core$String* $tmp4980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4979, signPrefix4920);
    panda$core$String* $tmp4982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4980, &$s4981);
    panda$core$String* $tmp4983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4982, numberType4808);
    panda$core$String* $tmp4985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4983, &$s4984);
    panda$core$String* $tmp4986 = panda$core$String$convert$R$panda$core$String(start4825);
    panda$core$String* $tmp4988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4986, &$s4987);
    panda$core$String* $tmp4989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4988, end4865);
    panda$core$String* $tmp4991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4989, &$s4990);
    panda$core$String* $tmp4992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4985, $tmp4991);
    (($fn4993) p_out->$class->vtable[19])(p_out, $tmp4992);
    panda$core$String* $tmp4995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4994, forwardEntryInclusiveTest4975);
    panda$core$String* $tmp4997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4995, &$s4996);
    panda$core$String* $tmp4998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4997, loopStart4906);
    panda$core$String* $tmp5000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4998, &$s4999);
    panda$core$String* $tmp5001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5000, loopEnd4910);
    panda$core$String* $tmp5003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5001, &$s5002);
    (($fn5004) p_out->$class->vtable[19])(p_out, $tmp5003);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive4960, p_out);
    panda$core$String* $tmp5006 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest5005 = $tmp5006;
    panda$core$String* $tmp5007 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest5005);
    panda$core$String* $tmp5009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5007, &$s5008);
    panda$core$String* $tmp5010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5009, signPrefix4920);
    panda$core$String* $tmp5012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5010, &$s5011);
    panda$core$String* $tmp5013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5012, numberType4808);
    panda$core$String* $tmp5015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5013, &$s5014);
    panda$core$String* $tmp5016 = panda$core$String$convert$R$panda$core$String(start4825);
    panda$core$String* $tmp5018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5016, &$s5017);
    panda$core$String* $tmp5019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5018, end4865);
    panda$core$String* $tmp5021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5019, &$s5020);
    panda$core$String* $tmp5022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5015, $tmp5021);
    (($fn5023) p_out->$class->vtable[19])(p_out, $tmp5022);
    panda$core$String* $tmp5025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5024, forwardEntryExclusiveTest5005);
    panda$core$String* $tmp5027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5025, &$s5026);
    panda$core$String* $tmp5028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5027, loopStart4906);
    panda$core$String* $tmp5030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5028, &$s5029);
    panda$core$String* $tmp5031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5030, loopEnd4910);
    panda$core$String* $tmp5033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5031, &$s5032);
    (($fn5034) p_out->$class->vtable[19])(p_out, $tmp5033);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntry4918, p_out);
    panda$core$String* $tmp5036 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive5035 = $tmp5036;
    panda$core$String* $tmp5038 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive5037 = $tmp5038;
    panda$core$String* $tmp5040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5039, inclusive4897);
    panda$core$String* $tmp5042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5040, &$s5041);
    panda$core$String* $tmp5043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5042, backwardEntryInclusive5035);
    panda$core$String* $tmp5045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5043, &$s5044);
    panda$core$String* $tmp5047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5046, backwardEntryExclusive5037);
    panda$core$String* $tmp5049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5047, &$s5048);
    panda$core$String* $tmp5050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5045, $tmp5049);
    (($fn5051) p_out->$class->vtable[19])(p_out, $tmp5050);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryInclusive5035, p_out);
    panda$core$String* $tmp5053 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5052 = $tmp5053;
    panda$core$String* $tmp5054 = panda$core$String$convert$R$panda$core$String(backwardEntryInclusiveTest5052);
    panda$core$String* $tmp5056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5054, &$s5055);
    panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5056, signPrefix4920);
    panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5057, &$s5058);
    panda$core$String* $tmp5060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5059, numberType4808);
    panda$core$String* $tmp5062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5060, &$s5061);
    panda$core$String* $tmp5063 = panda$core$String$convert$R$panda$core$String(start4825);
    panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5063, &$s5064);
    panda$core$String* $tmp5066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5065, end4865);
    panda$core$String* $tmp5068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5066, &$s5067);
    panda$core$String* $tmp5069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5062, $tmp5068);
    (($fn5070) p_out->$class->vtable[19])(p_out, $tmp5069);
    panda$core$String* $tmp5072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5071, backwardEntryInclusiveTest5052);
    panda$core$String* $tmp5074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5072, &$s5073);
    panda$core$String* $tmp5075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5074, loopStart4906);
    panda$core$String* $tmp5077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5075, &$s5076);
    panda$core$String* $tmp5078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5077, loopEnd4910);
    panda$core$String* $tmp5080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5078, &$s5079);
    (($fn5081) p_out->$class->vtable[19])(p_out, $tmp5080);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryExclusive5037, p_out);
    panda$core$String* $tmp5083 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5082 = $tmp5083;
    panda$core$String* $tmp5084 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusiveTest5082);
    panda$core$String* $tmp5086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5084, &$s5085);
    panda$core$String* $tmp5087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5086, signPrefix4920);
    panda$core$String* $tmp5089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5087, &$s5088);
    panda$core$String* $tmp5090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5089, numberType4808);
    panda$core$String* $tmp5092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5090, &$s5091);
    panda$core$String* $tmp5093 = panda$core$String$convert$R$panda$core$String(start4825);
    panda$core$String* $tmp5095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5093, &$s5094);
    panda$core$String* $tmp5096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5095, end4865);
    panda$core$String* $tmp5098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5096, &$s5097);
    panda$core$String* $tmp5099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5092, $tmp5098);
    (($fn5100) p_out->$class->vtable[19])(p_out, $tmp5099);
    panda$core$String* $tmp5102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5101, backwardEntryExclusiveTest5082);
    panda$core$String* $tmp5104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5102, &$s5103);
    panda$core$String* $tmp5105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5104, loopStart4906);
    panda$core$String* $tmp5107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5105, &$s5106);
    panda$core$String* $tmp5108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5107, loopEnd4910);
    panda$core$String* $tmp5110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5108, &$s5109);
    (($fn5111) p_out->$class->vtable[19])(p_out, $tmp5110);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart4906, p_out);
    panda$core$String* $tmp5113 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5112 = $tmp5113;
    panda$core$String* $tmp5114 = panda$core$String$convert$R$panda$core$String(indexValue5112);
    panda$core$String* $tmp5116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5114, &$s5115);
    panda$core$String* $tmp5117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5116, numberType4808);
    panda$core$String* $tmp5119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5117, &$s5118);
    panda$core$String* $tmp5120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5119, numberType4808);
    panda$core$String* $tmp5122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5120, &$s5121);
    panda$core$String* $tmp5123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5122, indexValuePtr4834);
    panda$core$String* $tmp5125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5123, &$s5124);
    (($fn5126) p_out->$class->vtable[19])(p_out, $tmp5125);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block4787, p_out);
    panda$core$Bit $tmp5127 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4787);
    panda$core$Bit $tmp5128 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5127);
    if ($tmp5128.value) {
    {
        panda$core$String* $tmp5130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5129, loopTest4912);
        panda$core$String* $tmp5132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5130, &$s5131);
        (($fn5133) p_out->$class->vtable[19])(p_out, $tmp5132);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest4912, p_out);
    panda$core$String* $tmp5135 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5134 = $tmp5135;
    panda$core$String* $tmp5137 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5136 = $tmp5137;
    panda$core$String* $tmp5139 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5138 = $tmp5139;
    panda$core$String* $tmp5141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5140, direction4932);
    panda$core$String* $tmp5143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5141, &$s5142);
    panda$core$String* $tmp5144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5143, forwardLabel5136);
    panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5144, &$s5145);
    panda$core$String* $tmp5147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5146, backwardLabel5138);
    panda$core$String* $tmp5149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5147, &$s5148);
    (($fn5150) p_out->$class->vtable[19])(p_out, $tmp5149);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardLabel5136, p_out);
    panda$core$String* $tmp5152 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5151 = $tmp5152;
    panda$core$String* $tmp5153 = panda$core$String$convert$R$panda$core$String(forwardDelta5151);
    panda$core$String* $tmp5155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5153, &$s5154);
    panda$core$String* $tmp5156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5155, numberType4808);
    panda$core$String* $tmp5158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5156, &$s5157);
    panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5158, end4865);
    panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, &$s5160);
    panda$core$String* $tmp5162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5161, indexValue5112);
    panda$core$String* $tmp5164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5162, &$s5163);
    (($fn5165) p_out->$class->vtable[19])(p_out, $tmp5164);
    panda$core$String* $tmp5167 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5166 = $tmp5167;
    panda$core$String* $tmp5169 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5168 = $tmp5169;
    panda$core$String* $tmp5171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5170, inclusive4897);
    panda$core$String* $tmp5173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5171, &$s5172);
    panda$core$String* $tmp5174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5173, forwardInclusiveLabel5166);
    panda$core$String* $tmp5176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5174, &$s5175);
    panda$core$String* $tmp5177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5176, forwardExclusiveLabel5168);
    (($fn5178) p_out->$class->vtable[19])(p_out, $tmp5177);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel5166, p_out);
    panda$core$String* $tmp5180 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5179 = $tmp5180;
    panda$core$String* $tmp5181 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest5179);
    panda$core$String* $tmp5183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5181, &$s5182);
    panda$core$String* $tmp5184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5183, numberType4808);
    panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5184, &$s5185);
    panda$core$String* $tmp5187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5186, forwardDelta5151);
    panda$core$String* $tmp5189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5187, &$s5188);
    panda$core$String* $tmp5190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5189, step4883);
    panda$core$String* $tmp5192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5190, &$s5191);
    (($fn5193) p_out->$class->vtable[19])(p_out, $tmp5192);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5194, forwardInclusiveTest5179);
    panda$core$String* $tmp5197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, &$s5196);
    panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5197, loopInc5134);
    panda$core$String* $tmp5200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5198, &$s5199);
    panda$core$String* $tmp5201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5200, loopEnd4910);
    panda$core$String* $tmp5203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5201, &$s5202);
    (($fn5204) p_out->$class->vtable[19])(p_out, $tmp5203);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel5168, p_out);
    panda$core$String* $tmp5206 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5205 = $tmp5206;
    panda$core$String* $tmp5207 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest5205);
    panda$core$String* $tmp5209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5207, &$s5208);
    panda$core$String* $tmp5210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5209, numberType4808);
    panda$core$String* $tmp5212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5210, &$s5211);
    panda$core$String* $tmp5213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5212, forwardDelta5151);
    panda$core$String* $tmp5215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5213, &$s5214);
    panda$core$String* $tmp5216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5215, step4883);
    panda$core$String* $tmp5218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5216, &$s5217);
    (($fn5219) p_out->$class->vtable[19])(p_out, $tmp5218);
    panda$core$String* $tmp5221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5220, forwardExclusiveTest5205);
    panda$core$String* $tmp5223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5221, &$s5222);
    panda$core$String* $tmp5224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5223, loopInc5134);
    panda$core$String* $tmp5226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5224, &$s5225);
    panda$core$String* $tmp5227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5226, loopEnd4910);
    panda$core$String* $tmp5229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5227, &$s5228);
    (($fn5230) p_out->$class->vtable[19])(p_out, $tmp5229);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardLabel5138, p_out);
    panda$core$String* $tmp5232 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5231 = $tmp5232;
    panda$core$String* $tmp5233 = panda$core$String$convert$R$panda$core$String(backwardDelta5231);
    panda$core$String* $tmp5235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5233, &$s5234);
    panda$core$String* $tmp5236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5235, numberType4808);
    panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5236, &$s5237);
    panda$core$String* $tmp5239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5238, indexValue5112);
    panda$core$String* $tmp5241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5239, &$s5240);
    panda$core$String* $tmp5242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5241, end4865);
    panda$core$String* $tmp5244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5242, &$s5243);
    (($fn5245) p_out->$class->vtable[19])(p_out, $tmp5244);
    panda$core$String* $tmp5247 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5246 = $tmp5247;
    panda$core$String* $tmp5248 = panda$core$String$convert$R$panda$core$String(negStep5246);
    panda$core$String* $tmp5250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5248, &$s5249);
    panda$core$String* $tmp5251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5250, numberType4808);
    panda$core$String* $tmp5253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5251, &$s5252);
    panda$core$String* $tmp5254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5253, step4883);
    panda$core$String* $tmp5256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5254, &$s5255);
    (($fn5257) p_out->$class->vtable[19])(p_out, $tmp5256);
    panda$core$String* $tmp5259 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5258 = $tmp5259;
    panda$core$String* $tmp5261 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5260 = $tmp5261;
    panda$core$String* $tmp5263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5262, inclusive4897);
    panda$core$String* $tmp5265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5263, &$s5264);
    panda$core$String* $tmp5266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5265, backwardInclusiveLabel5258);
    panda$core$String* $tmp5268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5266, &$s5267);
    panda$core$String* $tmp5269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5268, backwardExclusiveLabel5260);
    (($fn5270) p_out->$class->vtable[19])(p_out, $tmp5269);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardInclusiveLabel5258, p_out);
    panda$core$String* $tmp5272 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5271 = $tmp5272;
    panda$core$String* $tmp5273 = panda$core$String$convert$R$panda$core$String(backwardInclusiveTest5271);
    panda$core$String* $tmp5275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5273, &$s5274);
    panda$core$String* $tmp5276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5275, numberType4808);
    panda$core$String* $tmp5278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5276, &$s5277);
    panda$core$String* $tmp5279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5278, backwardDelta5231);
    panda$core$String* $tmp5281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5279, &$s5280);
    panda$core$String* $tmp5282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5281, negStep5246);
    (($fn5283) p_out->$class->vtable[19])(p_out, $tmp5282);
    panda$core$String* $tmp5285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5284, backwardInclusiveTest5271);
    panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5285, &$s5286);
    panda$core$String* $tmp5288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5287, loopInc5134);
    panda$core$String* $tmp5290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5288, &$s5289);
    panda$core$String* $tmp5291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5290, loopEnd4910);
    panda$core$String* $tmp5293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5291, &$s5292);
    (($fn5294) p_out->$class->vtable[19])(p_out, $tmp5293);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardExclusiveLabel5260, p_out);
    panda$core$String* $tmp5296 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5295 = $tmp5296;
    panda$core$String* $tmp5297 = panda$core$String$convert$R$panda$core$String(backwardExclusiveTest5295);
    panda$core$String* $tmp5299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5297, &$s5298);
    panda$core$String* $tmp5300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5299, numberType4808);
    panda$core$String* $tmp5302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5300, &$s5301);
    panda$core$String* $tmp5303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5302, backwardDelta5231);
    panda$core$String* $tmp5305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5303, &$s5304);
    panda$core$String* $tmp5306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5305, negStep5246);
    (($fn5307) p_out->$class->vtable[19])(p_out, $tmp5306);
    panda$core$String* $tmp5309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5308, backwardExclusiveTest5295);
    panda$core$String* $tmp5311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5309, &$s5310);
    panda$core$String* $tmp5312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5311, loopInc5134);
    panda$core$String* $tmp5314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5312, &$s5313);
    panda$core$String* $tmp5315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5314, loopEnd4910);
    panda$core$String* $tmp5317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5315, &$s5316);
    (($fn5318) p_out->$class->vtable[19])(p_out, $tmp5317);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc5134, p_out);
    panda$core$String* $tmp5320 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5319 = $tmp5320;
    panda$core$String* $tmp5321 = panda$core$String$convert$R$panda$core$String(inc5319);
    panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5321, &$s5322);
    panda$core$String* $tmp5324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5323, numberType4808);
    panda$core$String* $tmp5326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5324, &$s5325);
    panda$core$String* $tmp5327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5326, indexValue5112);
    panda$core$String* $tmp5329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5327, &$s5328);
    panda$core$String* $tmp5330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5329, step4883);
    panda$core$String* $tmp5332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5330, &$s5331);
    (($fn5333) p_out->$class->vtable[19])(p_out, $tmp5332);
    panda$core$String* $tmp5335 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5334 = $tmp5335;
    panda$core$String* $tmp5336 = panda$core$String$convert$R$panda$core$String(incStruct5334);
    panda$core$String* $tmp5338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5336, &$s5337);
    panda$core$String* $tmp5339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5338, indexType4794);
    panda$core$String* $tmp5341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5339, &$s5340);
    panda$core$String* $tmp5342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5341, numberType4808);
    panda$core$String* $tmp5344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5342, &$s5343);
    (($fn5345) p_out->$class->vtable[19])(p_out, $tmp5344);
    panda$core$String* $tmp5347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5346, numberType4808);
    panda$core$String* $tmp5349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5347, &$s5348);
    panda$core$String* $tmp5350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5349, inc5319);
    panda$core$String* $tmp5352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5350, &$s5351);
    (($fn5353) p_out->$class->vtable[19])(p_out, $tmp5352);
    panda$core$String* $tmp5355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5354, indexType4794);
    panda$core$String* $tmp5357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5355, &$s5356);
    panda$core$String* $tmp5358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5357, incStruct5334);
    panda$core$String* $tmp5360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5358, &$s5359);
    panda$core$String* $tmp5361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5360, indexType4794);
    panda$core$String* $tmp5363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5361, &$s5362);
    panda$core$String* $tmp5364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5363, index4816);
    panda$core$String* $tmp5366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5364, &$s5365);
    (($fn5367) p_out->$class->vtable[19])(p_out, $tmp5366);
    panda$core$String* $tmp5369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5368, loopStart4906);
    panda$core$String* $tmp5371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5369, &$s5370);
    (($fn5372) p_out->$class->vtable[19])(p_out, $tmp5371);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd4910, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    panda$core$Object* $tmp5373 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5374 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5373)->type);
    if ($tmp5374.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5375 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5376 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5375)->type);
    if ($tmp5376.value) {
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
    panda$core$String* loopStart5383;
    panda$core$String* loopBody5385;
    panda$core$String* loopEnd5387;
    panda$core$String* test5396;
    panda$core$String* testBit5399;
    panda$core$Bit $tmp5377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5377.value);
    panda$core$Int64 $tmp5378 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5378, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5379.value);
    panda$core$Object* $tmp5380 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5381 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5382 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5380)->type, $tmp5381);
    PANDA_ASSERT($tmp5382.value);
    panda$core$String* $tmp5384 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5383 = $tmp5384;
    panda$core$String* $tmp5386 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5385 = $tmp5386;
    panda$core$String* $tmp5388 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5387 = $tmp5388;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5389 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5389->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5389->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5389, ((panda$core$String*) p_w->payload), loopEnd5387, loopStart5383);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5389));
    panda$core$String* $tmp5392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5391, loopStart5383);
    panda$core$String* $tmp5394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5392, &$s5393);
    (($fn5395) p_out->$class->vtable[19])(p_out, $tmp5394);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5383, p_out);
    panda$core$Object* $tmp5397 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5398 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5397), p_out);
    test5396 = $tmp5398;
    panda$core$String* $tmp5400 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5399 = $tmp5400;
    panda$core$String* $tmp5401 = panda$core$String$convert$R$panda$core$String(testBit5399);
    panda$core$String* $tmp5403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5401, &$s5402);
    panda$core$String* $tmp5404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5403, test5396);
    panda$core$String* $tmp5406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5404, &$s5405);
    (($fn5407) p_out->$class->vtable[19])(p_out, $tmp5406);
    panda$core$String* $tmp5409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5408, testBit5399);
    panda$core$String* $tmp5411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5409, &$s5410);
    panda$core$String* $tmp5412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5411, loopBody5385);
    panda$core$String* $tmp5414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5412, &$s5413);
    panda$core$String* $tmp5415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5414, loopEnd5387);
    panda$core$String* $tmp5417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5415, &$s5416);
    (($fn5418) p_out->$class->vtable[19])(p_out, $tmp5417);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5385, p_out);
    panda$core$Object* $tmp5419 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5419), p_out);
    panda$core$Object* $tmp5420 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5421 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5420));
    panda$core$Bit $tmp5422 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5421);
    if ($tmp5422.value) {
    {
        panda$core$String* $tmp5424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5423, loopStart5383);
        panda$core$String* $tmp5426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5424, &$s5425);
        (($fn5427) p_out->$class->vtable[19])(p_out, $tmp5426);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5387, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5434;
    panda$core$String* loopBody5436;
    panda$core$String* loopEnd5438;
    panda$core$String* test5447;
    panda$core$String* testBit5450;
    panda$core$Bit $tmp5428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5428.value);
    panda$core$Int64 $tmp5429 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5429, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5430.value);
    panda$core$Object* $tmp5431 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5432 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5433 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5431)->type, $tmp5432);
    PANDA_ASSERT($tmp5433.value);
    panda$core$String* $tmp5435 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5434 = $tmp5435;
    panda$core$String* $tmp5437 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5436 = $tmp5437;
    panda$core$String* $tmp5439 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5438 = $tmp5439;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5440 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5440->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5440->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5440, ((panda$core$String*) p_d->payload), loopEnd5438, loopStart5434);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5440));
    panda$core$String* $tmp5443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5442, loopBody5436);
    panda$core$String* $tmp5445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5443, &$s5444);
    (($fn5446) p_out->$class->vtable[19])(p_out, $tmp5445);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5434, p_out);
    panda$core$Object* $tmp5448 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5449 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5448), p_out);
    test5447 = $tmp5449;
    panda$core$String* $tmp5451 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5450 = $tmp5451;
    panda$core$String* $tmp5452 = panda$core$String$convert$R$panda$core$String(testBit5450);
    panda$core$String* $tmp5454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5452, &$s5453);
    panda$core$String* $tmp5455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5454, test5447);
    panda$core$String* $tmp5457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5455, &$s5456);
    (($fn5458) p_out->$class->vtable[19])(p_out, $tmp5457);
    panda$core$String* $tmp5460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5459, testBit5450);
    panda$core$String* $tmp5462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5460, &$s5461);
    panda$core$String* $tmp5463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5462, loopBody5436);
    panda$core$String* $tmp5465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5463, &$s5464);
    panda$core$String* $tmp5466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5465, loopEnd5438);
    panda$core$String* $tmp5468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5466, &$s5467);
    (($fn5469) p_out->$class->vtable[19])(p_out, $tmp5468);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5436, p_out);
    panda$core$Object* $tmp5470 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5470), p_out);
    panda$core$Object* $tmp5471 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5472 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5471));
    panda$core$Bit $tmp5473 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5472);
    if ($tmp5473.value) {
    {
        panda$core$String* $tmp5475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5474, loopStart5434);
        panda$core$String* $tmp5477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5475, &$s5476);
        (($fn5478) p_out->$class->vtable[19])(p_out, $tmp5477);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5438, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5482;
    panda$core$String* loopEnd5484;
    panda$core$Bit $tmp5479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5479.value);
    panda$core$Int64 $tmp5480 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5480, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5481.value);
    panda$core$String* $tmp5483 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5482 = $tmp5483;
    panda$core$String* $tmp5485 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5484 = $tmp5485;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5486 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5486->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5486->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5486, ((panda$core$String*) p_l->payload), loopEnd5484, loopStart5482);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5486));
    panda$core$String* $tmp5489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5488, loopStart5482);
    panda$core$String* $tmp5491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5489, &$s5490);
    (($fn5492) p_out->$class->vtable[19])(p_out, $tmp5491);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5482, p_out);
    panda$core$Object* $tmp5493 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5493), p_out);
    panda$core$Object* $tmp5494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5495 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5494));
    panda$core$Bit $tmp5496 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5495);
    if ($tmp5496.value) {
    {
        panda$core$String* $tmp5498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5497, loopStart5482);
        panda$core$String* $tmp5500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5498, &$s5499);
        (($fn5501) p_out->$class->vtable[19])(p_out, $tmp5500);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5484, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5502;
    panda$core$String* ref5512;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5502 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5503 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5502);
            panda$core$String* $tmp5504 = panda$core$String$convert$R$panda$core$String($tmp5503);
            panda$core$String* $tmp5506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5504, &$s5505);
            panda$core$String* $tmp5507 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5502->type);
            panda$core$String* $tmp5508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5506, $tmp5507);
            panda$core$String* $tmp5510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5508, &$s5509);
            (($fn5511) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5510);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5513 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_value, p_out);
                ref5512 = $tmp5513;
                panda$core$String* $tmp5515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5514, ref5512);
                panda$core$String* $tmp5517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5515, &$s5516);
                panda$core$String* $tmp5518 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5502->type);
                panda$core$String* $tmp5519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5517, $tmp5518);
                panda$core$String* $tmp5521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5519, &$s5520);
                panda$core$String* $tmp5522 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5502);
                panda$core$String* $tmp5523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5521, $tmp5522);
                panda$core$String* $tmp5525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5523, &$s5524);
                (($fn5526) p_out->$class->vtable[19])(p_out, $tmp5525);
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
    panda$collections$Iterator* decl$Iter5540;
    org$pandalanguage$pandac$IRNode* decl5552;
    panda$core$Bit $tmp5530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5529 = $tmp5530.value;
    if ($tmp5529) goto $l5531;
    panda$core$Bit $tmp5532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5529 = $tmp5532.value;
    $l5531:;
    panda$core$Bit $tmp5533 = { $tmp5529 };
    bool $tmp5528 = $tmp5533.value;
    if ($tmp5528) goto $l5534;
    panda$core$Bit $tmp5535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5528 = $tmp5535.value;
    $l5534:;
    panda$core$Bit $tmp5536 = { $tmp5528 };
    bool $tmp5527 = $tmp5536.value;
    if ($tmp5527) goto $l5537;
    panda$core$Bit $tmp5538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5527 = $tmp5538.value;
    $l5537:;
    panda$core$Bit $tmp5539 = { $tmp5527 };
    PANDA_ASSERT($tmp5539.value);
    {
        ITable* $tmp5541 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5541->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5541 = $tmp5541->next;
        }
        $fn5543 $tmp5542 = $tmp5541->methods[0];
        panda$collections$Iterator* $tmp5544 = $tmp5542(((panda$collections$Iterable*) p_v->children));
        decl$Iter5540 = $tmp5544;
        $l5545:;
        ITable* $tmp5547 = decl$Iter5540->$class->itable;
        while ($tmp5547->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5547 = $tmp5547->next;
        }
        $fn5549 $tmp5548 = $tmp5547->methods[0];
        panda$core$Bit $tmp5550 = $tmp5548(decl$Iter5540);
        panda$core$Bit $tmp5551 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5550);
        if (!$tmp5551.value) goto $l5546;
        {
            ITable* $tmp5553 = decl$Iter5540->$class->itable;
            while ($tmp5553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5553 = $tmp5553->next;
            }
            $fn5555 $tmp5554 = $tmp5553->methods[1];
            panda$core$Object* $tmp5556 = $tmp5554(decl$Iter5540);
            decl5552 = ((org$pandalanguage$pandac$IRNode*) $tmp5556);
            panda$core$Bit $tmp5557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5552->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5557.value);
            panda$core$Int64 $tmp5558 = panda$collections$Array$get_count$R$panda$core$Int64(decl5552->children);
            panda$core$Bit $tmp5559 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5558, ((panda$core$Int64) { 1 }));
            if ($tmp5559.value) {
            {
                panda$core$Object* $tmp5560 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5552->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5552->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5560), ((org$pandalanguage$pandac$IRNode*) $tmp5561), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5562 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5552->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5562), NULL, p_out);
            }
            }
        }
        goto $l5545;
        $l5546:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$OutputStream* p_out) {
    panda$core$String* base5566;
    panda$core$String* raw5569;
    org$pandalanguage$pandac$ClassDecl* cl5571;
    org$pandalanguage$pandac$FieldDecl* f5574;
    panda$collections$ListView* fields5575;
    panda$core$Int64 index5577;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5578;
    panda$core$String* result5638;
    panda$core$String* result5651;
    panda$core$String* reused5654;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5563 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5564 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp5563, p_out);
            return $tmp5564;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5565 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5565;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5567 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5568 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5567), p_out);
            base5566 = $tmp5568;
            panda$core$String* $tmp5570 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            raw5569 = $tmp5570;
            panda$core$Object* $tmp5572 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5573 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5572)->type);
            cl5571 = $tmp5573;
            PANDA_ASSERT(((panda$core$Bit) { cl5571 != NULL }).value);
            f5574 = ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload);
            panda$collections$ListView* $tmp5576 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5571);
            fields5575 = $tmp5576;
            index5577 = ((panda$core$Int64) { -1 });
            ITable* $tmp5579 = ((panda$collections$CollectionView*) fields5575)->$class->itable;
            while ($tmp5579->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5579 = $tmp5579->next;
            }
            $fn5581 $tmp5580 = $tmp5579->methods[0];
            panda$core$Int64 $tmp5582 = $tmp5580(((panda$collections$CollectionView*) fields5575));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5578, ((panda$core$Int64) { 0 }), $tmp5582, ((panda$core$Bit) { false }));
            int64_t $tmp5584 = $tmp5578.min.value;
            panda$core$Int64 i5583 = { $tmp5584 };
            int64_t $tmp5586 = $tmp5578.max.value;
            bool $tmp5587 = $tmp5578.inclusive.value;
            if ($tmp5587) goto $l5594; else goto $l5595;
            $l5594:;
            if ($tmp5584 <= $tmp5586) goto $l5588; else goto $l5590;
            $l5595:;
            if ($tmp5584 < $tmp5586) goto $l5588; else goto $l5590;
            $l5588:;
            {
                ITable* $tmp5596 = fields5575->$class->itable;
                while ($tmp5596->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5596 = $tmp5596->next;
                }
                $fn5598 $tmp5597 = $tmp5596->methods[0];
                panda$core$Object* $tmp5599 = $tmp5597(fields5575, i5583);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5599))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) f5574)->name) }).value) {
                {
                    index5577 = i5583;
                    goto $l5590;
                }
                }
            }
            $l5591:;
            int64_t $tmp5601 = $tmp5586 - i5583.value;
            if ($tmp5587) goto $l5602; else goto $l5603;
            $l5602:;
            if ($tmp5601 >= 1) goto $l5600; else goto $l5590;
            $l5603:;
            if ($tmp5601 > 1) goto $l5600; else goto $l5590;
            $l5600:;
            i5583.value += 1;
            goto $l5588;
            $l5590:;
            panda$core$Bit $tmp5606 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5577, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5606.value);
            panda$core$String* $tmp5607 = panda$core$String$convert$R$panda$core$String(raw5569);
            panda$core$String* $tmp5609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5607, &$s5608);
            org$pandalanguage$pandac$Type* $tmp5610 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5571);
            panda$core$String* $tmp5611 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5610);
            panda$core$String* $tmp5612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5609, $tmp5611);
            panda$core$String* $tmp5614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5612, &$s5613);
            org$pandalanguage$pandac$Type* $tmp5615 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5571);
            panda$core$String* $tmp5616 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5615);
            panda$core$String* $tmp5617 = panda$core$String$convert$R$panda$core$String($tmp5616);
            panda$core$String* $tmp5619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5617, &$s5618);
            panda$core$String* $tmp5620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5619, base5566);
            panda$core$String* $tmp5622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5620, &$s5621);
            panda$core$String* $tmp5623 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5622, ((panda$core$Object*) wrap_panda$core$Int64(index5577)));
            panda$core$String* $tmp5625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5623, &$s5624);
            panda$core$String* $tmp5626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5614, $tmp5625);
            (($fn5627) p_out->$class->vtable[19])(p_out, $tmp5626);
            panda$core$Bit $tmp5629 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, f5574->owner);
            bool $tmp5628 = $tmp5629.value;
            if ($tmp5628) goto $l5630;
            panda$core$Bit $tmp5632 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f5574->type);
            bool $tmp5631 = $tmp5632.value;
            if (!$tmp5631) goto $l5633;
            org$pandalanguage$pandac$ClassDecl* $tmp5634 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f5574->type);
            panda$core$Bit $tmp5635 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp5634);
            $tmp5631 = $tmp5635.value;
            $l5633:;
            panda$core$Bit $tmp5636 = { $tmp5631 };
            $tmp5628 = $tmp5636.value;
            $l5630:;
            panda$core$Bit $tmp5637 = { $tmp5628 };
            if ($tmp5637.value) {
            {
                return raw5569;
            }
            }
            panda$core$String* $tmp5639 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result5638 = $tmp5639;
            panda$core$String* $tmp5640 = panda$core$String$convert$R$panda$core$String(result5638);
            panda$core$String* $tmp5642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5640, &$s5641);
            panda$core$String* $tmp5643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5642, raw5569);
            panda$core$String* $tmp5645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5643, &$s5644);
            panda$core$String* $tmp5646 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5645, $tmp5646);
            panda$core$String* $tmp5649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5647, &$s5648);
            (($fn5650) p_out->$class->vtable[19])(p_out, $tmp5649);
            return result5638;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5652 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5653 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5652), p_out);
            result5651 = $tmp5653;
            panda$core$String* $tmp5655 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5654 = $tmp5655;
            panda$core$String* $tmp5656 = panda$core$String$convert$R$panda$core$String(reused5654);
            panda$core$String* $tmp5658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5656, &$s5657);
            panda$core$String* $tmp5659 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5658, $tmp5659);
            panda$core$String* $tmp5662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5660, &$s5661);
            panda$core$String* $tmp5663 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5664 = panda$core$String$convert$R$panda$core$String($tmp5663);
            panda$core$String* $tmp5666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5664, &$s5665);
            panda$core$String* $tmp5667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5666, result5651);
            panda$core$String* $tmp5669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5667, &$s5668);
            panda$core$String* $tmp5670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5662, $tmp5669);
            (($fn5671) p_out->$class->vtable[19])(p_out, $tmp5670);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5654));
            return result5651;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* lvalue5675;
    panda$core$String* value5686;
    panda$core$String* t5687;
    panda$core$Int64 op5690;
    panda$core$String* right5692;
    panda$core$Bit $tmp5672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5672.value);
    panda$core$Int64 $tmp5673 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5673, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5674.value);
    panda$core$Object* $tmp5676 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5677 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5676)->type);
    panda$core$String* $tmp5678 = panda$core$String$convert$R$panda$core$String($tmp5677);
    panda$core$String* $tmp5680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5678, &$s5679);
    panda$core$Object* $tmp5681 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5682 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5681), p_out);
    panda$core$String* $tmp5683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5680, $tmp5682);
    panda$core$String* $tmp5685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5683, &$s5684);
    lvalue5675 = $tmp5685;
    panda$core$Object* $tmp5688 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5689 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5688)->type);
    t5687 = $tmp5689;
    op5690 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5690, ((panda$core$Int64) { 73 }));
    if ($tmp5691.value) {
    {
        panda$core$Object* $tmp5693 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5694 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5693), p_out);
        right5692 = $tmp5694;
        panda$core$String* $tmp5695 = panda$core$String$convert$R$panda$core$String(t5687);
        panda$core$String* $tmp5697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5695, &$s5696);
        panda$core$String* $tmp5698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5697, right5692);
        panda$core$String* $tmp5700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5698, &$s5699);
        value5686 = $tmp5700;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5701, value5686);
    panda$core$String* $tmp5704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5702, &$s5703);
    panda$core$String* $tmp5705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5704, lvalue5675);
    panda$core$String* $tmp5707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5705, &$s5706);
    (($fn5708) p_out->$class->vtable[19])(p_out, $tmp5707);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5718;
    panda$core$String* result5720;
    bool $tmp5709 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp5709) goto $l5710;
    panda$core$Int64 $tmp5711 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5712 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5711, ((panda$core$Int64) { 0 }));
    $tmp5709 = $tmp5712.value;
    $l5710:;
    panda$core$Bit $tmp5713 = { $tmp5709 };
    if ($tmp5713.value) {
    {
        panda$core$Int64 $tmp5714 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5714, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp5715.value);
        panda$core$Int64 $tmp5716 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5717 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5716, ((panda$core$Int64) { 0 }));
        if ($tmp5717.value) {
        {
            panda$core$Object* $tmp5719 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5718 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5719);
            panda$core$Object* $tmp5721 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5722 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5721), p_out);
            result5720 = $tmp5722;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5723 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5723->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5723->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5723, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5720));
            panda$collections$Array$add$panda$collections$Array$T(inline5718->returns, ((panda$core$Object*) $tmp5723));
            panda$core$String* $tmp5726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5725, inline5718->exitLabel);
            panda$core$String* $tmp5728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5726, &$s5727);
            (($fn5729) p_out->$class->vtable[19])(p_out, $tmp5728);
        }
        }
        else {
        {
            panda$core$Object* $tmp5731 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5732 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5731), p_out);
            panda$core$String* $tmp5733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5730, $tmp5732);
            panda$core$String* $tmp5735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5733, &$s5734);
            (($fn5736) p_out->$class->vtable[19])(p_out, $tmp5735);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5737 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5738 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5737, ((panda$core$Int64) { 0 }));
        if ($tmp5738.value) {
        {
            panda$core$Object* $tmp5740 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5739, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5740)->exitLabel);
            panda$core$String* $tmp5743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5741, &$s5742);
            (($fn5744) p_out->$class->vtable[19])(p_out, $tmp5743);
        }
        }
        else {
        {
            (($fn5746) p_out->$class->vtable[19])(p_out, &$s5745);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5750;
    panda$core$Int64 $tmp5747 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5748 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5747, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5748.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5749 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5749);
    }
    }
    panda$core$Int64 $tmp5751 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5750, ((panda$core$Int64) { 0 }), $tmp5751, ((panda$core$Bit) { false }));
    int64_t $tmp5753 = $tmp5750.min.value;
    panda$core$Int64 i5752 = { $tmp5753 };
    int64_t $tmp5755 = $tmp5750.max.value;
    bool $tmp5756 = $tmp5750.inclusive.value;
    if ($tmp5756) goto $l5763; else goto $l5764;
    $l5763:;
    if ($tmp5753 <= $tmp5755) goto $l5757; else goto $l5759;
    $l5764:;
    if ($tmp5753 < $tmp5755) goto $l5757; else goto $l5759;
    $l5757:;
    {
        panda$core$Object* $tmp5766 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5752);
        bool $tmp5765 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5766)->loopLabel != NULL }).value;
        if (!$tmp5765) goto $l5767;
        panda$core$Object* $tmp5768 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5752);
        panda$core$Bit $tmp5769 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5768)->loopLabel, p_name);
        $tmp5765 = $tmp5769.value;
        $l5767:;
        panda$core$Bit $tmp5770 = { $tmp5765 };
        if ($tmp5770.value) {
        {
            panda$core$Object* $tmp5771 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5752);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5771);
        }
        }
    }
    $l5760:;
    int64_t $tmp5773 = $tmp5755 - i5752.value;
    if ($tmp5756) goto $l5774; else goto $l5775;
    $l5774:;
    if ($tmp5773 >= 1) goto $l5772; else goto $l5759;
    $l5775:;
    if ($tmp5773 > 1) goto $l5772; else goto $l5759;
    $l5772:;
    i5752.value += 1;
    goto $l5757;
    $l5759:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5778;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5779 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5778 = $tmp5779;
    panda$core$String* $tmp5781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5780, desc5778->breakLabel);
    panda$core$String* $tmp5783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5781, &$s5782);
    (($fn5784) p_out->$class->vtable[19])(p_out, $tmp5783);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5785;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5786 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5785 = $tmp5786;
    panda$core$String* $tmp5788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5787, desc5785->continueLabel);
    panda$core$String* $tmp5790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5788, &$s5789);
    (($fn5791) p_out->$class->vtable[19])(p_out, $tmp5790);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* test5801;
    panda$core$String* ifTrue5804;
    panda$core$String* ifFalse5806;
    panda$core$String* name5819;
    panda$core$String* path5820;
    panda$core$String$Index$nullable index5822;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5825;
    panda$core$String* nameRef5827;
    panda$core$String* line5829;
    panda$core$String* msg5834;
    panda$collections$Iterator* m$Iter5841;
    org$pandalanguage$pandac$MethodDecl* m5855;
    panda$core$Bit $tmp5792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5792.value);
    panda$core$Int64 $tmp5794 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5794, ((panda$core$Int64) { 1 }));
    bool $tmp5793 = $tmp5795.value;
    if ($tmp5793) goto $l5796;
    panda$core$Int64 $tmp5797 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5797, ((panda$core$Int64) { 2 }));
    $tmp5793 = $tmp5798.value;
    $l5796:;
    panda$core$Bit $tmp5799 = { $tmp5793 };
    PANDA_ASSERT($tmp5799.value);
    panda$core$Bit $tmp5800 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5800.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5802 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5803 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5802), p_out);
    test5801 = $tmp5803;
    panda$core$String* $tmp5805 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5804 = $tmp5805;
    panda$core$String* $tmp5807 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5806 = $tmp5807;
    panda$core$String* $tmp5809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5808, test5801);
    panda$core$String* $tmp5811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5809, &$s5810);
    panda$core$String* $tmp5812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5811, ifTrue5804);
    panda$core$String* $tmp5814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5812, &$s5813);
    panda$core$String* $tmp5815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5814, ifFalse5806);
    panda$core$String* $tmp5817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5815, &$s5816);
    (($fn5818) p_out->$class->vtable[19])(p_out, $tmp5817);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse5806, p_out);
    panda$core$Object* $tmp5821 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path5820 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5821)->source->path;
    panda$core$String$Index$nullable $tmp5824 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path5820, &$s5823);
    index5822 = $tmp5824;
    if (((panda$core$Bit) { !index5822.nonnull }).value) {
    {
        name5819 = path5820;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp5825, index5822, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5826 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path5820, $tmp5825);
        name5819 = $tmp5826;
    }
    }
    panda$core$String* $tmp5828 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, name5819, p_out);
    nameRef5827 = $tmp5828;
    panda$core$String* $tmp5831 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5830, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp5833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5831, &$s5832);
    line5829 = $tmp5833;
    panda$core$Int64 $tmp5835 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5835, ((panda$core$Int64) { 2 }));
    if ($tmp5836.value) {
    {
        panda$core$Object* $tmp5837 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5838 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5837), p_out);
        msg5834 = $tmp5838;
    }
    }
    else {
    {
        msg5834 = NULL;
    }
    }
    (($fn5840) p_out->$class->vtable[16])(p_out, &$s5839);
    {
        org$pandalanguage$pandac$Type* $tmp5842 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp5843 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp5842);
        ITable* $tmp5844 = ((panda$collections$Iterable*) $tmp5843->methods)->$class->itable;
        while ($tmp5844->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5844 = $tmp5844->next;
        }
        $fn5846 $tmp5845 = $tmp5844->methods[0];
        panda$collections$Iterator* $tmp5847 = $tmp5845(((panda$collections$Iterable*) $tmp5843->methods));
        m$Iter5841 = $tmp5847;
        $l5848:;
        ITable* $tmp5850 = m$Iter5841->$class->itable;
        while ($tmp5850->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5850 = $tmp5850->next;
        }
        $fn5852 $tmp5851 = $tmp5850->methods[0];
        panda$core$Bit $tmp5853 = $tmp5851(m$Iter5841);
        panda$core$Bit $tmp5854 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5853);
        if (!$tmp5854.value) goto $l5849;
        {
            ITable* $tmp5856 = m$Iter5841->$class->itable;
            while ($tmp5856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5856 = $tmp5856->next;
            }
            $fn5858 $tmp5857 = $tmp5856->methods[1];
            panda$core$Object* $tmp5859 = $tmp5857(m$Iter5841);
            m5855 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5859);
            panda$core$Bit $tmp5861 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5855)->name, &$s5860);
            if ($tmp5861.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m5855);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m5855);
            }
            }
        }
        goto $l5848;
        $l5849:;
    }
    if (((panda$core$Bit) { msg5834 != NULL }).value) {
    {
        panda$core$String* $tmp5864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5862, &$s5863);
        (($fn5865) p_out->$class->vtable[16])(p_out, $tmp5864);
    }
    }
    else {
    {
        (($fn5867) p_out->$class->vtable[16])(p_out, &$s5866);
    }
    }
    panda$core$String* $tmp5869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5868, nameRef5827);
    panda$core$String* $tmp5871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5869, &$s5870);
    panda$core$String* $tmp5872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5871, line5829);
    panda$core$String* $tmp5874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5872, &$s5873);
    (($fn5875) p_out->$class->vtable[16])(p_out, $tmp5874);
    if (((panda$core$Bit) { msg5834 != NULL }).value) {
    {
        panda$core$String* $tmp5877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5876, msg5834);
        panda$core$String* $tmp5879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5877, &$s5878);
        (($fn5880) p_out->$class->vtable[16])(p_out, $tmp5879);
    }
    }
    (($fn5882) p_out->$class->vtable[19])(p_out, &$s5881);
    (($fn5884) p_out->$class->vtable[19])(p_out, &$s5883);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue5804, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$OutputStream* p_out) {
    panda$core$String* valueStruct5886;
    org$pandalanguage$pandac$ClassDecl* numberClass5889;
    panda$core$String* value5892;
    org$pandalanguage$pandac$FieldDecl* f5901;
    panda$core$String* switchType5904;
    panda$core$String* endLabel5914;
    panda$collections$Array* whenLabels5916;
    panda$core$String* otherwiseLabel5919;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5930;
    org$pandalanguage$pandac$IRNode* w5945;
    panda$core$String* label5949;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5951;
    panda$core$UInt64 number5967;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5995;
    org$pandalanguage$pandac$IRNode* w6010;
    org$pandalanguage$pandac$IRNode* block6012;
    panda$core$Bit $tmp5885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp5885.value);
    panda$core$Object* $tmp5887 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5888 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5887), p_out);
    valueStruct5886 = $tmp5888;
    panda$core$Object* $tmp5890 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp5891 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5890)->type);
    numberClass5889 = $tmp5891;
    panda$core$String* $tmp5893 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value5892 = $tmp5893;
    panda$core$String* $tmp5894 = panda$core$String$convert$R$panda$core$String(value5892);
    panda$core$String* $tmp5896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5894, &$s5895);
    panda$core$String* $tmp5897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5896, valueStruct5886);
    panda$core$String* $tmp5899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5897, &$s5898);
    (($fn5900) p_out->$class->vtable[19])(p_out, $tmp5899);
    org$pandalanguage$pandac$Symbol* $tmp5903 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass5889->symbolTable, &$s5902);
    f5901 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5903);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f5901);
    panda$core$String* $tmp5905 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f5901->type);
    switchType5904 = $tmp5905;
    panda$core$String* $tmp5907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5906, switchType5904);
    panda$core$String* $tmp5909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5907, &$s5908);
    panda$core$String* $tmp5910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5909, value5892);
    panda$core$String* $tmp5912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5910, &$s5911);
    (($fn5913) p_out->$class->vtable[16])(p_out, $tmp5912);
    panda$core$String* $tmp5915 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel5914 = $tmp5915;
    panda$collections$Array* $tmp5917 = (panda$collections$Array*) malloc(40);
    $tmp5917->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5917->refCount.value = 1;
    panda$collections$Array$init($tmp5917);
    whenLabels5916 = $tmp5917;
    panda$core$Int64 $tmp5920 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp5921 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5920, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5922 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, $tmp5921);
    panda$core$Bit $tmp5923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5922)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp5923.value) {
    {
        panda$core$String* $tmp5924 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel5919 = $tmp5924;
    }
    }
    else {
    {
        otherwiseLabel5919 = endLabel5914;
    }
    }
    panda$core$String* $tmp5926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5925, otherwiseLabel5919);
    panda$core$String* $tmp5928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5926, &$s5927);
    (($fn5929) p_out->$class->vtable[19])(p_out, $tmp5928);
    panda$core$Int64 $tmp5931 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5930, ((panda$core$Int64) { 1 }), $tmp5931, ((panda$core$Bit) { false }));
    int64_t $tmp5933 = $tmp5930.min.value;
    panda$core$Int64 i5932 = { $tmp5933 };
    int64_t $tmp5935 = $tmp5930.max.value;
    bool $tmp5936 = $tmp5930.inclusive.value;
    if ($tmp5936) goto $l5943; else goto $l5944;
    $l5943:;
    if ($tmp5933 <= $tmp5935) goto $l5937; else goto $l5939;
    $l5944:;
    if ($tmp5933 < $tmp5935) goto $l5937; else goto $l5939;
    $l5937:;
    {
        panda$core$Object* $tmp5946 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5932);
        w5945 = ((org$pandalanguage$pandac$IRNode*) $tmp5946);
        panda$core$Bit $tmp5947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5945->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp5947.value) {
        {
            goto $l5940;
        }
        }
        panda$core$Bit $tmp5948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5945->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp5948.value);
        panda$core$String* $tmp5950 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label5949 = $tmp5950;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels5916, ((panda$core$Object*) label5949));
        panda$core$Int64 $tmp5952 = panda$collections$Array$get_count$R$panda$core$Int64(w5945->children);
        panda$core$Int64 $tmp5953 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5952, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5951, ((panda$core$Int64) { 0 }), $tmp5953, ((panda$core$Bit) { false }));
        int64_t $tmp5955 = $tmp5951.min.value;
        panda$core$Int64 i5954 = { $tmp5955 };
        int64_t $tmp5957 = $tmp5951.max.value;
        bool $tmp5958 = $tmp5951.inclusive.value;
        if ($tmp5958) goto $l5965; else goto $l5966;
        $l5965:;
        if ($tmp5955 <= $tmp5957) goto $l5959; else goto $l5961;
        $l5966:;
        if ($tmp5955 < $tmp5957) goto $l5959; else goto $l5961;
        $l5959:;
        {
            panda$core$Object* $tmp5968 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5945->children, i5954);
            panda$core$UInt64 $tmp5969 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5968));
            number5967 = $tmp5969;
            panda$core$String* $tmp5971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5970, switchType5904);
            panda$core$String* $tmp5973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5971, &$s5972);
            panda$core$String* $tmp5974 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5973, ((panda$core$Object*) wrap_panda$core$UInt64(number5967)));
            panda$core$String* $tmp5976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5974, &$s5975);
            panda$core$String* $tmp5977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5976, label5949);
            panda$core$String* $tmp5979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5977, &$s5978);
            (($fn5980) p_out->$class->vtable[19])(p_out, $tmp5979);
        }
        $l5962:;
        int64_t $tmp5982 = $tmp5957 - i5954.value;
        if ($tmp5958) goto $l5983; else goto $l5984;
        $l5983:;
        if ($tmp5982 >= 1) goto $l5981; else goto $l5961;
        $l5984:;
        if ($tmp5982 > 1) goto $l5981; else goto $l5961;
        $l5981:;
        i5954.value += 1;
        goto $l5959;
        $l5961:;
    }
    $l5940:;
    int64_t $tmp5988 = $tmp5935 - i5932.value;
    if ($tmp5936) goto $l5989; else goto $l5990;
    $l5989:;
    if ($tmp5988 >= 1) goto $l5987; else goto $l5939;
    $l5990:;
    if ($tmp5988 > 1) goto $l5987; else goto $l5939;
    $l5987:;
    i5932.value += 1;
    goto $l5937;
    $l5939:;
    (($fn5994) p_out->$class->vtable[19])(p_out, &$s5993);
    panda$core$Int64 $tmp5996 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5995, ((panda$core$Int64) { 1 }), $tmp5996, ((panda$core$Bit) { false }));
    int64_t $tmp5998 = $tmp5995.min.value;
    panda$core$Int64 i5997 = { $tmp5998 };
    int64_t $tmp6000 = $tmp5995.max.value;
    bool $tmp6001 = $tmp5995.inclusive.value;
    if ($tmp6001) goto $l6008; else goto $l6009;
    $l6008:;
    if ($tmp5998 <= $tmp6000) goto $l6002; else goto $l6004;
    $l6009:;
    if ($tmp5998 < $tmp6000) goto $l6002; else goto $l6004;
    $l6002:;
    {
        panda$core$Object* $tmp6011 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5997);
        w6010 = ((org$pandalanguage$pandac$IRNode*) $tmp6011);
        panda$core$Int64 $tmp6013 = panda$collections$Array$get_count$R$panda$core$Int64(w6010->children);
        panda$core$Int64 $tmp6014 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6013, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp6015 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w6010->children, $tmp6014);
        block6012 = ((org$pandalanguage$pandac$IRNode*) $tmp6015);
        panda$core$Int64 $tmp6016 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5997, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp6017 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels5916);
        panda$core$Bit $tmp6018 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp6016, $tmp6017);
        if ($tmp6018.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, otherwiseLabel5919, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp6019 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5997, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp6020 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels5916, $tmp6019);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ((panda$core$String*) $tmp6020), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block6012, p_out);
        panda$core$Bit $tmp6021 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block6012);
        panda$core$Bit $tmp6022 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6021);
        if ($tmp6022.value) {
        {
            panda$core$String* $tmp6024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6023, endLabel5914);
            panda$core$String* $tmp6026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6024, &$s6025);
            (($fn6027) p_out->$class->vtable[19])(p_out, $tmp6026);
        }
        }
    }
    $l6005:;
    int64_t $tmp6029 = $tmp6000 - i5997.value;
    if ($tmp6001) goto $l6030; else goto $l6031;
    $l6030:;
    if ($tmp6029 >= 1) goto $l6028; else goto $l6004;
    $l6031:;
    if ($tmp6029 > 1) goto $l6028; else goto $l6004;
    $l6028:;
    i5997.value += 1;
    goto $l6002;
    $l6004:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel5914, p_out);
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
    panda$core$String* result6034;
    org$pandalanguage$pandac$Type* $tmp6035 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp6036 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6035);
    result6034 = $tmp6036;
    panda$core$Bit $tmp6038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6037 = $tmp6038.value;
    if (!$tmp6037) goto $l6039;
    panda$core$Bit $tmp6041 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6034, &$s6040);
    panda$core$Bit $tmp6042 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6041);
    $tmp6037 = $tmp6042.value;
    $l6039:;
    panda$core$Bit $tmp6043 = { $tmp6037 };
    if ($tmp6043.value) {
    {
        panda$core$String* $tmp6045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6034, &$s6044);
        return $tmp6045;
    }
    }
    return result6034;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6046;
    panda$core$Bit needsIndirection6055;
    panda$core$String* separator6067;
    panda$collections$Iterator* p$Iter6086;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6098;
    panda$core$String* $tmp6047 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6046 = $tmp6047;
    panda$core$Bit $tmp6048 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6046));
    if ($tmp6048.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6046));
    panda$core$String* $tmp6050 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6049, $tmp6050);
    panda$core$String* $tmp6053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6051, &$s6052);
    (($fn6054) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6053);
    panda$core$Bit $tmp6056 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6055 = $tmp6056;
    if (needsIndirection6055.value) {
    {
        (($fn6058) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6057);
    }
    }
    else {
    {
        panda$core$String* $tmp6059 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6060) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6059);
    }
    }
    panda$core$String* $tmp6062 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6061, $tmp6062);
    panda$core$String* $tmp6065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6063, &$s6064);
    (($fn6066) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6065);
    separator6067 = &$s6068;
    if (needsIndirection6055.value) {
    {
        panda$core$String* $tmp6069 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6070 = panda$core$String$convert$R$panda$core$String($tmp6069);
        panda$core$String* $tmp6072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6070, &$s6071);
        (($fn6073) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6072);
        separator6067 = &$s6074;
    }
    }
    panda$core$Bit $tmp6075 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6076 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6075);
    if ($tmp6076.value) {
    {
        panda$core$String* $tmp6077 = panda$core$String$convert$R$panda$core$String(separator6067);
        panda$core$String* $tmp6079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6077, &$s6078);
        panda$core$String* $tmp6080 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6079, $tmp6080);
        panda$core$String* $tmp6083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6081, &$s6082);
        (($fn6084) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6083);
        separator6067 = &$s6085;
    }
    }
    {
        ITable* $tmp6087 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6087->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6087 = $tmp6087->next;
        }
        $fn6089 $tmp6088 = $tmp6087->methods[0];
        panda$collections$Iterator* $tmp6090 = $tmp6088(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6086 = $tmp6090;
        $l6091:;
        ITable* $tmp6093 = p$Iter6086->$class->itable;
        while ($tmp6093->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6093 = $tmp6093->next;
        }
        $fn6095 $tmp6094 = $tmp6093->methods[0];
        panda$core$Bit $tmp6096 = $tmp6094(p$Iter6086);
        panda$core$Bit $tmp6097 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6096);
        if (!$tmp6097.value) goto $l6092;
        {
            ITable* $tmp6099 = p$Iter6086->$class->itable;
            while ($tmp6099->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6099 = $tmp6099->next;
            }
            $fn6101 $tmp6100 = $tmp6099->methods[1];
            panda$core$Object* $tmp6102 = $tmp6100(p$Iter6086);
            p6098 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6102);
            panda$core$String* $tmp6103 = panda$core$String$convert$R$panda$core$String(separator6067);
            panda$core$String* $tmp6105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6103, &$s6104);
            panda$core$String* $tmp6106 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6098->type);
            panda$core$String* $tmp6107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6105, $tmp6106);
            panda$core$String* $tmp6109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6107, &$s6108);
            panda$core$String* $tmp6110 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6098->name);
            panda$core$String* $tmp6111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6109, $tmp6110);
            panda$core$String* $tmp6113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6111, &$s6112);
            (($fn6114) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6113);
            separator6067 = &$s6115;
        }
        goto $l6091;
        $l6092:;
    }
    (($fn6117) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6116);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6140;
    panda$collections$Iterator* p$Iter6150;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6162;
    panda$io$MemoryOutputStream* bodyBuffer6183;
    panda$collections$Iterator* s$Iter6186;
    org$pandalanguage$pandac$IRNode* s6198;
    panda$core$Object* $tmp6118 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6118)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6119;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$io$MemoryOutputStream* $tmp6120 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6120->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6120->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6120);
    self->methodHeader = $tmp6120;
    (($fn6123) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6122);
    panda$core$Bit $tmp6124 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6124.value) {
    {
        (($fn6126) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6125);
    }
    }
    panda$core$String* $tmp6127 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6128 = panda$core$String$convert$R$panda$core$String($tmp6127);
    panda$core$String* $tmp6130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6128, &$s6129);
    panda$core$String* $tmp6131 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6130, $tmp6131);
    panda$core$String* $tmp6134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6132, &$s6133);
    panda$core$String* $tmp6135 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6134, $tmp6135);
    panda$core$String* $tmp6138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6136, &$s6137);
    (($fn6139) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6138);
    separator6140 = &$s6141;
    panda$core$Bit $tmp6142 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6143 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6142);
    if ($tmp6143.value) {
    {
        panda$core$String* $tmp6144 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6145 = panda$core$String$convert$R$panda$core$String($tmp6144);
        panda$core$String* $tmp6147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6145, &$s6146);
        (($fn6148) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6147);
        separator6140 = &$s6149;
    }
    }
    {
        ITable* $tmp6151 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6151 = $tmp6151->next;
        }
        $fn6153 $tmp6152 = $tmp6151->methods[0];
        panda$collections$Iterator* $tmp6154 = $tmp6152(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6150 = $tmp6154;
        $l6155:;
        ITable* $tmp6157 = p$Iter6150->$class->itable;
        while ($tmp6157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6157 = $tmp6157->next;
        }
        $fn6159 $tmp6158 = $tmp6157->methods[0];
        panda$core$Bit $tmp6160 = $tmp6158(p$Iter6150);
        panda$core$Bit $tmp6161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6160);
        if (!$tmp6161.value) goto $l6156;
        {
            ITable* $tmp6163 = p$Iter6150->$class->itable;
            while ($tmp6163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6163 = $tmp6163->next;
            }
            $fn6165 $tmp6164 = $tmp6163->methods[1];
            panda$core$Object* $tmp6166 = $tmp6164(p$Iter6150);
            p6162 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6166);
            panda$core$String* $tmp6167 = panda$core$String$convert$R$panda$core$String(separator6140);
            panda$core$String* $tmp6169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6167, &$s6168);
            panda$core$String* $tmp6170 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6162->type);
            panda$core$String* $tmp6171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6169, $tmp6170);
            panda$core$String* $tmp6173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6171, &$s6172);
            panda$core$String* $tmp6174 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6162->name);
            panda$core$String* $tmp6175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6173, $tmp6174);
            panda$core$String* $tmp6177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6175, &$s6176);
            (($fn6178) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6177);
            separator6140 = &$s6179;
        }
        goto $l6155;
        $l6156:;
    }
    (($fn6181) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6180);
    panda$core$Bit $tmp6182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6182.value);
    panda$io$MemoryOutputStream* $tmp6184 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6184->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6184->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6184);
    bodyBuffer6183 = $tmp6184;
    {
        ITable* $tmp6187 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6187->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6187 = $tmp6187->next;
        }
        $fn6189 $tmp6188 = $tmp6187->methods[0];
        panda$collections$Iterator* $tmp6190 = $tmp6188(((panda$collections$Iterable*) p_body->children));
        s$Iter6186 = $tmp6190;
        $l6191:;
        ITable* $tmp6193 = s$Iter6186->$class->itable;
        while ($tmp6193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6193 = $tmp6193->next;
        }
        $fn6195 $tmp6194 = $tmp6193->methods[0];
        panda$core$Bit $tmp6196 = $tmp6194(s$Iter6186);
        panda$core$Bit $tmp6197 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6196);
        if (!$tmp6197.value) goto $l6192;
        {
            ITable* $tmp6199 = s$Iter6186->$class->itable;
            while ($tmp6199->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6199 = $tmp6199->next;
            }
            $fn6201 $tmp6200 = $tmp6199->methods[1];
            panda$core$Object* $tmp6202 = $tmp6200(s$Iter6186);
            s6198 = ((org$pandalanguage$pandac$IRNode*) $tmp6202);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s6198, ((panda$io$OutputStream*) bodyBuffer6183));
        }
        goto $l6191;
        $l6192:;
    }
    panda$core$String* $tmp6203 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeader);
    (($fn6204) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6203);
    panda$core$String* $tmp6205 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer6183);
    (($fn6206) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6205);
    panda$core$Bit $tmp6207 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6208 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6207);
    if ($tmp6208.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6209 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6210 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6209);
        if ($tmp6210.value) {
        {
            (($fn6212) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6211);
        }
        }
        else {
        {
            (($fn6214) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6213);
        }
        }
    }
    }
    (($fn6216) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6215);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6217 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6217.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6218 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6218);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

