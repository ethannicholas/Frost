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
typedef void (*$fn2733)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2780)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2787)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2798)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2804)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2810)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2816)(panda$collections$Iterator*);
typedef void (*$fn2827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2829)(panda$io$OutputStream*);
typedef void (*$fn2854)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2872)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2974)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2986)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2991)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3004)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3011)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3016)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3022)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3028)(panda$collections$Iterator*);
typedef void (*$fn3036)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3039)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3051)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3074)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3089)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3100)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3121)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3132)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3186)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3207)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3239)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3257)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3288)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3305)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3327)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3347)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3367)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3384)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3399)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3410)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3460)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3490)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3514)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3527)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3604)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3659)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3700)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3714)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3736)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3746)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3759)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3786)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3801)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3834)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3846)(panda$collections$CollectionView*);
typedef void (*$fn3857)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3864)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3870)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3876)(panda$collections$Iterator*);
typedef void (*$fn3885)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3888)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3925)(panda$collections$CollectionView*);
typedef void (*$fn3937)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3960)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3983)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3991)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3999)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4008)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4030)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4038)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4047)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4079)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4090)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4133)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4139)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4145)(panda$collections$Iterator*);
typedef void (*$fn4167)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4194)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4219)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4247)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4359)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4375)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4392)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4396)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4402)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4408)(panda$collections$Iterator*);
typedef void (*$fn4410)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4411)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4414)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4437)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4452)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4465)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4476)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4512)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4519)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4531)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4540)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4557)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4571)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4580)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4589)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4632)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4651)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4662)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4681)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4692)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4714)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4731)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4744)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4756)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4767)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4779)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4790)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4802)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4814)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4822)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4836)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4841)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4877)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4884)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4896)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4922)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4936)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4945)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4954)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4968)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4977)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5017)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5029)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5046)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5065)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5076)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5095)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5106)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5123)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5142)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5153)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5172)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5198)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5205)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5222)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5237)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5265)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5276)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5291)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5302)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5317)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5329)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5342)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5355)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5366)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5379)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5390)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5405)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5417)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5425)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5439)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5444)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5467)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5479)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5490)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5499)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5518)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5530)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5541)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5550)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5564)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5573)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5598)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5615)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5621)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5627)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5653)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5670)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5699)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5719)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5740)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5777)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5798)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5805)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5813)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5815)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5853)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5860)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5887)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5909)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5915)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5921)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5927)(panda$collections$Iterator*);
typedef void (*$fn5934)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5936)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5944)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5949)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5951)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5953)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5969)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5982)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5998)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6049)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6063)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6096)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6123)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6127)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6129)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6135)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6142)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6153)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6158)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6164)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6170)(panda$collections$Iterator*);
typedef void (*$fn6183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6186)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6192)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6195)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6208)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6217)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6222)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6228)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6234)(panda$collections$Iterator*);
typedef void (*$fn6247)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6250)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6258)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6264)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6270)(panda$collections$Iterator*);
typedef void (*$fn6273)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6275)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6281)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6283)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6285)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, 2005081535935103476, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 146543380183876, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, 22799530931, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 171978245881277, NULL };
static panda$core$String $s2942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s2972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s2977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 14324499638457470, NULL };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s2999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s3002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1450073858438092980, NULL };
static panda$core$String $s3111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1983470, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s3174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 25, -6025032490972529456, NULL };
static panda$core$String $s3181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 22, 3938018972516606829, NULL };
static panda$core$String $s3184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, -6901405387198259419, NULL };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, -5055193716233257020, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, -38380777888947644, NULL };
static panda$core$String $s3224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s3227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1971047, NULL };
static panda$core$String $s3424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, -7594506016420023174, NULL };
static panda$core$String $s3427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s3432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 2084875595949565210, NULL };
static panda$core$String $s3508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 22699766057, NULL };
static panda$core$String $s3539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 223587553, NULL };
static panda$core$String $s3540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 230799660, NULL };
static panda$core$String $s3581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 212358244529747, NULL };
static panda$core$String $s3590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s3706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s3712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s3776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s3784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 21489501287, NULL };
static panda$core$String $s3789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 3556234982078979695, NULL };
static panda$core$String $s3791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x69\x38\x2A\x2A\x20", 11, -1701017812076485794, NULL };
static panda$core$String $s3798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s3813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 175539598599330, NULL };
static panda$core$String $s3839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1410364661239, NULL };
static panda$core$String $s3852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, -4682671939848071135, NULL };
static panda$core$String $s3855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s3859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 2107094, NULL };
static panda$core$String $s3883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s3891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 17208241946, NULL };
static panda$core$String $s3893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, -4560911471279777923, NULL };
static panda$core$String $s3903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 54, -4410989833928586841, NULL };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, -1652634297463438611, NULL };
static panda$core$String $s3915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, -1388553655089279848, NULL };
static panda$core$String $s3928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s3931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s3934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20\x69\x38\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 14, 8437322619071490889, NULL };
static panda$core$String $s3941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 14479861264, NULL };
static panda$core$String $s3947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, 24050909224991147, NULL };
static panda$core$String $s3978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, -1449709338160382639, NULL };
static panda$core$String $s3989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, 149724671, NULL };
static panda$core$String $s3994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s3997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s4003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s4006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 24050909225001348, NULL };
static panda$core$String $s4025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s4036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s4042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s4045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s4057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 2138506394783058478, NULL };
static panda$core$String $s4059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s4070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s4077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 141826750873303, NULL };
static panda$core$String $s4085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 13886901203, NULL };
static panda$core$String $s4088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s4160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s4189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s4206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s4213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 214439158056679, NULL };
static panda$core$String $s4242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s4245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s4248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 2149145203081189652, NULL };
static panda$core$String $s4250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s4320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s4354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s4366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s4526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s4544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s4547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s4558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s4584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s4605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s4612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s4615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s4620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s4629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s4642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s4672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s4699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s4751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s4774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s4797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s4809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s4812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s4815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s4817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s4891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s4909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s4912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s4923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s4949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s4956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s4960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, -8455018733144080751, NULL };
static panda$core$String $s4963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s4966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1527347502952, NULL };
static panda$core$String $s4993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s5000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s5003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s5005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s5009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 5640068998409967338, NULL };
static panda$core$String $s5012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 150, NULL };
static panda$core$String $s5019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s5056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s5086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 2091237, NULL };
static panda$core$String $s5133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 2092752, NULL };
static panda$core$String $s5163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s5327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s5397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s5412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s5415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s5418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s5420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s5581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s5685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 5661491935713932202, NULL };
static panda$core$String $s5696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s5713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s5717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s5726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s5803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s5849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s5899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s5901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s5908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x66\x61\x73\x74\x63\x63\x20\x76\x6F\x69\x64\x20", 17, 8605580293215133655, NULL };
static panda$core$String $s5929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1112391861657830585, NULL };
static panda$core$String $s5931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, -3426205430399916046, NULL };
static panda$core$String $s5932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, -6932554582644871757, NULL };
static panda$core$String $s5935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, -418642434149121372, NULL };
static panda$core$String $s5937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, -3066853447063148068, NULL };
static panda$core$String $s5939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 3939743058867758116, NULL };
static panda$core$String $s5947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s5952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s5964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s5975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, 230550101366891, NULL };
static panda$core$String $s5977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 13524, NULL };
static panda$core$String $s6039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, 14293708514290657, NULL };
static panda$core$String $s6041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s6047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, 13873332722, NULL };
static panda$core$String $s6092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s6094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 21658185952146853, NULL };
static panda$core$String $s6121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s6130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s6188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s6191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s6194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s6198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s6280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s6282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s6284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };

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
    panda$core$Int64 $tmp1969 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1969, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1970.value);
    panda$core$Object* $tmp1971 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1972 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
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
            panda$core$Int64 $tmp2411 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2411, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2412.value);
            panda$core$Object* $tmp2414 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
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
            panda$core$Int64 $tmp2475 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2475, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2476.value);
            panda$core$Object* $tmp2478 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
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
            panda$core$Int64 $tmp2515 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2515, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2516.value);
            panda$core$Object* $tmp2518 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
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
            panda$core$Object* $tmp2539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
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
            panda$core$Int64 $tmp2587 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2587, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2588.value);
            panda$core$Object* $tmp2590 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2591 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2590), p_out);
            ptr2589 = $tmp2591;
            panda$core$String* $tmp2593 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2592 = $tmp2593;
            panda$core$String* $tmp2594 = panda$core$String$convert$R$panda$core$String(ptrCast2592);
            panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, &$s2595);
            panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, ptr2589);
            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2598);
            (($fn2600) p_out->$class->vtable[19])(p_out, $tmp2599);
            panda$core$Object* $tmp2602 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
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
            panda$core$Int64 $tmp2663 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2663, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2664.value);
            panda$core$Object* $tmp2666 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2667 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2666), p_out);
            ptr2665 = $tmp2667;
            panda$core$Object* $tmp2669 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2670 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2669)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2671 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2670));
            baseType2668 = $tmp2671;
            panda$core$Object* $tmp2673 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
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
    panda$core$String* selfLoad2716;
    panda$core$String* t2718;
    panda$collections$Array* args2734;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2737;
    panda$core$String* end2760;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2769;
    org$pandalanguage$pandac$MethodDecl* old2776;
    panda$core$String* phi2789;
    panda$core$String* separator2799;
    panda$collections$Iterator* ret$Iter2801;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2813;
    m2699 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) m2699->owner));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2699), ((panda$core$Object*) m2699));
    selfRef2700 = &$s2701;
    panda$core$Bit $tmp2703 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2699);
    if ($tmp2703.value) {
    {
        argStart2702 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2704 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2705 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2704), p_out);
        selfRef2700 = $tmp2705;
        panda$core$Bit $tmp2708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->currentMethod->methodKind, ((panda$core$Int64) { 59 }));
        bool $tmp2707 = $tmp2708.value;
        if (!$tmp2707) goto $l2709;
        panda$core$Object* $tmp2710 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2710)->kind, ((panda$core$Int64) { 1025 }));
        $tmp2707 = $tmp2711.value;
        $l2709:;
        panda$core$Bit $tmp2712 = { $tmp2707 };
        bool $tmp2706 = $tmp2712.value;
        if (!$tmp2706) goto $l2713;
        panda$core$Bit $tmp2714 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, self->currentMethod->owner);
        $tmp2706 = $tmp2714.value;
        $l2713:;
        panda$core$Bit $tmp2715 = { $tmp2706 };
        if ($tmp2715.value) {
        {
            panda$core$String* $tmp2717 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            selfLoad2716 = $tmp2717;
            org$pandalanguage$pandac$Type* $tmp2719 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
            panda$core$String* $tmp2720 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2719);
            t2718 = $tmp2720;
            panda$core$String* $tmp2721 = panda$core$String$convert$R$panda$core$String(selfLoad2716);
            panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, &$s2722);
            panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, t2718);
            panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2724, &$s2725);
            panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, t2718);
            panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2727, &$s2728);
            panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, selfRef2700);
            panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2730, &$s2731);
            (($fn2733) p_out->$class->vtable[19])(p_out, $tmp2732);
            selfRef2700 = selfLoad2716;
        }
        }
    }
    }
    else {
    {
        argStart2702 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2735 = (panda$collections$Array*) malloc(40);
    $tmp2735->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2735->refCount.value = 1;
    panda$collections$Array$init($tmp2735);
    args2734 = $tmp2735;
    panda$core$Int64 $tmp2738 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2737, argStart2702, $tmp2738, ((panda$core$Bit) { false }));
    int64_t $tmp2740 = $tmp2737.min.value;
    panda$core$Int64 i2739 = { $tmp2740 };
    int64_t $tmp2742 = $tmp2737.max.value;
    bool $tmp2743 = $tmp2737.inclusive.value;
    if ($tmp2743) goto $l2750; else goto $l2751;
    $l2750:;
    if ($tmp2740 <= $tmp2742) goto $l2744; else goto $l2746;
    $l2751:;
    if ($tmp2740 < $tmp2742) goto $l2744; else goto $l2746;
    $l2744:;
    {
        panda$core$Object* $tmp2752 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2739);
        panda$core$String* $tmp2753 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2752), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2734, ((panda$core$Object*) $tmp2753));
    }
    $l2747:;
    int64_t $tmp2755 = $tmp2742 - i2739.value;
    if ($tmp2743) goto $l2756; else goto $l2757;
    $l2756:;
    if ($tmp2755 >= 1) goto $l2754; else goto $l2746;
    $l2757:;
    if ($tmp2755 > 1) goto $l2754; else goto $l2746;
    $l2754:;
    i2739.value += 1;
    goto $l2744;
    $l2746:;
    panda$core$String* $tmp2761 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2760 = $tmp2761;
    panda$core$Int64 $tmp2762 = panda$collections$Array$get_count$R$panda$core$Int64(args2734);
    panda$core$Int64 $tmp2763 = panda$collections$Array$get_count$R$panda$core$Int64(m2699->parameters);
    panda$core$Bit $tmp2764 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2762, $tmp2763);
    if ($tmp2764.value) {
    {
        panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2765, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2766, &$s2767);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2768));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2770 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2770->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2770->refCount.value = 1;
    panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2772, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2773, &$s2774);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2770, $tmp2775, selfRef2700, ((panda$collections$ListView*) args2734), end2760);
    inline2769 = $tmp2770;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2769));
    old2776 = self->currentMethod;
    self->currentMethod = m2699;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_body, p_out);
    self->currentMethod = old2776;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2777 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2778 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2777);
    if ($tmp2778.value) {
    {
        (($fn2780) p_out->$class->vtable[19])(p_out, &$s2779);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end2760, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2699));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    panda$core$Int64 $tmp2781 = panda$collections$Array$get_count$R$panda$core$Int64(inline2769->returns);
    panda$core$Bit $tmp2782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2781, ((panda$core$Int64) { 1 }));
    if ($tmp2782.value) {
    {
        panda$core$Object* $tmp2783 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2769->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2783)->second);
    }
    }
    panda$core$Int64 $tmp2784 = panda$collections$Array$get_count$R$panda$core$Int64(inline2769->returns);
    panda$core$Bit $tmp2785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2784, ((panda$core$Int64) { 0 }));
    if ($tmp2785.value) {
    {
        (($fn2787) p_out->$class->vtable[16])(p_out, &$s2786);
        return &$s2788;
    }
    }
    panda$core$String* $tmp2790 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2789 = $tmp2790;
    panda$core$String* $tmp2791 = panda$core$String$convert$R$panda$core$String(phi2789);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, &$s2792);
    panda$core$String* $tmp2794 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2699->returnType);
    panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, $tmp2794);
    panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, &$s2796);
    (($fn2798) p_out->$class->vtable[16])(p_out, $tmp2797);
    separator2799 = &$s2800;
    {
        ITable* $tmp2802 = ((panda$collections$Iterable*) inline2769->returns)->$class->itable;
        while ($tmp2802->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2802 = $tmp2802->next;
        }
        $fn2804 $tmp2803 = $tmp2802->methods[0];
        panda$collections$Iterator* $tmp2805 = $tmp2803(((panda$collections$Iterable*) inline2769->returns));
        ret$Iter2801 = $tmp2805;
        $l2806:;
        ITable* $tmp2808 = ret$Iter2801->$class->itable;
        while ($tmp2808->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2808 = $tmp2808->next;
        }
        $fn2810 $tmp2809 = $tmp2808->methods[0];
        panda$core$Bit $tmp2811 = $tmp2809(ret$Iter2801);
        panda$core$Bit $tmp2812 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2811);
        if (!$tmp2812.value) goto $l2807;
        {
            ITable* $tmp2814 = ret$Iter2801->$class->itable;
            while ($tmp2814->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2814 = $tmp2814->next;
            }
            $fn2816 $tmp2815 = $tmp2814->methods[1];
            panda$core$Object* $tmp2817 = $tmp2815(ret$Iter2801);
            ret2813 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2817);
            panda$core$String* $tmp2818 = panda$core$String$convert$R$panda$core$String(separator2799);
            panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, &$s2819);
            panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, ((panda$core$String*) ret2813->second));
            panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
            panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, ((panda$core$String*) ret2813->first));
            panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
            (($fn2827) p_out->$class->vtable[16])(p_out, $tmp2826);
            separator2799 = &$s2828;
        }
        goto $l2806;
        $l2807:;
    }
    (($fn2829) p_out->$class->vtable[17])(p_out);
    return phi2789;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2831;
    panda$core$String* bit2841;
    panda$core$String* result2845;
    panda$core$String* bit2859;
    panda$core$String* result2863;
    org$pandalanguage$pandac$IRNode* block2878;
    panda$collections$Array* args2882;
    org$pandalanguage$pandac$Type* actualMethodType2886;
    panda$core$String* actualResultType2887;
    panda$core$Bit isSuper2888;
    panda$core$Int64 offset2908;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2913;
    panda$core$String* arg2928;
    panda$core$String* target2960;
    panda$core$String* methodRef2964;
    panda$core$String* result2966;
    panda$core$Bit indirect2967;
    panda$core$String* separator2992;
    panda$core$String* indirectVar2994;
    panda$collections$Iterator* arg$Iter3013;
    panda$core$String* arg3025;
    panda$core$Bit $tmp2830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2830.value);
    m2831 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2833 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2831->owner)->name, &$s2832);
    if ($tmp2833.value) {
    {
        panda$core$String* $tmp2834 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2834;
    }
    }
    if (m2831->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2831);
    }
    }
    panda$core$Bit $tmp2836 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2831->owner)->name, &$s2835);
    if ($tmp2836.value) {
    {
        panda$core$Bit $tmp2838 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2831)->name, &$s2837);
        if ($tmp2838.value) {
        {
            panda$core$Int64 $tmp2839 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2839, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2840.value);
            panda$core$Object* $tmp2842 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2843 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2844 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2842), ((org$pandalanguage$pandac$IRNode*) $tmp2843), p_out);
            bit2841 = $tmp2844;
            panda$core$String* $tmp2846 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2845 = $tmp2846;
            panda$core$String* $tmp2847 = panda$core$String$convert$R$panda$core$String(result2845);
            panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2847, &$s2848);
            panda$core$String* $tmp2850 = panda$core$String$convert$R$panda$core$String(bit2841);
            panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, &$s2851);
            panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2849, $tmp2852);
            (($fn2854) p_out->$class->vtable[19])(p_out, $tmp2853);
            return result2845;
        }
        }
        panda$core$Bit $tmp2856 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2831)->name, &$s2855);
        if ($tmp2856.value) {
        {
            panda$core$Int64 $tmp2857 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2857, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2858.value);
            panda$core$Object* $tmp2860 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2861 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2862 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2860), ((org$pandalanguage$pandac$IRNode*) $tmp2861), p_out);
            bit2859 = $tmp2862;
            panda$core$String* $tmp2864 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2863 = $tmp2864;
            panda$core$String* $tmp2865 = panda$core$String$convert$R$panda$core$String(result2863);
            panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, &$s2866);
            panda$core$String* $tmp2868 = panda$core$String$convert$R$panda$core$String(bit2859);
            panda$core$String* $tmp2870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2868, &$s2869);
            panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, $tmp2870);
            (($fn2872) p_out->$class->vtable[19])(p_out, $tmp2871);
            return result2863;
        }
        }
    }
    }
    panda$core$Bit $tmp2874 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2831->annotations);
    bool $tmp2873 = $tmp2874.value;
    if (!$tmp2873) goto $l2875;
    panda$core$Object* $tmp2876 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2831));
    $tmp2873 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp2876) == NULL }).value;
    $l2875:;
    panda$core$Bit $tmp2877 = { $tmp2873 };
    if ($tmp2877.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2879 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2831);
        block2878 = $tmp2879;
        if (((panda$core$Bit) { block2878 != NULL }).value) {
        {
            panda$core$String* $tmp2880 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, block2878, p_out);
            return $tmp2880;
        }
        }
        return &$s2881;
    }
    }
    panda$collections$Array* $tmp2883 = (panda$collections$Array*) malloc(40);
    $tmp2883->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2883->refCount.value = 1;
    panda$core$Int64 $tmp2885 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp2883, $tmp2885);
    args2882 = $tmp2883;
    panda$core$Int64 $tmp2890 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2891 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2890, ((panda$core$Int64) { 1 }));
    bool $tmp2889 = $tmp2891.value;
    if (!$tmp2889) goto $l2892;
    panda$core$Object* $tmp2893 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2893)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2889 = $tmp2894.value;
    $l2892:;
    panda$core$Bit $tmp2895 = { $tmp2889 };
    isSuper2888 = $tmp2895;
    panda$core$Bit $tmp2897 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2888);
    bool $tmp2896 = $tmp2897.value;
    if (!$tmp2896) goto $l2898;
    panda$core$Bit $tmp2899 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2831);
    $tmp2896 = $tmp2899.value;
    $l2898:;
    panda$core$Bit $tmp2900 = { $tmp2896 };
    if ($tmp2900.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2901 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2831);
        actualMethodType2886 = $tmp2901;
        panda$core$Int64 $tmp2902 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2886->subtypes);
        panda$core$Int64 $tmp2903 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2902, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2904 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2886->subtypes, $tmp2903);
        panda$core$String* $tmp2905 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2904));
        actualResultType2887 = $tmp2905;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2906 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2831);
        actualMethodType2886 = $tmp2906;
        panda$core$String* $tmp2907 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2887 = $tmp2907;
    }
    }
    panda$core$Int64 $tmp2909 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2910 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2886->subtypes);
    panda$core$Int64 $tmp2911 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2909, $tmp2910);
    panda$core$Int64 $tmp2912 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2911, ((panda$core$Int64) { 1 }));
    offset2908 = $tmp2912;
    panda$core$Int64 $tmp2914 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2913, ((panda$core$Int64) { 0 }), $tmp2914, ((panda$core$Bit) { false }));
    int64_t $tmp2916 = $tmp2913.min.value;
    panda$core$Int64 i2915 = { $tmp2916 };
    int64_t $tmp2918 = $tmp2913.max.value;
    bool $tmp2919 = $tmp2913.inclusive.value;
    if ($tmp2919) goto $l2926; else goto $l2927;
    $l2926:;
    if ($tmp2916 <= $tmp2918) goto $l2920; else goto $l2922;
    $l2927:;
    if ($tmp2916 < $tmp2918) goto $l2920; else goto $l2922;
    $l2920:;
    {
        panda$core$Object* $tmp2929 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2915);
        panda$core$String* $tmp2930 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2929), p_out);
        arg2928 = $tmp2930;
        panda$core$Bit $tmp2932 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2915, offset2908);
        bool $tmp2931 = $tmp2932.value;
        if (!$tmp2931) goto $l2933;
        panda$core$Int64 $tmp2934 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2915, offset2908);
        panda$core$Object* $tmp2935 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2886->subtypes, $tmp2934);
        panda$core$Object* $tmp2936 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2915);
        panda$core$Bit $tmp2937 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2935), ((org$pandalanguage$pandac$IRNode*) $tmp2936)->type);
        $tmp2931 = $tmp2937.value;
        $l2933:;
        panda$core$Bit $tmp2938 = { $tmp2931 };
        if ($tmp2938.value) {
        {
            panda$core$Int64 $tmp2939 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2915, offset2908);
            panda$core$Object* $tmp2940 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2886->subtypes, $tmp2939);
            panda$core$String* $tmp2941 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2940));
            panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2941, &$s2942);
            panda$core$Object* $tmp2944 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2915);
            panda$core$Int64 $tmp2945 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2915, offset2908);
            panda$core$Object* $tmp2946 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2886->subtypes, $tmp2945);
            panda$core$String* $tmp2947 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg2928, ((org$pandalanguage$pandac$IRNode*) $tmp2944)->type, ((org$pandalanguage$pandac$Type*) $tmp2946), p_out);
            panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2943, $tmp2947);
            arg2928 = $tmp2948;
        }
        }
        else {
        {
            panda$core$Object* $tmp2949 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2915);
            panda$core$String* $tmp2950 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2949)->type);
            panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, &$s2951);
            panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, arg2928);
            arg2928 = $tmp2953;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2882, ((panda$core$Object*) arg2928));
    }
    $l2923:;
    int64_t $tmp2955 = $tmp2918 - i2915.value;
    if ($tmp2919) goto $l2956; else goto $l2957;
    $l2956:;
    if ($tmp2955 >= 1) goto $l2954; else goto $l2922;
    $l2957:;
    if ($tmp2955 > 1) goto $l2954; else goto $l2922;
    $l2954:;
    i2915.value += 1;
    goto $l2920;
    $l2922:;
    panda$core$Int64 $tmp2961 = panda$collections$Array$get_count$R$panda$core$Int64(args2882);
    panda$core$Bit $tmp2962 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2961, ((panda$core$Int64) { 0 }));
    if ($tmp2962.value) {
    {
        panda$core$Object* $tmp2963 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2882, ((panda$core$Int64) { 0 }));
        target2960 = ((panda$core$String*) $tmp2963);
    }
    }
    else {
    {
        target2960 = NULL;
    }
    }
    panda$core$String* $tmp2965 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, target2960, m2831, isSuper2888, p_out);
    methodRef2964 = $tmp2965;
    panda$core$Bit $tmp2968 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2831);
    indirect2967 = $tmp2968;
    if (indirect2967.value) {
    {
        panda$core$String* $tmp2970 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2831);
        panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2969, $tmp2970);
        panda$core$String* $tmp2973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2971, &$s2972);
        (($fn2974) p_out->$class->vtable[16])(p_out, $tmp2973);
    }
    }
    else {
    {
        panda$core$String* $tmp2975 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2966 = $tmp2975;
        panda$core$String* $tmp2976 = panda$core$String$convert$R$panda$core$String(result2966);
        panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2976, &$s2977);
        panda$core$String* $tmp2979 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2831);
        panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, $tmp2979);
        panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, &$s2981);
        panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, actualResultType2887);
        panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, &$s2984);
        (($fn2986) p_out->$class->vtable[16])(p_out, $tmp2985);
    }
    }
    panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2987, methodRef2964);
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2988, &$s2989);
    (($fn2991) p_out->$class->vtable[16])(p_out, $tmp2990);
    separator2992 = &$s2993;
    if (indirect2967.value) {
    {
        panda$core$Int64 $tmp2995 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp2995;
        panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2996, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar2994 = $tmp2997;
        panda$core$String* $tmp2998 = panda$core$String$convert$R$panda$core$String(indirectVar2994);
        panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, &$s2999);
        panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3000, actualResultType2887);
        panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, &$s3002);
        (($fn3004) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3003);
        panda$core$String* $tmp3005 = panda$core$String$convert$R$panda$core$String(actualResultType2887);
        panda$core$String* $tmp3007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3005, &$s3006);
        panda$core$String* $tmp3008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3007, indirectVar2994);
        panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3008, &$s3009);
        (($fn3011) p_out->$class->vtable[16])(p_out, $tmp3010);
        separator2992 = &$s3012;
    }
    }
    {
        ITable* $tmp3014 = ((panda$collections$Iterable*) args2882)->$class->itable;
        while ($tmp3014->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3014 = $tmp3014->next;
        }
        $fn3016 $tmp3015 = $tmp3014->methods[0];
        panda$collections$Iterator* $tmp3017 = $tmp3015(((panda$collections$Iterable*) args2882));
        arg$Iter3013 = $tmp3017;
        $l3018:;
        ITable* $tmp3020 = arg$Iter3013->$class->itable;
        while ($tmp3020->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3020 = $tmp3020->next;
        }
        $fn3022 $tmp3021 = $tmp3020->methods[0];
        panda$core$Bit $tmp3023 = $tmp3021(arg$Iter3013);
        panda$core$Bit $tmp3024 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3023);
        if (!$tmp3024.value) goto $l3019;
        {
            ITable* $tmp3026 = arg$Iter3013->$class->itable;
            while ($tmp3026->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3026 = $tmp3026->next;
            }
            $fn3028 $tmp3027 = $tmp3026->methods[1];
            panda$core$Object* $tmp3029 = $tmp3027(arg$Iter3013);
            arg3025 = ((panda$core$String*) $tmp3029);
            panda$core$String* $tmp3030 = panda$core$String$convert$R$panda$core$String(separator2992);
            panda$core$String* $tmp3032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3030, &$s3031);
            panda$core$String* $tmp3033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3032, arg3025);
            panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3033, &$s3034);
            (($fn3036) p_out->$class->vtable[16])(p_out, $tmp3035);
            separator2992 = &$s3037;
        }
        goto $l3018;
        $l3019:;
    }
    (($fn3039) p_out->$class->vtable[19])(p_out, &$s3038);
    if (indirect2967.value) {
    {
        panda$core$String* $tmp3040 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2966 = $tmp3040;
        panda$core$String* $tmp3041 = panda$core$String$convert$R$panda$core$String(result2966);
        panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
        panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3043, actualResultType2887);
        panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, &$s3045);
        panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, actualResultType2887);
        panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3047, &$s3048);
        panda$core$String* $tmp3050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3049, indirectVar2994);
        (($fn3051) p_out->$class->vtable[19])(p_out, $tmp3050);
    }
    }
    panda$core$String* $tmp3052 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3053 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3052, actualResultType2887);
    if ($tmp3053.value) {
    {
        panda$core$Int64 $tmp3054 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2886->subtypes);
        panda$core$Int64 $tmp3055 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3054, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3056 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2886->subtypes, $tmp3055);
        panda$core$String* $tmp3057 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, result2966, ((org$pandalanguage$pandac$Type*) $tmp3056), p_call->type, p_out);
        return $tmp3057;
    }
    }
    return result2966;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3058;
    panda$core$String* testStart3061;
    panda$core$String* isNonNull3062;
    panda$core$String* nonNullLabel3075;
    panda$core$String* endLabel3077;
    panda$core$String* unwrapped3090;
    panda$core$String* nonNullValue3093;
    panda$core$String* result3101;
    panda$core$String* mallocRef3122;
    panda$core$String* wrapperTypeName3133;
    panda$core$String* wrapperType3136;
    panda$core$String* wrapperCast3139;
    panda$core$String* classPtr3151;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3167;
    panda$core$String* ccCast3169;
    panda$core$String* refCount3187;
    panda$core$String* target3208;
    panda$core$String* result3242;
    org$pandalanguage$pandac$ClassDecl* $tmp3059 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3058 = $tmp3059;
    PANDA_ASSERT(((panda$core$Bit) { src3058 != NULL }).value);
    panda$core$Bit $tmp3060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3060.value) {
    {
        testStart3061 = self->currentBlock;
        panda$core$String* $tmp3063 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3062 = $tmp3063;
        panda$core$String* $tmp3064 = panda$core$String$convert$R$panda$core$String(isNonNull3062);
        panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, &$s3065);
        panda$core$String* $tmp3067 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, $tmp3067);
        panda$core$String* $tmp3070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3068, &$s3069);
        panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3070, p_value);
        panda$core$String* $tmp3073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3071, &$s3072);
        (($fn3074) p_out->$class->vtable[19])(p_out, $tmp3073);
        panda$core$String* $tmp3076 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3075 = $tmp3076;
        panda$core$String* $tmp3078 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3077 = $tmp3078;
        panda$core$String* $tmp3080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3079, isNonNull3062);
        panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3080, &$s3081);
        panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3082, nonNullLabel3075);
        panda$core$String* $tmp3085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, &$s3084);
        panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3085, endLabel3077);
        panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3086, &$s3087);
        (($fn3089) p_out->$class->vtable[19])(p_out, $tmp3088);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3075, p_out);
        panda$core$Object* $tmp3091 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3092 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3091), p_out);
        unwrapped3090 = $tmp3092;
        panda$core$Object* $tmp3094 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3095 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, unwrapped3090, ((org$pandalanguage$pandac$Type*) $tmp3094), p_dstType, p_out);
        nonNullValue3093 = $tmp3095;
        panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3096, endLabel3077);
        panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, &$s3098);
        (($fn3100) p_out->$class->vtable[19])(p_out, $tmp3099);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3077, p_out);
        panda$core$String* $tmp3102 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3101 = $tmp3102;
        panda$core$String* $tmp3103 = panda$core$String$convert$R$panda$core$String(result3101);
        panda$core$String* $tmp3105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3103, &$s3104);
        panda$core$String* $tmp3106 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3105, $tmp3106);
        panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, &$s3108);
        panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, testStart3061);
        panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, &$s3111);
        panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3113, nonNullValue3093);
        panda$core$String* $tmp3116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3114, &$s3115);
        panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3116, nonNullLabel3075);
        panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, &$s3118);
        panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, $tmp3119);
        (($fn3121) p_out->$class->vtable[19])(p_out, $tmp3120);
        return result3101;
    }
    }
    panda$core$String* $tmp3123 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3122 = $tmp3123;
    panda$core$String* $tmp3124 = panda$core$String$convert$R$panda$core$String(mallocRef3122);
    panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, &$s3125);
    org$pandalanguage$pandac$Type* $tmp3127 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3058);
    panda$core$Int64 $tmp3128 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3127);
    panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3126, ((panda$core$Object*) wrap_panda$core$Int64($tmp3128)));
    panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, &$s3130);
    (($fn3132) p_out->$class->vtable[19])(p_out, $tmp3131);
    org$pandalanguage$pandac$Type* $tmp3134 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3058);
    panda$core$String* $tmp3135 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3134);
    wrapperTypeName3133 = $tmp3135;
    org$pandalanguage$pandac$Type* $tmp3137 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3058);
    panda$core$String* $tmp3138 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3137);
    wrapperType3136 = $tmp3138;
    panda$core$String* $tmp3140 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3139 = $tmp3140;
    panda$core$String* $tmp3141 = panda$core$String$convert$R$panda$core$String(wrapperCast3139);
    panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, &$s3142);
    panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, mallocRef3122);
    panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3144, &$s3145);
    panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3146, wrapperType3136);
    panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, &$s3148);
    (($fn3150) p_out->$class->vtable[19])(p_out, $tmp3149);
    panda$core$String* $tmp3152 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3151 = $tmp3152;
    panda$core$String* $tmp3153 = panda$core$String$convert$R$panda$core$String(classPtr3151);
    panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3153, &$s3154);
    panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, wrapperTypeName3133);
    panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3156, &$s3157);
    panda$core$String* $tmp3159 = panda$core$String$convert$R$panda$core$String(wrapperType3136);
    panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, &$s3160);
    panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, wrapperCast3139);
    panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, &$s3163);
    panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, $tmp3164);
    (($fn3166) p_out->$class->vtable[19])(p_out, $tmp3165);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3168 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3058);
    cc3167 = $tmp3168;
    panda$core$Bit $tmp3171 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(cc3167->type, &$s3170);
    if ($tmp3171.value) {
    {
        panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3172, cc3167->type);
        panda$core$String* $tmp3175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, &$s3174);
        panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3175, cc3167->name);
        panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, &$s3177);
        ccCast3169 = $tmp3178;
    }
    }
    else {
    {
        ccCast3169 = cc3167->name;
    }
    }
    panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3179, ccCast3169);
    panda$core$String* $tmp3182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3180, &$s3181);
    panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3182, classPtr3151);
    panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3183, &$s3184);
    (($fn3186) p_out->$class->vtable[19])(p_out, $tmp3185);
    panda$core$String* $tmp3188 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3187 = $tmp3188;
    panda$core$String* $tmp3189 = panda$core$String$convert$R$panda$core$String(refCount3187);
    panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3189, &$s3190);
    panda$core$String* $tmp3192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, wrapperTypeName3133);
    panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3192, &$s3193);
    panda$core$String* $tmp3195 = panda$core$String$convert$R$panda$core$String(wrapperType3136);
    panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, &$s3196);
    panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, wrapperCast3139);
    panda$core$String* $tmp3200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3198, &$s3199);
    panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, $tmp3200);
    (($fn3202) p_out->$class->vtable[19])(p_out, $tmp3201);
    panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3203, refCount3187);
    panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, &$s3205);
    (($fn3207) p_out->$class->vtable[19])(p_out, $tmp3206);
    panda$core$String* $tmp3209 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3208 = $tmp3209;
    panda$core$String* $tmp3210 = panda$core$String$convert$R$panda$core$String(target3208);
    panda$core$String* $tmp3212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3210, &$s3211);
    panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3212, wrapperTypeName3133);
    panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3213, &$s3214);
    panda$core$String* $tmp3216 = panda$core$String$convert$R$panda$core$String(wrapperType3136);
    panda$core$String* $tmp3218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3216, &$s3217);
    panda$core$String* $tmp3219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3218, wrapperCast3139);
    panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3219, &$s3220);
    panda$core$String* $tmp3222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3215, $tmp3221);
    (($fn3223) p_out->$class->vtable[19])(p_out, $tmp3222);
    panda$core$String* $tmp3225 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3224, $tmp3225);
    panda$core$String* $tmp3228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3226, &$s3227);
    panda$core$String* $tmp3229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3228, p_value);
    panda$core$String* $tmp3231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3229, &$s3230);
    panda$core$String* $tmp3232 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3231, $tmp3232);
    panda$core$String* $tmp3235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3233, &$s3234);
    panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3235, target3208);
    panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3236, &$s3237);
    (($fn3239) p_out->$class->vtable[19])(p_out, $tmp3238);
    panda$core$String* $tmp3240 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3241 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3136, $tmp3240);
    if ($tmp3241.value) {
    {
        panda$core$String* $tmp3243 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3242 = $tmp3243;
        panda$core$String* $tmp3244 = panda$core$String$convert$R$panda$core$String(result3242);
        panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3244, &$s3245);
        panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, wrapperType3136);
        panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3247, &$s3248);
        panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, wrapperCast3139);
        panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3250, &$s3251);
        panda$core$String* $tmp3253 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3252, $tmp3253);
        panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3254, &$s3255);
        (($fn3257) p_out->$class->vtable[19])(p_out, $tmp3256);
        return result3242;
    }
    }
    return wrapperCast3139;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3261;
    panda$core$String* t3262;
    org$pandalanguage$pandac$ClassDecl* cl3266;
    panda$core$String* base3279;
    panda$collections$ListView* fields3282;
    panda$core$Int64$nullable index3284;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3285;
    panda$core$String* result3313;
    panda$core$String* cast3335;
    panda$core$String* ptr3348;
    panda$core$String* result3356;
    panda$core$Bit $tmp3258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3258.value);
    panda$core$Int64 $tmp3259 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3259, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3260.value);
    field3261 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3263 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3261->type);
    t3262 = $tmp3263;
    panda$core$Bit $tmp3264 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3261->annotations);
    if ($tmp3264.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3261->value != NULL }).value);
        panda$core$String* $tmp3265 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, field3261->value, p_out);
        return $tmp3265;
    }
    }
    panda$core$Object* $tmp3267 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3268 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3267)->type);
    cl3266 = $tmp3268;
    PANDA_ASSERT(((panda$core$Bit) { cl3266 != NULL }).value);
    panda$core$Bit $tmp3270 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3266);
    bool $tmp3269 = $tmp3270.value;
    if (!$tmp3269) goto $l3271;
    panda$core$Object* $tmp3273 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3274 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3273)->kind, ((panda$core$Int64) { 1025 }));
    bool $tmp3272 = $tmp3274.value;
    if ($tmp3272) goto $l3275;
    panda$core$Bit $tmp3276 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->currentMethod->methodKind, ((panda$core$Int64) { 59 }));
    $tmp3272 = $tmp3276.value;
    $l3275:;
    panda$core$Bit $tmp3277 = { $tmp3272 };
    $tmp3269 = $tmp3277.value;
    $l3271:;
    panda$core$Bit $tmp3278 = { $tmp3269 };
    if ($tmp3278.value) {
    {
        panda$core$Object* $tmp3280 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3281 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3280), p_out);
        base3279 = $tmp3281;
        panda$collections$ListView* $tmp3283 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3266);
        fields3282 = $tmp3283;
        index3284 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3286 = ((panda$collections$CollectionView*) fields3282)->$class->itable;
        while ($tmp3286->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3286 = $tmp3286->next;
        }
        $fn3288 $tmp3287 = $tmp3286->methods[0];
        panda$core$Int64 $tmp3289 = $tmp3287(((panda$collections$CollectionView*) fields3282));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3285, ((panda$core$Int64) { 0 }), $tmp3289, ((panda$core$Bit) { false }));
        int64_t $tmp3291 = $tmp3285.min.value;
        panda$core$Int64 i3290 = { $tmp3291 };
        int64_t $tmp3293 = $tmp3285.max.value;
        bool $tmp3294 = $tmp3285.inclusive.value;
        if ($tmp3294) goto $l3301; else goto $l3302;
        $l3301:;
        if ($tmp3291 <= $tmp3293) goto $l3295; else goto $l3297;
        $l3302:;
        if ($tmp3291 < $tmp3293) goto $l3295; else goto $l3297;
        $l3295:;
        {
            ITable* $tmp3303 = fields3282->$class->itable;
            while ($tmp3303->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3303 = $tmp3303->next;
            }
            $fn3305 $tmp3304 = $tmp3303->methods[0];
            panda$core$Object* $tmp3306 = $tmp3304(fields3282, i3290);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3306)) == ((panda$core$Object*) field3261) }).value) {
            {
                index3284 = ((panda$core$Int64$nullable) { i3290, true });
                goto $l3297;
            }
            }
        }
        $l3298:;
        int64_t $tmp3308 = $tmp3293 - i3290.value;
        if ($tmp3294) goto $l3309; else goto $l3310;
        $l3309:;
        if ($tmp3308 >= 1) goto $l3307; else goto $l3297;
        $l3310:;
        if ($tmp3308 > 1) goto $l3307; else goto $l3297;
        $l3307:;
        i3290.value += 1;
        goto $l3295;
        $l3297:;
        PANDA_ASSERT(((panda$core$Bit) { index3284.nonnull }).value);
        panda$core$String* $tmp3314 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3313 = $tmp3314;
        panda$core$String* $tmp3315 = panda$core$String$convert$R$panda$core$String(result3313);
        panda$core$String* $tmp3317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3315, &$s3316);
        panda$core$Object* $tmp3318 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3319 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3318)->type);
        panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3317, $tmp3319);
        panda$core$String* $tmp3322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3320, &$s3321);
        panda$core$String* $tmp3323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3322, base3279);
        panda$core$String* $tmp3325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3323, &$s3324);
        panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3325, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3284.value))));
        (($fn3327) p_out->$class->vtable[19])(p_out, $tmp3326);
        panda$core$Bit $tmp3329 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(field3261->type);
        bool $tmp3328 = $tmp3329.value;
        if (!$tmp3328) goto $l3330;
        org$pandalanguage$pandac$ClassDecl* $tmp3331 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, field3261->type);
        panda$core$Bit $tmp3332 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp3331);
        panda$core$Bit $tmp3333 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3332);
        $tmp3328 = $tmp3333.value;
        $l3330:;
        panda$core$Bit $tmp3334 = { $tmp3328 };
        if ($tmp3334.value) {
        {
            panda$core$String* $tmp3336 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast3335 = $tmp3336;
            panda$core$String* $tmp3337 = panda$core$String$convert$R$panda$core$String(cast3335);
            panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, &$s3338);
            panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3339, result3313);
            panda$core$String* $tmp3342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3340, &$s3341);
            panda$core$String* $tmp3343 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_fieldRef->type);
            panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3342, $tmp3343);
            panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3344, &$s3345);
            (($fn3347) p_out->$class->vtable[19])(p_out, $tmp3346);
            result3313 = cast3335;
        }
        }
        return result3313;
    }
    }
    panda$core$String* $tmp3349 = panda$core$String$convert$R$panda$core$String(t3262);
    panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3349, &$s3350);
    panda$core$String* $tmp3352 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3351, $tmp3352);
    panda$core$String* $tmp3355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3353, &$s3354);
    ptr3348 = $tmp3355;
    panda$core$String* $tmp3357 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3356 = $tmp3357;
    panda$core$String* $tmp3358 = panda$core$String$convert$R$panda$core$String(result3356);
    panda$core$String* $tmp3360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3358, &$s3359);
    panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3360, t3262);
    panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3361, &$s3362);
    panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, ptr3348);
    panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3364, &$s3365);
    (($fn3367) p_out->$class->vtable[19])(p_out, $tmp3366);
    return result3356;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3368;
    panda$core$String* testStart3371;
    panda$core$String* isNonNull3372;
    panda$core$String* nonNullLabel3385;
    panda$core$String* endLabel3387;
    panda$core$String* wrapped3400;
    panda$core$String* nonNullValue3403;
    panda$core$String* result3411;
    panda$core$String* targetType3439;
    panda$core$String* wrapperTypeName3441;
    panda$core$String* wrapperType3443;
    panda$core$String* srcCast3445;
    panda$core$String* load3461;
    panda$core$String* result3476;
    org$pandalanguage$pandac$ClassDecl* $tmp3369 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3368 = $tmp3369;
    PANDA_ASSERT(((panda$core$Bit) { target3368 != NULL }).value);
    panda$core$Bit $tmp3370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3370.value) {
    {
        testStart3371 = self->currentBlock;
        panda$core$String* $tmp3373 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3372 = $tmp3373;
        panda$core$String* $tmp3374 = panda$core$String$convert$R$panda$core$String(isNonNull3372);
        panda$core$String* $tmp3376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3374, &$s3375);
        panda$core$String* $tmp3377 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3376, $tmp3377);
        panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3378, &$s3379);
        panda$core$String* $tmp3381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3380, p_value);
        panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3381, &$s3382);
        (($fn3384) p_out->$class->vtable[19])(p_out, $tmp3383);
        panda$core$String* $tmp3386 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3385 = $tmp3386;
        panda$core$String* $tmp3388 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3387 = $tmp3388;
        panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3389, isNonNull3372);
        panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, &$s3391);
        panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3392, nonNullLabel3385);
        panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3393, &$s3394);
        panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3395, endLabel3387);
        panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3396, &$s3397);
        (($fn3399) p_out->$class->vtable[19])(p_out, $tmp3398);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3385, p_out);
        panda$core$Object* $tmp3401 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3402 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3401), p_out);
        wrapped3400 = $tmp3402;
        panda$core$Object* $tmp3404 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3405 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, wrapped3400, ((org$pandalanguage$pandac$Type*) $tmp3404), p_dstType, p_out);
        nonNullValue3403 = $tmp3405;
        panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3406, endLabel3387);
        panda$core$String* $tmp3409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3407, &$s3408);
        (($fn3410) p_out->$class->vtable[19])(p_out, $tmp3409);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3387, p_out);
        panda$core$String* $tmp3412 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3411 = $tmp3412;
        panda$core$String* $tmp3413 = panda$core$String$convert$R$panda$core$String(result3411);
        panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, &$s3414);
        panda$core$String* $tmp3416 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3415, $tmp3416);
        panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3417, &$s3418);
        panda$core$Object* $tmp3421 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3422 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3421));
        panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3420, $tmp3422);
        panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, &$s3424);
        panda$core$String* $tmp3426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3419, $tmp3425);
        panda$core$String* $tmp3428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3427, testStart3371);
        panda$core$String* $tmp3430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3428, &$s3429);
        panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3430, nonNullValue3403);
        panda$core$String* $tmp3433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3431, &$s3432);
        panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3433, nonNullLabel3385);
        panda$core$String* $tmp3436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3434, &$s3435);
        panda$core$String* $tmp3437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3426, $tmp3436);
        (($fn3438) p_out->$class->vtable[19])(p_out, $tmp3437);
        return result3411;
    }
    }
    panda$core$String* $tmp3440 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3439 = $tmp3440;
    panda$core$String* $tmp3442 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3441 = $tmp3442;
    panda$core$String* $tmp3444 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3443 = $tmp3444;
    panda$core$String* $tmp3446 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3445 = $tmp3446;
    panda$core$String* $tmp3447 = panda$core$String$convert$R$panda$core$String(srcCast3445);
    panda$core$String* $tmp3449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3447, &$s3448);
    panda$core$String* $tmp3450 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3449, $tmp3450);
    panda$core$String* $tmp3453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3451, &$s3452);
    panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3453, p_value);
    panda$core$String* $tmp3456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3454, &$s3455);
    panda$core$String* $tmp3457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3456, wrapperType3443);
    panda$core$String* $tmp3459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3457, &$s3458);
    (($fn3460) p_out->$class->vtable[19])(p_out, $tmp3459);
    panda$core$String* $tmp3462 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3461 = $tmp3462;
    panda$core$String* $tmp3463 = panda$core$String$convert$R$panda$core$String(load3461);
    panda$core$String* $tmp3465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3463, &$s3464);
    panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3465, wrapperTypeName3441);
    panda$core$String* $tmp3468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, &$s3467);
    panda$core$String* $tmp3469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3468, wrapperType3443);
    panda$core$String* $tmp3471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3469, &$s3470);
    panda$core$String* $tmp3472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3471, srcCast3445);
    panda$core$String* $tmp3474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3472, &$s3473);
    (($fn3475) p_out->$class->vtable[19])(p_out, $tmp3474);
    panda$core$String* $tmp3477 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3476 = $tmp3477;
    panda$core$String* $tmp3478 = panda$core$String$convert$R$panda$core$String(result3476);
    panda$core$String* $tmp3480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3478, &$s3479);
    panda$core$String* $tmp3481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3480, wrapperTypeName3441);
    panda$core$String* $tmp3483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3481, &$s3482);
    panda$core$String* $tmp3484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3483, load3461);
    panda$core$String* $tmp3486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3484, &$s3485);
    panda$core$String* $tmp3487 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3486, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3487, &$s3488);
    (($fn3490) p_out->$class->vtable[19])(p_out, $tmp3489);
    return result3476;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* nullableType3491;
    panda$core$String* result3493;
    panda$core$String* $tmp3492 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3491 = $tmp3492;
    panda$core$String* $tmp3494 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3493 = $tmp3494;
    panda$core$String* $tmp3495 = panda$core$String$convert$R$panda$core$String(result3493);
    panda$core$String* $tmp3497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3495, &$s3496);
    panda$core$String* $tmp3498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3497, nullableType3491);
    panda$core$String* $tmp3500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3498, &$s3499);
    panda$core$String* $tmp3502 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3501, $tmp3502);
    panda$core$String* $tmp3505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3503, &$s3504);
    panda$core$String* $tmp3506 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3505, $tmp3506);
    panda$core$String* $tmp3509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3507, &$s3508);
    panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3509, p_value);
    panda$core$String* $tmp3512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3510, &$s3511);
    panda$core$String* $tmp3513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3500, $tmp3512);
    (($fn3514) p_out->$class->vtable[19])(p_out, $tmp3513);
    return result3493;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* result3515;
    panda$core$String* $tmp3516 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3515 = $tmp3516;
    panda$core$String* $tmp3517 = panda$core$String$convert$R$panda$core$String(result3515);
    panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3517, &$s3518);
    panda$core$String* $tmp3520 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, $tmp3520);
    panda$core$String* $tmp3523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3521, &$s3522);
    panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3523, p_value);
    panda$core$String* $tmp3526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3524, &$s3525);
    (($fn3527) p_out->$class->vtable[19])(p_out, $tmp3526);
    return result3515;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$OutputStream* p_out) {
    panda$core$String* op3528;
    panda$core$Int64 size13531;
    panda$core$Int64 size23533;
    org$pandalanguage$pandac$ClassDecl* srcClass3541;
    org$pandalanguage$pandac$ClassDecl* targetClass3543;
    panda$core$String* srcType3582;
    panda$core$String* dstType3584;
    panda$core$String* result3587;
    panda$core$Bit $tmp3529 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3529.value) {
    {
        panda$core$Bit $tmp3530 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3530.value);
        panda$core$Int64 $tmp3532 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13531 = $tmp3532;
        panda$core$Int64 $tmp3534 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23533 = $tmp3534;
        panda$core$Bit $tmp3535 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13531, size23533);
        if ($tmp3535.value) {
        {
            op3528 = &$s3536;
        }
        }
        else {
        panda$core$Bit $tmp3537 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13531, size23533);
        if ($tmp3537.value) {
        {
            panda$core$Bit $tmp3538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3538.value) {
            {
                op3528 = &$s3539;
            }
            }
            else {
            {
                op3528 = &$s3540;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3542 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3541 = $tmp3542;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3541 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3544 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3543 = $tmp3544;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3543 != NULL }).value);
        panda$core$Bit $tmp3546 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3541);
        bool $tmp3545 = $tmp3546.value;
        if (!$tmp3545) goto $l3547;
        panda$core$Bit $tmp3548 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3543);
        panda$core$Bit $tmp3549 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3548);
        $tmp3545 = $tmp3549.value;
        $l3547:;
        panda$core$Bit $tmp3550 = { $tmp3545 };
        if ($tmp3550.value) {
        {
            panda$core$String* $tmp3551 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3551;
        }
        }
        else {
        panda$core$Bit $tmp3553 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3541);
        panda$core$Bit $tmp3554 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3553);
        bool $tmp3552 = $tmp3554.value;
        if (!$tmp3552) goto $l3555;
        panda$core$Bit $tmp3556 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3543);
        $tmp3552 = $tmp3556.value;
        $l3555:;
        panda$core$Bit $tmp3557 = { $tmp3552 };
        if ($tmp3557.value) {
        {
            panda$core$String* $tmp3558 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3558;
        }
        }
        else {
        panda$core$Bit $tmp3561 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3541);
        bool $tmp3560 = $tmp3561.value;
        if (!$tmp3560) goto $l3562;
        panda$core$Bit $tmp3563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3560 = $tmp3563.value;
        $l3562:;
        panda$core$Bit $tmp3564 = { $tmp3560 };
        bool $tmp3559 = $tmp3564.value;
        if (!$tmp3559) goto $l3565;
        panda$core$Object* $tmp3566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3567 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3566), p_src);
        $tmp3559 = $tmp3567.value;
        $l3565:;
        panda$core$Bit $tmp3568 = { $tmp3559 };
        if ($tmp3568.value) {
        {
            panda$core$String* $tmp3569 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3569;
        }
        }
        else {
        panda$core$Bit $tmp3572 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3543);
        bool $tmp3571 = $tmp3572.value;
        if (!$tmp3571) goto $l3573;
        panda$core$Bit $tmp3574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3571 = $tmp3574.value;
        $l3573:;
        panda$core$Bit $tmp3575 = { $tmp3571 };
        bool $tmp3570 = $tmp3575.value;
        if (!$tmp3570) goto $l3576;
        panda$core$Object* $tmp3577 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3578 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3577), p_target);
        $tmp3570 = $tmp3578.value;
        $l3576:;
        panda$core$Bit $tmp3579 = { $tmp3570 };
        if ($tmp3579.value) {
        {
            panda$core$String* $tmp3580 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3580;
        }
        }
        }
        }
        }
        op3528 = &$s3581;
    }
    }
    panda$core$String* $tmp3583 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3582 = $tmp3583;
    panda$core$String* $tmp3585 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3584 = $tmp3585;
    panda$core$Bit $tmp3586 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3582, dstType3584);
    if ($tmp3586.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3588 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3587 = $tmp3588;
    panda$core$String* $tmp3589 = panda$core$String$convert$R$panda$core$String(result3587);
    panda$core$String* $tmp3591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3589, &$s3590);
    panda$core$String* $tmp3592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3591, op3528);
    panda$core$String* $tmp3594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3592, &$s3593);
    panda$core$String* $tmp3595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3594, srcType3582);
    panda$core$String* $tmp3597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3595, &$s3596);
    panda$core$String* $tmp3598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3597, p_value);
    panda$core$String* $tmp3600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3598, &$s3599);
    panda$core$String* $tmp3601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3600, dstType3584);
    panda$core$String* $tmp3603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3601, &$s3602);
    (($fn3604) p_out->$class->vtable[19])(p_out, $tmp3603);
    return result3587;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$OutputStream* p_out) {
    panda$core$String* base3608;
    panda$core$Bit $tmp3605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3605.value);
    panda$core$Int64 $tmp3606 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3606, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3607.value);
    panda$core$Object* $tmp3609 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3610 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3609), p_out);
    base3608 = $tmp3610;
    panda$core$Object* $tmp3611 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3612 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, base3608, ((org$pandalanguage$pandac$IRNode*) $tmp3611)->type, p_cast->type, p_out);
    return $tmp3612;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3616;
    panda$core$String* t3618;
    panda$core$String* value3626;
    panda$core$String* result3637;
    org$pandalanguage$pandac$FieldDecl* lastField3639;
    panda$core$String* value3667;
    panda$core$String* result3678;
    org$pandalanguage$pandac$FieldDecl* lastField3680;
    panda$core$String* alloca3703;
    panda$core$String* result3722;
    panda$core$String* callRef3737;
    panda$core$String* result3747;
    panda$core$String* classPtr3760;
    panda$core$String* className3762;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3787;
    panda$core$Bit $tmp3613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3613.value);
    panda$core$Int64 $tmp3614 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3615 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3614, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3615.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3617 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3616 = $tmp3617;
    PANDA_ASSERT(((panda$core$Bit) { cl3616 != NULL }).value);
    panda$core$String* $tmp3619 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3618 = $tmp3619;
    panda$core$Bit $tmp3620 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3620.value) {
    {
        panda$core$Int64 $tmp3621 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3621, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3622.value);
        panda$core$Object* $tmp3623 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3624 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3623)->children);
        panda$core$Bit $tmp3625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3624, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3625.value);
        panda$core$Object* $tmp3627 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3628 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3627)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3629 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3628), p_out);
        value3626 = $tmp3629;
        panda$core$Object* $tmp3630 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3631 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3630)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3631)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3632.value) {
        {
            panda$core$String* $tmp3634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3633, value3626);
            panda$core$String* $tmp3636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3634, &$s3635);
            return $tmp3636;
        }
        }
        panda$core$String* $tmp3638 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3637 = $tmp3638;
        panda$core$Int64 $tmp3640 = panda$collections$Array$get_count$R$panda$core$Int64(cl3616->fields);
        panda$core$Int64 $tmp3641 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3640, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3616->fields, $tmp3641);
        lastField3639 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3642);
        panda$core$Bit $tmp3643 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3639->annotations);
        panda$core$Bit $tmp3644 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3643);
        PANDA_ASSERT($tmp3644.value);
        panda$core$String* $tmp3645 = panda$core$String$convert$R$panda$core$String(result3637);
        panda$core$String* $tmp3647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3645, &$s3646);
        panda$core$String* $tmp3648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3647, t3618);
        panda$core$String* $tmp3650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3648, &$s3649);
        panda$core$String* $tmp3651 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3639->type);
        panda$core$String* $tmp3652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3650, $tmp3651);
        panda$core$String* $tmp3654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3652, &$s3653);
        panda$core$String* $tmp3655 = panda$core$String$convert$R$panda$core$String(value3626);
        panda$core$String* $tmp3657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3655, &$s3656);
        panda$core$String* $tmp3658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3654, $tmp3657);
        (($fn3659) p_out->$class->vtable[19])(p_out, $tmp3658);
        return result3637;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3660 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3661 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3660);
    if ($tmp3661.value) {
    {
        panda$core$Int64 $tmp3662 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3662, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3663.value);
        panda$core$Object* $tmp3664 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3665 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3664)->children);
        panda$core$Bit $tmp3666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3665, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3666.value);
        panda$core$Object* $tmp3668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3669 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3668)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3670 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3669), p_out);
        value3667 = $tmp3670;
        panda$core$Object* $tmp3671 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3672 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3671)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3672)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3673.value) {
        {
            panda$core$String* $tmp3675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3674, value3667);
            panda$core$String* $tmp3677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3675, &$s3676);
            return $tmp3677;
        }
        }
        panda$core$String* $tmp3679 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3678 = $tmp3679;
        panda$core$Int64 $tmp3681 = panda$collections$Array$get_count$R$panda$core$Int64(cl3616->fields);
        panda$core$Int64 $tmp3682 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3681, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3683 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3616->fields, $tmp3682);
        lastField3680 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3683);
        panda$core$Bit $tmp3684 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3680->annotations);
        panda$core$Bit $tmp3685 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3684);
        PANDA_ASSERT($tmp3685.value);
        panda$core$String* $tmp3686 = panda$core$String$convert$R$panda$core$String(result3678);
        panda$core$String* $tmp3688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3686, &$s3687);
        panda$core$String* $tmp3689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3688, t3618);
        panda$core$String* $tmp3691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3689, &$s3690);
        panda$core$String* $tmp3692 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3680->type);
        panda$core$String* $tmp3693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3691, $tmp3692);
        panda$core$String* $tmp3695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3693, &$s3694);
        panda$core$String* $tmp3696 = panda$core$String$convert$R$panda$core$String(value3667);
        panda$core$String* $tmp3698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3696, &$s3697);
        panda$core$String* $tmp3699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3695, $tmp3698);
        (($fn3700) p_out->$class->vtable[19])(p_out, $tmp3699);
        return result3678;
    }
    }
    panda$core$Bit $tmp3701 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3616);
    if ($tmp3701.value) {
    {
        panda$core$Int64 $tmp3702 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3702;
        panda$core$String* $tmp3705 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3704, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3705, &$s3706);
        alloca3703 = $tmp3707;
        panda$core$String* $tmp3708 = panda$core$String$convert$R$panda$core$String(alloca3703);
        panda$core$String* $tmp3710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3708, &$s3709);
        panda$core$String* $tmp3711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3710, t3618);
        panda$core$String* $tmp3713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3711, &$s3712);
        (($fn3714) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3713);
        panda$core$Object* $tmp3715 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3716 = panda$core$String$convert$R$panda$core$String(t3618);
        panda$core$String* $tmp3718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3716, &$s3717);
        panda$core$String* $tmp3719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3718, alloca3703);
        panda$core$String* $tmp3721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3719, &$s3720);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3715), $tmp3721, p_out);
        panda$core$String* $tmp3723 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3722 = $tmp3723;
        panda$core$String* $tmp3724 = panda$core$String$convert$R$panda$core$String(result3722);
        panda$core$String* $tmp3726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3724, &$s3725);
        panda$core$String* $tmp3727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3726, t3618);
        panda$core$String* $tmp3729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3727, &$s3728);
        panda$core$String* $tmp3730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3729, t3618);
        panda$core$String* $tmp3732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3730, &$s3731);
        panda$core$String* $tmp3733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3732, alloca3703);
        panda$core$String* $tmp3735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3733, &$s3734);
        (($fn3736) p_out->$class->vtable[19])(p_out, $tmp3735);
        return result3722;
    }
    }
    panda$core$String* $tmp3738 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3737 = $tmp3738;
    panda$core$String* $tmp3739 = panda$core$String$convert$R$panda$core$String(callRef3737);
    panda$core$String* $tmp3741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3739, &$s3740);
    panda$core$Int64 $tmp3742 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3743 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3741, ((panda$core$Object*) wrap_panda$core$Int64($tmp3742)));
    panda$core$String* $tmp3745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3743, &$s3744);
    (($fn3746) p_out->$class->vtable[19])(p_out, $tmp3745);
    panda$core$String* $tmp3748 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3747 = $tmp3748;
    panda$core$String* $tmp3749 = panda$core$String$convert$R$panda$core$String(result3747);
    panda$core$String* $tmp3751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3749, &$s3750);
    panda$core$String* $tmp3752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3751, callRef3737);
    panda$core$String* $tmp3754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3752, &$s3753);
    panda$core$String* $tmp3755 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3754, $tmp3755);
    panda$core$String* $tmp3758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3756, &$s3757);
    (($fn3759) p_out->$class->vtable[19])(p_out, $tmp3758);
    panda$core$String* $tmp3761 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3760 = $tmp3761;
    panda$core$Bit $tmp3764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3763 = $tmp3764.value;
    if (!$tmp3763) goto $l3765;
    panda$core$Bit $tmp3766 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3616);
    panda$core$Bit $tmp3767 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3766);
    $tmp3763 = $tmp3767.value;
    $l3765:;
    panda$core$Bit $tmp3768 = { $tmp3763 };
    if ($tmp3768.value) {
    {
        panda$core$Object* $tmp3769 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3770 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3769));
        className3762 = $tmp3770;
    }
    }
    else {
    {
        panda$core$String* $tmp3771 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3762 = $tmp3771;
    }
    }
    panda$core$String* $tmp3772 = panda$core$String$convert$R$panda$core$String(classPtr3760);
    panda$core$String* $tmp3774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3772, &$s3773);
    panda$core$String* $tmp3775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3774, className3762);
    panda$core$String* $tmp3777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3775, &$s3776);
    panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3777, t3618);
    panda$core$String* $tmp3780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3778, &$s3779);
    panda$core$String* $tmp3781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3780, result3747);
    panda$core$String* $tmp3783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3781, &$s3782);
    panda$core$String* $tmp3785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3783, &$s3784);
    (($fn3786) p_out->$class->vtable[19])(p_out, $tmp3785);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3788 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3616);
    cc3787 = $tmp3788;
    panda$core$String* $tmp3790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3789, cc3787->type);
    panda$core$String* $tmp3792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3790, &$s3791);
    panda$core$String* $tmp3793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3792, cc3787->name);
    panda$core$String* $tmp3795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3793, &$s3794);
    panda$core$String* $tmp3797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3796, classPtr3760);
    panda$core$String* $tmp3799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3797, &$s3798);
    panda$core$String* $tmp3800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3795, $tmp3799);
    (($fn3801) p_out->$class->vtable[19])(p_out, $tmp3800);
    panda$core$Object* $tmp3802 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3803 = panda$core$String$convert$R$panda$core$String(t3618);
    panda$core$String* $tmp3805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3803, &$s3804);
    panda$core$String* $tmp3806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3805, result3747);
    panda$core$String* $tmp3808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3806, &$s3807);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3802), $tmp3808, p_out);
    return result3747;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3809 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3809;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3811 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3810, $tmp3811);
    return $tmp3812;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$OutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3813;
    }
    }
    return &$s3814;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$OutputStream* p_out) {
    panda$core$String* result3817;
    panda$core$String* t3819;
    panda$core$Bit $tmp3815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3815.value) {
    {
        panda$core$String* $tmp3816 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3816;
    }
    }
    panda$core$String* $tmp3818 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3817 = $tmp3818;
    panda$core$String* $tmp3820 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3819 = $tmp3820;
    panda$core$String* $tmp3821 = panda$core$String$convert$R$panda$core$String(result3817);
    panda$core$String* $tmp3823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3821, &$s3822);
    panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3823, t3819);
    panda$core$String* $tmp3826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3824, &$s3825);
    panda$core$String* $tmp3827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3826, t3819);
    panda$core$String* $tmp3829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3827, &$s3828);
    panda$core$String* $tmp3830 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3829, $tmp3830);
    panda$core$String* $tmp3833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3831, &$s3832);
    (($fn3834) p_out->$class->vtable[19])(p_out, $tmp3833);
    return result3817;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* chars3836;
    panda$core$String* charsType3841;
    panda$core$String* separator3858;
    panda$collections$Iterator* c$Iter3860;
    panda$core$Char8 c3873;
    panda$core$String* result3890;
    org$pandalanguage$pandac$ClassDecl* string3895;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3898;
    panda$core$Int64 $tmp3835 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3835;
    panda$core$String* $tmp3838 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3837, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3838, &$s3839);
    chars3836 = $tmp3840;
    panda$collections$ListView* $tmp3843 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3844 = ((panda$collections$CollectionView*) $tmp3843)->$class->itable;
    while ($tmp3844->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3844 = $tmp3844->next;
    }
    $fn3846 $tmp3845 = $tmp3844->methods[0];
    panda$core$Int64 $tmp3847 = $tmp3845(((panda$collections$CollectionView*) $tmp3843));
    panda$core$String* $tmp3848 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3842, ((panda$core$Object*) wrap_panda$core$Int64($tmp3847)));
    panda$core$String* $tmp3850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3848, &$s3849);
    charsType3841 = $tmp3850;
    panda$core$String* $tmp3851 = panda$core$String$convert$R$panda$core$String(chars3836);
    panda$core$String* $tmp3853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3851, &$s3852);
    panda$core$String* $tmp3854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3853, charsType3841);
    panda$core$String* $tmp3856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3854, &$s3855);
    (($fn3857) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3856);
    separator3858 = &$s3859;
    {
        panda$collections$ListView* $tmp3861 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp3862 = ((panda$collections$Iterable*) $tmp3861)->$class->itable;
        while ($tmp3862->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3862 = $tmp3862->next;
        }
        $fn3864 $tmp3863 = $tmp3862->methods[0];
        panda$collections$Iterator* $tmp3865 = $tmp3863(((panda$collections$Iterable*) $tmp3861));
        c$Iter3860 = $tmp3865;
        $l3866:;
        ITable* $tmp3868 = c$Iter3860->$class->itable;
        while ($tmp3868->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3868 = $tmp3868->next;
        }
        $fn3870 $tmp3869 = $tmp3868->methods[0];
        panda$core$Bit $tmp3871 = $tmp3869(c$Iter3860);
        panda$core$Bit $tmp3872 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3871);
        if (!$tmp3872.value) goto $l3867;
        {
            ITable* $tmp3874 = c$Iter3860->$class->itable;
            while ($tmp3874->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3874 = $tmp3874->next;
            }
            $fn3876 $tmp3875 = $tmp3874->methods[1];
            panda$core$Object* $tmp3877 = $tmp3875(c$Iter3860);
            c3873 = ((panda$core$Char8$wrapper*) $tmp3877)->value;
            panda$core$String* $tmp3878 = panda$core$String$convert$R$panda$core$String(separator3858);
            panda$core$String* $tmp3880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3878, &$s3879);
            panda$core$Int8 $tmp3881 = panda$core$Char8$convert$R$panda$core$Int8(c3873);
            panda$core$String* $tmp3882 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3880, ((panda$core$Object*) wrap_panda$core$Int8($tmp3881)));
            panda$core$String* $tmp3884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3882, &$s3883);
            (($fn3885) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3884);
            separator3858 = &$s3886;
        }
        goto $l3866;
        $l3867:;
    }
    (($fn3888) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s3887);
    panda$core$Int64 $tmp3889 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3889;
    panda$core$String* $tmp3892 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3891, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3892, &$s3893);
    result3890 = $tmp3894;
    org$pandalanguage$pandac$Type* $tmp3896 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3897 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp3896);
    string3895 = $tmp3897;
    PANDA_ASSERT(((panda$core$Bit) { string3895 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3899 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string3895);
    cc3898 = $tmp3899;
    panda$core$String* $tmp3900 = panda$core$String$convert$R$panda$core$String(result3890);
    panda$core$String* $tmp3902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3900, &$s3901);
    panda$core$String* $tmp3904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3903, cc3898->type);
    panda$core$String* $tmp3906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3904, &$s3905);
    panda$core$String* $tmp3907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3906, cc3898->name);
    panda$core$String* $tmp3909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3907, &$s3908);
    panda$core$String* $tmp3910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3902, $tmp3909);
    panda$core$String* $tmp3912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3910, &$s3911);
    panda$core$String* $tmp3914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3913, charsType3841);
    panda$core$String* $tmp3916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3914, &$s3915);
    panda$core$String* $tmp3917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3916, chars3836);
    panda$core$String* $tmp3919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3917, &$s3918);
    panda$core$String* $tmp3920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3912, $tmp3919);
    panda$collections$ListView* $tmp3922 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3923 = ((panda$collections$CollectionView*) $tmp3922)->$class->itable;
    while ($tmp3923->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3923 = $tmp3923->next;
    }
    $fn3925 $tmp3924 = $tmp3923->methods[0];
    panda$core$Int64 $tmp3926 = $tmp3924(((panda$collections$CollectionView*) $tmp3922));
    panda$core$String* $tmp3927 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3921, ((panda$core$Object*) wrap_panda$core$Int64($tmp3926)));
    panda$core$String* $tmp3929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3927, &$s3928);
    panda$core$String* $tmp3930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3920, $tmp3929);
    panda$core$Int64 $tmp3932 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$String* $tmp3933 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3931, ((panda$core$Object*) wrap_panda$core$Int64($tmp3932)));
    panda$core$String* $tmp3935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3933, &$s3934);
    panda$core$String* $tmp3936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3930, $tmp3935);
    (($fn3937) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp3936);
    return result3890;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$Int64 $tmp3938 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp3939 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3938, ((panda$core$Int64) { 0 }));
    if ($tmp3939.value) {
    {
        panda$core$Object* $tmp3940 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp3940)->selfRef;
    }
    }
    return &$s3941;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* result3942;
    panda$core$String* ref3944;
    panda$core$String* $tmp3943 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3942 = $tmp3943;
    panda$core$String* $tmp3945 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_s, p_out);
    ref3944 = $tmp3945;
    panda$core$String* $tmp3946 = panda$core$String$convert$R$panda$core$String(result3942);
    panda$core$String* $tmp3948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3946, &$s3947);
    panda$core$String* $tmp3949 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, self->currentMethod);
    panda$core$String* $tmp3950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3948, $tmp3949);
    panda$core$String* $tmp3952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3950, &$s3951);
    panda$core$String* $tmp3953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3952, ref3944);
    panda$core$String* $tmp3955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3953, &$s3954);
    panda$core$String* $tmp3956 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp3957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3955, $tmp3956);
    panda$core$String* $tmp3959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3957, &$s3958);
    (($fn3960) p_out->$class->vtable[19])(p_out, $tmp3959);
    return result3942;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value3964;
    org$pandalanguage$pandac$ClassDecl* cl3967;
    panda$core$String* resultValue3970;
    panda$core$String* field3975;
    panda$core$String* result4000;
    panda$core$Bit $tmp3961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp3961.value);
    panda$core$Int64 $tmp3962 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3962, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3963.value);
    panda$core$Object* $tmp3965 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3966 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3965), p_out);
    value3964 = $tmp3966;
    panda$core$Object* $tmp3968 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3969 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3968)->type);
    cl3967 = $tmp3969;
    panda$core$Bit $tmp3971 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3967);
    if ($tmp3971.value) {
    {
        panda$core$Object* $tmp3972 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3973 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3972)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3973.value) {
        {
            return &$s3974;
        }
        }
        panda$core$String* $tmp3976 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field3975 = $tmp3976;
        panda$core$String* $tmp3977 = panda$core$String$convert$R$panda$core$String(field3975);
        panda$core$String* $tmp3979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3977, &$s3978);
        panda$core$String* $tmp3980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3979, value3964);
        panda$core$String* $tmp3982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3980, &$s3981);
        (($fn3983) p_out->$class->vtable[19])(p_out, $tmp3982);
        panda$core$String* $tmp3984 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3970 = $tmp3984;
        panda$core$String* $tmp3985 = panda$core$String$convert$R$panda$core$String(resultValue3970);
        panda$core$String* $tmp3987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3985, &$s3986);
        panda$core$String* $tmp3988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3987, field3975);
        panda$core$String* $tmp3990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3988, &$s3989);
        (($fn3991) p_out->$class->vtable[19])(p_out, $tmp3990);
    }
    }
    else {
    {
        panda$core$String* $tmp3992 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3970 = $tmp3992;
        panda$core$String* $tmp3993 = panda$core$String$convert$R$panda$core$String(resultValue3970);
        panda$core$String* $tmp3995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3993, &$s3994);
        panda$core$String* $tmp3996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3995, value3964);
        panda$core$String* $tmp3998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3996, &$s3997);
        (($fn3999) p_out->$class->vtable[19])(p_out, $tmp3998);
    }
    }
    panda$core$String* $tmp4001 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4000 = $tmp4001;
    panda$core$String* $tmp4002 = panda$core$String$convert$R$panda$core$String(result4000);
    panda$core$String* $tmp4004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4002, &$s4003);
    panda$core$String* $tmp4005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4004, resultValue3970);
    panda$core$String* $tmp4007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4005, &$s4006);
    (($fn4008) p_out->$class->vtable[19])(p_out, $tmp4007);
    return result4000;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value4012;
    org$pandalanguage$pandac$ClassDecl* cl4015;
    panda$core$String* resultValue4018;
    panda$core$String* result4039;
    panda$core$Bit $tmp4009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp4009.value);
    panda$core$Int64 $tmp4010 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4010, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4011.value);
    panda$core$Object* $tmp4013 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4014 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4013), p_out);
    value4012 = $tmp4014;
    panda$core$Object* $tmp4016 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4017 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4016)->type);
    cl4015 = $tmp4017;
    panda$core$Bit $tmp4019 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4015);
    if ($tmp4019.value) {
    {
        panda$core$Object* $tmp4020 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4021 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4020)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4021.value) {
        {
            return &$s4022;
        }
        }
        panda$core$String* $tmp4023 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4018 = $tmp4023;
        panda$core$String* $tmp4024 = panda$core$String$convert$R$panda$core$String(resultValue4018);
        panda$core$String* $tmp4026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4024, &$s4025);
        panda$core$String* $tmp4027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4026, value4012);
        panda$core$String* $tmp4029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4027, &$s4028);
        (($fn4030) p_out->$class->vtable[19])(p_out, $tmp4029);
    }
    }
    else {
    {
        panda$core$String* $tmp4031 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4018 = $tmp4031;
        panda$core$String* $tmp4032 = panda$core$String$convert$R$panda$core$String(resultValue4018);
        panda$core$String* $tmp4034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4032, &$s4033);
        panda$core$String* $tmp4035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4034, value4012);
        panda$core$String* $tmp4037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4035, &$s4036);
        (($fn4038) p_out->$class->vtable[19])(p_out, $tmp4037);
    }
    }
    panda$core$String* $tmp4040 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4039 = $tmp4040;
    panda$core$String* $tmp4041 = panda$core$String$convert$R$panda$core$String(result4039);
    panda$core$String* $tmp4043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4041, &$s4042);
    panda$core$String* $tmp4044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4043, resultValue4018);
    panda$core$String* $tmp4046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4044, &$s4045);
    (($fn4047) p_out->$class->vtable[19])(p_out, $tmp4046);
    return result4039;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4049;
    panda$core$Bit $tmp4048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp4048.value);
    panda$core$Object* $tmp4050 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4051 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4050));
    cl4049 = $tmp4051;
    PANDA_ASSERT(((panda$core$Bit) { cl4049 != NULL }).value);
    panda$core$Bit $tmp4052 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4049);
    if ($tmp4052.value) {
    {
        panda$core$Object* $tmp4054 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4055 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4054));
        panda$core$String* $tmp4056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4053, $tmp4055);
        panda$core$String* $tmp4058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4056, &$s4057);
        return $tmp4058;
    }
    }
    else {
    {
        return &$s4059;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* base4063;
    panda$core$String* result4066;
    panda$core$Bit $tmp4060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp4060.value);
    panda$core$Int64 $tmp4061 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp4062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4061, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4062.value);
    panda$core$Object* $tmp4064 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4065 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4064), p_out);
    base4063 = $tmp4065;
    panda$core$String* $tmp4067 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4066 = $tmp4067;
    panda$core$Int64 $tmp4068 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp4068.value) {
        case 52:
        {
            panda$core$String* $tmp4069 = panda$core$String$convert$R$panda$core$String(result4066);
            panda$core$String* $tmp4071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4069, &$s4070);
            panda$core$String* $tmp4072 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4071, $tmp4072);
            panda$core$String* $tmp4075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4073, &$s4074);
            panda$core$String* $tmp4076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4075, base4063);
            panda$core$String* $tmp4078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4076, &$s4077);
            (($fn4079) p_out->$class->vtable[19])(p_out, $tmp4078);
            return result4066;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp4080 = panda$core$String$convert$R$panda$core$String(result4066);
            panda$core$String* $tmp4082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4080, &$s4081);
            panda$core$String* $tmp4083 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4082, $tmp4083);
            panda$core$String* $tmp4086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4084, &$s4085);
            panda$core$String* $tmp4087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4086, base4063);
            panda$core$String* $tmp4089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4087, &$s4088);
            (($fn4090) p_out->$class->vtable[19])(p_out, $tmp4089);
            return result4066;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* value4103;
    panda$core$String* result4106;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4091 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4091;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4092 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4092;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4093 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4093;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4094 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4094;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4095 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4095;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4096 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4096;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4097 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4097;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4098 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4098;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4099 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4099;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4100 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4100;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4101 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4101;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4102 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4102;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4104 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4105 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4104), p_out);
            value4103 = $tmp4105;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4103));
            return value4103;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4107 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4106 = ((panda$core$String*) $tmp4107);
            PANDA_ASSERT(((panda$core$Bit) { result4106 != NULL }).value);
            return result4106;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4108 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4108;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4109 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4109;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4110 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4110;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4111 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4111;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp4112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1025 }));
    if ($tmp4112.value) {
    {
        panda$core$String* $tmp4113 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, self->currentMethod);
        panda$core$String* $tmp4114 = panda$core$String$convert$R$panda$core$String($tmp4113);
        panda$core$String* $tmp4116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4114, &$s4115);
        panda$core$String* $tmp4117 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
        panda$core$String* $tmp4118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4116, $tmp4117);
        panda$core$String* $tmp4120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4118, &$s4119);
        return $tmp4120;
    }
    }
    panda$core$String* $tmp4121 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4122 = panda$core$String$convert$R$panda$core$String($tmp4121);
    panda$core$String* $tmp4124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4122, &$s4123);
    panda$core$String* $tmp4125 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4124, $tmp4125);
    panda$core$String* $tmp4128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4126, &$s4127);
    return $tmp4128;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$OutputStream* p_out) {
    panda$collections$Iterator* s$Iter4130;
    org$pandalanguage$pandac$IRNode* s4142;
    panda$core$Bit $tmp4129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4129.value);
    {
        ITable* $tmp4131 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4131->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4131 = $tmp4131->next;
        }
        $fn4133 $tmp4132 = $tmp4131->methods[0];
        panda$collections$Iterator* $tmp4134 = $tmp4132(((panda$collections$Iterable*) p_block->children));
        s$Iter4130 = $tmp4134;
        $l4135:;
        ITable* $tmp4137 = s$Iter4130->$class->itable;
        while ($tmp4137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4137 = $tmp4137->next;
        }
        $fn4139 $tmp4138 = $tmp4137->methods[0];
        panda$core$Bit $tmp4140 = $tmp4138(s$Iter4130);
        panda$core$Bit $tmp4141 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4140);
        if (!$tmp4141.value) goto $l4136;
        {
            ITable* $tmp4143 = s$Iter4130->$class->itable;
            while ($tmp4143->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4143 = $tmp4143->next;
            }
            $fn4145 $tmp4144 = $tmp4143->methods[1];
            panda$core$Object* $tmp4146 = $tmp4144(s$Iter4130);
            s4142 = ((org$pandalanguage$pandac$IRNode*) $tmp4146);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s4142, p_out);
        }
        goto $l4135;
        $l4136:;
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4147;
    panda$core$String* $match$1948_94148;
    panda$core$String* ptr4153;
    panda$core$String* arg4156;
    org$pandalanguage$pandac$Type* baseType4176;
    panda$core$String* base4180;
    panda$core$String* indexStruct4183;
    panda$core$String* index4186;
    panda$core$String* value4195;
    panda$core$String* ptr4199;
    panda$core$String* ptr4236;
    panda$core$String* cast4239;
    m4147 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1948_94148 = ((org$pandalanguage$pandac$Symbol*) m4147->value)->name;
        panda$core$Bit $tmp4150 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1948_94148, &$s4149);
        if ($tmp4150.value) {
        {
            panda$core$Int64 $tmp4151 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4151, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4152.value);
            panda$core$Object* $tmp4154 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4155 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4154), p_out);
            ptr4153 = $tmp4155;
            panda$core$Object* $tmp4157 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4158 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4157));
            panda$core$String* $tmp4159 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4158, p_out);
            arg4156 = $tmp4159;
            panda$core$String* $tmp4161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4160, arg4156);
            panda$core$String* $tmp4163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4161, &$s4162);
            panda$core$String* $tmp4164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4163, ptr4153);
            panda$core$String* $tmp4166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4164, &$s4165);
            (($fn4167) p_out->$class->vtable[19])(p_out, $tmp4166);
        }
        }
        else {
        panda$core$Bit $tmp4169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1948_94148, &$s4168);
        if ($tmp4169.value) {
        {
            panda$core$Int64 $tmp4170 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4170, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4171.value);
            panda$core$Object* $tmp4172 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4173 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4172));
            panda$core$Int64 $tmp4174 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4173->type->subtypes);
            panda$core$Bit $tmp4175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4174, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4175.value);
            panda$core$Object* $tmp4177 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4178 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4177));
            panda$core$Object* $tmp4179 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4178->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4176 = ((org$pandalanguage$pandac$Type*) $tmp4179);
            panda$core$Object* $tmp4181 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4182 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4181), p_out);
            base4180 = $tmp4182;
            panda$core$Object* $tmp4184 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4185 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4184), p_out);
            indexStruct4183 = $tmp4185;
            panda$core$String* $tmp4187 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4186 = $tmp4187;
            panda$core$String* $tmp4188 = panda$core$String$convert$R$panda$core$String(index4186);
            panda$core$String* $tmp4190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4188, &$s4189);
            panda$core$String* $tmp4191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4190, indexStruct4183);
            panda$core$String* $tmp4193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4191, &$s4192);
            (($fn4194) p_out->$class->vtable[19])(p_out, $tmp4193);
            panda$core$Object* $tmp4196 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4197 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4196));
            panda$core$String* $tmp4198 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4197, p_out);
            value4195 = $tmp4198;
            panda$core$String* $tmp4200 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4199 = $tmp4200;
            panda$core$String* $tmp4201 = panda$core$String$convert$R$panda$core$String(ptr4199);
            panda$core$String* $tmp4203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4201, &$s4202);
            panda$core$String* $tmp4204 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4176);
            panda$core$String* $tmp4205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4203, $tmp4204);
            panda$core$String* $tmp4207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4205, &$s4206);
            panda$core$String* $tmp4208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4207, base4180);
            panda$core$String* $tmp4210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4208, &$s4209);
            panda$core$String* $tmp4212 = panda$core$String$convert$R$panda$core$String(&$s4211);
            panda$core$String* $tmp4214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4212, &$s4213);
            panda$core$String* $tmp4215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4214, index4186);
            panda$core$String* $tmp4217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4215, &$s4216);
            panda$core$String* $tmp4218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4210, $tmp4217);
            (($fn4219) p_out->$class->vtable[19])(p_out, $tmp4218);
            panda$core$String* $tmp4221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4220, value4195);
            panda$core$String* $tmp4223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4221, &$s4222);
            panda$core$String* $tmp4224 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4176);
            panda$core$String* $tmp4225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4223, $tmp4224);
            panda$core$String* $tmp4227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4225, &$s4226);
            panda$core$String* $tmp4228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4227, ptr4199);
            panda$core$String* $tmp4230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4228, &$s4229);
            (($fn4231) p_out->$class->vtable[19])(p_out, $tmp4230);
        }
        }
        else {
        panda$core$Bit $tmp4233 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1948_94148, &$s4232);
        if ($tmp4233.value) {
        {
            panda$core$Int64 $tmp4234 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4234, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4235.value);
            panda$core$Object* $tmp4237 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4238 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4237), p_out);
            ptr4236 = $tmp4238;
            panda$core$String* $tmp4240 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4239 = $tmp4240;
            panda$core$String* $tmp4241 = panda$core$String$convert$R$panda$core$String(cast4239);
            panda$core$String* $tmp4243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4241, &$s4242);
            panda$core$String* $tmp4244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4243, ptr4236);
            panda$core$String* $tmp4246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4244, &$s4245);
            (($fn4247) p_out->$class->vtable[19])(p_out, $tmp4246);
            panda$core$String* $tmp4249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4248, cast4239);
            panda$core$String* $tmp4251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4249, &$s4250);
            (($fn4252) p_out->$class->vtable[19])(p_out, $tmp4251);
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
    org$pandalanguage$pandac$MethodDecl* m4254;
    org$pandalanguage$pandac$Type* actualMethodType4257;
    panda$core$String* actualResultType4258;
    panda$core$Bit isSuper4259;
    panda$collections$Array* args4279;
    panda$core$Int64 offset4282;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4287;
    panda$core$String* arg4306;
    panda$core$String* refTarget4338;
    panda$core$String* methodRef4342;
    panda$core$String* separator4344;
    panda$core$String* indirectVar4348;
    panda$core$String* resultType4351;
    panda$collections$Iterator* a$Iter4393;
    panda$core$String* a4405;
    panda$core$Bit $tmp4253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4253.value);
    m4254 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4256 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4254->owner)->name, &$s4255);
    if ($tmp4256.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4254->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4254);
    }
    }
    panda$core$Int64 $tmp4261 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4262 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4261, ((panda$core$Int64) { 1 }));
    bool $tmp4260 = $tmp4262.value;
    if (!$tmp4260) goto $l4263;
    panda$core$Object* $tmp4264 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4264)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4260 = $tmp4265.value;
    $l4263:;
    panda$core$Bit $tmp4266 = { $tmp4260 };
    isSuper4259 = $tmp4266;
    panda$core$Bit $tmp4268 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4259);
    bool $tmp4267 = $tmp4268.value;
    if (!$tmp4267) goto $l4269;
    panda$core$Bit $tmp4270 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4254);
    $tmp4267 = $tmp4270.value;
    $l4269:;
    panda$core$Bit $tmp4271 = { $tmp4267 };
    if ($tmp4271.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4272 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4254);
        actualMethodType4257 = $tmp4272;
        panda$core$Int64 $tmp4273 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4257->subtypes);
        panda$core$Int64 $tmp4274 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4273, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4275 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4257->subtypes, $tmp4274);
        panda$core$String* $tmp4276 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4275));
        actualResultType4258 = $tmp4276;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4277 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4254);
        actualMethodType4257 = $tmp4277;
        panda$core$String* $tmp4278 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4258 = $tmp4278;
    }
    }
    panda$collections$Array* $tmp4280 = (panda$collections$Array*) malloc(40);
    $tmp4280->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4280->refCount.value = 1;
    panda$collections$Array$init($tmp4280);
    args4279 = $tmp4280;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4279, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4283 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4284 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4257->subtypes);
    panda$core$Int64 $tmp4285 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4283, $tmp4284);
    panda$core$Int64 $tmp4286 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4285, ((panda$core$Int64) { 1 }));
    offset4282 = $tmp4286;
    panda$core$Int64 $tmp4288 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4287, ((panda$core$Int64) { 0 }), $tmp4288, ((panda$core$Bit) { false }));
    int64_t $tmp4290 = $tmp4287.min.value;
    panda$core$Int64 i4289 = { $tmp4290 };
    int64_t $tmp4292 = $tmp4287.max.value;
    bool $tmp4293 = $tmp4287.inclusive.value;
    if ($tmp4293) goto $l4300; else goto $l4301;
    $l4300:;
    if ($tmp4290 <= $tmp4292) goto $l4294; else goto $l4296;
    $l4301:;
    if ($tmp4290 < $tmp4292) goto $l4294; else goto $l4296;
    $l4294:;
    {
        panda$core$Object* $tmp4302 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4289);
        panda$core$Bit $tmp4303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4302)->kind, ((panda$core$Int64) { 1025 }));
        if ($tmp4303.value) {
        {
            panda$core$Object* $tmp4304 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4289);
            panda$core$String* $tmp4305 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4304), p_out);
            panda$collections$Array$add$panda$collections$Array$T(args4279, ((panda$core$Object*) $tmp4305));
            goto $l4297;
        }
        }
        panda$core$Object* $tmp4307 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4289);
        panda$core$String* $tmp4308 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4307), p_out);
        arg4306 = $tmp4308;
        panda$core$Bit $tmp4310 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4289, offset4282);
        bool $tmp4309 = $tmp4310.value;
        if (!$tmp4309) goto $l4311;
        panda$core$Int64 $tmp4312 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4289, offset4282);
        panda$core$Object* $tmp4313 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4257->subtypes, $tmp4312);
        panda$core$Object* $tmp4314 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4289);
        panda$core$Bit $tmp4315 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4313), ((org$pandalanguage$pandac$IRNode*) $tmp4314)->type);
        $tmp4309 = $tmp4315.value;
        $l4311:;
        panda$core$Bit $tmp4316 = { $tmp4309 };
        if ($tmp4316.value) {
        {
            panda$core$Int64 $tmp4317 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4289, offset4282);
            panda$core$Object* $tmp4318 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4257->subtypes, $tmp4317);
            panda$core$String* $tmp4319 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4318));
            panda$core$String* $tmp4321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4319, &$s4320);
            panda$core$Object* $tmp4322 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4289);
            panda$core$Int64 $tmp4323 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4289, offset4282);
            panda$core$Object* $tmp4324 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4257->subtypes, $tmp4323);
            panda$core$String* $tmp4325 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg4306, ((org$pandalanguage$pandac$IRNode*) $tmp4322)->type, ((org$pandalanguage$pandac$Type*) $tmp4324), p_out);
            panda$core$String* $tmp4326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4321, $tmp4325);
            arg4306 = $tmp4326;
        }
        }
        else {
        {
            panda$core$Object* $tmp4327 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4289);
            panda$core$String* $tmp4328 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4327)->type);
            panda$core$String* $tmp4330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4328, &$s4329);
            panda$core$String* $tmp4331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4330, arg4306);
            arg4306 = $tmp4331;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4279, ((panda$core$Object*) arg4306));
    }
    $l4297:;
    int64_t $tmp4333 = $tmp4292 - i4289.value;
    if ($tmp4293) goto $l4334; else goto $l4335;
    $l4334:;
    if ($tmp4333 >= 1) goto $l4332; else goto $l4296;
    $l4335:;
    if ($tmp4333 > 1) goto $l4332; else goto $l4296;
    $l4332:;
    i4289.value += 1;
    goto $l4294;
    $l4296:;
    panda$core$Int64 $tmp4339 = panda$collections$Array$get_count$R$panda$core$Int64(args4279);
    panda$core$Bit $tmp4340 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4339, ((panda$core$Int64) { 0 }));
    if ($tmp4340.value) {
    {
        panda$core$Object* $tmp4341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4279, ((panda$core$Int64) { 0 }));
        refTarget4338 = ((panda$core$String*) $tmp4341);
    }
    }
    else {
    {
        refTarget4338 = NULL;
    }
    }
    panda$core$String* $tmp4343 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, refTarget4338, m4254, isSuper4259, p_out);
    methodRef4342 = $tmp4343;
    separator4344 = &$s4345;
    panda$core$Bit $tmp4346 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4254);
    if ($tmp4346.value) {
    {
        panda$core$Int64 $tmp4347 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4347;
        panda$core$String* $tmp4350 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4349, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4348 = $tmp4350;
        panda$core$String* $tmp4352 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4351 = $tmp4352;
        panda$core$String* $tmp4353 = panda$core$String$convert$R$panda$core$String(indirectVar4348);
        panda$core$String* $tmp4355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4353, &$s4354);
        panda$core$String* $tmp4356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4355, resultType4351);
        panda$core$String* $tmp4358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4356, &$s4357);
        (($fn4359) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4358);
        panda$core$String* $tmp4361 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4254);
        panda$core$String* $tmp4362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4360, $tmp4361);
        panda$core$String* $tmp4364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4362, &$s4363);
        panda$core$String* $tmp4365 = panda$core$String$convert$R$panda$core$String(methodRef4342);
        panda$core$String* $tmp4367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4365, &$s4366);
        panda$core$String* $tmp4368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4367, resultType4351);
        panda$core$String* $tmp4370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4368, &$s4369);
        panda$core$String* $tmp4371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4370, indirectVar4348);
        panda$core$String* $tmp4373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4371, &$s4372);
        panda$core$String* $tmp4374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4364, $tmp4373);
        (($fn4375) p_out->$class->vtable[16])(p_out, $tmp4374);
        separator4344 = &$s4376;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4377 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4378 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4377);
        if ($tmp4378.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4380 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4254);
        panda$core$String* $tmp4381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4379, $tmp4380);
        panda$core$String* $tmp4383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4381, &$s4382);
        panda$core$String* $tmp4384 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4383, $tmp4384);
        panda$core$String* $tmp4387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4385, &$s4386);
        panda$core$String* $tmp4388 = panda$core$String$convert$R$panda$core$String(methodRef4342);
        panda$core$String* $tmp4390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4388, &$s4389);
        panda$core$String* $tmp4391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4387, $tmp4390);
        (($fn4392) p_out->$class->vtable[16])(p_out, $tmp4391);
    }
    }
    {
        ITable* $tmp4394 = ((panda$collections$Iterable*) args4279)->$class->itable;
        while ($tmp4394->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4394 = $tmp4394->next;
        }
        $fn4396 $tmp4395 = $tmp4394->methods[0];
        panda$collections$Iterator* $tmp4397 = $tmp4395(((panda$collections$Iterable*) args4279));
        a$Iter4393 = $tmp4397;
        $l4398:;
        ITable* $tmp4400 = a$Iter4393->$class->itable;
        while ($tmp4400->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4400 = $tmp4400->next;
        }
        $fn4402 $tmp4401 = $tmp4400->methods[0];
        panda$core$Bit $tmp4403 = $tmp4401(a$Iter4393);
        panda$core$Bit $tmp4404 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4403);
        if (!$tmp4404.value) goto $l4399;
        {
            ITable* $tmp4406 = a$Iter4393->$class->itable;
            while ($tmp4406->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4406 = $tmp4406->next;
            }
            $fn4408 $tmp4407 = $tmp4406->methods[1];
            panda$core$Object* $tmp4409 = $tmp4407(a$Iter4393);
            a4405 = ((panda$core$String*) $tmp4409);
            (($fn4410) p_out->$class->vtable[16])(p_out, separator4344);
            (($fn4411) p_out->$class->vtable[16])(p_out, a4405);
            separator4344 = &$s4412;
        }
        goto $l4398;
        $l4399:;
    }
    (($fn4414) p_out->$class->vtable[19])(p_out, &$s4413);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* test4426;
    panda$core$String* testBit4429;
    panda$core$String* ifTrue4438;
    panda$core$String* ifFalse4440;
    panda$core$String* end4454;
    panda$core$Bit $tmp4415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4415.value);
    panda$core$Int64 $tmp4417 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4417, ((panda$core$Int64) { 2 }));
    bool $tmp4416 = $tmp4418.value;
    if ($tmp4416) goto $l4419;
    panda$core$Int64 $tmp4420 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4420, ((panda$core$Int64) { 3 }));
    $tmp4416 = $tmp4421.value;
    $l4419:;
    panda$core$Bit $tmp4422 = { $tmp4416 };
    PANDA_ASSERT($tmp4422.value);
    panda$core$Object* $tmp4423 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4424 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4425 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4423)->type, $tmp4424);
    PANDA_ASSERT($tmp4425.value);
    panda$core$Object* $tmp4427 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4428 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4427), p_out);
    test4426 = $tmp4428;
    panda$core$String* $tmp4430 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4429 = $tmp4430;
    panda$core$String* $tmp4431 = panda$core$String$convert$R$panda$core$String(testBit4429);
    panda$core$String* $tmp4433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4431, &$s4432);
    panda$core$String* $tmp4434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4433, test4426);
    panda$core$String* $tmp4436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4434, &$s4435);
    (($fn4437) p_out->$class->vtable[19])(p_out, $tmp4436);
    panda$core$String* $tmp4439 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4438 = $tmp4439;
    panda$core$String* $tmp4441 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4440 = $tmp4441;
    panda$core$String* $tmp4443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4442, testBit4429);
    panda$core$String* $tmp4445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4443, &$s4444);
    panda$core$String* $tmp4446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4445, ifTrue4438);
    panda$core$String* $tmp4448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4446, &$s4447);
    panda$core$String* $tmp4449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4448, ifFalse4440);
    panda$core$String* $tmp4451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4449, &$s4450);
    (($fn4452) p_out->$class->vtable[19])(p_out, $tmp4451);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue4438, p_out);
    panda$core$Object* $tmp4453 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4453), p_out);
    panda$core$Int64 $tmp4455 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4455, ((panda$core$Int64) { 3 }));
    if ($tmp4456.value) {
    {
        panda$core$String* $tmp4457 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4454 = $tmp4457;
    }
    }
    else {
    {
        end4454 = ifFalse4440;
    }
    }
    panda$core$Object* $tmp4458 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4459 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4458));
    panda$core$Bit $tmp4460 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4459);
    if ($tmp4460.value) {
    {
        panda$core$String* $tmp4462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4461, end4454);
        panda$core$String* $tmp4464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4462, &$s4463);
        (($fn4465) p_out->$class->vtable[19])(p_out, $tmp4464);
    }
    }
    panda$core$Int64 $tmp4466 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4466, ((panda$core$Int64) { 3 }));
    if ($tmp4467.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse4440, p_out);
        panda$core$Object* $tmp4468 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4468), p_out);
        panda$core$Object* $tmp4469 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4470 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4469));
        panda$core$Bit $tmp4471 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4470);
        if ($tmp4471.value) {
        {
            panda$core$String* $tmp4473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4472, end4454);
            panda$core$String* $tmp4475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4473, &$s4474);
            (($fn4476) p_out->$class->vtable[19])(p_out, $tmp4475);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end4454, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4480;
    panda$core$String* range4491;
    org$pandalanguage$pandac$IRNode* block4494;
    org$pandalanguage$pandac$Type* t4496;
    panda$core$String* llt4499;
    panda$core$String* indexType4501;
    org$pandalanguage$pandac$ClassDecl* cl4507;
    panda$core$String* numberType4515;
    panda$core$String* index4523;
    panda$core$String* start4532;
    panda$core$String* indexValuePtr4541;
    panda$core$String* end4572;
    panda$core$String* inclusive4581;
    panda$core$String* loopStart4590;
    panda$core$String* loopBody4592;
    panda$core$String* loopEnd4594;
    panda$core$String* loopTest4596;
    panda$core$String* forwardEntry4600;
    panda$core$String* backwardEntry4602;
    panda$core$String* signPrefix4604;
    panda$core$String* forwardEntryInclusive4616;
    panda$core$String* forwardEntryExclusive4618;
    panda$core$String* forwardEntryInclusiveTest4633;
    panda$core$String* forwardEntryExclusiveTest4663;
    panda$core$String* indexValue4693;
    panda$core$String* loopInc4715;
    panda$core$String* forwardDelta4717;
    panda$core$String* forwardInclusiveLabel4732;
    panda$core$String* forwardExclusiveLabel4734;
    panda$core$String* forwardInclusiveTest4745;
    panda$core$String* forwardExclusiveTest4768;
    panda$core$String* inc4791;
    panda$core$String* incStruct4803;
    panda$core$Bit $tmp4477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4477.value);
    panda$core$Int64 $tmp4478 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4478, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4479.value);
    panda$core$Object* $tmp4481 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4480 = ((org$pandalanguage$pandac$IRNode*) $tmp4481);
    panda$core$Object* $tmp4482 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4482)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4483.value);
    panda$core$Object* $tmp4484 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4485 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4484)->type->subtypes);
    panda$core$Bit $tmp4486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4485, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4486.value);
    panda$core$Object* $tmp4487 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4487)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4490 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4488))->name, &$s4489);
    PANDA_ASSERT($tmp4490.value);
    panda$core$Object* $tmp4492 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4493 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4492), p_out);
    range4491 = $tmp4493;
    panda$core$Object* $tmp4495 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4494 = ((org$pandalanguage$pandac$IRNode*) $tmp4495);
    panda$core$Object* $tmp4497 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4498 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4497)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4496 = ((org$pandalanguage$pandac$Type*) $tmp4498);
    panda$core$String* $tmp4500 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4496);
    llt4499 = $tmp4500;
    panda$core$Bit $tmp4502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4496->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4502.value) {
    {
        panda$core$Int64 $tmp4503 = panda$collections$Array$get_count$R$panda$core$Int64(t4496->subtypes);
        panda$core$Bit $tmp4504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4503, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4504.value);
        panda$core$Object* $tmp4505 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4496->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4506 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4505));
        indexType4501 = $tmp4506;
    }
    }
    else {
    {
        indexType4501 = llt4499;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4508 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4496);
    cl4507 = $tmp4508;
    PANDA_ASSERT(((panda$core$Bit) { cl4507 != NULL }).value);
    panda$collections$ListView* $tmp4509 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4507);
    ITable* $tmp4510 = ((panda$collections$CollectionView*) $tmp4509)->$class->itable;
    while ($tmp4510->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4510 = $tmp4510->next;
    }
    $fn4512 $tmp4511 = $tmp4510->methods[0];
    panda$core$Int64 $tmp4513 = $tmp4511(((panda$collections$CollectionView*) $tmp4509));
    panda$core$Bit $tmp4514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4513, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4514.value);
    panda$collections$ListView* $tmp4516 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4507);
    ITable* $tmp4517 = $tmp4516->$class->itable;
    while ($tmp4517->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4517 = $tmp4517->next;
    }
    $fn4519 $tmp4518 = $tmp4517->methods[0];
    panda$core$Object* $tmp4520 = $tmp4518($tmp4516, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4521 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4520)->type);
    numberType4515 = $tmp4521;
    panda$core$Bit $tmp4522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4480->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4522.value);
    panda$core$String* $tmp4524 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4480->payload));
    index4523 = $tmp4524;
    panda$core$String* $tmp4525 = panda$core$String$convert$R$panda$core$String(index4523);
    panda$core$String* $tmp4527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4525, &$s4526);
    panda$core$String* $tmp4528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4527, indexType4501);
    panda$core$String* $tmp4530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4528, &$s4529);
    (($fn4531) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4530);
    panda$core$String* $tmp4533 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4532 = $tmp4533;
    panda$core$String* $tmp4534 = panda$core$String$convert$R$panda$core$String(start4532);
    panda$core$String* $tmp4536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4534, &$s4535);
    panda$core$String* $tmp4537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4536, range4491);
    panda$core$String* $tmp4539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4537, &$s4538);
    (($fn4540) p_out->$class->vtable[19])(p_out, $tmp4539);
    panda$core$String* $tmp4542 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4541 = $tmp4542;
    panda$core$String* $tmp4543 = panda$core$String$convert$R$panda$core$String(indexValuePtr4541);
    panda$core$String* $tmp4545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4543, &$s4544);
    panda$core$String* $tmp4546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4545, indexType4501);
    panda$core$String* $tmp4548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4546, &$s4547);
    panda$core$String* $tmp4549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4548, indexType4501);
    panda$core$String* $tmp4551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4549, &$s4550);
    panda$core$String* $tmp4552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4551, index4523);
    panda$core$String* $tmp4554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4552, &$s4553);
    panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4554, &$s4555);
    (($fn4557) p_out->$class->vtable[19])(p_out, $tmp4556);
    panda$core$String* $tmp4559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4558, numberType4515);
    panda$core$String* $tmp4561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4559, &$s4560);
    panda$core$String* $tmp4562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4561, start4532);
    panda$core$String* $tmp4564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4562, &$s4563);
    panda$core$String* $tmp4565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4564, numberType4515);
    panda$core$String* $tmp4567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4565, &$s4566);
    panda$core$String* $tmp4568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4567, indexValuePtr4541);
    panda$core$String* $tmp4570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4568, &$s4569);
    (($fn4571) p_out->$class->vtable[19])(p_out, $tmp4570);
    panda$core$String* $tmp4573 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4572 = $tmp4573;
    panda$core$String* $tmp4574 = panda$core$String$convert$R$panda$core$String(end4572);
    panda$core$String* $tmp4576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4574, &$s4575);
    panda$core$String* $tmp4577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4576, range4491);
    panda$core$String* $tmp4579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4577, &$s4578);
    (($fn4580) p_out->$class->vtable[19])(p_out, $tmp4579);
    panda$core$String* $tmp4582 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4581 = $tmp4582;
    panda$core$String* $tmp4583 = panda$core$String$convert$R$panda$core$String(inclusive4581);
    panda$core$String* $tmp4585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4583, &$s4584);
    panda$core$String* $tmp4586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4585, range4491);
    panda$core$String* $tmp4588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4586, &$s4587);
    (($fn4589) p_out->$class->vtable[19])(p_out, $tmp4588);
    panda$core$String* $tmp4591 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4590 = $tmp4591;
    panda$core$String* $tmp4593 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4592 = $tmp4593;
    panda$core$String* $tmp4595 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4594 = $tmp4595;
    panda$core$String* $tmp4597 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4596 = $tmp4597;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4598 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4598->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4598->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4598, ((panda$core$String*) p_f->payload), loopEnd4594, loopTest4596);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4598));
    panda$core$String* $tmp4601 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4600 = $tmp4601;
    panda$core$String* $tmp4603 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4602 = $tmp4603;
    panda$core$Bit $tmp4606 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4496)->name, &$s4605);
    if ($tmp4606.value) {
    {
        signPrefix4604 = &$s4607;
    }
    }
    else {
    {
        panda$core$Bit $tmp4610 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4496)->name, &$s4609);
        bool $tmp4608 = $tmp4610.value;
        if ($tmp4608) goto $l4611;
        panda$core$Bit $tmp4613 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4496)->name, &$s4612);
        $tmp4608 = $tmp4613.value;
        $l4611:;
        panda$core$Bit $tmp4614 = { $tmp4608 };
        PANDA_ASSERT($tmp4614.value);
        signPrefix4604 = &$s4615;
    }
    }
    panda$core$String* $tmp4617 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4616 = $tmp4617;
    panda$core$String* $tmp4619 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4618 = $tmp4619;
    panda$core$String* $tmp4621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4620, inclusive4581);
    panda$core$String* $tmp4623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4621, &$s4622);
    panda$core$String* $tmp4624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4623, forwardEntryInclusive4616);
    panda$core$String* $tmp4626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4624, &$s4625);
    panda$core$String* $tmp4628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4627, forwardEntryExclusive4618);
    panda$core$String* $tmp4630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4628, &$s4629);
    panda$core$String* $tmp4631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4626, $tmp4630);
    (($fn4632) p_out->$class->vtable[19])(p_out, $tmp4631);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive4616, p_out);
    panda$core$String* $tmp4634 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4633 = $tmp4634;
    panda$core$String* $tmp4635 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4633);
    panda$core$String* $tmp4637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4635, &$s4636);
    panda$core$String* $tmp4638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4637, signPrefix4604);
    panda$core$String* $tmp4640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4638, &$s4639);
    panda$core$String* $tmp4641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4640, numberType4515);
    panda$core$String* $tmp4643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4641, &$s4642);
    panda$core$String* $tmp4644 = panda$core$String$convert$R$panda$core$String(start4532);
    panda$core$String* $tmp4646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4644, &$s4645);
    panda$core$String* $tmp4647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4646, end4572);
    panda$core$String* $tmp4649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4647, &$s4648);
    panda$core$String* $tmp4650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4643, $tmp4649);
    (($fn4651) p_out->$class->vtable[19])(p_out, $tmp4650);
    panda$core$String* $tmp4653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4652, forwardEntryInclusiveTest4633);
    panda$core$String* $tmp4655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4653, &$s4654);
    panda$core$String* $tmp4656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4655, loopStart4590);
    panda$core$String* $tmp4658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4656, &$s4657);
    panda$core$String* $tmp4659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4658, loopEnd4594);
    panda$core$String* $tmp4661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4659, &$s4660);
    (($fn4662) p_out->$class->vtable[19])(p_out, $tmp4661);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive4618, p_out);
    panda$core$String* $tmp4664 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4663 = $tmp4664;
    panda$core$String* $tmp4665 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4663);
    panda$core$String* $tmp4667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4665, &$s4666);
    panda$core$String* $tmp4668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4667, signPrefix4604);
    panda$core$String* $tmp4670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4668, &$s4669);
    panda$core$String* $tmp4671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4670, numberType4515);
    panda$core$String* $tmp4673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4671, &$s4672);
    panda$core$String* $tmp4674 = panda$core$String$convert$R$panda$core$String(start4532);
    panda$core$String* $tmp4676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4674, &$s4675);
    panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4676, end4572);
    panda$core$String* $tmp4679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4677, &$s4678);
    panda$core$String* $tmp4680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4673, $tmp4679);
    (($fn4681) p_out->$class->vtable[19])(p_out, $tmp4680);
    panda$core$String* $tmp4683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4682, forwardEntryExclusiveTest4663);
    panda$core$String* $tmp4685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4683, &$s4684);
    panda$core$String* $tmp4686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4685, loopStart4590);
    panda$core$String* $tmp4688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4686, &$s4687);
    panda$core$String* $tmp4689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4688, loopEnd4594);
    panda$core$String* $tmp4691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4689, &$s4690);
    (($fn4692) p_out->$class->vtable[19])(p_out, $tmp4691);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart4590, p_out);
    panda$core$String* $tmp4694 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4693 = $tmp4694;
    panda$core$String* $tmp4695 = panda$core$String$convert$R$panda$core$String(indexValue4693);
    panda$core$String* $tmp4697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4695, &$s4696);
    panda$core$String* $tmp4698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4697, numberType4515);
    panda$core$String* $tmp4700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4698, &$s4699);
    panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4700, numberType4515);
    panda$core$String* $tmp4703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4701, &$s4702);
    panda$core$String* $tmp4704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4703, indexValuePtr4541);
    panda$core$String* $tmp4706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4704, &$s4705);
    (($fn4707) p_out->$class->vtable[19])(p_out, $tmp4706);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block4494, p_out);
    panda$core$Bit $tmp4708 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4494);
    panda$core$Bit $tmp4709 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4708);
    if ($tmp4709.value) {
    {
        panda$core$String* $tmp4711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4710, loopTest4596);
        panda$core$String* $tmp4713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4711, &$s4712);
        (($fn4714) p_out->$class->vtable[19])(p_out, $tmp4713);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest4596, p_out);
    panda$core$String* $tmp4716 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc4715 = $tmp4716;
    panda$core$String* $tmp4718 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta4717 = $tmp4718;
    panda$core$String* $tmp4719 = panda$core$String$convert$R$panda$core$String(forwardDelta4717);
    panda$core$String* $tmp4721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4719, &$s4720);
    panda$core$String* $tmp4722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4721, numberType4515);
    panda$core$String* $tmp4724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4722, &$s4723);
    panda$core$String* $tmp4725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4724, end4572);
    panda$core$String* $tmp4727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4725, &$s4726);
    panda$core$String* $tmp4728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4727, indexValue4693);
    panda$core$String* $tmp4730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4728, &$s4729);
    (($fn4731) p_out->$class->vtable[19])(p_out, $tmp4730);
    panda$core$String* $tmp4733 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel4732 = $tmp4733;
    panda$core$String* $tmp4735 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel4734 = $tmp4735;
    panda$core$String* $tmp4737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4736, inclusive4581);
    panda$core$String* $tmp4739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4737, &$s4738);
    panda$core$String* $tmp4740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4739, forwardInclusiveLabel4732);
    panda$core$String* $tmp4742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4740, &$s4741);
    panda$core$String* $tmp4743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4742, forwardExclusiveLabel4734);
    (($fn4744) p_out->$class->vtable[19])(p_out, $tmp4743);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel4732, p_out);
    panda$core$String* $tmp4746 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest4745 = $tmp4746;
    panda$core$String* $tmp4747 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest4745);
    panda$core$String* $tmp4749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4747, &$s4748);
    panda$core$String* $tmp4750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4749, numberType4515);
    panda$core$String* $tmp4752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4750, &$s4751);
    panda$core$String* $tmp4753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4752, forwardDelta4717);
    panda$core$String* $tmp4755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4753, &$s4754);
    (($fn4756) p_out->$class->vtable[19])(p_out, $tmp4755);
    panda$core$String* $tmp4758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4757, forwardInclusiveTest4745);
    panda$core$String* $tmp4760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4758, &$s4759);
    panda$core$String* $tmp4761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4760, loopInc4715);
    panda$core$String* $tmp4763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4761, &$s4762);
    panda$core$String* $tmp4764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4763, loopEnd4594);
    panda$core$String* $tmp4766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4764, &$s4765);
    (($fn4767) p_out->$class->vtable[19])(p_out, $tmp4766);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel4734, p_out);
    panda$core$String* $tmp4769 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest4768 = $tmp4769;
    panda$core$String* $tmp4770 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest4768);
    panda$core$String* $tmp4772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4770, &$s4771);
    panda$core$String* $tmp4773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4772, numberType4515);
    panda$core$String* $tmp4775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4773, &$s4774);
    panda$core$String* $tmp4776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4775, forwardDelta4717);
    panda$core$String* $tmp4778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4776, &$s4777);
    (($fn4779) p_out->$class->vtable[19])(p_out, $tmp4778);
    panda$core$String* $tmp4781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4780, forwardExclusiveTest4768);
    panda$core$String* $tmp4783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4781, &$s4782);
    panda$core$String* $tmp4784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4783, loopInc4715);
    panda$core$String* $tmp4786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4784, &$s4785);
    panda$core$String* $tmp4787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4786, loopEnd4594);
    panda$core$String* $tmp4789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4787, &$s4788);
    (($fn4790) p_out->$class->vtable[19])(p_out, $tmp4789);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc4715, p_out);
    panda$core$String* $tmp4792 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc4791 = $tmp4792;
    panda$core$String* $tmp4793 = panda$core$String$convert$R$panda$core$String(inc4791);
    panda$core$String* $tmp4795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4793, &$s4794);
    panda$core$String* $tmp4796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4795, numberType4515);
    panda$core$String* $tmp4798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4796, &$s4797);
    panda$core$String* $tmp4799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4798, indexValue4693);
    panda$core$String* $tmp4801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4799, &$s4800);
    (($fn4802) p_out->$class->vtable[19])(p_out, $tmp4801);
    panda$core$String* $tmp4804 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct4803 = $tmp4804;
    panda$core$String* $tmp4805 = panda$core$String$convert$R$panda$core$String(incStruct4803);
    panda$core$String* $tmp4807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4805, &$s4806);
    panda$core$String* $tmp4808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4807, indexType4501);
    panda$core$String* $tmp4810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4808, &$s4809);
    panda$core$String* $tmp4811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4810, numberType4515);
    panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4811, &$s4812);
    (($fn4814) p_out->$class->vtable[19])(p_out, $tmp4813);
    panda$core$String* $tmp4816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4815, numberType4515);
    panda$core$String* $tmp4818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4816, &$s4817);
    panda$core$String* $tmp4819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4818, inc4791);
    panda$core$String* $tmp4821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4819, &$s4820);
    (($fn4822) p_out->$class->vtable[19])(p_out, $tmp4821);
    panda$core$String* $tmp4824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4823, indexType4501);
    panda$core$String* $tmp4826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4824, &$s4825);
    panda$core$String* $tmp4827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4826, incStruct4803);
    panda$core$String* $tmp4829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4827, &$s4828);
    panda$core$String* $tmp4830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4829, indexType4501);
    panda$core$String* $tmp4832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4830, &$s4831);
    panda$core$String* $tmp4833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4832, index4523);
    panda$core$String* $tmp4835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4833, &$s4834);
    (($fn4836) p_out->$class->vtable[19])(p_out, $tmp4835);
    panda$core$String* $tmp4838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4837, loopStart4590);
    panda$core$String* $tmp4840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4838, &$s4839);
    (($fn4841) p_out->$class->vtable[19])(p_out, $tmp4840);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd4594, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4845;
    panda$core$String* range4856;
    org$pandalanguage$pandac$IRNode* block4859;
    org$pandalanguage$pandac$Type* t4861;
    panda$core$String* llt4864;
    panda$core$String* indexType4866;
    org$pandalanguage$pandac$ClassDecl* cl4872;
    panda$core$String* numberType4880;
    panda$core$String* index4888;
    panda$core$String* start4897;
    panda$core$String* indexValuePtr4906;
    panda$core$String* end4937;
    panda$core$String* rawStep4946;
    panda$core$String* step4955;
    panda$core$String* inclusive4969;
    panda$core$String* loopStart4978;
    panda$core$String* loopBody4980;
    panda$core$String* loopEnd4982;
    panda$core$String* loopTest4984;
    panda$core$String* forwardEntry4988;
    panda$core$String* backwardEntry4990;
    panda$core$String* signPrefix4992;
    panda$core$String* direction5004;
    panda$core$String* forwardEntryInclusive5030;
    panda$core$String* forwardEntryExclusive5032;
    panda$core$String* forwardEntryInclusiveTest5047;
    panda$core$String* forwardEntryExclusiveTest5077;
    panda$core$String* backwardEntryInclusive5107;
    panda$core$String* backwardEntryExclusive5109;
    panda$core$String* backwardEntryInclusiveTest5124;
    panda$core$String* backwardEntryExclusiveTest5154;
    panda$core$String* indexValue5184;
    panda$core$String* loopInc5206;
    panda$core$String* forwardLabel5208;
    panda$core$String* backwardLabel5210;
    panda$core$String* forwardDelta5223;
    panda$core$String* forwardInclusiveLabel5238;
    panda$core$String* forwardExclusiveLabel5240;
    panda$core$String* forwardInclusiveTest5251;
    panda$core$String* forwardExclusiveTest5277;
    panda$core$String* backwardDelta5303;
    panda$core$String* negStep5318;
    panda$core$String* backwardInclusiveLabel5330;
    panda$core$String* backwardExclusiveLabel5332;
    panda$core$String* backwardInclusiveTest5343;
    panda$core$String* backwardExclusiveTest5367;
    panda$core$String* inc5391;
    panda$core$String* incStruct5406;
    panda$core$Bit $tmp4842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4842.value);
    panda$core$Int64 $tmp4843 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4843, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4844.value);
    panda$core$Object* $tmp4846 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4845 = ((org$pandalanguage$pandac$IRNode*) $tmp4846);
    panda$core$Object* $tmp4847 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4847)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4848.value);
    panda$core$Object* $tmp4849 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4850 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4849)->type->subtypes);
    panda$core$Bit $tmp4851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4850, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4851.value);
    panda$core$Object* $tmp4852 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4853 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4852)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4855 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4853))->name, &$s4854);
    PANDA_ASSERT($tmp4855.value);
    panda$core$Object* $tmp4857 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4858 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4857), p_out);
    range4856 = $tmp4858;
    panda$core$Object* $tmp4860 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4859 = ((org$pandalanguage$pandac$IRNode*) $tmp4860);
    panda$core$Object* $tmp4862 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4863 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4862)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4861 = ((org$pandalanguage$pandac$Type*) $tmp4863);
    panda$core$String* $tmp4865 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4861);
    llt4864 = $tmp4865;
    panda$core$Bit $tmp4867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4861->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4867.value) {
    {
        panda$core$Int64 $tmp4868 = panda$collections$Array$get_count$R$panda$core$Int64(t4861->subtypes);
        panda$core$Bit $tmp4869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4868, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4869.value);
        panda$core$Object* $tmp4870 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4861->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4871 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4870));
        indexType4866 = $tmp4871;
    }
    }
    else {
    {
        indexType4866 = llt4864;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4873 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4861);
    cl4872 = $tmp4873;
    PANDA_ASSERT(((panda$core$Bit) { cl4872 != NULL }).value);
    panda$collections$ListView* $tmp4874 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4872);
    ITable* $tmp4875 = ((panda$collections$CollectionView*) $tmp4874)->$class->itable;
    while ($tmp4875->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4875 = $tmp4875->next;
    }
    $fn4877 $tmp4876 = $tmp4875->methods[0];
    panda$core$Int64 $tmp4878 = $tmp4876(((panda$collections$CollectionView*) $tmp4874));
    panda$core$Bit $tmp4879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4878, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4879.value);
    panda$collections$ListView* $tmp4881 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4872);
    ITable* $tmp4882 = $tmp4881->$class->itable;
    while ($tmp4882->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4882 = $tmp4882->next;
    }
    $fn4884 $tmp4883 = $tmp4882->methods[0];
    panda$core$Object* $tmp4885 = $tmp4883($tmp4881, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4886 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4885)->type);
    numberType4880 = $tmp4886;
    panda$core$Bit $tmp4887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4845->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4887.value);
    panda$core$String* $tmp4889 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4845->payload));
    index4888 = $tmp4889;
    panda$core$String* $tmp4890 = panda$core$String$convert$R$panda$core$String(index4888);
    panda$core$String* $tmp4892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4890, &$s4891);
    panda$core$String* $tmp4893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4892, indexType4866);
    panda$core$String* $tmp4895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4893, &$s4894);
    (($fn4896) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4895);
    panda$core$String* $tmp4898 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4897 = $tmp4898;
    panda$core$String* $tmp4899 = panda$core$String$convert$R$panda$core$String(start4897);
    panda$core$String* $tmp4901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4899, &$s4900);
    panda$core$String* $tmp4902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4901, range4856);
    panda$core$String* $tmp4904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4902, &$s4903);
    (($fn4905) p_out->$class->vtable[19])(p_out, $tmp4904);
    panda$core$String* $tmp4907 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4906 = $tmp4907;
    panda$core$String* $tmp4908 = panda$core$String$convert$R$panda$core$String(indexValuePtr4906);
    panda$core$String* $tmp4910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4908, &$s4909);
    panda$core$String* $tmp4911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4910, indexType4866);
    panda$core$String* $tmp4913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4911, &$s4912);
    panda$core$String* $tmp4914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4913, indexType4866);
    panda$core$String* $tmp4916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4914, &$s4915);
    panda$core$String* $tmp4917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4916, index4888);
    panda$core$String* $tmp4919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4917, &$s4918);
    panda$core$String* $tmp4921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4919, &$s4920);
    (($fn4922) p_out->$class->vtable[19])(p_out, $tmp4921);
    panda$core$String* $tmp4924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4923, numberType4880);
    panda$core$String* $tmp4926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4924, &$s4925);
    panda$core$String* $tmp4927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4926, start4897);
    panda$core$String* $tmp4929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4927, &$s4928);
    panda$core$String* $tmp4930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4929, numberType4880);
    panda$core$String* $tmp4932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4930, &$s4931);
    panda$core$String* $tmp4933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4932, indexValuePtr4906);
    panda$core$String* $tmp4935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4933, &$s4934);
    (($fn4936) p_out->$class->vtable[19])(p_out, $tmp4935);
    panda$core$String* $tmp4938 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4937 = $tmp4938;
    panda$core$String* $tmp4939 = panda$core$String$convert$R$panda$core$String(end4937);
    panda$core$String* $tmp4941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4939, &$s4940);
    panda$core$String* $tmp4942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4941, range4856);
    panda$core$String* $tmp4944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4942, &$s4943);
    (($fn4945) p_out->$class->vtable[19])(p_out, $tmp4944);
    panda$core$String* $tmp4947 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep4946 = $tmp4947;
    panda$core$String* $tmp4948 = panda$core$String$convert$R$panda$core$String(rawStep4946);
    panda$core$String* $tmp4950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4948, &$s4949);
    panda$core$String* $tmp4951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4950, range4856);
    panda$core$String* $tmp4953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4951, &$s4952);
    (($fn4954) p_out->$class->vtable[19])(p_out, $tmp4953);
    panda$core$Bit $tmp4957 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4880, &$s4956);
    if ($tmp4957.value) {
    {
        panda$core$String* $tmp4958 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step4955 = $tmp4958;
        panda$core$String* $tmp4959 = panda$core$String$convert$R$panda$core$String(step4955);
        panda$core$String* $tmp4961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4959, &$s4960);
        panda$core$String* $tmp4962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4961, rawStep4946);
        panda$core$String* $tmp4964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4962, &$s4963);
        panda$core$String* $tmp4965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4964, numberType4880);
        panda$core$String* $tmp4967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4965, &$s4966);
        (($fn4968) p_out->$class->vtable[19])(p_out, $tmp4967);
    }
    }
    else {
    {
        step4955 = rawStep4946;
    }
    }
    panda$core$String* $tmp4970 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4969 = $tmp4970;
    panda$core$String* $tmp4971 = panda$core$String$convert$R$panda$core$String(inclusive4969);
    panda$core$String* $tmp4973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4971, &$s4972);
    panda$core$String* $tmp4974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4973, range4856);
    panda$core$String* $tmp4976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4974, &$s4975);
    (($fn4977) p_out->$class->vtable[19])(p_out, $tmp4976);
    panda$core$String* $tmp4979 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4978 = $tmp4979;
    panda$core$String* $tmp4981 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4980 = $tmp4981;
    panda$core$String* $tmp4983 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4982 = $tmp4983;
    panda$core$String* $tmp4985 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4984 = $tmp4985;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4986 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4986->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4986->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4986, ((panda$core$String*) p_f->payload), loopEnd4982, loopTest4984);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4986));
    panda$core$String* $tmp4989 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4988 = $tmp4989;
    panda$core$String* $tmp4991 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4990 = $tmp4991;
    panda$core$Bit $tmp4994 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4861)->name, &$s4993);
    if ($tmp4994.value) {
    {
        signPrefix4992 = &$s4995;
    }
    }
    else {
    {
        panda$core$Bit $tmp4998 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4861)->name, &$s4997);
        bool $tmp4996 = $tmp4998.value;
        if ($tmp4996) goto $l4999;
        panda$core$Bit $tmp5001 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4861)->name, &$s5000);
        $tmp4996 = $tmp5001.value;
        $l4999:;
        panda$core$Bit $tmp5002 = { $tmp4996 };
        PANDA_ASSERT($tmp5002.value);
        signPrefix4992 = &$s5003;
    }
    }
    panda$core$Bit $tmp5006 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix4992, &$s5005);
    if ($tmp5006.value) {
    {
        panda$core$String* $tmp5007 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction5004 = $tmp5007;
        panda$core$String* $tmp5008 = panda$core$String$convert$R$panda$core$String(direction5004);
        panda$core$String* $tmp5010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5008, &$s5009);
        panda$core$String* $tmp5011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5010, numberType4880);
        panda$core$String* $tmp5013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5011, &$s5012);
        panda$core$String* $tmp5014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5013, step4955);
        panda$core$String* $tmp5016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5014, &$s5015);
        (($fn5017) p_out->$class->vtable[19])(p_out, $tmp5016);
    }
    }
    else {
    {
        direction5004 = &$s5018;
    }
    }
    panda$core$String* $tmp5020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5019, direction5004);
    panda$core$String* $tmp5022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5020, &$s5021);
    panda$core$String* $tmp5023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5022, forwardEntry4988);
    panda$core$String* $tmp5025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5023, &$s5024);
    panda$core$String* $tmp5026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5025, backwardEntry4990);
    panda$core$String* $tmp5028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5026, &$s5027);
    (($fn5029) p_out->$class->vtable[19])(p_out, $tmp5028);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntry4988, p_out);
    panda$core$String* $tmp5031 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive5030 = $tmp5031;
    panda$core$String* $tmp5033 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive5032 = $tmp5033;
    panda$core$String* $tmp5035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5034, inclusive4969);
    panda$core$String* $tmp5037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5035, &$s5036);
    panda$core$String* $tmp5038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5037, forwardEntryInclusive5030);
    panda$core$String* $tmp5040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5038, &$s5039);
    panda$core$String* $tmp5042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5041, forwardEntryExclusive5032);
    panda$core$String* $tmp5044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5042, &$s5043);
    panda$core$String* $tmp5045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5040, $tmp5044);
    (($fn5046) p_out->$class->vtable[19])(p_out, $tmp5045);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive5030, p_out);
    panda$core$String* $tmp5048 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest5047 = $tmp5048;
    panda$core$String* $tmp5049 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest5047);
    panda$core$String* $tmp5051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5049, &$s5050);
    panda$core$String* $tmp5052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5051, signPrefix4992);
    panda$core$String* $tmp5054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5052, &$s5053);
    panda$core$String* $tmp5055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5054, numberType4880);
    panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5055, &$s5056);
    panda$core$String* $tmp5058 = panda$core$String$convert$R$panda$core$String(start4897);
    panda$core$String* $tmp5060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5058, &$s5059);
    panda$core$String* $tmp5061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5060, end4937);
    panda$core$String* $tmp5063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5061, &$s5062);
    panda$core$String* $tmp5064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5057, $tmp5063);
    (($fn5065) p_out->$class->vtable[19])(p_out, $tmp5064);
    panda$core$String* $tmp5067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5066, forwardEntryInclusiveTest5047);
    panda$core$String* $tmp5069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5067, &$s5068);
    panda$core$String* $tmp5070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5069, loopStart4978);
    panda$core$String* $tmp5072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5070, &$s5071);
    panda$core$String* $tmp5073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5072, loopEnd4982);
    panda$core$String* $tmp5075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5073, &$s5074);
    (($fn5076) p_out->$class->vtable[19])(p_out, $tmp5075);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive5032, p_out);
    panda$core$String* $tmp5078 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest5077 = $tmp5078;
    panda$core$String* $tmp5079 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest5077);
    panda$core$String* $tmp5081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5079, &$s5080);
    panda$core$String* $tmp5082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5081, signPrefix4992);
    panda$core$String* $tmp5084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5082, &$s5083);
    panda$core$String* $tmp5085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5084, numberType4880);
    panda$core$String* $tmp5087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5085, &$s5086);
    panda$core$String* $tmp5088 = panda$core$String$convert$R$panda$core$String(start4897);
    panda$core$String* $tmp5090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5088, &$s5089);
    panda$core$String* $tmp5091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5090, end4937);
    panda$core$String* $tmp5093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5091, &$s5092);
    panda$core$String* $tmp5094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5087, $tmp5093);
    (($fn5095) p_out->$class->vtable[19])(p_out, $tmp5094);
    panda$core$String* $tmp5097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5096, forwardEntryExclusiveTest5077);
    panda$core$String* $tmp5099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5097, &$s5098);
    panda$core$String* $tmp5100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5099, loopStart4978);
    panda$core$String* $tmp5102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5100, &$s5101);
    panda$core$String* $tmp5103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5102, loopEnd4982);
    panda$core$String* $tmp5105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5103, &$s5104);
    (($fn5106) p_out->$class->vtable[19])(p_out, $tmp5105);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntry4990, p_out);
    panda$core$String* $tmp5108 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive5107 = $tmp5108;
    panda$core$String* $tmp5110 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive5109 = $tmp5110;
    panda$core$String* $tmp5112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5111, inclusive4969);
    panda$core$String* $tmp5114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5112, &$s5113);
    panda$core$String* $tmp5115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5114, backwardEntryInclusive5107);
    panda$core$String* $tmp5117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5115, &$s5116);
    panda$core$String* $tmp5119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5118, backwardEntryExclusive5109);
    panda$core$String* $tmp5121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5119, &$s5120);
    panda$core$String* $tmp5122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5117, $tmp5121);
    (($fn5123) p_out->$class->vtable[19])(p_out, $tmp5122);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryInclusive5107, p_out);
    panda$core$String* $tmp5125 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5124 = $tmp5125;
    panda$core$String* $tmp5126 = panda$core$String$convert$R$panda$core$String(backwardEntryInclusiveTest5124);
    panda$core$String* $tmp5128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5126, &$s5127);
    panda$core$String* $tmp5129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5128, signPrefix4992);
    panda$core$String* $tmp5131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5129, &$s5130);
    panda$core$String* $tmp5132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5131, numberType4880);
    panda$core$String* $tmp5134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5132, &$s5133);
    panda$core$String* $tmp5135 = panda$core$String$convert$R$panda$core$String(start4897);
    panda$core$String* $tmp5137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5135, &$s5136);
    panda$core$String* $tmp5138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5137, end4937);
    panda$core$String* $tmp5140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5138, &$s5139);
    panda$core$String* $tmp5141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5134, $tmp5140);
    (($fn5142) p_out->$class->vtable[19])(p_out, $tmp5141);
    panda$core$String* $tmp5144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5143, backwardEntryInclusiveTest5124);
    panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5144, &$s5145);
    panda$core$String* $tmp5147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5146, loopStart4978);
    panda$core$String* $tmp5149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5147, &$s5148);
    panda$core$String* $tmp5150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5149, loopEnd4982);
    panda$core$String* $tmp5152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5150, &$s5151);
    (($fn5153) p_out->$class->vtable[19])(p_out, $tmp5152);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryExclusive5109, p_out);
    panda$core$String* $tmp5155 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5154 = $tmp5155;
    panda$core$String* $tmp5156 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusiveTest5154);
    panda$core$String* $tmp5158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5156, &$s5157);
    panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5158, signPrefix4992);
    panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, &$s5160);
    panda$core$String* $tmp5162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5161, numberType4880);
    panda$core$String* $tmp5164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5162, &$s5163);
    panda$core$String* $tmp5165 = panda$core$String$convert$R$panda$core$String(start4897);
    panda$core$String* $tmp5167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5165, &$s5166);
    panda$core$String* $tmp5168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5167, end4937);
    panda$core$String* $tmp5170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5168, &$s5169);
    panda$core$String* $tmp5171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5164, $tmp5170);
    (($fn5172) p_out->$class->vtable[19])(p_out, $tmp5171);
    panda$core$String* $tmp5174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5173, backwardEntryExclusiveTest5154);
    panda$core$String* $tmp5176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5174, &$s5175);
    panda$core$String* $tmp5177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5176, loopStart4978);
    panda$core$String* $tmp5179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5177, &$s5178);
    panda$core$String* $tmp5180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5179, loopEnd4982);
    panda$core$String* $tmp5182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5180, &$s5181);
    (($fn5183) p_out->$class->vtable[19])(p_out, $tmp5182);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart4978, p_out);
    panda$core$String* $tmp5185 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5184 = $tmp5185;
    panda$core$String* $tmp5186 = panda$core$String$convert$R$panda$core$String(indexValue5184);
    panda$core$String* $tmp5188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5186, &$s5187);
    panda$core$String* $tmp5189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5188, numberType4880);
    panda$core$String* $tmp5191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5189, &$s5190);
    panda$core$String* $tmp5192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5191, numberType4880);
    panda$core$String* $tmp5194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5192, &$s5193);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5194, indexValuePtr4906);
    panda$core$String* $tmp5197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, &$s5196);
    (($fn5198) p_out->$class->vtable[19])(p_out, $tmp5197);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block4859, p_out);
    panda$core$Bit $tmp5199 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4859);
    panda$core$Bit $tmp5200 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5199);
    if ($tmp5200.value) {
    {
        panda$core$String* $tmp5202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5201, loopTest4984);
        panda$core$String* $tmp5204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5202, &$s5203);
        (($fn5205) p_out->$class->vtable[19])(p_out, $tmp5204);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest4984, p_out);
    panda$core$String* $tmp5207 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5206 = $tmp5207;
    panda$core$String* $tmp5209 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5208 = $tmp5209;
    panda$core$String* $tmp5211 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5210 = $tmp5211;
    panda$core$String* $tmp5213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5212, direction5004);
    panda$core$String* $tmp5215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5213, &$s5214);
    panda$core$String* $tmp5216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5215, forwardLabel5208);
    panda$core$String* $tmp5218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5216, &$s5217);
    panda$core$String* $tmp5219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5218, backwardLabel5210);
    panda$core$String* $tmp5221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5219, &$s5220);
    (($fn5222) p_out->$class->vtable[19])(p_out, $tmp5221);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardLabel5208, p_out);
    panda$core$String* $tmp5224 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5223 = $tmp5224;
    panda$core$String* $tmp5225 = panda$core$String$convert$R$panda$core$String(forwardDelta5223);
    panda$core$String* $tmp5227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5225, &$s5226);
    panda$core$String* $tmp5228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5227, numberType4880);
    panda$core$String* $tmp5230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5228, &$s5229);
    panda$core$String* $tmp5231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5230, end4937);
    panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5231, &$s5232);
    panda$core$String* $tmp5234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5233, indexValue5184);
    panda$core$String* $tmp5236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5234, &$s5235);
    (($fn5237) p_out->$class->vtable[19])(p_out, $tmp5236);
    panda$core$String* $tmp5239 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5238 = $tmp5239;
    panda$core$String* $tmp5241 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5240 = $tmp5241;
    panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5242, inclusive4969);
    panda$core$String* $tmp5245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5243, &$s5244);
    panda$core$String* $tmp5246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5245, forwardInclusiveLabel5238);
    panda$core$String* $tmp5248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5246, &$s5247);
    panda$core$String* $tmp5249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5248, forwardExclusiveLabel5240);
    (($fn5250) p_out->$class->vtable[19])(p_out, $tmp5249);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel5238, p_out);
    panda$core$String* $tmp5252 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5251 = $tmp5252;
    panda$core$String* $tmp5253 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest5251);
    panda$core$String* $tmp5255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5253, &$s5254);
    panda$core$String* $tmp5256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5255, numberType4880);
    panda$core$String* $tmp5258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5256, &$s5257);
    panda$core$String* $tmp5259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5258, forwardDelta5223);
    panda$core$String* $tmp5261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5259, &$s5260);
    panda$core$String* $tmp5262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5261, step4955);
    panda$core$String* $tmp5264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5262, &$s5263);
    (($fn5265) p_out->$class->vtable[19])(p_out, $tmp5264);
    panda$core$String* $tmp5267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5266, forwardInclusiveTest5251);
    panda$core$String* $tmp5269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5267, &$s5268);
    panda$core$String* $tmp5270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5269, loopInc5206);
    panda$core$String* $tmp5272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5270, &$s5271);
    panda$core$String* $tmp5273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5272, loopEnd4982);
    panda$core$String* $tmp5275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5273, &$s5274);
    (($fn5276) p_out->$class->vtable[19])(p_out, $tmp5275);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel5240, p_out);
    panda$core$String* $tmp5278 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5277 = $tmp5278;
    panda$core$String* $tmp5279 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest5277);
    panda$core$String* $tmp5281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5279, &$s5280);
    panda$core$String* $tmp5282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5281, numberType4880);
    panda$core$String* $tmp5284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5282, &$s5283);
    panda$core$String* $tmp5285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5284, forwardDelta5223);
    panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5285, &$s5286);
    panda$core$String* $tmp5288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5287, step4955);
    panda$core$String* $tmp5290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5288, &$s5289);
    (($fn5291) p_out->$class->vtable[19])(p_out, $tmp5290);
    panda$core$String* $tmp5293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5292, forwardExclusiveTest5277);
    panda$core$String* $tmp5295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5293, &$s5294);
    panda$core$String* $tmp5296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5295, loopInc5206);
    panda$core$String* $tmp5298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5296, &$s5297);
    panda$core$String* $tmp5299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5298, loopEnd4982);
    panda$core$String* $tmp5301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5299, &$s5300);
    (($fn5302) p_out->$class->vtable[19])(p_out, $tmp5301);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardLabel5210, p_out);
    panda$core$String* $tmp5304 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5303 = $tmp5304;
    panda$core$String* $tmp5305 = panda$core$String$convert$R$panda$core$String(backwardDelta5303);
    panda$core$String* $tmp5307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5305, &$s5306);
    panda$core$String* $tmp5308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5307, numberType4880);
    panda$core$String* $tmp5310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5308, &$s5309);
    panda$core$String* $tmp5311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5310, indexValue5184);
    panda$core$String* $tmp5313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5311, &$s5312);
    panda$core$String* $tmp5314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5313, end4937);
    panda$core$String* $tmp5316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5314, &$s5315);
    (($fn5317) p_out->$class->vtable[19])(p_out, $tmp5316);
    panda$core$String* $tmp5319 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5318 = $tmp5319;
    panda$core$String* $tmp5320 = panda$core$String$convert$R$panda$core$String(negStep5318);
    panda$core$String* $tmp5322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5320, &$s5321);
    panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5322, numberType4880);
    panda$core$String* $tmp5325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5323, &$s5324);
    panda$core$String* $tmp5326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5325, step4955);
    panda$core$String* $tmp5328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5326, &$s5327);
    (($fn5329) p_out->$class->vtable[19])(p_out, $tmp5328);
    panda$core$String* $tmp5331 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5330 = $tmp5331;
    panda$core$String* $tmp5333 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5332 = $tmp5333;
    panda$core$String* $tmp5335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5334, inclusive4969);
    panda$core$String* $tmp5337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5335, &$s5336);
    panda$core$String* $tmp5338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5337, backwardInclusiveLabel5330);
    panda$core$String* $tmp5340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5338, &$s5339);
    panda$core$String* $tmp5341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5340, backwardExclusiveLabel5332);
    (($fn5342) p_out->$class->vtable[19])(p_out, $tmp5341);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardInclusiveLabel5330, p_out);
    panda$core$String* $tmp5344 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5343 = $tmp5344;
    panda$core$String* $tmp5345 = panda$core$String$convert$R$panda$core$String(backwardInclusiveTest5343);
    panda$core$String* $tmp5347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5345, &$s5346);
    panda$core$String* $tmp5348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5347, numberType4880);
    panda$core$String* $tmp5350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5348, &$s5349);
    panda$core$String* $tmp5351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5350, backwardDelta5303);
    panda$core$String* $tmp5353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5351, &$s5352);
    panda$core$String* $tmp5354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5353, negStep5318);
    (($fn5355) p_out->$class->vtable[19])(p_out, $tmp5354);
    panda$core$String* $tmp5357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5356, backwardInclusiveTest5343);
    panda$core$String* $tmp5359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5357, &$s5358);
    panda$core$String* $tmp5360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5359, loopInc5206);
    panda$core$String* $tmp5362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5360, &$s5361);
    panda$core$String* $tmp5363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5362, loopEnd4982);
    panda$core$String* $tmp5365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5363, &$s5364);
    (($fn5366) p_out->$class->vtable[19])(p_out, $tmp5365);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardExclusiveLabel5332, p_out);
    panda$core$String* $tmp5368 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5367 = $tmp5368;
    panda$core$String* $tmp5369 = panda$core$String$convert$R$panda$core$String(backwardExclusiveTest5367);
    panda$core$String* $tmp5371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5369, &$s5370);
    panda$core$String* $tmp5372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5371, numberType4880);
    panda$core$String* $tmp5374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5372, &$s5373);
    panda$core$String* $tmp5375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5374, backwardDelta5303);
    panda$core$String* $tmp5377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5375, &$s5376);
    panda$core$String* $tmp5378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5377, negStep5318);
    (($fn5379) p_out->$class->vtable[19])(p_out, $tmp5378);
    panda$core$String* $tmp5381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5380, backwardExclusiveTest5367);
    panda$core$String* $tmp5383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5381, &$s5382);
    panda$core$String* $tmp5384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5383, loopInc5206);
    panda$core$String* $tmp5386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5384, &$s5385);
    panda$core$String* $tmp5387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5386, loopEnd4982);
    panda$core$String* $tmp5389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5387, &$s5388);
    (($fn5390) p_out->$class->vtable[19])(p_out, $tmp5389);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc5206, p_out);
    panda$core$String* $tmp5392 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5391 = $tmp5392;
    panda$core$String* $tmp5393 = panda$core$String$convert$R$panda$core$String(inc5391);
    panda$core$String* $tmp5395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5393, &$s5394);
    panda$core$String* $tmp5396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5395, numberType4880);
    panda$core$String* $tmp5398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5396, &$s5397);
    panda$core$String* $tmp5399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5398, indexValue5184);
    panda$core$String* $tmp5401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5399, &$s5400);
    panda$core$String* $tmp5402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5401, step4955);
    panda$core$String* $tmp5404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5402, &$s5403);
    (($fn5405) p_out->$class->vtable[19])(p_out, $tmp5404);
    panda$core$String* $tmp5407 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5406 = $tmp5407;
    panda$core$String* $tmp5408 = panda$core$String$convert$R$panda$core$String(incStruct5406);
    panda$core$String* $tmp5410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5408, &$s5409);
    panda$core$String* $tmp5411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5410, indexType4866);
    panda$core$String* $tmp5413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5411, &$s5412);
    panda$core$String* $tmp5414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5413, numberType4880);
    panda$core$String* $tmp5416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5414, &$s5415);
    (($fn5417) p_out->$class->vtable[19])(p_out, $tmp5416);
    panda$core$String* $tmp5419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5418, numberType4880);
    panda$core$String* $tmp5421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5419, &$s5420);
    panda$core$String* $tmp5422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5421, inc5391);
    panda$core$String* $tmp5424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5422, &$s5423);
    (($fn5425) p_out->$class->vtable[19])(p_out, $tmp5424);
    panda$core$String* $tmp5427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5426, indexType4866);
    panda$core$String* $tmp5429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5427, &$s5428);
    panda$core$String* $tmp5430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5429, incStruct5406);
    panda$core$String* $tmp5432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5430, &$s5431);
    panda$core$String* $tmp5433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5432, indexType4866);
    panda$core$String* $tmp5435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5433, &$s5434);
    panda$core$String* $tmp5436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5435, index4888);
    panda$core$String* $tmp5438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5436, &$s5437);
    (($fn5439) p_out->$class->vtable[19])(p_out, $tmp5438);
    panda$core$String* $tmp5441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5440, loopStart4978);
    panda$core$String* $tmp5443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5441, &$s5442);
    (($fn5444) p_out->$class->vtable[19])(p_out, $tmp5443);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd4982, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    panda$core$Object* $tmp5445 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5446 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5445)->type);
    if ($tmp5446.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5447 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5448 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5447)->type);
    if ($tmp5448.value) {
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
    panda$core$String* loopStart5455;
    panda$core$String* loopBody5457;
    panda$core$String* loopEnd5459;
    panda$core$String* test5468;
    panda$core$String* testBit5471;
    panda$core$Bit $tmp5449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5449.value);
    panda$core$Int64 $tmp5450 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5450, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5451.value);
    panda$core$Object* $tmp5452 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5453 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5454 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5452)->type, $tmp5453);
    PANDA_ASSERT($tmp5454.value);
    panda$core$String* $tmp5456 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5455 = $tmp5456;
    panda$core$String* $tmp5458 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5457 = $tmp5458;
    panda$core$String* $tmp5460 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5459 = $tmp5460;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5461 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5461->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5461->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5461, ((panda$core$String*) p_w->payload), loopEnd5459, loopStart5455);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5461));
    panda$core$String* $tmp5464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5463, loopStart5455);
    panda$core$String* $tmp5466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5464, &$s5465);
    (($fn5467) p_out->$class->vtable[19])(p_out, $tmp5466);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5455, p_out);
    panda$core$Object* $tmp5469 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5470 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5469), p_out);
    test5468 = $tmp5470;
    panda$core$String* $tmp5472 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5471 = $tmp5472;
    panda$core$String* $tmp5473 = panda$core$String$convert$R$panda$core$String(testBit5471);
    panda$core$String* $tmp5475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5473, &$s5474);
    panda$core$String* $tmp5476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5475, test5468);
    panda$core$String* $tmp5478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5476, &$s5477);
    (($fn5479) p_out->$class->vtable[19])(p_out, $tmp5478);
    panda$core$String* $tmp5481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5480, testBit5471);
    panda$core$String* $tmp5483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5481, &$s5482);
    panda$core$String* $tmp5484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5483, loopBody5457);
    panda$core$String* $tmp5486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5484, &$s5485);
    panda$core$String* $tmp5487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5486, loopEnd5459);
    panda$core$String* $tmp5489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5487, &$s5488);
    (($fn5490) p_out->$class->vtable[19])(p_out, $tmp5489);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5457, p_out);
    panda$core$Object* $tmp5491 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5491), p_out);
    panda$core$Object* $tmp5492 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5493 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5492));
    panda$core$Bit $tmp5494 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5493);
    if ($tmp5494.value) {
    {
        panda$core$String* $tmp5496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5495, loopStart5455);
        panda$core$String* $tmp5498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5496, &$s5497);
        (($fn5499) p_out->$class->vtable[19])(p_out, $tmp5498);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5459, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5506;
    panda$core$String* loopBody5508;
    panda$core$String* loopEnd5510;
    panda$core$String* test5519;
    panda$core$String* testBit5522;
    panda$core$Bit $tmp5500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5500.value);
    panda$core$Int64 $tmp5501 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5501, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5502.value);
    panda$core$Object* $tmp5503 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5504 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5505 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5503)->type, $tmp5504);
    PANDA_ASSERT($tmp5505.value);
    panda$core$String* $tmp5507 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5506 = $tmp5507;
    panda$core$String* $tmp5509 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5508 = $tmp5509;
    panda$core$String* $tmp5511 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5510 = $tmp5511;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5512 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5512->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5512->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5512, ((panda$core$String*) p_d->payload), loopEnd5510, loopStart5506);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5512));
    panda$core$String* $tmp5515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5514, loopBody5508);
    panda$core$String* $tmp5517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5515, &$s5516);
    (($fn5518) p_out->$class->vtable[19])(p_out, $tmp5517);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5506, p_out);
    panda$core$Object* $tmp5520 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5521 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5520), p_out);
    test5519 = $tmp5521;
    panda$core$String* $tmp5523 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5522 = $tmp5523;
    panda$core$String* $tmp5524 = panda$core$String$convert$R$panda$core$String(testBit5522);
    panda$core$String* $tmp5526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5524, &$s5525);
    panda$core$String* $tmp5527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5526, test5519);
    panda$core$String* $tmp5529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5527, &$s5528);
    (($fn5530) p_out->$class->vtable[19])(p_out, $tmp5529);
    panda$core$String* $tmp5532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5531, testBit5522);
    panda$core$String* $tmp5534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5532, &$s5533);
    panda$core$String* $tmp5535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5534, loopBody5508);
    panda$core$String* $tmp5537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5535, &$s5536);
    panda$core$String* $tmp5538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5537, loopEnd5510);
    panda$core$String* $tmp5540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5538, &$s5539);
    (($fn5541) p_out->$class->vtable[19])(p_out, $tmp5540);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5508, p_out);
    panda$core$Object* $tmp5542 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5542), p_out);
    panda$core$Object* $tmp5543 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5544 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5543));
    panda$core$Bit $tmp5545 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5544);
    if ($tmp5545.value) {
    {
        panda$core$String* $tmp5547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5546, loopStart5506);
        panda$core$String* $tmp5549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5547, &$s5548);
        (($fn5550) p_out->$class->vtable[19])(p_out, $tmp5549);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5510, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5554;
    panda$core$String* loopEnd5556;
    panda$core$Bit $tmp5551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5551.value);
    panda$core$Int64 $tmp5552 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5552, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5553.value);
    panda$core$String* $tmp5555 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5554 = $tmp5555;
    panda$core$String* $tmp5557 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5556 = $tmp5557;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5558 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5558->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5558->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5558, ((panda$core$String*) p_l->payload), loopEnd5556, loopStart5554);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5558));
    panda$core$String* $tmp5561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5560, loopStart5554);
    panda$core$String* $tmp5563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5561, &$s5562);
    (($fn5564) p_out->$class->vtable[19])(p_out, $tmp5563);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5554, p_out);
    panda$core$Object* $tmp5565 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5565), p_out);
    panda$core$Object* $tmp5566 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5567 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5566));
    panda$core$Bit $tmp5568 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5567);
    if ($tmp5568.value) {
    {
        panda$core$String* $tmp5570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5569, loopStart5554);
        panda$core$String* $tmp5572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5570, &$s5571);
        (($fn5573) p_out->$class->vtable[19])(p_out, $tmp5572);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5556, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5574;
    panda$core$String* ref5584;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5574 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5575 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5574);
            panda$core$String* $tmp5576 = panda$core$String$convert$R$panda$core$String($tmp5575);
            panda$core$String* $tmp5578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5576, &$s5577);
            panda$core$String* $tmp5579 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5574->type);
            panda$core$String* $tmp5580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5578, $tmp5579);
            panda$core$String* $tmp5582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5580, &$s5581);
            (($fn5583) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5582);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5585 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_value, p_out);
                ref5584 = $tmp5585;
                panda$core$String* $tmp5587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5586, ref5584);
                panda$core$String* $tmp5589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5587, &$s5588);
                panda$core$String* $tmp5590 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5574->type);
                panda$core$String* $tmp5591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5589, $tmp5590);
                panda$core$String* $tmp5593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5591, &$s5592);
                panda$core$String* $tmp5594 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5574);
                panda$core$String* $tmp5595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5593, $tmp5594);
                panda$core$String* $tmp5597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5595, &$s5596);
                (($fn5598) p_out->$class->vtable[19])(p_out, $tmp5597);
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
    panda$collections$Iterator* decl$Iter5612;
    org$pandalanguage$pandac$IRNode* decl5624;
    panda$core$Bit $tmp5602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5601 = $tmp5602.value;
    if ($tmp5601) goto $l5603;
    panda$core$Bit $tmp5604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5601 = $tmp5604.value;
    $l5603:;
    panda$core$Bit $tmp5605 = { $tmp5601 };
    bool $tmp5600 = $tmp5605.value;
    if ($tmp5600) goto $l5606;
    panda$core$Bit $tmp5607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5600 = $tmp5607.value;
    $l5606:;
    panda$core$Bit $tmp5608 = { $tmp5600 };
    bool $tmp5599 = $tmp5608.value;
    if ($tmp5599) goto $l5609;
    panda$core$Bit $tmp5610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5599 = $tmp5610.value;
    $l5609:;
    panda$core$Bit $tmp5611 = { $tmp5599 };
    PANDA_ASSERT($tmp5611.value);
    {
        ITable* $tmp5613 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5613->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5613 = $tmp5613->next;
        }
        $fn5615 $tmp5614 = $tmp5613->methods[0];
        panda$collections$Iterator* $tmp5616 = $tmp5614(((panda$collections$Iterable*) p_v->children));
        decl$Iter5612 = $tmp5616;
        $l5617:;
        ITable* $tmp5619 = decl$Iter5612->$class->itable;
        while ($tmp5619->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5619 = $tmp5619->next;
        }
        $fn5621 $tmp5620 = $tmp5619->methods[0];
        panda$core$Bit $tmp5622 = $tmp5620(decl$Iter5612);
        panda$core$Bit $tmp5623 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5622);
        if (!$tmp5623.value) goto $l5618;
        {
            ITable* $tmp5625 = decl$Iter5612->$class->itable;
            while ($tmp5625->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5625 = $tmp5625->next;
            }
            $fn5627 $tmp5626 = $tmp5625->methods[1];
            panda$core$Object* $tmp5628 = $tmp5626(decl$Iter5612);
            decl5624 = ((org$pandalanguage$pandac$IRNode*) $tmp5628);
            panda$core$Bit $tmp5629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5624->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5629.value);
            panda$core$Int64 $tmp5630 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl5624->children);
            panda$core$Bit $tmp5631 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5630, ((panda$core$Int64) { 1 }));
            if ($tmp5631.value) {
            {
                panda$core$Object* $tmp5632 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5624->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5633 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5624->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5632), ((org$pandalanguage$pandac$IRNode*) $tmp5633), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5634 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5624->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5634), NULL, p_out);
            }
            }
        }
        goto $l5617;
        $l5618:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$OutputStream* p_out) {
    panda$core$String* base5638;
    panda$core$String* raw5641;
    org$pandalanguage$pandac$ClassDecl* cl5643;
    org$pandalanguage$pandac$FieldDecl* f5646;
    panda$collections$ListView* fields5647;
    panda$core$Int64 index5649;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5650;
    panda$core$String* result5707;
    panda$core$String* result5720;
    panda$core$String* reused5723;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5635 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5636 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp5635, p_out);
            return $tmp5636;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5637 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5637;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5639 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5640 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5639), p_out);
            base5638 = $tmp5640;
            panda$core$String* $tmp5642 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            raw5641 = $tmp5642;
            panda$core$Object* $tmp5644 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5645 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5644)->type);
            cl5643 = $tmp5645;
            PANDA_ASSERT(((panda$core$Bit) { cl5643 != NULL }).value);
            f5646 = ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload);
            panda$collections$ListView* $tmp5648 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5643);
            fields5647 = $tmp5648;
            index5649 = ((panda$core$Int64) { -1 });
            ITable* $tmp5651 = ((panda$collections$CollectionView*) fields5647)->$class->itable;
            while ($tmp5651->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5651 = $tmp5651->next;
            }
            $fn5653 $tmp5652 = $tmp5651->methods[0];
            panda$core$Int64 $tmp5654 = $tmp5652(((panda$collections$CollectionView*) fields5647));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5650, ((panda$core$Int64) { 0 }), $tmp5654, ((panda$core$Bit) { false }));
            int64_t $tmp5656 = $tmp5650.min.value;
            panda$core$Int64 i5655 = { $tmp5656 };
            int64_t $tmp5658 = $tmp5650.max.value;
            bool $tmp5659 = $tmp5650.inclusive.value;
            if ($tmp5659) goto $l5666; else goto $l5667;
            $l5666:;
            if ($tmp5656 <= $tmp5658) goto $l5660; else goto $l5662;
            $l5667:;
            if ($tmp5656 < $tmp5658) goto $l5660; else goto $l5662;
            $l5660:;
            {
                ITable* $tmp5668 = fields5647->$class->itable;
                while ($tmp5668->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5668 = $tmp5668->next;
                }
                $fn5670 $tmp5669 = $tmp5668->methods[0];
                panda$core$Object* $tmp5671 = $tmp5669(fields5647, i5655);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5671))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) f5646)->name) }).value) {
                {
                    index5649 = i5655;
                    goto $l5662;
                }
                }
            }
            $l5663:;
            int64_t $tmp5673 = $tmp5658 - i5655.value;
            if ($tmp5659) goto $l5674; else goto $l5675;
            $l5674:;
            if ($tmp5673 >= 1) goto $l5672; else goto $l5662;
            $l5675:;
            if ($tmp5673 > 1) goto $l5672; else goto $l5662;
            $l5672:;
            i5655.value += 1;
            goto $l5660;
            $l5662:;
            panda$core$Bit $tmp5678 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5649, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5678.value);
            panda$core$String* $tmp5679 = panda$core$String$convert$R$panda$core$String(raw5641);
            panda$core$String* $tmp5681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5679, &$s5680);
            org$pandalanguage$pandac$Type* $tmp5682 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5643);
            panda$core$String* $tmp5683 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5682);
            panda$core$String* $tmp5684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5681, $tmp5683);
            panda$core$String* $tmp5686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5684, &$s5685);
            org$pandalanguage$pandac$Type* $tmp5687 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5643);
            panda$core$String* $tmp5688 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5687);
            panda$core$String* $tmp5689 = panda$core$String$convert$R$panda$core$String($tmp5688);
            panda$core$String* $tmp5691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5689, &$s5690);
            panda$core$String* $tmp5692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5691, base5638);
            panda$core$String* $tmp5694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5692, &$s5693);
            panda$core$String* $tmp5695 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5694, ((panda$core$Object*) wrap_panda$core$Int64(index5649)));
            panda$core$String* $tmp5697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5695, &$s5696);
            panda$core$String* $tmp5698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5686, $tmp5697);
            (($fn5699) p_out->$class->vtable[19])(p_out, $tmp5698);
            panda$core$Bit $tmp5701 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f5646->type);
            panda$core$Bit $tmp5702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5701);
            bool $tmp5700 = $tmp5702.value;
            if ($tmp5700) goto $l5703;
            org$pandalanguage$pandac$ClassDecl* $tmp5704 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f5646->type);
            panda$core$Bit $tmp5705 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp5704);
            $tmp5700 = $tmp5705.value;
            $l5703:;
            panda$core$Bit $tmp5706 = { $tmp5700 };
            if ($tmp5706.value) {
            {
                return raw5641;
            }
            }
            panda$core$String* $tmp5708 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result5707 = $tmp5708;
            panda$core$String* $tmp5709 = panda$core$String$convert$R$panda$core$String(result5707);
            panda$core$String* $tmp5711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5709, &$s5710);
            panda$core$String* $tmp5712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5711, raw5641);
            panda$core$String* $tmp5714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5712, &$s5713);
            panda$core$String* $tmp5715 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5714, $tmp5715);
            panda$core$String* $tmp5718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5716, &$s5717);
            (($fn5719) p_out->$class->vtable[19])(p_out, $tmp5718);
            return result5707;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5721 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5722 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5721), p_out);
            result5720 = $tmp5722;
            panda$core$String* $tmp5724 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5723 = $tmp5724;
            panda$core$String* $tmp5725 = panda$core$String$convert$R$panda$core$String(reused5723);
            panda$core$String* $tmp5727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5725, &$s5726);
            panda$core$String* $tmp5728 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5727, $tmp5728);
            panda$core$String* $tmp5731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5729, &$s5730);
            panda$core$String* $tmp5732 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5733 = panda$core$String$convert$R$panda$core$String($tmp5732);
            panda$core$String* $tmp5735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5733, &$s5734);
            panda$core$String* $tmp5736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5735, result5720);
            panda$core$String* $tmp5738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5736, &$s5737);
            panda$core$String* $tmp5739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5731, $tmp5738);
            (($fn5740) p_out->$class->vtable[19])(p_out, $tmp5739);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5723));
            return result5720;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* lvalue5744;
    panda$core$String* value5755;
    panda$core$String* t5756;
    panda$core$Int64 op5759;
    panda$core$String* right5761;
    panda$core$Bit $tmp5741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5741.value);
    panda$core$Int64 $tmp5742 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5742, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5743.value);
    panda$core$Object* $tmp5745 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5746 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5745)->type);
    panda$core$String* $tmp5747 = panda$core$String$convert$R$panda$core$String($tmp5746);
    panda$core$String* $tmp5749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5747, &$s5748);
    panda$core$Object* $tmp5750 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5751 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5750), p_out);
    panda$core$String* $tmp5752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5749, $tmp5751);
    panda$core$String* $tmp5754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5752, &$s5753);
    lvalue5744 = $tmp5754;
    panda$core$Object* $tmp5757 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5758 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5757)->type);
    t5756 = $tmp5758;
    op5759 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5759, ((panda$core$Int64) { 73 }));
    if ($tmp5760.value) {
    {
        panda$core$Object* $tmp5762 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5763 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5762), p_out);
        right5761 = $tmp5763;
        panda$core$String* $tmp5764 = panda$core$String$convert$R$panda$core$String(t5756);
        panda$core$String* $tmp5766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5764, &$s5765);
        panda$core$String* $tmp5767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5766, right5761);
        panda$core$String* $tmp5769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5767, &$s5768);
        value5755 = $tmp5769;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5770, value5755);
    panda$core$String* $tmp5773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5771, &$s5772);
    panda$core$String* $tmp5774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5773, lvalue5744);
    panda$core$String* $tmp5776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5774, &$s5775);
    (($fn5777) p_out->$class->vtable[19])(p_out, $tmp5776);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5787;
    panda$core$String* result5789;
    bool $tmp5778 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp5778) goto $l5779;
    panda$core$Int64 $tmp5780 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5781 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5780, ((panda$core$Int64) { 0 }));
    $tmp5778 = $tmp5781.value;
    $l5779:;
    panda$core$Bit $tmp5782 = { $tmp5778 };
    if ($tmp5782.value) {
    {
        panda$core$Int64 $tmp5783 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5783, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp5784.value);
        panda$core$Int64 $tmp5785 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5786 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5785, ((panda$core$Int64) { 0 }));
        if ($tmp5786.value) {
        {
            panda$core$Object* $tmp5788 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5787 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5788);
            panda$core$Object* $tmp5790 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5791 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5790), p_out);
            result5789 = $tmp5791;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5792 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5792->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5792->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5792, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5789));
            panda$collections$Array$add$panda$collections$Array$T(inline5787->returns, ((panda$core$Object*) $tmp5792));
            panda$core$String* $tmp5795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5794, inline5787->exitLabel);
            panda$core$String* $tmp5797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5795, &$s5796);
            (($fn5798) p_out->$class->vtable[19])(p_out, $tmp5797);
        }
        }
        else {
        {
            panda$core$Object* $tmp5800 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5801 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5800), p_out);
            panda$core$String* $tmp5802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5799, $tmp5801);
            panda$core$String* $tmp5804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5802, &$s5803);
            (($fn5805) p_out->$class->vtable[19])(p_out, $tmp5804);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5806 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5807 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5806, ((panda$core$Int64) { 0 }));
        if ($tmp5807.value) {
        {
            panda$core$Object* $tmp5809 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5808, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5809)->exitLabel);
            panda$core$String* $tmp5812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5810, &$s5811);
            (($fn5813) p_out->$class->vtable[19])(p_out, $tmp5812);
        }
        }
        else {
        {
            (($fn5815) p_out->$class->vtable[19])(p_out, &$s5814);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5819;
    panda$core$Int64 $tmp5816 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5817 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5816, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5817.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5818 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5818);
    }
    }
    panda$core$Int64 $tmp5820 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5819, ((panda$core$Int64) { 0 }), $tmp5820, ((panda$core$Bit) { false }));
    int64_t $tmp5822 = $tmp5819.min.value;
    panda$core$Int64 i5821 = { $tmp5822 };
    int64_t $tmp5824 = $tmp5819.max.value;
    bool $tmp5825 = $tmp5819.inclusive.value;
    if ($tmp5825) goto $l5832; else goto $l5833;
    $l5832:;
    if ($tmp5822 <= $tmp5824) goto $l5826; else goto $l5828;
    $l5833:;
    if ($tmp5822 < $tmp5824) goto $l5826; else goto $l5828;
    $l5826:;
    {
        panda$core$Object* $tmp5835 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5821);
        bool $tmp5834 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5835)->loopLabel != NULL }).value;
        if (!$tmp5834) goto $l5836;
        panda$core$Object* $tmp5837 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5821);
        panda$core$Bit $tmp5838 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5837)->loopLabel, p_name);
        $tmp5834 = $tmp5838.value;
        $l5836:;
        panda$core$Bit $tmp5839 = { $tmp5834 };
        if ($tmp5839.value) {
        {
            panda$core$Object* $tmp5840 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5821);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5840);
        }
        }
    }
    $l5829:;
    int64_t $tmp5842 = $tmp5824 - i5821.value;
    if ($tmp5825) goto $l5843; else goto $l5844;
    $l5843:;
    if ($tmp5842 >= 1) goto $l5841; else goto $l5828;
    $l5844:;
    if ($tmp5842 > 1) goto $l5841; else goto $l5828;
    $l5841:;
    i5821.value += 1;
    goto $l5826;
    $l5828:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5847;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5848 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5847 = $tmp5848;
    panda$core$String* $tmp5850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5849, desc5847->breakLabel);
    panda$core$String* $tmp5852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5850, &$s5851);
    (($fn5853) p_out->$class->vtable[19])(p_out, $tmp5852);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5854;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5855 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5854 = $tmp5855;
    panda$core$String* $tmp5857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5856, desc5854->continueLabel);
    panda$core$String* $tmp5859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5857, &$s5858);
    (($fn5860) p_out->$class->vtable[19])(p_out, $tmp5859);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* test5870;
    panda$core$String* ifTrue5873;
    panda$core$String* ifFalse5875;
    panda$core$String* name5888;
    panda$core$String* path5889;
    panda$core$String$Index$nullable index5891;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5894;
    panda$core$String* nameRef5896;
    panda$core$String* line5898;
    panda$core$String* msg5903;
    panda$collections$Iterator* m$Iter5910;
    org$pandalanguage$pandac$MethodDecl* m5924;
    panda$core$Bit $tmp5861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5861.value);
    panda$core$Int64 $tmp5863 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5863, ((panda$core$Int64) { 1 }));
    bool $tmp5862 = $tmp5864.value;
    if ($tmp5862) goto $l5865;
    panda$core$Int64 $tmp5866 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5866, ((panda$core$Int64) { 2 }));
    $tmp5862 = $tmp5867.value;
    $l5865:;
    panda$core$Bit $tmp5868 = { $tmp5862 };
    PANDA_ASSERT($tmp5868.value);
    panda$core$Bit $tmp5869 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5869.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5871 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5872 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5871), p_out);
    test5870 = $tmp5872;
    panda$core$String* $tmp5874 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5873 = $tmp5874;
    panda$core$String* $tmp5876 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5875 = $tmp5876;
    panda$core$String* $tmp5878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5877, test5870);
    panda$core$String* $tmp5880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5878, &$s5879);
    panda$core$String* $tmp5881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5880, ifTrue5873);
    panda$core$String* $tmp5883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5881, &$s5882);
    panda$core$String* $tmp5884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5883, ifFalse5875);
    panda$core$String* $tmp5886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5884, &$s5885);
    (($fn5887) p_out->$class->vtable[19])(p_out, $tmp5886);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse5875, p_out);
    panda$core$Object* $tmp5890 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path5889 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5890)->source->path;
    panda$core$String$Index$nullable $tmp5893 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path5889, &$s5892);
    index5891 = $tmp5893;
    if (((panda$core$Bit) { !index5891.nonnull }).value) {
    {
        name5888 = path5889;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp5894, index5891, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5895 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path5889, $tmp5894);
        name5888 = $tmp5895;
    }
    }
    panda$core$String* $tmp5897 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, name5888, p_out);
    nameRef5896 = $tmp5897;
    panda$core$String* $tmp5900 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5899, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp5902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5900, &$s5901);
    line5898 = $tmp5902;
    panda$core$Int64 $tmp5904 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5904, ((panda$core$Int64) { 2 }));
    if ($tmp5905.value) {
    {
        panda$core$Object* $tmp5906 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5907 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5906), p_out);
        msg5903 = $tmp5907;
    }
    }
    else {
    {
        msg5903 = NULL;
    }
    }
    (($fn5909) p_out->$class->vtable[16])(p_out, &$s5908);
    {
        org$pandalanguage$pandac$Type* $tmp5911 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp5912 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp5911);
        ITable* $tmp5913 = ((panda$collections$Iterable*) $tmp5912->methods)->$class->itable;
        while ($tmp5913->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5913 = $tmp5913->next;
        }
        $fn5915 $tmp5914 = $tmp5913->methods[0];
        panda$collections$Iterator* $tmp5916 = $tmp5914(((panda$collections$Iterable*) $tmp5912->methods));
        m$Iter5910 = $tmp5916;
        $l5917:;
        ITable* $tmp5919 = m$Iter5910->$class->itable;
        while ($tmp5919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5919 = $tmp5919->next;
        }
        $fn5921 $tmp5920 = $tmp5919->methods[0];
        panda$core$Bit $tmp5922 = $tmp5920(m$Iter5910);
        panda$core$Bit $tmp5923 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5922);
        if (!$tmp5923.value) goto $l5918;
        {
            ITable* $tmp5925 = m$Iter5910->$class->itable;
            while ($tmp5925->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5925 = $tmp5925->next;
            }
            $fn5927 $tmp5926 = $tmp5925->methods[1];
            panda$core$Object* $tmp5928 = $tmp5926(m$Iter5910);
            m5924 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5928);
            panda$core$Bit $tmp5930 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5924)->name, &$s5929);
            if ($tmp5930.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m5924);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m5924);
            }
            }
        }
        goto $l5917;
        $l5918:;
    }
    if (((panda$core$Bit) { msg5903 != NULL }).value) {
    {
        panda$core$String* $tmp5933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5931, &$s5932);
        (($fn5934) p_out->$class->vtable[16])(p_out, $tmp5933);
    }
    }
    else {
    {
        (($fn5936) p_out->$class->vtable[16])(p_out, &$s5935);
    }
    }
    panda$core$String* $tmp5938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5937, nameRef5896);
    panda$core$String* $tmp5940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5938, &$s5939);
    panda$core$String* $tmp5941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5940, line5898);
    panda$core$String* $tmp5943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5941, &$s5942);
    (($fn5944) p_out->$class->vtable[16])(p_out, $tmp5943);
    if (((panda$core$Bit) { msg5903 != NULL }).value) {
    {
        panda$core$String* $tmp5946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5945, msg5903);
        panda$core$String* $tmp5948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5946, &$s5947);
        (($fn5949) p_out->$class->vtable[16])(p_out, $tmp5948);
    }
    }
    (($fn5951) p_out->$class->vtable[19])(p_out, &$s5950);
    (($fn5953) p_out->$class->vtable[19])(p_out, &$s5952);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue5873, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$OutputStream* p_out) {
    panda$core$String* valueStruct5955;
    org$pandalanguage$pandac$ClassDecl* numberClass5958;
    panda$core$String* value5961;
    org$pandalanguage$pandac$FieldDecl* f5970;
    panda$core$String* switchType5973;
    panda$core$String* endLabel5983;
    panda$collections$Array* whenLabels5985;
    panda$core$String* otherwiseLabel5988;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5999;
    org$pandalanguage$pandac$IRNode* w6014;
    panda$core$String* label6018;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6020;
    panda$core$UInt64 number6036;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6064;
    org$pandalanguage$pandac$IRNode* w6079;
    org$pandalanguage$pandac$IRNode* block6081;
    panda$core$Bit $tmp5954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp5954.value);
    panda$core$Object* $tmp5956 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5957 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5956), p_out);
    valueStruct5955 = $tmp5957;
    panda$core$Object* $tmp5959 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp5960 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5959)->type);
    numberClass5958 = $tmp5960;
    panda$core$String* $tmp5962 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value5961 = $tmp5962;
    panda$core$String* $tmp5963 = panda$core$String$convert$R$panda$core$String(value5961);
    panda$core$String* $tmp5965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5963, &$s5964);
    panda$core$String* $tmp5966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5965, valueStruct5955);
    panda$core$String* $tmp5968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5966, &$s5967);
    (($fn5969) p_out->$class->vtable[19])(p_out, $tmp5968);
    org$pandalanguage$pandac$Symbol* $tmp5972 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass5958->symbolTable, &$s5971);
    f5970 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5972);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f5970);
    panda$core$String* $tmp5974 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f5970->type);
    switchType5973 = $tmp5974;
    panda$core$String* $tmp5976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5975, switchType5973);
    panda$core$String* $tmp5978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5976, &$s5977);
    panda$core$String* $tmp5979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5978, value5961);
    panda$core$String* $tmp5981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5979, &$s5980);
    (($fn5982) p_out->$class->vtable[16])(p_out, $tmp5981);
    panda$core$String* $tmp5984 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel5983 = $tmp5984;
    panda$collections$Array* $tmp5986 = (panda$collections$Array*) malloc(40);
    $tmp5986->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5986->refCount.value = 1;
    panda$collections$Array$init($tmp5986);
    whenLabels5985 = $tmp5986;
    panda$core$Int64 $tmp5989 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp5990 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5989, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5991 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, $tmp5990);
    panda$core$Bit $tmp5992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5991)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp5992.value) {
    {
        panda$core$String* $tmp5993 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel5988 = $tmp5993;
    }
    }
    else {
    {
        otherwiseLabel5988 = endLabel5983;
    }
    }
    panda$core$String* $tmp5995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5994, otherwiseLabel5988);
    panda$core$String* $tmp5997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5995, &$s5996);
    (($fn5998) p_out->$class->vtable[19])(p_out, $tmp5997);
    panda$core$Int64 $tmp6000 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5999, ((panda$core$Int64) { 1 }), $tmp6000, ((panda$core$Bit) { false }));
    int64_t $tmp6002 = $tmp5999.min.value;
    panda$core$Int64 i6001 = { $tmp6002 };
    int64_t $tmp6004 = $tmp5999.max.value;
    bool $tmp6005 = $tmp5999.inclusive.value;
    if ($tmp6005) goto $l6012; else goto $l6013;
    $l6012:;
    if ($tmp6002 <= $tmp6004) goto $l6006; else goto $l6008;
    $l6013:;
    if ($tmp6002 < $tmp6004) goto $l6006; else goto $l6008;
    $l6006:;
    {
        panda$core$Object* $tmp6015 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i6001);
        w6014 = ((org$pandalanguage$pandac$IRNode*) $tmp6015);
        panda$core$Bit $tmp6016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6014->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp6016.value) {
        {
            goto $l6009;
        }
        }
        panda$core$Bit $tmp6017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6014->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp6017.value);
        panda$core$String* $tmp6019 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label6018 = $tmp6019;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels5985, ((panda$core$Object*) label6018));
        panda$core$Int64 $tmp6021 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w6014->children);
        panda$core$Int64 $tmp6022 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6021, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6020, ((panda$core$Int64) { 0 }), $tmp6022, ((panda$core$Bit) { false }));
        int64_t $tmp6024 = $tmp6020.min.value;
        panda$core$Int64 i6023 = { $tmp6024 };
        int64_t $tmp6026 = $tmp6020.max.value;
        bool $tmp6027 = $tmp6020.inclusive.value;
        if ($tmp6027) goto $l6034; else goto $l6035;
        $l6034:;
        if ($tmp6024 <= $tmp6026) goto $l6028; else goto $l6030;
        $l6035:;
        if ($tmp6024 < $tmp6026) goto $l6028; else goto $l6030;
        $l6028:;
        {
            panda$core$Object* $tmp6037 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w6014->children, i6023);
            panda$core$UInt64 $tmp6038 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6037));
            number6036 = $tmp6038;
            panda$core$String* $tmp6040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6039, switchType5973);
            panda$core$String* $tmp6042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6040, &$s6041);
            panda$core$String* $tmp6043 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6042, ((panda$core$Object*) wrap_panda$core$UInt64(number6036)));
            panda$core$String* $tmp6045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6043, &$s6044);
            panda$core$String* $tmp6046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6045, label6018);
            panda$core$String* $tmp6048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6046, &$s6047);
            (($fn6049) p_out->$class->vtable[19])(p_out, $tmp6048);
        }
        $l6031:;
        int64_t $tmp6051 = $tmp6026 - i6023.value;
        if ($tmp6027) goto $l6052; else goto $l6053;
        $l6052:;
        if ($tmp6051 >= 1) goto $l6050; else goto $l6030;
        $l6053:;
        if ($tmp6051 > 1) goto $l6050; else goto $l6030;
        $l6050:;
        i6023.value += 1;
        goto $l6028;
        $l6030:;
    }
    $l6009:;
    int64_t $tmp6057 = $tmp6004 - i6001.value;
    if ($tmp6005) goto $l6058; else goto $l6059;
    $l6058:;
    if ($tmp6057 >= 1) goto $l6056; else goto $l6008;
    $l6059:;
    if ($tmp6057 > 1) goto $l6056; else goto $l6008;
    $l6056:;
    i6001.value += 1;
    goto $l6006;
    $l6008:;
    (($fn6063) p_out->$class->vtable[19])(p_out, &$s6062);
    panda$core$Int64 $tmp6065 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6064, ((panda$core$Int64) { 1 }), $tmp6065, ((panda$core$Bit) { false }));
    int64_t $tmp6067 = $tmp6064.min.value;
    panda$core$Int64 i6066 = { $tmp6067 };
    int64_t $tmp6069 = $tmp6064.max.value;
    bool $tmp6070 = $tmp6064.inclusive.value;
    if ($tmp6070) goto $l6077; else goto $l6078;
    $l6077:;
    if ($tmp6067 <= $tmp6069) goto $l6071; else goto $l6073;
    $l6078:;
    if ($tmp6067 < $tmp6069) goto $l6071; else goto $l6073;
    $l6071:;
    {
        panda$core$Object* $tmp6080 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i6066);
        w6079 = ((org$pandalanguage$pandac$IRNode*) $tmp6080);
        panda$core$Int64 $tmp6082 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w6079->children);
        panda$core$Int64 $tmp6083 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6082, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp6084 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w6079->children, $tmp6083);
        block6081 = ((org$pandalanguage$pandac$IRNode*) $tmp6084);
        panda$core$Int64 $tmp6085 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6066, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp6086 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels5985);
        panda$core$Bit $tmp6087 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp6085, $tmp6086);
        if ($tmp6087.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, otherwiseLabel5988, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp6088 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6066, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp6089 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels5985, $tmp6088);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ((panda$core$String*) $tmp6089), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block6081, p_out);
        panda$core$Bit $tmp6090 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block6081);
        panda$core$Bit $tmp6091 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6090);
        if ($tmp6091.value) {
        {
            panda$core$String* $tmp6093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6092, endLabel5983);
            panda$core$String* $tmp6095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6093, &$s6094);
            (($fn6096) p_out->$class->vtable[19])(p_out, $tmp6095);
        }
        }
    }
    $l6074:;
    int64_t $tmp6098 = $tmp6069 - i6066.value;
    if ($tmp6070) goto $l6099; else goto $l6100;
    $l6099:;
    if ($tmp6098 >= 1) goto $l6097; else goto $l6073;
    $l6100:;
    if ($tmp6098 > 1) goto $l6097; else goto $l6073;
    $l6097:;
    i6066.value += 1;
    goto $l6071;
    $l6073:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel5983, p_out);
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
    panda$core$String* result6103;
    org$pandalanguage$pandac$Type* $tmp6104 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp6105 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6104);
    result6103 = $tmp6105;
    panda$core$Bit $tmp6107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6106 = $tmp6107.value;
    if (!$tmp6106) goto $l6108;
    panda$core$Bit $tmp6110 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6103, &$s6109);
    panda$core$Bit $tmp6111 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6110);
    $tmp6106 = $tmp6111.value;
    $l6108:;
    panda$core$Bit $tmp6112 = { $tmp6106 };
    if ($tmp6112.value) {
    {
        panda$core$String* $tmp6114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6103, &$s6113);
        return $tmp6114;
    }
    }
    return result6103;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6115;
    panda$core$Bit needsIndirection6124;
    panda$core$String* separator6136;
    panda$collections$Iterator* p$Iter6155;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6167;
    panda$core$String* $tmp6116 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6115 = $tmp6116;
    panda$core$Bit $tmp6117 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6115));
    if ($tmp6117.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6115));
    panda$core$String* $tmp6119 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6118, $tmp6119);
    panda$core$String* $tmp6122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6120, &$s6121);
    (($fn6123) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6122);
    panda$core$Bit $tmp6125 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6124 = $tmp6125;
    if (needsIndirection6124.value) {
    {
        (($fn6127) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6126);
    }
    }
    else {
    {
        panda$core$String* $tmp6128 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6129) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6128);
    }
    }
    panda$core$String* $tmp6131 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6130, $tmp6131);
    panda$core$String* $tmp6134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6132, &$s6133);
    (($fn6135) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6134);
    separator6136 = &$s6137;
    if (needsIndirection6124.value) {
    {
        panda$core$String* $tmp6138 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6139 = panda$core$String$convert$R$panda$core$String($tmp6138);
        panda$core$String* $tmp6141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6139, &$s6140);
        (($fn6142) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6141);
        separator6136 = &$s6143;
    }
    }
    panda$core$Bit $tmp6144 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6144);
    if ($tmp6145.value) {
    {
        panda$core$String* $tmp6146 = panda$core$String$convert$R$panda$core$String(separator6136);
        panda$core$String* $tmp6148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6146, &$s6147);
        panda$core$String* $tmp6149 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6148, $tmp6149);
        panda$core$String* $tmp6152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6150, &$s6151);
        (($fn6153) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6152);
        separator6136 = &$s6154;
    }
    }
    {
        ITable* $tmp6156 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6156->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6156 = $tmp6156->next;
        }
        $fn6158 $tmp6157 = $tmp6156->methods[0];
        panda$collections$Iterator* $tmp6159 = $tmp6157(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6155 = $tmp6159;
        $l6160:;
        ITable* $tmp6162 = p$Iter6155->$class->itable;
        while ($tmp6162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6162 = $tmp6162->next;
        }
        $fn6164 $tmp6163 = $tmp6162->methods[0];
        panda$core$Bit $tmp6165 = $tmp6163(p$Iter6155);
        panda$core$Bit $tmp6166 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6165);
        if (!$tmp6166.value) goto $l6161;
        {
            ITable* $tmp6168 = p$Iter6155->$class->itable;
            while ($tmp6168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6168 = $tmp6168->next;
            }
            $fn6170 $tmp6169 = $tmp6168->methods[1];
            panda$core$Object* $tmp6171 = $tmp6169(p$Iter6155);
            p6167 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6171);
            panda$core$String* $tmp6172 = panda$core$String$convert$R$panda$core$String(separator6136);
            panda$core$String* $tmp6174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6172, &$s6173);
            panda$core$String* $tmp6175 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6167->type);
            panda$core$String* $tmp6176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6174, $tmp6175);
            panda$core$String* $tmp6178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6176, &$s6177);
            panda$core$String* $tmp6179 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6167->name);
            panda$core$String* $tmp6180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6178, $tmp6179);
            panda$core$String* $tmp6182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6180, &$s6181);
            (($fn6183) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6182);
            separator6136 = &$s6184;
        }
        goto $l6160;
        $l6161:;
    }
    (($fn6186) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6185);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6209;
    panda$collections$Iterator* p$Iter6219;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6231;
    panda$io$MemoryOutputStream* bodyBuffer6252;
    panda$collections$Iterator* s$Iter6255;
    org$pandalanguage$pandac$IRNode* s6267;
    panda$core$Object* $tmp6187 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6187)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6188;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$io$MemoryOutputStream* $tmp6189 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6189->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6189->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6189);
    self->methodHeader = $tmp6189;
    (($fn6192) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6191);
    panda$core$Bit $tmp6193 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6193.value) {
    {
        (($fn6195) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6194);
    }
    }
    panda$core$String* $tmp6196 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6197 = panda$core$String$convert$R$panda$core$String($tmp6196);
    panda$core$String* $tmp6199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6197, &$s6198);
    panda$core$String* $tmp6200 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6199, $tmp6200);
    panda$core$String* $tmp6203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6201, &$s6202);
    panda$core$String* $tmp6204 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6203, $tmp6204);
    panda$core$String* $tmp6207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6205, &$s6206);
    (($fn6208) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6207);
    separator6209 = &$s6210;
    panda$core$Bit $tmp6211 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6212 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6211);
    if ($tmp6212.value) {
    {
        panda$core$String* $tmp6213 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6214 = panda$core$String$convert$R$panda$core$String($tmp6213);
        panda$core$String* $tmp6216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6214, &$s6215);
        (($fn6217) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6216);
        separator6209 = &$s6218;
    }
    }
    {
        ITable* $tmp6220 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6220->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6220 = $tmp6220->next;
        }
        $fn6222 $tmp6221 = $tmp6220->methods[0];
        panda$collections$Iterator* $tmp6223 = $tmp6221(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6219 = $tmp6223;
        $l6224:;
        ITable* $tmp6226 = p$Iter6219->$class->itable;
        while ($tmp6226->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6226 = $tmp6226->next;
        }
        $fn6228 $tmp6227 = $tmp6226->methods[0];
        panda$core$Bit $tmp6229 = $tmp6227(p$Iter6219);
        panda$core$Bit $tmp6230 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6229);
        if (!$tmp6230.value) goto $l6225;
        {
            ITable* $tmp6232 = p$Iter6219->$class->itable;
            while ($tmp6232->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6232 = $tmp6232->next;
            }
            $fn6234 $tmp6233 = $tmp6232->methods[1];
            panda$core$Object* $tmp6235 = $tmp6233(p$Iter6219);
            p6231 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6235);
            panda$core$String* $tmp6236 = panda$core$String$convert$R$panda$core$String(separator6209);
            panda$core$String* $tmp6238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6236, &$s6237);
            panda$core$String* $tmp6239 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6231->type);
            panda$core$String* $tmp6240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6238, $tmp6239);
            panda$core$String* $tmp6242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6240, &$s6241);
            panda$core$String* $tmp6243 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6231->name);
            panda$core$String* $tmp6244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6242, $tmp6243);
            panda$core$String* $tmp6246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6244, &$s6245);
            (($fn6247) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6246);
            separator6209 = &$s6248;
        }
        goto $l6224;
        $l6225:;
    }
    (($fn6250) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6249);
    panda$core$Bit $tmp6251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6251.value);
    panda$io$MemoryOutputStream* $tmp6253 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6253->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6253->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6253);
    bodyBuffer6252 = $tmp6253;
    {
        ITable* $tmp6256 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6256->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6256 = $tmp6256->next;
        }
        $fn6258 $tmp6257 = $tmp6256->methods[0];
        panda$collections$Iterator* $tmp6259 = $tmp6257(((panda$collections$Iterable*) p_body->children));
        s$Iter6255 = $tmp6259;
        $l6260:;
        ITable* $tmp6262 = s$Iter6255->$class->itable;
        while ($tmp6262->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6262 = $tmp6262->next;
        }
        $fn6264 $tmp6263 = $tmp6262->methods[0];
        panda$core$Bit $tmp6265 = $tmp6263(s$Iter6255);
        panda$core$Bit $tmp6266 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6265);
        if (!$tmp6266.value) goto $l6261;
        {
            ITable* $tmp6268 = s$Iter6255->$class->itable;
            while ($tmp6268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6268 = $tmp6268->next;
            }
            $fn6270 $tmp6269 = $tmp6268->methods[1];
            panda$core$Object* $tmp6271 = $tmp6269(s$Iter6255);
            s6267 = ((org$pandalanguage$pandac$IRNode*) $tmp6271);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s6267, ((panda$io$OutputStream*) bodyBuffer6252));
        }
        goto $l6260;
        $l6261:;
    }
    panda$core$String* $tmp6272 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeader);
    (($fn6273) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6272);
    panda$core$String* $tmp6274 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer6252);
    (($fn6275) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6274);
    panda$core$Bit $tmp6276 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6277 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6276);
    if ($tmp6277.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6278 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6279 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6278);
        if ($tmp6279.value) {
        {
            (($fn6281) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6280);
        }
        }
        else {
        {
            (($fn6283) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6282);
        }
        }
    }
    }
    (($fn6285) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6284);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6286 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6286.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6287 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6287);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

