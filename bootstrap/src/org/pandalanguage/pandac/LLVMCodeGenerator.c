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
#include "panda/core/Real64.h"
#include "panda/core/Real32.h"
#include "panda/core/Panda.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/Int8.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/io/File.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/SymbolTable.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$finish} };

org$pandalanguage$pandac$LLVMCodeGenerator$class_type org$pandalanguage$pandac$LLVMCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$finish, org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim, org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT, org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl} };

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
typedef panda$collections$Iterator* (*$fn500)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn506)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn512)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn539)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn586)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn597)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn603)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn609)(panda$collections$Iterator*);
typedef void (*$fn625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn658)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn661)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn668)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn674)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn702)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn710)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn754)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn773)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn807)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn819)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn821)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn842)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn845)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn856)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn886)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn894)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn899)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn950)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn975)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1001)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1009)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1014)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1016)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1025)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1031)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1037)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1064)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1111)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1122)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1128)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1134)(panda$collections$Iterator*);
typedef void (*$fn1151)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1259)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1279)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1336)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1347)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1353)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1359)(panda$collections$Iterator*);
typedef void (*$fn1375)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1393)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1416)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1483)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1494)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1512)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1536)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1705)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1711)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1717)(panda$collections$Iterator*);
typedef void (*$fn1750)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1766)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1779)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1785)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1800)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1813)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1829)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1842)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1848)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1863)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1927)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1943)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1952)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1968)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1977)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2014)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2031)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2039)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2047)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2072)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2094)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2111)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2134)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2143)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2155)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2187)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2209)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2246)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2261)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2284)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2291)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2320)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2329)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2343)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2358)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2382)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2395)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2407)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2412)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2419)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2436)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2449)(panda$collections$CollectionView*);
typedef void (*$fn2469)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2481)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2496)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2523)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2544)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2557)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2571)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2596)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2611)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2648)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2668)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2683)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2699)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2711)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2728)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2745)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2759)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2782)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2797)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2832)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2879)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2886)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2897)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2903)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2909)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2915)(panda$collections$Iterator*);
typedef void (*$fn2926)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2928)(panda$io$OutputStream*);
typedef void (*$fn2953)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2971)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3073)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3085)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3090)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3110)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3115)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3121)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3127)(panda$collections$Iterator*);
typedef void (*$fn3135)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3173)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3188)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3220)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3265)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3285)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3301)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3306)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3322)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3338)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3356)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3387)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3404)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3426)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3446)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3466)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3483)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3498)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3509)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3537)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3559)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3574)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3589)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3613)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3626)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3718)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3773)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3814)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3828)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3850)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3860)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3873)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3900)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3915)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3992)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4004)(panda$collections$CollectionView*);
typedef void (*$fn4015)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4022)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4028)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4034)(panda$collections$Iterator*);
typedef void (*$fn4043)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4046)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4083)(panda$collections$CollectionView*);
typedef void (*$fn4095)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4141)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4149)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4157)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4188)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4205)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4239)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4261)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4306)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4312)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4318)(panda$collections$Iterator*);
typedef void (*$fn4340)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4367)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4392)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4404)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4420)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4425)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4532)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4548)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4565)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4569)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4575)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4581)(panda$collections$Iterator*);
typedef void (*$fn4583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4584)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4587)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4610)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4638)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4649)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4685)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4692)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4704)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4713)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4730)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4744)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4753)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4762)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4805)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4824)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4835)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4854)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4880)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4887)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4904)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4917)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4929)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4940)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4952)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4975)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4987)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4995)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5009)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5014)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5050)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5057)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5069)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5078)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5095)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5109)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5127)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5141)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5190)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5219)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5238)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5268)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5296)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5315)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5326)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5345)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5356)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5371)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5378)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5395)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5410)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5423)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5449)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5464)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5490)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5502)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5515)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5528)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5539)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5552)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5578)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5590)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5598)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5612)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5617)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5640)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5652)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5663)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5691)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5703)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5714)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5737)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5746)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5756)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5771)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5788)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5794)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5800)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5826)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5843)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5872)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5892)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5913)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5950)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5971)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5978)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5986)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6030)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6037)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6064)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6087)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6093)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6099)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6105)(panda$collections$Iterator*);
typedef void (*$fn6112)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6114)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6122)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6127)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6129)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6131)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6160)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6176)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6227)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6274)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6301)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6305)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6307)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6313)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6320)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6331)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6336)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6342)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6348)(panda$collections$Iterator*);
typedef void (*$fn6361)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6364)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6373)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6386)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6395)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6400)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6406)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6412)(panda$collections$Iterator*);
typedef void (*$fn6425)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6428)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6436)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6442)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6448)(panda$collections$Iterator*);
typedef void (*$fn6451)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6453)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6463)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6C\x6F\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6F\x75\x62\x6C\x65", 6, 2124202461136, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 13473, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, -907514259111148708, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2, 13883, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 224, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, -6248805146137626796, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 14387129908788272, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 22145878250529579, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 200217461, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 786813570417990567, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, -7649133232731397023, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 14375831170, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3, 1360582, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2, 14050, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, -5595348649711353309, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1496394141948660748, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12, 8117540625486023742, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, 4666563658315683327, NULL };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, 8017085082545020976, NULL };
static panda$core$String $s918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, -907514259111148708, NULL };
static panda$core$String $s1046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, 1496394141948660752, NULL };
static panda$core$String $s1053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 224, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, -6248805146137626796, NULL };
static panda$core$String $s1067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s1073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 14387129908788272, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 22145878250529579, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 200217461, NULL };
static panda$core$String $s1152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 786813570417990567, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, -7649133232731397023, NULL };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, 2313371919207, NULL };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, -7053567309059437070, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, -5503210093567996833, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s1289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s1296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 8410572937891831521, NULL };
static panda$core$String $s1315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 4466831713963476000, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, -899563194480661156, NULL };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1482468, NULL };
static panda$core$String $s1339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1453100120787609604, NULL };
static panda$core$String $s1343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 22145878250529579, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 200217461, NULL };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s1408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, -7053567309059437070, NULL };
static panda$core$String $s1409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, -5503210093567996833, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 8410572937891831521, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 4466831713963476000, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, 137534358, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1482468, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1453100120787609604, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, 1982351, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, 13918, NULL };
static panda$core$String $s1560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1405297, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1404792, NULL };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, 13904, NULL };
static panda$core$String $s1598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, 217363422, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, -2786053692556271290, NULL };
static panda$core$String $s1622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, 141821238, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, 142006571, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, 141945375, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, 141852364, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, 146203701926599, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, 141994765, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, 141975383, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, 141902866, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, 1447551143116, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, 1404587, NULL };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, 141953965, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1404792, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1405297, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, 1404777, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, 1405282, NULL };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, 1405598, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, 141832564, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, 141822248, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, 14324945814, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, 142056986, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, 14325180552, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, 141954978, NULL };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, 14325078544, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s1697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, 142005268, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s1700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, 142005274, NULL };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, 1405855, NULL };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, -8516432373732149011, NULL };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s1798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s1808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, -8516432373731118710, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 2215331, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 2154135, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, 223575839, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, 223718240, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 2214028, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, 205183331, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 2031008, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 21526, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 2265746, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 219725109287572, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 219725109288469, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, 22192236038186692, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, 22192236038187197, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, 22192236038186677, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, 22192236038187182, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 2215331, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 2154135, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, 225636441, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, 225778842, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 2214028, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, 216516642, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 2031008, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 21526, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 2265746, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 219725109287572, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 219725109288469, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, 22192236038207094, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, 22192236038207599, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, 22192236038207079, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, 22192236038207584, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, 210150800, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, 210336133, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, 210274937, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, 210181926, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, 21870595432513580, NULL };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, 21870595432514477, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, 21870595432513785, NULL };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, 21870595432514290, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, 21870595432513770, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, 21870595432514275, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s2023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 13524, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1983470, NULL };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x73\x74\x63\x63\x20", 7, 216520157801561, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, 212767339, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A", 2, 14485, NULL };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, 14834798317007399, NULL };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, 5996012307911795392, NULL };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, 19638, NULL };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s2314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, -284792955217493296, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, 1445392722364703443, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, 9180175165629405233, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, 147755760, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, 1445392722364703444, NULL };
static panda$core$String $s2408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, 2891297979021532403, NULL };
static panda$core$String $s2466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 20716344924, NULL };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, -68084191220774643, NULL };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, 212798144, NULL };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 229298558774239, NULL };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s2706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, 2946720541906757250, NULL };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, 178709719977385382, NULL };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, 2005081535935103476, NULL };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 146543380183876, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, 22799530931, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s2927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 171978245881277, NULL };
static panda$core$String $s3041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s3071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 14324499638457470, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1450073858438092980, NULL };
static panda$core$String $s3210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1983470, NULL };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s3269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s3271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s3273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 25, -6025032490972529456, NULL };
static panda$core$String $s3280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 22, 3938018972516606829, NULL };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, -6901405387198259419, NULL };
static panda$core$String $s3302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, -5055193716233257020, NULL };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, -38380777888947644, NULL };
static panda$core$String $s3323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s3326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s3478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1971047, NULL };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, -7594506016420023174, NULL };
static panda$core$String $s3526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s3531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 2084875595949565210, NULL };
static panda$core$String $s3607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x70\x74\x72\x75\x6E\x63", 7, 216677911493671, NULL };
static panda$core$String $s3639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x70\x65\x78\x74", 5, 21240697652, NULL };
static panda$core$String $s3641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x70\x74\x6F\x73\x69", 6, 2145325825562, NULL };
static panda$core$String $s3643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x70\x74\x6F\x75\x69", 6, 2145325825764, NULL };
static panda$core$String $s3646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x69\x74\x6F\x66\x70", 6, 2281228707962, NULL };
static panda$core$String $s3648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x69\x74\x6F\x66\x70", 6, 2302248908964, NULL };
static panda$core$String $s3650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 22699766057, NULL };
static panda$core$String $s3653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 223587553, NULL };
static panda$core$String $s3654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 230799660, NULL };
static panda$core$String $s3695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 212358244529747, NULL };
static panda$core$String $s3704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s3820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s3826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s3890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s3898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 21489501287, NULL };
static panda$core$String $s3903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 3556234982078979695, NULL };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x69\x38\x2A\x2A\x20", 11, -1701017812076485794, NULL };
static panda$core$String $s3912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s3951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s3961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x30\x78", 6, 1401206600497, NULL };
static panda$core$String $s3966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x78", 2, 15169, NULL };
static panda$core$String $s3971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 175539598599330, NULL };
static panda$core$String $s3997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s4007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1410364661239, NULL };
static panda$core$String $s4010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, -4682671939848071135, NULL };
static panda$core$String $s4013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s4017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 2107094, NULL };
static panda$core$String $s4041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s4049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 17208241946, NULL };
static panda$core$String $s4051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, -4560911471279777923, NULL };
static panda$core$String $s4061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s4063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s4069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 54, -4410989833928586841, NULL };
static panda$core$String $s4071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, -1652634297463438611, NULL };
static panda$core$String $s4073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, -1388553655089279848, NULL };
static panda$core$String $s4086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s4089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s4092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20\x69\x38\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 14, 8437322619071490889, NULL };
static panda$core$String $s4099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 14479861264, NULL };
static panda$core$String $s4105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s4109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s4116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, 24050909224991147, NULL };
static panda$core$String $s4136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, -1449709338160382639, NULL };
static panda$core$String $s4147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, 149724671, NULL };
static panda$core$String $s4152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s4155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s4161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s4164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 24050909225001348, NULL };
static panda$core$String $s4183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s4194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s4200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s4203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s4215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 2138506394783058478, NULL };
static panda$core$String $s4217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s4230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x66\x73\x75\x62\x20", 8, 14324499969274890, NULL };
static panda$core$String $s4234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2E\x30\x2C\x20", 6, 1402886153851, NULL };
static panda$core$String $s4237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s4248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 141826750873303, NULL };
static panda$core$String $s4256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 13886901203, NULL };
static panda$core$String $s4259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s4333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s4362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s4379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s4386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 214439158056679, NULL };
static panda$core$String $s4415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s4418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s4421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 2149145203081189652, NULL };
static panda$core$String $s4423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s4493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s4527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s4539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s4699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s4717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s4720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s4731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s4757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s4778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s4785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s4788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s4793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s4802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s4815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s4845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s4872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s4924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s4947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s4970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s4982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s4985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s4988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s4990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s5064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s5067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s5082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s5085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s5096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s5122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s5129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s5133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, -8455018733144080751, NULL };
static panda$core$String $s5136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s5139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1527347502952, NULL };
static panda$core$String $s5166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s5168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s5170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s5173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s5176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s5178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s5182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 5640068998409967338, NULL };
static panda$core$String $s5185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 150, NULL };
static panda$core$String $s5192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s5229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s5259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 2091237, NULL };
static panda$core$String $s5306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 2092752, NULL };
static panda$core$String $s5336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s5500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s5570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s5585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s5588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s5591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s5593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s5754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s5858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 5661491935713932202, NULL };
static panda$core$String $s5869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s5886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s5890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s5899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s5976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s6026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s6028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s6035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s6056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s6059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s6062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s6077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s6079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s6086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x66\x61\x73\x74\x63\x63\x20\x76\x6F\x69\x64\x20", 17, 8605580293215133655, NULL };
static panda$core$String $s6107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1112391861657830585, NULL };
static panda$core$String $s6109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, -3426205430399916046, NULL };
static panda$core$String $s6110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, -6932554582644871757, NULL };
static panda$core$String $s6113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, -418642434149121372, NULL };
static panda$core$String $s6115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, -3066853447063148068, NULL };
static panda$core$String $s6117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 3939743058867758116, NULL };
static panda$core$String $s6125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s6130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s6142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s6145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s6149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s6153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, 230550101366891, NULL };
static panda$core$String $s6155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s6174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 13524, NULL };
static panda$core$String $s6217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, 14293708514290657, NULL };
static panda$core$String $s6219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s6225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, 13873332722, NULL };
static panda$core$String $s6270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s6272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 21658185952146853, NULL };
static panda$core$String $s6299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s6308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s6366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s6369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s6372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s6376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s6458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s6460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s6462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };

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
    panda$core$String* name349;
    org$pandalanguage$pandac$ClassDecl* cl355;
    org$pandalanguage$pandac$ClassDecl* cl361;
    org$pandalanguage$pandac$ClassDecl* cl374;
    panda$core$String* name377;
    org$pandalanguage$pandac$ClassDecl* cl383;
    panda$core$MutableString* result392;
    panda$core$Range$LTpanda$core$Int64$GT $tmp400;
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
        case 20:
        {
            panda$core$Int64 $tmp346 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp346.value) {
                case 4:
                {
                    return &$s347;
                }
                break;
                case 8:
                {
                    return &$s348;
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
        }
        break;
        case 10:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, p_t);
            panda$core$String* $tmp351 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s350, $tmp351);
            panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp352, &$s353);
            name349 = $tmp354;
            org$pandalanguage$pandac$ClassDecl* $tmp356 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl355 = $tmp356;
            PANDA_ASSERT(((panda$core$Bit) { cl355 != NULL }).value);
            panda$core$Bit $tmp357 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl355);
            panda$core$Bit $tmp358 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp357);
            if ($tmp358.value) {
            {
                panda$core$String* $tmp360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name349, &$s359);
                return $tmp360;
            }
            }
            return name349;
        }
        break;
        case 11:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp362 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl361 = $tmp362;
            PANDA_ASSERT(((panda$core$Bit) { cl361 != NULL }).value);
            panda$core$Bit $tmp363 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl361);
            if ($tmp363.value) {
            {
                panda$core$String* $tmp364 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                return $tmp364;
            }
            }
            panda$core$Object* $tmp365 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp366 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp365));
            return $tmp366;
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp367 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp369 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp367))->name, &$s368);
            if ($tmp369.value) {
            {
                panda$core$Object* $tmp370 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp371 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp370));
                panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp371, &$s372);
                return $tmp373;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp375 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl374 = $tmp375;
            panda$core$Bit $tmp376 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl374);
            if ($tmp376.value) {
            {
                panda$core$String* $tmp379 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s378, $tmp379);
                panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp380, &$s381);
                name377 = $tmp382;
                org$pandalanguage$pandac$ClassDecl* $tmp384 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl383 = $tmp384;
                PANDA_ASSERT(((panda$core$Bit) { cl383 != NULL }).value);
                panda$core$Bit $tmp385 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl383);
                panda$core$Bit $tmp386 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp385);
                if ($tmp386.value) {
                {
                    panda$core$String* $tmp388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name377, &$s387);
                    return $tmp388;
                }
                }
                return name377;
            }
            }
            panda$core$Object* $tmp389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp390 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp389));
            return $tmp390;
        }
        break;
        case 22:
        {
            panda$core$String* $tmp391 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp391;
        }
        break;
        case 24:
        case 25:
        {
            panda$core$MutableString* $tmp393 = (panda$core$MutableString*) malloc(48);
            $tmp393->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp393->refCount.value = 1;
            panda$core$Int64 $tmp395 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp396 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp395, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp397 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp396);
            panda$core$String* $tmp398 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp397));
            panda$core$MutableString$init$panda$core$String($tmp393, $tmp398);
            result392 = $tmp393;
            panda$core$MutableString$append$panda$core$String(result392, &$s399);
            panda$core$Int64 $tmp401 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp402 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp401, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp400, ((panda$core$Int64) { 0 }), $tmp402, ((panda$core$Bit) { false }));
            int64_t $tmp404 = $tmp400.min.value;
            panda$core$Int64 i403 = { $tmp404 };
            int64_t $tmp406 = $tmp400.max.value;
            bool $tmp407 = $tmp400.inclusive.value;
            if ($tmp407) goto $l414; else goto $l415;
            $l414:;
            if ($tmp404 <= $tmp406) goto $l408; else goto $l410;
            $l415:;
            if ($tmp404 < $tmp406) goto $l408; else goto $l410;
            $l408:;
            {
                panda$core$Bit $tmp416 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i403, ((panda$core$Int64) { 0 }));
                if ($tmp416.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result392, &$s417);
                }
                }
                panda$core$Object* $tmp418 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i403);
                panda$core$String* $tmp419 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp418));
                panda$core$MutableString$append$panda$core$String(result392, $tmp419);
            }
            $l411:;
            int64_t $tmp421 = $tmp406 - i403.value;
            if ($tmp407) goto $l422; else goto $l423;
            $l422:;
            if ($tmp421 >= 1) goto $l420; else goto $l410;
            $l423:;
            if ($tmp421 > 1) goto $l420; else goto $l410;
            $l420:;
            i403.value += 1;
            goto $l408;
            $l410:;
            panda$core$MutableString$append$panda$core$String(result392, &$s426);
            panda$core$String* $tmp427 = panda$core$MutableString$finish$R$panda$core$String(result392);
            return $tmp427;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp428.value) {
    {
        panda$core$Object* $tmp429 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp430 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp429));
        return $tmp430;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, p_t);
    panda$core$String* $tmp432 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s431, $tmp432);
    panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp433, &$s434);
    return $tmp435;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp436 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp436, &$s437);
    return $tmp438;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType439;
    panda$core$MutableString* result441;
    panda$core$Char8 $tmp448;
    panda$core$Char8 $tmp457;
    panda$core$Range$LTpanda$core$Int64$GT $tmp458;
    org$pandalanguage$pandac$Type* $tmp440 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType439 = $tmp440;
    panda$core$MutableString* $tmp442 = (panda$core$MutableString*) malloc(48);
    $tmp442->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp442->refCount.value = 1;
    panda$core$MutableString$init($tmp442);
    result441 = $tmp442;
    panda$core$Int64 $tmp444 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType439->subtypes);
    panda$core$Int64 $tmp445 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp444, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp446 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType439->subtypes, $tmp445);
    panda$core$String* $tmp447 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp446));
    panda$core$MutableString$append$panda$core$String(result441, $tmp447);
    panda$core$Char8$init$panda$core$UInt8(&$tmp448, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(result441, $tmp448);
    panda$core$Bit $tmp449 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp449.value);
    panda$core$String* $tmp451 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s450, $tmp451);
    panda$core$String* $tmp454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp452, &$s453);
    panda$core$MutableString$append$panda$core$String(result441, $tmp454);
    panda$core$Bit $tmp455 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp455.value) {
    {
        panda$core$MutableString$append$panda$core$String(result441, &$s456);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp457, ((panda$core$UInt8) { 42 }));
    panda$core$MutableString$append$panda$core$Char8(result441, $tmp457);
    panda$core$Int64 $tmp459 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType439->subtypes);
    panda$core$Int64 $tmp460 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp459, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp458, ((panda$core$Int64) { 0 }), $tmp460, ((panda$core$Bit) { false }));
    int64_t $tmp462 = $tmp458.min.value;
    panda$core$Int64 i461 = { $tmp462 };
    int64_t $tmp464 = $tmp458.max.value;
    bool $tmp465 = $tmp458.inclusive.value;
    if ($tmp465) goto $l472; else goto $l473;
    $l472:;
    if ($tmp462 <= $tmp464) goto $l466; else goto $l468;
    $l473:;
    if ($tmp462 < $tmp464) goto $l466; else goto $l468;
    $l466:;
    {
        panda$core$MutableString$append$panda$core$String(result441, &$s474);
        panda$core$Object* $tmp475 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType439->subtypes, i461);
        panda$core$String* $tmp476 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp475));
        panda$core$MutableString$append$panda$core$String(result441, $tmp476);
    }
    $l469:;
    int64_t $tmp478 = $tmp464 - i461.value;
    if ($tmp465) goto $l479; else goto $l480;
    $l479:;
    if ($tmp478 >= 1) goto $l477; else goto $l468;
    $l480:;
    if ($tmp478 > 1) goto $l477; else goto $l468;
    $l477:;
    i461.value += 1;
    goto $l466;
    $l468:;
    panda$core$MutableString$append$panda$core$String(result441, &$s483);
    panda$core$String* $tmp484 = panda$core$MutableString$finish$R$panda$core$String(result441);
    return $tmp484;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp485.value);
    panda$core$Object* $tmp486 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp486));
    panda$core$Object* $tmp487 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp488 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp487));
    panda$core$String* $tmp489 = panda$core$String$convert$R$panda$core$String($tmp488);
    panda$core$String* $tmp491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp489, &$s490);
    return $tmp491;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces492;
    panda$core$String* previous495;
    panda$collections$Iterator* intfType$Iter497;
    org$pandalanguage$pandac$Type* intfType509;
    org$pandalanguage$pandac$ClassDecl* intf514;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC516;
    panda$collections$ListView* methods518;
    panda$core$String* name520;
    panda$core$String* t530;
    panda$core$String* intfCCCast544;
    panda$core$MutableString* result560;
    panda$core$String* separator592;
    panda$collections$Iterator* m$Iter594;
    org$pandalanguage$pandac$MethodDecl* m606;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry614;
    org$pandalanguage$pandac$Type* $tmp493 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp494 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp493);
    interfaces492 = $tmp494;
    previous495 = &$s496;
    {
        ITable* $tmp498 = ((panda$collections$Iterable*) interfaces492)->$class->itable;
        while ($tmp498->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp498 = $tmp498->next;
        }
        $fn500 $tmp499 = $tmp498->methods[0];
        panda$collections$Iterator* $tmp501 = $tmp499(((panda$collections$Iterable*) interfaces492));
        intfType$Iter497 = $tmp501;
        $l502:;
        ITable* $tmp504 = intfType$Iter497->$class->itable;
        while ($tmp504->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp504 = $tmp504->next;
        }
        $fn506 $tmp505 = $tmp504->methods[0];
        panda$core$Bit $tmp507 = $tmp505(intfType$Iter497);
        panda$core$Bit $tmp508 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp507);
        if (!$tmp508.value) goto $l503;
        {
            ITable* $tmp510 = intfType$Iter497->$class->itable;
            while ($tmp510->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp510 = $tmp510->next;
            }
            $fn512 $tmp511 = $tmp510->methods[1];
            panda$core$Object* $tmp513 = $tmp511(intfType$Iter497);
            intfType509 = ((org$pandalanguage$pandac$Type*) $tmp513);
            org$pandalanguage$pandac$ClassDecl* $tmp515 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType509);
            intf514 = $tmp515;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp517 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf514);
            intfCC516 = $tmp517;
            panda$collections$ListView* $tmp519 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType509);
            methods518 = $tmp519;
            panda$core$String* $tmp522 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s521, $tmp522);
            panda$core$String* $tmp525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp523, &$s524);
            panda$core$String* $tmp526 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf514)->name);
            panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp525, $tmp526);
            panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp527, &$s528);
            name520 = $tmp529;
            org$pandalanguage$pandac$Type* $tmp532 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp533 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp532);
            panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s531, $tmp533);
            panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, &$s535);
            ITable* $tmp537 = ((panda$collections$CollectionView*) methods518)->$class->itable;
            while ($tmp537->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp537 = $tmp537->next;
            }
            $fn539 $tmp538 = $tmp537->methods[0];
            panda$core$Int64 $tmp540 = $tmp538(((panda$collections$CollectionView*) methods518));
            panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp536, ((panda$core$Object*) wrap_panda$core$Int64($tmp540)));
            panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, &$s542);
            t530 = $tmp543;
            org$pandalanguage$pandac$Type* $tmp545 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp546 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp545);
            panda$core$Bit $tmp547 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(intfCC516->type, $tmp546);
            if ($tmp547.value) {
            {
                panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s548, intfCC516->type);
                panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s550);
                panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, intfCC516->name);
                panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp552, &$s553);
                org$pandalanguage$pandac$Type* $tmp555 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                panda$core$String* $tmp556 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp555);
                panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp554, $tmp556);
                panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp557, &$s558);
                intfCCCast544 = $tmp559;
            }
            }
            else {
            {
                intfCCCast544 = intfCC516->name;
            }
            }
            panda$core$MutableString* $tmp561 = (panda$core$MutableString*) malloc(48);
            $tmp561->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp561->refCount.value = 1;
            panda$core$String* $tmp563 = panda$core$String$convert$R$panda$core$String(name520);
            panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp563, &$s564);
            panda$core$MutableString$init$panda$core$String($tmp561, $tmp565);
            result560 = $tmp561;
            panda$core$Bit $tmp566 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp566.value) {
            {
                panda$core$MutableString$append$panda$core$String(result560, &$s567);
            }
            }
            panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s568, t530);
            panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, &$s570);
            org$pandalanguage$pandac$Type* $tmp572 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp573 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp572);
            panda$core$String* $tmp574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp571, $tmp573);
            panda$core$String* $tmp576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp574, &$s575);
            panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp576, intfCCCast544);
            panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, &$s578);
            panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, previous495);
            panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, &$s581);
            ITable* $tmp584 = ((panda$collections$CollectionView*) methods518)->$class->itable;
            while ($tmp584->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp584 = $tmp584->next;
            }
            $fn586 $tmp585 = $tmp584->methods[0];
            panda$core$Int64 $tmp587 = $tmp585(((panda$collections$CollectionView*) methods518));
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s583, ((panda$core$Object*) wrap_panda$core$Int64($tmp587)));
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp588, &$s589);
            panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, $tmp590);
            panda$core$MutableString$append$panda$core$String(result560, $tmp591);
            separator592 = &$s593;
            {
                ITable* $tmp595 = ((panda$collections$Iterable*) methods518)->$class->itable;
                while ($tmp595->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp595 = $tmp595->next;
                }
                $fn597 $tmp596 = $tmp595->methods[0];
                panda$collections$Iterator* $tmp598 = $tmp596(((panda$collections$Iterable*) methods518));
                m$Iter594 = $tmp598;
                $l599:;
                ITable* $tmp601 = m$Iter594->$class->itable;
                while ($tmp601->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp601 = $tmp601->next;
                }
                $fn603 $tmp602 = $tmp601->methods[0];
                panda$core$Bit $tmp604 = $tmp602(m$Iter594);
                panda$core$Bit $tmp605 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp604);
                if (!$tmp605.value) goto $l600;
                {
                    ITable* $tmp607 = m$Iter594->$class->itable;
                    while ($tmp607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp607 = $tmp607->next;
                    }
                    $fn609 $tmp608 = $tmp607->methods[1];
                    panda$core$Object* $tmp610 = $tmp608(m$Iter594);
                    m606 = ((org$pandalanguage$pandac$MethodDecl*) $tmp610);
                    panda$core$MutableString$append$panda$core$String(result560, separator592);
                    separator592 = &$s611;
                    panda$core$Bit $tmp612 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m606->annotations);
                    if ($tmp612.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result560, &$s613);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp615 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m606);
                        entry614 = $tmp615;
                        panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s616, ((panda$core$String*) entry614->second));
                        panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp617, &$s618);
                        panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp619, ((panda$core$String*) entry614->first));
                        panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, &$s621);
                        panda$core$MutableString$append$panda$core$String(result560, $tmp622);
                    }
                    }
                }
                goto $l599;
                $l600:;
            }
            panda$core$MutableString$append$panda$core$String(result560, &$s623);
            panda$core$String* $tmp624 = panda$core$MutableString$finish$R$panda$core$String(result560);
            (($fn625) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp624);
            panda$core$String* $tmp627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s626, t530);
            panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp627, &$s628);
            panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp629, name520);
            panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, &$s631);
            previous495 = $tmp632;
        }
        goto $l502;
        $l503:;
    }
    return previous495;
}
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* out633;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* found636;
    panda$core$Int64 oldVarCount644;
    org$pandalanguage$pandac$Type* effectiveReturnType645;
    panda$core$String* resultName649;
    panda$core$MutableString* resultType653;
    panda$core$String* self_t669;
    panda$core$Char8 $tmp675;
    panda$core$Range$LTpanda$core$Int64$GT $tmp676;
    panda$core$String* pType691;
    panda$collections$Array* casts712;
    panda$core$Range$LTpanda$core$Int64$GT $tmp715;
    panda$core$String* p730;
    panda$core$String* returnValue747;
    panda$core$Range$LTpanda$core$Int64$GT $tmp774;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* result822;
    panda$io$MemoryOutputStream* $tmp634 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp634->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp634->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp634);
    out633 = $tmp634;
    panda$core$Object* $tmp637 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found636 = ((org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) $tmp637);
    if (((panda$core$Bit) { found636 != NULL }).value) {
    {
        return found636;
    }
    }
    panda$core$Bit $tmp638 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp638.value);
    panda$core$Int64 $tmp639 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp640 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp641 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp640, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp639, $tmp641);
    PANDA_ASSERT($tmp642.value);
    panda$core$Bit $tmp643 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp643.value);
    oldVarCount644 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp646 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp647 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp646, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp648 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp647);
    effectiveReturnType645 = ((org$pandalanguage$pandac$Type*) $tmp648);
    panda$core$String* $tmp650 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp650, &$s651);
    resultName649 = $tmp652;
    panda$core$MutableString* $tmp654 = (panda$core$MutableString*) malloc(48);
    $tmp654->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp654->refCount.value = 1;
    panda$core$String* $tmp656 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType645);
    panda$core$MutableString$init$panda$core$String($tmp654, $tmp656);
    resultType653 = $tmp654;
    (($fn658) ((panda$io$OutputStream*) out633)->$class->vtable[16])(((panda$io$OutputStream*) out633), &$s657);
    panda$core$Bit $tmp659 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_raw->owner);
    if ($tmp659.value) {
    {
        (($fn661) ((panda$io$OutputStream*) out633)->$class->vtable[16])(((panda$io$OutputStream*) out633), &$s660);
    }
    }
    panda$core$String* $tmp662 = panda$core$MutableString$convert$R$panda$core$String(resultType653);
    panda$core$String* $tmp664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp662, &$s663);
    panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp664, resultName649);
    panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp665, &$s666);
    (($fn668) ((panda$io$OutputStream*) out633)->$class->vtable[16])(((panda$io$OutputStream*) out633), $tmp667);
    panda$core$String* $tmp670 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t669 = $tmp670;
    panda$core$String* $tmp671 = panda$core$String$convert$R$panda$core$String(self_t669);
    panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp671, &$s672);
    (($fn674) ((panda$io$OutputStream*) out633)->$class->vtable[16])(((panda$io$OutputStream*) out633), $tmp673);
    panda$core$Char8$init$panda$core$UInt8(&$tmp675, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(resultType653, $tmp675);
    panda$core$MutableString$append$panda$core$String(resultType653, self_t669);
    panda$core$Int64 $tmp677 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp676, ((panda$core$Int64) { 0 }), $tmp677, ((panda$core$Bit) { false }));
    int64_t $tmp679 = $tmp676.min.value;
    panda$core$Int64 i678 = { $tmp679 };
    int64_t $tmp681 = $tmp676.max.value;
    bool $tmp682 = $tmp676.inclusive.value;
    if ($tmp682) goto $l689; else goto $l690;
    $l689:;
    if ($tmp679 <= $tmp681) goto $l683; else goto $l685;
    $l690:;
    if ($tmp679 < $tmp681) goto $l683; else goto $l685;
    $l683:;
    {
        panda$core$Object* $tmp692 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i678);
        panda$core$String* $tmp693 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp692));
        pType691 = $tmp693;
        panda$core$MutableString$append$panda$core$String(resultType653, &$s694);
        panda$core$MutableString$append$panda$core$String(resultType653, pType691);
        panda$core$String* $tmp696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s695, pType691);
        panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp696, &$s697);
        panda$core$String* $tmp699 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp698, ((panda$core$Object*) wrap_panda$core$Int64(i678)));
        panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp699, &$s700);
        (($fn702) ((panda$io$OutputStream*) out633)->$class->vtable[16])(((panda$io$OutputStream*) out633), $tmp701);
    }
    $l686:;
    int64_t $tmp704 = $tmp681 - i678.value;
    if ($tmp682) goto $l705; else goto $l706;
    $l705:;
    if ($tmp704 >= 1) goto $l703; else goto $l685;
    $l706:;
    if ($tmp704 > 1) goto $l703; else goto $l685;
    $l703:;
    i678.value += 1;
    goto $l683;
    $l685:;
    (($fn710) ((panda$io$OutputStream*) out633)->$class->vtable[19])(((panda$io$OutputStream*) out633), &$s709);
    panda$core$MutableString$append$panda$core$String(resultType653, &$s711);
    panda$collections$Array* $tmp713 = (panda$collections$Array*) malloc(40);
    $tmp713->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp713->refCount.value = 1;
    panda$collections$Array$init($tmp713);
    casts712 = $tmp713;
    panda$core$Int64 $tmp716 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp715, ((panda$core$Int64) { 0 }), $tmp716, ((panda$core$Bit) { false }));
    int64_t $tmp718 = $tmp715.min.value;
    panda$core$Int64 i717 = { $tmp718 };
    int64_t $tmp720 = $tmp715.max.value;
    bool $tmp721 = $tmp715.inclusive.value;
    if ($tmp721) goto $l728; else goto $l729;
    $l728:;
    if ($tmp718 <= $tmp720) goto $l722; else goto $l724;
    $l729:;
    if ($tmp718 < $tmp720) goto $l722; else goto $l724;
    $l722:;
    {
        panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s731, ((panda$core$Object*) wrap_panda$core$Int64(i717)));
        panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp732, &$s733);
        p730 = $tmp734;
        panda$core$Object* $tmp735 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i717);
        panda$core$Object* $tmp736 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i717);
        panda$core$Bit $tmp737 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp735)->type, ((org$pandalanguage$pandac$Type*) $tmp736));
        if ($tmp737.value) {
        {
            panda$core$Object* $tmp738 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i717);
            panda$core$Object* $tmp739 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i717);
            panda$core$String* $tmp740 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p730, ((org$pandalanguage$pandac$Type*) $tmp738), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp739)->type, ((panda$io$OutputStream*) out633));
            panda$collections$Array$add$panda$collections$Array$T(casts712, ((panda$core$Object*) $tmp740));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts712, ((panda$core$Object*) p730));
        }
        }
    }
    $l725:;
    int64_t $tmp742 = $tmp720 - i717.value;
    if ($tmp721) goto $l743; else goto $l744;
    $l743:;
    if ($tmp742 >= 1) goto $l741; else goto $l724;
    $l744:;
    if ($tmp742 > 1) goto $l741; else goto $l724;
    $l741:;
    i717.value += 1;
    goto $l722;
    $l724:;
    org$pandalanguage$pandac$Type* $tmp748 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp749 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp748);
    if ($tmp749.value) {
    {
        panda$core$String* $tmp750 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue747 = $tmp750;
        panda$core$String* $tmp751 = panda$core$String$convert$R$panda$core$String(returnValue747);
        panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp751, &$s752);
        (($fn754) ((panda$io$OutputStream*) out633)->$class->vtable[16])(((panda$io$OutputStream*) out633), $tmp753);
    }
    }
    else {
    {
        returnValue747 = &$s755;
    }
    }
    panda$core$String* $tmp757 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s756, $tmp757);
    panda$core$String* $tmp760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp758, &$s759);
    panda$core$String* $tmp761 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
    panda$core$String* $tmp762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp760, $tmp761);
    panda$core$String* $tmp764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp762, &$s763);
    panda$core$String* $tmp765 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp764, $tmp765);
    panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, &$s767);
    panda$core$String* $tmp769 = panda$core$String$convert$R$panda$core$String(self_t669);
    panda$core$String* $tmp771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp769, &$s770);
    panda$core$String* $tmp772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp768, $tmp771);
    (($fn773) ((panda$io$OutputStream*) out633)->$class->vtable[16])(((panda$io$OutputStream*) out633), $tmp772);
    panda$core$Int64 $tmp775 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp774, ((panda$core$Int64) { 0 }), $tmp775, ((panda$core$Bit) { false }));
    int64_t $tmp777 = $tmp774.min.value;
    panda$core$Int64 i776 = { $tmp777 };
    int64_t $tmp779 = $tmp774.max.value;
    bool $tmp780 = $tmp774.inclusive.value;
    if ($tmp780) goto $l787; else goto $l788;
    $l787:;
    if ($tmp777 <= $tmp779) goto $l781; else goto $l783;
    $l788:;
    if ($tmp777 < $tmp779) goto $l781; else goto $l783;
    $l781:;
    {
        panda$core$Object* $tmp790 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i776);
        panda$core$String* $tmp791 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp790)->type);
        panda$core$String* $tmp792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s789, $tmp791);
        panda$core$String* $tmp794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp792, &$s793);
        panda$core$Object* $tmp795 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts712, i776);
        panda$core$String* $tmp796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp794, ((panda$core$String*) $tmp795));
        panda$core$String* $tmp798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp796, &$s797);
        (($fn799) ((panda$io$OutputStream*) out633)->$class->vtable[16])(((panda$io$OutputStream*) out633), $tmp798);
    }
    $l784:;
    int64_t $tmp801 = $tmp779 - i776.value;
    if ($tmp780) goto $l802; else goto $l803;
    $l802:;
    if ($tmp801 >= 1) goto $l800; else goto $l783;
    $l803:;
    if ($tmp801 > 1) goto $l800; else goto $l783;
    $l800:;
    i776.value += 1;
    goto $l781;
    $l783:;
    (($fn807) ((panda$io$OutputStream*) out633)->$class->vtable[19])(((panda$io$OutputStream*) out633), &$s806);
    org$pandalanguage$pandac$Type* $tmp808 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp809 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp808);
    if ($tmp809.value) {
    {
        panda$core$String* $tmp810 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType645);
        panda$core$String* $tmp812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp810, &$s811);
        panda$core$String* $tmp813 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, returnValue747, p_raw->returnType, effectiveReturnType645, ((panda$io$OutputStream*) out633));
        panda$core$String* $tmp814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp812, $tmp813);
        returnValue747 = $tmp814;
    }
    }
    panda$core$String* $tmp816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s815, returnValue747);
    panda$core$String* $tmp818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp816, &$s817);
    (($fn819) ((panda$io$OutputStream*) out633)->$class->vtable[19])(((panda$io$OutputStream*) out633), $tmp818);
    (($fn821) ((panda$io$OutputStream*) out633)->$class->vtable[19])(((panda$io$OutputStream*) out633), &$s820);
    self->varCount = oldVarCount644;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp823 = (org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) malloc(32);
    $tmp823->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class;
    $tmp823->refCount.value = 1;
    panda$core$String* $tmp825 = panda$core$MutableString$finish$R$panda$core$String(resultType653);
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp823, resultName649, $tmp825);
    result822 = $tmp823;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result822));
    panda$core$String* $tmp826 = panda$io$MemoryOutputStream$finish$R$panda$core$String(out633);
    (($fn827) p_rawOut->$class->vtable[16])(p_rawOut, $tmp826);
    return result822;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    panda$core$Int64 oldVarCount829;
    panda$core$String* result830;
    panda$core$String* selfType835;
    org$pandalanguage$pandac$Type* actualMethodType857;
    org$pandalanguage$pandac$Type* inheritedMethodType859;
    panda$core$Range$LTpanda$core$Int64$GT $tmp861;
    panda$collections$Array* parameters900;
    panda$core$Range$LTpanda$core$Int64$GT $tmp903;
    panda$collections$Array* children930;
    org$pandalanguage$pandac$Position $tmp935;
    panda$core$String* unwrapped937;
    org$pandalanguage$pandac$Position $tmp940;
    panda$core$String* returnValue943;
    panda$core$Range$LTpanda$core$Int64$GT $tmp976;
    panda$core$Bit $tmp828 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp828.value);
    oldVarCount829 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$String* $tmp831 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp832 = panda$core$String$convert$R$panda$core$String($tmp831);
    panda$core$String* $tmp834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp832, &$s833);
    result830 = $tmp834;
    panda$core$String* $tmp837 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s836, $tmp837);
    panda$core$String* $tmp840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp838, &$s839);
    selfType835 = $tmp840;
    (($fn842) p_out->$class->vtable[16])(p_out, &$s841);
    panda$core$Bit $tmp843 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp843.value) {
    {
        (($fn845) p_out->$class->vtable[16])(p_out, &$s844);
    }
    }
    panda$core$String* $tmp846 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp847 = panda$core$String$convert$R$panda$core$String($tmp846);
    panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp847, &$s848);
    panda$core$String* $tmp850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp849, result830);
    panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp850, &$s851);
    panda$core$String* $tmp853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp852, selfType835);
    panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp853, &$s854);
    (($fn856) p_out->$class->vtable[16])(p_out, $tmp855);
    org$pandalanguage$pandac$Type* $tmp858 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType857 = $tmp858;
    org$pandalanguage$pandac$Type* $tmp860 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType859 = $tmp860;
    panda$core$Int64 $tmp862 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp861, ((panda$core$Int64) { 0 }), $tmp862, ((panda$core$Bit) { false }));
    int64_t $tmp864 = $tmp861.min.value;
    panda$core$Int64 i863 = { $tmp864 };
    int64_t $tmp866 = $tmp861.max.value;
    bool $tmp867 = $tmp861.inclusive.value;
    if ($tmp867) goto $l874; else goto $l875;
    $l874:;
    if ($tmp864 <= $tmp866) goto $l868; else goto $l870;
    $l875:;
    if ($tmp864 < $tmp866) goto $l868; else goto $l870;
    $l868:;
    {
        panda$core$Object* $tmp877 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType859->subtypes, i863);
        panda$core$String* $tmp878 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp877));
        panda$core$String* $tmp879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s876, $tmp878);
        panda$core$String* $tmp881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp879, &$s880);
        panda$core$Object* $tmp882 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i863);
        panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp881, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp882)->name);
        panda$core$String* $tmp885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp883, &$s884);
        (($fn886) p_out->$class->vtable[16])(p_out, $tmp885);
    }
    $l871:;
    int64_t $tmp888 = $tmp866 - i863.value;
    if ($tmp867) goto $l889; else goto $l890;
    $l889:;
    if ($tmp888 >= 1) goto $l887; else goto $l870;
    $l890:;
    if ($tmp888 > 1) goto $l887; else goto $l870;
    $l887:;
    i863.value += 1;
    goto $l868;
    $l870:;
    (($fn894) p_out->$class->vtable[19])(p_out, &$s893);
    panda$core$String* $tmp896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s895, selfType835);
    panda$core$String* $tmp898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp896, &$s897);
    (($fn899) p_out->$class->vtable[19])(p_out, $tmp898);
    panda$collections$Array* $tmp901 = (panda$collections$Array*) malloc(40);
    $tmp901->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp901->refCount.value = 1;
    panda$collections$Array$init($tmp901);
    parameters900 = $tmp901;
    panda$core$Int64 $tmp904 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp903, ((panda$core$Int64) { 0 }), $tmp904, ((panda$core$Bit) { false }));
    int64_t $tmp906 = $tmp903.min.value;
    panda$core$Int64 i905 = { $tmp906 };
    int64_t $tmp908 = $tmp903.max.value;
    bool $tmp909 = $tmp903.inclusive.value;
    if ($tmp909) goto $l916; else goto $l917;
    $l916:;
    if ($tmp906 <= $tmp908) goto $l910; else goto $l912;
    $l917:;
    if ($tmp906 < $tmp908) goto $l910; else goto $l912;
    $l910:;
    {
        panda$core$Object* $tmp919 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i905);
        panda$core$String* $tmp920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s918, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp919)->name);
        panda$core$Object* $tmp921 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType859->subtypes, i905);
        panda$core$Object* $tmp922 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType857->subtypes, i905);
        panda$core$String* $tmp923 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, $tmp920, ((org$pandalanguage$pandac$Type*) $tmp921), ((org$pandalanguage$pandac$Type*) $tmp922), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters900, ((panda$core$Object*) $tmp923));
    }
    $l913:;
    int64_t $tmp925 = $tmp908 - i905.value;
    if ($tmp909) goto $l926; else goto $l927;
    $l926:;
    if ($tmp925 >= 1) goto $l924; else goto $l912;
    $l927:;
    if ($tmp925 > 1) goto $l924; else goto $l912;
    $l924:;
    i905.value += 1;
    goto $l910;
    $l912:;
    panda$collections$Array* $tmp931 = (panda$collections$Array*) malloc(40);
    $tmp931->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp931->refCount.value = 1;
    panda$collections$Array$init($tmp931);
    children930 = $tmp931;
    org$pandalanguage$pandac$IRNode* $tmp933 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp933->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp933->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp935);
    org$pandalanguage$pandac$Type* $tmp936 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp933, ((panda$core$Int64) { 1025 }), $tmp935, $tmp936);
    panda$collections$Array$add$panda$collections$Array$T(children930, ((panda$core$Object*) $tmp933));
    org$pandalanguage$pandac$IRNode* $tmp938 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp938->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp938->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp940);
    org$pandalanguage$pandac$Type* $tmp941 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp938, ((panda$core$Int64) { 1009 }), $tmp940, $tmp941, ((panda$collections$ListView*) children930));
    panda$core$String* $tmp942 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp938, p_out);
    unwrapped937 = $tmp942;
    org$pandalanguage$pandac$Type* $tmp944 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp945 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp944);
    if ($tmp945.value) {
    {
        panda$core$String* $tmp946 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue943 = $tmp946;
        panda$core$String* $tmp947 = panda$core$String$convert$R$panda$core$String(returnValue943);
        panda$core$String* $tmp949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp947, &$s948);
        (($fn950) p_out->$class->vtable[16])(p_out, $tmp949);
        panda$core$String* $tmp951 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp952 = panda$core$String$convert$R$panda$core$String($tmp951);
        panda$core$String* $tmp954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp952, &$s953);
        panda$core$String* $tmp955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, returnValue943);
        panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp955, &$s956);
        returnValue943 = $tmp957;
    }
    }
    else {
    {
        returnValue943 = &$s958;
    }
    }
    panda$core$String* $tmp960 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s959, $tmp960);
    panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp961, &$s962);
    panda$core$String* $tmp964 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp963, $tmp964);
    panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp965, &$s966);
    panda$core$String* $tmp968 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp967, $tmp968);
    panda$core$String* $tmp971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp969, &$s970);
    panda$core$String* $tmp972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp971, unwrapped937);
    panda$core$String* $tmp974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp972, &$s973);
    (($fn975) p_out->$class->vtable[16])(p_out, $tmp974);
    panda$core$Int64 $tmp977 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp976, ((panda$core$Int64) { 0 }), $tmp977, ((panda$core$Bit) { false }));
    int64_t $tmp979 = $tmp976.min.value;
    panda$core$Int64 i978 = { $tmp979 };
    int64_t $tmp981 = $tmp976.max.value;
    bool $tmp982 = $tmp976.inclusive.value;
    if ($tmp982) goto $l989; else goto $l990;
    $l989:;
    if ($tmp979 <= $tmp981) goto $l983; else goto $l985;
    $l990:;
    if ($tmp979 < $tmp981) goto $l983; else goto $l985;
    $l983:;
    {
        panda$core$Object* $tmp992 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType857->subtypes, i978);
        panda$core$String* $tmp993 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp992));
        panda$core$String* $tmp994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s991, $tmp993);
        panda$core$String* $tmp996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp994, &$s995);
        panda$core$Object* $tmp997 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters900, i978);
        panda$core$String* $tmp998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp996, ((panda$core$String*) $tmp997));
        panda$core$String* $tmp1000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp998, &$s999);
        (($fn1001) p_out->$class->vtable[16])(p_out, $tmp1000);
    }
    $l986:;
    int64_t $tmp1003 = $tmp981 - i978.value;
    if ($tmp982) goto $l1004; else goto $l1005;
    $l1004:;
    if ($tmp1003 >= 1) goto $l1002; else goto $l985;
    $l1005:;
    if ($tmp1003 > 1) goto $l1002; else goto $l985;
    $l1002:;
    i978.value += 1;
    goto $l983;
    $l985:;
    (($fn1009) p_out->$class->vtable[19])(p_out, &$s1008);
    panda$core$String* $tmp1011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1010, returnValue943);
    panda$core$String* $tmp1013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1011, &$s1012);
    (($fn1014) p_out->$class->vtable[19])(p_out, $tmp1013);
    (($fn1016) p_out->$class->vtable[19])(p_out, &$s1015);
    self->varCount = oldVarCount829;
    return result830;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1017;
    panda$core$String* previous1020;
    panda$collections$Iterator* intfType$Iter1022;
    org$pandalanguage$pandac$Type* intfType1034;
    org$pandalanguage$pandac$ClassDecl* intf1039;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1041;
    panda$collections$ListView* methods1043;
    panda$core$String* name1045;
    panda$core$String* t1055;
    panda$core$String* intfCCCast1069;
    panda$core$MutableString* result1085;
    panda$core$String* separator1117;
    panda$collections$Iterator* m$Iter1119;
    org$pandalanguage$pandac$MethodDecl* m1131;
    panda$core$String* shim1139;
    org$pandalanguage$pandac$Type* $tmp1018 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp1019 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp1018);
    interfaces1017 = $tmp1019;
    previous1020 = &$s1021;
    {
        ITable* $tmp1023 = ((panda$collections$Iterable*) interfaces1017)->$class->itable;
        while ($tmp1023->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1023 = $tmp1023->next;
        }
        $fn1025 $tmp1024 = $tmp1023->methods[0];
        panda$collections$Iterator* $tmp1026 = $tmp1024(((panda$collections$Iterable*) interfaces1017));
        intfType$Iter1022 = $tmp1026;
        $l1027:;
        ITable* $tmp1029 = intfType$Iter1022->$class->itable;
        while ($tmp1029->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1029 = $tmp1029->next;
        }
        $fn1031 $tmp1030 = $tmp1029->methods[0];
        panda$core$Bit $tmp1032 = $tmp1030(intfType$Iter1022);
        panda$core$Bit $tmp1033 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1032);
        if (!$tmp1033.value) goto $l1028;
        {
            ITable* $tmp1035 = intfType$Iter1022->$class->itable;
            while ($tmp1035->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1035 = $tmp1035->next;
            }
            $fn1037 $tmp1036 = $tmp1035->methods[1];
            panda$core$Object* $tmp1038 = $tmp1036(intfType$Iter1022);
            intfType1034 = ((org$pandalanguage$pandac$Type*) $tmp1038);
            org$pandalanguage$pandac$ClassDecl* $tmp1040 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType1034);
            intf1039 = $tmp1040;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1042 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf1039);
            intfCC1041 = $tmp1042;
            panda$collections$ListView* $tmp1044 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType1034);
            methods1043 = $tmp1044;
            panda$core$String* $tmp1047 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1046, $tmp1047);
            panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, &$s1049);
            panda$core$String* $tmp1051 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf1039)->name);
            panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, $tmp1051);
            panda$core$String* $tmp1054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1052, &$s1053);
            name1045 = $tmp1054;
            org$pandalanguage$pandac$Type* $tmp1057 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1058 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1057);
            panda$core$String* $tmp1059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1056, $tmp1058);
            panda$core$String* $tmp1061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1059, &$s1060);
            ITable* $tmp1062 = ((panda$collections$CollectionView*) methods1043)->$class->itable;
            while ($tmp1062->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1062 = $tmp1062->next;
            }
            $fn1064 $tmp1063 = $tmp1062->methods[0];
            panda$core$Int64 $tmp1065 = $tmp1063(((panda$collections$CollectionView*) methods1043));
            panda$core$String* $tmp1066 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1061, ((panda$core$Object*) wrap_panda$core$Int64($tmp1065)));
            panda$core$String* $tmp1068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1066, &$s1067);
            t1055 = $tmp1068;
            org$pandalanguage$pandac$Type* $tmp1070 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1071 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1070);
            panda$core$Bit $tmp1072 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(intfCC1041->type, $tmp1071);
            if ($tmp1072.value) {
            {
                panda$core$String* $tmp1074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1073, intfCC1041->type);
                panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1074, &$s1075);
                panda$core$String* $tmp1077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1076, intfCC1041->name);
                panda$core$String* $tmp1079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1077, &$s1078);
                org$pandalanguage$pandac$Type* $tmp1080 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                panda$core$String* $tmp1081 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1080);
                panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1079, $tmp1081);
                panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1082, &$s1083);
                intfCCCast1069 = $tmp1084;
            }
            }
            else {
            {
                intfCCCast1069 = intfCC1041->name;
            }
            }
            panda$core$MutableString* $tmp1086 = (panda$core$MutableString*) malloc(48);
            $tmp1086->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1086->refCount.value = 1;
            panda$core$String* $tmp1088 = panda$core$String$convert$R$panda$core$String(name1045);
            panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1088, &$s1089);
            panda$core$MutableString$init$panda$core$String($tmp1086, $tmp1090);
            result1085 = $tmp1086;
            panda$core$Bit $tmp1091 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1091.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1085, &$s1092);
            }
            }
            panda$core$String* $tmp1094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1093, t1055);
            panda$core$String* $tmp1096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1094, &$s1095);
            org$pandalanguage$pandac$Type* $tmp1097 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1098 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1097);
            panda$core$String* $tmp1099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1096, $tmp1098);
            panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1099, &$s1100);
            panda$core$String* $tmp1102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1101, intfCCCast1069);
            panda$core$String* $tmp1104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1102, &$s1103);
            panda$core$String* $tmp1105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1104, previous1020);
            panda$core$String* $tmp1107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1105, &$s1106);
            ITable* $tmp1109 = ((panda$collections$CollectionView*) methods1043)->$class->itable;
            while ($tmp1109->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1109 = $tmp1109->next;
            }
            $fn1111 $tmp1110 = $tmp1109->methods[0];
            panda$core$Int64 $tmp1112 = $tmp1110(((panda$collections$CollectionView*) methods1043));
            panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1108, ((panda$core$Object*) wrap_panda$core$Int64($tmp1112)));
            panda$core$String* $tmp1115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1113, &$s1114);
            panda$core$String* $tmp1116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1107, $tmp1115);
            panda$core$MutableString$append$panda$core$String(result1085, $tmp1116);
            separator1117 = &$s1118;
            {
                ITable* $tmp1120 = ((panda$collections$Iterable*) methods1043)->$class->itable;
                while ($tmp1120->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1120 = $tmp1120->next;
                }
                $fn1122 $tmp1121 = $tmp1120->methods[0];
                panda$collections$Iterator* $tmp1123 = $tmp1121(((panda$collections$Iterable*) methods1043));
                m$Iter1119 = $tmp1123;
                $l1124:;
                ITable* $tmp1126 = m$Iter1119->$class->itable;
                while ($tmp1126->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1126 = $tmp1126->next;
                }
                $fn1128 $tmp1127 = $tmp1126->methods[0];
                panda$core$Bit $tmp1129 = $tmp1127(m$Iter1119);
                panda$core$Bit $tmp1130 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1129);
                if (!$tmp1130.value) goto $l1125;
                {
                    ITable* $tmp1132 = m$Iter1119->$class->itable;
                    while ($tmp1132->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1132 = $tmp1132->next;
                    }
                    $fn1134 $tmp1133 = $tmp1132->methods[1];
                    panda$core$Object* $tmp1135 = $tmp1133(m$Iter1119);
                    m1131 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1135);
                    panda$core$MutableString$append$panda$core$String(result1085, separator1117);
                    separator1117 = &$s1136;
                    panda$core$Bit $tmp1137 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1131->annotations);
                    if ($tmp1137.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1085, &$s1138);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1140 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, m1131, ((panda$io$OutputStream*) self->wrapperShims));
                        shim1139 = $tmp1140;
                        panda$core$String* $tmp1142 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1131);
                        panda$core$String* $tmp1143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1141, $tmp1142);
                        panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1143, &$s1144);
                        panda$core$String* $tmp1146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1145, shim1139);
                        panda$core$String* $tmp1148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1146, &$s1147);
                        panda$core$MutableString$append$panda$core$String(result1085, $tmp1148);
                    }
                    }
                }
                goto $l1124;
                $l1125:;
            }
            panda$core$MutableString$append$panda$core$String(result1085, &$s1149);
            panda$core$String* $tmp1150 = panda$core$MutableString$finish$R$panda$core$String(result1085);
            (($fn1151) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1150);
            panda$core$String* $tmp1153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1152, t1055);
            panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1153, &$s1154);
            panda$core$String* $tmp1156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1155, name1045);
            panda$core$String* $tmp1158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1156, &$s1157);
            previous1020 = $tmp1158;
        }
        goto $l1027;
        $l1028:;
    }
    return previous1020;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1161;
    panda$core$Bit $tmp1159 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp1160 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1159);
    if ($tmp1160.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1164 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1163 = $tmp1164.value;
    if (!$tmp1163) goto $l1165;
    panda$core$Bit $tmp1166 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp1163 = $tmp1166.value;
    $l1165:;
    panda$core$Bit $tmp1167 = { $tmp1163 };
    bool $tmp1162 = $tmp1167.value;
    if (!$tmp1162) goto $l1168;
    org$pandalanguage$pandac$ClassDecl* $tmp1169 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1170 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp1169);
    $tmp1162 = $tmp1170.value;
    $l1168:;
    panda$core$Bit $tmp1171 = { $tmp1162 };
    result1161 = $tmp1171;
    panda$core$Bit $tmp1173 = panda$core$Bit$$NOT$R$panda$core$Bit(result1161);
    bool $tmp1172 = $tmp1173.value;
    if ($tmp1172) goto $l1174;
    panda$core$Bit $tmp1176 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1177 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1176);
    bool $tmp1175 = $tmp1177.value;
    if (!$tmp1175) goto $l1178;
    panda$core$Bit $tmp1180 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1179 = $tmp1180.value;
    if ($tmp1179) goto $l1181;
    panda$core$Bit $tmp1182 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp1179 = $tmp1182.value;
    $l1181:;
    panda$core$Bit $tmp1183 = { $tmp1179 };
    $tmp1175 = $tmp1183.value;
    $l1178:;
    panda$core$Bit $tmp1184 = { $tmp1175 };
    $tmp1172 = $tmp1184.value;
    $l1174:;
    panda$core$Bit $tmp1185 = { $tmp1172 };
    PANDA_ASSERT($tmp1185.value);
    return result1161;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1186;
    org$pandalanguage$pandac$Type* declared1187;
    org$pandalanguage$pandac$Type* inherited1190;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1193;
    panda$core$MutableString* resultType1198;
    panda$core$Char8 $tmp1206;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1207;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1188 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1189 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp1188);
    declared1187 = $tmp1189;
    org$pandalanguage$pandac$Type* $tmp1191 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited1190 = $tmp1191;
    panda$core$Bit $tmp1192 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared1187, inherited1190);
    if ($tmp1192.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1194 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1195 = org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(self, p_m, $tmp1194, ((panda$io$OutputStream*) self->shims));
        shim1193 = $tmp1195;
        resultName1186 = shim1193->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1196 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        resultName1186 = $tmp1196;
    }
    }
    panda$core$Bit $tmp1197 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp1197.value) {
    {
        panda$core$MutableString* $tmp1199 = (panda$core$MutableString*) malloc(48);
        $tmp1199->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1199->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1199, &$s1201);
        resultType1198 = $tmp1199;
        panda$core$Int64 $tmp1202 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1190->subtypes);
        panda$core$Int64 $tmp1203 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1202, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1204 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1190->subtypes, $tmp1203);
        panda$core$String* $tmp1205 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1204));
        panda$core$MutableString$append$panda$core$String(resultType1198, $tmp1205);
        panda$core$Char8$init$panda$core$UInt8(&$tmp1206, ((panda$core$UInt8) { 42 }));
        panda$core$MutableString$append$panda$core$Char8(resultType1198, $tmp1206);
        panda$core$Int64 $tmp1208 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1190->subtypes);
        panda$core$Int64 $tmp1209 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1208, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1207, ((panda$core$Int64) { 0 }), $tmp1209, ((panda$core$Bit) { false }));
        int64_t $tmp1211 = $tmp1207.min.value;
        panda$core$Int64 i1210 = { $tmp1211 };
        int64_t $tmp1213 = $tmp1207.max.value;
        bool $tmp1214 = $tmp1207.inclusive.value;
        if ($tmp1214) goto $l1221; else goto $l1222;
        $l1221:;
        if ($tmp1211 <= $tmp1213) goto $l1215; else goto $l1217;
        $l1222:;
        if ($tmp1211 < $tmp1213) goto $l1215; else goto $l1217;
        $l1215:;
        {
            panda$core$MutableString$append$panda$core$String(resultType1198, &$s1223);
            panda$core$Object* $tmp1224 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1190->subtypes, i1210);
            panda$core$String* $tmp1225 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1224));
            panda$core$MutableString$append$panda$core$String(resultType1198, $tmp1225);
        }
        $l1218:;
        int64_t $tmp1227 = $tmp1213 - i1210.value;
        if ($tmp1214) goto $l1228; else goto $l1229;
        $l1228:;
        if ($tmp1227 >= 1) goto $l1226; else goto $l1217;
        $l1229:;
        if ($tmp1227 > 1) goto $l1226; else goto $l1217;
        $l1226:;
        i1210.value += 1;
        goto $l1215;
        $l1217:;
        panda$core$MutableString$append$panda$core$String(resultType1198, &$s1232);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1233 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1233->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1233->refCount.value = 1;
        panda$core$String* $tmp1235 = panda$core$MutableString$finish$R$panda$core$String(resultType1198);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1233, ((panda$core$Object*) resultName1186), ((panda$core$Object*) $tmp1235));
        return $tmp1233;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1236 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1236->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1236->refCount.value = 1;
    panda$core$String* $tmp1238 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, inherited1190);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1236, ((panda$core$Object*) resultName1186), ((panda$core$Object*) $tmp1238));
    return $tmp1236;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1241;
    panda$core$String* type1243;
    panda$collections$ListView* vtable1261;
    panda$core$String* superPtr1285;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1286;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1297;
    panda$core$MutableString* code1301;
    panda$core$String* separator1342;
    panda$collections$Iterator* m$Iter1344;
    org$pandalanguage$pandac$MethodDecl* m1356;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1363;
    panda$core$Bit $tmp1239 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp1240 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1239);
    PANDA_ASSERT($tmp1240.value);
    panda$core$Object* $tmp1242 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result1241 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1242);
    if (((panda$core$Bit) { result1241 == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1244 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1244->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1244->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1247 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp1248 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1247)->name);
            panda$core$String* $tmp1249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1246, $tmp1248);
            panda$core$String* $tmp1251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1249, &$s1250);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1244, $tmp1251, &$s1252);
            result1241 = $tmp1244;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1241));
            panda$core$String* $tmp1253 = panda$core$String$convert$R$panda$core$String(result1241->name);
            panda$core$String* $tmp1255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1253, &$s1254);
            panda$core$String* $tmp1256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1255, result1241->type);
            panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1256, &$s1257);
            (($fn1259) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1258);
            panda$core$Object* $tmp1260 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1260);
        }
        }
        panda$collections$ListView* $tmp1262 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable1261 = $tmp1262;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1263 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1263->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1263->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1266 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp1267 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1266)->name);
        panda$core$String* $tmp1268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1265, $tmp1267);
        panda$core$String* $tmp1270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1268, &$s1269);
        panda$core$String* $tmp1273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1271, &$s1272);
        panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1273, &$s1274);
        ITable* $tmp1277 = ((panda$collections$CollectionView*) vtable1261)->$class->itable;
        while ($tmp1277->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1277 = $tmp1277->next;
        }
        $fn1279 $tmp1278 = $tmp1277->methods[0];
        panda$core$Int64 $tmp1280 = $tmp1278(((panda$collections$CollectionView*) vtable1261));
        panda$core$String* $tmp1281 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1276, ((panda$core$Object*) wrap_panda$core$Int64($tmp1280)));
        panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1281, &$s1282);
        panda$core$String* $tmp1284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1275, $tmp1283);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1263, $tmp1270, $tmp1284);
        result1241 = $tmp1263;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1241));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1287 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1288 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1287);
            superCC1286 = $tmp1288;
            panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1289, superCC1286->type);
            panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1290, &$s1291);
            panda$core$String* $tmp1293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1292, superCC1286->name);
            panda$core$String* $tmp1295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1293, &$s1294);
            superPtr1285 = $tmp1295;
        }
        }
        else {
        {
            superPtr1285 = &$s1296;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1298 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1299 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1298);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1300 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1299);
        clConstant1297 = $tmp1300;
        panda$core$MutableString* $tmp1302 = (panda$core$MutableString*) malloc(48);
        $tmp1302->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1302->refCount.value = 1;
        panda$core$String* $tmp1304 = panda$core$String$convert$R$panda$core$String(result1241->name);
        panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1304, &$s1305);
        panda$core$MutableString$init$panda$core$String($tmp1302, $tmp1306);
        code1301 = $tmp1302;
        panda$core$Bit $tmp1307 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
        if ($tmp1307.value) {
        {
            panda$core$MutableString$append$panda$core$String(code1301, &$s1308);
        }
        }
        panda$core$String* $tmp1310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1309, result1241->type);
        panda$core$String* $tmp1312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1310, &$s1311);
        panda$core$String* $tmp1314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1313, clConstant1297->type);
        panda$core$String* $tmp1316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1314, &$s1315);
        panda$core$String* $tmp1317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1316, clConstant1297->name);
        panda$core$String* $tmp1319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1317, &$s1318);
        panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1312, $tmp1319);
        panda$core$String* $tmp1323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1321, &$s1322);
        panda$core$String* $tmp1325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1323, &$s1324);
        panda$core$String* $tmp1326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1325, superPtr1285);
        panda$core$String* $tmp1328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1326, &$s1327);
        panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1320, $tmp1328);
        panda$core$String* $tmp1330 = org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1331 = panda$core$String$convert$R$panda$core$String($tmp1330);
        panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, &$s1332);
        ITable* $tmp1334 = ((panda$collections$CollectionView*) vtable1261)->$class->itable;
        while ($tmp1334->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1334 = $tmp1334->next;
        }
        $fn1336 $tmp1335 = $tmp1334->methods[0];
        panda$core$Int64 $tmp1337 = $tmp1335(((panda$collections$CollectionView*) vtable1261));
        panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1333, ((panda$core$Object*) wrap_panda$core$Int64($tmp1337)));
        panda$core$String* $tmp1340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1338, &$s1339);
        panda$core$String* $tmp1341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1329, $tmp1340);
        panda$core$MutableString$append$panda$core$String(code1301, $tmp1341);
        separator1342 = &$s1343;
        {
            ITable* $tmp1345 = ((panda$collections$Iterable*) vtable1261)->$class->itable;
            while ($tmp1345->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1345 = $tmp1345->next;
            }
            $fn1347 $tmp1346 = $tmp1345->methods[0];
            panda$collections$Iterator* $tmp1348 = $tmp1346(((panda$collections$Iterable*) vtable1261));
            m$Iter1344 = $tmp1348;
            $l1349:;
            ITable* $tmp1351 = m$Iter1344->$class->itable;
            while ($tmp1351->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1351 = $tmp1351->next;
            }
            $fn1353 $tmp1352 = $tmp1351->methods[0];
            panda$core$Bit $tmp1354 = $tmp1352(m$Iter1344);
            panda$core$Bit $tmp1355 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1354);
            if (!$tmp1355.value) goto $l1350;
            {
                ITable* $tmp1357 = m$Iter1344->$class->itable;
                while ($tmp1357->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1357 = $tmp1357->next;
                }
                $fn1359 $tmp1358 = $tmp1357->methods[1];
                panda$core$Object* $tmp1360 = $tmp1358(m$Iter1344);
                m1356 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1360);
                panda$core$MutableString$append$panda$core$String(code1301, separator1342);
                panda$core$Bit $tmp1361 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1356->annotations);
                if ($tmp1361.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code1301, &$s1362);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1364 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m1356);
                    entry1363 = $tmp1364;
                    panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1365, ((panda$core$String*) entry1363->second));
                    panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, &$s1367);
                    panda$core$String* $tmp1369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1368, ((panda$core$String*) entry1363->first));
                    panda$core$String* $tmp1371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1369, &$s1370);
                    panda$core$MutableString$append$panda$core$String(code1301, $tmp1371);
                }
                }
                separator1342 = &$s1372;
            }
            goto $l1349;
            $l1350:;
        }
        panda$core$MutableString$append$panda$core$String(code1301, &$s1373);
        panda$core$String* $tmp1374 = panda$core$MutableString$finish$R$panda$core$String(code1301);
        (($fn1375) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1374);
    }
    }
    return result1241;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1376;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1382;
    panda$core$String* type1385;
    org$pandalanguage$pandac$ClassDecl* value1396;
    panda$collections$ListView* valueVTable1399;
    panda$collections$ListView* vtable1422;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1424;
    panda$core$String* superCast1427;
    panda$core$String* itable1438;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1440;
    panda$core$MutableString* code1444;
    panda$core$String* separator1489;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1491;
    org$pandalanguage$pandac$MethodDecl* m1509;
    panda$core$String* methodName1514;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
    panda$core$String* $tmp1378 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1377, $tmp1378);
    panda$core$String* $tmp1381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1379, &$s1380);
    name1376 = $tmp1381;
    panda$core$Object* $tmp1383 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name1376));
    result1382 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1383);
    if (((panda$core$Bit) { result1382 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1384 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1384);
            type1385 = &$s1386;
            panda$core$String* $tmp1387 = panda$core$String$convert$R$panda$core$String(name1376);
            panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1387, &$s1388);
            panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, type1385);
            panda$core$String* $tmp1392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1390, &$s1391);
            (($fn1393) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1392);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1394 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1394->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1394->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1394, name1376, type1385);
            result1382 = $tmp1394;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1397 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1398 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1397);
            value1396 = $tmp1398;
            panda$collections$ListView* $tmp1400 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1396);
            valueVTable1399 = $tmp1400;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1401 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1401->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1401->refCount.value = 1;
            panda$core$String* $tmp1404 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1403, $tmp1404);
            panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1405, &$s1406);
            panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1408, &$s1409);
            panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, &$s1411);
            ITable* $tmp1414 = ((panda$collections$CollectionView*) valueVTable1399)->$class->itable;
            while ($tmp1414->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1414 = $tmp1414->next;
            }
            $fn1416 $tmp1415 = $tmp1414->methods[0];
            panda$core$Int64 $tmp1417 = $tmp1415(((panda$collections$CollectionView*) valueVTable1399));
            panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1413, ((panda$core$Object*) wrap_panda$core$Int64($tmp1417)));
            panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, &$s1419);
            panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1412, $tmp1420);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1401, $tmp1407, $tmp1421);
            result1382 = $tmp1401;
            panda$collections$ListView* $tmp1423 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1422 = $tmp1423;
            org$pandalanguage$pandac$ClassDecl* $tmp1425 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1426 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1425);
            superCC1424 = $tmp1426;
            org$pandalanguage$pandac$Type* $tmp1428 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1429 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1428);
            panda$core$Bit $tmp1430 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(superCC1424->type, $tmp1429);
            if ($tmp1430.value) {
            {
                panda$core$String* $tmp1432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1431, superCC1424->type);
                panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1432, &$s1433);
                panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, superCC1424->name);
                panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1435, &$s1436);
                superCast1427 = $tmp1437;
            }
            }
            else {
            {
                superCast1427 = superCC1424->name;
            }
            }
            panda$core$String* $tmp1439 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1438 = $tmp1439;
            org$pandalanguage$pandac$Type* $tmp1441 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1442 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1441);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1443 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1442);
            clConstant1440 = $tmp1443;
            panda$core$MutableString* $tmp1445 = (panda$core$MutableString*) malloc(48);
            $tmp1445->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1445->refCount.value = 1;
            panda$core$String* $tmp1447 = panda$core$String$convert$R$panda$core$String(result1382->name);
            panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1447, &$s1448);
            panda$core$MutableString$init$panda$core$String($tmp1445, $tmp1449);
            code1444 = $tmp1445;
            panda$core$Bit $tmp1450 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1450.value) {
            {
                panda$core$MutableString$append$panda$core$String(code1444, &$s1451);
            }
            }
            panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1452, result1382->type);
            panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1453, &$s1454);
            panda$core$String* $tmp1457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1456, clConstant1440->type);
            panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1457, &$s1458);
            panda$core$String* $tmp1460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1459, clConstant1440->name);
            panda$core$String* $tmp1462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1460, &$s1461);
            panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1455, $tmp1462);
            panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1464, &$s1465);
            panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1466, &$s1467);
            org$pandalanguage$pandac$Type* $tmp1469 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1470 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1469);
            panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, $tmp1470);
            panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1471, &$s1472);
            panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1473, superCast1427);
            panda$core$String* $tmp1476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1474, &$s1475);
            panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, $tmp1476);
            panda$core$String* $tmp1478 = panda$core$String$convert$R$panda$core$String(itable1438);
            panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1478, &$s1479);
            ITable* $tmp1481 = ((panda$collections$CollectionView*) valueVTable1399)->$class->itable;
            while ($tmp1481->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1481 = $tmp1481->next;
            }
            $fn1483 $tmp1482 = $tmp1481->methods[0];
            panda$core$Int64 $tmp1484 = $tmp1482(((panda$collections$CollectionView*) valueVTable1399));
            panda$core$String* $tmp1485 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1480, ((panda$core$Object*) wrap_panda$core$Int64($tmp1484)));
            panda$core$String* $tmp1487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1485, &$s1486);
            panda$core$String* $tmp1488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1477, $tmp1487);
            panda$core$MutableString$append$panda$core$String(code1444, $tmp1488);
            separator1489 = &$s1490;
            ITable* $tmp1492 = ((panda$collections$CollectionView*) valueVTable1399)->$class->itable;
            while ($tmp1492->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1492 = $tmp1492->next;
            }
            $fn1494 $tmp1493 = $tmp1492->methods[0];
            panda$core$Int64 $tmp1495 = $tmp1493(((panda$collections$CollectionView*) valueVTable1399));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1491, ((panda$core$Int64) { 0 }), $tmp1495, ((panda$core$Bit) { false }));
            int64_t $tmp1497 = $tmp1491.min.value;
            panda$core$Int64 i1496 = { $tmp1497 };
            int64_t $tmp1499 = $tmp1491.max.value;
            bool $tmp1500 = $tmp1491.inclusive.value;
            if ($tmp1500) goto $l1507; else goto $l1508;
            $l1507:;
            if ($tmp1497 <= $tmp1499) goto $l1501; else goto $l1503;
            $l1508:;
            if ($tmp1497 < $tmp1499) goto $l1501; else goto $l1503;
            $l1501:;
            {
                ITable* $tmp1510 = vtable1422->$class->itable;
                while ($tmp1510->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1510 = $tmp1510->next;
                }
                $fn1512 $tmp1511 = $tmp1510->methods[0];
                panda$core$Object* $tmp1513 = $tmp1511(vtable1422, i1496);
                m1509 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1513);
                if (((panda$core$Bit) { ((panda$core$Object*) m1509->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1515 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, m1509, ((panda$io$OutputStream*) self->wrapperShims));
                    methodName1514 = $tmp1515;
                }
                }
                else {
                {
                    panda$core$String* $tmp1516 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1509);
                    methodName1514 = $tmp1516;
                    if (m1509->owner->external.value) {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1509);
                    }
                    }
                }
                }
                panda$core$String* $tmp1517 = panda$core$String$convert$R$panda$core$String(separator1489);
                panda$core$String* $tmp1519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1517, &$s1518);
                panda$core$String* $tmp1520 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1509);
                panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1519, $tmp1520);
                panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1521, &$s1522);
                panda$core$String* $tmp1524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1523, methodName1514);
                panda$core$String* $tmp1526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1524, &$s1525);
                panda$core$MutableString$append$panda$core$String(code1444, $tmp1526);
                separator1489 = &$s1527;
            }
            $l1504:;
            int64_t $tmp1529 = $tmp1499 - i1496.value;
            if ($tmp1500) goto $l1530; else goto $l1531;
            $l1530:;
            if ($tmp1529 >= 1) goto $l1528; else goto $l1503;
            $l1531:;
            if ($tmp1529 > 1) goto $l1528; else goto $l1503;
            $l1528:;
            i1496.value += 1;
            goto $l1501;
            $l1503:;
            panda$core$MutableString$append$panda$core$String(code1444, &$s1534);
            panda$core$String* $tmp1535 = panda$core$MutableString$finish$R$panda$core$String(code1444);
            (($fn1536) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1535);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name1376), ((panda$core$Object*) result1382));
    }
    }
    return result1382;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$MutableString* result1537;
    panda$core$String$Index current1542;
    panda$core$String$Index end1544;
    panda$core$Char32 c1549;
    panda$core$Char32 $match$850_131551;
    panda$core$Char32 $tmp1552;
    panda$core$Char8 $tmp1554;
    panda$core$Char32 $tmp1555;
    panda$core$Char32 $tmp1558;
    panda$core$Char32 $tmp1561;
    panda$core$Char32 $tmp1564;
    panda$core$Char32 $tmp1566;
    panda$core$MutableString* $tmp1538 = (panda$core$MutableString*) malloc(48);
    $tmp1538->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1538->refCount.value = 1;
    panda$core$Int64 $tmp1540 = panda$core$String$byteLength$R$panda$core$Int64(p_s);
    panda$core$Int64 $tmp1541 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp1540, ((panda$core$Int64) { 2 }));
    panda$core$MutableString$init$panda$core$Int64($tmp1538, $tmp1541);
    result1537 = $tmp1538;
    panda$core$String$Index $tmp1543 = panda$core$String$start$R$panda$core$String$Index(p_s);
    current1542 = $tmp1543;
    panda$core$String$Index $tmp1545 = panda$core$String$end$R$panda$core$String$Index(p_s);
    end1544 = $tmp1545;
    $l1546:;
    panda$core$Bit $tmp1548 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(current1542, end1544);
    if (!$tmp1548.value) goto $l1547;
    {
        panda$core$Char32 $tmp1550 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_s, current1542);
        c1549 = $tmp1550;
        {
            $match$850_131551 = c1549;
            panda$core$Char32$init$panda$core$Int32(&$tmp1552, ((panda$core$Int32) { 46 }));
            panda$core$Bit $tmp1553 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$850_131551, $tmp1552);
            if ($tmp1553.value) {
            {
                panda$core$Char8$init$panda$core$UInt8(&$tmp1554, ((panda$core$UInt8) { 36 }));
                panda$core$MutableString$append$panda$core$Char8(result1537, $tmp1554);
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp1555, ((panda$core$Int32) { 63 }));
            panda$core$Bit $tmp1556 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$850_131551, $tmp1555);
            if ($tmp1556.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1537, &$s1557);
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp1558, ((panda$core$Int32) { 60 }));
            panda$core$Bit $tmp1559 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$850_131551, $tmp1558);
            if ($tmp1559.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1537, &$s1560);
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp1561, ((panda$core$Int32) { 62 }));
            panda$core$Bit $tmp1562 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$850_131551, $tmp1561);
            if ($tmp1562.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1537, &$s1563);
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp1564, ((panda$core$Int32) { 32 }));
            panda$core$Bit $tmp1565 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$850_131551, $tmp1564);
            if ($tmp1565.value) {
            {
                {
                }
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp1566, ((panda$core$Int32) { 44 }));
            panda$core$Bit $tmp1567 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$850_131551, $tmp1566);
            if ($tmp1567.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1537, &$s1568);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$Char32(result1537, c1549);
            }
            }
            }
            }
            }
            }
            }
        }
        panda$core$String$Index $tmp1569 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_s, current1542);
        current1542 = $tmp1569;
    }
    goto $l1546;
    $l1547:;
    panda$core$String* $tmp1570 = panda$core$MutableString$finish$R$panda$core$String(result1537);
    return $tmp1570;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1574;
    panda$core$String* result1602;
    panda$core$Bit $tmp1571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1571.value) {
    {
        panda$core$Int64 $tmp1572 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1573 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1572, ((panda$core$Int64) { 0 }));
        if ($tmp1573.value) {
        {
            panda$core$Int64 $tmp1575 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1574, ((panda$core$Int64) { 0 }), $tmp1575, ((panda$core$Bit) { false }));
            int64_t $tmp1577 = $tmp1574.min.value;
            panda$core$Int64 i1576 = { $tmp1577 };
            int64_t $tmp1579 = $tmp1574.max.value;
            bool $tmp1580 = $tmp1574.inclusive.value;
            if ($tmp1580) goto $l1587; else goto $l1588;
            $l1587:;
            if ($tmp1577 <= $tmp1579) goto $l1581; else goto $l1583;
            $l1588:;
            if ($tmp1577 < $tmp1579) goto $l1581; else goto $l1583;
            $l1581:;
            {
                panda$core$Object* $tmp1589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1576);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1589)->name) }).value) {
                {
                    panda$core$Object* $tmp1590 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1591 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1590)->argRefs, i1576);
                    return ((panda$core$String*) $tmp1591);
                }
                }
            }
            $l1584:;
            int64_t $tmp1593 = $tmp1579 - i1576.value;
            if ($tmp1580) goto $l1594; else goto $l1595;
            $l1594:;
            if ($tmp1593 >= 1) goto $l1592; else goto $l1583;
            $l1595:;
            if ($tmp1593 > 1) goto $l1592; else goto $l1583;
            $l1592:;
            i1576.value += 1;
            goto $l1581;
            $l1583:;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp1599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1598, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1599, &$s1600);
        return $tmp1601;
    }
    }
    panda$core$Object* $tmp1603 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1602 = ((panda$core$String*) $tmp1603);
    if (((panda$core$Bit) { result1602 == NULL }).value) {
    {
        panda$core$Int64 $tmp1604 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1604;
        panda$core$String* $tmp1606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1605, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1606, &$s1607);
        panda$core$String* $tmp1609 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1608, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1609, &$s1610);
        result1602 = $tmp1611;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1602));
    }
    }
    panda$core$Int64 $tmp1612 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1613 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1612, ((panda$core$Int64) { 0 }));
    if ($tmp1613.value) {
    {
        panda$core$Object* $tmp1614 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1602, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1614)->varSuffix);
        result1602 = $tmp1615;
    }
    }
    return result1602;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1619;
    panda$core$Char8 $tmp1624;
    panda$core$String* $match$895_91625;
    panda$collections$Iterator* p$Iter1702;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1714;
    panda$core$Bit $tmp1617 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1616);
    if ($tmp1617.value) {
    {
        return &$s1618;
    }
    }
    panda$core$MutableString* $tmp1620 = (panda$core$MutableString*) malloc(48);
    $tmp1620->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1620->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1620, &$s1622);
    result1619 = $tmp1620;
    panda$core$String* $tmp1623 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1619, $tmp1623);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1624, ((panda$core$UInt8) { 36 }));
    panda$core$MutableString$append$panda$core$Char8(result1619, $tmp1624);
    {
        $match$895_91625 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1627 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1626);
        if ($tmp1627.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1628);
        }
        }
        else {
        panda$core$Bit $tmp1630 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1629);
        if ($tmp1630.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1631);
        }
        }
        else {
        panda$core$Bit $tmp1633 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1632);
        if ($tmp1633.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1634);
        }
        }
        else {
        panda$core$Bit $tmp1636 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1635);
        if ($tmp1636.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1637);
        }
        }
        else {
        panda$core$Bit $tmp1639 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1638);
        if ($tmp1639.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1640);
        }
        }
        else {
        panda$core$Bit $tmp1642 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1641);
        if ($tmp1642.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1643);
        }
        }
        else {
        panda$core$Bit $tmp1645 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1644);
        if ($tmp1645.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1646);
        }
        }
        else {
        panda$core$Bit $tmp1648 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1647);
        if ($tmp1648.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1649);
        }
        }
        else {
        panda$core$Bit $tmp1651 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1650);
        if ($tmp1651.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1652);
        }
        }
        else {
        panda$core$Bit $tmp1654 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1653);
        if ($tmp1654.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1655);
        }
        }
        else {
        panda$core$Bit $tmp1657 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1656);
        if ($tmp1657.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1658);
        }
        }
        else {
        panda$core$Bit $tmp1660 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1659);
        if ($tmp1660.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1661);
        }
        }
        else {
        panda$core$Bit $tmp1663 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1662);
        if ($tmp1663.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1664);
        }
        }
        else {
        panda$core$Bit $tmp1666 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1665);
        if ($tmp1666.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1667);
        }
        }
        else {
        panda$core$Bit $tmp1669 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1668);
        if ($tmp1669.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1670);
        }
        }
        else {
        panda$core$Bit $tmp1672 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1671);
        if ($tmp1672.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1673);
        }
        }
        else {
        panda$core$Bit $tmp1675 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1674);
        if ($tmp1675.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1676);
        }
        }
        else {
        panda$core$Bit $tmp1678 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1677);
        if ($tmp1678.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1679);
        }
        }
        else {
        panda$core$Bit $tmp1681 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1680);
        if ($tmp1681.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1682);
        }
        }
        else {
        panda$core$Bit $tmp1684 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1683);
        if ($tmp1684.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1685);
        }
        }
        else {
        panda$core$Bit $tmp1687 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1686);
        if ($tmp1687.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1688);
        }
        }
        else {
        panda$core$Bit $tmp1690 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1689);
        if ($tmp1690.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1691);
        }
        }
        else {
        panda$core$Bit $tmp1693 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1692);
        if ($tmp1693.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1694);
        }
        }
        else {
        panda$core$Bit $tmp1696 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1695);
        if ($tmp1696.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1697);
        }
        }
        else {
        panda$core$Bit $tmp1699 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$895_91625, &$s1698);
        if ($tmp1699.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1619, &$s1700);
        }
        }
        else {
        {
            panda$core$String* $tmp1701 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1619, $tmp1701);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        ITable* $tmp1703 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1703->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1703 = $tmp1703->next;
        }
        $fn1705 $tmp1704 = $tmp1703->methods[0];
        panda$collections$Iterator* $tmp1706 = $tmp1704(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1702 = $tmp1706;
        $l1707:;
        ITable* $tmp1709 = p$Iter1702->$class->itable;
        while ($tmp1709->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1709 = $tmp1709->next;
        }
        $fn1711 $tmp1710 = $tmp1709->methods[0];
        panda$core$Bit $tmp1712 = $tmp1710(p$Iter1702);
        panda$core$Bit $tmp1713 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1712);
        if (!$tmp1713.value) goto $l1708;
        {
            ITable* $tmp1715 = p$Iter1702->$class->itable;
            while ($tmp1715->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1715 = $tmp1715->next;
            }
            $fn1717 $tmp1716 = $tmp1715->methods[1];
            panda$core$Object* $tmp1718 = $tmp1716(p$Iter1702);
            p1714 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1718);
            panda$core$String* $tmp1720 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1714->type)->name);
            panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1719, $tmp1720);
            panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, &$s1722);
            panda$core$MutableString$append$panda$core$String(result1619, $tmp1723);
        }
        goto $l1707;
        $l1708:;
    }
    org$pandalanguage$pandac$Type* $tmp1724 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1725 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1724);
    if ($tmp1725.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1619, &$s1726);
        panda$core$String* $tmp1727 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1619, $tmp1727);
    }
    }
    panda$core$String* $tmp1728 = panda$core$MutableString$finish$R$panda$core$String(result1619);
    return $tmp1728;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1729 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1729.value);
    panda$core$String* $tmp1731 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1730, $tmp1731);
    panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1732, &$s1733);
    panda$core$String* $tmp1735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1734, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1735, &$s1736);
    return $tmp1737;
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
    panda$core$String* leftRef1738;
    panda$core$String* leftField1742;
    panda$core$String* start1751;
    panda$core$String* ifTrue1752;
    panda$core$String* ifFalse1754;
    panda$core$String* rightRef1767;
    panda$core$String* rightField1771;
    panda$core$String* truePred1780;
    panda$core$String* result1786;
    panda$core$String* $tmp1739 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1738 = $tmp1739;
    org$pandalanguage$pandac$Type* $tmp1740 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1741 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1740);
    if ($tmp1741.value) {
    {
        panda$core$String* $tmp1743 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1742 = $tmp1743;
        panda$core$String* $tmp1744 = panda$core$String$convert$R$panda$core$String(leftField1742);
        panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1744, &$s1745);
        panda$core$String* $tmp1747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1746, leftRef1738);
        panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1747, &$s1748);
        (($fn1750) p_out->$class->vtable[19])(p_out, $tmp1749);
        leftRef1738 = leftField1742;
    }
    }
    start1751 = self->currentBlock;
    panda$core$String* $tmp1753 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1752 = $tmp1753;
    panda$core$String* $tmp1755 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1754 = $tmp1755;
    panda$core$String* $tmp1757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1756, leftRef1738);
    panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1757, &$s1758);
    panda$core$String* $tmp1760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1759, ifTrue1752);
    panda$core$String* $tmp1762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1760, &$s1761);
    panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1762, ifFalse1754);
    panda$core$String* $tmp1765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1763, &$s1764);
    (($fn1766) p_out->$class->vtable[19])(p_out, $tmp1765);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue1752, p_out);
    panda$core$String* $tmp1768 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1767 = $tmp1768;
    org$pandalanguage$pandac$Type* $tmp1769 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1770 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1769);
    if ($tmp1770.value) {
    {
        panda$core$String* $tmp1772 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1771 = $tmp1772;
        panda$core$String* $tmp1773 = panda$core$String$convert$R$panda$core$String(rightField1771);
        panda$core$String* $tmp1775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1773, &$s1774);
        panda$core$String* $tmp1776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1775, rightRef1767);
        panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1776, &$s1777);
        (($fn1779) p_out->$class->vtable[19])(p_out, $tmp1778);
        rightRef1767 = rightField1771;
    }
    }
    truePred1780 = self->currentBlock;
    panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1781, ifFalse1754);
    panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1782, &$s1783);
    (($fn1785) p_out->$class->vtable[19])(p_out, $tmp1784);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse1754, p_out);
    panda$core$String* $tmp1787 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1786 = $tmp1787;
    panda$core$String* $tmp1788 = panda$core$String$convert$R$panda$core$String(result1786);
    panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1788, &$s1789);
    panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1790, start1751);
    panda$core$String* $tmp1793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1791, &$s1792);
    panda$core$String* $tmp1794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1793, rightRef1767);
    panda$core$String* $tmp1796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1794, &$s1795);
    panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1796, truePred1780);
    panda$core$String* $tmp1799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1797, &$s1798);
    (($fn1800) p_out->$class->vtable[19])(p_out, $tmp1799);
    return result1786;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1801;
    panda$core$String* leftField1805;
    panda$core$String* start1814;
    panda$core$String* ifTrue1815;
    panda$core$String* ifFalse1817;
    panda$core$String* rightRef1830;
    panda$core$String* rightField1834;
    panda$core$String* falsePred1843;
    panda$core$String* result1849;
    panda$core$String* $tmp1802 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1801 = $tmp1802;
    org$pandalanguage$pandac$Type* $tmp1803 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1804 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1803);
    if ($tmp1804.value) {
    {
        panda$core$String* $tmp1806 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1805 = $tmp1806;
        panda$core$String* $tmp1807 = panda$core$String$convert$R$panda$core$String(leftField1805);
        panda$core$String* $tmp1809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1807, &$s1808);
        panda$core$String* $tmp1810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1809, leftRef1801);
        panda$core$String* $tmp1812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1810, &$s1811);
        (($fn1813) p_out->$class->vtable[19])(p_out, $tmp1812);
        leftRef1801 = leftField1805;
    }
    }
    start1814 = self->currentBlock;
    panda$core$String* $tmp1816 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1815 = $tmp1816;
    panda$core$String* $tmp1818 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1817 = $tmp1818;
    panda$core$String* $tmp1820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1819, leftRef1801);
    panda$core$String* $tmp1822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1820, &$s1821);
    panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, ifTrue1815);
    panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1823, &$s1824);
    panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1825, ifFalse1817);
    panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1826, &$s1827);
    (($fn1829) p_out->$class->vtable[19])(p_out, $tmp1828);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse1817, p_out);
    panda$core$String* $tmp1831 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1830 = $tmp1831;
    org$pandalanguage$pandac$Type* $tmp1832 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1833 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1832);
    if ($tmp1833.value) {
    {
        panda$core$String* $tmp1835 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1834 = $tmp1835;
        panda$core$String* $tmp1836 = panda$core$String$convert$R$panda$core$String(rightField1834);
        panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1836, &$s1837);
        panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1838, rightRef1830);
        panda$core$String* $tmp1841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1839, &$s1840);
        (($fn1842) p_out->$class->vtable[19])(p_out, $tmp1841);
        rightRef1830 = rightField1834;
    }
    }
    falsePred1843 = self->currentBlock;
    panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1844, ifTrue1815);
    panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1845, &$s1846);
    (($fn1848) p_out->$class->vtable[19])(p_out, $tmp1847);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue1815, p_out);
    panda$core$String* $tmp1850 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1849 = $tmp1850;
    panda$core$String* $tmp1851 = panda$core$String$convert$R$panda$core$String(result1849);
    panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1851, &$s1852);
    panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1853, start1814);
    panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1854, &$s1855);
    panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, rightRef1830);
    panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1857, &$s1858);
    panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, falsePred1843);
    panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, &$s1861);
    (($fn1863) p_out->$class->vtable[19])(p_out, $tmp1862);
    return result1849;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$OutputStream* p_out) {
    panda$core$String* llvmOp1864;
    panda$core$String* result1908;
    panda$core$String* typeString1910;
    panda$core$Int64 $tmp1865 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    switch ($tmp1865.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1864 = &$s1866;
                }
                break;
                case 52:
                {
                    llvmOp1864 = &$s1867;
                }
                break;
                case 53:
                {
                    llvmOp1864 = &$s1868;
                }
                break;
                case 55:
                {
                    llvmOp1864 = &$s1869;
                }
                break;
                case 56:
                {
                    llvmOp1864 = &$s1870;
                }
                break;
                case 72:
                {
                    llvmOp1864 = &$s1871;
                }
                break;
                case 1:
                {
                    llvmOp1864 = &$s1872;
                }
                break;
                case 67:
                {
                    llvmOp1864 = &$s1873;
                }
                break;
                case 69:
                {
                    llvmOp1864 = &$s1874;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1864 = &$s1875;
                }
                break;
                case 58:
                {
                    llvmOp1864 = &$s1876;
                }
                break;
                case 59:
                {
                    llvmOp1864 = &$s1877;
                }
                break;
                case 63:
                {
                    llvmOp1864 = &$s1878;
                }
                break;
                case 62:
                {
                    llvmOp1864 = &$s1879;
                }
                break;
                case 65:
                {
                    llvmOp1864 = &$s1880;
                }
                break;
                case 64:
                {
                    llvmOp1864 = &$s1881;
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
                    llvmOp1864 = &$s1882;
                }
                break;
                case 52:
                {
                    llvmOp1864 = &$s1883;
                }
                break;
                case 53:
                {
                    llvmOp1864 = &$s1884;
                }
                break;
                case 55:
                {
                    llvmOp1864 = &$s1885;
                }
                break;
                case 56:
                {
                    llvmOp1864 = &$s1886;
                }
                break;
                case 72:
                {
                    llvmOp1864 = &$s1887;
                }
                break;
                case 1:
                {
                    llvmOp1864 = &$s1888;
                }
                break;
                case 67:
                {
                    llvmOp1864 = &$s1889;
                }
                break;
                case 69:
                {
                    llvmOp1864 = &$s1890;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1864 = &$s1891;
                }
                break;
                case 58:
                {
                    llvmOp1864 = &$s1892;
                }
                break;
                case 59:
                {
                    llvmOp1864 = &$s1893;
                }
                break;
                case 63:
                {
                    llvmOp1864 = &$s1894;
                }
                break;
                case 62:
                {
                    llvmOp1864 = &$s1895;
                }
                break;
                case 65:
                {
                    llvmOp1864 = &$s1896;
                }
                break;
                case 64:
                {
                    llvmOp1864 = &$s1897;
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
                    llvmOp1864 = &$s1898;
                }
                break;
                case 52:
                {
                    llvmOp1864 = &$s1899;
                }
                break;
                case 53:
                {
                    llvmOp1864 = &$s1900;
                }
                break;
                case 54:
                {
                    llvmOp1864 = &$s1901;
                }
                break;
                case 58:
                {
                    llvmOp1864 = &$s1902;
                }
                break;
                case 59:
                {
                    llvmOp1864 = &$s1903;
                }
                break;
                case 63:
                {
                    llvmOp1864 = &$s1904;
                }
                break;
                case 62:
                {
                    llvmOp1864 = &$s1905;
                }
                break;
                case 65:
                {
                    llvmOp1864 = &$s1906;
                }
                break;
                case 64:
                {
                    llvmOp1864 = &$s1907;
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
    panda$core$String* $tmp1911 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    typeString1910 = $tmp1911;
    panda$core$String* $tmp1912 = panda$core$String$convert$R$panda$core$String(result1908);
    panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1912, &$s1913);
    panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1914, llvmOp1864);
    panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, &$s1916);
    panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, typeString1910);
    panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1918, &$s1919);
    panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1920, p_leftRef);
    panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1921, &$s1922);
    panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1923, p_rightRef);
    panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1924, &$s1925);
    (($fn1927) p_out->$class->vtable[19])(p_out, $tmp1926);
    return result1908;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1928;
    panda$core$String* rightRef1930;
    panda$core$String* raw1932;
    panda$core$String* result1944;
    panda$core$String* $tmp1929 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1928 = $tmp1929;
    panda$core$String* $tmp1931 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1930 = $tmp1931;
    panda$core$String* $tmp1933 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1932 = $tmp1933;
    panda$core$String* $tmp1934 = panda$core$String$convert$R$panda$core$String(raw1932);
    panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1934, &$s1935);
    panda$core$String* $tmp1937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1936, leftRef1928);
    panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1937, &$s1938);
    panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1939, rightRef1930);
    panda$core$String* $tmp1942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1940, &$s1941);
    (($fn1943) p_out->$class->vtable[19])(p_out, $tmp1942);
    panda$core$String* $tmp1945 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1944 = $tmp1945;
    panda$core$String* $tmp1946 = panda$core$String$convert$R$panda$core$String(result1944);
    panda$core$String* $tmp1948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1946, &$s1947);
    panda$core$String* $tmp1949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1948, raw1932);
    panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1949, &$s1950);
    (($fn1952) p_out->$class->vtable[19])(p_out, $tmp1951);
    return result1944;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1953;
    panda$core$String* rightRef1955;
    panda$core$String* raw1957;
    panda$core$String* result1969;
    panda$core$String* $tmp1954 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1953 = $tmp1954;
    panda$core$String* $tmp1956 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1955 = $tmp1956;
    panda$core$String* $tmp1958 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1957 = $tmp1958;
    panda$core$String* $tmp1959 = panda$core$String$convert$R$panda$core$String(raw1957);
    panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1959, &$s1960);
    panda$core$String* $tmp1962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1961, leftRef1953);
    panda$core$String* $tmp1964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1962, &$s1963);
    panda$core$String* $tmp1965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1964, rightRef1955);
    panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1965, &$s1966);
    (($fn1968) p_out->$class->vtable[19])(p_out, $tmp1967);
    panda$core$String* $tmp1970 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1969 = $tmp1970;
    panda$core$String* $tmp1971 = panda$core$String$convert$R$panda$core$String(result1969);
    panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1971, &$s1972);
    panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1973, raw1957);
    panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1974, &$s1975);
    (($fn1977) p_out->$class->vtable[19])(p_out, $tmp1976);
    return result1969;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1983;
    panda$core$String* rightRef1985;
    panda$core$Bit $tmp1978 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1978.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1979 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1979;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1980 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1980;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1981 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1981;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1982 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1982;
        }
        break;
        default:
        {
            panda$core$String* $tmp1984 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1983 = $tmp1984;
            panda$core$String* $tmp1986 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1985 = $tmp1986;
            panda$core$String* $tmp1987 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, p_left->type, leftRef1983, p_op, rightRef1985, p_out);
            return $tmp1987;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp1988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1988.value);
    panda$core$Int64 $tmp1989 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1989, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1990.value);
    panda$core$Object* $tmp1991 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1992 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1993 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1991), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1992), p_out);
    return $tmp1993;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_t, panda$io$OutputStream* p_out) {
    panda$core$String* test2003;
    panda$core$String* testBit2006;
    panda$core$String* trueLabel2015;
    panda$core$String* falseLabel2017;
    panda$core$String* merge2019;
    panda$core$String* ifTrue2032;
    panda$core$String* ifFalse2040;
    panda$core$String* result2048;
    panda$core$Bit $tmp1994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->kind, ((panda$core$Int64) { 1044 }));
    PANDA_ASSERT($tmp1994.value);
    panda$core$Int64 $tmp1995 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
    panda$core$Bit $tmp1996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1995, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp1996.value);
    panda$core$Object* $tmp1997 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1998 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1999 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1997)->type, $tmp1998);
    PANDA_ASSERT($tmp1999.value);
    panda$core$Object* $tmp2000 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2001 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2002 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2000)->type, ((org$pandalanguage$pandac$IRNode*) $tmp2001)->type);
    PANDA_ASSERT($tmp2002.value);
    panda$core$Object* $tmp2004 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2005 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2004), p_out);
    test2003 = $tmp2005;
    panda$core$String* $tmp2007 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit2006 = $tmp2007;
    panda$core$String* $tmp2008 = panda$core$String$convert$R$panda$core$String(testBit2006);
    panda$core$String* $tmp2010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2008, &$s2009);
    panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2010, test2003);
    panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2011, &$s2012);
    (($fn2014) p_out->$class->vtable[19])(p_out, $tmp2013);
    panda$core$String* $tmp2016 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2015 = $tmp2016;
    panda$core$String* $tmp2018 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2017 = $tmp2018;
    panda$core$String* $tmp2020 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2019 = $tmp2020;
    panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2021, testBit2006);
    panda$core$String* $tmp2024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2022, &$s2023);
    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2024, trueLabel2015);
    panda$core$String* $tmp2027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2025, &$s2026);
    panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2027, falseLabel2017);
    panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2028, &$s2029);
    (($fn2031) p_out->$class->vtable[19])(p_out, $tmp2030);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, trueLabel2015, p_out);
    panda$core$Object* $tmp2033 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2034 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2033), p_out);
    ifTrue2032 = $tmp2034;
    trueLabel2015 = self->currentBlock;
    panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2035, merge2019);
    panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2036, &$s2037);
    (($fn2039) p_out->$class->vtable[19])(p_out, $tmp2038);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, falseLabel2017, p_out);
    panda$core$Object* $tmp2041 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$String* $tmp2042 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2041), p_out);
    ifFalse2040 = $tmp2042;
    falseLabel2017 = self->currentBlock;
    panda$core$String* $tmp2044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2043, merge2019);
    panda$core$String* $tmp2046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2044, &$s2045);
    (($fn2047) p_out->$class->vtable[19])(p_out, $tmp2046);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, merge2019, p_out);
    panda$core$String* $tmp2049 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2048 = $tmp2049;
    panda$core$String* $tmp2050 = panda$core$String$convert$R$panda$core$String(result2048);
    panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2050, &$s2051);
    panda$core$Object* $tmp2053 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2054 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2053)->type);
    panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, $tmp2054);
    panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2055, &$s2056);
    panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2057, ifTrue2032);
    panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, &$s2059);
    panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2060, trueLabel2015);
    panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2061, &$s2062);
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2064, ifFalse2040);
    panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
    panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2067, falseLabel2017);
    panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2068, &$s2069);
    panda$core$String* $tmp2071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2063, $tmp2070);
    (($fn2072) p_out->$class->vtable[19])(p_out, $tmp2071);
    return result2048;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp2075 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp2074 = $tmp2075.value;
    if (!$tmp2074) goto $l2076;
    panda$core$Bit $tmp2077 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp2078 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2077);
    $tmp2074 = $tmp2078.value;
    $l2076:;
    panda$core$Bit $tmp2079 = { $tmp2074 };
    bool $tmp2073 = $tmp2079.value;
    if (!$tmp2073) goto $l2080;
    panda$core$Bit $tmp2081 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp2082 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2081);
    $tmp2073 = $tmp2082.value;
    $l2080:;
    panda$core$Bit $tmp2083 = { $tmp2073 };
    if ($tmp2083.value) {
    {
        return &$s2084;
    }
    }
    return &$s2085;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc2086;
    panda$core$Int64 index2088;
    panda$collections$ListView* vtable2089;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2091;
    panda$core$String* classPtrPtr2120;
    panda$core$String* classPtr2135;
    panda$core$String* cast2144;
    panda$core$String* ptr2156;
    panda$core$String* load2179;
    panda$core$String* result2188;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2087 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc2086 = $tmp2087;
    index2088 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2090 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2089 = $tmp2090;
    ITable* $tmp2092 = ((panda$collections$CollectionView*) vtable2089)->$class->itable;
    while ($tmp2092->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2092 = $tmp2092->next;
    }
    $fn2094 $tmp2093 = $tmp2092->methods[0];
    panda$core$Int64 $tmp2095 = $tmp2093(((panda$collections$CollectionView*) vtable2089));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2091, ((panda$core$Int64) { 0 }), $tmp2095, ((panda$core$Bit) { false }));
    int64_t $tmp2097 = $tmp2091.min.value;
    panda$core$Int64 i2096 = { $tmp2097 };
    int64_t $tmp2099 = $tmp2091.max.value;
    bool $tmp2100 = $tmp2091.inclusive.value;
    if ($tmp2100) goto $l2107; else goto $l2108;
    $l2107:;
    if ($tmp2097 <= $tmp2099) goto $l2101; else goto $l2103;
    $l2108:;
    if ($tmp2097 < $tmp2099) goto $l2101; else goto $l2103;
    $l2101:;
    {
        ITable* $tmp2109 = vtable2089->$class->itable;
        while ($tmp2109->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2109 = $tmp2109->next;
        }
        $fn2111 $tmp2110 = $tmp2109->methods[0];
        panda$core$Object* $tmp2112 = $tmp2110(vtable2089, i2096);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2112)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2088 = i2096;
            goto $l2103;
        }
        }
    }
    $l2104:;
    int64_t $tmp2114 = $tmp2099 - i2096.value;
    if ($tmp2100) goto $l2115; else goto $l2116;
    $l2115:;
    if ($tmp2114 >= 1) goto $l2113; else goto $l2103;
    $l2116:;
    if ($tmp2114 > 1) goto $l2113; else goto $l2103;
    $l2113:;
    i2096.value += 1;
    goto $l2101;
    $l2103:;
    panda$core$Bit $tmp2119 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2088, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2119.value);
    panda$core$String* $tmp2121 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2120 = $tmp2121;
    panda$core$String* $tmp2122 = panda$core$String$convert$R$panda$core$String(classPtrPtr2120);
    panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2123);
    org$pandalanguage$pandac$Type* $tmp2125 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2126 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2125);
    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2124, $tmp2126);
    panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2127, &$s2128);
    panda$core$String* $tmp2130 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2131);
    panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2129, $tmp2132);
    (($fn2134) p_out->$class->vtable[19])(p_out, $tmp2133);
    panda$core$String* $tmp2136 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2135 = $tmp2136;
    panda$core$String* $tmp2137 = panda$core$String$convert$R$panda$core$String(classPtr2135);
    panda$core$String* $tmp2139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2137, &$s2138);
    panda$core$String* $tmp2140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2139, classPtrPtr2120);
    panda$core$String* $tmp2142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, &$s2141);
    (($fn2143) p_out->$class->vtable[19])(p_out, $tmp2142);
    panda$core$String* $tmp2145 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2144 = $tmp2145;
    panda$core$String* $tmp2146 = panda$core$String$convert$R$panda$core$String(cast2144);
    panda$core$String* $tmp2148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2146, &$s2147);
    panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2148, classPtr2135);
    panda$core$String* $tmp2151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2149, &$s2150);
    panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2151, cc2086->type);
    panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, &$s2153);
    (($fn2155) p_out->$class->vtable[19])(p_out, $tmp2154);
    panda$core$String* $tmp2157 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2156 = $tmp2157;
    panda$core$String* $tmp2158 = panda$core$String$convert$R$panda$core$String(ptr2156);
    panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2158, &$s2159);
    panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2160, cc2086->type);
    panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, &$s2162);
    panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2163, cc2086->type);
    panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2164, &$s2165);
    panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, cast2144);
    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2167, &$s2168);
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2170, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2171, &$s2172);
    panda$core$String* $tmp2174 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2173, ((panda$core$Object*) wrap_panda$core$Int64(index2088)));
    panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2174, &$s2175);
    panda$core$String* $tmp2177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, $tmp2176);
    (($fn2178) p_out->$class->vtable[19])(p_out, $tmp2177);
    panda$core$String* $tmp2180 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2179 = $tmp2180;
    panda$core$String* $tmp2181 = panda$core$String$convert$R$panda$core$String(load2179);
    panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2181, &$s2182);
    panda$core$String* $tmp2184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2183, ptr2156);
    panda$core$String* $tmp2186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2184, &$s2185);
    (($fn2187) p_out->$class->vtable[19])(p_out, $tmp2186);
    panda$core$String* $tmp2189 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2188 = $tmp2189;
    panda$core$String* $tmp2190 = panda$core$String$convert$R$panda$core$String(result2188);
    panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2191);
    panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, load2179);
    panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, &$s2194);
    org$pandalanguage$pandac$Type* $tmp2196 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2197 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2196);
    panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2195, $tmp2197);
    (($fn2199) p_out->$class->vtable[19])(p_out, $tmp2198);
    return result2188;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    panda$core$String* methodType2200;
    panda$core$String* entry2203;
    panda$core$String* rawClassPointer2210;
    panda$core$String* classPointer2232;
    panda$core$String* classType2234;
    panda$core$String* loadedClass2247;
    panda$core$String* itableFirst2262;
    panda$core$String* next2285;
    panda$core$String* leavingEntryLabel2292;
    panda$core$String* itableNext2294;
    panda$core$String* itablePtrPtr2299;
    panda$core$String* fail2301;
    panda$core$String* itablePtr2321;
    panda$core$String* itableClassPtr2330;
    panda$core$String* itableClass2344;
    panda$core$String* test2359;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2361;
    panda$core$String* success2383;
    panda$core$Int64 index2413;
    panda$collections$ListView* vtable2414;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2416;
    panda$core$String* methodPtrPtr2453;
    panda$core$String* cast2470;
    panda$core$String* methodPtr2482;
    org$pandalanguage$pandac$Type* $tmp2201 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2202 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2201);
    methodType2200 = $tmp2202;
    panda$core$String* $tmp2204 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2203 = $tmp2204;
    panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2205, entry2203);
    panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2206, &$s2207);
    (($fn2209) p_out->$class->vtable[19])(p_out, $tmp2208);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, entry2203, p_out);
    panda$core$String* $tmp2211 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawClassPointer2210 = $tmp2211;
    panda$core$String* $tmp2212 = panda$core$String$convert$R$panda$core$String(rawClassPointer2210);
    panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2212, &$s2213);
    org$pandalanguage$pandac$Type* $tmp2215 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2216 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2215);
    panda$core$String* $tmp2217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, $tmp2216);
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2217, &$s2218);
    panda$core$String* $tmp2220 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2220, &$s2221);
    panda$core$String* $tmp2224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2222, &$s2223);
    panda$core$String* $tmp2226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2224, &$s2225);
    panda$core$String* $tmp2227 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2226, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2227, &$s2228);
    panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, $tmp2229);
    (($fn2231) p_out->$class->vtable[19])(p_out, $tmp2230);
    panda$core$String* $tmp2233 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2232 = $tmp2233;
    org$pandalanguage$pandac$Type* $tmp2235 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2236 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2235);
    classType2234 = $tmp2236;
    panda$core$String* $tmp2237 = panda$core$String$convert$R$panda$core$String(classPointer2232);
    panda$core$String* $tmp2239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, &$s2238);
    panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2239, rawClassPointer2210);
    panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2240, &$s2241);
    panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2242, classType2234);
    panda$core$String* $tmp2245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2243, &$s2244);
    (($fn2246) p_out->$class->vtable[19])(p_out, $tmp2245);
    panda$core$String* $tmp2248 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2247 = $tmp2248;
    panda$core$String* $tmp2249 = panda$core$String$convert$R$panda$core$String(loadedClass2247);
    panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, &$s2250);
    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, classType2234);
    panda$core$String* $tmp2254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, &$s2253);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2254, classType2234);
    panda$core$String* $tmp2257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2255, &$s2256);
    panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2257, classPointer2232);
    panda$core$String* $tmp2260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2258, &$s2259);
    (($fn2261) p_out->$class->vtable[19])(p_out, $tmp2260);
    panda$core$String* $tmp2263 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2262 = $tmp2263;
    panda$core$String* $tmp2264 = panda$core$String$convert$R$panda$core$String(itableFirst2262);
    panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, &$s2265);
    panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2266, classType2234);
    panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, &$s2268);
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, classType2234);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, &$s2271);
    panda$core$String* $tmp2273 = panda$core$String$convert$R$panda$core$String(loadedClass2247);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2273, &$s2274);
    panda$core$String* $tmp2277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2275, &$s2276);
    panda$core$String* $tmp2279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2277, &$s2278);
    panda$core$String* $tmp2280 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2279, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2280, &$s2281);
    panda$core$String* $tmp2283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, $tmp2282);
    (($fn2284) p_out->$class->vtable[19])(p_out, $tmp2283);
    panda$core$String* $tmp2286 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2285 = $tmp2286;
    panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2287, next2285);
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, &$s2289);
    (($fn2291) p_out->$class->vtable[19])(p_out, $tmp2290);
    leavingEntryLabel2292 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, next2285, p_out);
    panda$core$Int64 $tmp2293 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2293;
    panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2295, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2296, &$s2297);
    itableNext2294 = $tmp2298;
    panda$core$String* $tmp2300 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2299 = $tmp2300;
    panda$core$String* $tmp2302 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2301 = $tmp2302;
    panda$core$String* $tmp2303 = panda$core$String$convert$R$panda$core$String(itablePtrPtr2299);
    panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, &$s2304);
    panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, itableFirst2262);
    panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2306, &$s2307);
    panda$core$String* $tmp2309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2308, leavingEntryLabel2292);
    panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2309, &$s2310);
    panda$core$String* $tmp2313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2312, itableNext2294);
    panda$core$String* $tmp2315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2313, &$s2314);
    panda$core$String* $tmp2316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2315, fail2301);
    panda$core$String* $tmp2318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2316, &$s2317);
    panda$core$String* $tmp2319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2311, $tmp2318);
    (($fn2320) p_out->$class->vtable[19])(p_out, $tmp2319);
    panda$core$String* $tmp2322 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2321 = $tmp2322;
    panda$core$String* $tmp2323 = panda$core$String$convert$R$panda$core$String(itablePtr2321);
    panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2323, &$s2324);
    panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2325, itablePtrPtr2299);
    panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2326, &$s2327);
    (($fn2329) p_out->$class->vtable[19])(p_out, $tmp2328);
    panda$core$String* $tmp2331 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2330 = $tmp2331;
    panda$core$String* $tmp2332 = panda$core$String$convert$R$panda$core$String(itableClassPtr2330);
    panda$core$String* $tmp2334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, &$s2333);
    panda$core$String* $tmp2335 = panda$core$String$convert$R$panda$core$String(itablePtr2321);
    panda$core$String* $tmp2337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2335, &$s2336);
    panda$core$String* $tmp2339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2337, &$s2338);
    panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2339, &$s2340);
    panda$core$String* $tmp2342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2334, $tmp2341);
    (($fn2343) p_out->$class->vtable[19])(p_out, $tmp2342);
    panda$core$String* $tmp2345 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2344 = $tmp2345;
    panda$core$String* $tmp2346 = panda$core$String$convert$R$panda$core$String(itableClass2344);
    panda$core$String* $tmp2348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2346, &$s2347);
    panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2348, classType2234);
    panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2349, &$s2350);
    panda$core$String* $tmp2352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2351, classType2234);
    panda$core$String* $tmp2354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2352, &$s2353);
    panda$core$String* $tmp2355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2354, itableClassPtr2330);
    panda$core$String* $tmp2357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2355, &$s2356);
    (($fn2358) p_out->$class->vtable[19])(p_out, $tmp2357);
    panda$core$String* $tmp2360 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2359 = $tmp2360;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2362 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2361 = $tmp2362;
    panda$core$String* $tmp2363 = panda$core$String$convert$R$panda$core$String(test2359);
    panda$core$String* $tmp2365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2363, &$s2364);
    panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2365, classType2234);
    panda$core$String* $tmp2368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2366, &$s2367);
    panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2368, intfCC2361->type);
    panda$core$String* $tmp2371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2369, &$s2370);
    panda$core$String* $tmp2372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2371, intfCC2361->name);
    panda$core$String* $tmp2374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2372, &$s2373);
    panda$core$String* $tmp2375 = panda$core$String$convert$R$panda$core$String(classType2234);
    panda$core$String* $tmp2377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2375, &$s2376);
    panda$core$String* $tmp2378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2377, itableClass2344);
    panda$core$String* $tmp2380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2378, &$s2379);
    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2374, $tmp2380);
    (($fn2382) p_out->$class->vtable[19])(p_out, $tmp2381);
    panda$core$String* $tmp2384 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2383 = $tmp2384;
    panda$core$String* $tmp2386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2385, test2359);
    panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2386, &$s2387);
    panda$core$String* $tmp2389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2388, success2383);
    panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2389, &$s2390);
    panda$core$String* $tmp2392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2391, fail2301);
    panda$core$String* $tmp2394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2392, &$s2393);
    (($fn2395) p_out->$class->vtable[19])(p_out, $tmp2394);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, fail2301, p_out);
    panda$core$String* $tmp2396 = panda$core$String$convert$R$panda$core$String(itableNext2294);
    panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2396, &$s2397);
    panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2398, itablePtr2321);
    panda$core$String* $tmp2401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2399, &$s2400);
    panda$core$String* $tmp2403 = panda$core$String$convert$R$panda$core$String(&$s2402);
    panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2403, &$s2404);
    panda$core$String* $tmp2406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2401, $tmp2405);
    (($fn2407) p_out->$class->vtable[19])(p_out, $tmp2406);
    panda$core$String* $tmp2409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2408, next2285);
    panda$core$String* $tmp2411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2409, &$s2410);
    (($fn2412) p_out->$class->vtable[19])(p_out, $tmp2411);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, success2383, p_out);
    index2413 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2415 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2414 = $tmp2415;
    ITable* $tmp2417 = ((panda$collections$CollectionView*) vtable2414)->$class->itable;
    while ($tmp2417->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2417 = $tmp2417->next;
    }
    $fn2419 $tmp2418 = $tmp2417->methods[0];
    panda$core$Int64 $tmp2420 = $tmp2418(((panda$collections$CollectionView*) vtable2414));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2416, ((panda$core$Int64) { 0 }), $tmp2420, ((panda$core$Bit) { false }));
    int64_t $tmp2422 = $tmp2416.min.value;
    panda$core$Int64 i2421 = { $tmp2422 };
    int64_t $tmp2424 = $tmp2416.max.value;
    bool $tmp2425 = $tmp2416.inclusive.value;
    if ($tmp2425) goto $l2432; else goto $l2433;
    $l2432:;
    if ($tmp2422 <= $tmp2424) goto $l2426; else goto $l2428;
    $l2433:;
    if ($tmp2422 < $tmp2424) goto $l2426; else goto $l2428;
    $l2426:;
    {
        ITable* $tmp2434 = vtable2414->$class->itable;
        while ($tmp2434->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2434 = $tmp2434->next;
        }
        $fn2436 $tmp2435 = $tmp2434->methods[0];
        panda$core$Object* $tmp2437 = $tmp2435(vtable2414, i2421);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2437)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2413 = i2421;
            goto $l2428;
        }
        }
    }
    $l2429:;
    int64_t $tmp2439 = $tmp2424 - i2421.value;
    if ($tmp2425) goto $l2440; else goto $l2441;
    $l2440:;
    if ($tmp2439 >= 1) goto $l2438; else goto $l2428;
    $l2441:;
    if ($tmp2439 > 1) goto $l2438; else goto $l2428;
    $l2438:;
    i2421.value += 1;
    goto $l2426;
    $l2428:;
    org$pandalanguage$pandac$Type* $tmp2444 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2445 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2444);
    panda$collections$ListView* $tmp2446 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2445);
    ITable* $tmp2447 = ((panda$collections$CollectionView*) $tmp2446)->$class->itable;
    while ($tmp2447->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2447 = $tmp2447->next;
    }
    $fn2449 $tmp2448 = $tmp2447->methods[0];
    panda$core$Int64 $tmp2450 = $tmp2448(((panda$collections$CollectionView*) $tmp2446));
    panda$core$Int64 $tmp2451 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2413, $tmp2450);
    index2413 = $tmp2451;
    panda$core$Bit $tmp2452 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2413, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2452.value);
    panda$core$String* $tmp2454 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2453 = $tmp2454;
    panda$core$String* $tmp2455 = panda$core$String$convert$R$panda$core$String(methodPtrPtr2453);
    panda$core$String* $tmp2457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2455, &$s2456);
    panda$core$String* $tmp2458 = panda$core$String$convert$R$panda$core$String(itablePtr2321);
    panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2458, &$s2459);
    panda$core$String* $tmp2462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2460, &$s2461);
    panda$core$String* $tmp2464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2462, &$s2463);
    panda$core$String* $tmp2465 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2464, ((panda$core$Object*) wrap_panda$core$Int64(index2413)));
    panda$core$String* $tmp2467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2465, &$s2466);
    panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2457, $tmp2467);
    (($fn2469) p_out->$class->vtable[19])(p_out, $tmp2468);
    panda$core$String* $tmp2471 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2470 = $tmp2471;
    panda$core$String* $tmp2472 = panda$core$String$convert$R$panda$core$String(cast2470);
    panda$core$String* $tmp2474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2472, &$s2473);
    panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2474, methodPtrPtr2453);
    panda$core$String* $tmp2477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2475, &$s2476);
    panda$core$String* $tmp2478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2477, methodType2200);
    panda$core$String* $tmp2480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2478, &$s2479);
    (($fn2481) p_out->$class->vtable[19])(p_out, $tmp2480);
    panda$core$String* $tmp2483 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2482 = $tmp2483;
    panda$core$String* $tmp2484 = panda$core$String$convert$R$panda$core$String(methodPtr2482);
    panda$core$String* $tmp2486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2484, &$s2485);
    panda$core$String* $tmp2487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2486, methodType2200);
    panda$core$String* $tmp2489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2487, &$s2488);
    panda$core$String* $tmp2490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2489, methodType2200);
    panda$core$String* $tmp2492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2490, &$s2491);
    panda$core$String* $tmp2493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2492, cast2470);
    panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2493, &$s2494);
    (($fn2496) p_out->$class->vtable[19])(p_out, $tmp2495);
    return methodPtr2482;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp2498 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2497 = $tmp2498.value;
    if (!$tmp2497) goto $l2499;
    panda$core$Bit $tmp2500 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2497 = $tmp2500.value;
    $l2499:;
    panda$core$Bit $tmp2501 = { $tmp2497 };
    if ($tmp2501.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2502.value) {
        {
            panda$core$String* $tmp2503 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2503;
        }
        }
        else {
        {
            panda$core$String* $tmp2504 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2504;
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
        panda$core$String* $tmp2505 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2505;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2506;
    panda$core$String* $match$1271_92507;
    panda$core$String* countStruct2512;
    panda$core$String* count2515;
    panda$core$String* size2524;
    panda$core$Int64 elementSize2526;
    panda$core$String* malloc2545;
    panda$core$String* result2558;
    panda$core$String* ptr2576;
    panda$core$String* baseType2579;
    panda$core$String* ptrType2582;
    panda$core$String* cast2585;
    panda$core$String* load2597;
    panda$core$String* ptr2616;
    panda$core$String* baseType2619;
    panda$core$String* ptrType2622;
    panda$core$String* cast2625;
    panda$core$String* indexStruct2637;
    panda$core$String* index2640;
    panda$core$String* offsetPtr2649;
    panda$core$String* load2669;
    panda$core$String* ptr2688;
    panda$core$String* ptrCast2691;
    panda$core$String* countStruct2700;
    panda$core$String* count2703;
    panda$core$String* size2712;
    panda$core$String* realloc2729;
    panda$core$String* result2746;
    panda$core$String* ptr2764;
    panda$core$String* baseType2767;
    panda$core$String* offsetStruct2771;
    panda$core$String* offset2774;
    panda$core$String* result2783;
    m2506 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$1271_92507 = ((org$pandalanguage$pandac$Symbol*) m2506->value)->name;
        panda$core$Bit $tmp2509 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1271_92507, &$s2508);
        if ($tmp2509.value) {
        {
            panda$core$Int64 $tmp2510 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2510, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2511.value);
            panda$core$Object* $tmp2513 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2514 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2513), p_out);
            countStruct2512 = $tmp2514;
            panda$core$String* $tmp2516 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2515 = $tmp2516;
            panda$core$String* $tmp2517 = panda$core$String$convert$R$panda$core$String(count2515);
            panda$core$String* $tmp2519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2517, &$s2518);
            panda$core$String* $tmp2520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2519, countStruct2512);
            panda$core$String* $tmp2522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2520, &$s2521);
            (($fn2523) p_out->$class->vtable[19])(p_out, $tmp2522);
            panda$core$String* $tmp2525 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2524 = $tmp2525;
            org$pandalanguage$pandac$Type* $tmp2527 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2506);
            panda$core$Object* $tmp2528 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2527->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2529 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2528));
            elementSize2526 = $tmp2529;
            panda$core$Bit $tmp2530 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2526, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2530.value);
            panda$core$String* $tmp2531 = panda$core$String$convert$R$panda$core$String(size2524);
            panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, &$s2532);
            panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, &$s2534);
            panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2535, &$s2536);
            panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, count2515);
            panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2538, &$s2539);
            panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2540, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2526)));
            panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2542);
            (($fn2544) p_out->$class->vtable[19])(p_out, $tmp2543);
            panda$core$String* $tmp2546 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2545 = $tmp2546;
            panda$core$String* $tmp2547 = panda$core$String$convert$R$panda$core$String(malloc2545);
            panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2547, &$s2548);
            panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2549, &$s2550);
            panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2551, &$s2552);
            panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, size2524);
            panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, &$s2555);
            (($fn2557) p_out->$class->vtable[19])(p_out, $tmp2556);
            panda$core$String* $tmp2559 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2558 = $tmp2559;
            panda$core$String* $tmp2560 = panda$core$String$convert$R$panda$core$String(result2558);
            panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, &$s2561);
            panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2562, malloc2545);
            panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, &$s2564);
            org$pandalanguage$pandac$Type* $tmp2566 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2506);
            panda$core$String* $tmp2567 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2566);
            panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, $tmp2567);
            panda$core$String* $tmp2570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2568, &$s2569);
            (($fn2571) p_out->$class->vtable[19])(p_out, $tmp2570);
            return result2558;
        }
        }
        else {
        panda$core$Bit $tmp2573 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1271_92507, &$s2572);
        if ($tmp2573.value) {
        {
            panda$core$Int64 $tmp2574 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2574, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2575.value);
            panda$core$Object* $tmp2577 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2578 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2577), p_out);
            ptr2576 = $tmp2578;
            org$pandalanguage$pandac$Type* $tmp2580 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2506);
            panda$core$String* $tmp2581 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2580);
            baseType2579 = $tmp2581;
            panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2579, &$s2583);
            ptrType2582 = $tmp2584;
            panda$core$String* $tmp2586 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2585 = $tmp2586;
            panda$core$String* $tmp2587 = panda$core$String$convert$R$panda$core$String(cast2585);
            panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, &$s2588);
            panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2589, ptr2576);
            panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, &$s2591);
            panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2592, ptrType2582);
            panda$core$String* $tmp2595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, &$s2594);
            (($fn2596) p_out->$class->vtable[19])(p_out, $tmp2595);
            panda$core$String* $tmp2598 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2597 = $tmp2598;
            panda$core$String* $tmp2599 = panda$core$String$convert$R$panda$core$String(load2597);
            panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, &$s2600);
            panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, baseType2579);
            panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2602, &$s2603);
            panda$core$String* $tmp2605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, ptrType2582);
            panda$core$String* $tmp2607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2605, &$s2606);
            panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2607, cast2585);
            panda$core$String* $tmp2610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, &$s2609);
            (($fn2611) p_out->$class->vtable[19])(p_out, $tmp2610);
            return load2597;
        }
        }
        else {
        panda$core$Bit $tmp2613 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1271_92507, &$s2612);
        if ($tmp2613.value) {
        {
            panda$core$Int64 $tmp2614 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2614, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2615.value);
            panda$core$Object* $tmp2617 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2618 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2617), p_out);
            ptr2616 = $tmp2618;
            org$pandalanguage$pandac$Type* $tmp2620 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2506);
            panda$core$String* $tmp2621 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2620);
            baseType2619 = $tmp2621;
            panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2619, &$s2623);
            ptrType2622 = $tmp2624;
            panda$core$String* $tmp2626 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2625 = $tmp2626;
            panda$core$String* $tmp2627 = panda$core$String$convert$R$panda$core$String(cast2625);
            panda$core$String* $tmp2629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, &$s2628);
            panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2629, ptr2616);
            panda$core$String* $tmp2632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2630, &$s2631);
            panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2632, ptrType2622);
            panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2633, &$s2634);
            (($fn2636) p_out->$class->vtable[19])(p_out, $tmp2635);
            panda$core$Object* $tmp2638 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2639 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2638), p_out);
            indexStruct2637 = $tmp2639;
            panda$core$String* $tmp2641 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2640 = $tmp2641;
            panda$core$String* $tmp2642 = panda$core$String$convert$R$panda$core$String(index2640);
            panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2643);
            panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, indexStruct2637);
            panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2645, &$s2646);
            (($fn2648) p_out->$class->vtable[19])(p_out, $tmp2647);
            panda$core$String* $tmp2650 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2649 = $tmp2650;
            panda$core$String* $tmp2651 = panda$core$String$convert$R$panda$core$String(offsetPtr2649);
            panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, &$s2652);
            panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2653, baseType2619);
            panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, &$s2655);
            panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, ptrType2622);
            panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, &$s2658);
            panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2659, cast2625);
            panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, &$s2661);
            panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2663, index2640);
            panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, &$s2665);
            panda$core$String* $tmp2667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2662, $tmp2666);
            (($fn2668) p_out->$class->vtable[19])(p_out, $tmp2667);
            panda$core$String* $tmp2670 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2669 = $tmp2670;
            panda$core$String* $tmp2671 = panda$core$String$convert$R$panda$core$String(load2669);
            panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, &$s2672);
            panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2673, baseType2619);
            panda$core$String* $tmp2676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2674, &$s2675);
            panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2676, ptrType2622);
            panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, &$s2678);
            panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, offsetPtr2649);
            panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2680, &$s2681);
            (($fn2683) p_out->$class->vtable[19])(p_out, $tmp2682);
            return load2669;
        }
        }
        else {
        panda$core$Bit $tmp2685 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1271_92507, &$s2684);
        if ($tmp2685.value) {
        {
            panda$core$Int64 $tmp2686 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2686, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2687.value);
            panda$core$Object* $tmp2689 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2690 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2689), p_out);
            ptr2688 = $tmp2690;
            panda$core$String* $tmp2692 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2691 = $tmp2692;
            panda$core$String* $tmp2693 = panda$core$String$convert$R$panda$core$String(ptrCast2691);
            panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2693, &$s2694);
            panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, ptr2688);
            panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2696, &$s2697);
            (($fn2699) p_out->$class->vtable[19])(p_out, $tmp2698);
            panda$core$Object* $tmp2701 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2702 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2701), p_out);
            countStruct2700 = $tmp2702;
            panda$core$String* $tmp2704 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2703 = $tmp2704;
            panda$core$String* $tmp2705 = panda$core$String$convert$R$panda$core$String(count2703);
            panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, &$s2706);
            panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2707, countStruct2700);
            panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, &$s2709);
            (($fn2711) p_out->$class->vtable[19])(p_out, $tmp2710);
            panda$core$String* $tmp2713 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2712 = $tmp2713;
            panda$core$String* $tmp2714 = panda$core$String$convert$R$panda$core$String(size2712);
            panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2714, &$s2715);
            panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, &$s2717);
            panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
            panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, count2703);
            panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, &$s2722);
            org$pandalanguage$pandac$Type* $tmp2724 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2506);
            panda$core$Object* $tmp2725 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2724->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2726 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2725));
            panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2723, ((panda$core$Object*) wrap_panda$core$Int64($tmp2726)));
            (($fn2728) p_out->$class->vtable[19])(p_out, $tmp2727);
            panda$core$String* $tmp2730 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2729 = $tmp2730;
            panda$core$String* $tmp2731 = panda$core$String$convert$R$panda$core$String(realloc2729);
            panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2731, &$s2732);
            panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, ptrCast2691);
            panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2734, &$s2735);
            panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, &$s2737);
            panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, &$s2739);
            panda$core$String* $tmp2741 = panda$core$String$convert$R$panda$core$String(size2712);
            panda$core$String* $tmp2743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2741, &$s2742);
            panda$core$String* $tmp2744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2740, $tmp2743);
            (($fn2745) p_out->$class->vtable[19])(p_out, $tmp2744);
            panda$core$String* $tmp2747 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2746 = $tmp2747;
            panda$core$String* $tmp2748 = panda$core$String$convert$R$panda$core$String(result2746);
            panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2748, &$s2749);
            panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2750, realloc2729);
            panda$core$String* $tmp2753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, &$s2752);
            org$pandalanguage$pandac$Type* $tmp2754 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2506);
            panda$core$String* $tmp2755 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2754);
            panda$core$String* $tmp2756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2753, $tmp2755);
            panda$core$String* $tmp2758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2756, &$s2757);
            (($fn2759) p_out->$class->vtable[19])(p_out, $tmp2758);
            return result2746;
        }
        }
        else {
        panda$core$Bit $tmp2761 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1271_92507, &$s2760);
        if ($tmp2761.value) {
        {
            panda$core$Int64 $tmp2762 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2762, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2763.value);
            panda$core$Object* $tmp2765 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2766 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2765), p_out);
            ptr2764 = $tmp2766;
            panda$core$Object* $tmp2768 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2769 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2768)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2770 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2769));
            baseType2767 = $tmp2770;
            panda$core$Object* $tmp2772 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2773 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2772), p_out);
            offsetStruct2771 = $tmp2773;
            panda$core$String* $tmp2775 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2774 = $tmp2775;
            panda$core$String* $tmp2776 = panda$core$String$convert$R$panda$core$String(offset2774);
            panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, &$s2777);
            panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, offsetStruct2771);
            panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, &$s2780);
            (($fn2782) p_out->$class->vtable[19])(p_out, $tmp2781);
            panda$core$String* $tmp2784 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2783 = $tmp2784;
            panda$core$String* $tmp2785 = panda$core$String$convert$R$panda$core$String(result2783);
            panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2785, &$s2786);
            panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2787, baseType2767);
            panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, &$s2789);
            panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, ptr2764);
            panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, &$s2792);
            panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, offset2774);
            panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2794, &$s2795);
            (($fn2797) p_out->$class->vtable[19])(p_out, $tmp2796);
            return result2783;
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
    org$pandalanguage$pandac$MethodDecl* m2798;
    panda$core$String* selfRef2799;
    panda$core$Int64 argStart2801;
    panda$core$String* selfLoad2815;
    panda$core$String* t2817;
    panda$collections$Array* args2833;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2836;
    panda$core$String* end2859;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2868;
    org$pandalanguage$pandac$MethodDecl* old2875;
    panda$core$String* phi2888;
    panda$core$String* separator2898;
    panda$collections$Iterator* ret$Iter2900;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2912;
    m2798 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) m2798->owner));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2798), ((panda$core$Object*) m2798));
    selfRef2799 = &$s2800;
    panda$core$Bit $tmp2802 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2798);
    if ($tmp2802.value) {
    {
        argStart2801 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2803 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2804 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2803), p_out);
        selfRef2799 = $tmp2804;
        panda$core$Bit $tmp2807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->currentMethod->methodKind, ((panda$core$Int64) { 59 }));
        bool $tmp2806 = $tmp2807.value;
        if (!$tmp2806) goto $l2808;
        panda$core$Object* $tmp2809 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2809)->kind, ((panda$core$Int64) { 1025 }));
        $tmp2806 = $tmp2810.value;
        $l2808:;
        panda$core$Bit $tmp2811 = { $tmp2806 };
        bool $tmp2805 = $tmp2811.value;
        if (!$tmp2805) goto $l2812;
        panda$core$Bit $tmp2813 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, self->currentMethod->owner);
        $tmp2805 = $tmp2813.value;
        $l2812:;
        panda$core$Bit $tmp2814 = { $tmp2805 };
        if ($tmp2814.value) {
        {
            panda$core$String* $tmp2816 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            selfLoad2815 = $tmp2816;
            org$pandalanguage$pandac$Type* $tmp2818 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
            panda$core$String* $tmp2819 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2818);
            t2817 = $tmp2819;
            panda$core$String* $tmp2820 = panda$core$String$convert$R$panda$core$String(selfLoad2815);
            panda$core$String* $tmp2822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, &$s2821);
            panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2822, t2817);
            panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, &$s2824);
            panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2825, t2817);
            panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2826, &$s2827);
            panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2828, selfRef2799);
            panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, &$s2830);
            (($fn2832) p_out->$class->vtable[19])(p_out, $tmp2831);
            selfRef2799 = selfLoad2815;
        }
        }
    }
    }
    else {
    {
        argStart2801 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2834 = (panda$collections$Array*) malloc(40);
    $tmp2834->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2834->refCount.value = 1;
    panda$collections$Array$init($tmp2834);
    args2833 = $tmp2834;
    panda$core$Int64 $tmp2837 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2836, argStart2801, $tmp2837, ((panda$core$Bit) { false }));
    int64_t $tmp2839 = $tmp2836.min.value;
    panda$core$Int64 i2838 = { $tmp2839 };
    int64_t $tmp2841 = $tmp2836.max.value;
    bool $tmp2842 = $tmp2836.inclusive.value;
    if ($tmp2842) goto $l2849; else goto $l2850;
    $l2849:;
    if ($tmp2839 <= $tmp2841) goto $l2843; else goto $l2845;
    $l2850:;
    if ($tmp2839 < $tmp2841) goto $l2843; else goto $l2845;
    $l2843:;
    {
        panda$core$Object* $tmp2851 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2838);
        panda$core$String* $tmp2852 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2851), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2833, ((panda$core$Object*) $tmp2852));
    }
    $l2846:;
    int64_t $tmp2854 = $tmp2841 - i2838.value;
    if ($tmp2842) goto $l2855; else goto $l2856;
    $l2855:;
    if ($tmp2854 >= 1) goto $l2853; else goto $l2845;
    $l2856:;
    if ($tmp2854 > 1) goto $l2853; else goto $l2845;
    $l2853:;
    i2838.value += 1;
    goto $l2843;
    $l2845:;
    panda$core$String* $tmp2860 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2859 = $tmp2860;
    panda$core$Int64 $tmp2861 = panda$collections$Array$get_count$R$panda$core$Int64(args2833);
    panda$core$Int64 $tmp2862 = panda$collections$Array$get_count$R$panda$core$Int64(m2798->parameters);
    panda$core$Bit $tmp2863 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2861, $tmp2862);
    if ($tmp2863.value) {
    {
        panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2864, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, &$s2866);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2867));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2869 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2869->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2869->refCount.value = 1;
    panda$core$String* $tmp2872 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2871, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2872, &$s2873);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2869, $tmp2874, selfRef2799, ((panda$collections$ListView*) args2833), end2859);
    inline2868 = $tmp2869;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2868));
    old2875 = self->currentMethod;
    self->currentMethod = m2798;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_body, p_out);
    self->currentMethod = old2875;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2876 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2877 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2876);
    if ($tmp2877.value) {
    {
        (($fn2879) p_out->$class->vtable[19])(p_out, &$s2878);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end2859, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2798));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    panda$core$Int64 $tmp2880 = panda$collections$Array$get_count$R$panda$core$Int64(inline2868->returns);
    panda$core$Bit $tmp2881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2880, ((panda$core$Int64) { 1 }));
    if ($tmp2881.value) {
    {
        panda$core$Object* $tmp2882 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2868->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2882)->second);
    }
    }
    panda$core$Int64 $tmp2883 = panda$collections$Array$get_count$R$panda$core$Int64(inline2868->returns);
    panda$core$Bit $tmp2884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2883, ((panda$core$Int64) { 0 }));
    if ($tmp2884.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
        (($fn2886) p_out->$class->vtable[19])(p_out, &$s2885);
        return &$s2887;
    }
    }
    panda$core$String* $tmp2889 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2888 = $tmp2889;
    panda$core$String* $tmp2890 = panda$core$String$convert$R$panda$core$String(phi2888);
    panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2890, &$s2891);
    panda$core$String* $tmp2893 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2798->returnType);
    panda$core$String* $tmp2894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2892, $tmp2893);
    panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2894, &$s2895);
    (($fn2897) p_out->$class->vtable[16])(p_out, $tmp2896);
    separator2898 = &$s2899;
    {
        ITable* $tmp2901 = ((panda$collections$Iterable*) inline2868->returns)->$class->itable;
        while ($tmp2901->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2901 = $tmp2901->next;
        }
        $fn2903 $tmp2902 = $tmp2901->methods[0];
        panda$collections$Iterator* $tmp2904 = $tmp2902(((panda$collections$Iterable*) inline2868->returns));
        ret$Iter2900 = $tmp2904;
        $l2905:;
        ITable* $tmp2907 = ret$Iter2900->$class->itable;
        while ($tmp2907->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2907 = $tmp2907->next;
        }
        $fn2909 $tmp2908 = $tmp2907->methods[0];
        panda$core$Bit $tmp2910 = $tmp2908(ret$Iter2900);
        panda$core$Bit $tmp2911 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2910);
        if (!$tmp2911.value) goto $l2906;
        {
            ITable* $tmp2913 = ret$Iter2900->$class->itable;
            while ($tmp2913->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2913 = $tmp2913->next;
            }
            $fn2915 $tmp2914 = $tmp2913->methods[1];
            panda$core$Object* $tmp2916 = $tmp2914(ret$Iter2900);
            ret2912 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2916);
            panda$core$String* $tmp2917 = panda$core$String$convert$R$panda$core$String(separator2898);
            panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, &$s2918);
            panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, ((panda$core$String*) ret2912->second));
            panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2920, &$s2921);
            panda$core$String* $tmp2923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, ((panda$core$String*) ret2912->first));
            panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2923, &$s2924);
            (($fn2926) p_out->$class->vtable[16])(p_out, $tmp2925);
            separator2898 = &$s2927;
        }
        goto $l2905;
        $l2906:;
    }
    (($fn2928) p_out->$class->vtable[17])(p_out);
    return phi2888;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2930;
    panda$core$String* bit2940;
    panda$core$String* result2944;
    panda$core$String* bit2958;
    panda$core$String* result2962;
    org$pandalanguage$pandac$IRNode* block2977;
    panda$collections$Array* args2981;
    org$pandalanguage$pandac$Type* actualMethodType2985;
    panda$core$String* actualResultType2986;
    panda$core$Bit isSuper2987;
    panda$core$Int64 offset3007;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3012;
    panda$core$String* arg3027;
    panda$core$String* target3059;
    panda$core$String* methodRef3063;
    panda$core$String* result3065;
    panda$core$Bit indirect3066;
    panda$core$String* separator3091;
    panda$core$String* indirectVar3093;
    panda$collections$Iterator* arg$Iter3112;
    panda$core$String* arg3124;
    panda$core$Bit $tmp2929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2929.value);
    m2930 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2932 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2930->owner)->name, &$s2931);
    if ($tmp2932.value) {
    {
        panda$core$String* $tmp2933 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2933;
    }
    }
    if (m2930->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2930);
    }
    }
    panda$core$Bit $tmp2935 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2930->owner)->name, &$s2934);
    if ($tmp2935.value) {
    {
        panda$core$Bit $tmp2937 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2930)->name, &$s2936);
        if ($tmp2937.value) {
        {
            panda$core$Int64 $tmp2938 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2938, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2939.value);
            panda$core$Object* $tmp2941 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2942 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2943 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2941), ((org$pandalanguage$pandac$IRNode*) $tmp2942), p_out);
            bit2940 = $tmp2943;
            panda$core$String* $tmp2945 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2944 = $tmp2945;
            panda$core$String* $tmp2946 = panda$core$String$convert$R$panda$core$String(result2944);
            panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, &$s2947);
            panda$core$String* $tmp2949 = panda$core$String$convert$R$panda$core$String(bit2940);
            panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, &$s2950);
            panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, $tmp2951);
            (($fn2953) p_out->$class->vtable[19])(p_out, $tmp2952);
            return result2944;
        }
        }
        panda$core$Bit $tmp2955 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2930)->name, &$s2954);
        if ($tmp2955.value) {
        {
            panda$core$Int64 $tmp2956 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2956, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2957.value);
            panda$core$Object* $tmp2959 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2960 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2961 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2959), ((org$pandalanguage$pandac$IRNode*) $tmp2960), p_out);
            bit2958 = $tmp2961;
            panda$core$String* $tmp2963 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2962 = $tmp2963;
            panda$core$String* $tmp2964 = panda$core$String$convert$R$panda$core$String(result2962);
            panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2964, &$s2965);
            panda$core$String* $tmp2967 = panda$core$String$convert$R$panda$core$String(bit2958);
            panda$core$String* $tmp2969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2967, &$s2968);
            panda$core$String* $tmp2970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, $tmp2969);
            (($fn2971) p_out->$class->vtable[19])(p_out, $tmp2970);
            return result2962;
        }
        }
    }
    }
    panda$core$Bit $tmp2973 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2930->annotations);
    bool $tmp2972 = $tmp2973.value;
    if (!$tmp2972) goto $l2974;
    panda$core$Object* $tmp2975 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2930));
    $tmp2972 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp2975) == NULL }).value;
    $l2974:;
    panda$core$Bit $tmp2976 = { $tmp2972 };
    if ($tmp2976.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2978 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2930);
        block2977 = $tmp2978;
        if (((panda$core$Bit) { block2977 != NULL }).value) {
        {
            panda$core$String* $tmp2979 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, block2977, p_out);
            return $tmp2979;
        }
        }
        return &$s2980;
    }
    }
    panda$collections$Array* $tmp2982 = (panda$collections$Array*) malloc(40);
    $tmp2982->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2982->refCount.value = 1;
    panda$core$Int64 $tmp2984 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp2982, $tmp2984);
    args2981 = $tmp2982;
    panda$core$Int64 $tmp2989 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2990 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2989, ((panda$core$Int64) { 1 }));
    bool $tmp2988 = $tmp2990.value;
    if (!$tmp2988) goto $l2991;
    panda$core$Object* $tmp2992 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2992)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2988 = $tmp2993.value;
    $l2991:;
    panda$core$Bit $tmp2994 = { $tmp2988 };
    isSuper2987 = $tmp2994;
    panda$core$Bit $tmp2996 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2987);
    bool $tmp2995 = $tmp2996.value;
    if (!$tmp2995) goto $l2997;
    panda$core$Bit $tmp2998 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2930);
    $tmp2995 = $tmp2998.value;
    $l2997:;
    panda$core$Bit $tmp2999 = { $tmp2995 };
    if ($tmp2999.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3000 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2930);
        actualMethodType2985 = $tmp3000;
        panda$core$Int64 $tmp3001 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2985->subtypes);
        panda$core$Int64 $tmp3002 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3001, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3003 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2985->subtypes, $tmp3002);
        panda$core$String* $tmp3004 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3003));
        actualResultType2986 = $tmp3004;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3005 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2930);
        actualMethodType2985 = $tmp3005;
        panda$core$String* $tmp3006 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2986 = $tmp3006;
    }
    }
    panda$core$Int64 $tmp3008 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp3009 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2985->subtypes);
    panda$core$Int64 $tmp3010 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3008, $tmp3009);
    panda$core$Int64 $tmp3011 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp3010, ((panda$core$Int64) { 1 }));
    offset3007 = $tmp3011;
    panda$core$Int64 $tmp3013 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3012, ((panda$core$Int64) { 0 }), $tmp3013, ((panda$core$Bit) { false }));
    int64_t $tmp3015 = $tmp3012.min.value;
    panda$core$Int64 i3014 = { $tmp3015 };
    int64_t $tmp3017 = $tmp3012.max.value;
    bool $tmp3018 = $tmp3012.inclusive.value;
    if ($tmp3018) goto $l3025; else goto $l3026;
    $l3025:;
    if ($tmp3015 <= $tmp3017) goto $l3019; else goto $l3021;
    $l3026:;
    if ($tmp3015 < $tmp3017) goto $l3019; else goto $l3021;
    $l3019:;
    {
        panda$core$Object* $tmp3028 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i3014);
        panda$core$String* $tmp3029 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3028), p_out);
        arg3027 = $tmp3029;
        panda$core$Bit $tmp3031 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i3014, offset3007);
        bool $tmp3030 = $tmp3031.value;
        if (!$tmp3030) goto $l3032;
        panda$core$Int64 $tmp3033 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3014, offset3007);
        panda$core$Object* $tmp3034 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2985->subtypes, $tmp3033);
        panda$core$Object* $tmp3035 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i3014);
        panda$core$Bit $tmp3036 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3034), ((org$pandalanguage$pandac$IRNode*) $tmp3035)->type);
        $tmp3030 = $tmp3036.value;
        $l3032:;
        panda$core$Bit $tmp3037 = { $tmp3030 };
        if ($tmp3037.value) {
        {
            panda$core$Int64 $tmp3038 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3014, offset3007);
            panda$core$Object* $tmp3039 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2985->subtypes, $tmp3038);
            panda$core$String* $tmp3040 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3039));
            panda$core$String* $tmp3042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3040, &$s3041);
            panda$core$Object* $tmp3043 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i3014);
            panda$core$Int64 $tmp3044 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3014, offset3007);
            panda$core$Object* $tmp3045 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2985->subtypes, $tmp3044);
            panda$core$String* $tmp3046 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg3027, ((org$pandalanguage$pandac$IRNode*) $tmp3043)->type, ((org$pandalanguage$pandac$Type*) $tmp3045), p_out);
            panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3042, $tmp3046);
            arg3027 = $tmp3047;
        }
        }
        else {
        {
            panda$core$Object* $tmp3048 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i3014);
            panda$core$String* $tmp3049 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3048)->type);
            panda$core$String* $tmp3051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3049, &$s3050);
            panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3051, arg3027);
            arg3027 = $tmp3052;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2981, ((panda$core$Object*) arg3027));
    }
    $l3022:;
    int64_t $tmp3054 = $tmp3017 - i3014.value;
    if ($tmp3018) goto $l3055; else goto $l3056;
    $l3055:;
    if ($tmp3054 >= 1) goto $l3053; else goto $l3021;
    $l3056:;
    if ($tmp3054 > 1) goto $l3053; else goto $l3021;
    $l3053:;
    i3014.value += 1;
    goto $l3019;
    $l3021:;
    panda$core$Int64 $tmp3060 = panda$collections$Array$get_count$R$panda$core$Int64(args2981);
    panda$core$Bit $tmp3061 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3060, ((panda$core$Int64) { 0 }));
    if ($tmp3061.value) {
    {
        panda$core$Object* $tmp3062 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2981, ((panda$core$Int64) { 0 }));
        target3059 = ((panda$core$String*) $tmp3062);
    }
    }
    else {
    {
        target3059 = NULL;
    }
    }
    panda$core$String* $tmp3064 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, target3059, m2930, isSuper2987, p_out);
    methodRef3063 = $tmp3064;
    panda$core$Bit $tmp3067 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2930);
    indirect3066 = $tmp3067;
    if (indirect3066.value) {
    {
        panda$core$String* $tmp3069 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2930);
        panda$core$String* $tmp3070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3068, $tmp3069);
        panda$core$String* $tmp3072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3070, &$s3071);
        (($fn3073) p_out->$class->vtable[16])(p_out, $tmp3072);
    }
    }
    else {
    {
        panda$core$String* $tmp3074 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3065 = $tmp3074;
        panda$core$String* $tmp3075 = panda$core$String$convert$R$panda$core$String(result3065);
        panda$core$String* $tmp3077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3075, &$s3076);
        panda$core$String* $tmp3078 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2930);
        panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3077, $tmp3078);
        panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3079, &$s3080);
        panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, actualResultType2986);
        panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3082, &$s3083);
        (($fn3085) p_out->$class->vtable[16])(p_out, $tmp3084);
    }
    }
    panda$core$String* $tmp3087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3086, methodRef3063);
    panda$core$String* $tmp3089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3087, &$s3088);
    (($fn3090) p_out->$class->vtable[16])(p_out, $tmp3089);
    separator3091 = &$s3092;
    if (indirect3066.value) {
    {
        panda$core$Int64 $tmp3094 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3094;
        panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3095, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3093 = $tmp3096;
        panda$core$String* $tmp3097 = panda$core$String$convert$R$panda$core$String(indirectVar3093);
        panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, &$s3098);
        panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, actualResultType2986);
        panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3100, &$s3101);
        (($fn3103) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3102);
        panda$core$String* $tmp3104 = panda$core$String$convert$R$panda$core$String(actualResultType2986);
        panda$core$String* $tmp3106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3104, &$s3105);
        panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3106, indirectVar3093);
        panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, &$s3108);
        (($fn3110) p_out->$class->vtable[16])(p_out, $tmp3109);
        separator3091 = &$s3111;
    }
    }
    {
        ITable* $tmp3113 = ((panda$collections$Iterable*) args2981)->$class->itable;
        while ($tmp3113->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3113 = $tmp3113->next;
        }
        $fn3115 $tmp3114 = $tmp3113->methods[0];
        panda$collections$Iterator* $tmp3116 = $tmp3114(((panda$collections$Iterable*) args2981));
        arg$Iter3112 = $tmp3116;
        $l3117:;
        ITable* $tmp3119 = arg$Iter3112->$class->itable;
        while ($tmp3119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3119 = $tmp3119->next;
        }
        $fn3121 $tmp3120 = $tmp3119->methods[0];
        panda$core$Bit $tmp3122 = $tmp3120(arg$Iter3112);
        panda$core$Bit $tmp3123 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3122);
        if (!$tmp3123.value) goto $l3118;
        {
            ITable* $tmp3125 = arg$Iter3112->$class->itable;
            while ($tmp3125->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3125 = $tmp3125->next;
            }
            $fn3127 $tmp3126 = $tmp3125->methods[1];
            panda$core$Object* $tmp3128 = $tmp3126(arg$Iter3112);
            arg3124 = ((panda$core$String*) $tmp3128);
            panda$core$String* $tmp3129 = panda$core$String$convert$R$panda$core$String(separator3091);
            panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, &$s3130);
            panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3131, arg3124);
            panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3132, &$s3133);
            (($fn3135) p_out->$class->vtable[16])(p_out, $tmp3134);
            separator3091 = &$s3136;
        }
        goto $l3117;
        $l3118:;
    }
    (($fn3138) p_out->$class->vtable[19])(p_out, &$s3137);
    if (indirect3066.value) {
    {
        panda$core$String* $tmp3139 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3065 = $tmp3139;
        panda$core$String* $tmp3140 = panda$core$String$convert$R$panda$core$String(result3065);
        panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3140, &$s3141);
        panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, actualResultType2986);
        panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, &$s3144);
        panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, actualResultType2986);
        panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3146, &$s3147);
        panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3148, indirectVar3093);
        (($fn3150) p_out->$class->vtable[19])(p_out, $tmp3149);
    }
    }
    panda$core$String* $tmp3151 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3152 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3151, actualResultType2986);
    if ($tmp3152.value) {
    {
        panda$core$Int64 $tmp3153 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2985->subtypes);
        panda$core$Int64 $tmp3154 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3153, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3155 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2985->subtypes, $tmp3154);
        panda$core$String* $tmp3156 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, result3065, ((org$pandalanguage$pandac$Type*) $tmp3155), p_call->type, p_out);
        return $tmp3156;
    }
    }
    return result3065;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3157;
    panda$core$String* testStart3160;
    panda$core$String* isNonNull3161;
    panda$core$String* nonNullLabel3174;
    panda$core$String* endLabel3176;
    panda$core$String* unwrapped3189;
    panda$core$String* nonNullValue3192;
    panda$core$String* result3200;
    panda$core$String* mallocRef3221;
    panda$core$String* wrapperTypeName3232;
    panda$core$String* wrapperType3235;
    panda$core$String* wrapperCast3238;
    panda$core$String* classPtr3250;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3266;
    panda$core$String* ccCast3268;
    panda$core$String* refCount3286;
    panda$core$String* target3307;
    panda$core$String* result3341;
    org$pandalanguage$pandac$ClassDecl* $tmp3158 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3157 = $tmp3158;
    PANDA_ASSERT(((panda$core$Bit) { src3157 != NULL }).value);
    panda$core$Bit $tmp3159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3159.value) {
    {
        testStart3160 = self->currentBlock;
        panda$core$String* $tmp3162 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3161 = $tmp3162;
        panda$core$String* $tmp3163 = panda$core$String$convert$R$panda$core$String(isNonNull3161);
        panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, &$s3164);
        panda$core$String* $tmp3166 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, $tmp3166);
        panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, &$s3168);
        panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, p_value);
        panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, &$s3171);
        (($fn3173) p_out->$class->vtable[19])(p_out, $tmp3172);
        panda$core$String* $tmp3175 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3174 = $tmp3175;
        panda$core$String* $tmp3177 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3176 = $tmp3177;
        panda$core$String* $tmp3179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3178, isNonNull3161);
        panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3179, &$s3180);
        panda$core$String* $tmp3182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3181, nonNullLabel3174);
        panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3182, &$s3183);
        panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3184, endLabel3176);
        panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3185, &$s3186);
        (($fn3188) p_out->$class->vtable[19])(p_out, $tmp3187);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3174, p_out);
        panda$core$Object* $tmp3190 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3191 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3190), p_out);
        unwrapped3189 = $tmp3191;
        panda$core$Object* $tmp3193 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3194 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, unwrapped3189, ((org$pandalanguage$pandac$Type*) $tmp3193), p_dstType, p_out);
        nonNullValue3192 = $tmp3194;
        panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3195, endLabel3176);
        panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, &$s3197);
        (($fn3199) p_out->$class->vtable[19])(p_out, $tmp3198);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3176, p_out);
        panda$core$String* $tmp3201 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3200 = $tmp3201;
        panda$core$String* $tmp3202 = panda$core$String$convert$R$panda$core$String(result3200);
        panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3202, &$s3203);
        panda$core$String* $tmp3205 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, $tmp3205);
        panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, &$s3207);
        panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, testStart3160);
        panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3209, &$s3210);
        panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3212, nonNullValue3192);
        panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3213, &$s3214);
        panda$core$String* $tmp3216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3215, nonNullLabel3174);
        panda$core$String* $tmp3218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3216, &$s3217);
        panda$core$String* $tmp3219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3211, $tmp3218);
        (($fn3220) p_out->$class->vtable[19])(p_out, $tmp3219);
        return result3200;
    }
    }
    panda$core$String* $tmp3222 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3221 = $tmp3222;
    panda$core$String* $tmp3223 = panda$core$String$convert$R$panda$core$String(mallocRef3221);
    panda$core$String* $tmp3225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3223, &$s3224);
    org$pandalanguage$pandac$Type* $tmp3226 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3157);
    panda$core$Int64 $tmp3227 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3226);
    panda$core$String* $tmp3228 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3225, ((panda$core$Object*) wrap_panda$core$Int64($tmp3227)));
    panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3228, &$s3229);
    (($fn3231) p_out->$class->vtable[19])(p_out, $tmp3230);
    org$pandalanguage$pandac$Type* $tmp3233 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3157);
    panda$core$String* $tmp3234 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3233);
    wrapperTypeName3232 = $tmp3234;
    org$pandalanguage$pandac$Type* $tmp3236 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3157);
    panda$core$String* $tmp3237 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3236);
    wrapperType3235 = $tmp3237;
    panda$core$String* $tmp3239 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3238 = $tmp3239;
    panda$core$String* $tmp3240 = panda$core$String$convert$R$panda$core$String(wrapperCast3238);
    panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3240, &$s3241);
    panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3242, mallocRef3221);
    panda$core$String* $tmp3245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3243, &$s3244);
    panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3245, wrapperType3235);
    panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, &$s3247);
    (($fn3249) p_out->$class->vtable[19])(p_out, $tmp3248);
    panda$core$String* $tmp3251 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3250 = $tmp3251;
    panda$core$String* $tmp3252 = panda$core$String$convert$R$panda$core$String(classPtr3250);
    panda$core$String* $tmp3254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3252, &$s3253);
    panda$core$String* $tmp3255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3254, wrapperTypeName3232);
    panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3255, &$s3256);
    panda$core$String* $tmp3258 = panda$core$String$convert$R$panda$core$String(wrapperType3235);
    panda$core$String* $tmp3260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3258, &$s3259);
    panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3260, wrapperCast3238);
    panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3261, &$s3262);
    panda$core$String* $tmp3264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3257, $tmp3263);
    (($fn3265) p_out->$class->vtable[19])(p_out, $tmp3264);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3267 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3157);
    cc3266 = $tmp3267;
    panda$core$Bit $tmp3270 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(cc3266->type, &$s3269);
    if ($tmp3270.value) {
    {
        panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3271, cc3266->type);
        panda$core$String* $tmp3274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3272, &$s3273);
        panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3274, cc3266->name);
        panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3275, &$s3276);
        ccCast3268 = $tmp3277;
    }
    }
    else {
    {
        ccCast3268 = cc3266->name;
    }
    }
    panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3278, ccCast3268);
    panda$core$String* $tmp3281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3279, &$s3280);
    panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3281, classPtr3250);
    panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, &$s3283);
    (($fn3285) p_out->$class->vtable[19])(p_out, $tmp3284);
    panda$core$String* $tmp3287 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3286 = $tmp3287;
    panda$core$String* $tmp3288 = panda$core$String$convert$R$panda$core$String(refCount3286);
    panda$core$String* $tmp3290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3288, &$s3289);
    panda$core$String* $tmp3291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3290, wrapperTypeName3232);
    panda$core$String* $tmp3293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3291, &$s3292);
    panda$core$String* $tmp3294 = panda$core$String$convert$R$panda$core$String(wrapperType3235);
    panda$core$String* $tmp3296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3294, &$s3295);
    panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, wrapperCast3238);
    panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3297, &$s3298);
    panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3293, $tmp3299);
    (($fn3301) p_out->$class->vtable[19])(p_out, $tmp3300);
    panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3302, refCount3286);
    panda$core$String* $tmp3305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, &$s3304);
    (($fn3306) p_out->$class->vtable[19])(p_out, $tmp3305);
    panda$core$String* $tmp3308 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3307 = $tmp3308;
    panda$core$String* $tmp3309 = panda$core$String$convert$R$panda$core$String(target3307);
    panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3309, &$s3310);
    panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3311, wrapperTypeName3232);
    panda$core$String* $tmp3314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3312, &$s3313);
    panda$core$String* $tmp3315 = panda$core$String$convert$R$panda$core$String(wrapperType3235);
    panda$core$String* $tmp3317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3315, &$s3316);
    panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3317, wrapperCast3238);
    panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3318, &$s3319);
    panda$core$String* $tmp3321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3314, $tmp3320);
    (($fn3322) p_out->$class->vtable[19])(p_out, $tmp3321);
    panda$core$String* $tmp3324 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3323, $tmp3324);
    panda$core$String* $tmp3327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3325, &$s3326);
    panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3327, p_value);
    panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, &$s3329);
    panda$core$String* $tmp3331 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, $tmp3331);
    panda$core$String* $tmp3334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3332, &$s3333);
    panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3334, target3307);
    panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, &$s3336);
    (($fn3338) p_out->$class->vtable[19])(p_out, $tmp3337);
    panda$core$String* $tmp3339 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3340 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3235, $tmp3339);
    if ($tmp3340.value) {
    {
        panda$core$String* $tmp3342 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3341 = $tmp3342;
        panda$core$String* $tmp3343 = panda$core$String$convert$R$panda$core$String(result3341);
        panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, &$s3344);
        panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3345, wrapperType3235);
        panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, &$s3347);
        panda$core$String* $tmp3349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3348, wrapperCast3238);
        panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3349, &$s3350);
        panda$core$String* $tmp3352 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3351, $tmp3352);
        panda$core$String* $tmp3355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3353, &$s3354);
        (($fn3356) p_out->$class->vtable[19])(p_out, $tmp3355);
        return result3341;
    }
    }
    return wrapperCast3238;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3360;
    panda$core$String* t3361;
    org$pandalanguage$pandac$ClassDecl* cl3365;
    panda$core$String* base3378;
    panda$collections$ListView* fields3381;
    panda$core$Int64$nullable index3383;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3384;
    panda$core$String* result3412;
    panda$core$String* cast3434;
    panda$core$String* ptr3447;
    panda$core$String* result3455;
    panda$core$Bit $tmp3357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3357.value);
    panda$core$Int64 $tmp3358 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3358, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3359.value);
    field3360 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3362 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3360->type);
    t3361 = $tmp3362;
    panda$core$Bit $tmp3363 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3360->annotations);
    if ($tmp3363.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3360->value != NULL }).value);
        panda$core$String* $tmp3364 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, field3360->value, p_out);
        return $tmp3364;
    }
    }
    panda$core$Object* $tmp3366 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3367 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3366)->type);
    cl3365 = $tmp3367;
    PANDA_ASSERT(((panda$core$Bit) { cl3365 != NULL }).value);
    panda$core$Bit $tmp3369 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3365);
    bool $tmp3368 = $tmp3369.value;
    if (!$tmp3368) goto $l3370;
    panda$core$Object* $tmp3372 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3373 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3372)->kind, ((panda$core$Int64) { 1025 }));
    bool $tmp3371 = $tmp3373.value;
    if ($tmp3371) goto $l3374;
    panda$core$Bit $tmp3375 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->currentMethod->methodKind, ((panda$core$Int64) { 59 }));
    $tmp3371 = $tmp3375.value;
    $l3374:;
    panda$core$Bit $tmp3376 = { $tmp3371 };
    $tmp3368 = $tmp3376.value;
    $l3370:;
    panda$core$Bit $tmp3377 = { $tmp3368 };
    if ($tmp3377.value) {
    {
        panda$core$Object* $tmp3379 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3380 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3379), p_out);
        base3378 = $tmp3380;
        panda$collections$ListView* $tmp3382 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3365);
        fields3381 = $tmp3382;
        index3383 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3385 = ((panda$collections$CollectionView*) fields3381)->$class->itable;
        while ($tmp3385->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3385 = $tmp3385->next;
        }
        $fn3387 $tmp3386 = $tmp3385->methods[0];
        panda$core$Int64 $tmp3388 = $tmp3386(((panda$collections$CollectionView*) fields3381));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3384, ((panda$core$Int64) { 0 }), $tmp3388, ((panda$core$Bit) { false }));
        int64_t $tmp3390 = $tmp3384.min.value;
        panda$core$Int64 i3389 = { $tmp3390 };
        int64_t $tmp3392 = $tmp3384.max.value;
        bool $tmp3393 = $tmp3384.inclusive.value;
        if ($tmp3393) goto $l3400; else goto $l3401;
        $l3400:;
        if ($tmp3390 <= $tmp3392) goto $l3394; else goto $l3396;
        $l3401:;
        if ($tmp3390 < $tmp3392) goto $l3394; else goto $l3396;
        $l3394:;
        {
            ITable* $tmp3402 = fields3381->$class->itable;
            while ($tmp3402->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3402 = $tmp3402->next;
            }
            $fn3404 $tmp3403 = $tmp3402->methods[0];
            panda$core$Object* $tmp3405 = $tmp3403(fields3381, i3389);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3405)) == ((panda$core$Object*) field3360) }).value) {
            {
                index3383 = ((panda$core$Int64$nullable) { i3389, true });
                goto $l3396;
            }
            }
        }
        $l3397:;
        int64_t $tmp3407 = $tmp3392 - i3389.value;
        if ($tmp3393) goto $l3408; else goto $l3409;
        $l3408:;
        if ($tmp3407 >= 1) goto $l3406; else goto $l3396;
        $l3409:;
        if ($tmp3407 > 1) goto $l3406; else goto $l3396;
        $l3406:;
        i3389.value += 1;
        goto $l3394;
        $l3396:;
        PANDA_ASSERT(((panda$core$Bit) { index3383.nonnull }).value);
        panda$core$String* $tmp3413 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3412 = $tmp3413;
        panda$core$String* $tmp3414 = panda$core$String$convert$R$panda$core$String(result3412);
        panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3414, &$s3415);
        panda$core$Object* $tmp3417 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3418 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3417)->type);
        panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3416, $tmp3418);
        panda$core$String* $tmp3421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3419, &$s3420);
        panda$core$String* $tmp3422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3421, base3378);
        panda$core$String* $tmp3424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3422, &$s3423);
        panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3424, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3383.value))));
        (($fn3426) p_out->$class->vtable[19])(p_out, $tmp3425);
        panda$core$Bit $tmp3428 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(field3360->type);
        bool $tmp3427 = $tmp3428.value;
        if (!$tmp3427) goto $l3429;
        org$pandalanguage$pandac$ClassDecl* $tmp3430 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, field3360->type);
        panda$core$Bit $tmp3431 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp3430);
        panda$core$Bit $tmp3432 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3431);
        $tmp3427 = $tmp3432.value;
        $l3429:;
        panda$core$Bit $tmp3433 = { $tmp3427 };
        if ($tmp3433.value) {
        {
            panda$core$String* $tmp3435 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast3434 = $tmp3435;
            panda$core$String* $tmp3436 = panda$core$String$convert$R$panda$core$String(cast3434);
            panda$core$String* $tmp3438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3436, &$s3437);
            panda$core$String* $tmp3439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3438, result3412);
            panda$core$String* $tmp3441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3439, &$s3440);
            panda$core$String* $tmp3442 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_fieldRef->type);
            panda$core$String* $tmp3443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3441, $tmp3442);
            panda$core$String* $tmp3445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3443, &$s3444);
            (($fn3446) p_out->$class->vtable[19])(p_out, $tmp3445);
            result3412 = cast3434;
        }
        }
        return result3412;
    }
    }
    panda$core$String* $tmp3448 = panda$core$String$convert$R$panda$core$String(t3361);
    panda$core$String* $tmp3450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3448, &$s3449);
    panda$core$String* $tmp3451 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3450, $tmp3451);
    panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, &$s3453);
    ptr3447 = $tmp3454;
    panda$core$String* $tmp3456 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3455 = $tmp3456;
    panda$core$String* $tmp3457 = panda$core$String$convert$R$panda$core$String(result3455);
    panda$core$String* $tmp3459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3457, &$s3458);
    panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3459, t3361);
    panda$core$String* $tmp3462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3460, &$s3461);
    panda$core$String* $tmp3463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3462, ptr3447);
    panda$core$String* $tmp3465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3463, &$s3464);
    (($fn3466) p_out->$class->vtable[19])(p_out, $tmp3465);
    return result3455;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3467;
    panda$core$String* testStart3470;
    panda$core$String* isNonNull3471;
    panda$core$String* nonNullLabel3484;
    panda$core$String* endLabel3486;
    panda$core$String* wrapped3499;
    panda$core$String* nonNullValue3502;
    panda$core$String* result3510;
    panda$core$String* targetType3538;
    panda$core$String* wrapperTypeName3540;
    panda$core$String* wrapperType3542;
    panda$core$String* srcCast3544;
    panda$core$String* load3560;
    panda$core$String* result3575;
    org$pandalanguage$pandac$ClassDecl* $tmp3468 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3467 = $tmp3468;
    PANDA_ASSERT(((panda$core$Bit) { target3467 != NULL }).value);
    panda$core$Bit $tmp3469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3469.value) {
    {
        testStart3470 = self->currentBlock;
        panda$core$String* $tmp3472 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3471 = $tmp3472;
        panda$core$String* $tmp3473 = panda$core$String$convert$R$panda$core$String(isNonNull3471);
        panda$core$String* $tmp3475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3473, &$s3474);
        panda$core$String* $tmp3476 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3475, $tmp3476);
        panda$core$String* $tmp3479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3477, &$s3478);
        panda$core$String* $tmp3480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3479, p_value);
        panda$core$String* $tmp3482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3480, &$s3481);
        (($fn3483) p_out->$class->vtable[19])(p_out, $tmp3482);
        panda$core$String* $tmp3485 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3484 = $tmp3485;
        panda$core$String* $tmp3487 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3486 = $tmp3487;
        panda$core$String* $tmp3489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3488, isNonNull3471);
        panda$core$String* $tmp3491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3489, &$s3490);
        panda$core$String* $tmp3492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3491, nonNullLabel3484);
        panda$core$String* $tmp3494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3492, &$s3493);
        panda$core$String* $tmp3495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3494, endLabel3486);
        panda$core$String* $tmp3497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3495, &$s3496);
        (($fn3498) p_out->$class->vtable[19])(p_out, $tmp3497);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3484, p_out);
        panda$core$Object* $tmp3500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3501 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3500), p_out);
        wrapped3499 = $tmp3501;
        panda$core$Object* $tmp3503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3504 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, wrapped3499, ((org$pandalanguage$pandac$Type*) $tmp3503), p_dstType, p_out);
        nonNullValue3502 = $tmp3504;
        panda$core$String* $tmp3506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3505, endLabel3486);
        panda$core$String* $tmp3508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3506, &$s3507);
        (($fn3509) p_out->$class->vtable[19])(p_out, $tmp3508);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3486, p_out);
        panda$core$String* $tmp3511 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3510 = $tmp3511;
        panda$core$String* $tmp3512 = panda$core$String$convert$R$panda$core$String(result3510);
        panda$core$String* $tmp3514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3512, &$s3513);
        panda$core$String* $tmp3515 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3514, $tmp3515);
        panda$core$String* $tmp3518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3516, &$s3517);
        panda$core$Object* $tmp3520 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3521 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3520));
        panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3519, $tmp3521);
        panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, &$s3523);
        panda$core$String* $tmp3525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3518, $tmp3524);
        panda$core$String* $tmp3527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3526, testStart3470);
        panda$core$String* $tmp3529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3527, &$s3528);
        panda$core$String* $tmp3530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3529, nonNullValue3502);
        panda$core$String* $tmp3532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3530, &$s3531);
        panda$core$String* $tmp3533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3532, nonNullLabel3484);
        panda$core$String* $tmp3535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3533, &$s3534);
        panda$core$String* $tmp3536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3525, $tmp3535);
        (($fn3537) p_out->$class->vtable[19])(p_out, $tmp3536);
        return result3510;
    }
    }
    panda$core$String* $tmp3539 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3538 = $tmp3539;
    panda$core$String* $tmp3541 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3540 = $tmp3541;
    panda$core$String* $tmp3543 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3542 = $tmp3543;
    panda$core$String* $tmp3545 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3544 = $tmp3545;
    panda$core$String* $tmp3546 = panda$core$String$convert$R$panda$core$String(srcCast3544);
    panda$core$String* $tmp3548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3546, &$s3547);
    panda$core$String* $tmp3549 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3548, $tmp3549);
    panda$core$String* $tmp3552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3550, &$s3551);
    panda$core$String* $tmp3553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3552, p_value);
    panda$core$String* $tmp3555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3553, &$s3554);
    panda$core$String* $tmp3556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3555, wrapperType3542);
    panda$core$String* $tmp3558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3556, &$s3557);
    (($fn3559) p_out->$class->vtable[19])(p_out, $tmp3558);
    panda$core$String* $tmp3561 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3560 = $tmp3561;
    panda$core$String* $tmp3562 = panda$core$String$convert$R$panda$core$String(load3560);
    panda$core$String* $tmp3564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3562, &$s3563);
    panda$core$String* $tmp3565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3564, wrapperTypeName3540);
    panda$core$String* $tmp3567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3565, &$s3566);
    panda$core$String* $tmp3568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3567, wrapperType3542);
    panda$core$String* $tmp3570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3568, &$s3569);
    panda$core$String* $tmp3571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3570, srcCast3544);
    panda$core$String* $tmp3573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3571, &$s3572);
    (($fn3574) p_out->$class->vtable[19])(p_out, $tmp3573);
    panda$core$String* $tmp3576 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3575 = $tmp3576;
    panda$core$String* $tmp3577 = panda$core$String$convert$R$panda$core$String(result3575);
    panda$core$String* $tmp3579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3577, &$s3578);
    panda$core$String* $tmp3580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3579, wrapperTypeName3540);
    panda$core$String* $tmp3582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3580, &$s3581);
    panda$core$String* $tmp3583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3582, load3560);
    panda$core$String* $tmp3585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3583, &$s3584);
    panda$core$String* $tmp3586 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3585, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3586, &$s3587);
    (($fn3589) p_out->$class->vtable[19])(p_out, $tmp3588);
    return result3575;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* nullableType3590;
    panda$core$String* result3592;
    panda$core$String* $tmp3591 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3590 = $tmp3591;
    panda$core$String* $tmp3593 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3592 = $tmp3593;
    panda$core$String* $tmp3594 = panda$core$String$convert$R$panda$core$String(result3592);
    panda$core$String* $tmp3596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3594, &$s3595);
    panda$core$String* $tmp3597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3596, nullableType3590);
    panda$core$String* $tmp3599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3597, &$s3598);
    panda$core$String* $tmp3601 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3600, $tmp3601);
    panda$core$String* $tmp3604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3602, &$s3603);
    panda$core$String* $tmp3605 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3604, $tmp3605);
    panda$core$String* $tmp3608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3606, &$s3607);
    panda$core$String* $tmp3609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3608, p_value);
    panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3609, &$s3610);
    panda$core$String* $tmp3612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3599, $tmp3611);
    (($fn3613) p_out->$class->vtable[19])(p_out, $tmp3612);
    return result3592;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* result3614;
    panda$core$String* $tmp3615 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3614 = $tmp3615;
    panda$core$String* $tmp3616 = panda$core$String$convert$R$panda$core$String(result3614);
    panda$core$String* $tmp3618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3616, &$s3617);
    panda$core$String* $tmp3619 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3618, $tmp3619);
    panda$core$String* $tmp3622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3620, &$s3621);
    panda$core$String* $tmp3623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3622, p_value);
    panda$core$String* $tmp3625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3623, &$s3624);
    (($fn3626) p_out->$class->vtable[19])(p_out, $tmp3625);
    return result3614;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$OutputStream* p_out) {
    panda$core$String* op3627;
    panda$core$Int64 size13630;
    panda$core$Int64 size23632;
    org$pandalanguage$pandac$ClassDecl* srcClass3655;
    org$pandalanguage$pandac$ClassDecl* targetClass3657;
    panda$core$String* srcType3696;
    panda$core$String* dstType3698;
    panda$core$String* result3701;
    panda$core$Bit $tmp3628 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3628.value) {
    {
        panda$core$Bit $tmp3629 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3629.value);
        panda$core$Int64 $tmp3631 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13630 = $tmp3631;
        panda$core$Int64 $tmp3633 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23632 = $tmp3633;
        panda$core$Bit $tmp3634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 20 }));
        if ($tmp3634.value) {
        {
            panda$core$Bit $tmp3635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp3635.value) {
            {
                panda$core$Bit $tmp3636 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13630, size23632);
                if ($tmp3636.value) {
                {
                    op3627 = &$s3637;
                }
                }
                else {
                panda$core$Bit $tmp3638 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13630, size23632);
                if ($tmp3638.value) {
                {
                    op3627 = &$s3639;
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
            panda$core$Bit $tmp3640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3640.value) {
            {
                op3627 = &$s3641;
            }
            }
            else {
            {
                panda$core$Bit $tmp3642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
                PANDA_ASSERT($tmp3642.value);
                op3627 = &$s3643;
            }
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
        if ($tmp3644.value) {
        {
            panda$core$Bit $tmp3645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3645.value) {
            {
                op3627 = &$s3646;
            }
            }
            else {
            {
                panda$core$Bit $tmp3647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 13 }));
                PANDA_ASSERT($tmp3647.value);
                op3627 = &$s3648;
            }
            }
        }
        }
        else {
        {
            panda$core$Bit $tmp3649 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13630, size23632);
            if ($tmp3649.value) {
            {
                op3627 = &$s3650;
            }
            }
            else {
            panda$core$Bit $tmp3651 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13630, size23632);
            if ($tmp3651.value) {
            {
                panda$core$Bit $tmp3652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 12 }));
                if ($tmp3652.value) {
                {
                    op3627 = &$s3653;
                }
                }
                else {
                {
                    op3627 = &$s3654;
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
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3656 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3655 = $tmp3656;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3655 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3658 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3657 = $tmp3658;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3657 != NULL }).value);
        panda$core$Bit $tmp3660 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3655);
        bool $tmp3659 = $tmp3660.value;
        if (!$tmp3659) goto $l3661;
        panda$core$Bit $tmp3662 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3657);
        panda$core$Bit $tmp3663 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3662);
        $tmp3659 = $tmp3663.value;
        $l3661:;
        panda$core$Bit $tmp3664 = { $tmp3659 };
        if ($tmp3664.value) {
        {
            panda$core$String* $tmp3665 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3665;
        }
        }
        else {
        panda$core$Bit $tmp3667 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3655);
        panda$core$Bit $tmp3668 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3667);
        bool $tmp3666 = $tmp3668.value;
        if (!$tmp3666) goto $l3669;
        panda$core$Bit $tmp3670 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3657);
        $tmp3666 = $tmp3670.value;
        $l3669:;
        panda$core$Bit $tmp3671 = { $tmp3666 };
        if ($tmp3671.value) {
        {
            panda$core$String* $tmp3672 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3672;
        }
        }
        else {
        panda$core$Bit $tmp3675 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3655);
        bool $tmp3674 = $tmp3675.value;
        if (!$tmp3674) goto $l3676;
        panda$core$Bit $tmp3677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3674 = $tmp3677.value;
        $l3676:;
        panda$core$Bit $tmp3678 = { $tmp3674 };
        bool $tmp3673 = $tmp3678.value;
        if (!$tmp3673) goto $l3679;
        panda$core$Object* $tmp3680 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3681 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3680), p_src);
        $tmp3673 = $tmp3681.value;
        $l3679:;
        panda$core$Bit $tmp3682 = { $tmp3673 };
        if ($tmp3682.value) {
        {
            panda$core$String* $tmp3683 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3683;
        }
        }
        else {
        panda$core$Bit $tmp3686 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3657);
        bool $tmp3685 = $tmp3686.value;
        if (!$tmp3685) goto $l3687;
        panda$core$Bit $tmp3688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3685 = $tmp3688.value;
        $l3687:;
        panda$core$Bit $tmp3689 = { $tmp3685 };
        bool $tmp3684 = $tmp3689.value;
        if (!$tmp3684) goto $l3690;
        panda$core$Object* $tmp3691 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3692 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3691), p_target);
        $tmp3684 = $tmp3692.value;
        $l3690:;
        panda$core$Bit $tmp3693 = { $tmp3684 };
        if ($tmp3693.value) {
        {
            panda$core$String* $tmp3694 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3694;
        }
        }
        }
        }
        }
        op3627 = &$s3695;
    }
    }
    panda$core$String* $tmp3697 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3696 = $tmp3697;
    panda$core$String* $tmp3699 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3698 = $tmp3699;
    panda$core$Bit $tmp3700 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3696, dstType3698);
    if ($tmp3700.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3702 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3701 = $tmp3702;
    panda$core$String* $tmp3703 = panda$core$String$convert$R$panda$core$String(result3701);
    panda$core$String* $tmp3705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3703, &$s3704);
    panda$core$String* $tmp3706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3705, op3627);
    panda$core$String* $tmp3708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3706, &$s3707);
    panda$core$String* $tmp3709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3708, srcType3696);
    panda$core$String* $tmp3711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3709, &$s3710);
    panda$core$String* $tmp3712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3711, p_value);
    panda$core$String* $tmp3714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3712, &$s3713);
    panda$core$String* $tmp3715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3714, dstType3698);
    panda$core$String* $tmp3717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3715, &$s3716);
    (($fn3718) p_out->$class->vtable[19])(p_out, $tmp3717);
    return result3701;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$OutputStream* p_out) {
    panda$core$String* base3722;
    panda$core$Bit $tmp3719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3719.value);
    panda$core$Int64 $tmp3720 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3720, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3721.value);
    panda$core$Object* $tmp3723 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3724 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3723), p_out);
    base3722 = $tmp3724;
    panda$core$Object* $tmp3725 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3726 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, base3722, ((org$pandalanguage$pandac$IRNode*) $tmp3725)->type, p_cast->type, p_out);
    return $tmp3726;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3730;
    panda$core$String* t3732;
    panda$core$String* value3740;
    panda$core$String* result3751;
    org$pandalanguage$pandac$FieldDecl* lastField3753;
    panda$core$String* value3781;
    panda$core$String* result3792;
    org$pandalanguage$pandac$FieldDecl* lastField3794;
    panda$core$String* alloca3817;
    panda$core$String* result3836;
    panda$core$String* callRef3851;
    panda$core$String* result3861;
    panda$core$String* classPtr3874;
    panda$core$String* className3876;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3901;
    panda$core$Bit $tmp3727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3727.value);
    panda$core$Int64 $tmp3728 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3729 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3728, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3729.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3731 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3730 = $tmp3731;
    PANDA_ASSERT(((panda$core$Bit) { cl3730 != NULL }).value);
    panda$core$String* $tmp3733 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3732 = $tmp3733;
    panda$core$Bit $tmp3734 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3734.value) {
    {
        panda$core$Int64 $tmp3735 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3735, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3736.value);
        panda$core$Object* $tmp3737 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3738 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3737)->children);
        panda$core$Bit $tmp3739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3738, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3739.value);
        panda$core$Object* $tmp3741 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3742 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3741)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3743 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3742), p_out);
        value3740 = $tmp3743;
        panda$core$Object* $tmp3744 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3745 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3744)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3745)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3746.value) {
        {
            panda$core$String* $tmp3748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3747, value3740);
            panda$core$String* $tmp3750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3748, &$s3749);
            return $tmp3750;
        }
        }
        panda$core$String* $tmp3752 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3751 = $tmp3752;
        panda$core$Int64 $tmp3754 = panda$collections$Array$get_count$R$panda$core$Int64(cl3730->fields);
        panda$core$Int64 $tmp3755 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3754, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3756 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3730->fields, $tmp3755);
        lastField3753 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3756);
        panda$core$Bit $tmp3757 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3753->annotations);
        panda$core$Bit $tmp3758 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3757);
        PANDA_ASSERT($tmp3758.value);
        panda$core$String* $tmp3759 = panda$core$String$convert$R$panda$core$String(result3751);
        panda$core$String* $tmp3761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3759, &$s3760);
        panda$core$String* $tmp3762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3761, t3732);
        panda$core$String* $tmp3764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3762, &$s3763);
        panda$core$String* $tmp3765 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3753->type);
        panda$core$String* $tmp3766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3764, $tmp3765);
        panda$core$String* $tmp3768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3766, &$s3767);
        panda$core$String* $tmp3769 = panda$core$String$convert$R$panda$core$String(value3740);
        panda$core$String* $tmp3771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3769, &$s3770);
        panda$core$String* $tmp3772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3768, $tmp3771);
        (($fn3773) p_out->$class->vtable[19])(p_out, $tmp3772);
        return result3751;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3774 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3775 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3774);
    if ($tmp3775.value) {
    {
        panda$core$Int64 $tmp3776 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3776, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3777.value);
        panda$core$Object* $tmp3778 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3779 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3778)->children);
        panda$core$Bit $tmp3780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3779, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3780.value);
        panda$core$Object* $tmp3782 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3783 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3782)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3784 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3783), p_out);
        value3781 = $tmp3784;
        panda$core$Object* $tmp3785 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3786 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3785)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3786)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3787.value) {
        {
            panda$core$String* $tmp3789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3788, value3781);
            panda$core$String* $tmp3791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3789, &$s3790);
            return $tmp3791;
        }
        }
        panda$core$String* $tmp3793 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3792 = $tmp3793;
        panda$core$Int64 $tmp3795 = panda$collections$Array$get_count$R$panda$core$Int64(cl3730->fields);
        panda$core$Int64 $tmp3796 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3795, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3797 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3730->fields, $tmp3796);
        lastField3794 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3797);
        panda$core$Bit $tmp3798 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3794->annotations);
        panda$core$Bit $tmp3799 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3798);
        PANDA_ASSERT($tmp3799.value);
        panda$core$String* $tmp3800 = panda$core$String$convert$R$panda$core$String(result3792);
        panda$core$String* $tmp3802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3800, &$s3801);
        panda$core$String* $tmp3803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3802, t3732);
        panda$core$String* $tmp3805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3803, &$s3804);
        panda$core$String* $tmp3806 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3794->type);
        panda$core$String* $tmp3807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3805, $tmp3806);
        panda$core$String* $tmp3809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3807, &$s3808);
        panda$core$String* $tmp3810 = panda$core$String$convert$R$panda$core$String(value3781);
        panda$core$String* $tmp3812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3810, &$s3811);
        panda$core$String* $tmp3813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3809, $tmp3812);
        (($fn3814) p_out->$class->vtable[19])(p_out, $tmp3813);
        return result3792;
    }
    }
    panda$core$Bit $tmp3815 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3730);
    if ($tmp3815.value) {
    {
        panda$core$Int64 $tmp3816 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3816;
        panda$core$String* $tmp3819 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3818, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3819, &$s3820);
        alloca3817 = $tmp3821;
        panda$core$String* $tmp3822 = panda$core$String$convert$R$panda$core$String(alloca3817);
        panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3822, &$s3823);
        panda$core$String* $tmp3825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3824, t3732);
        panda$core$String* $tmp3827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3825, &$s3826);
        (($fn3828) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3827);
        panda$core$Object* $tmp3829 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3830 = panda$core$String$convert$R$panda$core$String(t3732);
        panda$core$String* $tmp3832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3830, &$s3831);
        panda$core$String* $tmp3833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3832, alloca3817);
        panda$core$String* $tmp3835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3833, &$s3834);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3829), $tmp3835, p_out);
        panda$core$String* $tmp3837 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3836 = $tmp3837;
        panda$core$String* $tmp3838 = panda$core$String$convert$R$panda$core$String(result3836);
        panda$core$String* $tmp3840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3838, &$s3839);
        panda$core$String* $tmp3841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3840, t3732);
        panda$core$String* $tmp3843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3841, &$s3842);
        panda$core$String* $tmp3844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3843, t3732);
        panda$core$String* $tmp3846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3844, &$s3845);
        panda$core$String* $tmp3847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3846, alloca3817);
        panda$core$String* $tmp3849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3847, &$s3848);
        (($fn3850) p_out->$class->vtable[19])(p_out, $tmp3849);
        return result3836;
    }
    }
    panda$core$String* $tmp3852 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3851 = $tmp3852;
    panda$core$String* $tmp3853 = panda$core$String$convert$R$panda$core$String(callRef3851);
    panda$core$String* $tmp3855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3853, &$s3854);
    panda$core$Int64 $tmp3856 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3857 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3855, ((panda$core$Object*) wrap_panda$core$Int64($tmp3856)));
    panda$core$String* $tmp3859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3857, &$s3858);
    (($fn3860) p_out->$class->vtable[19])(p_out, $tmp3859);
    panda$core$String* $tmp3862 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3861 = $tmp3862;
    panda$core$String* $tmp3863 = panda$core$String$convert$R$panda$core$String(result3861);
    panda$core$String* $tmp3865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3863, &$s3864);
    panda$core$String* $tmp3866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3865, callRef3851);
    panda$core$String* $tmp3868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3866, &$s3867);
    panda$core$String* $tmp3869 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3868, $tmp3869);
    panda$core$String* $tmp3872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3870, &$s3871);
    (($fn3873) p_out->$class->vtable[19])(p_out, $tmp3872);
    panda$core$String* $tmp3875 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3874 = $tmp3875;
    panda$core$Bit $tmp3878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3877 = $tmp3878.value;
    if (!$tmp3877) goto $l3879;
    panda$core$Bit $tmp3880 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3730);
    panda$core$Bit $tmp3881 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3880);
    $tmp3877 = $tmp3881.value;
    $l3879:;
    panda$core$Bit $tmp3882 = { $tmp3877 };
    if ($tmp3882.value) {
    {
        panda$core$Object* $tmp3883 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3884 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3883));
        className3876 = $tmp3884;
    }
    }
    else {
    {
        panda$core$String* $tmp3885 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3876 = $tmp3885;
    }
    }
    panda$core$String* $tmp3886 = panda$core$String$convert$R$panda$core$String(classPtr3874);
    panda$core$String* $tmp3888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3886, &$s3887);
    panda$core$String* $tmp3889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3888, className3876);
    panda$core$String* $tmp3891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3889, &$s3890);
    panda$core$String* $tmp3892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3891, t3732);
    panda$core$String* $tmp3894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3892, &$s3893);
    panda$core$String* $tmp3895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3894, result3861);
    panda$core$String* $tmp3897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3895, &$s3896);
    panda$core$String* $tmp3899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3897, &$s3898);
    (($fn3900) p_out->$class->vtable[19])(p_out, $tmp3899);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3902 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3730);
    cc3901 = $tmp3902;
    panda$core$String* $tmp3904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3903, cc3901->type);
    panda$core$String* $tmp3906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3904, &$s3905);
    panda$core$String* $tmp3907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3906, cc3901->name);
    panda$core$String* $tmp3909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3907, &$s3908);
    panda$core$String* $tmp3911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3910, classPtr3874);
    panda$core$String* $tmp3913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3911, &$s3912);
    panda$core$String* $tmp3914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3909, $tmp3913);
    (($fn3915) p_out->$class->vtable[19])(p_out, $tmp3914);
    panda$core$Object* $tmp3916 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3917 = panda$core$String$convert$R$panda$core$String(t3732);
    panda$core$String* $tmp3919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3917, &$s3918);
    panda$core$String* $tmp3920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3919, result3861);
    panda$core$String* $tmp3922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3920, &$s3921);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3916), $tmp3922, p_out);
    return result3861;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3923 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3923;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3925 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3924, $tmp3925);
    return $tmp3926;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_real, panda$io$OutputStream* p_out) {
    panda$core$Real64 r643927;
    panda$core$Int64 bits3932;
    panda$core$Int64 $tmp3933;
    panda$core$MutableString* result3934;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3937;
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT $tmp3963;
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT $tmp3968;
    r643927 = ((panda$core$Real64$wrapper*) p_real->payload)->value;
    panda$core$Int64 $tmp3928 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_real->type);
    panda$core$Bit $tmp3929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3928, ((panda$core$Int64) { 32 }));
    if ($tmp3929.value) {
    {
        panda$core$Real32 $tmp3930 = panda$core$Real64$convert$R$panda$core$Real32(r643927);
        panda$core$Real64 $tmp3931 = panda$core$Real32$convert$R$panda$core$Real64($tmp3930);
        r643927 = $tmp3931;
    }
    }
    panda$core$Panda$floatToIntBits$panda$core$Real64$R$panda$core$Int64(&$tmp3933, r643927);
    bits3932 = $tmp3933;
    panda$core$MutableString* $tmp3935 = (panda$core$MutableString*) malloc(48);
    $tmp3935->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp3935->refCount.value = 1;
    panda$core$MutableString$init($tmp3935);
    result3934 = $tmp3935;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3937, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { 16 }), ((panda$core$Bit) { false }));
    int64_t $tmp3939 = $tmp3937.min.value;
    panda$core$Int64 i3938 = { $tmp3939 };
    int64_t $tmp3941 = $tmp3937.max.value;
    bool $tmp3942 = $tmp3937.inclusive.value;
    if ($tmp3942) goto $l3949; else goto $l3950;
    $l3949:;
    if ($tmp3939 <= $tmp3941) goto $l3943; else goto $l3945;
    $l3950:;
    if ($tmp3939 < $tmp3941) goto $l3943; else goto $l3945;
    $l3943:;
    {
        panda$core$Int64 $tmp3952 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(bits3932, ((panda$core$Int64) { 16 }));
        panda$core$Char32 $tmp3953 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(&$s3951, $tmp3952);
        panda$core$MutableString$append$panda$core$Char32(result3934, $tmp3953);
        panda$core$Int64 $tmp3954 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(bits3932, ((panda$core$Int64) { 16 }));
        bits3932 = $tmp3954;
    }
    $l3946:;
    int64_t $tmp3956 = $tmp3941 - i3938.value;
    if ($tmp3942) goto $l3957; else goto $l3958;
    $l3957:;
    if ($tmp3956 >= 1) goto $l3955; else goto $l3945;
    $l3958:;
    if ($tmp3956 > 1) goto $l3955; else goto $l3945;
    $l3955:;
    i3938.value += 1;
    goto $l3943;
    $l3945:;
    panda$core$String* $tmp3962 = panda$core$MutableString$convert$R$panda$core$String(result3934);
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(&$tmp3963, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp3964 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String($tmp3962, $tmp3963);
    panda$core$String* $tmp3965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3961, $tmp3964);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp3965));
    panda$core$String* $tmp3967 = panda$core$MutableString$finish$R$panda$core$String(result3934);
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(&$tmp3968, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp3969 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String($tmp3967, $tmp3968);
    panda$core$String* $tmp3970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3966, $tmp3969);
    return $tmp3970;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$OutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3971;
    }
    }
    return &$s3972;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$OutputStream* p_out) {
    panda$core$String* result3975;
    panda$core$String* t3977;
    panda$core$Bit $tmp3973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3973.value) {
    {
        panda$core$String* $tmp3974 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3974;
    }
    }
    panda$core$String* $tmp3976 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3975 = $tmp3976;
    panda$core$String* $tmp3978 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3977 = $tmp3978;
    panda$core$String* $tmp3979 = panda$core$String$convert$R$panda$core$String(result3975);
    panda$core$String* $tmp3981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3979, &$s3980);
    panda$core$String* $tmp3982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3981, t3977);
    panda$core$String* $tmp3984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3982, &$s3983);
    panda$core$String* $tmp3985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3984, t3977);
    panda$core$String* $tmp3987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3985, &$s3986);
    panda$core$String* $tmp3988 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3987, $tmp3988);
    panda$core$String* $tmp3991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3989, &$s3990);
    (($fn3992) p_out->$class->vtable[19])(p_out, $tmp3991);
    return result3975;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* chars3994;
    panda$core$String* charsType3999;
    panda$core$String* separator4016;
    panda$collections$Iterator* c$Iter4018;
    panda$core$Char8 c4031;
    panda$core$String* result4048;
    org$pandalanguage$pandac$ClassDecl* string4053;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc4056;
    panda$core$Int64 $tmp3993 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3993;
    panda$core$String* $tmp3996 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3995, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3996, &$s3997);
    chars3994 = $tmp3998;
    panda$collections$ListView* $tmp4001 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4002 = ((panda$collections$CollectionView*) $tmp4001)->$class->itable;
    while ($tmp4002->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4002 = $tmp4002->next;
    }
    $fn4004 $tmp4003 = $tmp4002->methods[0];
    panda$core$Int64 $tmp4005 = $tmp4003(((panda$collections$CollectionView*) $tmp4001));
    panda$core$String* $tmp4006 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4000, ((panda$core$Object*) wrap_panda$core$Int64($tmp4005)));
    panda$core$String* $tmp4008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4006, &$s4007);
    charsType3999 = $tmp4008;
    panda$core$String* $tmp4009 = panda$core$String$convert$R$panda$core$String(chars3994);
    panda$core$String* $tmp4011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4009, &$s4010);
    panda$core$String* $tmp4012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4011, charsType3999);
    panda$core$String* $tmp4014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4012, &$s4013);
    (($fn4015) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4014);
    separator4016 = &$s4017;
    {
        panda$collections$ListView* $tmp4019 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp4020 = ((panda$collections$Iterable*) $tmp4019)->$class->itable;
        while ($tmp4020->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4020 = $tmp4020->next;
        }
        $fn4022 $tmp4021 = $tmp4020->methods[0];
        panda$collections$Iterator* $tmp4023 = $tmp4021(((panda$collections$Iterable*) $tmp4019));
        c$Iter4018 = $tmp4023;
        $l4024:;
        ITable* $tmp4026 = c$Iter4018->$class->itable;
        while ($tmp4026->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4026 = $tmp4026->next;
        }
        $fn4028 $tmp4027 = $tmp4026->methods[0];
        panda$core$Bit $tmp4029 = $tmp4027(c$Iter4018);
        panda$core$Bit $tmp4030 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4029);
        if (!$tmp4030.value) goto $l4025;
        {
            ITable* $tmp4032 = c$Iter4018->$class->itable;
            while ($tmp4032->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4032 = $tmp4032->next;
            }
            $fn4034 $tmp4033 = $tmp4032->methods[1];
            panda$core$Object* $tmp4035 = $tmp4033(c$Iter4018);
            c4031 = ((panda$core$Char8$wrapper*) $tmp4035)->value;
            panda$core$String* $tmp4036 = panda$core$String$convert$R$panda$core$String(separator4016);
            panda$core$String* $tmp4038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4036, &$s4037);
            panda$core$Int8 $tmp4039 = panda$core$Char8$convert$R$panda$core$Int8(c4031);
            panda$core$String* $tmp4040 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4038, ((panda$core$Object*) wrap_panda$core$Int8($tmp4039)));
            panda$core$String* $tmp4042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4040, &$s4041);
            (($fn4043) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4042);
            separator4016 = &$s4044;
        }
        goto $l4024;
        $l4025:;
    }
    (($fn4046) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s4045);
    panda$core$Int64 $tmp4047 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4047;
    panda$core$String* $tmp4050 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4049, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4050, &$s4051);
    result4048 = $tmp4052;
    org$pandalanguage$pandac$Type* $tmp4054 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4055 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp4054);
    string4053 = $tmp4055;
    PANDA_ASSERT(((panda$core$Bit) { string4053 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp4057 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string4053);
    cc4056 = $tmp4057;
    panda$core$String* $tmp4058 = panda$core$String$convert$R$panda$core$String(result4048);
    panda$core$String* $tmp4060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4058, &$s4059);
    panda$core$String* $tmp4062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4061, cc4056->type);
    panda$core$String* $tmp4064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4062, &$s4063);
    panda$core$String* $tmp4065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4064, cc4056->name);
    panda$core$String* $tmp4067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4065, &$s4066);
    panda$core$String* $tmp4068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4060, $tmp4067);
    panda$core$String* $tmp4070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4068, &$s4069);
    panda$core$String* $tmp4072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4071, charsType3999);
    panda$core$String* $tmp4074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4072, &$s4073);
    panda$core$String* $tmp4075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4074, chars3994);
    panda$core$String* $tmp4077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4075, &$s4076);
    panda$core$String* $tmp4078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4070, $tmp4077);
    panda$collections$ListView* $tmp4080 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4081 = ((panda$collections$CollectionView*) $tmp4080)->$class->itable;
    while ($tmp4081->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4081 = $tmp4081->next;
    }
    $fn4083 $tmp4082 = $tmp4081->methods[0];
    panda$core$Int64 $tmp4084 = $tmp4082(((panda$collections$CollectionView*) $tmp4080));
    panda$core$String* $tmp4085 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4079, ((panda$core$Object*) wrap_panda$core$Int64($tmp4084)));
    panda$core$String* $tmp4087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4085, &$s4086);
    panda$core$String* $tmp4088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4078, $tmp4087);
    panda$core$Int64 $tmp4090 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$String* $tmp4091 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4089, ((panda$core$Object*) wrap_panda$core$Int64($tmp4090)));
    panda$core$String* $tmp4093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4091, &$s4092);
    panda$core$String* $tmp4094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4088, $tmp4093);
    (($fn4095) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp4094);
    return result4048;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$Int64 $tmp4096 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp4097 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4096, ((panda$core$Int64) { 0 }));
    if ($tmp4097.value) {
    {
        panda$core$Object* $tmp4098 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp4098)->selfRef;
    }
    }
    return &$s4099;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* result4100;
    panda$core$String* ref4102;
    panda$core$String* $tmp4101 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4100 = $tmp4101;
    panda$core$String* $tmp4103 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_s, p_out);
    ref4102 = $tmp4103;
    panda$core$String* $tmp4104 = panda$core$String$convert$R$panda$core$String(result4100);
    panda$core$String* $tmp4106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4104, &$s4105);
    panda$core$String* $tmp4107 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, self->currentMethod);
    panda$core$String* $tmp4108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4106, $tmp4107);
    panda$core$String* $tmp4110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4108, &$s4109);
    panda$core$String* $tmp4111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4110, ref4102);
    panda$core$String* $tmp4113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4111, &$s4112);
    panda$core$String* $tmp4114 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp4115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4113, $tmp4114);
    panda$core$String* $tmp4117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4115, &$s4116);
    (($fn4118) p_out->$class->vtable[19])(p_out, $tmp4117);
    return result4100;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value4122;
    org$pandalanguage$pandac$ClassDecl* cl4125;
    panda$core$String* resultValue4128;
    panda$core$String* field4133;
    panda$core$String* result4158;
    panda$core$Bit $tmp4119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp4119.value);
    panda$core$Int64 $tmp4120 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4120, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4121.value);
    panda$core$Object* $tmp4123 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4124 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4123), p_out);
    value4122 = $tmp4124;
    panda$core$Object* $tmp4126 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4127 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4126)->type);
    cl4125 = $tmp4127;
    panda$core$Bit $tmp4129 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4125);
    if ($tmp4129.value) {
    {
        panda$core$Object* $tmp4130 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4131 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4130)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4131.value) {
        {
            return &$s4132;
        }
        }
        panda$core$String* $tmp4134 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field4133 = $tmp4134;
        panda$core$String* $tmp4135 = panda$core$String$convert$R$panda$core$String(field4133);
        panda$core$String* $tmp4137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4135, &$s4136);
        panda$core$String* $tmp4138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4137, value4122);
        panda$core$String* $tmp4140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4138, &$s4139);
        (($fn4141) p_out->$class->vtable[19])(p_out, $tmp4140);
        panda$core$String* $tmp4142 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4128 = $tmp4142;
        panda$core$String* $tmp4143 = panda$core$String$convert$R$panda$core$String(resultValue4128);
        panda$core$String* $tmp4145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4143, &$s4144);
        panda$core$String* $tmp4146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4145, field4133);
        panda$core$String* $tmp4148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4146, &$s4147);
        (($fn4149) p_out->$class->vtable[19])(p_out, $tmp4148);
    }
    }
    else {
    {
        panda$core$String* $tmp4150 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4128 = $tmp4150;
        panda$core$String* $tmp4151 = panda$core$String$convert$R$panda$core$String(resultValue4128);
        panda$core$String* $tmp4153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4151, &$s4152);
        panda$core$String* $tmp4154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4153, value4122);
        panda$core$String* $tmp4156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4154, &$s4155);
        (($fn4157) p_out->$class->vtable[19])(p_out, $tmp4156);
    }
    }
    panda$core$String* $tmp4159 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4158 = $tmp4159;
    panda$core$String* $tmp4160 = panda$core$String$convert$R$panda$core$String(result4158);
    panda$core$String* $tmp4162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4160, &$s4161);
    panda$core$String* $tmp4163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4162, resultValue4128);
    panda$core$String* $tmp4165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4163, &$s4164);
    (($fn4166) p_out->$class->vtable[19])(p_out, $tmp4165);
    return result4158;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value4170;
    org$pandalanguage$pandac$ClassDecl* cl4173;
    panda$core$String* resultValue4176;
    panda$core$String* result4197;
    panda$core$Bit $tmp4167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp4167.value);
    panda$core$Int64 $tmp4168 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4168, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4169.value);
    panda$core$Object* $tmp4171 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4172 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4171), p_out);
    value4170 = $tmp4172;
    panda$core$Object* $tmp4174 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4175 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4174)->type);
    cl4173 = $tmp4175;
    panda$core$Bit $tmp4177 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4173);
    if ($tmp4177.value) {
    {
        panda$core$Object* $tmp4178 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4179 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4178)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4179.value) {
        {
            return &$s4180;
        }
        }
        panda$core$String* $tmp4181 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4176 = $tmp4181;
        panda$core$String* $tmp4182 = panda$core$String$convert$R$panda$core$String(resultValue4176);
        panda$core$String* $tmp4184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4182, &$s4183);
        panda$core$String* $tmp4185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4184, value4170);
        panda$core$String* $tmp4187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4185, &$s4186);
        (($fn4188) p_out->$class->vtable[19])(p_out, $tmp4187);
    }
    }
    else {
    {
        panda$core$String* $tmp4189 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4176 = $tmp4189;
        panda$core$String* $tmp4190 = panda$core$String$convert$R$panda$core$String(resultValue4176);
        panda$core$String* $tmp4192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4190, &$s4191);
        panda$core$String* $tmp4193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4192, value4170);
        panda$core$String* $tmp4195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4193, &$s4194);
        (($fn4196) p_out->$class->vtable[19])(p_out, $tmp4195);
    }
    }
    panda$core$String* $tmp4198 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4197 = $tmp4198;
    panda$core$String* $tmp4199 = panda$core$String$convert$R$panda$core$String(result4197);
    panda$core$String* $tmp4201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4199, &$s4200);
    panda$core$String* $tmp4202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4201, resultValue4176);
    panda$core$String* $tmp4204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4202, &$s4203);
    (($fn4205) p_out->$class->vtable[19])(p_out, $tmp4204);
    return result4197;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4207;
    panda$core$Bit $tmp4206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp4206.value);
    panda$core$Object* $tmp4208 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4209 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4208));
    cl4207 = $tmp4209;
    PANDA_ASSERT(((panda$core$Bit) { cl4207 != NULL }).value);
    panda$core$Bit $tmp4210 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4207);
    if ($tmp4210.value) {
    {
        panda$core$Object* $tmp4212 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4213 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4212));
        panda$core$String* $tmp4214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4211, $tmp4213);
        panda$core$String* $tmp4216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4214, &$s4215);
        return $tmp4216;
    }
    }
    else {
    {
        return &$s4217;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* base4221;
    panda$core$String* result4224;
    panda$core$String* zero4227;
    panda$core$Bit $tmp4218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp4218.value);
    panda$core$Int64 $tmp4219 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp4220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4219, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4220.value);
    panda$core$Object* $tmp4222 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4223 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4222), p_out);
    base4221 = $tmp4223;
    panda$core$String* $tmp4225 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4224 = $tmp4225;
    panda$core$Int64 $tmp4226 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp4226.value) {
        case 52:
        {
            panda$core$Bit $tmp4228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp4228.value) {
            {
                panda$core$String* $tmp4229 = panda$core$String$convert$R$panda$core$String(result4224);
                panda$core$String* $tmp4231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4229, &$s4230);
                panda$core$String* $tmp4232 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
                panda$core$String* $tmp4233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4231, $tmp4232);
                panda$core$String* $tmp4235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4233, &$s4234);
                panda$core$String* $tmp4236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4235, base4221);
                panda$core$String* $tmp4238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4236, &$s4237);
                (($fn4239) p_out->$class->vtable[19])(p_out, $tmp4238);
            }
            }
            else {
            {
                panda$core$String* $tmp4240 = panda$core$String$convert$R$panda$core$String(result4224);
                panda$core$String* $tmp4242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4240, &$s4241);
                panda$core$String* $tmp4243 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
                panda$core$String* $tmp4244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4242, $tmp4243);
                panda$core$String* $tmp4246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4244, &$s4245);
                panda$core$String* $tmp4247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4246, base4221);
                panda$core$String* $tmp4249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4247, &$s4248);
                (($fn4250) p_out->$class->vtable[19])(p_out, $tmp4249);
            }
            }
            return result4224;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp4251 = panda$core$String$convert$R$panda$core$String(result4224);
            panda$core$String* $tmp4253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4251, &$s4252);
            panda$core$String* $tmp4254 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4253, $tmp4254);
            panda$core$String* $tmp4257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4255, &$s4256);
            panda$core$String* $tmp4258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4257, base4221);
            panda$core$String* $tmp4260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4258, &$s4259);
            (($fn4261) p_out->$class->vtable[19])(p_out, $tmp4260);
            return result4224;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* value4276;
    panda$core$String* result4279;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4262 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4262;
        }
        break;
        case 1044:
        {
            panda$core$String* $tmp4263 = org$pandalanguage$pandac$LLVMCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4263;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4264 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4264;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4265 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4265;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4266 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4266;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4267 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4267;
        }
        break;
        case 1045:
        {
            panda$core$String* $tmp4268 = org$pandalanguage$pandac$LLVMCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4268;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4269 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4269;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4270 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4270;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4271 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4271;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4272 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4272;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4273 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4273;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4274 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4274;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4275 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4275;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4277 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4278 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4277), p_out);
            value4276 = $tmp4278;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4276));
            return value4276;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4280 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4279 = ((panda$core$String*) $tmp4280);
            PANDA_ASSERT(((panda$core$Bit) { result4279 != NULL }).value);
            return result4279;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4281 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4281;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4282 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4282;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4283 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4283;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4284 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4284;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp4285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1025 }));
    if ($tmp4285.value) {
    {
        panda$core$String* $tmp4286 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, self->currentMethod);
        panda$core$String* $tmp4287 = panda$core$String$convert$R$panda$core$String($tmp4286);
        panda$core$String* $tmp4289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4287, &$s4288);
        panda$core$String* $tmp4290 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
        panda$core$String* $tmp4291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4289, $tmp4290);
        panda$core$String* $tmp4293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4291, &$s4292);
        return $tmp4293;
    }
    }
    panda$core$String* $tmp4294 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4295 = panda$core$String$convert$R$panda$core$String($tmp4294);
    panda$core$String* $tmp4297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4295, &$s4296);
    panda$core$String* $tmp4298 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4297, $tmp4298);
    panda$core$String* $tmp4301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4299, &$s4300);
    return $tmp4301;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$OutputStream* p_out) {
    panda$collections$Iterator* s$Iter4303;
    org$pandalanguage$pandac$IRNode* s4315;
    panda$core$Bit $tmp4302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4302.value);
    {
        ITable* $tmp4304 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4304->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4304 = $tmp4304->next;
        }
        $fn4306 $tmp4305 = $tmp4304->methods[0];
        panda$collections$Iterator* $tmp4307 = $tmp4305(((panda$collections$Iterable*) p_block->children));
        s$Iter4303 = $tmp4307;
        $l4308:;
        ITable* $tmp4310 = s$Iter4303->$class->itable;
        while ($tmp4310->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4310 = $tmp4310->next;
        }
        $fn4312 $tmp4311 = $tmp4310->methods[0];
        panda$core$Bit $tmp4313 = $tmp4311(s$Iter4303);
        panda$core$Bit $tmp4314 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4313);
        if (!$tmp4314.value) goto $l4309;
        {
            ITable* $tmp4316 = s$Iter4303->$class->itable;
            while ($tmp4316->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4316 = $tmp4316->next;
            }
            $fn4318 $tmp4317 = $tmp4316->methods[1];
            panda$core$Object* $tmp4319 = $tmp4317(s$Iter4303);
            s4315 = ((org$pandalanguage$pandac$IRNode*) $tmp4319);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s4315, p_out);
        }
        goto $l4308;
        $l4309:;
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4320;
    panda$core$String* $match$2042_94321;
    panda$core$String* ptr4326;
    panda$core$String* arg4329;
    org$pandalanguage$pandac$Type* baseType4349;
    panda$core$String* base4353;
    panda$core$String* indexStruct4356;
    panda$core$String* index4359;
    panda$core$String* value4368;
    panda$core$String* ptr4372;
    panda$core$String* ptr4409;
    panda$core$String* cast4412;
    m4320 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$2042_94321 = ((org$pandalanguage$pandac$Symbol*) m4320->value)->name;
        panda$core$Bit $tmp4323 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$2042_94321, &$s4322);
        if ($tmp4323.value) {
        {
            panda$core$Int64 $tmp4324 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4324, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4325.value);
            panda$core$Object* $tmp4327 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4328 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4327), p_out);
            ptr4326 = $tmp4328;
            panda$core$Object* $tmp4330 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4331 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4330));
            panda$core$String* $tmp4332 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4331, p_out);
            arg4329 = $tmp4332;
            panda$core$String* $tmp4334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4333, arg4329);
            panda$core$String* $tmp4336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4334, &$s4335);
            panda$core$String* $tmp4337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4336, ptr4326);
            panda$core$String* $tmp4339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4337, &$s4338);
            (($fn4340) p_out->$class->vtable[19])(p_out, $tmp4339);
        }
        }
        else {
        panda$core$Bit $tmp4342 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$2042_94321, &$s4341);
        if ($tmp4342.value) {
        {
            panda$core$Int64 $tmp4343 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4343, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4344.value);
            panda$core$Object* $tmp4345 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4346 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4345));
            panda$core$Int64 $tmp4347 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4346->type->subtypes);
            panda$core$Bit $tmp4348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4347, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4348.value);
            panda$core$Object* $tmp4350 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4351 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4350));
            panda$core$Object* $tmp4352 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4351->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4349 = ((org$pandalanguage$pandac$Type*) $tmp4352);
            panda$core$Object* $tmp4354 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4355 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4354), p_out);
            base4353 = $tmp4355;
            panda$core$Object* $tmp4357 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4358 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4357), p_out);
            indexStruct4356 = $tmp4358;
            panda$core$String* $tmp4360 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4359 = $tmp4360;
            panda$core$String* $tmp4361 = panda$core$String$convert$R$panda$core$String(index4359);
            panda$core$String* $tmp4363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4361, &$s4362);
            panda$core$String* $tmp4364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4363, indexStruct4356);
            panda$core$String* $tmp4366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4364, &$s4365);
            (($fn4367) p_out->$class->vtable[19])(p_out, $tmp4366);
            panda$core$Object* $tmp4369 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4370 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4369));
            panda$core$String* $tmp4371 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4370, p_out);
            value4368 = $tmp4371;
            panda$core$String* $tmp4373 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4372 = $tmp4373;
            panda$core$String* $tmp4374 = panda$core$String$convert$R$panda$core$String(ptr4372);
            panda$core$String* $tmp4376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4374, &$s4375);
            panda$core$String* $tmp4377 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4349);
            panda$core$String* $tmp4378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4376, $tmp4377);
            panda$core$String* $tmp4380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4378, &$s4379);
            panda$core$String* $tmp4381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4380, base4353);
            panda$core$String* $tmp4383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4381, &$s4382);
            panda$core$String* $tmp4385 = panda$core$String$convert$R$panda$core$String(&$s4384);
            panda$core$String* $tmp4387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4385, &$s4386);
            panda$core$String* $tmp4388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4387, index4359);
            panda$core$String* $tmp4390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4388, &$s4389);
            panda$core$String* $tmp4391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4383, $tmp4390);
            (($fn4392) p_out->$class->vtable[19])(p_out, $tmp4391);
            panda$core$String* $tmp4394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4393, value4368);
            panda$core$String* $tmp4396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4394, &$s4395);
            panda$core$String* $tmp4397 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4349);
            panda$core$String* $tmp4398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4396, $tmp4397);
            panda$core$String* $tmp4400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4398, &$s4399);
            panda$core$String* $tmp4401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4400, ptr4372);
            panda$core$String* $tmp4403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4401, &$s4402);
            (($fn4404) p_out->$class->vtable[19])(p_out, $tmp4403);
        }
        }
        else {
        panda$core$Bit $tmp4406 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$2042_94321, &$s4405);
        if ($tmp4406.value) {
        {
            panda$core$Int64 $tmp4407 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4407, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4408.value);
            panda$core$Object* $tmp4410 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4411 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4410), p_out);
            ptr4409 = $tmp4411;
            panda$core$String* $tmp4413 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4412 = $tmp4413;
            panda$core$String* $tmp4414 = panda$core$String$convert$R$panda$core$String(cast4412);
            panda$core$String* $tmp4416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4414, &$s4415);
            panda$core$String* $tmp4417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4416, ptr4409);
            panda$core$String* $tmp4419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4417, &$s4418);
            (($fn4420) p_out->$class->vtable[19])(p_out, $tmp4419);
            panda$core$String* $tmp4422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4421, cast4412);
            panda$core$String* $tmp4424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4422, &$s4423);
            (($fn4425) p_out->$class->vtable[19])(p_out, $tmp4424);
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
    org$pandalanguage$pandac$MethodDecl* m4427;
    org$pandalanguage$pandac$Type* actualMethodType4430;
    panda$core$String* actualResultType4431;
    panda$core$Bit isSuper4432;
    panda$collections$Array* args4452;
    panda$core$Int64 offset4455;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4460;
    panda$core$String* arg4479;
    panda$core$String* refTarget4511;
    panda$core$String* methodRef4515;
    panda$core$String* separator4517;
    panda$core$String* indirectVar4521;
    panda$core$String* resultType4524;
    panda$collections$Iterator* a$Iter4566;
    panda$core$String* a4578;
    panda$core$Bit $tmp4426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4426.value);
    m4427 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4429 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4427->owner)->name, &$s4428);
    if ($tmp4429.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4427->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4427);
    }
    }
    panda$core$Int64 $tmp4434 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4435 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4434, ((panda$core$Int64) { 1 }));
    bool $tmp4433 = $tmp4435.value;
    if (!$tmp4433) goto $l4436;
    panda$core$Object* $tmp4437 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4437)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4433 = $tmp4438.value;
    $l4436:;
    panda$core$Bit $tmp4439 = { $tmp4433 };
    isSuper4432 = $tmp4439;
    panda$core$Bit $tmp4441 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4432);
    bool $tmp4440 = $tmp4441.value;
    if (!$tmp4440) goto $l4442;
    panda$core$Bit $tmp4443 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4427);
    $tmp4440 = $tmp4443.value;
    $l4442:;
    panda$core$Bit $tmp4444 = { $tmp4440 };
    if ($tmp4444.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4445 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4427);
        actualMethodType4430 = $tmp4445;
        panda$core$Int64 $tmp4446 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4430->subtypes);
        panda$core$Int64 $tmp4447 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4446, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4448 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4430->subtypes, $tmp4447);
        panda$core$String* $tmp4449 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4448));
        actualResultType4431 = $tmp4449;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4450 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4427);
        actualMethodType4430 = $tmp4450;
        panda$core$String* $tmp4451 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4431 = $tmp4451;
    }
    }
    panda$collections$Array* $tmp4453 = (panda$collections$Array*) malloc(40);
    $tmp4453->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4453->refCount.value = 1;
    panda$collections$Array$init($tmp4453);
    args4452 = $tmp4453;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4452, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4456 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4457 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4430->subtypes);
    panda$core$Int64 $tmp4458 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4456, $tmp4457);
    panda$core$Int64 $tmp4459 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4458, ((panda$core$Int64) { 1 }));
    offset4455 = $tmp4459;
    panda$core$Int64 $tmp4461 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4460, ((panda$core$Int64) { 0 }), $tmp4461, ((panda$core$Bit) { false }));
    int64_t $tmp4463 = $tmp4460.min.value;
    panda$core$Int64 i4462 = { $tmp4463 };
    int64_t $tmp4465 = $tmp4460.max.value;
    bool $tmp4466 = $tmp4460.inclusive.value;
    if ($tmp4466) goto $l4473; else goto $l4474;
    $l4473:;
    if ($tmp4463 <= $tmp4465) goto $l4467; else goto $l4469;
    $l4474:;
    if ($tmp4463 < $tmp4465) goto $l4467; else goto $l4469;
    $l4467:;
    {
        panda$core$Object* $tmp4475 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4462);
        panda$core$Bit $tmp4476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4475)->kind, ((panda$core$Int64) { 1025 }));
        if ($tmp4476.value) {
        {
            panda$core$Object* $tmp4477 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4462);
            panda$core$String* $tmp4478 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4477), p_out);
            panda$collections$Array$add$panda$collections$Array$T(args4452, ((panda$core$Object*) $tmp4478));
            goto $l4470;
        }
        }
        panda$core$Object* $tmp4480 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4462);
        panda$core$String* $tmp4481 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4480), p_out);
        arg4479 = $tmp4481;
        panda$core$Bit $tmp4483 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4462, offset4455);
        bool $tmp4482 = $tmp4483.value;
        if (!$tmp4482) goto $l4484;
        panda$core$Int64 $tmp4485 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4462, offset4455);
        panda$core$Object* $tmp4486 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4430->subtypes, $tmp4485);
        panda$core$Object* $tmp4487 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4462);
        panda$core$Bit $tmp4488 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4486), ((org$pandalanguage$pandac$IRNode*) $tmp4487)->type);
        $tmp4482 = $tmp4488.value;
        $l4484:;
        panda$core$Bit $tmp4489 = { $tmp4482 };
        if ($tmp4489.value) {
        {
            panda$core$Int64 $tmp4490 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4462, offset4455);
            panda$core$Object* $tmp4491 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4430->subtypes, $tmp4490);
            panda$core$String* $tmp4492 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4491));
            panda$core$String* $tmp4494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4492, &$s4493);
            panda$core$Object* $tmp4495 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4462);
            panda$core$Int64 $tmp4496 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4462, offset4455);
            panda$core$Object* $tmp4497 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4430->subtypes, $tmp4496);
            panda$core$String* $tmp4498 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg4479, ((org$pandalanguage$pandac$IRNode*) $tmp4495)->type, ((org$pandalanguage$pandac$Type*) $tmp4497), p_out);
            panda$core$String* $tmp4499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4494, $tmp4498);
            arg4479 = $tmp4499;
        }
        }
        else {
        {
            panda$core$Object* $tmp4500 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4462);
            panda$core$String* $tmp4501 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4500)->type);
            panda$core$String* $tmp4503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4501, &$s4502);
            panda$core$String* $tmp4504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4503, arg4479);
            arg4479 = $tmp4504;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4452, ((panda$core$Object*) arg4479));
    }
    $l4470:;
    int64_t $tmp4506 = $tmp4465 - i4462.value;
    if ($tmp4466) goto $l4507; else goto $l4508;
    $l4507:;
    if ($tmp4506 >= 1) goto $l4505; else goto $l4469;
    $l4508:;
    if ($tmp4506 > 1) goto $l4505; else goto $l4469;
    $l4505:;
    i4462.value += 1;
    goto $l4467;
    $l4469:;
    panda$core$Int64 $tmp4512 = panda$collections$Array$get_count$R$panda$core$Int64(args4452);
    panda$core$Bit $tmp4513 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4512, ((panda$core$Int64) { 0 }));
    if ($tmp4513.value) {
    {
        panda$core$Object* $tmp4514 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4452, ((panda$core$Int64) { 0 }));
        refTarget4511 = ((panda$core$String*) $tmp4514);
    }
    }
    else {
    {
        refTarget4511 = NULL;
    }
    }
    panda$core$String* $tmp4516 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, refTarget4511, m4427, isSuper4432, p_out);
    methodRef4515 = $tmp4516;
    separator4517 = &$s4518;
    panda$core$Bit $tmp4519 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4427);
    if ($tmp4519.value) {
    {
        panda$core$Int64 $tmp4520 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4520;
        panda$core$String* $tmp4523 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4522, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4521 = $tmp4523;
        panda$core$String* $tmp4525 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4524 = $tmp4525;
        panda$core$String* $tmp4526 = panda$core$String$convert$R$panda$core$String(indirectVar4521);
        panda$core$String* $tmp4528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4526, &$s4527);
        panda$core$String* $tmp4529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4528, resultType4524);
        panda$core$String* $tmp4531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4529, &$s4530);
        (($fn4532) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4531);
        panda$core$String* $tmp4534 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4427);
        panda$core$String* $tmp4535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4533, $tmp4534);
        panda$core$String* $tmp4537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4535, &$s4536);
        panda$core$String* $tmp4538 = panda$core$String$convert$R$panda$core$String(methodRef4515);
        panda$core$String* $tmp4540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4538, &$s4539);
        panda$core$String* $tmp4541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4540, resultType4524);
        panda$core$String* $tmp4543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4541, &$s4542);
        panda$core$String* $tmp4544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4543, indirectVar4521);
        panda$core$String* $tmp4546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4544, &$s4545);
        panda$core$String* $tmp4547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4537, $tmp4546);
        (($fn4548) p_out->$class->vtable[16])(p_out, $tmp4547);
        separator4517 = &$s4549;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4550 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4551 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4550);
        if ($tmp4551.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4553 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4427);
        panda$core$String* $tmp4554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4552, $tmp4553);
        panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4554, &$s4555);
        panda$core$String* $tmp4557 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, $tmp4557);
        panda$core$String* $tmp4560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4558, &$s4559);
        panda$core$String* $tmp4561 = panda$core$String$convert$R$panda$core$String(methodRef4515);
        panda$core$String* $tmp4563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4561, &$s4562);
        panda$core$String* $tmp4564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4560, $tmp4563);
        (($fn4565) p_out->$class->vtable[16])(p_out, $tmp4564);
    }
    }
    {
        ITable* $tmp4567 = ((panda$collections$Iterable*) args4452)->$class->itable;
        while ($tmp4567->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4567 = $tmp4567->next;
        }
        $fn4569 $tmp4568 = $tmp4567->methods[0];
        panda$collections$Iterator* $tmp4570 = $tmp4568(((panda$collections$Iterable*) args4452));
        a$Iter4566 = $tmp4570;
        $l4571:;
        ITable* $tmp4573 = a$Iter4566->$class->itable;
        while ($tmp4573->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4573 = $tmp4573->next;
        }
        $fn4575 $tmp4574 = $tmp4573->methods[0];
        panda$core$Bit $tmp4576 = $tmp4574(a$Iter4566);
        panda$core$Bit $tmp4577 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4576);
        if (!$tmp4577.value) goto $l4572;
        {
            ITable* $tmp4579 = a$Iter4566->$class->itable;
            while ($tmp4579->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4579 = $tmp4579->next;
            }
            $fn4581 $tmp4580 = $tmp4579->methods[1];
            panda$core$Object* $tmp4582 = $tmp4580(a$Iter4566);
            a4578 = ((panda$core$String*) $tmp4582);
            (($fn4583) p_out->$class->vtable[16])(p_out, separator4517);
            (($fn4584) p_out->$class->vtable[16])(p_out, a4578);
            separator4517 = &$s4585;
        }
        goto $l4571;
        $l4572:;
    }
    (($fn4587) p_out->$class->vtable[19])(p_out, &$s4586);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* test4599;
    panda$core$String* testBit4602;
    panda$core$String* ifTrue4611;
    panda$core$String* ifFalse4613;
    panda$core$String* end4627;
    panda$core$Bit $tmp4588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4588.value);
    panda$core$Int64 $tmp4590 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4590, ((panda$core$Int64) { 2 }));
    bool $tmp4589 = $tmp4591.value;
    if ($tmp4589) goto $l4592;
    panda$core$Int64 $tmp4593 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4593, ((panda$core$Int64) { 3 }));
    $tmp4589 = $tmp4594.value;
    $l4592:;
    panda$core$Bit $tmp4595 = { $tmp4589 };
    PANDA_ASSERT($tmp4595.value);
    panda$core$Object* $tmp4596 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4597 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4598 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4596)->type, $tmp4597);
    PANDA_ASSERT($tmp4598.value);
    panda$core$Object* $tmp4600 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4601 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4600), p_out);
    test4599 = $tmp4601;
    panda$core$String* $tmp4603 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4602 = $tmp4603;
    panda$core$String* $tmp4604 = panda$core$String$convert$R$panda$core$String(testBit4602);
    panda$core$String* $tmp4606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4604, &$s4605);
    panda$core$String* $tmp4607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4606, test4599);
    panda$core$String* $tmp4609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4607, &$s4608);
    (($fn4610) p_out->$class->vtable[19])(p_out, $tmp4609);
    panda$core$String* $tmp4612 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4611 = $tmp4612;
    panda$core$String* $tmp4614 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4613 = $tmp4614;
    panda$core$String* $tmp4616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4615, testBit4602);
    panda$core$String* $tmp4618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4616, &$s4617);
    panda$core$String* $tmp4619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4618, ifTrue4611);
    panda$core$String* $tmp4621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4619, &$s4620);
    panda$core$String* $tmp4622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4621, ifFalse4613);
    panda$core$String* $tmp4624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4622, &$s4623);
    (($fn4625) p_out->$class->vtable[19])(p_out, $tmp4624);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue4611, p_out);
    panda$core$Object* $tmp4626 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4626), p_out);
    panda$core$Int64 $tmp4628 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
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
    panda$core$Object* $tmp4631 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4632 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4631));
    panda$core$Bit $tmp4633 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4632);
    if ($tmp4633.value) {
    {
        panda$core$String* $tmp4635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4634, end4627);
        panda$core$String* $tmp4637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4635, &$s4636);
        (($fn4638) p_out->$class->vtable[19])(p_out, $tmp4637);
    }
    }
    panda$core$Int64 $tmp4639 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4639, ((panda$core$Int64) { 3 }));
    if ($tmp4640.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse4613, p_out);
        panda$core$Object* $tmp4641 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4641), p_out);
        panda$core$Object* $tmp4642 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4643 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4642));
        panda$core$Bit $tmp4644 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4643);
        if ($tmp4644.value) {
        {
            panda$core$String* $tmp4646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4645, end4627);
            panda$core$String* $tmp4648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4646, &$s4647);
            (($fn4649) p_out->$class->vtable[19])(p_out, $tmp4648);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end4627, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4653;
    panda$core$String* range4664;
    org$pandalanguage$pandac$IRNode* block4667;
    org$pandalanguage$pandac$Type* t4669;
    panda$core$String* llt4672;
    panda$core$String* indexType4674;
    org$pandalanguage$pandac$ClassDecl* cl4680;
    panda$core$String* numberType4688;
    panda$core$String* index4696;
    panda$core$String* start4705;
    panda$core$String* indexValuePtr4714;
    panda$core$String* end4745;
    panda$core$String* inclusive4754;
    panda$core$String* loopStart4763;
    panda$core$String* loopBody4765;
    panda$core$String* loopEnd4767;
    panda$core$String* loopTest4769;
    panda$core$String* forwardEntry4773;
    panda$core$String* backwardEntry4775;
    panda$core$String* signPrefix4777;
    panda$core$String* forwardEntryInclusive4789;
    panda$core$String* forwardEntryExclusive4791;
    panda$core$String* forwardEntryInclusiveTest4806;
    panda$core$String* forwardEntryExclusiveTest4836;
    panda$core$String* indexValue4866;
    panda$core$String* loopInc4888;
    panda$core$String* forwardDelta4890;
    panda$core$String* forwardInclusiveLabel4905;
    panda$core$String* forwardExclusiveLabel4907;
    panda$core$String* forwardInclusiveTest4918;
    panda$core$String* forwardExclusiveTest4941;
    panda$core$String* inc4964;
    panda$core$String* incStruct4976;
    panda$core$Bit $tmp4650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4650.value);
    panda$core$Int64 $tmp4651 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4651, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4652.value);
    panda$core$Object* $tmp4654 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4653 = ((org$pandalanguage$pandac$IRNode*) $tmp4654);
    panda$core$Object* $tmp4655 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4655)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4656.value);
    panda$core$Object* $tmp4657 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4658 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4657)->type->subtypes);
    panda$core$Bit $tmp4659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4658, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4659.value);
    panda$core$Object* $tmp4660 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4661 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4660)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4663 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4661))->name, &$s4662);
    PANDA_ASSERT($tmp4663.value);
    panda$core$Object* $tmp4665 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4666 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4665), p_out);
    range4664 = $tmp4666;
    panda$core$Object* $tmp4668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4667 = ((org$pandalanguage$pandac$IRNode*) $tmp4668);
    panda$core$Object* $tmp4670 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
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
    panda$core$String* $tmp4698 = panda$core$String$convert$R$panda$core$String(index4696);
    panda$core$String* $tmp4700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4698, &$s4699);
    panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4700, indexType4674);
    panda$core$String* $tmp4703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4701, &$s4702);
    (($fn4704) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4703);
    panda$core$String* $tmp4706 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4705 = $tmp4706;
    panda$core$String* $tmp4707 = panda$core$String$convert$R$panda$core$String(start4705);
    panda$core$String* $tmp4709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4707, &$s4708);
    panda$core$String* $tmp4710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4709, range4664);
    panda$core$String* $tmp4712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4710, &$s4711);
    (($fn4713) p_out->$class->vtable[19])(p_out, $tmp4712);
    panda$core$String* $tmp4715 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4714 = $tmp4715;
    panda$core$String* $tmp4716 = panda$core$String$convert$R$panda$core$String(indexValuePtr4714);
    panda$core$String* $tmp4718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4716, &$s4717);
    panda$core$String* $tmp4719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4718, indexType4674);
    panda$core$String* $tmp4721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4719, &$s4720);
    panda$core$String* $tmp4722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4721, indexType4674);
    panda$core$String* $tmp4724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4722, &$s4723);
    panda$core$String* $tmp4725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4724, index4696);
    panda$core$String* $tmp4727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4725, &$s4726);
    panda$core$String* $tmp4729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4727, &$s4728);
    (($fn4730) p_out->$class->vtable[19])(p_out, $tmp4729);
    panda$core$String* $tmp4732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4731, numberType4688);
    panda$core$String* $tmp4734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4732, &$s4733);
    panda$core$String* $tmp4735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4734, start4705);
    panda$core$String* $tmp4737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4735, &$s4736);
    panda$core$String* $tmp4738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4737, numberType4688);
    panda$core$String* $tmp4740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4738, &$s4739);
    panda$core$String* $tmp4741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4740, indexValuePtr4714);
    panda$core$String* $tmp4743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4741, &$s4742);
    (($fn4744) p_out->$class->vtable[19])(p_out, $tmp4743);
    panda$core$String* $tmp4746 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4745 = $tmp4746;
    panda$core$String* $tmp4747 = panda$core$String$convert$R$panda$core$String(end4745);
    panda$core$String* $tmp4749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4747, &$s4748);
    panda$core$String* $tmp4750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4749, range4664);
    panda$core$String* $tmp4752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4750, &$s4751);
    (($fn4753) p_out->$class->vtable[19])(p_out, $tmp4752);
    panda$core$String* $tmp4755 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4754 = $tmp4755;
    panda$core$String* $tmp4756 = panda$core$String$convert$R$panda$core$String(inclusive4754);
    panda$core$String* $tmp4758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4756, &$s4757);
    panda$core$String* $tmp4759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4758, range4664);
    panda$core$String* $tmp4761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4759, &$s4760);
    (($fn4762) p_out->$class->vtable[19])(p_out, $tmp4761);
    panda$core$String* $tmp4764 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4763 = $tmp4764;
    panda$core$String* $tmp4766 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4765 = $tmp4766;
    panda$core$String* $tmp4768 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4767 = $tmp4768;
    panda$core$String* $tmp4770 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4769 = $tmp4770;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4771 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4771->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4771->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4771, ((panda$core$String*) p_f->payload), loopEnd4767, loopTest4769);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4771));
    panda$core$String* $tmp4774 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4773 = $tmp4774;
    panda$core$String* $tmp4776 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4775 = $tmp4776;
    panda$core$Bit $tmp4779 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4669)->name, &$s4778);
    if ($tmp4779.value) {
    {
        signPrefix4777 = &$s4780;
    }
    }
    else {
    {
        panda$core$Bit $tmp4783 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4669)->name, &$s4782);
        bool $tmp4781 = $tmp4783.value;
        if ($tmp4781) goto $l4784;
        panda$core$Bit $tmp4786 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4669)->name, &$s4785);
        $tmp4781 = $tmp4786.value;
        $l4784:;
        panda$core$Bit $tmp4787 = { $tmp4781 };
        PANDA_ASSERT($tmp4787.value);
        signPrefix4777 = &$s4788;
    }
    }
    panda$core$String* $tmp4790 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4789 = $tmp4790;
    panda$core$String* $tmp4792 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4791 = $tmp4792;
    panda$core$String* $tmp4794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4793, inclusive4754);
    panda$core$String* $tmp4796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4794, &$s4795);
    panda$core$String* $tmp4797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4796, forwardEntryInclusive4789);
    panda$core$String* $tmp4799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4797, &$s4798);
    panda$core$String* $tmp4801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4800, forwardEntryExclusive4791);
    panda$core$String* $tmp4803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4801, &$s4802);
    panda$core$String* $tmp4804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4799, $tmp4803);
    (($fn4805) p_out->$class->vtable[19])(p_out, $tmp4804);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive4789, p_out);
    panda$core$String* $tmp4807 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4806 = $tmp4807;
    panda$core$String* $tmp4808 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4806);
    panda$core$String* $tmp4810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4808, &$s4809);
    panda$core$String* $tmp4811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4810, signPrefix4777);
    panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4811, &$s4812);
    panda$core$String* $tmp4814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4813, numberType4688);
    panda$core$String* $tmp4816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, &$s4815);
    panda$core$String* $tmp4817 = panda$core$String$convert$R$panda$core$String(start4705);
    panda$core$String* $tmp4819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4817, &$s4818);
    panda$core$String* $tmp4820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4819, end4745);
    panda$core$String* $tmp4822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4820, &$s4821);
    panda$core$String* $tmp4823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4816, $tmp4822);
    (($fn4824) p_out->$class->vtable[19])(p_out, $tmp4823);
    panda$core$String* $tmp4826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4825, forwardEntryInclusiveTest4806);
    panda$core$String* $tmp4828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4826, &$s4827);
    panda$core$String* $tmp4829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4828, loopStart4763);
    panda$core$String* $tmp4831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4829, &$s4830);
    panda$core$String* $tmp4832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4831, loopEnd4767);
    panda$core$String* $tmp4834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4832, &$s4833);
    (($fn4835) p_out->$class->vtable[19])(p_out, $tmp4834);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive4791, p_out);
    panda$core$String* $tmp4837 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4836 = $tmp4837;
    panda$core$String* $tmp4838 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4836);
    panda$core$String* $tmp4840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4838, &$s4839);
    panda$core$String* $tmp4841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4840, signPrefix4777);
    panda$core$String* $tmp4843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4841, &$s4842);
    panda$core$String* $tmp4844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4843, numberType4688);
    panda$core$String* $tmp4846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4844, &$s4845);
    panda$core$String* $tmp4847 = panda$core$String$convert$R$panda$core$String(start4705);
    panda$core$String* $tmp4849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4847, &$s4848);
    panda$core$String* $tmp4850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4849, end4745);
    panda$core$String* $tmp4852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4850, &$s4851);
    panda$core$String* $tmp4853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4846, $tmp4852);
    (($fn4854) p_out->$class->vtable[19])(p_out, $tmp4853);
    panda$core$String* $tmp4856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4855, forwardEntryExclusiveTest4836);
    panda$core$String* $tmp4858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4856, &$s4857);
    panda$core$String* $tmp4859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4858, loopStart4763);
    panda$core$String* $tmp4861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4859, &$s4860);
    panda$core$String* $tmp4862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4861, loopEnd4767);
    panda$core$String* $tmp4864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4862, &$s4863);
    (($fn4865) p_out->$class->vtable[19])(p_out, $tmp4864);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart4763, p_out);
    panda$core$String* $tmp4867 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4866 = $tmp4867;
    panda$core$String* $tmp4868 = panda$core$String$convert$R$panda$core$String(indexValue4866);
    panda$core$String* $tmp4870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4868, &$s4869);
    panda$core$String* $tmp4871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4870, numberType4688);
    panda$core$String* $tmp4873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4871, &$s4872);
    panda$core$String* $tmp4874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4873, numberType4688);
    panda$core$String* $tmp4876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4874, &$s4875);
    panda$core$String* $tmp4877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4876, indexValuePtr4714);
    panda$core$String* $tmp4879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4877, &$s4878);
    (($fn4880) p_out->$class->vtable[19])(p_out, $tmp4879);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block4667, p_out);
    panda$core$Bit $tmp4881 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4667);
    panda$core$Bit $tmp4882 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4881);
    if ($tmp4882.value) {
    {
        panda$core$String* $tmp4884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4883, loopTest4769);
        panda$core$String* $tmp4886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4884, &$s4885);
        (($fn4887) p_out->$class->vtable[19])(p_out, $tmp4886);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest4769, p_out);
    panda$core$String* $tmp4889 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc4888 = $tmp4889;
    panda$core$String* $tmp4891 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta4890 = $tmp4891;
    panda$core$String* $tmp4892 = panda$core$String$convert$R$panda$core$String(forwardDelta4890);
    panda$core$String* $tmp4894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4892, &$s4893);
    panda$core$String* $tmp4895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4894, numberType4688);
    panda$core$String* $tmp4897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4895, &$s4896);
    panda$core$String* $tmp4898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4897, end4745);
    panda$core$String* $tmp4900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4898, &$s4899);
    panda$core$String* $tmp4901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4900, indexValue4866);
    panda$core$String* $tmp4903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4901, &$s4902);
    (($fn4904) p_out->$class->vtable[19])(p_out, $tmp4903);
    panda$core$String* $tmp4906 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel4905 = $tmp4906;
    panda$core$String* $tmp4908 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel4907 = $tmp4908;
    panda$core$String* $tmp4910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4909, inclusive4754);
    panda$core$String* $tmp4912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4910, &$s4911);
    panda$core$String* $tmp4913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4912, forwardInclusiveLabel4905);
    panda$core$String* $tmp4915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4913, &$s4914);
    panda$core$String* $tmp4916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4915, forwardExclusiveLabel4907);
    (($fn4917) p_out->$class->vtable[19])(p_out, $tmp4916);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel4905, p_out);
    panda$core$String* $tmp4919 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest4918 = $tmp4919;
    panda$core$String* $tmp4920 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest4918);
    panda$core$String* $tmp4922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4920, &$s4921);
    panda$core$String* $tmp4923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4922, numberType4688);
    panda$core$String* $tmp4925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4923, &$s4924);
    panda$core$String* $tmp4926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4925, forwardDelta4890);
    panda$core$String* $tmp4928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4926, &$s4927);
    (($fn4929) p_out->$class->vtable[19])(p_out, $tmp4928);
    panda$core$String* $tmp4931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4930, forwardInclusiveTest4918);
    panda$core$String* $tmp4933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4931, &$s4932);
    panda$core$String* $tmp4934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4933, loopInc4888);
    panda$core$String* $tmp4936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4934, &$s4935);
    panda$core$String* $tmp4937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4936, loopEnd4767);
    panda$core$String* $tmp4939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4937, &$s4938);
    (($fn4940) p_out->$class->vtable[19])(p_out, $tmp4939);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel4907, p_out);
    panda$core$String* $tmp4942 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest4941 = $tmp4942;
    panda$core$String* $tmp4943 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest4941);
    panda$core$String* $tmp4945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4943, &$s4944);
    panda$core$String* $tmp4946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4945, numberType4688);
    panda$core$String* $tmp4948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4946, &$s4947);
    panda$core$String* $tmp4949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4948, forwardDelta4890);
    panda$core$String* $tmp4951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4949, &$s4950);
    (($fn4952) p_out->$class->vtable[19])(p_out, $tmp4951);
    panda$core$String* $tmp4954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4953, forwardExclusiveTest4941);
    panda$core$String* $tmp4956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4954, &$s4955);
    panda$core$String* $tmp4957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4956, loopInc4888);
    panda$core$String* $tmp4959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4957, &$s4958);
    panda$core$String* $tmp4960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4959, loopEnd4767);
    panda$core$String* $tmp4962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4960, &$s4961);
    (($fn4963) p_out->$class->vtable[19])(p_out, $tmp4962);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc4888, p_out);
    panda$core$String* $tmp4965 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc4964 = $tmp4965;
    panda$core$String* $tmp4966 = panda$core$String$convert$R$panda$core$String(inc4964);
    panda$core$String* $tmp4968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4966, &$s4967);
    panda$core$String* $tmp4969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4968, numberType4688);
    panda$core$String* $tmp4971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4969, &$s4970);
    panda$core$String* $tmp4972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4971, indexValue4866);
    panda$core$String* $tmp4974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4972, &$s4973);
    (($fn4975) p_out->$class->vtable[19])(p_out, $tmp4974);
    panda$core$String* $tmp4977 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct4976 = $tmp4977;
    panda$core$String* $tmp4978 = panda$core$String$convert$R$panda$core$String(incStruct4976);
    panda$core$String* $tmp4980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4978, &$s4979);
    panda$core$String* $tmp4981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4980, indexType4674);
    panda$core$String* $tmp4983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4981, &$s4982);
    panda$core$String* $tmp4984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4983, numberType4688);
    panda$core$String* $tmp4986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4984, &$s4985);
    (($fn4987) p_out->$class->vtable[19])(p_out, $tmp4986);
    panda$core$String* $tmp4989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4988, numberType4688);
    panda$core$String* $tmp4991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4989, &$s4990);
    panda$core$String* $tmp4992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4991, inc4964);
    panda$core$String* $tmp4994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4992, &$s4993);
    (($fn4995) p_out->$class->vtable[19])(p_out, $tmp4994);
    panda$core$String* $tmp4997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4996, indexType4674);
    panda$core$String* $tmp4999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4997, &$s4998);
    panda$core$String* $tmp5000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4999, incStruct4976);
    panda$core$String* $tmp5002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5000, &$s5001);
    panda$core$String* $tmp5003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5002, indexType4674);
    panda$core$String* $tmp5005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5003, &$s5004);
    panda$core$String* $tmp5006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5005, index4696);
    panda$core$String* $tmp5008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5006, &$s5007);
    (($fn5009) p_out->$class->vtable[19])(p_out, $tmp5008);
    panda$core$String* $tmp5011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5010, loopStart4763);
    panda$core$String* $tmp5013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5011, &$s5012);
    (($fn5014) p_out->$class->vtable[19])(p_out, $tmp5013);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd4767, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target5018;
    panda$core$String* range5029;
    org$pandalanguage$pandac$IRNode* block5032;
    org$pandalanguage$pandac$Type* t5034;
    panda$core$String* llt5037;
    panda$core$String* indexType5039;
    org$pandalanguage$pandac$ClassDecl* cl5045;
    panda$core$String* numberType5053;
    panda$core$String* index5061;
    panda$core$String* start5070;
    panda$core$String* indexValuePtr5079;
    panda$core$String* end5110;
    panda$core$String* rawStep5119;
    panda$core$String* step5128;
    panda$core$String* inclusive5142;
    panda$core$String* loopStart5151;
    panda$core$String* loopBody5153;
    panda$core$String* loopEnd5155;
    panda$core$String* loopTest5157;
    panda$core$String* forwardEntry5161;
    panda$core$String* backwardEntry5163;
    panda$core$String* signPrefix5165;
    panda$core$String* direction5177;
    panda$core$String* forwardEntryInclusive5203;
    panda$core$String* forwardEntryExclusive5205;
    panda$core$String* forwardEntryInclusiveTest5220;
    panda$core$String* forwardEntryExclusiveTest5250;
    panda$core$String* backwardEntryInclusive5280;
    panda$core$String* backwardEntryExclusive5282;
    panda$core$String* backwardEntryInclusiveTest5297;
    panda$core$String* backwardEntryExclusiveTest5327;
    panda$core$String* indexValue5357;
    panda$core$String* loopInc5379;
    panda$core$String* forwardLabel5381;
    panda$core$String* backwardLabel5383;
    panda$core$String* forwardDelta5396;
    panda$core$String* forwardInclusiveLabel5411;
    panda$core$String* forwardExclusiveLabel5413;
    panda$core$String* forwardInclusiveTest5424;
    panda$core$String* forwardExclusiveTest5450;
    panda$core$String* backwardDelta5476;
    panda$core$String* negStep5491;
    panda$core$String* backwardInclusiveLabel5503;
    panda$core$String* backwardExclusiveLabel5505;
    panda$core$String* backwardInclusiveTest5516;
    panda$core$String* backwardExclusiveTest5540;
    panda$core$String* inc5564;
    panda$core$String* incStruct5579;
    panda$core$Bit $tmp5015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp5015.value);
    panda$core$Int64 $tmp5016 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp5017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5016, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp5017.value);
    panda$core$Object* $tmp5019 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target5018 = ((org$pandalanguage$pandac$IRNode*) $tmp5019);
    panda$core$Object* $tmp5020 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5020)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp5021.value);
    panda$core$Object* $tmp5022 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp5023 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp5022)->type->subtypes);
    panda$core$Bit $tmp5024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5023, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp5024.value);
    panda$core$Object* $tmp5025 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5026 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp5025)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5028 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp5026))->name, &$s5027);
    PANDA_ASSERT($tmp5028.value);
    panda$core$Object* $tmp5030 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5031 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5030), p_out);
    range5029 = $tmp5031;
    panda$core$Object* $tmp5033 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block5032 = ((org$pandalanguage$pandac$IRNode*) $tmp5033);
    panda$core$Object* $tmp5035 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5036 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp5035)->type->subtypes, ((panda$core$Int64) { 1 }));
    t5034 = ((org$pandalanguage$pandac$Type*) $tmp5036);
    panda$core$String* $tmp5038 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t5034);
    llt5037 = $tmp5038;
    panda$core$Bit $tmp5040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t5034->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp5040.value) {
    {
        panda$core$Int64 $tmp5041 = panda$collections$Array$get_count$R$panda$core$Int64(t5034->subtypes);
        panda$core$Bit $tmp5042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5041, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp5042.value);
        panda$core$Object* $tmp5043 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t5034->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp5044 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp5043));
        indexType5039 = $tmp5044;
    }
    }
    else {
    {
        indexType5039 = llt5037;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp5046 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t5034);
    cl5045 = $tmp5046;
    PANDA_ASSERT(((panda$core$Bit) { cl5045 != NULL }).value);
    panda$collections$ListView* $tmp5047 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5045);
    ITable* $tmp5048 = ((panda$collections$CollectionView*) $tmp5047)->$class->itable;
    while ($tmp5048->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp5048 = $tmp5048->next;
    }
    $fn5050 $tmp5049 = $tmp5048->methods[0];
    panda$core$Int64 $tmp5051 = $tmp5049(((panda$collections$CollectionView*) $tmp5047));
    panda$core$Bit $tmp5052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5051, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5052.value);
    panda$collections$ListView* $tmp5054 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5045);
    ITable* $tmp5055 = $tmp5054->$class->itable;
    while ($tmp5055->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp5055 = $tmp5055->next;
    }
    $fn5057 $tmp5056 = $tmp5055->methods[0];
    panda$core$Object* $tmp5058 = $tmp5056($tmp5054, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5059 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp5058)->type);
    numberType5053 = $tmp5059;
    panda$core$Bit $tmp5060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target5018->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp5060.value);
    panda$core$String* $tmp5062 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target5018->payload));
    index5061 = $tmp5062;
    panda$core$String* $tmp5063 = panda$core$String$convert$R$panda$core$String(index5061);
    panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5063, &$s5064);
    panda$core$String* $tmp5066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5065, indexType5039);
    panda$core$String* $tmp5068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5066, &$s5067);
    (($fn5069) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5068);
    panda$core$String* $tmp5071 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start5070 = $tmp5071;
    panda$core$String* $tmp5072 = panda$core$String$convert$R$panda$core$String(start5070);
    panda$core$String* $tmp5074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5072, &$s5073);
    panda$core$String* $tmp5075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5074, range5029);
    panda$core$String* $tmp5077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5075, &$s5076);
    (($fn5078) p_out->$class->vtable[19])(p_out, $tmp5077);
    panda$core$String* $tmp5080 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr5079 = $tmp5080;
    panda$core$String* $tmp5081 = panda$core$String$convert$R$panda$core$String(indexValuePtr5079);
    panda$core$String* $tmp5083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5081, &$s5082);
    panda$core$String* $tmp5084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5083, indexType5039);
    panda$core$String* $tmp5086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5084, &$s5085);
    panda$core$String* $tmp5087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5086, indexType5039);
    panda$core$String* $tmp5089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5087, &$s5088);
    panda$core$String* $tmp5090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5089, index5061);
    panda$core$String* $tmp5092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5090, &$s5091);
    panda$core$String* $tmp5094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5092, &$s5093);
    (($fn5095) p_out->$class->vtable[19])(p_out, $tmp5094);
    panda$core$String* $tmp5097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5096, numberType5053);
    panda$core$String* $tmp5099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5097, &$s5098);
    panda$core$String* $tmp5100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5099, start5070);
    panda$core$String* $tmp5102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5100, &$s5101);
    panda$core$String* $tmp5103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5102, numberType5053);
    panda$core$String* $tmp5105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5103, &$s5104);
    panda$core$String* $tmp5106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5105, indexValuePtr5079);
    panda$core$String* $tmp5108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5106, &$s5107);
    (($fn5109) p_out->$class->vtable[19])(p_out, $tmp5108);
    panda$core$String* $tmp5111 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end5110 = $tmp5111;
    panda$core$String* $tmp5112 = panda$core$String$convert$R$panda$core$String(end5110);
    panda$core$String* $tmp5114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5112, &$s5113);
    panda$core$String* $tmp5115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5114, range5029);
    panda$core$String* $tmp5117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5115, &$s5116);
    (($fn5118) p_out->$class->vtable[19])(p_out, $tmp5117);
    panda$core$String* $tmp5120 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep5119 = $tmp5120;
    panda$core$String* $tmp5121 = panda$core$String$convert$R$panda$core$String(rawStep5119);
    panda$core$String* $tmp5123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5121, &$s5122);
    panda$core$String* $tmp5124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5123, range5029);
    panda$core$String* $tmp5126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5124, &$s5125);
    (($fn5127) p_out->$class->vtable[19])(p_out, $tmp5126);
    panda$core$Bit $tmp5130 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType5053, &$s5129);
    if ($tmp5130.value) {
    {
        panda$core$String* $tmp5131 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step5128 = $tmp5131;
        panda$core$String* $tmp5132 = panda$core$String$convert$R$panda$core$String(step5128);
        panda$core$String* $tmp5134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5132, &$s5133);
        panda$core$String* $tmp5135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5134, rawStep5119);
        panda$core$String* $tmp5137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5135, &$s5136);
        panda$core$String* $tmp5138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5137, numberType5053);
        panda$core$String* $tmp5140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5138, &$s5139);
        (($fn5141) p_out->$class->vtable[19])(p_out, $tmp5140);
    }
    }
    else {
    {
        step5128 = rawStep5119;
    }
    }
    panda$core$String* $tmp5143 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive5142 = $tmp5143;
    panda$core$String* $tmp5144 = panda$core$String$convert$R$panda$core$String(inclusive5142);
    panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5144, &$s5145);
    panda$core$String* $tmp5147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5146, range5029);
    panda$core$String* $tmp5149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5147, &$s5148);
    (($fn5150) p_out->$class->vtable[19])(p_out, $tmp5149);
    panda$core$String* $tmp5152 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5151 = $tmp5152;
    panda$core$String* $tmp5154 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5153 = $tmp5154;
    panda$core$String* $tmp5156 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5155 = $tmp5156;
    panda$core$String* $tmp5158 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest5157 = $tmp5158;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5159 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5159->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5159->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5159, ((panda$core$String*) p_f->payload), loopEnd5155, loopTest5157);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5159));
    panda$core$String* $tmp5162 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry5161 = $tmp5162;
    panda$core$String* $tmp5164 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry5163 = $tmp5164;
    panda$core$Bit $tmp5167 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t5034)->name, &$s5166);
    if ($tmp5167.value) {
    {
        signPrefix5165 = &$s5168;
    }
    }
    else {
    {
        panda$core$Bit $tmp5171 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t5034)->name, &$s5170);
        bool $tmp5169 = $tmp5171.value;
        if ($tmp5169) goto $l5172;
        panda$core$Bit $tmp5174 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t5034)->name, &$s5173);
        $tmp5169 = $tmp5174.value;
        $l5172:;
        panda$core$Bit $tmp5175 = { $tmp5169 };
        PANDA_ASSERT($tmp5175.value);
        signPrefix5165 = &$s5176;
    }
    }
    panda$core$Bit $tmp5179 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix5165, &$s5178);
    if ($tmp5179.value) {
    {
        panda$core$String* $tmp5180 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction5177 = $tmp5180;
        panda$core$String* $tmp5181 = panda$core$String$convert$R$panda$core$String(direction5177);
        panda$core$String* $tmp5183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5181, &$s5182);
        panda$core$String* $tmp5184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5183, numberType5053);
        panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5184, &$s5185);
        panda$core$String* $tmp5187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5186, step5128);
        panda$core$String* $tmp5189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5187, &$s5188);
        (($fn5190) p_out->$class->vtable[19])(p_out, $tmp5189);
    }
    }
    else {
    {
        direction5177 = &$s5191;
    }
    }
    panda$core$String* $tmp5193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5192, direction5177);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5193, &$s5194);
    panda$core$String* $tmp5196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, forwardEntry5161);
    panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5196, &$s5197);
    panda$core$String* $tmp5199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5198, backwardEntry5163);
    panda$core$String* $tmp5201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5199, &$s5200);
    (($fn5202) p_out->$class->vtable[19])(p_out, $tmp5201);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntry5161, p_out);
    panda$core$String* $tmp5204 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive5203 = $tmp5204;
    panda$core$String* $tmp5206 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive5205 = $tmp5206;
    panda$core$String* $tmp5208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5207, inclusive5142);
    panda$core$String* $tmp5210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5208, &$s5209);
    panda$core$String* $tmp5211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5210, forwardEntryInclusive5203);
    panda$core$String* $tmp5213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5211, &$s5212);
    panda$core$String* $tmp5215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5214, forwardEntryExclusive5205);
    panda$core$String* $tmp5217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5215, &$s5216);
    panda$core$String* $tmp5218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5213, $tmp5217);
    (($fn5219) p_out->$class->vtable[19])(p_out, $tmp5218);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive5203, p_out);
    panda$core$String* $tmp5221 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest5220 = $tmp5221;
    panda$core$String* $tmp5222 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest5220);
    panda$core$String* $tmp5224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5222, &$s5223);
    panda$core$String* $tmp5225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5224, signPrefix5165);
    panda$core$String* $tmp5227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5225, &$s5226);
    panda$core$String* $tmp5228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5227, numberType5053);
    panda$core$String* $tmp5230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5228, &$s5229);
    panda$core$String* $tmp5231 = panda$core$String$convert$R$panda$core$String(start5070);
    panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5231, &$s5232);
    panda$core$String* $tmp5234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5233, end5110);
    panda$core$String* $tmp5236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5234, &$s5235);
    panda$core$String* $tmp5237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5230, $tmp5236);
    (($fn5238) p_out->$class->vtable[19])(p_out, $tmp5237);
    panda$core$String* $tmp5240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5239, forwardEntryInclusiveTest5220);
    panda$core$String* $tmp5242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5240, &$s5241);
    panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5242, loopStart5151);
    panda$core$String* $tmp5245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5243, &$s5244);
    panda$core$String* $tmp5246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5245, loopEnd5155);
    panda$core$String* $tmp5248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5246, &$s5247);
    (($fn5249) p_out->$class->vtable[19])(p_out, $tmp5248);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive5205, p_out);
    panda$core$String* $tmp5251 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest5250 = $tmp5251;
    panda$core$String* $tmp5252 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest5250);
    panda$core$String* $tmp5254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5252, &$s5253);
    panda$core$String* $tmp5255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5254, signPrefix5165);
    panda$core$String* $tmp5257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5255, &$s5256);
    panda$core$String* $tmp5258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5257, numberType5053);
    panda$core$String* $tmp5260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5258, &$s5259);
    panda$core$String* $tmp5261 = panda$core$String$convert$R$panda$core$String(start5070);
    panda$core$String* $tmp5263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5261, &$s5262);
    panda$core$String* $tmp5264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5263, end5110);
    panda$core$String* $tmp5266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5264, &$s5265);
    panda$core$String* $tmp5267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5260, $tmp5266);
    (($fn5268) p_out->$class->vtable[19])(p_out, $tmp5267);
    panda$core$String* $tmp5270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5269, forwardEntryExclusiveTest5250);
    panda$core$String* $tmp5272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5270, &$s5271);
    panda$core$String* $tmp5273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5272, loopStart5151);
    panda$core$String* $tmp5275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5273, &$s5274);
    panda$core$String* $tmp5276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5275, loopEnd5155);
    panda$core$String* $tmp5278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5276, &$s5277);
    (($fn5279) p_out->$class->vtable[19])(p_out, $tmp5278);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntry5163, p_out);
    panda$core$String* $tmp5281 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive5280 = $tmp5281;
    panda$core$String* $tmp5283 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive5282 = $tmp5283;
    panda$core$String* $tmp5285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5284, inclusive5142);
    panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5285, &$s5286);
    panda$core$String* $tmp5288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5287, backwardEntryInclusive5280);
    panda$core$String* $tmp5290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5288, &$s5289);
    panda$core$String* $tmp5292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5291, backwardEntryExclusive5282);
    panda$core$String* $tmp5294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5292, &$s5293);
    panda$core$String* $tmp5295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5290, $tmp5294);
    (($fn5296) p_out->$class->vtable[19])(p_out, $tmp5295);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryInclusive5280, p_out);
    panda$core$String* $tmp5298 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5297 = $tmp5298;
    panda$core$String* $tmp5299 = panda$core$String$convert$R$panda$core$String(backwardEntryInclusiveTest5297);
    panda$core$String* $tmp5301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5299, &$s5300);
    panda$core$String* $tmp5302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5301, signPrefix5165);
    panda$core$String* $tmp5304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5302, &$s5303);
    panda$core$String* $tmp5305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5304, numberType5053);
    panda$core$String* $tmp5307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5305, &$s5306);
    panda$core$String* $tmp5308 = panda$core$String$convert$R$panda$core$String(start5070);
    panda$core$String* $tmp5310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5308, &$s5309);
    panda$core$String* $tmp5311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5310, end5110);
    panda$core$String* $tmp5313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5311, &$s5312);
    panda$core$String* $tmp5314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5307, $tmp5313);
    (($fn5315) p_out->$class->vtable[19])(p_out, $tmp5314);
    panda$core$String* $tmp5317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5316, backwardEntryInclusiveTest5297);
    panda$core$String* $tmp5319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5317, &$s5318);
    panda$core$String* $tmp5320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5319, loopStart5151);
    panda$core$String* $tmp5322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5320, &$s5321);
    panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5322, loopEnd5155);
    panda$core$String* $tmp5325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5323, &$s5324);
    (($fn5326) p_out->$class->vtable[19])(p_out, $tmp5325);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryExclusive5282, p_out);
    panda$core$String* $tmp5328 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5327 = $tmp5328;
    panda$core$String* $tmp5329 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusiveTest5327);
    panda$core$String* $tmp5331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5329, &$s5330);
    panda$core$String* $tmp5332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5331, signPrefix5165);
    panda$core$String* $tmp5334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5332, &$s5333);
    panda$core$String* $tmp5335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5334, numberType5053);
    panda$core$String* $tmp5337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5335, &$s5336);
    panda$core$String* $tmp5338 = panda$core$String$convert$R$panda$core$String(start5070);
    panda$core$String* $tmp5340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5338, &$s5339);
    panda$core$String* $tmp5341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5340, end5110);
    panda$core$String* $tmp5343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5341, &$s5342);
    panda$core$String* $tmp5344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5337, $tmp5343);
    (($fn5345) p_out->$class->vtable[19])(p_out, $tmp5344);
    panda$core$String* $tmp5347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5346, backwardEntryExclusiveTest5327);
    panda$core$String* $tmp5349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5347, &$s5348);
    panda$core$String* $tmp5350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5349, loopStart5151);
    panda$core$String* $tmp5352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5350, &$s5351);
    panda$core$String* $tmp5353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5352, loopEnd5155);
    panda$core$String* $tmp5355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5353, &$s5354);
    (($fn5356) p_out->$class->vtable[19])(p_out, $tmp5355);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5151, p_out);
    panda$core$String* $tmp5358 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5357 = $tmp5358;
    panda$core$String* $tmp5359 = panda$core$String$convert$R$panda$core$String(indexValue5357);
    panda$core$String* $tmp5361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5359, &$s5360);
    panda$core$String* $tmp5362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5361, numberType5053);
    panda$core$String* $tmp5364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5362, &$s5363);
    panda$core$String* $tmp5365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5364, numberType5053);
    panda$core$String* $tmp5367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5365, &$s5366);
    panda$core$String* $tmp5368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5367, indexValuePtr5079);
    panda$core$String* $tmp5370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5368, &$s5369);
    (($fn5371) p_out->$class->vtable[19])(p_out, $tmp5370);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block5032, p_out);
    panda$core$Bit $tmp5372 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block5032);
    panda$core$Bit $tmp5373 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5372);
    if ($tmp5373.value) {
    {
        panda$core$String* $tmp5375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5374, loopTest5157);
        panda$core$String* $tmp5377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5375, &$s5376);
        (($fn5378) p_out->$class->vtable[19])(p_out, $tmp5377);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest5157, p_out);
    panda$core$String* $tmp5380 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5379 = $tmp5380;
    panda$core$String* $tmp5382 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5381 = $tmp5382;
    panda$core$String* $tmp5384 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5383 = $tmp5384;
    panda$core$String* $tmp5386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5385, direction5177);
    panda$core$String* $tmp5388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5386, &$s5387);
    panda$core$String* $tmp5389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5388, forwardLabel5381);
    panda$core$String* $tmp5391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5389, &$s5390);
    panda$core$String* $tmp5392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5391, backwardLabel5383);
    panda$core$String* $tmp5394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5392, &$s5393);
    (($fn5395) p_out->$class->vtable[19])(p_out, $tmp5394);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardLabel5381, p_out);
    panda$core$String* $tmp5397 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5396 = $tmp5397;
    panda$core$String* $tmp5398 = panda$core$String$convert$R$panda$core$String(forwardDelta5396);
    panda$core$String* $tmp5400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5398, &$s5399);
    panda$core$String* $tmp5401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5400, numberType5053);
    panda$core$String* $tmp5403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5401, &$s5402);
    panda$core$String* $tmp5404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5403, end5110);
    panda$core$String* $tmp5406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5404, &$s5405);
    panda$core$String* $tmp5407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5406, indexValue5357);
    panda$core$String* $tmp5409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5407, &$s5408);
    (($fn5410) p_out->$class->vtable[19])(p_out, $tmp5409);
    panda$core$String* $tmp5412 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5411 = $tmp5412;
    panda$core$String* $tmp5414 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5413 = $tmp5414;
    panda$core$String* $tmp5416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5415, inclusive5142);
    panda$core$String* $tmp5418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5416, &$s5417);
    panda$core$String* $tmp5419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5418, forwardInclusiveLabel5411);
    panda$core$String* $tmp5421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5419, &$s5420);
    panda$core$String* $tmp5422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5421, forwardExclusiveLabel5413);
    (($fn5423) p_out->$class->vtable[19])(p_out, $tmp5422);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel5411, p_out);
    panda$core$String* $tmp5425 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5424 = $tmp5425;
    panda$core$String* $tmp5426 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest5424);
    panda$core$String* $tmp5428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5426, &$s5427);
    panda$core$String* $tmp5429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5428, numberType5053);
    panda$core$String* $tmp5431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5429, &$s5430);
    panda$core$String* $tmp5432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5431, forwardDelta5396);
    panda$core$String* $tmp5434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5432, &$s5433);
    panda$core$String* $tmp5435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5434, step5128);
    panda$core$String* $tmp5437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5435, &$s5436);
    (($fn5438) p_out->$class->vtable[19])(p_out, $tmp5437);
    panda$core$String* $tmp5440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5439, forwardInclusiveTest5424);
    panda$core$String* $tmp5442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5440, &$s5441);
    panda$core$String* $tmp5443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5442, loopInc5379);
    panda$core$String* $tmp5445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5443, &$s5444);
    panda$core$String* $tmp5446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5445, loopEnd5155);
    panda$core$String* $tmp5448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5446, &$s5447);
    (($fn5449) p_out->$class->vtable[19])(p_out, $tmp5448);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel5413, p_out);
    panda$core$String* $tmp5451 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5450 = $tmp5451;
    panda$core$String* $tmp5452 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest5450);
    panda$core$String* $tmp5454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5452, &$s5453);
    panda$core$String* $tmp5455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5454, numberType5053);
    panda$core$String* $tmp5457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5455, &$s5456);
    panda$core$String* $tmp5458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5457, forwardDelta5396);
    panda$core$String* $tmp5460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5458, &$s5459);
    panda$core$String* $tmp5461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5460, step5128);
    panda$core$String* $tmp5463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5461, &$s5462);
    (($fn5464) p_out->$class->vtable[19])(p_out, $tmp5463);
    panda$core$String* $tmp5466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5465, forwardExclusiveTest5450);
    panda$core$String* $tmp5468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5466, &$s5467);
    panda$core$String* $tmp5469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5468, loopInc5379);
    panda$core$String* $tmp5471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5469, &$s5470);
    panda$core$String* $tmp5472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5471, loopEnd5155);
    panda$core$String* $tmp5474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5472, &$s5473);
    (($fn5475) p_out->$class->vtable[19])(p_out, $tmp5474);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardLabel5383, p_out);
    panda$core$String* $tmp5477 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5476 = $tmp5477;
    panda$core$String* $tmp5478 = panda$core$String$convert$R$panda$core$String(backwardDelta5476);
    panda$core$String* $tmp5480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5478, &$s5479);
    panda$core$String* $tmp5481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5480, numberType5053);
    panda$core$String* $tmp5483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5481, &$s5482);
    panda$core$String* $tmp5484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5483, indexValue5357);
    panda$core$String* $tmp5486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5484, &$s5485);
    panda$core$String* $tmp5487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5486, end5110);
    panda$core$String* $tmp5489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5487, &$s5488);
    (($fn5490) p_out->$class->vtable[19])(p_out, $tmp5489);
    panda$core$String* $tmp5492 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5491 = $tmp5492;
    panda$core$String* $tmp5493 = panda$core$String$convert$R$panda$core$String(negStep5491);
    panda$core$String* $tmp5495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5493, &$s5494);
    panda$core$String* $tmp5496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5495, numberType5053);
    panda$core$String* $tmp5498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5496, &$s5497);
    panda$core$String* $tmp5499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5498, step5128);
    panda$core$String* $tmp5501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5499, &$s5500);
    (($fn5502) p_out->$class->vtable[19])(p_out, $tmp5501);
    panda$core$String* $tmp5504 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5503 = $tmp5504;
    panda$core$String* $tmp5506 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5505 = $tmp5506;
    panda$core$String* $tmp5508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5507, inclusive5142);
    panda$core$String* $tmp5510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5508, &$s5509);
    panda$core$String* $tmp5511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5510, backwardInclusiveLabel5503);
    panda$core$String* $tmp5513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5511, &$s5512);
    panda$core$String* $tmp5514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5513, backwardExclusiveLabel5505);
    (($fn5515) p_out->$class->vtable[19])(p_out, $tmp5514);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardInclusiveLabel5503, p_out);
    panda$core$String* $tmp5517 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5516 = $tmp5517;
    panda$core$String* $tmp5518 = panda$core$String$convert$R$panda$core$String(backwardInclusiveTest5516);
    panda$core$String* $tmp5520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5518, &$s5519);
    panda$core$String* $tmp5521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5520, numberType5053);
    panda$core$String* $tmp5523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5521, &$s5522);
    panda$core$String* $tmp5524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5523, backwardDelta5476);
    panda$core$String* $tmp5526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5524, &$s5525);
    panda$core$String* $tmp5527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5526, negStep5491);
    (($fn5528) p_out->$class->vtable[19])(p_out, $tmp5527);
    panda$core$String* $tmp5530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5529, backwardInclusiveTest5516);
    panda$core$String* $tmp5532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5530, &$s5531);
    panda$core$String* $tmp5533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5532, loopInc5379);
    panda$core$String* $tmp5535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5533, &$s5534);
    panda$core$String* $tmp5536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5535, loopEnd5155);
    panda$core$String* $tmp5538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5536, &$s5537);
    (($fn5539) p_out->$class->vtable[19])(p_out, $tmp5538);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardExclusiveLabel5505, p_out);
    panda$core$String* $tmp5541 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5540 = $tmp5541;
    panda$core$String* $tmp5542 = panda$core$String$convert$R$panda$core$String(backwardExclusiveTest5540);
    panda$core$String* $tmp5544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5542, &$s5543);
    panda$core$String* $tmp5545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5544, numberType5053);
    panda$core$String* $tmp5547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5545, &$s5546);
    panda$core$String* $tmp5548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5547, backwardDelta5476);
    panda$core$String* $tmp5550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5548, &$s5549);
    panda$core$String* $tmp5551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5550, negStep5491);
    (($fn5552) p_out->$class->vtable[19])(p_out, $tmp5551);
    panda$core$String* $tmp5554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5553, backwardExclusiveTest5540);
    panda$core$String* $tmp5556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5554, &$s5555);
    panda$core$String* $tmp5557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5556, loopInc5379);
    panda$core$String* $tmp5559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5557, &$s5558);
    panda$core$String* $tmp5560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5559, loopEnd5155);
    panda$core$String* $tmp5562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5560, &$s5561);
    (($fn5563) p_out->$class->vtable[19])(p_out, $tmp5562);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc5379, p_out);
    panda$core$String* $tmp5565 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5564 = $tmp5565;
    panda$core$String* $tmp5566 = panda$core$String$convert$R$panda$core$String(inc5564);
    panda$core$String* $tmp5568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5566, &$s5567);
    panda$core$String* $tmp5569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5568, numberType5053);
    panda$core$String* $tmp5571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5569, &$s5570);
    panda$core$String* $tmp5572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5571, indexValue5357);
    panda$core$String* $tmp5574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5572, &$s5573);
    panda$core$String* $tmp5575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5574, step5128);
    panda$core$String* $tmp5577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5575, &$s5576);
    (($fn5578) p_out->$class->vtable[19])(p_out, $tmp5577);
    panda$core$String* $tmp5580 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5579 = $tmp5580;
    panda$core$String* $tmp5581 = panda$core$String$convert$R$panda$core$String(incStruct5579);
    panda$core$String* $tmp5583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5581, &$s5582);
    panda$core$String* $tmp5584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5583, indexType5039);
    panda$core$String* $tmp5586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5584, &$s5585);
    panda$core$String* $tmp5587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5586, numberType5053);
    panda$core$String* $tmp5589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5587, &$s5588);
    (($fn5590) p_out->$class->vtable[19])(p_out, $tmp5589);
    panda$core$String* $tmp5592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5591, numberType5053);
    panda$core$String* $tmp5594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5592, &$s5593);
    panda$core$String* $tmp5595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5594, inc5564);
    panda$core$String* $tmp5597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5595, &$s5596);
    (($fn5598) p_out->$class->vtable[19])(p_out, $tmp5597);
    panda$core$String* $tmp5600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5599, indexType5039);
    panda$core$String* $tmp5602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5600, &$s5601);
    panda$core$String* $tmp5603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5602, incStruct5579);
    panda$core$String* $tmp5605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5603, &$s5604);
    panda$core$String* $tmp5606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5605, indexType5039);
    panda$core$String* $tmp5608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5606, &$s5607);
    panda$core$String* $tmp5609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5608, index5061);
    panda$core$String* $tmp5611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5609, &$s5610);
    (($fn5612) p_out->$class->vtable[19])(p_out, $tmp5611);
    panda$core$String* $tmp5614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5613, loopStart5151);
    panda$core$String* $tmp5616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5614, &$s5615);
    (($fn5617) p_out->$class->vtable[19])(p_out, $tmp5616);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5155, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    panda$core$Object* $tmp5618 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5619 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5618)->type);
    if ($tmp5619.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5620 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5621 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5620)->type);
    if ($tmp5621.value) {
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
    panda$core$String* loopStart5628;
    panda$core$String* loopBody5630;
    panda$core$String* loopEnd5632;
    panda$core$String* test5641;
    panda$core$String* testBit5644;
    panda$core$Bit $tmp5622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5622.value);
    panda$core$Int64 $tmp5623 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5623, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5624.value);
    panda$core$Object* $tmp5625 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5626 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5627 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5625)->type, $tmp5626);
    PANDA_ASSERT($tmp5627.value);
    panda$core$String* $tmp5629 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5628 = $tmp5629;
    panda$core$String* $tmp5631 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5630 = $tmp5631;
    panda$core$String* $tmp5633 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5632 = $tmp5633;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5634 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5634->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5634->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5634, ((panda$core$String*) p_w->payload), loopEnd5632, loopStart5628);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5634));
    panda$core$String* $tmp5637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5636, loopStart5628);
    panda$core$String* $tmp5639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5637, &$s5638);
    (($fn5640) p_out->$class->vtable[19])(p_out, $tmp5639);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5628, p_out);
    panda$core$Object* $tmp5642 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5643 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5642), p_out);
    test5641 = $tmp5643;
    panda$core$String* $tmp5645 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5644 = $tmp5645;
    panda$core$String* $tmp5646 = panda$core$String$convert$R$panda$core$String(testBit5644);
    panda$core$String* $tmp5648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5646, &$s5647);
    panda$core$String* $tmp5649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5648, test5641);
    panda$core$String* $tmp5651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5649, &$s5650);
    (($fn5652) p_out->$class->vtable[19])(p_out, $tmp5651);
    panda$core$String* $tmp5654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5653, testBit5644);
    panda$core$String* $tmp5656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5654, &$s5655);
    panda$core$String* $tmp5657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5656, loopBody5630);
    panda$core$String* $tmp5659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5657, &$s5658);
    panda$core$String* $tmp5660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5659, loopEnd5632);
    panda$core$String* $tmp5662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5660, &$s5661);
    (($fn5663) p_out->$class->vtable[19])(p_out, $tmp5662);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5630, p_out);
    panda$core$Object* $tmp5664 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5664), p_out);
    panda$core$Object* $tmp5665 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5666 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5665));
    panda$core$Bit $tmp5667 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5666);
    if ($tmp5667.value) {
    {
        panda$core$String* $tmp5669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5668, loopStart5628);
        panda$core$String* $tmp5671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5669, &$s5670);
        (($fn5672) p_out->$class->vtable[19])(p_out, $tmp5671);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5632, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5679;
    panda$core$String* loopBody5681;
    panda$core$String* loopEnd5683;
    panda$core$String* test5692;
    panda$core$String* testBit5695;
    panda$core$Bit $tmp5673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5673.value);
    panda$core$Int64 $tmp5674 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5674, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5675.value);
    panda$core$Object* $tmp5676 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5677 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5678 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5676)->type, $tmp5677);
    PANDA_ASSERT($tmp5678.value);
    panda$core$String* $tmp5680 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5679 = $tmp5680;
    panda$core$String* $tmp5682 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5681 = $tmp5682;
    panda$core$String* $tmp5684 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5683 = $tmp5684;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5685 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5685->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5685->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5685, ((panda$core$String*) p_d->payload), loopEnd5683, loopStart5679);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5685));
    panda$core$String* $tmp5688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5687, loopBody5681);
    panda$core$String* $tmp5690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5688, &$s5689);
    (($fn5691) p_out->$class->vtable[19])(p_out, $tmp5690);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5679, p_out);
    panda$core$Object* $tmp5693 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5694 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5693), p_out);
    test5692 = $tmp5694;
    panda$core$String* $tmp5696 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5695 = $tmp5696;
    panda$core$String* $tmp5697 = panda$core$String$convert$R$panda$core$String(testBit5695);
    panda$core$String* $tmp5699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5697, &$s5698);
    panda$core$String* $tmp5700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5699, test5692);
    panda$core$String* $tmp5702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5700, &$s5701);
    (($fn5703) p_out->$class->vtable[19])(p_out, $tmp5702);
    panda$core$String* $tmp5705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5704, testBit5695);
    panda$core$String* $tmp5707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5705, &$s5706);
    panda$core$String* $tmp5708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5707, loopBody5681);
    panda$core$String* $tmp5710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5708, &$s5709);
    panda$core$String* $tmp5711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5710, loopEnd5683);
    panda$core$String* $tmp5713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5711, &$s5712);
    (($fn5714) p_out->$class->vtable[19])(p_out, $tmp5713);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5681, p_out);
    panda$core$Object* $tmp5715 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5715), p_out);
    panda$core$Object* $tmp5716 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5717 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5716));
    panda$core$Bit $tmp5718 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5717);
    if ($tmp5718.value) {
    {
        panda$core$String* $tmp5720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5719, loopStart5679);
        panda$core$String* $tmp5722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5720, &$s5721);
        (($fn5723) p_out->$class->vtable[19])(p_out, $tmp5722);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5683, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5727;
    panda$core$String* loopEnd5729;
    panda$core$Bit $tmp5724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5724.value);
    panda$core$Int64 $tmp5725 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5725, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5726.value);
    panda$core$String* $tmp5728 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5727 = $tmp5728;
    panda$core$String* $tmp5730 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5729 = $tmp5730;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5731 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5731->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5731->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5731, ((panda$core$String*) p_l->payload), loopEnd5729, loopStart5727);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5731));
    panda$core$String* $tmp5734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5733, loopStart5727);
    panda$core$String* $tmp5736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5734, &$s5735);
    (($fn5737) p_out->$class->vtable[19])(p_out, $tmp5736);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5727, p_out);
    panda$core$Object* $tmp5738 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5738), p_out);
    panda$core$Object* $tmp5739 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5740 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5739));
    panda$core$Bit $tmp5741 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5740);
    if ($tmp5741.value) {
    {
        panda$core$String* $tmp5743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5742, loopStart5727);
        panda$core$String* $tmp5745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5743, &$s5744);
        (($fn5746) p_out->$class->vtable[19])(p_out, $tmp5745);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5729, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5747;
    panda$core$String* ref5757;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5747 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5748 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5747);
            panda$core$String* $tmp5749 = panda$core$String$convert$R$panda$core$String($tmp5748);
            panda$core$String* $tmp5751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5749, &$s5750);
            panda$core$String* $tmp5752 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5747->type);
            panda$core$String* $tmp5753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5751, $tmp5752);
            panda$core$String* $tmp5755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5753, &$s5754);
            (($fn5756) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5755);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5758 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_value, p_out);
                ref5757 = $tmp5758;
                panda$core$String* $tmp5760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5759, ref5757);
                panda$core$String* $tmp5762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5760, &$s5761);
                panda$core$String* $tmp5763 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5747->type);
                panda$core$String* $tmp5764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5762, $tmp5763);
                panda$core$String* $tmp5766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5764, &$s5765);
                panda$core$String* $tmp5767 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5747);
                panda$core$String* $tmp5768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5766, $tmp5767);
                panda$core$String* $tmp5770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5768, &$s5769);
                (($fn5771) p_out->$class->vtable[19])(p_out, $tmp5770);
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
    panda$collections$Iterator* decl$Iter5785;
    org$pandalanguage$pandac$IRNode* decl5797;
    panda$core$Bit $tmp5775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5774 = $tmp5775.value;
    if ($tmp5774) goto $l5776;
    panda$core$Bit $tmp5777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5774 = $tmp5777.value;
    $l5776:;
    panda$core$Bit $tmp5778 = { $tmp5774 };
    bool $tmp5773 = $tmp5778.value;
    if ($tmp5773) goto $l5779;
    panda$core$Bit $tmp5780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5773 = $tmp5780.value;
    $l5779:;
    panda$core$Bit $tmp5781 = { $tmp5773 };
    bool $tmp5772 = $tmp5781.value;
    if ($tmp5772) goto $l5782;
    panda$core$Bit $tmp5783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5772 = $tmp5783.value;
    $l5782:;
    panda$core$Bit $tmp5784 = { $tmp5772 };
    PANDA_ASSERT($tmp5784.value);
    {
        ITable* $tmp5786 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5786->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5786 = $tmp5786->next;
        }
        $fn5788 $tmp5787 = $tmp5786->methods[0];
        panda$collections$Iterator* $tmp5789 = $tmp5787(((panda$collections$Iterable*) p_v->children));
        decl$Iter5785 = $tmp5789;
        $l5790:;
        ITable* $tmp5792 = decl$Iter5785->$class->itable;
        while ($tmp5792->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5792 = $tmp5792->next;
        }
        $fn5794 $tmp5793 = $tmp5792->methods[0];
        panda$core$Bit $tmp5795 = $tmp5793(decl$Iter5785);
        panda$core$Bit $tmp5796 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5795);
        if (!$tmp5796.value) goto $l5791;
        {
            ITable* $tmp5798 = decl$Iter5785->$class->itable;
            while ($tmp5798->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5798 = $tmp5798->next;
            }
            $fn5800 $tmp5799 = $tmp5798->methods[1];
            panda$core$Object* $tmp5801 = $tmp5799(decl$Iter5785);
            decl5797 = ((org$pandalanguage$pandac$IRNode*) $tmp5801);
            panda$core$Bit $tmp5802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5797->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5802.value);
            panda$core$Int64 $tmp5803 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl5797->children);
            panda$core$Bit $tmp5804 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5803, ((panda$core$Int64) { 1 }));
            if ($tmp5804.value) {
            {
                panda$core$Object* $tmp5805 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5797->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5806 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5797->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5805), ((org$pandalanguage$pandac$IRNode*) $tmp5806), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5807 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5797->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5807), NULL, p_out);
            }
            }
        }
        goto $l5790;
        $l5791:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$OutputStream* p_out) {
    panda$core$String* base5811;
    panda$core$String* raw5814;
    org$pandalanguage$pandac$ClassDecl* cl5816;
    org$pandalanguage$pandac$FieldDecl* f5819;
    panda$collections$ListView* fields5820;
    panda$core$Int64 index5822;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5823;
    panda$core$String* result5880;
    panda$core$String* result5893;
    panda$core$String* reused5896;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5808 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5809 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp5808, p_out);
            return $tmp5809;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5810 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5810;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5812 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5813 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5812), p_out);
            base5811 = $tmp5813;
            panda$core$String* $tmp5815 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            raw5814 = $tmp5815;
            panda$core$Object* $tmp5817 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5818 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5817)->type);
            cl5816 = $tmp5818;
            PANDA_ASSERT(((panda$core$Bit) { cl5816 != NULL }).value);
            f5819 = ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload);
            panda$collections$ListView* $tmp5821 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5816);
            fields5820 = $tmp5821;
            index5822 = ((panda$core$Int64) { -1 });
            ITable* $tmp5824 = ((panda$collections$CollectionView*) fields5820)->$class->itable;
            while ($tmp5824->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5824 = $tmp5824->next;
            }
            $fn5826 $tmp5825 = $tmp5824->methods[0];
            panda$core$Int64 $tmp5827 = $tmp5825(((panda$collections$CollectionView*) fields5820));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5823, ((panda$core$Int64) { 0 }), $tmp5827, ((panda$core$Bit) { false }));
            int64_t $tmp5829 = $tmp5823.min.value;
            panda$core$Int64 i5828 = { $tmp5829 };
            int64_t $tmp5831 = $tmp5823.max.value;
            bool $tmp5832 = $tmp5823.inclusive.value;
            if ($tmp5832) goto $l5839; else goto $l5840;
            $l5839:;
            if ($tmp5829 <= $tmp5831) goto $l5833; else goto $l5835;
            $l5840:;
            if ($tmp5829 < $tmp5831) goto $l5833; else goto $l5835;
            $l5833:;
            {
                ITable* $tmp5841 = fields5820->$class->itable;
                while ($tmp5841->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5841 = $tmp5841->next;
                }
                $fn5843 $tmp5842 = $tmp5841->methods[0];
                panda$core$Object* $tmp5844 = $tmp5842(fields5820, i5828);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5844))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) f5819)->name) }).value) {
                {
                    index5822 = i5828;
                    goto $l5835;
                }
                }
            }
            $l5836:;
            int64_t $tmp5846 = $tmp5831 - i5828.value;
            if ($tmp5832) goto $l5847; else goto $l5848;
            $l5847:;
            if ($tmp5846 >= 1) goto $l5845; else goto $l5835;
            $l5848:;
            if ($tmp5846 > 1) goto $l5845; else goto $l5835;
            $l5845:;
            i5828.value += 1;
            goto $l5833;
            $l5835:;
            panda$core$Bit $tmp5851 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5822, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5851.value);
            panda$core$String* $tmp5852 = panda$core$String$convert$R$panda$core$String(raw5814);
            panda$core$String* $tmp5854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5852, &$s5853);
            org$pandalanguage$pandac$Type* $tmp5855 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5816);
            panda$core$String* $tmp5856 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5855);
            panda$core$String* $tmp5857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5854, $tmp5856);
            panda$core$String* $tmp5859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5857, &$s5858);
            org$pandalanguage$pandac$Type* $tmp5860 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5816);
            panda$core$String* $tmp5861 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5860);
            panda$core$String* $tmp5862 = panda$core$String$convert$R$panda$core$String($tmp5861);
            panda$core$String* $tmp5864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5862, &$s5863);
            panda$core$String* $tmp5865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5864, base5811);
            panda$core$String* $tmp5867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5865, &$s5866);
            panda$core$String* $tmp5868 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5867, ((panda$core$Object*) wrap_panda$core$Int64(index5822)));
            panda$core$String* $tmp5870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5868, &$s5869);
            panda$core$String* $tmp5871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5859, $tmp5870);
            (($fn5872) p_out->$class->vtable[19])(p_out, $tmp5871);
            panda$core$Bit $tmp5874 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f5819->type);
            panda$core$Bit $tmp5875 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5874);
            bool $tmp5873 = $tmp5875.value;
            if ($tmp5873) goto $l5876;
            org$pandalanguage$pandac$ClassDecl* $tmp5877 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f5819->type);
            panda$core$Bit $tmp5878 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp5877);
            $tmp5873 = $tmp5878.value;
            $l5876:;
            panda$core$Bit $tmp5879 = { $tmp5873 };
            if ($tmp5879.value) {
            {
                return raw5814;
            }
            }
            panda$core$String* $tmp5881 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result5880 = $tmp5881;
            panda$core$String* $tmp5882 = panda$core$String$convert$R$panda$core$String(result5880);
            panda$core$String* $tmp5884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5882, &$s5883);
            panda$core$String* $tmp5885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5884, raw5814);
            panda$core$String* $tmp5887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5885, &$s5886);
            panda$core$String* $tmp5888 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5887, $tmp5888);
            panda$core$String* $tmp5891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5889, &$s5890);
            (($fn5892) p_out->$class->vtable[19])(p_out, $tmp5891);
            return result5880;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5894 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5895 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5894), p_out);
            result5893 = $tmp5895;
            panda$core$String* $tmp5897 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5896 = $tmp5897;
            panda$core$String* $tmp5898 = panda$core$String$convert$R$panda$core$String(reused5896);
            panda$core$String* $tmp5900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5898, &$s5899);
            panda$core$String* $tmp5901 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5900, $tmp5901);
            panda$core$String* $tmp5904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5902, &$s5903);
            panda$core$String* $tmp5905 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5906 = panda$core$String$convert$R$panda$core$String($tmp5905);
            panda$core$String* $tmp5908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5906, &$s5907);
            panda$core$String* $tmp5909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5908, result5893);
            panda$core$String* $tmp5911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5909, &$s5910);
            panda$core$String* $tmp5912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5904, $tmp5911);
            (($fn5913) p_out->$class->vtable[19])(p_out, $tmp5912);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5896));
            return result5893;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* lvalue5917;
    panda$core$String* value5928;
    panda$core$String* t5929;
    panda$core$Int64 op5932;
    panda$core$String* right5934;
    panda$core$Bit $tmp5914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5914.value);
    panda$core$Int64 $tmp5915 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5915, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5916.value);
    panda$core$Object* $tmp5918 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5919 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5918)->type);
    panda$core$String* $tmp5920 = panda$core$String$convert$R$panda$core$String($tmp5919);
    panda$core$String* $tmp5922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5920, &$s5921);
    panda$core$Object* $tmp5923 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5924 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5923), p_out);
    panda$core$String* $tmp5925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5922, $tmp5924);
    panda$core$String* $tmp5927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5925, &$s5926);
    lvalue5917 = $tmp5927;
    panda$core$Object* $tmp5930 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5931 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5930)->type);
    t5929 = $tmp5931;
    op5932 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5932, ((panda$core$Int64) { 73 }));
    if ($tmp5933.value) {
    {
        panda$core$Object* $tmp5935 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5936 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5935), p_out);
        right5934 = $tmp5936;
        panda$core$String* $tmp5937 = panda$core$String$convert$R$panda$core$String(t5929);
        panda$core$String* $tmp5939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5937, &$s5938);
        panda$core$String* $tmp5940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5939, right5934);
        panda$core$String* $tmp5942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5940, &$s5941);
        value5928 = $tmp5942;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5943, value5928);
    panda$core$String* $tmp5946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5944, &$s5945);
    panda$core$String* $tmp5947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5946, lvalue5917);
    panda$core$String* $tmp5949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5947, &$s5948);
    (($fn5950) p_out->$class->vtable[19])(p_out, $tmp5949);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5960;
    panda$core$String* result5962;
    bool $tmp5951 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp5951) goto $l5952;
    panda$core$Int64 $tmp5953 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5954 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5953, ((panda$core$Int64) { 0 }));
    $tmp5951 = $tmp5954.value;
    $l5952:;
    panda$core$Bit $tmp5955 = { $tmp5951 };
    if ($tmp5955.value) {
    {
        panda$core$Int64 $tmp5956 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5956, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp5957.value);
        panda$core$Int64 $tmp5958 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5959 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5958, ((panda$core$Int64) { 0 }));
        if ($tmp5959.value) {
        {
            panda$core$Object* $tmp5961 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5960 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5961);
            panda$core$Object* $tmp5963 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5964 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5963), p_out);
            result5962 = $tmp5964;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5965 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5965->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5965->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5965, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5962));
            panda$collections$Array$add$panda$collections$Array$T(inline5960->returns, ((panda$core$Object*) $tmp5965));
            panda$core$String* $tmp5968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5967, inline5960->exitLabel);
            panda$core$String* $tmp5970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5968, &$s5969);
            (($fn5971) p_out->$class->vtable[19])(p_out, $tmp5970);
        }
        }
        else {
        {
            panda$core$Object* $tmp5973 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5974 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5973), p_out);
            panda$core$String* $tmp5975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5972, $tmp5974);
            panda$core$String* $tmp5977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5975, &$s5976);
            (($fn5978) p_out->$class->vtable[19])(p_out, $tmp5977);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5979 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5980 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5979, ((panda$core$Int64) { 0 }));
        if ($tmp5980.value) {
        {
            panda$core$Object* $tmp5982 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5981, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5982)->exitLabel);
            panda$core$String* $tmp5985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5983, &$s5984);
            (($fn5986) p_out->$class->vtable[19])(p_out, $tmp5985);
        }
        }
        else {
        {
            (($fn5988) p_out->$class->vtable[19])(p_out, &$s5987);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5992;
    panda$core$Int64 $tmp5989 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5990 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5989, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5990.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5991 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5991);
    }
    }
    panda$core$Int64 $tmp5993 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5992, ((panda$core$Int64) { 0 }), $tmp5993, ((panda$core$Bit) { false }));
    int64_t $tmp5995 = $tmp5992.min.value;
    panda$core$Int64 i5994 = { $tmp5995 };
    int64_t $tmp5997 = $tmp5992.max.value;
    bool $tmp5998 = $tmp5992.inclusive.value;
    if ($tmp5998) goto $l6005; else goto $l6006;
    $l6005:;
    if ($tmp5995 <= $tmp5997) goto $l5999; else goto $l6001;
    $l6006:;
    if ($tmp5995 < $tmp5997) goto $l5999; else goto $l6001;
    $l5999:;
    {
        panda$core$Object* $tmp6008 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5994);
        bool $tmp6007 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6008)->loopLabel != NULL }).value;
        if (!$tmp6007) goto $l6009;
        panda$core$Object* $tmp6010 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5994);
        panda$core$Bit $tmp6014;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6010)->loopLabel != NULL }).value) goto $l6011; else goto $l6012;
        $l6011:;
        panda$core$Bit $tmp6015 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6010)->loopLabel, p_name);
        $tmp6014 = $tmp6015;
        goto $l6013;
        $l6012:;
        $tmp6014 = ((panda$core$Bit) { false });
        goto $l6013;
        $l6013:;
        $tmp6007 = $tmp6014.value;
        $l6009:;
        panda$core$Bit $tmp6016 = { $tmp6007 };
        if ($tmp6016.value) {
        {
            panda$core$Object* $tmp6017 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5994);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6017);
        }
        }
    }
    $l6002:;
    int64_t $tmp6019 = $tmp5997 - i5994.value;
    if ($tmp5998) goto $l6020; else goto $l6021;
    $l6020:;
    if ($tmp6019 >= 1) goto $l6018; else goto $l6001;
    $l6021:;
    if ($tmp6019 > 1) goto $l6018; else goto $l6001;
    $l6018:;
    i5994.value += 1;
    goto $l5999;
    $l6001:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc6024;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6025 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc6024 = $tmp6025;
    panda$core$String* $tmp6027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6026, desc6024->breakLabel);
    panda$core$String* $tmp6029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6027, &$s6028);
    (($fn6030) p_out->$class->vtable[19])(p_out, $tmp6029);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc6031;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6032 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc6031 = $tmp6032;
    panda$core$String* $tmp6034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6033, desc6031->continueLabel);
    panda$core$String* $tmp6036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6034, &$s6035);
    (($fn6037) p_out->$class->vtable[19])(p_out, $tmp6036);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* test6047;
    panda$core$String* ifTrue6050;
    panda$core$String* ifFalse6052;
    panda$core$String* name6065;
    panda$core$String* path6066;
    panda$core$String$Index$nullable index6068;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp6071;
    panda$core$String* nameRef6074;
    panda$core$String* line6076;
    panda$core$String* msg6081;
    panda$collections$Iterator* m$Iter6088;
    org$pandalanguage$pandac$MethodDecl* m6102;
    panda$core$Bit $tmp6038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp6038.value);
    panda$core$Int64 $tmp6040 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6040, ((panda$core$Int64) { 1 }));
    bool $tmp6039 = $tmp6041.value;
    if ($tmp6039) goto $l6042;
    panda$core$Int64 $tmp6043 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6043, ((panda$core$Int64) { 2 }));
    $tmp6039 = $tmp6044.value;
    $l6042:;
    panda$core$Bit $tmp6045 = { $tmp6039 };
    PANDA_ASSERT($tmp6045.value);
    panda$core$Bit $tmp6046 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp6046.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp6048 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6049 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6048), p_out);
    test6047 = $tmp6049;
    panda$core$String* $tmp6051 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue6050 = $tmp6051;
    panda$core$String* $tmp6053 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse6052 = $tmp6053;
    panda$core$String* $tmp6055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6054, test6047);
    panda$core$String* $tmp6057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6055, &$s6056);
    panda$core$String* $tmp6058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6057, ifTrue6050);
    panda$core$String* $tmp6060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6058, &$s6059);
    panda$core$String* $tmp6061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6060, ifFalse6052);
    panda$core$String* $tmp6063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6061, &$s6062);
    (($fn6064) p_out->$class->vtable[19])(p_out, $tmp6063);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse6052, p_out);
    panda$core$Object* $tmp6067 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path6066 = ((org$pandalanguage$pandac$ClassDecl*) $tmp6067)->source->path;
    panda$core$String$Index$nullable $tmp6070 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path6066, &$s6069);
    index6068 = $tmp6070;
    if (((panda$core$Bit) { !index6068.nonnull }).value) {
    {
        name6065 = path6066;
    }
    }
    else {
    {
        panda$core$String$Index $tmp6072 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(path6066, ((panda$core$String$Index) index6068.value));
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp6071, ((panda$core$String$Index$nullable) { $tmp6072, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp6073 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path6066, $tmp6071);
        name6065 = $tmp6073;
    }
    }
    panda$core$String* $tmp6075 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, name6065, p_out);
    nameRef6074 = $tmp6075;
    panda$core$String* $tmp6078 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s6077, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp6080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6078, &$s6079);
    line6076 = $tmp6080;
    panda$core$Int64 $tmp6082 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6082, ((panda$core$Int64) { 2 }));
    if ($tmp6083.value) {
    {
        panda$core$Object* $tmp6084 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp6085 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6084), p_out);
        msg6081 = $tmp6085;
    }
    }
    else {
    {
        msg6081 = NULL;
    }
    }
    (($fn6087) p_out->$class->vtable[16])(p_out, &$s6086);
    {
        org$pandalanguage$pandac$Type* $tmp6089 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp6090 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp6089);
        ITable* $tmp6091 = ((panda$collections$Iterable*) $tmp6090->methods)->$class->itable;
        while ($tmp6091->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6091 = $tmp6091->next;
        }
        $fn6093 $tmp6092 = $tmp6091->methods[0];
        panda$collections$Iterator* $tmp6094 = $tmp6092(((panda$collections$Iterable*) $tmp6090->methods));
        m$Iter6088 = $tmp6094;
        $l6095:;
        ITable* $tmp6097 = m$Iter6088->$class->itable;
        while ($tmp6097->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6097 = $tmp6097->next;
        }
        $fn6099 $tmp6098 = $tmp6097->methods[0];
        panda$core$Bit $tmp6100 = $tmp6098(m$Iter6088);
        panda$core$Bit $tmp6101 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6100);
        if (!$tmp6101.value) goto $l6096;
        {
            ITable* $tmp6103 = m$Iter6088->$class->itable;
            while ($tmp6103->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6103 = $tmp6103->next;
            }
            $fn6105 $tmp6104 = $tmp6103->methods[1];
            panda$core$Object* $tmp6106 = $tmp6104(m$Iter6088);
            m6102 = ((org$pandalanguage$pandac$MethodDecl*) $tmp6106);
            panda$core$Bit $tmp6108 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m6102)->name, &$s6107);
            if ($tmp6108.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m6102);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m6102);
            }
            }
        }
        goto $l6095;
        $l6096:;
    }
    if (((panda$core$Bit) { msg6081 != NULL }).value) {
    {
        panda$core$String* $tmp6111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6109, &$s6110);
        (($fn6112) p_out->$class->vtable[16])(p_out, $tmp6111);
    }
    }
    else {
    {
        (($fn6114) p_out->$class->vtable[16])(p_out, &$s6113);
    }
    }
    panda$core$String* $tmp6116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6115, nameRef6074);
    panda$core$String* $tmp6118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6116, &$s6117);
    panda$core$String* $tmp6119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6118, line6076);
    panda$core$String* $tmp6121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6119, &$s6120);
    (($fn6122) p_out->$class->vtable[16])(p_out, $tmp6121);
    if (((panda$core$Bit) { msg6081 != NULL }).value) {
    {
        panda$core$String* $tmp6124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6123, msg6081);
        panda$core$String* $tmp6126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6124, &$s6125);
        (($fn6127) p_out->$class->vtable[16])(p_out, $tmp6126);
    }
    }
    (($fn6129) p_out->$class->vtable[19])(p_out, &$s6128);
    (($fn6131) p_out->$class->vtable[19])(p_out, &$s6130);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue6050, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$OutputStream* p_out) {
    panda$core$String* valueStruct6133;
    org$pandalanguage$pandac$ClassDecl* numberClass6136;
    panda$core$String* value6139;
    org$pandalanguage$pandac$FieldDecl* f6148;
    panda$core$String* switchType6151;
    panda$core$String* endLabel6161;
    panda$collections$Array* whenLabels6163;
    panda$core$String* otherwiseLabel6166;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6177;
    org$pandalanguage$pandac$IRNode* w6192;
    panda$core$String* label6196;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6198;
    panda$core$UInt64 number6214;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6242;
    org$pandalanguage$pandac$IRNode* w6257;
    org$pandalanguage$pandac$IRNode* block6259;
    panda$core$Bit $tmp6132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp6132.value);
    panda$core$Object* $tmp6134 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6135 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6134), p_out);
    valueStruct6133 = $tmp6135;
    panda$core$Object* $tmp6137 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp6138 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6137)->type);
    numberClass6136 = $tmp6138;
    panda$core$String* $tmp6140 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value6139 = $tmp6140;
    panda$core$String* $tmp6141 = panda$core$String$convert$R$panda$core$String(value6139);
    panda$core$String* $tmp6143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6141, &$s6142);
    panda$core$String* $tmp6144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6143, valueStruct6133);
    panda$core$String* $tmp6146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6144, &$s6145);
    (($fn6147) p_out->$class->vtable[19])(p_out, $tmp6146);
    org$pandalanguage$pandac$Symbol* $tmp6150 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass6136->symbolTable, &$s6149);
    f6148 = ((org$pandalanguage$pandac$FieldDecl*) $tmp6150);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f6148);
    panda$core$String* $tmp6152 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f6148->type);
    switchType6151 = $tmp6152;
    panda$core$String* $tmp6154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6153, switchType6151);
    panda$core$String* $tmp6156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6154, &$s6155);
    panda$core$String* $tmp6157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6156, value6139);
    panda$core$String* $tmp6159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6157, &$s6158);
    (($fn6160) p_out->$class->vtable[16])(p_out, $tmp6159);
    panda$core$String* $tmp6162 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel6161 = $tmp6162;
    panda$collections$Array* $tmp6164 = (panda$collections$Array*) malloc(40);
    $tmp6164->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp6164->refCount.value = 1;
    panda$collections$Array$init($tmp6164);
    whenLabels6163 = $tmp6164;
    panda$core$Int64 $tmp6167 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp6168 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6167, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp6169 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, $tmp6168);
    panda$core$Bit $tmp6170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp6169)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp6170.value) {
    {
        panda$core$String* $tmp6171 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel6166 = $tmp6171;
    }
    }
    else {
    {
        otherwiseLabel6166 = endLabel6161;
    }
    }
    panda$core$String* $tmp6173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6172, otherwiseLabel6166);
    panda$core$String* $tmp6175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6173, &$s6174);
    (($fn6176) p_out->$class->vtable[19])(p_out, $tmp6175);
    panda$core$Int64 $tmp6178 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6177, ((panda$core$Int64) { 1 }), $tmp6178, ((panda$core$Bit) { false }));
    int64_t $tmp6180 = $tmp6177.min.value;
    panda$core$Int64 i6179 = { $tmp6180 };
    int64_t $tmp6182 = $tmp6177.max.value;
    bool $tmp6183 = $tmp6177.inclusive.value;
    if ($tmp6183) goto $l6190; else goto $l6191;
    $l6190:;
    if ($tmp6180 <= $tmp6182) goto $l6184; else goto $l6186;
    $l6191:;
    if ($tmp6180 < $tmp6182) goto $l6184; else goto $l6186;
    $l6184:;
    {
        panda$core$Object* $tmp6193 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i6179);
        w6192 = ((org$pandalanguage$pandac$IRNode*) $tmp6193);
        panda$core$Bit $tmp6194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6192->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp6194.value) {
        {
            goto $l6187;
        }
        }
        panda$core$Bit $tmp6195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6192->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp6195.value);
        panda$core$String* $tmp6197 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label6196 = $tmp6197;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels6163, ((panda$core$Object*) label6196));
        panda$core$Int64 $tmp6199 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w6192->children);
        panda$core$Int64 $tmp6200 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6199, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6198, ((panda$core$Int64) { 0 }), $tmp6200, ((panda$core$Bit) { false }));
        int64_t $tmp6202 = $tmp6198.min.value;
        panda$core$Int64 i6201 = { $tmp6202 };
        int64_t $tmp6204 = $tmp6198.max.value;
        bool $tmp6205 = $tmp6198.inclusive.value;
        if ($tmp6205) goto $l6212; else goto $l6213;
        $l6212:;
        if ($tmp6202 <= $tmp6204) goto $l6206; else goto $l6208;
        $l6213:;
        if ($tmp6202 < $tmp6204) goto $l6206; else goto $l6208;
        $l6206:;
        {
            panda$core$Object* $tmp6215 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w6192->children, i6201);
            panda$core$UInt64 $tmp6216 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6215));
            number6214 = $tmp6216;
            panda$core$String* $tmp6218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6217, switchType6151);
            panda$core$String* $tmp6220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6218, &$s6219);
            panda$core$String* $tmp6221 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6220, ((panda$core$Object*) wrap_panda$core$UInt64(number6214)));
            panda$core$String* $tmp6223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6221, &$s6222);
            panda$core$String* $tmp6224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6223, label6196);
            panda$core$String* $tmp6226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6224, &$s6225);
            (($fn6227) p_out->$class->vtable[19])(p_out, $tmp6226);
        }
        $l6209:;
        int64_t $tmp6229 = $tmp6204 - i6201.value;
        if ($tmp6205) goto $l6230; else goto $l6231;
        $l6230:;
        if ($tmp6229 >= 1) goto $l6228; else goto $l6208;
        $l6231:;
        if ($tmp6229 > 1) goto $l6228; else goto $l6208;
        $l6228:;
        i6201.value += 1;
        goto $l6206;
        $l6208:;
    }
    $l6187:;
    int64_t $tmp6235 = $tmp6182 - i6179.value;
    if ($tmp6183) goto $l6236; else goto $l6237;
    $l6236:;
    if ($tmp6235 >= 1) goto $l6234; else goto $l6186;
    $l6237:;
    if ($tmp6235 > 1) goto $l6234; else goto $l6186;
    $l6234:;
    i6179.value += 1;
    goto $l6184;
    $l6186:;
    (($fn6241) p_out->$class->vtable[19])(p_out, &$s6240);
    panda$core$Int64 $tmp6243 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6242, ((panda$core$Int64) { 1 }), $tmp6243, ((panda$core$Bit) { false }));
    int64_t $tmp6245 = $tmp6242.min.value;
    panda$core$Int64 i6244 = { $tmp6245 };
    int64_t $tmp6247 = $tmp6242.max.value;
    bool $tmp6248 = $tmp6242.inclusive.value;
    if ($tmp6248) goto $l6255; else goto $l6256;
    $l6255:;
    if ($tmp6245 <= $tmp6247) goto $l6249; else goto $l6251;
    $l6256:;
    if ($tmp6245 < $tmp6247) goto $l6249; else goto $l6251;
    $l6249:;
    {
        panda$core$Object* $tmp6258 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i6244);
        w6257 = ((org$pandalanguage$pandac$IRNode*) $tmp6258);
        panda$core$Int64 $tmp6260 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w6257->children);
        panda$core$Int64 $tmp6261 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6260, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp6262 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w6257->children, $tmp6261);
        block6259 = ((org$pandalanguage$pandac$IRNode*) $tmp6262);
        panda$core$Int64 $tmp6263 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6244, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp6264 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels6163);
        panda$core$Bit $tmp6265 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp6263, $tmp6264);
        if ($tmp6265.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, otherwiseLabel6166, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp6266 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6244, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp6267 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels6163, $tmp6266);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ((panda$core$String*) $tmp6267), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block6259, p_out);
        panda$core$Bit $tmp6268 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block6259);
        panda$core$Bit $tmp6269 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6268);
        if ($tmp6269.value) {
        {
            panda$core$String* $tmp6271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6270, endLabel6161);
            panda$core$String* $tmp6273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6271, &$s6272);
            (($fn6274) p_out->$class->vtable[19])(p_out, $tmp6273);
        }
        }
    }
    $l6252:;
    int64_t $tmp6276 = $tmp6247 - i6244.value;
    if ($tmp6248) goto $l6277; else goto $l6278;
    $l6277:;
    if ($tmp6276 >= 1) goto $l6275; else goto $l6251;
    $l6278:;
    if ($tmp6276 > 1) goto $l6275; else goto $l6251;
    $l6275:;
    i6244.value += 1;
    goto $l6249;
    $l6251:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel6161, p_out);
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
    panda$core$String* result6281;
    org$pandalanguage$pandac$Type* $tmp6282 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp6283 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6282);
    result6281 = $tmp6283;
    panda$core$Bit $tmp6285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6284 = $tmp6285.value;
    if (!$tmp6284) goto $l6286;
    panda$core$Bit $tmp6288 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6281, &$s6287);
    panda$core$Bit $tmp6289 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6288);
    $tmp6284 = $tmp6289.value;
    $l6286:;
    panda$core$Bit $tmp6290 = { $tmp6284 };
    if ($tmp6290.value) {
    {
        panda$core$String* $tmp6292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6281, &$s6291);
        return $tmp6292;
    }
    }
    return result6281;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6293;
    panda$core$Bit needsIndirection6302;
    panda$core$String* separator6314;
    panda$collections$Iterator* p$Iter6333;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6345;
    panda$core$String* $tmp6294 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6293 = $tmp6294;
    panda$core$Bit $tmp6295 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6293));
    if ($tmp6295.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6293));
    panda$core$String* $tmp6297 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6296, $tmp6297);
    panda$core$String* $tmp6300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6298, &$s6299);
    (($fn6301) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6300);
    panda$core$Bit $tmp6303 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6302 = $tmp6303;
    if (needsIndirection6302.value) {
    {
        (($fn6305) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6304);
    }
    }
    else {
    {
        panda$core$String* $tmp6306 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6307) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6306);
    }
    }
    panda$core$String* $tmp6309 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6308, $tmp6309);
    panda$core$String* $tmp6312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6310, &$s6311);
    (($fn6313) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6312);
    separator6314 = &$s6315;
    if (needsIndirection6302.value) {
    {
        panda$core$String* $tmp6316 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6317 = panda$core$String$convert$R$panda$core$String($tmp6316);
        panda$core$String* $tmp6319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6317, &$s6318);
        (($fn6320) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6319);
        separator6314 = &$s6321;
    }
    }
    panda$core$Bit $tmp6322 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6323 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6322);
    if ($tmp6323.value) {
    {
        panda$core$String* $tmp6324 = panda$core$String$convert$R$panda$core$String(separator6314);
        panda$core$String* $tmp6326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6324, &$s6325);
        panda$core$String* $tmp6327 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6326, $tmp6327);
        panda$core$String* $tmp6330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6328, &$s6329);
        (($fn6331) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6330);
        separator6314 = &$s6332;
    }
    }
    {
        ITable* $tmp6334 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6334->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6334 = $tmp6334->next;
        }
        $fn6336 $tmp6335 = $tmp6334->methods[0];
        panda$collections$Iterator* $tmp6337 = $tmp6335(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6333 = $tmp6337;
        $l6338:;
        ITable* $tmp6340 = p$Iter6333->$class->itable;
        while ($tmp6340->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6340 = $tmp6340->next;
        }
        $fn6342 $tmp6341 = $tmp6340->methods[0];
        panda$core$Bit $tmp6343 = $tmp6341(p$Iter6333);
        panda$core$Bit $tmp6344 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6343);
        if (!$tmp6344.value) goto $l6339;
        {
            ITable* $tmp6346 = p$Iter6333->$class->itable;
            while ($tmp6346->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6346 = $tmp6346->next;
            }
            $fn6348 $tmp6347 = $tmp6346->methods[1];
            panda$core$Object* $tmp6349 = $tmp6347(p$Iter6333);
            p6345 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6349);
            panda$core$String* $tmp6350 = panda$core$String$convert$R$panda$core$String(separator6314);
            panda$core$String* $tmp6352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6350, &$s6351);
            panda$core$String* $tmp6353 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6345->type);
            panda$core$String* $tmp6354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6352, $tmp6353);
            panda$core$String* $tmp6356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6354, &$s6355);
            panda$core$String* $tmp6357 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6345->name);
            panda$core$String* $tmp6358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6356, $tmp6357);
            panda$core$String* $tmp6360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6358, &$s6359);
            (($fn6361) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6360);
            separator6314 = &$s6362;
        }
        goto $l6338;
        $l6339:;
    }
    (($fn6364) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6363);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6387;
    panda$collections$Iterator* p$Iter6397;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6409;
    panda$io$MemoryOutputStream* bodyBuffer6430;
    panda$collections$Iterator* s$Iter6433;
    org$pandalanguage$pandac$IRNode* s6445;
    panda$core$Object* $tmp6365 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6365)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6366;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$io$MemoryOutputStream* $tmp6367 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6367->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6367->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6367);
    self->methodHeader = $tmp6367;
    (($fn6370) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6369);
    panda$core$Bit $tmp6371 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6371.value) {
    {
        (($fn6373) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6372);
    }
    }
    panda$core$String* $tmp6374 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6375 = panda$core$String$convert$R$panda$core$String($tmp6374);
    panda$core$String* $tmp6377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6375, &$s6376);
    panda$core$String* $tmp6378 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6377, $tmp6378);
    panda$core$String* $tmp6381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6379, &$s6380);
    panda$core$String* $tmp6382 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6381, $tmp6382);
    panda$core$String* $tmp6385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6383, &$s6384);
    (($fn6386) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6385);
    separator6387 = &$s6388;
    panda$core$Bit $tmp6389 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6390 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6389);
    if ($tmp6390.value) {
    {
        panda$core$String* $tmp6391 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6392 = panda$core$String$convert$R$panda$core$String($tmp6391);
        panda$core$String* $tmp6394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6392, &$s6393);
        (($fn6395) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6394);
        separator6387 = &$s6396;
    }
    }
    {
        ITable* $tmp6398 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6398->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6398 = $tmp6398->next;
        }
        $fn6400 $tmp6399 = $tmp6398->methods[0];
        panda$collections$Iterator* $tmp6401 = $tmp6399(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6397 = $tmp6401;
        $l6402:;
        ITable* $tmp6404 = p$Iter6397->$class->itable;
        while ($tmp6404->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6404 = $tmp6404->next;
        }
        $fn6406 $tmp6405 = $tmp6404->methods[0];
        panda$core$Bit $tmp6407 = $tmp6405(p$Iter6397);
        panda$core$Bit $tmp6408 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6407);
        if (!$tmp6408.value) goto $l6403;
        {
            ITable* $tmp6410 = p$Iter6397->$class->itable;
            while ($tmp6410->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6410 = $tmp6410->next;
            }
            $fn6412 $tmp6411 = $tmp6410->methods[1];
            panda$core$Object* $tmp6413 = $tmp6411(p$Iter6397);
            p6409 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6413);
            panda$core$String* $tmp6414 = panda$core$String$convert$R$panda$core$String(separator6387);
            panda$core$String* $tmp6416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6414, &$s6415);
            panda$core$String* $tmp6417 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6409->type);
            panda$core$String* $tmp6418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6416, $tmp6417);
            panda$core$String* $tmp6420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6418, &$s6419);
            panda$core$String* $tmp6421 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6409->name);
            panda$core$String* $tmp6422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6420, $tmp6421);
            panda$core$String* $tmp6424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6422, &$s6423);
            (($fn6425) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6424);
            separator6387 = &$s6426;
        }
        goto $l6402;
        $l6403:;
    }
    (($fn6428) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6427);
    panda$core$Bit $tmp6429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6429.value);
    panda$io$MemoryOutputStream* $tmp6431 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6431->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6431->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6431);
    bodyBuffer6430 = $tmp6431;
    {
        ITable* $tmp6434 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6434->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6434 = $tmp6434->next;
        }
        $fn6436 $tmp6435 = $tmp6434->methods[0];
        panda$collections$Iterator* $tmp6437 = $tmp6435(((panda$collections$Iterable*) p_body->children));
        s$Iter6433 = $tmp6437;
        $l6438:;
        ITable* $tmp6440 = s$Iter6433->$class->itable;
        while ($tmp6440->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6440 = $tmp6440->next;
        }
        $fn6442 $tmp6441 = $tmp6440->methods[0];
        panda$core$Bit $tmp6443 = $tmp6441(s$Iter6433);
        panda$core$Bit $tmp6444 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6443);
        if (!$tmp6444.value) goto $l6439;
        {
            ITable* $tmp6446 = s$Iter6433->$class->itable;
            while ($tmp6446->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6446 = $tmp6446->next;
            }
            $fn6448 $tmp6447 = $tmp6446->methods[1];
            panda$core$Object* $tmp6449 = $tmp6447(s$Iter6433);
            s6445 = ((org$pandalanguage$pandac$IRNode*) $tmp6449);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s6445, ((panda$io$OutputStream*) bodyBuffer6430));
        }
        goto $l6438;
        $l6439:;
    }
    panda$core$String* $tmp6450 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeader);
    (($fn6451) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6450);
    panda$core$String* $tmp6452 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer6430);
    (($fn6453) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6452);
    panda$core$Bit $tmp6454 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6455 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6454);
    if ($tmp6455.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6456 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6457 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6456);
        if ($tmp6457.value) {
        {
            (($fn6459) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6458);
        }
        }
        else {
        {
            (($fn6461) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6460);
        }
        }
    }
    }
    (($fn6463) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6462);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6464 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6464.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6465 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6465);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

