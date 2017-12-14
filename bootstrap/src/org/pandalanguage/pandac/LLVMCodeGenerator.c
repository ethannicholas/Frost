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

org$pandalanguage$pandac$LLVMCodeGenerator$class_type org$pandalanguage$pandac$LLVMCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$finish, org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim, org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT, org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl} };

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
typedef void (*$fn1921)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1937)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1946)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1962)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1971)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2009)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2026)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2034)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2042)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2067)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2089)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2106)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2129)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2173)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2182)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2194)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2204)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2226)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2256)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2286)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2315)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2324)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2338)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2353)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2377)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2390)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2402)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2407)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2414)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2431)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2444)(panda$collections$CollectionView*);
typedef void (*$fn2464)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2476)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2491)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2518)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2539)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2552)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2566)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2591)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2606)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2631)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2663)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2678)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2694)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2706)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2740)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2754)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2777)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2792)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2881)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2892)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2898)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2904)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2910)(panda$collections$Iterator*);
typedef void (*$fn2921)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2923)(panda$io$OutputStream*);
typedef void (*$fn2948)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2966)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3068)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3080)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3085)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3098)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3105)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3110)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3116)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3122)(panda$collections$Iterator*);
typedef void (*$fn3130)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3133)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3145)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3168)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3194)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3215)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3226)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3244)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3280)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3296)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3301)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3317)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3333)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3351)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3382)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3399)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3421)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3441)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3478)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3493)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3504)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3532)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3554)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3569)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3584)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3608)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3621)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3713)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3768)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3809)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3823)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3845)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3855)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3868)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3895)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3910)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3965)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3977)(panda$collections$CollectionView*);
typedef void (*$fn3988)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3995)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4001)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4007)(panda$collections$Iterator*);
typedef void (*$fn4016)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4019)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4056)(panda$collections$CollectionView*);
typedef void (*$fn4068)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4091)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4114)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4122)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4130)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4139)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4169)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4212)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4234)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4279)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4285)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4291)(panda$collections$Iterator*);
typedef void (*$fn4313)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4340)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4365)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4377)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4393)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4398)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4505)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4521)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4538)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4542)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4548)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4554)(panda$collections$Iterator*);
typedef void (*$fn4556)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4557)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4560)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4598)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4611)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4622)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4658)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4665)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4677)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4686)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4703)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4717)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4726)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4735)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4778)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4797)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4808)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4838)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4853)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4860)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4877)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4890)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4902)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4913)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4925)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4936)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4948)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4960)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4968)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4982)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4987)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5023)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5030)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5042)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5051)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5068)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5082)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5091)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5100)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5114)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5123)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5163)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5175)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5192)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5211)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5222)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5269)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5288)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5299)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5318)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5329)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5344)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5351)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5368)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5383)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5396)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5411)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5422)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5437)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5448)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5463)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5488)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5501)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5512)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5525)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5536)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5551)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5571)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5585)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5590)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5613)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5645)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5664)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5676)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5687)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5696)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5710)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5719)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5729)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5744)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5761)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5767)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5773)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5799)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5816)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5845)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5886)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5923)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5944)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5951)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5959)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5961)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6003)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6010)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6037)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6059)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6065)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6071)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6077)(panda$collections$Iterator*);
typedef void (*$fn6084)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6086)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6094)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6099)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6101)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6119)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6132)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6148)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6213)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6246)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6273)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6277)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6285)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6292)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6303)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6308)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6314)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6320)(panda$collections$Iterator*);
typedef void (*$fn6333)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6336)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6342)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6345)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6358)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6367)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6372)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6378)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6384)(panda$collections$Iterator*);
typedef void (*$fn6397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6400)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6408)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6414)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6420)(panda$collections$Iterator*);
typedef void (*$fn6423)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6425)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6431)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6433)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6435)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 2215331, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 2154135, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, 223575839, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, 223718240, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 2214028, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, 205183331, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 2031008, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 21526, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 2265746, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 219725109287572, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 219725109288469, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, 22192236038186692, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, 22192236038187197, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, 22192236038186677, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, 22192236038187182, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 2215331, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 2154135, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, 225636441, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, 225778842, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 2214028, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, 216516642, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 2031008, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 21526, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 2265746, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 219725109287572, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 219725109288469, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, 22192236038207094, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, 22192236038207599, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, 22192236038207079, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, 22192236038207584, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, 210150800, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, 210336133, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, 210274937, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, 210181926, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, 21870595432513580, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, 21870595432514477, NULL };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, 21870595432513785, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, 21870595432514290, NULL };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, 21870595432513770, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, 21870595432514275, NULL };
static panda$core$String $s1910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s1944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 13524, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1983470, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x73\x74\x63\x63\x20", 7, 216520157801561, NULL };
static panda$core$String $s2080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, 212767339, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A", 2, 14485, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, 14834798317007399, NULL };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, 5996012307911795392, NULL };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, 19638, NULL };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, -284792955217493296, NULL };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, 1445392722364703443, NULL };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, 9180175165629405233, NULL };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, 147755760, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, 1445392722364703444, NULL };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, 2891297979021532403, NULL };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 20716344924, NULL };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, -68084191220774643, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, 212798144, NULL };
static panda$core$String $s2660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 229298558774239, NULL };
static panda$core$String $s2689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s2701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, 2946720541906757250, NULL };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, 178709719977385382, NULL };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, 2005081535935103476, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 146543380183876, NULL };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, 22799530931, NULL };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s2890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 171978245881277, NULL };
static panda$core$String $s3036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s3071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 14324499638457470, NULL };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1450073858438092980, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1983470, NULL };
static panda$core$String $s3207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s3264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s3266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s3268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s3273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 25, -6025032490972529456, NULL };
static panda$core$String $s3275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 22, 3938018972516606829, NULL };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, -6901405387198259419, NULL };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, -5055193716233257020, NULL };
static panda$core$String $s3299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, -38380777888947644, NULL };
static panda$core$String $s3318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s3321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1971047, NULL };
static panda$core$String $s3518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, -7594506016420023174, NULL };
static panda$core$String $s3521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s3526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 2084875595949565210, NULL };
static panda$core$String $s3602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x70\x74\x72\x75\x6E\x63", 7, 216677911493671, NULL };
static panda$core$String $s3634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x70\x65\x78\x74", 5, 21240697652, NULL };
static panda$core$String $s3636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x70\x74\x6F\x73\x69", 6, 2145325825562, NULL };
static panda$core$String $s3638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x70\x74\x6F\x75\x69", 6, 2145325825764, NULL };
static panda$core$String $s3641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x69\x74\x6F\x66\x70", 6, 2281228707962, NULL };
static panda$core$String $s3643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x69\x74\x6F\x66\x70", 6, 2302248908964, NULL };
static panda$core$String $s3645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 22699766057, NULL };
static panda$core$String $s3648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 223587553, NULL };
static panda$core$String $s3649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 230799660, NULL };
static panda$core$String $s3690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 212358244529747, NULL };
static panda$core$String $s3699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s3815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s3821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s3885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s3893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 21489501287, NULL };
static panda$core$String $s3898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 3556234982078979695, NULL };
static panda$core$String $s3900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x69\x38\x2A\x2A\x20", 11, -1701017812076485794, NULL };
static panda$core$String $s3907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s3935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s3939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x78", 2, 15169, NULL };
static panda$core$String $s3944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 175539598599330, NULL };
static panda$core$String $s3970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1410364661239, NULL };
static panda$core$String $s3983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, -4682671939848071135, NULL };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s3990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 2107094, NULL };
static panda$core$String $s4014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s4022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 17208241946, NULL };
static panda$core$String $s4024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, -4560911471279777923, NULL };
static panda$core$String $s4034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s4036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s4042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 54, -4410989833928586841, NULL };
static panda$core$String $s4044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, -1652634297463438611, NULL };
static panda$core$String $s4046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, -1388553655089279848, NULL };
static panda$core$String $s4059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s4062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s4065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20\x69\x38\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 14, 8437322619071490889, NULL };
static panda$core$String $s4072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 14479861264, NULL };
static panda$core$String $s4078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s4082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s4089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, 24050909224991147, NULL };
static panda$core$String $s4109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, -1449709338160382639, NULL };
static panda$core$String $s4120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, 149724671, NULL };
static panda$core$String $s4125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s4128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s4134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s4137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 24050909225001348, NULL };
static panda$core$String $s4156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s4167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s4173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s4176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s4188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 2138506394783058478, NULL };
static panda$core$String $s4190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s4203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x66\x73\x75\x62\x20", 8, 14324499969274890, NULL };
static panda$core$String $s4207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2E\x30\x2C\x20", 6, 1402886153851, NULL };
static panda$core$String $s4210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s4221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 141826750873303, NULL };
static panda$core$String $s4229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 13886901203, NULL };
static panda$core$String $s4232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s4306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s4335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s4352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s4359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 214439158056679, NULL };
static panda$core$String $s4388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s4391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s4394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 2149145203081189652, NULL };
static panda$core$String $s4396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s4466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s4500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s4512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s4672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s4690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s4693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s4704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s4730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s4751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s4758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s4761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s4766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s4775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s4788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s4818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s4845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s4897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s4920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s4943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s4955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s4958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s4961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s4963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s5037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s5040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s5055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s5058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s5069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s5095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s5102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s5106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, -8455018733144080751, NULL };
static panda$core$String $s5109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s5112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1527347502952, NULL };
static panda$core$String $s5139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s5141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s5143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s5146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s5149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s5151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s5155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 5640068998409967338, NULL };
static panda$core$String $s5158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 150, NULL };
static panda$core$String $s5165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s5202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s5232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 2091237, NULL };
static panda$core$String $s5279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 2092752, NULL };
static panda$core$String $s5309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s5473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s5543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s5558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s5561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s5564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s5566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s5727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s5831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 5661491935713932202, NULL };
static panda$core$String $s5842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s5859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s5863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s5872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s5949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s5999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s6001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s6008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s6029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s6032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s6035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s6049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s6051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s6058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x66\x61\x73\x74\x63\x63\x20\x76\x6F\x69\x64\x20", 17, 8605580293215133655, NULL };
static panda$core$String $s6079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1112391861657830585, NULL };
static panda$core$String $s6081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, -3426205430399916046, NULL };
static panda$core$String $s6082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, -6932554582644871757, NULL };
static panda$core$String $s6085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, -418642434149121372, NULL };
static panda$core$String $s6087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, -3066853447063148068, NULL };
static panda$core$String $s6089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 3939743058867758116, NULL };
static panda$core$String $s6097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s6102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s6114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s6117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s6121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s6125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, 230550101366891, NULL };
static panda$core$String $s6127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s6146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 13524, NULL };
static panda$core$String $s6189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, 14293708514290657, NULL };
static panda$core$String $s6191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s6197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, 13873332722, NULL };
static panda$core$String $s6242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s6244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 21658185952146853, NULL };
static panda$core$String $s6271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s6280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s6338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s6341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s6344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s6348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s6430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s6432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s6434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };

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
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$OutputStream* p_out) {
    panda$core$String* llvmOp1864;
    panda$core$String* result1907;
    switch (p_cl.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1864 = &$s1865;
                }
                break;
                case 52:
                {
                    llvmOp1864 = &$s1866;
                }
                break;
                case 53:
                {
                    llvmOp1864 = &$s1867;
                }
                break;
                case 55:
                {
                    llvmOp1864 = &$s1868;
                }
                break;
                case 56:
                {
                    llvmOp1864 = &$s1869;
                }
                break;
                case 72:
                {
                    llvmOp1864 = &$s1870;
                }
                break;
                case 1:
                {
                    llvmOp1864 = &$s1871;
                }
                break;
                case 67:
                {
                    llvmOp1864 = &$s1872;
                }
                break;
                case 69:
                {
                    llvmOp1864 = &$s1873;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1864 = &$s1874;
                }
                break;
                case 58:
                {
                    llvmOp1864 = &$s1875;
                }
                break;
                case 59:
                {
                    llvmOp1864 = &$s1876;
                }
                break;
                case 63:
                {
                    llvmOp1864 = &$s1877;
                }
                break;
                case 62:
                {
                    llvmOp1864 = &$s1878;
                }
                break;
                case 65:
                {
                    llvmOp1864 = &$s1879;
                }
                break;
                case 64:
                {
                    llvmOp1864 = &$s1880;
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
                    llvmOp1864 = &$s1881;
                }
                break;
                case 52:
                {
                    llvmOp1864 = &$s1882;
                }
                break;
                case 53:
                {
                    llvmOp1864 = &$s1883;
                }
                break;
                case 55:
                {
                    llvmOp1864 = &$s1884;
                }
                break;
                case 56:
                {
                    llvmOp1864 = &$s1885;
                }
                break;
                case 72:
                {
                    llvmOp1864 = &$s1886;
                }
                break;
                case 1:
                {
                    llvmOp1864 = &$s1887;
                }
                break;
                case 67:
                {
                    llvmOp1864 = &$s1888;
                }
                break;
                case 69:
                {
                    llvmOp1864 = &$s1889;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1864 = &$s1890;
                }
                break;
                case 58:
                {
                    llvmOp1864 = &$s1891;
                }
                break;
                case 59:
                {
                    llvmOp1864 = &$s1892;
                }
                break;
                case 63:
                {
                    llvmOp1864 = &$s1893;
                }
                break;
                case 62:
                {
                    llvmOp1864 = &$s1894;
                }
                break;
                case 65:
                {
                    llvmOp1864 = &$s1895;
                }
                break;
                case 64:
                {
                    llvmOp1864 = &$s1896;
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
                    llvmOp1864 = &$s1897;
                }
                break;
                case 52:
                {
                    llvmOp1864 = &$s1898;
                }
                break;
                case 53:
                {
                    llvmOp1864 = &$s1899;
                }
                break;
                case 54:
                {
                    llvmOp1864 = &$s1900;
                }
                break;
                case 58:
                {
                    llvmOp1864 = &$s1901;
                }
                break;
                case 59:
                {
                    llvmOp1864 = &$s1902;
                }
                break;
                case 63:
                {
                    llvmOp1864 = &$s1903;
                }
                break;
                case 62:
                {
                    llvmOp1864 = &$s1904;
                }
                break;
                case 65:
                {
                    llvmOp1864 = &$s1905;
                }
                break;
                case 64:
                {
                    llvmOp1864 = &$s1906;
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
    panda$core$String* $tmp1908 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1907 = $tmp1908;
    panda$core$String* $tmp1909 = panda$core$String$convert$R$panda$core$String(result1907);
    panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1909, &$s1910);
    panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1911, llvmOp1864);
    panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1912, &$s1913);
    panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1914, p_leftRef);
    panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, &$s1916);
    panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, p_rightRef);
    panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1918, &$s1919);
    (($fn1921) p_out->$class->vtable[19])(p_out, $tmp1920);
    return result1907;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1922;
    panda$core$String* rightRef1924;
    panda$core$String* raw1926;
    panda$core$String* result1938;
    panda$core$String* $tmp1923 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1922 = $tmp1923;
    panda$core$String* $tmp1925 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1924 = $tmp1925;
    panda$core$String* $tmp1927 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1926 = $tmp1927;
    panda$core$String* $tmp1928 = panda$core$String$convert$R$panda$core$String(raw1926);
    panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1928, &$s1929);
    panda$core$String* $tmp1931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1930, leftRef1922);
    panda$core$String* $tmp1933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1931, &$s1932);
    panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1933, rightRef1924);
    panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1934, &$s1935);
    (($fn1937) p_out->$class->vtable[19])(p_out, $tmp1936);
    panda$core$String* $tmp1939 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1938 = $tmp1939;
    panda$core$String* $tmp1940 = panda$core$String$convert$R$panda$core$String(result1938);
    panda$core$String* $tmp1942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1940, &$s1941);
    panda$core$String* $tmp1943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1942, raw1926);
    panda$core$String* $tmp1945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1943, &$s1944);
    (($fn1946) p_out->$class->vtable[19])(p_out, $tmp1945);
    return result1938;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1947;
    panda$core$String* rightRef1949;
    panda$core$String* raw1951;
    panda$core$String* result1963;
    panda$core$String* $tmp1948 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1947 = $tmp1948;
    panda$core$String* $tmp1950 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1949 = $tmp1950;
    panda$core$String* $tmp1952 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1951 = $tmp1952;
    panda$core$String* $tmp1953 = panda$core$String$convert$R$panda$core$String(raw1951);
    panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, &$s1954);
    panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1955, leftRef1947);
    panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, &$s1957);
    panda$core$String* $tmp1959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1958, rightRef1949);
    panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1959, &$s1960);
    (($fn1962) p_out->$class->vtable[19])(p_out, $tmp1961);
    panda$core$String* $tmp1964 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1963 = $tmp1964;
    panda$core$String* $tmp1965 = panda$core$String$convert$R$panda$core$String(result1963);
    panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1965, &$s1966);
    panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1967, raw1951);
    panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1968, &$s1969);
    (($fn1971) p_out->$class->vtable[19])(p_out, $tmp1970);
    return result1963;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1977;
    panda$core$String* rightRef1979;
    panda$core$Bit $tmp1972 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1972.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1973 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1973;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1974 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1974;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1975 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1975;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1976 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1976;
        }
        break;
        default:
        {
            panda$core$String* $tmp1978 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1977 = $tmp1978;
            panda$core$String* $tmp1980 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1979 = $tmp1980;
            panda$core$Int64 $tmp1981 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1982 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, $tmp1981, leftRef1977, p_op, rightRef1979, p_out);
            return $tmp1982;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp1983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1983.value);
    panda$core$Int64 $tmp1984 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1984, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1985.value);
    panda$core$Object* $tmp1986 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1987 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1988 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1986), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1987), p_out);
    return $tmp1988;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_t, panda$io$OutputStream* p_out) {
    panda$core$String* test1998;
    panda$core$String* testBit2001;
    panda$core$String* trueLabel2010;
    panda$core$String* falseLabel2012;
    panda$core$String* merge2014;
    panda$core$String* ifTrue2027;
    panda$core$String* ifFalse2035;
    panda$core$String* result2043;
    panda$core$Bit $tmp1989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->kind, ((panda$core$Int64) { 1044 }));
    PANDA_ASSERT($tmp1989.value);
    panda$core$Int64 $tmp1990 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
    panda$core$Bit $tmp1991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1990, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp1991.value);
    panda$core$Object* $tmp1992 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1993 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1994 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1992)->type, $tmp1993);
    PANDA_ASSERT($tmp1994.value);
    panda$core$Object* $tmp1995 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp1996 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp1997 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1995)->type, ((org$pandalanguage$pandac$IRNode*) $tmp1996)->type);
    PANDA_ASSERT($tmp1997.value);
    panda$core$Object* $tmp1999 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2000 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1999), p_out);
    test1998 = $tmp2000;
    panda$core$String* $tmp2002 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit2001 = $tmp2002;
    panda$core$String* $tmp2003 = panda$core$String$convert$R$panda$core$String(testBit2001);
    panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2003, &$s2004);
    panda$core$String* $tmp2006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2005, test1998);
    panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2006, &$s2007);
    (($fn2009) p_out->$class->vtable[19])(p_out, $tmp2008);
    panda$core$String* $tmp2011 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2010 = $tmp2011;
    panda$core$String* $tmp2013 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2012 = $tmp2013;
    panda$core$String* $tmp2015 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2014 = $tmp2015;
    panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2016, testBit2001);
    panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2017, &$s2018);
    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2019, trueLabel2010);
    panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, &$s2021);
    panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2022, falseLabel2012);
    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2023, &$s2024);
    (($fn2026) p_out->$class->vtable[19])(p_out, $tmp2025);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, trueLabel2010, p_out);
    panda$core$Object* $tmp2028 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2029 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2028), p_out);
    ifTrue2027 = $tmp2029;
    trueLabel2010 = self->currentBlock;
    panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2030, merge2014);
    panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2031, &$s2032);
    (($fn2034) p_out->$class->vtable[19])(p_out, $tmp2033);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, falseLabel2012, p_out);
    panda$core$Object* $tmp2036 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$String* $tmp2037 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2036), p_out);
    ifFalse2035 = $tmp2037;
    falseLabel2012 = self->currentBlock;
    panda$core$String* $tmp2039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2038, merge2014);
    panda$core$String* $tmp2041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2039, &$s2040);
    (($fn2042) p_out->$class->vtable[19])(p_out, $tmp2041);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, merge2014, p_out);
    panda$core$String* $tmp2044 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2043 = $tmp2044;
    panda$core$String* $tmp2045 = panda$core$String$convert$R$panda$core$String(result2043);
    panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2045, &$s2046);
    panda$core$Object* $tmp2048 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2049 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2048)->type);
    panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, $tmp2049);
    panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2050, &$s2051);
    panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, ifTrue2027);
    panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2053, &$s2054);
    panda$core$String* $tmp2056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2055, trueLabel2010);
    panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2056, &$s2057);
    panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2059, ifFalse2035);
    panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2060, &$s2061);
    panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2062, falseLabel2012);
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2063, &$s2064);
    panda$core$String* $tmp2066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, $tmp2065);
    (($fn2067) p_out->$class->vtable[19])(p_out, $tmp2066);
    return result2043;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp2070 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp2069 = $tmp2070.value;
    if (!$tmp2069) goto $l2071;
    panda$core$Bit $tmp2072 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp2073 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2072);
    $tmp2069 = $tmp2073.value;
    $l2071:;
    panda$core$Bit $tmp2074 = { $tmp2069 };
    bool $tmp2068 = $tmp2074.value;
    if (!$tmp2068) goto $l2075;
    panda$core$Bit $tmp2076 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp2077 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2076);
    $tmp2068 = $tmp2077.value;
    $l2075:;
    panda$core$Bit $tmp2078 = { $tmp2068 };
    if ($tmp2078.value) {
    {
        return &$s2079;
    }
    }
    return &$s2080;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc2081;
    panda$core$Int64 index2083;
    panda$collections$ListView* vtable2084;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2086;
    panda$core$String* classPtrPtr2115;
    panda$core$String* classPtr2130;
    panda$core$String* cast2139;
    panda$core$String* ptr2151;
    panda$core$String* load2174;
    panda$core$String* result2183;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2082 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc2081 = $tmp2082;
    index2083 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2085 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2084 = $tmp2085;
    ITable* $tmp2087 = ((panda$collections$CollectionView*) vtable2084)->$class->itable;
    while ($tmp2087->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2087 = $tmp2087->next;
    }
    $fn2089 $tmp2088 = $tmp2087->methods[0];
    panda$core$Int64 $tmp2090 = $tmp2088(((panda$collections$CollectionView*) vtable2084));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2086, ((panda$core$Int64) { 0 }), $tmp2090, ((panda$core$Bit) { false }));
    int64_t $tmp2092 = $tmp2086.min.value;
    panda$core$Int64 i2091 = { $tmp2092 };
    int64_t $tmp2094 = $tmp2086.max.value;
    bool $tmp2095 = $tmp2086.inclusive.value;
    if ($tmp2095) goto $l2102; else goto $l2103;
    $l2102:;
    if ($tmp2092 <= $tmp2094) goto $l2096; else goto $l2098;
    $l2103:;
    if ($tmp2092 < $tmp2094) goto $l2096; else goto $l2098;
    $l2096:;
    {
        ITable* $tmp2104 = vtable2084->$class->itable;
        while ($tmp2104->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2104 = $tmp2104->next;
        }
        $fn2106 $tmp2105 = $tmp2104->methods[0];
        panda$core$Object* $tmp2107 = $tmp2105(vtable2084, i2091);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2107)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2083 = i2091;
            goto $l2098;
        }
        }
    }
    $l2099:;
    int64_t $tmp2109 = $tmp2094 - i2091.value;
    if ($tmp2095) goto $l2110; else goto $l2111;
    $l2110:;
    if ($tmp2109 >= 1) goto $l2108; else goto $l2098;
    $l2111:;
    if ($tmp2109 > 1) goto $l2108; else goto $l2098;
    $l2108:;
    i2091.value += 1;
    goto $l2096;
    $l2098:;
    panda$core$Bit $tmp2114 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2083, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2114.value);
    panda$core$String* $tmp2116 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2115 = $tmp2116;
    panda$core$String* $tmp2117 = panda$core$String$convert$R$panda$core$String(classPtrPtr2115);
    panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2117, &$s2118);
    org$pandalanguage$pandac$Type* $tmp2120 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2121 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2120);
    panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2119, $tmp2121);
    panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2123);
    panda$core$String* $tmp2125 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2125, &$s2126);
    panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2124, $tmp2127);
    (($fn2129) p_out->$class->vtable[19])(p_out, $tmp2128);
    panda$core$String* $tmp2131 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2130 = $tmp2131;
    panda$core$String* $tmp2132 = panda$core$String$convert$R$panda$core$String(classPtr2130);
    panda$core$String* $tmp2134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2132, &$s2133);
    panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2134, classPtrPtr2115);
    panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2135, &$s2136);
    (($fn2138) p_out->$class->vtable[19])(p_out, $tmp2137);
    panda$core$String* $tmp2140 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2139 = $tmp2140;
    panda$core$String* $tmp2141 = panda$core$String$convert$R$panda$core$String(cast2139);
    panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2141, &$s2142);
    panda$core$String* $tmp2144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, classPtr2130);
    panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2144, &$s2145);
    panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2146, cc2081->type);
    panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2147, &$s2148);
    (($fn2150) p_out->$class->vtable[19])(p_out, $tmp2149);
    panda$core$String* $tmp2152 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2151 = $tmp2152;
    panda$core$String* $tmp2153 = panda$core$String$convert$R$panda$core$String(ptr2151);
    panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, &$s2154);
    panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, cc2081->type);
    panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2156, &$s2157);
    panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2158, cc2081->type);
    panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2159, &$s2160);
    panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, cast2139);
    panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, &$s2163);
    panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2165, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, &$s2167);
    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2168, ((panda$core$Object*) wrap_panda$core$Int64(index2083)));
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2170);
    panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2164, $tmp2171);
    (($fn2173) p_out->$class->vtable[19])(p_out, $tmp2172);
    panda$core$String* $tmp2175 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2174 = $tmp2175;
    panda$core$String* $tmp2176 = panda$core$String$convert$R$panda$core$String(load2174);
    panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, &$s2177);
    panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, ptr2151);
    panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2179, &$s2180);
    (($fn2182) p_out->$class->vtable[19])(p_out, $tmp2181);
    panda$core$String* $tmp2184 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2183 = $tmp2184;
    panda$core$String* $tmp2185 = panda$core$String$convert$R$panda$core$String(result2183);
    panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, &$s2186);
    panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, load2174);
    panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2188, &$s2189);
    org$pandalanguage$pandac$Type* $tmp2191 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2192 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2191);
    panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, $tmp2192);
    (($fn2194) p_out->$class->vtable[19])(p_out, $tmp2193);
    return result2183;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    panda$core$String* methodType2195;
    panda$core$String* entry2198;
    panda$core$String* rawClassPointer2205;
    panda$core$String* classPointer2227;
    panda$core$String* classType2229;
    panda$core$String* loadedClass2242;
    panda$core$String* itableFirst2257;
    panda$core$String* next2280;
    panda$core$String* leavingEntryLabel2287;
    panda$core$String* itableNext2289;
    panda$core$String* itablePtrPtr2294;
    panda$core$String* fail2296;
    panda$core$String* itablePtr2316;
    panda$core$String* itableClassPtr2325;
    panda$core$String* itableClass2339;
    panda$core$String* test2354;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2356;
    panda$core$String* success2378;
    panda$core$Int64 index2408;
    panda$collections$ListView* vtable2409;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2411;
    panda$core$String* methodPtrPtr2448;
    panda$core$String* cast2465;
    panda$core$String* methodPtr2477;
    org$pandalanguage$pandac$Type* $tmp2196 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2197 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2196);
    methodType2195 = $tmp2197;
    panda$core$String* $tmp2199 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2198 = $tmp2199;
    panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2200, entry2198);
    panda$core$String* $tmp2203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2201, &$s2202);
    (($fn2204) p_out->$class->vtable[19])(p_out, $tmp2203);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, entry2198, p_out);
    panda$core$String* $tmp2206 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawClassPointer2205 = $tmp2206;
    panda$core$String* $tmp2207 = panda$core$String$convert$R$panda$core$String(rawClassPointer2205);
    panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2207, &$s2208);
    org$pandalanguage$pandac$Type* $tmp2210 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2211 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2210);
    panda$core$String* $tmp2212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, $tmp2211);
    panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2212, &$s2213);
    panda$core$String* $tmp2215 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2215, &$s2216);
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2217, &$s2218);
    panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, &$s2220);
    panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2221, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2222, &$s2223);
    panda$core$String* $tmp2225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, $tmp2224);
    (($fn2226) p_out->$class->vtable[19])(p_out, $tmp2225);
    panda$core$String* $tmp2228 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2227 = $tmp2228;
    org$pandalanguage$pandac$Type* $tmp2230 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2231 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2230);
    classType2229 = $tmp2231;
    panda$core$String* $tmp2232 = panda$core$String$convert$R$panda$core$String(classPointer2227);
    panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2232, &$s2233);
    panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2234, rawClassPointer2205);
    panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, &$s2236);
    panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, classType2229);
    panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, &$s2239);
    (($fn2241) p_out->$class->vtable[19])(p_out, $tmp2240);
    panda$core$String* $tmp2243 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2242 = $tmp2243;
    panda$core$String* $tmp2244 = panda$core$String$convert$R$panda$core$String(loadedClass2242);
    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2244, &$s2245);
    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, classType2229);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, &$s2248);
    panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, classType2229);
    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2250, &$s2251);
    panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, classPointer2227);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2253, &$s2254);
    (($fn2256) p_out->$class->vtable[19])(p_out, $tmp2255);
    panda$core$String* $tmp2258 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2257 = $tmp2258;
    panda$core$String* $tmp2259 = panda$core$String$convert$R$panda$core$String(itableFirst2257);
    panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2259, &$s2260);
    panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2261, classType2229);
    panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2262, &$s2263);
    panda$core$String* $tmp2265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, classType2229);
    panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2265, &$s2266);
    panda$core$String* $tmp2268 = panda$core$String$convert$R$panda$core$String(loadedClass2242);
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2268, &$s2269);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, &$s2271);
    panda$core$String* $tmp2274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, &$s2273);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2274, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2275, &$s2276);
    panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, $tmp2277);
    (($fn2279) p_out->$class->vtable[19])(p_out, $tmp2278);
    panda$core$String* $tmp2281 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2280 = $tmp2281;
    panda$core$String* $tmp2283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2282, next2280);
    panda$core$String* $tmp2285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2283, &$s2284);
    (($fn2286) p_out->$class->vtable[19])(p_out, $tmp2285);
    leavingEntryLabel2287 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, next2280, p_out);
    panda$core$Int64 $tmp2288 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2288;
    panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2290, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2291, &$s2292);
    itableNext2289 = $tmp2293;
    panda$core$String* $tmp2295 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2294 = $tmp2295;
    panda$core$String* $tmp2297 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2296 = $tmp2297;
    panda$core$String* $tmp2298 = panda$core$String$convert$R$panda$core$String(itablePtrPtr2294);
    panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2298, &$s2299);
    panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2300, itableFirst2257);
    panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2301, &$s2302);
    panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, leavingEntryLabel2287);
    panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2304, &$s2305);
    panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2307, itableNext2289);
    panda$core$String* $tmp2310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2308, &$s2309);
    panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2310, fail2296);
    panda$core$String* $tmp2313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2311, &$s2312);
    panda$core$String* $tmp2314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2306, $tmp2313);
    (($fn2315) p_out->$class->vtable[19])(p_out, $tmp2314);
    panda$core$String* $tmp2317 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2316 = $tmp2317;
    panda$core$String* $tmp2318 = panda$core$String$convert$R$panda$core$String(itablePtr2316);
    panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2318, &$s2319);
    panda$core$String* $tmp2321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2320, itablePtrPtr2294);
    panda$core$String* $tmp2323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2321, &$s2322);
    (($fn2324) p_out->$class->vtable[19])(p_out, $tmp2323);
    panda$core$String* $tmp2326 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2325 = $tmp2326;
    panda$core$String* $tmp2327 = panda$core$String$convert$R$panda$core$String(itableClassPtr2325);
    panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2327, &$s2328);
    panda$core$String* $tmp2330 = panda$core$String$convert$R$panda$core$String(itablePtr2316);
    panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2330, &$s2331);
    panda$core$String* $tmp2334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, &$s2333);
    panda$core$String* $tmp2336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2334, &$s2335);
    panda$core$String* $tmp2337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2329, $tmp2336);
    (($fn2338) p_out->$class->vtable[19])(p_out, $tmp2337);
    panda$core$String* $tmp2340 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2339 = $tmp2340;
    panda$core$String* $tmp2341 = panda$core$String$convert$R$panda$core$String(itableClass2339);
    panda$core$String* $tmp2343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2341, &$s2342);
    panda$core$String* $tmp2344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2343, classType2229);
    panda$core$String* $tmp2346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2344, &$s2345);
    panda$core$String* $tmp2347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2346, classType2229);
    panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2347, &$s2348);
    panda$core$String* $tmp2350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2349, itableClassPtr2325);
    panda$core$String* $tmp2352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2350, &$s2351);
    (($fn2353) p_out->$class->vtable[19])(p_out, $tmp2352);
    panda$core$String* $tmp2355 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2354 = $tmp2355;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2357 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2356 = $tmp2357;
    panda$core$String* $tmp2358 = panda$core$String$convert$R$panda$core$String(test2354);
    panda$core$String* $tmp2360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2358, &$s2359);
    panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2360, classType2229);
    panda$core$String* $tmp2363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2361, &$s2362);
    panda$core$String* $tmp2364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2363, intfCC2356->type);
    panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2364, &$s2365);
    panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2366, intfCC2356->name);
    panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2367, &$s2368);
    panda$core$String* $tmp2370 = panda$core$String$convert$R$panda$core$String(classType2229);
    panda$core$String* $tmp2372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2370, &$s2371);
    panda$core$String* $tmp2373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2372, itableClass2339);
    panda$core$String* $tmp2375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2373, &$s2374);
    panda$core$String* $tmp2376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2369, $tmp2375);
    (($fn2377) p_out->$class->vtable[19])(p_out, $tmp2376);
    panda$core$String* $tmp2379 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2378 = $tmp2379;
    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2380, test2354);
    panda$core$String* $tmp2383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2381, &$s2382);
    panda$core$String* $tmp2384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2383, success2378);
    panda$core$String* $tmp2386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2384, &$s2385);
    panda$core$String* $tmp2387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2386, fail2296);
    panda$core$String* $tmp2389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2387, &$s2388);
    (($fn2390) p_out->$class->vtable[19])(p_out, $tmp2389);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, fail2296, p_out);
    panda$core$String* $tmp2391 = panda$core$String$convert$R$panda$core$String(itableNext2289);
    panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2391, &$s2392);
    panda$core$String* $tmp2394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2393, itablePtr2316);
    panda$core$String* $tmp2396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2394, &$s2395);
    panda$core$String* $tmp2398 = panda$core$String$convert$R$panda$core$String(&$s2397);
    panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2398, &$s2399);
    panda$core$String* $tmp2401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2396, $tmp2400);
    (($fn2402) p_out->$class->vtable[19])(p_out, $tmp2401);
    panda$core$String* $tmp2404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2403, next2280);
    panda$core$String* $tmp2406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2404, &$s2405);
    (($fn2407) p_out->$class->vtable[19])(p_out, $tmp2406);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, success2378, p_out);
    index2408 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2410 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2409 = $tmp2410;
    ITable* $tmp2412 = ((panda$collections$CollectionView*) vtable2409)->$class->itable;
    while ($tmp2412->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2412 = $tmp2412->next;
    }
    $fn2414 $tmp2413 = $tmp2412->methods[0];
    panda$core$Int64 $tmp2415 = $tmp2413(((panda$collections$CollectionView*) vtable2409));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2411, ((panda$core$Int64) { 0 }), $tmp2415, ((panda$core$Bit) { false }));
    int64_t $tmp2417 = $tmp2411.min.value;
    panda$core$Int64 i2416 = { $tmp2417 };
    int64_t $tmp2419 = $tmp2411.max.value;
    bool $tmp2420 = $tmp2411.inclusive.value;
    if ($tmp2420) goto $l2427; else goto $l2428;
    $l2427:;
    if ($tmp2417 <= $tmp2419) goto $l2421; else goto $l2423;
    $l2428:;
    if ($tmp2417 < $tmp2419) goto $l2421; else goto $l2423;
    $l2421:;
    {
        ITable* $tmp2429 = vtable2409->$class->itable;
        while ($tmp2429->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2429 = $tmp2429->next;
        }
        $fn2431 $tmp2430 = $tmp2429->methods[0];
        panda$core$Object* $tmp2432 = $tmp2430(vtable2409, i2416);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2432)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2408 = i2416;
            goto $l2423;
        }
        }
    }
    $l2424:;
    int64_t $tmp2434 = $tmp2419 - i2416.value;
    if ($tmp2420) goto $l2435; else goto $l2436;
    $l2435:;
    if ($tmp2434 >= 1) goto $l2433; else goto $l2423;
    $l2436:;
    if ($tmp2434 > 1) goto $l2433; else goto $l2423;
    $l2433:;
    i2416.value += 1;
    goto $l2421;
    $l2423:;
    org$pandalanguage$pandac$Type* $tmp2439 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2440 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2439);
    panda$collections$ListView* $tmp2441 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2440);
    ITable* $tmp2442 = ((panda$collections$CollectionView*) $tmp2441)->$class->itable;
    while ($tmp2442->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2442 = $tmp2442->next;
    }
    $fn2444 $tmp2443 = $tmp2442->methods[0];
    panda$core$Int64 $tmp2445 = $tmp2443(((panda$collections$CollectionView*) $tmp2441));
    panda$core$Int64 $tmp2446 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2408, $tmp2445);
    index2408 = $tmp2446;
    panda$core$Bit $tmp2447 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2408, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2447.value);
    panda$core$String* $tmp2449 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2448 = $tmp2449;
    panda$core$String* $tmp2450 = panda$core$String$convert$R$panda$core$String(methodPtrPtr2448);
    panda$core$String* $tmp2452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2450, &$s2451);
    panda$core$String* $tmp2453 = panda$core$String$convert$R$panda$core$String(itablePtr2316);
    panda$core$String* $tmp2455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2453, &$s2454);
    panda$core$String* $tmp2457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2455, &$s2456);
    panda$core$String* $tmp2459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2457, &$s2458);
    panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2459, ((panda$core$Object*) wrap_panda$core$Int64(index2408)));
    panda$core$String* $tmp2462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2460, &$s2461);
    panda$core$String* $tmp2463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2452, $tmp2462);
    (($fn2464) p_out->$class->vtable[19])(p_out, $tmp2463);
    panda$core$String* $tmp2466 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2465 = $tmp2466;
    panda$core$String* $tmp2467 = panda$core$String$convert$R$panda$core$String(cast2465);
    panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, &$s2468);
    panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, methodPtrPtr2448);
    panda$core$String* $tmp2472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2471);
    panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2472, methodType2195);
    panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, &$s2474);
    (($fn2476) p_out->$class->vtable[19])(p_out, $tmp2475);
    panda$core$String* $tmp2478 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2477 = $tmp2478;
    panda$core$String* $tmp2479 = panda$core$String$convert$R$panda$core$String(methodPtr2477);
    panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, &$s2480);
    panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2481, methodType2195);
    panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2482, &$s2483);
    panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2484, methodType2195);
    panda$core$String* $tmp2487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2485, &$s2486);
    panda$core$String* $tmp2488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2487, cast2465);
    panda$core$String* $tmp2490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2488, &$s2489);
    (($fn2491) p_out->$class->vtable[19])(p_out, $tmp2490);
    return methodPtr2477;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp2493 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2492 = $tmp2493.value;
    if (!$tmp2492) goto $l2494;
    panda$core$Bit $tmp2495 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2492 = $tmp2495.value;
    $l2494:;
    panda$core$Bit $tmp2496 = { $tmp2492 };
    if ($tmp2496.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2497.value) {
        {
            panda$core$String* $tmp2498 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2498;
        }
        }
        else {
        {
            panda$core$String* $tmp2499 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2499;
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
        panda$core$String* $tmp2500 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2500;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2501;
    panda$core$String* $match$1270_92502;
    panda$core$String* countStruct2507;
    panda$core$String* count2510;
    panda$core$String* size2519;
    panda$core$Int64 elementSize2521;
    panda$core$String* malloc2540;
    panda$core$String* result2553;
    panda$core$String* ptr2571;
    panda$core$String* baseType2574;
    panda$core$String* ptrType2577;
    panda$core$String* cast2580;
    panda$core$String* load2592;
    panda$core$String* ptr2611;
    panda$core$String* baseType2614;
    panda$core$String* ptrType2617;
    panda$core$String* cast2620;
    panda$core$String* indexStruct2632;
    panda$core$String* index2635;
    panda$core$String* offsetPtr2644;
    panda$core$String* load2664;
    panda$core$String* ptr2683;
    panda$core$String* ptrCast2686;
    panda$core$String* countStruct2695;
    panda$core$String* count2698;
    panda$core$String* size2707;
    panda$core$String* realloc2724;
    panda$core$String* result2741;
    panda$core$String* ptr2759;
    panda$core$String* baseType2762;
    panda$core$String* offsetStruct2766;
    panda$core$String* offset2769;
    panda$core$String* result2778;
    m2501 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$1270_92502 = ((org$pandalanguage$pandac$Symbol*) m2501->value)->name;
        panda$core$Bit $tmp2504 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1270_92502, &$s2503);
        if ($tmp2504.value) {
        {
            panda$core$Int64 $tmp2505 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2505, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2506.value);
            panda$core$Object* $tmp2508 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2509 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2508), p_out);
            countStruct2507 = $tmp2509;
            panda$core$String* $tmp2511 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2510 = $tmp2511;
            panda$core$String* $tmp2512 = panda$core$String$convert$R$panda$core$String(count2510);
            panda$core$String* $tmp2514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2512, &$s2513);
            panda$core$String* $tmp2515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2514, countStruct2507);
            panda$core$String* $tmp2517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2515, &$s2516);
            (($fn2518) p_out->$class->vtable[19])(p_out, $tmp2517);
            panda$core$String* $tmp2520 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2519 = $tmp2520;
            org$pandalanguage$pandac$Type* $tmp2522 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2501);
            panda$core$Object* $tmp2523 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2522->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2524 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2523));
            elementSize2521 = $tmp2524;
            panda$core$Bit $tmp2525 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2521, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2525.value);
            panda$core$String* $tmp2526 = panda$core$String$convert$R$panda$core$String(size2519);
            panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2526, &$s2527);
            panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, &$s2529);
            panda$core$String* $tmp2532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, &$s2531);
            panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2532, count2510);
            panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, &$s2534);
            panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2535, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2521)));
            panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, &$s2537);
            (($fn2539) p_out->$class->vtable[19])(p_out, $tmp2538);
            panda$core$String* $tmp2541 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2540 = $tmp2541;
            panda$core$String* $tmp2542 = panda$core$String$convert$R$panda$core$String(malloc2540);
            panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2542, &$s2543);
            panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2544, &$s2545);
            panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, &$s2547);
            panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2548, size2519);
            panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2549, &$s2550);
            (($fn2552) p_out->$class->vtable[19])(p_out, $tmp2551);
            panda$core$String* $tmp2554 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2553 = $tmp2554;
            panda$core$String* $tmp2555 = panda$core$String$convert$R$panda$core$String(result2553);
            panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, &$s2556);
            panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, malloc2540);
            panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2558, &$s2559);
            org$pandalanguage$pandac$Type* $tmp2561 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2501);
            panda$core$String* $tmp2562 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2561);
            panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, $tmp2562);
            panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, &$s2564);
            (($fn2566) p_out->$class->vtable[19])(p_out, $tmp2565);
            return result2553;
        }
        }
        else {
        panda$core$Bit $tmp2568 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1270_92502, &$s2567);
        if ($tmp2568.value) {
        {
            panda$core$Int64 $tmp2569 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2569, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2570.value);
            panda$core$Object* $tmp2572 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2573 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2572), p_out);
            ptr2571 = $tmp2573;
            org$pandalanguage$pandac$Type* $tmp2575 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2501);
            panda$core$String* $tmp2576 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2575);
            baseType2574 = $tmp2576;
            panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2574, &$s2578);
            ptrType2577 = $tmp2579;
            panda$core$String* $tmp2581 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2580 = $tmp2581;
            panda$core$String* $tmp2582 = panda$core$String$convert$R$panda$core$String(cast2580);
            panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, &$s2583);
            panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, ptr2571);
            panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2586);
            panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, ptrType2577);
            panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2589);
            (($fn2591) p_out->$class->vtable[19])(p_out, $tmp2590);
            panda$core$String* $tmp2593 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2592 = $tmp2593;
            panda$core$String* $tmp2594 = panda$core$String$convert$R$panda$core$String(load2592);
            panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, &$s2595);
            panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, baseType2574);
            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2598);
            panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, ptrType2577);
            panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2600, &$s2601);
            panda$core$String* $tmp2603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2602, cast2580);
            panda$core$String* $tmp2605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2603, &$s2604);
            (($fn2606) p_out->$class->vtable[19])(p_out, $tmp2605);
            return load2592;
        }
        }
        else {
        panda$core$Bit $tmp2608 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1270_92502, &$s2607);
        if ($tmp2608.value) {
        {
            panda$core$Int64 $tmp2609 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2609, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2610.value);
            panda$core$Object* $tmp2612 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2613 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2612), p_out);
            ptr2611 = $tmp2613;
            org$pandalanguage$pandac$Type* $tmp2615 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2501);
            panda$core$String* $tmp2616 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2615);
            baseType2614 = $tmp2616;
            panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2614, &$s2618);
            ptrType2617 = $tmp2619;
            panda$core$String* $tmp2621 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2620 = $tmp2621;
            panda$core$String* $tmp2622 = panda$core$String$convert$R$panda$core$String(cast2620);
            panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, &$s2623);
            panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2624, ptr2611);
            panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2625, &$s2626);
            panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, ptrType2617);
            panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2628, &$s2629);
            (($fn2631) p_out->$class->vtable[19])(p_out, $tmp2630);
            panda$core$Object* $tmp2633 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2634 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2633), p_out);
            indexStruct2632 = $tmp2634;
            panda$core$String* $tmp2636 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2635 = $tmp2636;
            panda$core$String* $tmp2637 = panda$core$String$convert$R$panda$core$String(index2635);
            panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, &$s2638);
            panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, indexStruct2632);
            panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, &$s2641);
            (($fn2643) p_out->$class->vtable[19])(p_out, $tmp2642);
            panda$core$String* $tmp2645 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2644 = $tmp2645;
            panda$core$String* $tmp2646 = panda$core$String$convert$R$panda$core$String(offsetPtr2644);
            panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2646, &$s2647);
            panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, baseType2614);
            panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2650);
            panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, ptrType2617);
            panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, &$s2653);
            panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, cast2620);
            panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2655, &$s2656);
            panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2658, index2635);
            panda$core$String* $tmp2661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2659, &$s2660);
            panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, $tmp2661);
            (($fn2663) p_out->$class->vtable[19])(p_out, $tmp2662);
            panda$core$String* $tmp2665 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2664 = $tmp2665;
            panda$core$String* $tmp2666 = panda$core$String$convert$R$panda$core$String(load2664);
            panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, &$s2667);
            panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2668, baseType2614);
            panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2669, &$s2670);
            panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, ptrType2617);
            panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2672, &$s2673);
            panda$core$String* $tmp2675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2674, offsetPtr2644);
            panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2675, &$s2676);
            (($fn2678) p_out->$class->vtable[19])(p_out, $tmp2677);
            return load2664;
        }
        }
        else {
        panda$core$Bit $tmp2680 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1270_92502, &$s2679);
        if ($tmp2680.value) {
        {
            panda$core$Int64 $tmp2681 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2681, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2682.value);
            panda$core$Object* $tmp2684 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2685 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2684), p_out);
            ptr2683 = $tmp2685;
            panda$core$String* $tmp2687 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2686 = $tmp2687;
            panda$core$String* $tmp2688 = panda$core$String$convert$R$panda$core$String(ptrCast2686);
            panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2688, &$s2689);
            panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2690, ptr2683);
            panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2691, &$s2692);
            (($fn2694) p_out->$class->vtable[19])(p_out, $tmp2693);
            panda$core$Object* $tmp2696 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2697 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2696), p_out);
            countStruct2695 = $tmp2697;
            panda$core$String* $tmp2699 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2698 = $tmp2699;
            panda$core$String* $tmp2700 = panda$core$String$convert$R$panda$core$String(count2698);
            panda$core$String* $tmp2702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, &$s2701);
            panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2702, countStruct2695);
            panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, &$s2704);
            (($fn2706) p_out->$class->vtable[19])(p_out, $tmp2705);
            panda$core$String* $tmp2708 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2707 = $tmp2708;
            panda$core$String* $tmp2709 = panda$core$String$convert$R$panda$core$String(size2707);
            panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2709, &$s2710);
            panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, &$s2712);
            panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2714);
            panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, count2698);
            panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, &$s2717);
            org$pandalanguage$pandac$Type* $tmp2719 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2501);
            panda$core$Object* $tmp2720 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2719->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2721 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2720));
            panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2718, ((panda$core$Object*) wrap_panda$core$Int64($tmp2721)));
            (($fn2723) p_out->$class->vtable[19])(p_out, $tmp2722);
            panda$core$String* $tmp2725 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2724 = $tmp2725;
            panda$core$String* $tmp2726 = panda$core$String$convert$R$panda$core$String(realloc2724);
            panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, &$s2727);
            panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2728, ptrCast2686);
            panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, &$s2730);
            panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2731, &$s2732);
            panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, &$s2734);
            panda$core$String* $tmp2736 = panda$core$String$convert$R$panda$core$String(size2707);
            panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, &$s2737);
            panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2735, $tmp2738);
            (($fn2740) p_out->$class->vtable[19])(p_out, $tmp2739);
            panda$core$String* $tmp2742 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2741 = $tmp2742;
            panda$core$String* $tmp2743 = panda$core$String$convert$R$panda$core$String(result2741);
            panda$core$String* $tmp2745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2743, &$s2744);
            panda$core$String* $tmp2746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2745, realloc2724);
            panda$core$String* $tmp2748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2746, &$s2747);
            org$pandalanguage$pandac$Type* $tmp2749 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2501);
            panda$core$String* $tmp2750 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2749);
            panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2748, $tmp2750);
            panda$core$String* $tmp2753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, &$s2752);
            (($fn2754) p_out->$class->vtable[19])(p_out, $tmp2753);
            return result2741;
        }
        }
        else {
        panda$core$Bit $tmp2756 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1270_92502, &$s2755);
        if ($tmp2756.value) {
        {
            panda$core$Int64 $tmp2757 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2757, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2758.value);
            panda$core$Object* $tmp2760 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2761 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2760), p_out);
            ptr2759 = $tmp2761;
            panda$core$Object* $tmp2763 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2764 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2763)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2765 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2764));
            baseType2762 = $tmp2765;
            panda$core$Object* $tmp2767 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2768 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2767), p_out);
            offsetStruct2766 = $tmp2768;
            panda$core$String* $tmp2770 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2769 = $tmp2770;
            panda$core$String* $tmp2771 = panda$core$String$convert$R$panda$core$String(offset2769);
            panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2771, &$s2772);
            panda$core$String* $tmp2774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2773, offsetStruct2766);
            panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2774, &$s2775);
            (($fn2777) p_out->$class->vtable[19])(p_out, $tmp2776);
            panda$core$String* $tmp2779 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2778 = $tmp2779;
            panda$core$String* $tmp2780 = panda$core$String$convert$R$panda$core$String(result2778);
            panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, &$s2781);
            panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2782, baseType2762);
            panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2783, &$s2784);
            panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2785, ptr2759);
            panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2786, &$s2787);
            panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, offset2769);
            panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, &$s2790);
            (($fn2792) p_out->$class->vtable[19])(p_out, $tmp2791);
            return result2778;
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
    org$pandalanguage$pandac$MethodDecl* m2793;
    panda$core$String* selfRef2794;
    panda$core$Int64 argStart2796;
    panda$core$String* selfLoad2810;
    panda$core$String* t2812;
    panda$collections$Array* args2828;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2831;
    panda$core$String* end2854;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2863;
    org$pandalanguage$pandac$MethodDecl* old2870;
    panda$core$String* phi2883;
    panda$core$String* separator2893;
    panda$collections$Iterator* ret$Iter2895;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2907;
    m2793 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) m2793->owner));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2793), ((panda$core$Object*) m2793));
    selfRef2794 = &$s2795;
    panda$core$Bit $tmp2797 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2793);
    if ($tmp2797.value) {
    {
        argStart2796 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2798 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2799 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2798), p_out);
        selfRef2794 = $tmp2799;
        panda$core$Bit $tmp2802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->currentMethod->methodKind, ((panda$core$Int64) { 59 }));
        bool $tmp2801 = $tmp2802.value;
        if (!$tmp2801) goto $l2803;
        panda$core$Object* $tmp2804 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2804)->kind, ((panda$core$Int64) { 1025 }));
        $tmp2801 = $tmp2805.value;
        $l2803:;
        panda$core$Bit $tmp2806 = { $tmp2801 };
        bool $tmp2800 = $tmp2806.value;
        if (!$tmp2800) goto $l2807;
        panda$core$Bit $tmp2808 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, self->currentMethod->owner);
        $tmp2800 = $tmp2808.value;
        $l2807:;
        panda$core$Bit $tmp2809 = { $tmp2800 };
        if ($tmp2809.value) {
        {
            panda$core$String* $tmp2811 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            selfLoad2810 = $tmp2811;
            org$pandalanguage$pandac$Type* $tmp2813 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
            panda$core$String* $tmp2814 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2813);
            t2812 = $tmp2814;
            panda$core$String* $tmp2815 = panda$core$String$convert$R$panda$core$String(selfLoad2810);
            panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, &$s2816);
            panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, t2812);
            panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, &$s2819);
            panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, t2812);
            panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
            panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, selfRef2794);
            panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
            (($fn2827) p_out->$class->vtable[19])(p_out, $tmp2826);
            selfRef2794 = selfLoad2810;
        }
        }
    }
    }
    else {
    {
        argStart2796 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2829 = (panda$collections$Array*) malloc(40);
    $tmp2829->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2829->refCount.value = 1;
    panda$collections$Array$init($tmp2829);
    args2828 = $tmp2829;
    panda$core$Int64 $tmp2832 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2831, argStart2796, $tmp2832, ((panda$core$Bit) { false }));
    int64_t $tmp2834 = $tmp2831.min.value;
    panda$core$Int64 i2833 = { $tmp2834 };
    int64_t $tmp2836 = $tmp2831.max.value;
    bool $tmp2837 = $tmp2831.inclusive.value;
    if ($tmp2837) goto $l2844; else goto $l2845;
    $l2844:;
    if ($tmp2834 <= $tmp2836) goto $l2838; else goto $l2840;
    $l2845:;
    if ($tmp2834 < $tmp2836) goto $l2838; else goto $l2840;
    $l2838:;
    {
        panda$core$Object* $tmp2846 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2833);
        panda$core$String* $tmp2847 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2846), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2828, ((panda$core$Object*) $tmp2847));
    }
    $l2841:;
    int64_t $tmp2849 = $tmp2836 - i2833.value;
    if ($tmp2837) goto $l2850; else goto $l2851;
    $l2850:;
    if ($tmp2849 >= 1) goto $l2848; else goto $l2840;
    $l2851:;
    if ($tmp2849 > 1) goto $l2848; else goto $l2840;
    $l2848:;
    i2833.value += 1;
    goto $l2838;
    $l2840:;
    panda$core$String* $tmp2855 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2854 = $tmp2855;
    panda$core$Int64 $tmp2856 = panda$collections$Array$get_count$R$panda$core$Int64(args2828);
    panda$core$Int64 $tmp2857 = panda$collections$Array$get_count$R$panda$core$Int64(m2793->parameters);
    panda$core$Bit $tmp2858 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2856, $tmp2857);
    if ($tmp2858.value) {
    {
        panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2859, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2860, &$s2861);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2862));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2864 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2864->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2864->refCount.value = 1;
    panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2866, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, &$s2868);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2864, $tmp2869, selfRef2794, ((panda$collections$ListView*) args2828), end2854);
    inline2863 = $tmp2864;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2863));
    old2870 = self->currentMethod;
    self->currentMethod = m2793;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_body, p_out);
    self->currentMethod = old2870;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2871 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2872 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2871);
    if ($tmp2872.value) {
    {
        (($fn2874) p_out->$class->vtable[19])(p_out, &$s2873);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end2854, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2793));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    panda$core$Int64 $tmp2875 = panda$collections$Array$get_count$R$panda$core$Int64(inline2863->returns);
    panda$core$Bit $tmp2876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2875, ((panda$core$Int64) { 1 }));
    if ($tmp2876.value) {
    {
        panda$core$Object* $tmp2877 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2863->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2877)->second);
    }
    }
    panda$core$Int64 $tmp2878 = panda$collections$Array$get_count$R$panda$core$Int64(inline2863->returns);
    panda$core$Bit $tmp2879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2878, ((panda$core$Int64) { 0 }));
    if ($tmp2879.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
        (($fn2881) p_out->$class->vtable[19])(p_out, &$s2880);
        return &$s2882;
    }
    }
    panda$core$String* $tmp2884 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2883 = $tmp2884;
    panda$core$String* $tmp2885 = panda$core$String$convert$R$panda$core$String(phi2883);
    panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2885, &$s2886);
    panda$core$String* $tmp2888 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2793->returnType);
    panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, $tmp2888);
    panda$core$String* $tmp2891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, &$s2890);
    (($fn2892) p_out->$class->vtable[16])(p_out, $tmp2891);
    separator2893 = &$s2894;
    {
        ITable* $tmp2896 = ((panda$collections$Iterable*) inline2863->returns)->$class->itable;
        while ($tmp2896->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2896 = $tmp2896->next;
        }
        $fn2898 $tmp2897 = $tmp2896->methods[0];
        panda$collections$Iterator* $tmp2899 = $tmp2897(((panda$collections$Iterable*) inline2863->returns));
        ret$Iter2895 = $tmp2899;
        $l2900:;
        ITable* $tmp2902 = ret$Iter2895->$class->itable;
        while ($tmp2902->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2902 = $tmp2902->next;
        }
        $fn2904 $tmp2903 = $tmp2902->methods[0];
        panda$core$Bit $tmp2905 = $tmp2903(ret$Iter2895);
        panda$core$Bit $tmp2906 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2905);
        if (!$tmp2906.value) goto $l2901;
        {
            ITable* $tmp2908 = ret$Iter2895->$class->itable;
            while ($tmp2908->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2908 = $tmp2908->next;
            }
            $fn2910 $tmp2909 = $tmp2908->methods[1];
            panda$core$Object* $tmp2911 = $tmp2909(ret$Iter2895);
            ret2907 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2911);
            panda$core$String* $tmp2912 = panda$core$String$convert$R$panda$core$String(separator2893);
            panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2912, &$s2913);
            panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, ((panda$core$String*) ret2907->second));
            panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2915, &$s2916);
            panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, ((panda$core$String*) ret2907->first));
            panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2918, &$s2919);
            (($fn2921) p_out->$class->vtable[16])(p_out, $tmp2920);
            separator2893 = &$s2922;
        }
        goto $l2900;
        $l2901:;
    }
    (($fn2923) p_out->$class->vtable[17])(p_out);
    return phi2883;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2925;
    panda$core$String* bit2935;
    panda$core$String* result2939;
    panda$core$String* bit2953;
    panda$core$String* result2957;
    org$pandalanguage$pandac$IRNode* block2972;
    panda$collections$Array* args2976;
    org$pandalanguage$pandac$Type* actualMethodType2980;
    panda$core$String* actualResultType2981;
    panda$core$Bit isSuper2982;
    panda$core$Int64 offset3002;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3007;
    panda$core$String* arg3022;
    panda$core$String* target3054;
    panda$core$String* methodRef3058;
    panda$core$String* result3060;
    panda$core$Bit indirect3061;
    panda$core$String* separator3086;
    panda$core$String* indirectVar3088;
    panda$collections$Iterator* arg$Iter3107;
    panda$core$String* arg3119;
    panda$core$Bit $tmp2924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2924.value);
    m2925 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2927 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2925->owner)->name, &$s2926);
    if ($tmp2927.value) {
    {
        panda$core$String* $tmp2928 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2928;
    }
    }
    if (m2925->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2925);
    }
    }
    panda$core$Bit $tmp2930 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2925->owner)->name, &$s2929);
    if ($tmp2930.value) {
    {
        panda$core$Bit $tmp2932 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2925)->name, &$s2931);
        if ($tmp2932.value) {
        {
            panda$core$Int64 $tmp2933 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2933, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2934.value);
            panda$core$Object* $tmp2936 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2937 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2938 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2936), ((org$pandalanguage$pandac$IRNode*) $tmp2937), p_out);
            bit2935 = $tmp2938;
            panda$core$String* $tmp2940 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2939 = $tmp2940;
            panda$core$String* $tmp2941 = panda$core$String$convert$R$panda$core$String(result2939);
            panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2941, &$s2942);
            panda$core$String* $tmp2944 = panda$core$String$convert$R$panda$core$String(bit2935);
            panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2944, &$s2945);
            panda$core$String* $tmp2947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2943, $tmp2946);
            (($fn2948) p_out->$class->vtable[19])(p_out, $tmp2947);
            return result2939;
        }
        }
        panda$core$Bit $tmp2950 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2925)->name, &$s2949);
        if ($tmp2950.value) {
        {
            panda$core$Int64 $tmp2951 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2951, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2952.value);
            panda$core$Object* $tmp2954 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2955 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2956 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2954), ((org$pandalanguage$pandac$IRNode*) $tmp2955), p_out);
            bit2953 = $tmp2956;
            panda$core$String* $tmp2958 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2957 = $tmp2958;
            panda$core$String* $tmp2959 = panda$core$String$convert$R$panda$core$String(result2957);
            panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, &$s2960);
            panda$core$String* $tmp2962 = panda$core$String$convert$R$panda$core$String(bit2953);
            panda$core$String* $tmp2964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, &$s2963);
            panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2961, $tmp2964);
            (($fn2966) p_out->$class->vtable[19])(p_out, $tmp2965);
            return result2957;
        }
        }
    }
    }
    panda$core$Bit $tmp2968 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2925->annotations);
    bool $tmp2967 = $tmp2968.value;
    if (!$tmp2967) goto $l2969;
    panda$core$Object* $tmp2970 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2925));
    $tmp2967 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp2970) == NULL }).value;
    $l2969:;
    panda$core$Bit $tmp2971 = { $tmp2967 };
    if ($tmp2971.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2973 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2925);
        block2972 = $tmp2973;
        if (((panda$core$Bit) { block2972 != NULL }).value) {
        {
            panda$core$String* $tmp2974 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, block2972, p_out);
            return $tmp2974;
        }
        }
        return &$s2975;
    }
    }
    panda$collections$Array* $tmp2977 = (panda$collections$Array*) malloc(40);
    $tmp2977->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2977->refCount.value = 1;
    panda$core$Int64 $tmp2979 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp2977, $tmp2979);
    args2976 = $tmp2977;
    panda$core$Int64 $tmp2984 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2985 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2984, ((panda$core$Int64) { 1 }));
    bool $tmp2983 = $tmp2985.value;
    if (!$tmp2983) goto $l2986;
    panda$core$Object* $tmp2987 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2987)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2983 = $tmp2988.value;
    $l2986:;
    panda$core$Bit $tmp2989 = { $tmp2983 };
    isSuper2982 = $tmp2989;
    panda$core$Bit $tmp2991 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2982);
    bool $tmp2990 = $tmp2991.value;
    if (!$tmp2990) goto $l2992;
    panda$core$Bit $tmp2993 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2925);
    $tmp2990 = $tmp2993.value;
    $l2992:;
    panda$core$Bit $tmp2994 = { $tmp2990 };
    if ($tmp2994.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2995 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2925);
        actualMethodType2980 = $tmp2995;
        panda$core$Int64 $tmp2996 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2980->subtypes);
        panda$core$Int64 $tmp2997 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2996, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2998 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2980->subtypes, $tmp2997);
        panda$core$String* $tmp2999 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2998));
        actualResultType2981 = $tmp2999;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3000 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2925);
        actualMethodType2980 = $tmp3000;
        panda$core$String* $tmp3001 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2981 = $tmp3001;
    }
    }
    panda$core$Int64 $tmp3003 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp3004 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2980->subtypes);
    panda$core$Int64 $tmp3005 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3003, $tmp3004);
    panda$core$Int64 $tmp3006 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp3005, ((panda$core$Int64) { 1 }));
    offset3002 = $tmp3006;
    panda$core$Int64 $tmp3008 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3007, ((panda$core$Int64) { 0 }), $tmp3008, ((panda$core$Bit) { false }));
    int64_t $tmp3010 = $tmp3007.min.value;
    panda$core$Int64 i3009 = { $tmp3010 };
    int64_t $tmp3012 = $tmp3007.max.value;
    bool $tmp3013 = $tmp3007.inclusive.value;
    if ($tmp3013) goto $l3020; else goto $l3021;
    $l3020:;
    if ($tmp3010 <= $tmp3012) goto $l3014; else goto $l3016;
    $l3021:;
    if ($tmp3010 < $tmp3012) goto $l3014; else goto $l3016;
    $l3014:;
    {
        panda$core$Object* $tmp3023 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i3009);
        panda$core$String* $tmp3024 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3023), p_out);
        arg3022 = $tmp3024;
        panda$core$Bit $tmp3026 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i3009, offset3002);
        bool $tmp3025 = $tmp3026.value;
        if (!$tmp3025) goto $l3027;
        panda$core$Int64 $tmp3028 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3009, offset3002);
        panda$core$Object* $tmp3029 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2980->subtypes, $tmp3028);
        panda$core$Object* $tmp3030 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i3009);
        panda$core$Bit $tmp3031 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3029), ((org$pandalanguage$pandac$IRNode*) $tmp3030)->type);
        $tmp3025 = $tmp3031.value;
        $l3027:;
        panda$core$Bit $tmp3032 = { $tmp3025 };
        if ($tmp3032.value) {
        {
            panda$core$Int64 $tmp3033 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3009, offset3002);
            panda$core$Object* $tmp3034 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2980->subtypes, $tmp3033);
            panda$core$String* $tmp3035 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3034));
            panda$core$String* $tmp3037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, &$s3036);
            panda$core$Object* $tmp3038 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i3009);
            panda$core$Int64 $tmp3039 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3009, offset3002);
            panda$core$Object* $tmp3040 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2980->subtypes, $tmp3039);
            panda$core$String* $tmp3041 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg3022, ((org$pandalanguage$pandac$IRNode*) $tmp3038)->type, ((org$pandalanguage$pandac$Type*) $tmp3040), p_out);
            panda$core$String* $tmp3042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3037, $tmp3041);
            arg3022 = $tmp3042;
        }
        }
        else {
        {
            panda$core$Object* $tmp3043 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i3009);
            panda$core$String* $tmp3044 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3043)->type);
            panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, &$s3045);
            panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, arg3022);
            arg3022 = $tmp3047;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2976, ((panda$core$Object*) arg3022));
    }
    $l3017:;
    int64_t $tmp3049 = $tmp3012 - i3009.value;
    if ($tmp3013) goto $l3050; else goto $l3051;
    $l3050:;
    if ($tmp3049 >= 1) goto $l3048; else goto $l3016;
    $l3051:;
    if ($tmp3049 > 1) goto $l3048; else goto $l3016;
    $l3048:;
    i3009.value += 1;
    goto $l3014;
    $l3016:;
    panda$core$Int64 $tmp3055 = panda$collections$Array$get_count$R$panda$core$Int64(args2976);
    panda$core$Bit $tmp3056 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3055, ((panda$core$Int64) { 0 }));
    if ($tmp3056.value) {
    {
        panda$core$Object* $tmp3057 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2976, ((panda$core$Int64) { 0 }));
        target3054 = ((panda$core$String*) $tmp3057);
    }
    }
    else {
    {
        target3054 = NULL;
    }
    }
    panda$core$String* $tmp3059 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, target3054, m2925, isSuper2982, p_out);
    methodRef3058 = $tmp3059;
    panda$core$Bit $tmp3062 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2925);
    indirect3061 = $tmp3062;
    if (indirect3061.value) {
    {
        panda$core$String* $tmp3064 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2925);
        panda$core$String* $tmp3065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3063, $tmp3064);
        panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3065, &$s3066);
        (($fn3068) p_out->$class->vtable[16])(p_out, $tmp3067);
    }
    }
    else {
    {
        panda$core$String* $tmp3069 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3060 = $tmp3069;
        panda$core$String* $tmp3070 = panda$core$String$convert$R$panda$core$String(result3060);
        panda$core$String* $tmp3072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3070, &$s3071);
        panda$core$String* $tmp3073 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2925);
        panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3072, $tmp3073);
        panda$core$String* $tmp3076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3074, &$s3075);
        panda$core$String* $tmp3077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3076, actualResultType2981);
        panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3077, &$s3078);
        (($fn3080) p_out->$class->vtable[16])(p_out, $tmp3079);
    }
    }
    panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3081, methodRef3058);
    panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3082, &$s3083);
    (($fn3085) p_out->$class->vtable[16])(p_out, $tmp3084);
    separator3086 = &$s3087;
    if (indirect3061.value) {
    {
        panda$core$Int64 $tmp3089 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3089;
        panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3090, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3088 = $tmp3091;
        panda$core$String* $tmp3092 = panda$core$String$convert$R$panda$core$String(indirectVar3088);
        panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3093);
        panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, actualResultType2981);
        panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, &$s3096);
        (($fn3098) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3097);
        panda$core$String* $tmp3099 = panda$core$String$convert$R$panda$core$String(actualResultType2981);
        panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, &$s3100);
        panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3101, indirectVar3088);
        panda$core$String* $tmp3104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3102, &$s3103);
        (($fn3105) p_out->$class->vtable[16])(p_out, $tmp3104);
        separator3086 = &$s3106;
    }
    }
    {
        ITable* $tmp3108 = ((panda$collections$Iterable*) args2976)->$class->itable;
        while ($tmp3108->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3108 = $tmp3108->next;
        }
        $fn3110 $tmp3109 = $tmp3108->methods[0];
        panda$collections$Iterator* $tmp3111 = $tmp3109(((panda$collections$Iterable*) args2976));
        arg$Iter3107 = $tmp3111;
        $l3112:;
        ITable* $tmp3114 = arg$Iter3107->$class->itable;
        while ($tmp3114->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3114 = $tmp3114->next;
        }
        $fn3116 $tmp3115 = $tmp3114->methods[0];
        panda$core$Bit $tmp3117 = $tmp3115(arg$Iter3107);
        panda$core$Bit $tmp3118 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3117);
        if (!$tmp3118.value) goto $l3113;
        {
            ITable* $tmp3120 = arg$Iter3107->$class->itable;
            while ($tmp3120->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3120 = $tmp3120->next;
            }
            $fn3122 $tmp3121 = $tmp3120->methods[1];
            panda$core$Object* $tmp3123 = $tmp3121(arg$Iter3107);
            arg3119 = ((panda$core$String*) $tmp3123);
            panda$core$String* $tmp3124 = panda$core$String$convert$R$panda$core$String(separator3086);
            panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, &$s3125);
            panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3126, arg3119);
            panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3127, &$s3128);
            (($fn3130) p_out->$class->vtable[16])(p_out, $tmp3129);
            separator3086 = &$s3131;
        }
        goto $l3112;
        $l3113:;
    }
    (($fn3133) p_out->$class->vtable[19])(p_out, &$s3132);
    if (indirect3061.value) {
    {
        panda$core$String* $tmp3134 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3060 = $tmp3134;
        panda$core$String* $tmp3135 = panda$core$String$convert$R$panda$core$String(result3060);
        panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, &$s3136);
        panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, actualResultType2981);
        panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3138, &$s3139);
        panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3140, actualResultType2981);
        panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, &$s3142);
        panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, indirectVar3088);
        (($fn3145) p_out->$class->vtable[19])(p_out, $tmp3144);
    }
    }
    panda$core$String* $tmp3146 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3147 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3146, actualResultType2981);
    if ($tmp3147.value) {
    {
        panda$core$Int64 $tmp3148 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2980->subtypes);
        panda$core$Int64 $tmp3149 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3148, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3150 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2980->subtypes, $tmp3149);
        panda$core$String* $tmp3151 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, result3060, ((org$pandalanguage$pandac$Type*) $tmp3150), p_call->type, p_out);
        return $tmp3151;
    }
    }
    return result3060;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3152;
    panda$core$String* testStart3155;
    panda$core$String* isNonNull3156;
    panda$core$String* nonNullLabel3169;
    panda$core$String* endLabel3171;
    panda$core$String* unwrapped3184;
    panda$core$String* nonNullValue3187;
    panda$core$String* result3195;
    panda$core$String* mallocRef3216;
    panda$core$String* wrapperTypeName3227;
    panda$core$String* wrapperType3230;
    panda$core$String* wrapperCast3233;
    panda$core$String* classPtr3245;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3261;
    panda$core$String* ccCast3263;
    panda$core$String* refCount3281;
    panda$core$String* target3302;
    panda$core$String* result3336;
    org$pandalanguage$pandac$ClassDecl* $tmp3153 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3152 = $tmp3153;
    PANDA_ASSERT(((panda$core$Bit) { src3152 != NULL }).value);
    panda$core$Bit $tmp3154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3154.value) {
    {
        testStart3155 = self->currentBlock;
        panda$core$String* $tmp3157 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3156 = $tmp3157;
        panda$core$String* $tmp3158 = panda$core$String$convert$R$panda$core$String(isNonNull3156);
        panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, &$s3159);
        panda$core$String* $tmp3161 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, $tmp3161);
        panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, &$s3163);
        panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3164, p_value);
        panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, &$s3166);
        (($fn3168) p_out->$class->vtable[19])(p_out, $tmp3167);
        panda$core$String* $tmp3170 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3169 = $tmp3170;
        panda$core$String* $tmp3172 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3171 = $tmp3172;
        panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3173, isNonNull3156);
        panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, &$s3175);
        panda$core$String* $tmp3177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, nonNullLabel3169);
        panda$core$String* $tmp3179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3177, &$s3178);
        panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3179, endLabel3171);
        panda$core$String* $tmp3182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3180, &$s3181);
        (($fn3183) p_out->$class->vtable[19])(p_out, $tmp3182);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3169, p_out);
        panda$core$Object* $tmp3185 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3186 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3185), p_out);
        unwrapped3184 = $tmp3186;
        panda$core$Object* $tmp3188 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3189 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, unwrapped3184, ((org$pandalanguage$pandac$Type*) $tmp3188), p_dstType, p_out);
        nonNullValue3187 = $tmp3189;
        panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3190, endLabel3171);
        panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, &$s3192);
        (($fn3194) p_out->$class->vtable[19])(p_out, $tmp3193);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3171, p_out);
        panda$core$String* $tmp3196 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3195 = $tmp3196;
        panda$core$String* $tmp3197 = panda$core$String$convert$R$panda$core$String(result3195);
        panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, &$s3198);
        panda$core$String* $tmp3200 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3199, $tmp3200);
        panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3201, &$s3202);
        panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3203, testStart3155);
        panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, &$s3205);
        panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3207, nonNullValue3187);
        panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, &$s3209);
        panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3210, nonNullLabel3169);
        panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3211, &$s3212);
        panda$core$String* $tmp3214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, $tmp3213);
        (($fn3215) p_out->$class->vtable[19])(p_out, $tmp3214);
        return result3195;
    }
    }
    panda$core$String* $tmp3217 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3216 = $tmp3217;
    panda$core$String* $tmp3218 = panda$core$String$convert$R$panda$core$String(mallocRef3216);
    panda$core$String* $tmp3220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3218, &$s3219);
    org$pandalanguage$pandac$Type* $tmp3221 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3152);
    panda$core$Int64 $tmp3222 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3221);
    panda$core$String* $tmp3223 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3220, ((panda$core$Object*) wrap_panda$core$Int64($tmp3222)));
    panda$core$String* $tmp3225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3223, &$s3224);
    (($fn3226) p_out->$class->vtable[19])(p_out, $tmp3225);
    org$pandalanguage$pandac$Type* $tmp3228 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3152);
    panda$core$String* $tmp3229 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3228);
    wrapperTypeName3227 = $tmp3229;
    org$pandalanguage$pandac$Type* $tmp3231 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3152);
    panda$core$String* $tmp3232 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3231);
    wrapperType3230 = $tmp3232;
    panda$core$String* $tmp3234 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3233 = $tmp3234;
    panda$core$String* $tmp3235 = panda$core$String$convert$R$panda$core$String(wrapperCast3233);
    panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3235, &$s3236);
    panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3237, mallocRef3216);
    panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, &$s3239);
    panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3240, wrapperType3230);
    panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, &$s3242);
    (($fn3244) p_out->$class->vtable[19])(p_out, $tmp3243);
    panda$core$String* $tmp3246 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3245 = $tmp3246;
    panda$core$String* $tmp3247 = panda$core$String$convert$R$panda$core$String(classPtr3245);
    panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3247, &$s3248);
    panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, wrapperTypeName3227);
    panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3250, &$s3251);
    panda$core$String* $tmp3253 = panda$core$String$convert$R$panda$core$String(wrapperType3230);
    panda$core$String* $tmp3255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3253, &$s3254);
    panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3255, wrapperCast3233);
    panda$core$String* $tmp3258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, &$s3257);
    panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3252, $tmp3258);
    (($fn3260) p_out->$class->vtable[19])(p_out, $tmp3259);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3262 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3152);
    cc3261 = $tmp3262;
    panda$core$Bit $tmp3265 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(cc3261->type, &$s3264);
    if ($tmp3265.value) {
    {
        panda$core$String* $tmp3267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3266, cc3261->type);
        panda$core$String* $tmp3269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3267, &$s3268);
        panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3269, cc3261->name);
        panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3270, &$s3271);
        ccCast3263 = $tmp3272;
    }
    }
    else {
    {
        ccCast3263 = cc3261->name;
    }
    }
    panda$core$String* $tmp3274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3273, ccCast3263);
    panda$core$String* $tmp3276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3274, &$s3275);
    panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3276, classPtr3245);
    panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3277, &$s3278);
    (($fn3280) p_out->$class->vtable[19])(p_out, $tmp3279);
    panda$core$String* $tmp3282 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3281 = $tmp3282;
    panda$core$String* $tmp3283 = panda$core$String$convert$R$panda$core$String(refCount3281);
    panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3284);
    panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3285, wrapperTypeName3227);
    panda$core$String* $tmp3288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3286, &$s3287);
    panda$core$String* $tmp3289 = panda$core$String$convert$R$panda$core$String(wrapperType3230);
    panda$core$String* $tmp3291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3289, &$s3290);
    panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3291, wrapperCast3233);
    panda$core$String* $tmp3294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3292, &$s3293);
    panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3288, $tmp3294);
    (($fn3296) p_out->$class->vtable[19])(p_out, $tmp3295);
    panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3297, refCount3281);
    panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3298, &$s3299);
    (($fn3301) p_out->$class->vtable[19])(p_out, $tmp3300);
    panda$core$String* $tmp3303 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3302 = $tmp3303;
    panda$core$String* $tmp3304 = panda$core$String$convert$R$panda$core$String(target3302);
    panda$core$String* $tmp3306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3304, &$s3305);
    panda$core$String* $tmp3307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3306, wrapperTypeName3227);
    panda$core$String* $tmp3309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3307, &$s3308);
    panda$core$String* $tmp3310 = panda$core$String$convert$R$panda$core$String(wrapperType3230);
    panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, &$s3311);
    panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3312, wrapperCast3233);
    panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3313, &$s3314);
    panda$core$String* $tmp3316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3309, $tmp3315);
    (($fn3317) p_out->$class->vtable[19])(p_out, $tmp3316);
    panda$core$String* $tmp3319 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3318, $tmp3319);
    panda$core$String* $tmp3322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3320, &$s3321);
    panda$core$String* $tmp3323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3322, p_value);
    panda$core$String* $tmp3325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3323, &$s3324);
    panda$core$String* $tmp3326 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3325, $tmp3326);
    panda$core$String* $tmp3329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3327, &$s3328);
    panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3329, target3302);
    panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, &$s3331);
    (($fn3333) p_out->$class->vtable[19])(p_out, $tmp3332);
    panda$core$String* $tmp3334 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3335 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3230, $tmp3334);
    if ($tmp3335.value) {
    {
        panda$core$String* $tmp3337 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3336 = $tmp3337;
        panda$core$String* $tmp3338 = panda$core$String$convert$R$panda$core$String(result3336);
        panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3338, &$s3339);
        panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3340, wrapperType3230);
        panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
        panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, wrapperCast3233);
        panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3344, &$s3345);
        panda$core$String* $tmp3347 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, $tmp3347);
        panda$core$String* $tmp3350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3348, &$s3349);
        (($fn3351) p_out->$class->vtable[19])(p_out, $tmp3350);
        return result3336;
    }
    }
    return wrapperCast3233;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3355;
    panda$core$String* t3356;
    org$pandalanguage$pandac$ClassDecl* cl3360;
    panda$core$String* base3373;
    panda$collections$ListView* fields3376;
    panda$core$Int64$nullable index3378;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3379;
    panda$core$String* result3407;
    panda$core$String* cast3429;
    panda$core$String* ptr3442;
    panda$core$String* result3450;
    panda$core$Bit $tmp3352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3352.value);
    panda$core$Int64 $tmp3353 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3353, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3354.value);
    field3355 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3357 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3355->type);
    t3356 = $tmp3357;
    panda$core$Bit $tmp3358 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3355->annotations);
    if ($tmp3358.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3355->value != NULL }).value);
        panda$core$String* $tmp3359 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, field3355->value, p_out);
        return $tmp3359;
    }
    }
    panda$core$Object* $tmp3361 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3362 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3361)->type);
    cl3360 = $tmp3362;
    PANDA_ASSERT(((panda$core$Bit) { cl3360 != NULL }).value);
    panda$core$Bit $tmp3364 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3360);
    bool $tmp3363 = $tmp3364.value;
    if (!$tmp3363) goto $l3365;
    panda$core$Object* $tmp3367 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3368 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3367)->kind, ((panda$core$Int64) { 1025 }));
    bool $tmp3366 = $tmp3368.value;
    if ($tmp3366) goto $l3369;
    panda$core$Bit $tmp3370 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->currentMethod->methodKind, ((panda$core$Int64) { 59 }));
    $tmp3366 = $tmp3370.value;
    $l3369:;
    panda$core$Bit $tmp3371 = { $tmp3366 };
    $tmp3363 = $tmp3371.value;
    $l3365:;
    panda$core$Bit $tmp3372 = { $tmp3363 };
    if ($tmp3372.value) {
    {
        panda$core$Object* $tmp3374 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3375 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3374), p_out);
        base3373 = $tmp3375;
        panda$collections$ListView* $tmp3377 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3360);
        fields3376 = $tmp3377;
        index3378 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3380 = ((panda$collections$CollectionView*) fields3376)->$class->itable;
        while ($tmp3380->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3380 = $tmp3380->next;
        }
        $fn3382 $tmp3381 = $tmp3380->methods[0];
        panda$core$Int64 $tmp3383 = $tmp3381(((panda$collections$CollectionView*) fields3376));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3379, ((panda$core$Int64) { 0 }), $tmp3383, ((panda$core$Bit) { false }));
        int64_t $tmp3385 = $tmp3379.min.value;
        panda$core$Int64 i3384 = { $tmp3385 };
        int64_t $tmp3387 = $tmp3379.max.value;
        bool $tmp3388 = $tmp3379.inclusive.value;
        if ($tmp3388) goto $l3395; else goto $l3396;
        $l3395:;
        if ($tmp3385 <= $tmp3387) goto $l3389; else goto $l3391;
        $l3396:;
        if ($tmp3385 < $tmp3387) goto $l3389; else goto $l3391;
        $l3389:;
        {
            ITable* $tmp3397 = fields3376->$class->itable;
            while ($tmp3397->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3397 = $tmp3397->next;
            }
            $fn3399 $tmp3398 = $tmp3397->methods[0];
            panda$core$Object* $tmp3400 = $tmp3398(fields3376, i3384);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3400)) == ((panda$core$Object*) field3355) }).value) {
            {
                index3378 = ((panda$core$Int64$nullable) { i3384, true });
                goto $l3391;
            }
            }
        }
        $l3392:;
        int64_t $tmp3402 = $tmp3387 - i3384.value;
        if ($tmp3388) goto $l3403; else goto $l3404;
        $l3403:;
        if ($tmp3402 >= 1) goto $l3401; else goto $l3391;
        $l3404:;
        if ($tmp3402 > 1) goto $l3401; else goto $l3391;
        $l3401:;
        i3384.value += 1;
        goto $l3389;
        $l3391:;
        PANDA_ASSERT(((panda$core$Bit) { index3378.nonnull }).value);
        panda$core$String* $tmp3408 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3407 = $tmp3408;
        panda$core$String* $tmp3409 = panda$core$String$convert$R$panda$core$String(result3407);
        panda$core$String* $tmp3411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3409, &$s3410);
        panda$core$Object* $tmp3412 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3413 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3412)->type);
        panda$core$String* $tmp3414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3411, $tmp3413);
        panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3414, &$s3415);
        panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3416, base3373);
        panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3417, &$s3418);
        panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3419, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3378.value))));
        (($fn3421) p_out->$class->vtable[19])(p_out, $tmp3420);
        panda$core$Bit $tmp3423 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(field3355->type);
        bool $tmp3422 = $tmp3423.value;
        if (!$tmp3422) goto $l3424;
        org$pandalanguage$pandac$ClassDecl* $tmp3425 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, field3355->type);
        panda$core$Bit $tmp3426 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp3425);
        panda$core$Bit $tmp3427 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3426);
        $tmp3422 = $tmp3427.value;
        $l3424:;
        panda$core$Bit $tmp3428 = { $tmp3422 };
        if ($tmp3428.value) {
        {
            panda$core$String* $tmp3430 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast3429 = $tmp3430;
            panda$core$String* $tmp3431 = panda$core$String$convert$R$panda$core$String(cast3429);
            panda$core$String* $tmp3433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3431, &$s3432);
            panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3433, result3407);
            panda$core$String* $tmp3436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3434, &$s3435);
            panda$core$String* $tmp3437 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_fieldRef->type);
            panda$core$String* $tmp3438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3436, $tmp3437);
            panda$core$String* $tmp3440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3438, &$s3439);
            (($fn3441) p_out->$class->vtable[19])(p_out, $tmp3440);
            result3407 = cast3429;
        }
        }
        return result3407;
    }
    }
    panda$core$String* $tmp3443 = panda$core$String$convert$R$panda$core$String(t3356);
    panda$core$String* $tmp3445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3443, &$s3444);
    panda$core$String* $tmp3446 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3445, $tmp3446);
    panda$core$String* $tmp3449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3447, &$s3448);
    ptr3442 = $tmp3449;
    panda$core$String* $tmp3451 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3450 = $tmp3451;
    panda$core$String* $tmp3452 = panda$core$String$convert$R$panda$core$String(result3450);
    panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, &$s3453);
    panda$core$String* $tmp3455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3454, t3356);
    panda$core$String* $tmp3457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3455, &$s3456);
    panda$core$String* $tmp3458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3457, ptr3442);
    panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3458, &$s3459);
    (($fn3461) p_out->$class->vtable[19])(p_out, $tmp3460);
    return result3450;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3462;
    panda$core$String* testStart3465;
    panda$core$String* isNonNull3466;
    panda$core$String* nonNullLabel3479;
    panda$core$String* endLabel3481;
    panda$core$String* wrapped3494;
    panda$core$String* nonNullValue3497;
    panda$core$String* result3505;
    panda$core$String* targetType3533;
    panda$core$String* wrapperTypeName3535;
    panda$core$String* wrapperType3537;
    panda$core$String* srcCast3539;
    panda$core$String* load3555;
    panda$core$String* result3570;
    org$pandalanguage$pandac$ClassDecl* $tmp3463 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3462 = $tmp3463;
    PANDA_ASSERT(((panda$core$Bit) { target3462 != NULL }).value);
    panda$core$Bit $tmp3464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3464.value) {
    {
        testStart3465 = self->currentBlock;
        panda$core$String* $tmp3467 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3466 = $tmp3467;
        panda$core$String* $tmp3468 = panda$core$String$convert$R$panda$core$String(isNonNull3466);
        panda$core$String* $tmp3470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3468, &$s3469);
        panda$core$String* $tmp3471 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3470, $tmp3471);
        panda$core$String* $tmp3474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3472, &$s3473);
        panda$core$String* $tmp3475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3474, p_value);
        panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3475, &$s3476);
        (($fn3478) p_out->$class->vtable[19])(p_out, $tmp3477);
        panda$core$String* $tmp3480 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3479 = $tmp3480;
        panda$core$String* $tmp3482 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3481 = $tmp3482;
        panda$core$String* $tmp3484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3483, isNonNull3466);
        panda$core$String* $tmp3486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3484, &$s3485);
        panda$core$String* $tmp3487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3486, nonNullLabel3479);
        panda$core$String* $tmp3489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3487, &$s3488);
        panda$core$String* $tmp3490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3489, endLabel3481);
        panda$core$String* $tmp3492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3490, &$s3491);
        (($fn3493) p_out->$class->vtable[19])(p_out, $tmp3492);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3479, p_out);
        panda$core$Object* $tmp3495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3496 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3495), p_out);
        wrapped3494 = $tmp3496;
        panda$core$Object* $tmp3498 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3499 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, wrapped3494, ((org$pandalanguage$pandac$Type*) $tmp3498), p_dstType, p_out);
        nonNullValue3497 = $tmp3499;
        panda$core$String* $tmp3501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3500, endLabel3481);
        panda$core$String* $tmp3503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3501, &$s3502);
        (($fn3504) p_out->$class->vtable[19])(p_out, $tmp3503);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3481, p_out);
        panda$core$String* $tmp3506 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3505 = $tmp3506;
        panda$core$String* $tmp3507 = panda$core$String$convert$R$panda$core$String(result3505);
        panda$core$String* $tmp3509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3507, &$s3508);
        panda$core$String* $tmp3510 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3509, $tmp3510);
        panda$core$String* $tmp3513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3511, &$s3512);
        panda$core$Object* $tmp3515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3516 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3515));
        panda$core$String* $tmp3517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3514, $tmp3516);
        panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3517, &$s3518);
        panda$core$String* $tmp3520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3513, $tmp3519);
        panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3521, testStart3465);
        panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, &$s3523);
        panda$core$String* $tmp3525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3524, nonNullValue3497);
        panda$core$String* $tmp3527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3525, &$s3526);
        panda$core$String* $tmp3528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3527, nonNullLabel3479);
        panda$core$String* $tmp3530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3528, &$s3529);
        panda$core$String* $tmp3531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3520, $tmp3530);
        (($fn3532) p_out->$class->vtable[19])(p_out, $tmp3531);
        return result3505;
    }
    }
    panda$core$String* $tmp3534 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3533 = $tmp3534;
    panda$core$String* $tmp3536 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3535 = $tmp3536;
    panda$core$String* $tmp3538 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3537 = $tmp3538;
    panda$core$String* $tmp3540 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3539 = $tmp3540;
    panda$core$String* $tmp3541 = panda$core$String$convert$R$panda$core$String(srcCast3539);
    panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3541, &$s3542);
    panda$core$String* $tmp3544 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3543, $tmp3544);
    panda$core$String* $tmp3547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3545, &$s3546);
    panda$core$String* $tmp3548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3547, p_value);
    panda$core$String* $tmp3550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3548, &$s3549);
    panda$core$String* $tmp3551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3550, wrapperType3537);
    panda$core$String* $tmp3553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3551, &$s3552);
    (($fn3554) p_out->$class->vtable[19])(p_out, $tmp3553);
    panda$core$String* $tmp3556 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3555 = $tmp3556;
    panda$core$String* $tmp3557 = panda$core$String$convert$R$panda$core$String(load3555);
    panda$core$String* $tmp3559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3557, &$s3558);
    panda$core$String* $tmp3560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3559, wrapperTypeName3535);
    panda$core$String* $tmp3562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3560, &$s3561);
    panda$core$String* $tmp3563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3562, wrapperType3537);
    panda$core$String* $tmp3565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3563, &$s3564);
    panda$core$String* $tmp3566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3565, srcCast3539);
    panda$core$String* $tmp3568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3566, &$s3567);
    (($fn3569) p_out->$class->vtable[19])(p_out, $tmp3568);
    panda$core$String* $tmp3571 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3570 = $tmp3571;
    panda$core$String* $tmp3572 = panda$core$String$convert$R$panda$core$String(result3570);
    panda$core$String* $tmp3574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3572, &$s3573);
    panda$core$String* $tmp3575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3574, wrapperTypeName3535);
    panda$core$String* $tmp3577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3575, &$s3576);
    panda$core$String* $tmp3578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3577, load3555);
    panda$core$String* $tmp3580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3578, &$s3579);
    panda$core$String* $tmp3581 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3580, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3581, &$s3582);
    (($fn3584) p_out->$class->vtable[19])(p_out, $tmp3583);
    return result3570;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* nullableType3585;
    panda$core$String* result3587;
    panda$core$String* $tmp3586 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3585 = $tmp3586;
    panda$core$String* $tmp3588 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3587 = $tmp3588;
    panda$core$String* $tmp3589 = panda$core$String$convert$R$panda$core$String(result3587);
    panda$core$String* $tmp3591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3589, &$s3590);
    panda$core$String* $tmp3592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3591, nullableType3585);
    panda$core$String* $tmp3594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3592, &$s3593);
    panda$core$String* $tmp3596 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3595, $tmp3596);
    panda$core$String* $tmp3599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3597, &$s3598);
    panda$core$String* $tmp3600 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3599, $tmp3600);
    panda$core$String* $tmp3603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3601, &$s3602);
    panda$core$String* $tmp3604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3603, p_value);
    panda$core$String* $tmp3606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3604, &$s3605);
    panda$core$String* $tmp3607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3594, $tmp3606);
    (($fn3608) p_out->$class->vtable[19])(p_out, $tmp3607);
    return result3587;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* result3609;
    panda$core$String* $tmp3610 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3609 = $tmp3610;
    panda$core$String* $tmp3611 = panda$core$String$convert$R$panda$core$String(result3609);
    panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3611, &$s3612);
    panda$core$String* $tmp3614 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3613, $tmp3614);
    panda$core$String* $tmp3617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3615, &$s3616);
    panda$core$String* $tmp3618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3617, p_value);
    panda$core$String* $tmp3620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3618, &$s3619);
    (($fn3621) p_out->$class->vtable[19])(p_out, $tmp3620);
    return result3609;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$OutputStream* p_out) {
    panda$core$String* op3622;
    panda$core$Int64 size13625;
    panda$core$Int64 size23627;
    org$pandalanguage$pandac$ClassDecl* srcClass3650;
    org$pandalanguage$pandac$ClassDecl* targetClass3652;
    panda$core$String* srcType3691;
    panda$core$String* dstType3693;
    panda$core$String* result3696;
    panda$core$Bit $tmp3623 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3623.value) {
    {
        panda$core$Bit $tmp3624 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3624.value);
        panda$core$Int64 $tmp3626 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13625 = $tmp3626;
        panda$core$Int64 $tmp3628 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23627 = $tmp3628;
        panda$core$Bit $tmp3629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 20 }));
        if ($tmp3629.value) {
        {
            panda$core$Bit $tmp3630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp3630.value) {
            {
                panda$core$Bit $tmp3631 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13625, size23627);
                if ($tmp3631.value) {
                {
                    op3622 = &$s3632;
                }
                }
                else {
                panda$core$Bit $tmp3633 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13625, size23627);
                if ($tmp3633.value) {
                {
                    op3622 = &$s3634;
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
            panda$core$Bit $tmp3635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3635.value) {
            {
                op3622 = &$s3636;
            }
            }
            else {
            {
                panda$core$Bit $tmp3637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
                PANDA_ASSERT($tmp3637.value);
                op3622 = &$s3638;
            }
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
        if ($tmp3639.value) {
        {
            panda$core$Bit $tmp3640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3640.value) {
            {
                op3622 = &$s3641;
            }
            }
            else {
            {
                panda$core$Bit $tmp3642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 13 }));
                PANDA_ASSERT($tmp3642.value);
                op3622 = &$s3643;
            }
            }
        }
        }
        else {
        {
            panda$core$Bit $tmp3644 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13625, size23627);
            if ($tmp3644.value) {
            {
                op3622 = &$s3645;
            }
            }
            else {
            panda$core$Bit $tmp3646 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13625, size23627);
            if ($tmp3646.value) {
            {
                panda$core$Bit $tmp3647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 12 }));
                if ($tmp3647.value) {
                {
                    op3622 = &$s3648;
                }
                }
                else {
                {
                    op3622 = &$s3649;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3651 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3650 = $tmp3651;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3650 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3653 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3652 = $tmp3653;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3652 != NULL }).value);
        panda$core$Bit $tmp3655 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3650);
        bool $tmp3654 = $tmp3655.value;
        if (!$tmp3654) goto $l3656;
        panda$core$Bit $tmp3657 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3652);
        panda$core$Bit $tmp3658 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3657);
        $tmp3654 = $tmp3658.value;
        $l3656:;
        panda$core$Bit $tmp3659 = { $tmp3654 };
        if ($tmp3659.value) {
        {
            panda$core$String* $tmp3660 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3660;
        }
        }
        else {
        panda$core$Bit $tmp3662 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3650);
        panda$core$Bit $tmp3663 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3662);
        bool $tmp3661 = $tmp3663.value;
        if (!$tmp3661) goto $l3664;
        panda$core$Bit $tmp3665 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3652);
        $tmp3661 = $tmp3665.value;
        $l3664:;
        panda$core$Bit $tmp3666 = { $tmp3661 };
        if ($tmp3666.value) {
        {
            panda$core$String* $tmp3667 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3667;
        }
        }
        else {
        panda$core$Bit $tmp3670 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3650);
        bool $tmp3669 = $tmp3670.value;
        if (!$tmp3669) goto $l3671;
        panda$core$Bit $tmp3672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3669 = $tmp3672.value;
        $l3671:;
        panda$core$Bit $tmp3673 = { $tmp3669 };
        bool $tmp3668 = $tmp3673.value;
        if (!$tmp3668) goto $l3674;
        panda$core$Object* $tmp3675 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3676 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3675), p_src);
        $tmp3668 = $tmp3676.value;
        $l3674:;
        panda$core$Bit $tmp3677 = { $tmp3668 };
        if ($tmp3677.value) {
        {
            panda$core$String* $tmp3678 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3678;
        }
        }
        else {
        panda$core$Bit $tmp3681 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3652);
        bool $tmp3680 = $tmp3681.value;
        if (!$tmp3680) goto $l3682;
        panda$core$Bit $tmp3683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3680 = $tmp3683.value;
        $l3682:;
        panda$core$Bit $tmp3684 = { $tmp3680 };
        bool $tmp3679 = $tmp3684.value;
        if (!$tmp3679) goto $l3685;
        panda$core$Object* $tmp3686 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3687 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3686), p_target);
        $tmp3679 = $tmp3687.value;
        $l3685:;
        panda$core$Bit $tmp3688 = { $tmp3679 };
        if ($tmp3688.value) {
        {
            panda$core$String* $tmp3689 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3689;
        }
        }
        }
        }
        }
        op3622 = &$s3690;
    }
    }
    panda$core$String* $tmp3692 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3691 = $tmp3692;
    panda$core$String* $tmp3694 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3693 = $tmp3694;
    panda$core$Bit $tmp3695 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3691, dstType3693);
    if ($tmp3695.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3697 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3696 = $tmp3697;
    panda$core$String* $tmp3698 = panda$core$String$convert$R$panda$core$String(result3696);
    panda$core$String* $tmp3700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3698, &$s3699);
    panda$core$String* $tmp3701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3700, op3622);
    panda$core$String* $tmp3703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3701, &$s3702);
    panda$core$String* $tmp3704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3703, srcType3691);
    panda$core$String* $tmp3706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3704, &$s3705);
    panda$core$String* $tmp3707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3706, p_value);
    panda$core$String* $tmp3709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3707, &$s3708);
    panda$core$String* $tmp3710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3709, dstType3693);
    panda$core$String* $tmp3712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3710, &$s3711);
    (($fn3713) p_out->$class->vtable[19])(p_out, $tmp3712);
    return result3696;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$OutputStream* p_out) {
    panda$core$String* base3717;
    panda$core$Bit $tmp3714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3714.value);
    panda$core$Int64 $tmp3715 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3715, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3716.value);
    panda$core$Object* $tmp3718 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3719 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3718), p_out);
    base3717 = $tmp3719;
    panda$core$Object* $tmp3720 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3721 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, base3717, ((org$pandalanguage$pandac$IRNode*) $tmp3720)->type, p_cast->type, p_out);
    return $tmp3721;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3725;
    panda$core$String* t3727;
    panda$core$String* value3735;
    panda$core$String* result3746;
    org$pandalanguage$pandac$FieldDecl* lastField3748;
    panda$core$String* value3776;
    panda$core$String* result3787;
    org$pandalanguage$pandac$FieldDecl* lastField3789;
    panda$core$String* alloca3812;
    panda$core$String* result3831;
    panda$core$String* callRef3846;
    panda$core$String* result3856;
    panda$core$String* classPtr3869;
    panda$core$String* className3871;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3896;
    panda$core$Bit $tmp3722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3722.value);
    panda$core$Int64 $tmp3723 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3724 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3723, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3724.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3726 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3725 = $tmp3726;
    PANDA_ASSERT(((panda$core$Bit) { cl3725 != NULL }).value);
    panda$core$String* $tmp3728 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3727 = $tmp3728;
    panda$core$Bit $tmp3729 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3729.value) {
    {
        panda$core$Int64 $tmp3730 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3730, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3731.value);
        panda$core$Object* $tmp3732 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3733 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3732)->children);
        panda$core$Bit $tmp3734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3733, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3734.value);
        panda$core$Object* $tmp3736 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3737 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3736)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3738 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3737), p_out);
        value3735 = $tmp3738;
        panda$core$Object* $tmp3739 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3740 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3739)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3740)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3741.value) {
        {
            panda$core$String* $tmp3743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3742, value3735);
            panda$core$String* $tmp3745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3743, &$s3744);
            return $tmp3745;
        }
        }
        panda$core$String* $tmp3747 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3746 = $tmp3747;
        panda$core$Int64 $tmp3749 = panda$collections$Array$get_count$R$panda$core$Int64(cl3725->fields);
        panda$core$Int64 $tmp3750 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3749, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3751 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3725->fields, $tmp3750);
        lastField3748 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3751);
        panda$core$Bit $tmp3752 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3748->annotations);
        panda$core$Bit $tmp3753 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3752);
        PANDA_ASSERT($tmp3753.value);
        panda$core$String* $tmp3754 = panda$core$String$convert$R$panda$core$String(result3746);
        panda$core$String* $tmp3756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3754, &$s3755);
        panda$core$String* $tmp3757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3756, t3727);
        panda$core$String* $tmp3759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3757, &$s3758);
        panda$core$String* $tmp3760 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3748->type);
        panda$core$String* $tmp3761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3759, $tmp3760);
        panda$core$String* $tmp3763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3761, &$s3762);
        panda$core$String* $tmp3764 = panda$core$String$convert$R$panda$core$String(value3735);
        panda$core$String* $tmp3766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3764, &$s3765);
        panda$core$String* $tmp3767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3763, $tmp3766);
        (($fn3768) p_out->$class->vtable[19])(p_out, $tmp3767);
        return result3746;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3769 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3770 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3769);
    if ($tmp3770.value) {
    {
        panda$core$Int64 $tmp3771 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3771, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3772.value);
        panda$core$Object* $tmp3773 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3774 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3773)->children);
        panda$core$Bit $tmp3775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3774, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3775.value);
        panda$core$Object* $tmp3777 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3778 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3777)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3779 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3778), p_out);
        value3776 = $tmp3779;
        panda$core$Object* $tmp3780 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3781 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp3780)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3781)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3782.value) {
        {
            panda$core$String* $tmp3784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3783, value3776);
            panda$core$String* $tmp3786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3784, &$s3785);
            return $tmp3786;
        }
        }
        panda$core$String* $tmp3788 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3787 = $tmp3788;
        panda$core$Int64 $tmp3790 = panda$collections$Array$get_count$R$panda$core$Int64(cl3725->fields);
        panda$core$Int64 $tmp3791 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3790, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3792 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3725->fields, $tmp3791);
        lastField3789 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3792);
        panda$core$Bit $tmp3793 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3789->annotations);
        panda$core$Bit $tmp3794 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3793);
        PANDA_ASSERT($tmp3794.value);
        panda$core$String* $tmp3795 = panda$core$String$convert$R$panda$core$String(result3787);
        panda$core$String* $tmp3797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3795, &$s3796);
        panda$core$String* $tmp3798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3797, t3727);
        panda$core$String* $tmp3800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3798, &$s3799);
        panda$core$String* $tmp3801 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3789->type);
        panda$core$String* $tmp3802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3800, $tmp3801);
        panda$core$String* $tmp3804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3802, &$s3803);
        panda$core$String* $tmp3805 = panda$core$String$convert$R$panda$core$String(value3776);
        panda$core$String* $tmp3807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3805, &$s3806);
        panda$core$String* $tmp3808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3804, $tmp3807);
        (($fn3809) p_out->$class->vtable[19])(p_out, $tmp3808);
        return result3787;
    }
    }
    panda$core$Bit $tmp3810 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3725);
    if ($tmp3810.value) {
    {
        panda$core$Int64 $tmp3811 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3811;
        panda$core$String* $tmp3814 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3813, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3814, &$s3815);
        alloca3812 = $tmp3816;
        panda$core$String* $tmp3817 = panda$core$String$convert$R$panda$core$String(alloca3812);
        panda$core$String* $tmp3819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3817, &$s3818);
        panda$core$String* $tmp3820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3819, t3727);
        panda$core$String* $tmp3822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3820, &$s3821);
        (($fn3823) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3822);
        panda$core$Object* $tmp3824 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3825 = panda$core$String$convert$R$panda$core$String(t3727);
        panda$core$String* $tmp3827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3825, &$s3826);
        panda$core$String* $tmp3828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3827, alloca3812);
        panda$core$String* $tmp3830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3828, &$s3829);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3824), $tmp3830, p_out);
        panda$core$String* $tmp3832 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3831 = $tmp3832;
        panda$core$String* $tmp3833 = panda$core$String$convert$R$panda$core$String(result3831);
        panda$core$String* $tmp3835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3833, &$s3834);
        panda$core$String* $tmp3836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3835, t3727);
        panda$core$String* $tmp3838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3836, &$s3837);
        panda$core$String* $tmp3839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3838, t3727);
        panda$core$String* $tmp3841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3839, &$s3840);
        panda$core$String* $tmp3842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3841, alloca3812);
        panda$core$String* $tmp3844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3842, &$s3843);
        (($fn3845) p_out->$class->vtable[19])(p_out, $tmp3844);
        return result3831;
    }
    }
    panda$core$String* $tmp3847 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3846 = $tmp3847;
    panda$core$String* $tmp3848 = panda$core$String$convert$R$panda$core$String(callRef3846);
    panda$core$String* $tmp3850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3848, &$s3849);
    panda$core$Int64 $tmp3851 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3852 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3850, ((panda$core$Object*) wrap_panda$core$Int64($tmp3851)));
    panda$core$String* $tmp3854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3852, &$s3853);
    (($fn3855) p_out->$class->vtable[19])(p_out, $tmp3854);
    panda$core$String* $tmp3857 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3856 = $tmp3857;
    panda$core$String* $tmp3858 = panda$core$String$convert$R$panda$core$String(result3856);
    panda$core$String* $tmp3860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3858, &$s3859);
    panda$core$String* $tmp3861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3860, callRef3846);
    panda$core$String* $tmp3863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3861, &$s3862);
    panda$core$String* $tmp3864 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3863, $tmp3864);
    panda$core$String* $tmp3867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3865, &$s3866);
    (($fn3868) p_out->$class->vtable[19])(p_out, $tmp3867);
    panda$core$String* $tmp3870 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3869 = $tmp3870;
    panda$core$Bit $tmp3873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3872 = $tmp3873.value;
    if (!$tmp3872) goto $l3874;
    panda$core$Bit $tmp3875 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3725);
    panda$core$Bit $tmp3876 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3875);
    $tmp3872 = $tmp3876.value;
    $l3874:;
    panda$core$Bit $tmp3877 = { $tmp3872 };
    if ($tmp3877.value) {
    {
        panda$core$Object* $tmp3878 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3879 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3878));
        className3871 = $tmp3879;
    }
    }
    else {
    {
        panda$core$String* $tmp3880 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3871 = $tmp3880;
    }
    }
    panda$core$String* $tmp3881 = panda$core$String$convert$R$panda$core$String(classPtr3869);
    panda$core$String* $tmp3883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3881, &$s3882);
    panda$core$String* $tmp3884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3883, className3871);
    panda$core$String* $tmp3886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3884, &$s3885);
    panda$core$String* $tmp3887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3886, t3727);
    panda$core$String* $tmp3889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3887, &$s3888);
    panda$core$String* $tmp3890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3889, result3856);
    panda$core$String* $tmp3892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3890, &$s3891);
    panda$core$String* $tmp3894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3892, &$s3893);
    (($fn3895) p_out->$class->vtable[19])(p_out, $tmp3894);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3897 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3725);
    cc3896 = $tmp3897;
    panda$core$String* $tmp3899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3898, cc3896->type);
    panda$core$String* $tmp3901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3899, &$s3900);
    panda$core$String* $tmp3902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3901, cc3896->name);
    panda$core$String* $tmp3904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3902, &$s3903);
    panda$core$String* $tmp3906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3905, classPtr3869);
    panda$core$String* $tmp3908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3906, &$s3907);
    panda$core$String* $tmp3909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3904, $tmp3908);
    (($fn3910) p_out->$class->vtable[19])(p_out, $tmp3909);
    panda$core$Object* $tmp3911 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3912 = panda$core$String$convert$R$panda$core$String(t3727);
    panda$core$String* $tmp3914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3912, &$s3913);
    panda$core$String* $tmp3915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3914, result3856);
    panda$core$String* $tmp3917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3915, &$s3916);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3911), $tmp3917, p_out);
    return result3856;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3918 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3918;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3920 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3919, $tmp3920);
    return $tmp3921;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_real, panda$io$OutputStream* p_out) {
    panda$core$Real64 r643922;
    panda$core$Int64 bits3927;
    panda$core$Int64 $tmp3928;
    panda$core$MutableString* result3929;
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT $tmp3941;
    r643922 = ((panda$core$Real64$wrapper*) p_real->payload)->value;
    panda$core$Int64 $tmp3923 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_real->type);
    panda$core$Bit $tmp3924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3923, ((panda$core$Int64) { 32 }));
    if ($tmp3924.value) {
    {
        panda$core$Real32 $tmp3925 = panda$core$Real64$convert$R$panda$core$Real32(r643922);
        panda$core$Real64 $tmp3926 = panda$core$Real32$convert$R$panda$core$Real64($tmp3925);
        r643922 = $tmp3926;
    }
    }
    panda$core$Panda$floatToIntBits$panda$core$Real64$R$panda$core$Int64(&$tmp3928, r643922);
    bits3927 = $tmp3928;
    panda$core$MutableString* $tmp3930 = (panda$core$MutableString*) malloc(48);
    $tmp3930->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp3930->refCount.value = 1;
    panda$core$MutableString$init($tmp3930);
    result3929 = $tmp3930;
    $l3932:;
    panda$core$Bit $tmp3934 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(bits3927, ((panda$core$Int64) { 0 }));
    if (!$tmp3934.value) goto $l3933;
    {
        panda$core$Int64 $tmp3936 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(bits3927, ((panda$core$Int64) { 16 }));
        panda$core$Char32 $tmp3937 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(&$s3935, $tmp3936);
        panda$core$MutableString$append$panda$core$Char32(result3929, $tmp3937);
        panda$core$Int64 $tmp3938 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(bits3927, ((panda$core$Int64) { 16 }));
        bits3927 = $tmp3938;
    }
    goto $l3932;
    $l3933:;
    panda$core$String* $tmp3940 = panda$core$MutableString$finish$R$panda$core$String(result3929);
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(&$tmp3941, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp3942 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String($tmp3940, $tmp3941);
    panda$core$String* $tmp3943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3939, $tmp3942);
    return $tmp3943;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$OutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3944;
    }
    }
    return &$s3945;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$OutputStream* p_out) {
    panda$core$String* result3948;
    panda$core$String* t3950;
    panda$core$Bit $tmp3946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3946.value) {
    {
        panda$core$String* $tmp3947 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3947;
    }
    }
    panda$core$String* $tmp3949 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3948 = $tmp3949;
    panda$core$String* $tmp3951 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3950 = $tmp3951;
    panda$core$String* $tmp3952 = panda$core$String$convert$R$panda$core$String(result3948);
    panda$core$String* $tmp3954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3952, &$s3953);
    panda$core$String* $tmp3955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3954, t3950);
    panda$core$String* $tmp3957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3955, &$s3956);
    panda$core$String* $tmp3958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3957, t3950);
    panda$core$String* $tmp3960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3958, &$s3959);
    panda$core$String* $tmp3961 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3960, $tmp3961);
    panda$core$String* $tmp3964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3962, &$s3963);
    (($fn3965) p_out->$class->vtable[19])(p_out, $tmp3964);
    return result3948;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* chars3967;
    panda$core$String* charsType3972;
    panda$core$String* separator3989;
    panda$collections$Iterator* c$Iter3991;
    panda$core$Char8 c4004;
    panda$core$String* result4021;
    org$pandalanguage$pandac$ClassDecl* string4026;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc4029;
    panda$core$Int64 $tmp3966 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3966;
    panda$core$String* $tmp3969 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3968, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3969, &$s3970);
    chars3967 = $tmp3971;
    panda$collections$ListView* $tmp3974 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3975 = ((panda$collections$CollectionView*) $tmp3974)->$class->itable;
    while ($tmp3975->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3975 = $tmp3975->next;
    }
    $fn3977 $tmp3976 = $tmp3975->methods[0];
    panda$core$Int64 $tmp3978 = $tmp3976(((panda$collections$CollectionView*) $tmp3974));
    panda$core$String* $tmp3979 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3973, ((panda$core$Object*) wrap_panda$core$Int64($tmp3978)));
    panda$core$String* $tmp3981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3979, &$s3980);
    charsType3972 = $tmp3981;
    panda$core$String* $tmp3982 = panda$core$String$convert$R$panda$core$String(chars3967);
    panda$core$String* $tmp3984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3982, &$s3983);
    panda$core$String* $tmp3985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3984, charsType3972);
    panda$core$String* $tmp3987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3985, &$s3986);
    (($fn3988) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3987);
    separator3989 = &$s3990;
    {
        panda$collections$ListView* $tmp3992 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp3993 = ((panda$collections$Iterable*) $tmp3992)->$class->itable;
        while ($tmp3993->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3993 = $tmp3993->next;
        }
        $fn3995 $tmp3994 = $tmp3993->methods[0];
        panda$collections$Iterator* $tmp3996 = $tmp3994(((panda$collections$Iterable*) $tmp3992));
        c$Iter3991 = $tmp3996;
        $l3997:;
        ITable* $tmp3999 = c$Iter3991->$class->itable;
        while ($tmp3999->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3999 = $tmp3999->next;
        }
        $fn4001 $tmp4000 = $tmp3999->methods[0];
        panda$core$Bit $tmp4002 = $tmp4000(c$Iter3991);
        panda$core$Bit $tmp4003 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4002);
        if (!$tmp4003.value) goto $l3998;
        {
            ITable* $tmp4005 = c$Iter3991->$class->itable;
            while ($tmp4005->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4005 = $tmp4005->next;
            }
            $fn4007 $tmp4006 = $tmp4005->methods[1];
            panda$core$Object* $tmp4008 = $tmp4006(c$Iter3991);
            c4004 = ((panda$core$Char8$wrapper*) $tmp4008)->value;
            panda$core$String* $tmp4009 = panda$core$String$convert$R$panda$core$String(separator3989);
            panda$core$String* $tmp4011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4009, &$s4010);
            panda$core$Int8 $tmp4012 = panda$core$Char8$convert$R$panda$core$Int8(c4004);
            panda$core$String* $tmp4013 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4011, ((panda$core$Object*) wrap_panda$core$Int8($tmp4012)));
            panda$core$String* $tmp4015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4013, &$s4014);
            (($fn4016) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4015);
            separator3989 = &$s4017;
        }
        goto $l3997;
        $l3998:;
    }
    (($fn4019) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s4018);
    panda$core$Int64 $tmp4020 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4020;
    panda$core$String* $tmp4023 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4022, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4023, &$s4024);
    result4021 = $tmp4025;
    org$pandalanguage$pandac$Type* $tmp4027 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4028 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp4027);
    string4026 = $tmp4028;
    PANDA_ASSERT(((panda$core$Bit) { string4026 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp4030 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string4026);
    cc4029 = $tmp4030;
    panda$core$String* $tmp4031 = panda$core$String$convert$R$panda$core$String(result4021);
    panda$core$String* $tmp4033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4031, &$s4032);
    panda$core$String* $tmp4035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4034, cc4029->type);
    panda$core$String* $tmp4037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4035, &$s4036);
    panda$core$String* $tmp4038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4037, cc4029->name);
    panda$core$String* $tmp4040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4038, &$s4039);
    panda$core$String* $tmp4041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4033, $tmp4040);
    panda$core$String* $tmp4043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4041, &$s4042);
    panda$core$String* $tmp4045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4044, charsType3972);
    panda$core$String* $tmp4047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4045, &$s4046);
    panda$core$String* $tmp4048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4047, chars3967);
    panda$core$String* $tmp4050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4048, &$s4049);
    panda$core$String* $tmp4051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4043, $tmp4050);
    panda$collections$ListView* $tmp4053 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4054 = ((panda$collections$CollectionView*) $tmp4053)->$class->itable;
    while ($tmp4054->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4054 = $tmp4054->next;
    }
    $fn4056 $tmp4055 = $tmp4054->methods[0];
    panda$core$Int64 $tmp4057 = $tmp4055(((panda$collections$CollectionView*) $tmp4053));
    panda$core$String* $tmp4058 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4052, ((panda$core$Object*) wrap_panda$core$Int64($tmp4057)));
    panda$core$String* $tmp4060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4058, &$s4059);
    panda$core$String* $tmp4061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4051, $tmp4060);
    panda$core$Int64 $tmp4063 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$String* $tmp4064 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4062, ((panda$core$Object*) wrap_panda$core$Int64($tmp4063)));
    panda$core$String* $tmp4066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4064, &$s4065);
    panda$core$String* $tmp4067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4061, $tmp4066);
    (($fn4068) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp4067);
    return result4021;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$Int64 $tmp4069 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp4070 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4069, ((panda$core$Int64) { 0 }));
    if ($tmp4070.value) {
    {
        panda$core$Object* $tmp4071 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp4071)->selfRef;
    }
    }
    return &$s4072;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* result4073;
    panda$core$String* ref4075;
    panda$core$String* $tmp4074 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4073 = $tmp4074;
    panda$core$String* $tmp4076 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_s, p_out);
    ref4075 = $tmp4076;
    panda$core$String* $tmp4077 = panda$core$String$convert$R$panda$core$String(result4073);
    panda$core$String* $tmp4079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4077, &$s4078);
    panda$core$String* $tmp4080 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, self->currentMethod);
    panda$core$String* $tmp4081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4079, $tmp4080);
    panda$core$String* $tmp4083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4081, &$s4082);
    panda$core$String* $tmp4084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4083, ref4075);
    panda$core$String* $tmp4086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4084, &$s4085);
    panda$core$String* $tmp4087 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp4088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4086, $tmp4087);
    panda$core$String* $tmp4090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4088, &$s4089);
    (($fn4091) p_out->$class->vtable[19])(p_out, $tmp4090);
    return result4073;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value4095;
    org$pandalanguage$pandac$ClassDecl* cl4098;
    panda$core$String* resultValue4101;
    panda$core$String* field4106;
    panda$core$String* result4131;
    panda$core$Bit $tmp4092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp4092.value);
    panda$core$Int64 $tmp4093 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4093, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4094.value);
    panda$core$Object* $tmp4096 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4097 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4096), p_out);
    value4095 = $tmp4097;
    panda$core$Object* $tmp4099 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4100 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4099)->type);
    cl4098 = $tmp4100;
    panda$core$Bit $tmp4102 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4098);
    if ($tmp4102.value) {
    {
        panda$core$Object* $tmp4103 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4104 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4103)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4104.value) {
        {
            return &$s4105;
        }
        }
        panda$core$String* $tmp4107 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field4106 = $tmp4107;
        panda$core$String* $tmp4108 = panda$core$String$convert$R$panda$core$String(field4106);
        panda$core$String* $tmp4110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4108, &$s4109);
        panda$core$String* $tmp4111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4110, value4095);
        panda$core$String* $tmp4113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4111, &$s4112);
        (($fn4114) p_out->$class->vtable[19])(p_out, $tmp4113);
        panda$core$String* $tmp4115 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4101 = $tmp4115;
        panda$core$String* $tmp4116 = panda$core$String$convert$R$panda$core$String(resultValue4101);
        panda$core$String* $tmp4118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4116, &$s4117);
        panda$core$String* $tmp4119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4118, field4106);
        panda$core$String* $tmp4121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4119, &$s4120);
        (($fn4122) p_out->$class->vtable[19])(p_out, $tmp4121);
    }
    }
    else {
    {
        panda$core$String* $tmp4123 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4101 = $tmp4123;
        panda$core$String* $tmp4124 = panda$core$String$convert$R$panda$core$String(resultValue4101);
        panda$core$String* $tmp4126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4124, &$s4125);
        panda$core$String* $tmp4127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4126, value4095);
        panda$core$String* $tmp4129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4127, &$s4128);
        (($fn4130) p_out->$class->vtable[19])(p_out, $tmp4129);
    }
    }
    panda$core$String* $tmp4132 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4131 = $tmp4132;
    panda$core$String* $tmp4133 = panda$core$String$convert$R$panda$core$String(result4131);
    panda$core$String* $tmp4135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4133, &$s4134);
    panda$core$String* $tmp4136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4135, resultValue4101);
    panda$core$String* $tmp4138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4136, &$s4137);
    (($fn4139) p_out->$class->vtable[19])(p_out, $tmp4138);
    return result4131;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value4143;
    org$pandalanguage$pandac$ClassDecl* cl4146;
    panda$core$String* resultValue4149;
    panda$core$String* result4170;
    panda$core$Bit $tmp4140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp4140.value);
    panda$core$Int64 $tmp4141 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4141, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4142.value);
    panda$core$Object* $tmp4144 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4145 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4144), p_out);
    value4143 = $tmp4145;
    panda$core$Object* $tmp4147 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4148 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4147)->type);
    cl4146 = $tmp4148;
    panda$core$Bit $tmp4150 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4146);
    if ($tmp4150.value) {
    {
        panda$core$Object* $tmp4151 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4152 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4151)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4152.value) {
        {
            return &$s4153;
        }
        }
        panda$core$String* $tmp4154 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4149 = $tmp4154;
        panda$core$String* $tmp4155 = panda$core$String$convert$R$panda$core$String(resultValue4149);
        panda$core$String* $tmp4157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4155, &$s4156);
        panda$core$String* $tmp4158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4157, value4143);
        panda$core$String* $tmp4160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4158, &$s4159);
        (($fn4161) p_out->$class->vtable[19])(p_out, $tmp4160);
    }
    }
    else {
    {
        panda$core$String* $tmp4162 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4149 = $tmp4162;
        panda$core$String* $tmp4163 = panda$core$String$convert$R$panda$core$String(resultValue4149);
        panda$core$String* $tmp4165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4163, &$s4164);
        panda$core$String* $tmp4166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4165, value4143);
        panda$core$String* $tmp4168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4166, &$s4167);
        (($fn4169) p_out->$class->vtable[19])(p_out, $tmp4168);
    }
    }
    panda$core$String* $tmp4171 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4170 = $tmp4171;
    panda$core$String* $tmp4172 = panda$core$String$convert$R$panda$core$String(result4170);
    panda$core$String* $tmp4174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4172, &$s4173);
    panda$core$String* $tmp4175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4174, resultValue4149);
    panda$core$String* $tmp4177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4175, &$s4176);
    (($fn4178) p_out->$class->vtable[19])(p_out, $tmp4177);
    return result4170;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4180;
    panda$core$Bit $tmp4179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp4179.value);
    panda$core$Object* $tmp4181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4182 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4181));
    cl4180 = $tmp4182;
    PANDA_ASSERT(((panda$core$Bit) { cl4180 != NULL }).value);
    panda$core$Bit $tmp4183 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4180);
    if ($tmp4183.value) {
    {
        panda$core$Object* $tmp4185 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4186 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4185));
        panda$core$String* $tmp4187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4184, $tmp4186);
        panda$core$String* $tmp4189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4187, &$s4188);
        return $tmp4189;
    }
    }
    else {
    {
        return &$s4190;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* base4194;
    panda$core$String* result4197;
    panda$core$String* zero4200;
    panda$core$Bit $tmp4191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp4191.value);
    panda$core$Int64 $tmp4192 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp4193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4192, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4193.value);
    panda$core$Object* $tmp4195 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4196 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4195), p_out);
    base4194 = $tmp4196;
    panda$core$String* $tmp4198 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4197 = $tmp4198;
    panda$core$Int64 $tmp4199 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp4199.value) {
        case 52:
        {
            panda$core$Bit $tmp4201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp4201.value) {
            {
                panda$core$String* $tmp4202 = panda$core$String$convert$R$panda$core$String(result4197);
                panda$core$String* $tmp4204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4202, &$s4203);
                panda$core$String* $tmp4205 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
                panda$core$String* $tmp4206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4204, $tmp4205);
                panda$core$String* $tmp4208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4206, &$s4207);
                panda$core$String* $tmp4209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4208, base4194);
                panda$core$String* $tmp4211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4209, &$s4210);
                (($fn4212) p_out->$class->vtable[19])(p_out, $tmp4211);
            }
            }
            else {
            {
                panda$core$String* $tmp4213 = panda$core$String$convert$R$panda$core$String(result4197);
                panda$core$String* $tmp4215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4213, &$s4214);
                panda$core$String* $tmp4216 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
                panda$core$String* $tmp4217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4215, $tmp4216);
                panda$core$String* $tmp4219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4217, &$s4218);
                panda$core$String* $tmp4220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4219, base4194);
                panda$core$String* $tmp4222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4220, &$s4221);
                (($fn4223) p_out->$class->vtable[19])(p_out, $tmp4222);
            }
            }
            return result4197;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp4224 = panda$core$String$convert$R$panda$core$String(result4197);
            panda$core$String* $tmp4226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4224, &$s4225);
            panda$core$String* $tmp4227 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4226, $tmp4227);
            panda$core$String* $tmp4230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4228, &$s4229);
            panda$core$String* $tmp4231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4230, base4194);
            panda$core$String* $tmp4233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4231, &$s4232);
            (($fn4234) p_out->$class->vtable[19])(p_out, $tmp4233);
            return result4197;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* value4249;
    panda$core$String* result4252;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4235 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4235;
        }
        break;
        case 1044:
        {
            panda$core$String* $tmp4236 = org$pandalanguage$pandac$LLVMCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4236;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4237 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4237;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4238 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4238;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4239 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4239;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4240 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4240;
        }
        break;
        case 1045:
        {
            panda$core$String* $tmp4241 = org$pandalanguage$pandac$LLVMCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4241;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4242 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4242;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4243 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4243;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4244 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4244;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4245 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4245;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4246 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4246;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4247 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4247;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4248 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4248;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4250 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4251 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4250), p_out);
            value4249 = $tmp4251;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4249));
            return value4249;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4253 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4252 = ((panda$core$String*) $tmp4253);
            PANDA_ASSERT(((panda$core$Bit) { result4252 != NULL }).value);
            return result4252;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4254 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4254;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4255 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4255;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4256 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4256;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4257 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4257;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp4258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1025 }));
    if ($tmp4258.value) {
    {
        panda$core$String* $tmp4259 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, self->currentMethod);
        panda$core$String* $tmp4260 = panda$core$String$convert$R$panda$core$String($tmp4259);
        panda$core$String* $tmp4262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4260, &$s4261);
        panda$core$String* $tmp4263 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
        panda$core$String* $tmp4264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4262, $tmp4263);
        panda$core$String* $tmp4266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4264, &$s4265);
        return $tmp4266;
    }
    }
    panda$core$String* $tmp4267 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4268 = panda$core$String$convert$R$panda$core$String($tmp4267);
    panda$core$String* $tmp4270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4268, &$s4269);
    panda$core$String* $tmp4271 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4270, $tmp4271);
    panda$core$String* $tmp4274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4272, &$s4273);
    return $tmp4274;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$OutputStream* p_out) {
    panda$collections$Iterator* s$Iter4276;
    org$pandalanguage$pandac$IRNode* s4288;
    panda$core$Bit $tmp4275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4275.value);
    {
        ITable* $tmp4277 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4277->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4277 = $tmp4277->next;
        }
        $fn4279 $tmp4278 = $tmp4277->methods[0];
        panda$collections$Iterator* $tmp4280 = $tmp4278(((panda$collections$Iterable*) p_block->children));
        s$Iter4276 = $tmp4280;
        $l4281:;
        ITable* $tmp4283 = s$Iter4276->$class->itable;
        while ($tmp4283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4283 = $tmp4283->next;
        }
        $fn4285 $tmp4284 = $tmp4283->methods[0];
        panda$core$Bit $tmp4286 = $tmp4284(s$Iter4276);
        panda$core$Bit $tmp4287 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4286);
        if (!$tmp4287.value) goto $l4282;
        {
            ITable* $tmp4289 = s$Iter4276->$class->itable;
            while ($tmp4289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4289 = $tmp4289->next;
            }
            $fn4291 $tmp4290 = $tmp4289->methods[1];
            panda$core$Object* $tmp4292 = $tmp4290(s$Iter4276);
            s4288 = ((org$pandalanguage$pandac$IRNode*) $tmp4292);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s4288, p_out);
        }
        goto $l4281;
        $l4282:;
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4293;
    panda$core$String* $match$2040_94294;
    panda$core$String* ptr4299;
    panda$core$String* arg4302;
    org$pandalanguage$pandac$Type* baseType4322;
    panda$core$String* base4326;
    panda$core$String* indexStruct4329;
    panda$core$String* index4332;
    panda$core$String* value4341;
    panda$core$String* ptr4345;
    panda$core$String* ptr4382;
    panda$core$String* cast4385;
    m4293 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$2040_94294 = ((org$pandalanguage$pandac$Symbol*) m4293->value)->name;
        panda$core$Bit $tmp4296 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$2040_94294, &$s4295);
        if ($tmp4296.value) {
        {
            panda$core$Int64 $tmp4297 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4298.value);
            panda$core$Object* $tmp4300 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4301 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4300), p_out);
            ptr4299 = $tmp4301;
            panda$core$Object* $tmp4303 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4304 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4303));
            panda$core$String* $tmp4305 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4304, p_out);
            arg4302 = $tmp4305;
            panda$core$String* $tmp4307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4306, arg4302);
            panda$core$String* $tmp4309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4307, &$s4308);
            panda$core$String* $tmp4310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4309, ptr4299);
            panda$core$String* $tmp4312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4310, &$s4311);
            (($fn4313) p_out->$class->vtable[19])(p_out, $tmp4312);
        }
        }
        else {
        panda$core$Bit $tmp4315 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$2040_94294, &$s4314);
        if ($tmp4315.value) {
        {
            panda$core$Int64 $tmp4316 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4316, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4317.value);
            panda$core$Object* $tmp4318 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4319 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4318));
            panda$core$Int64 $tmp4320 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4319->type->subtypes);
            panda$core$Bit $tmp4321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4320, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4321.value);
            panda$core$Object* $tmp4323 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4324 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4323));
            panda$core$Object* $tmp4325 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4324->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4322 = ((org$pandalanguage$pandac$Type*) $tmp4325);
            panda$core$Object* $tmp4327 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4328 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4327), p_out);
            base4326 = $tmp4328;
            panda$core$Object* $tmp4330 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4331 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4330), p_out);
            indexStruct4329 = $tmp4331;
            panda$core$String* $tmp4333 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4332 = $tmp4333;
            panda$core$String* $tmp4334 = panda$core$String$convert$R$panda$core$String(index4332);
            panda$core$String* $tmp4336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4334, &$s4335);
            panda$core$String* $tmp4337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4336, indexStruct4329);
            panda$core$String* $tmp4339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4337, &$s4338);
            (($fn4340) p_out->$class->vtable[19])(p_out, $tmp4339);
            panda$core$Object* $tmp4342 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4343 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4342));
            panda$core$String* $tmp4344 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4343, p_out);
            value4341 = $tmp4344;
            panda$core$String* $tmp4346 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4345 = $tmp4346;
            panda$core$String* $tmp4347 = panda$core$String$convert$R$panda$core$String(ptr4345);
            panda$core$String* $tmp4349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4347, &$s4348);
            panda$core$String* $tmp4350 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4322);
            panda$core$String* $tmp4351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4349, $tmp4350);
            panda$core$String* $tmp4353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4351, &$s4352);
            panda$core$String* $tmp4354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4353, base4326);
            panda$core$String* $tmp4356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4354, &$s4355);
            panda$core$String* $tmp4358 = panda$core$String$convert$R$panda$core$String(&$s4357);
            panda$core$String* $tmp4360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4358, &$s4359);
            panda$core$String* $tmp4361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4360, index4332);
            panda$core$String* $tmp4363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4361, &$s4362);
            panda$core$String* $tmp4364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4356, $tmp4363);
            (($fn4365) p_out->$class->vtable[19])(p_out, $tmp4364);
            panda$core$String* $tmp4367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4366, value4341);
            panda$core$String* $tmp4369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4367, &$s4368);
            panda$core$String* $tmp4370 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4322);
            panda$core$String* $tmp4371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4369, $tmp4370);
            panda$core$String* $tmp4373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4371, &$s4372);
            panda$core$String* $tmp4374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4373, ptr4345);
            panda$core$String* $tmp4376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4374, &$s4375);
            (($fn4377) p_out->$class->vtable[19])(p_out, $tmp4376);
        }
        }
        else {
        panda$core$Bit $tmp4379 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$2040_94294, &$s4378);
        if ($tmp4379.value) {
        {
            panda$core$Int64 $tmp4380 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4380, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4381.value);
            panda$core$Object* $tmp4383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4384 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4383), p_out);
            ptr4382 = $tmp4384;
            panda$core$String* $tmp4386 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4385 = $tmp4386;
            panda$core$String* $tmp4387 = panda$core$String$convert$R$panda$core$String(cast4385);
            panda$core$String* $tmp4389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4387, &$s4388);
            panda$core$String* $tmp4390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4389, ptr4382);
            panda$core$String* $tmp4392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4390, &$s4391);
            (($fn4393) p_out->$class->vtable[19])(p_out, $tmp4392);
            panda$core$String* $tmp4395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4394, cast4385);
            panda$core$String* $tmp4397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4395, &$s4396);
            (($fn4398) p_out->$class->vtable[19])(p_out, $tmp4397);
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
    org$pandalanguage$pandac$MethodDecl* m4400;
    org$pandalanguage$pandac$Type* actualMethodType4403;
    panda$core$String* actualResultType4404;
    panda$core$Bit isSuper4405;
    panda$collections$Array* args4425;
    panda$core$Int64 offset4428;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4433;
    panda$core$String* arg4452;
    panda$core$String* refTarget4484;
    panda$core$String* methodRef4488;
    panda$core$String* separator4490;
    panda$core$String* indirectVar4494;
    panda$core$String* resultType4497;
    panda$collections$Iterator* a$Iter4539;
    panda$core$String* a4551;
    panda$core$Bit $tmp4399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4399.value);
    m4400 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4402 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4400->owner)->name, &$s4401);
    if ($tmp4402.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4400->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4400);
    }
    }
    panda$core$Int64 $tmp4407 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4408 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4407, ((panda$core$Int64) { 1 }));
    bool $tmp4406 = $tmp4408.value;
    if (!$tmp4406) goto $l4409;
    panda$core$Object* $tmp4410 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4410)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4406 = $tmp4411.value;
    $l4409:;
    panda$core$Bit $tmp4412 = { $tmp4406 };
    isSuper4405 = $tmp4412;
    panda$core$Bit $tmp4414 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4405);
    bool $tmp4413 = $tmp4414.value;
    if (!$tmp4413) goto $l4415;
    panda$core$Bit $tmp4416 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4400);
    $tmp4413 = $tmp4416.value;
    $l4415:;
    panda$core$Bit $tmp4417 = { $tmp4413 };
    if ($tmp4417.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4418 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4400);
        actualMethodType4403 = $tmp4418;
        panda$core$Int64 $tmp4419 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4403->subtypes);
        panda$core$Int64 $tmp4420 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4419, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4421 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4403->subtypes, $tmp4420);
        panda$core$String* $tmp4422 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4421));
        actualResultType4404 = $tmp4422;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4423 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4400);
        actualMethodType4403 = $tmp4423;
        panda$core$String* $tmp4424 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4404 = $tmp4424;
    }
    }
    panda$collections$Array* $tmp4426 = (panda$collections$Array*) malloc(40);
    $tmp4426->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4426->refCount.value = 1;
    panda$collections$Array$init($tmp4426);
    args4425 = $tmp4426;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4425, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4429 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4430 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4403->subtypes);
    panda$core$Int64 $tmp4431 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4429, $tmp4430);
    panda$core$Int64 $tmp4432 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4431, ((panda$core$Int64) { 1 }));
    offset4428 = $tmp4432;
    panda$core$Int64 $tmp4434 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4433, ((panda$core$Int64) { 0 }), $tmp4434, ((panda$core$Bit) { false }));
    int64_t $tmp4436 = $tmp4433.min.value;
    panda$core$Int64 i4435 = { $tmp4436 };
    int64_t $tmp4438 = $tmp4433.max.value;
    bool $tmp4439 = $tmp4433.inclusive.value;
    if ($tmp4439) goto $l4446; else goto $l4447;
    $l4446:;
    if ($tmp4436 <= $tmp4438) goto $l4440; else goto $l4442;
    $l4447:;
    if ($tmp4436 < $tmp4438) goto $l4440; else goto $l4442;
    $l4440:;
    {
        panda$core$Object* $tmp4448 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4435);
        panda$core$Bit $tmp4449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4448)->kind, ((panda$core$Int64) { 1025 }));
        if ($tmp4449.value) {
        {
            panda$core$Object* $tmp4450 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4435);
            panda$core$String* $tmp4451 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4450), p_out);
            panda$collections$Array$add$panda$collections$Array$T(args4425, ((panda$core$Object*) $tmp4451));
            goto $l4443;
        }
        }
        panda$core$Object* $tmp4453 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4435);
        panda$core$String* $tmp4454 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4453), p_out);
        arg4452 = $tmp4454;
        panda$core$Bit $tmp4456 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4435, offset4428);
        bool $tmp4455 = $tmp4456.value;
        if (!$tmp4455) goto $l4457;
        panda$core$Int64 $tmp4458 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4435, offset4428);
        panda$core$Object* $tmp4459 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4403->subtypes, $tmp4458);
        panda$core$Object* $tmp4460 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4435);
        panda$core$Bit $tmp4461 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4459), ((org$pandalanguage$pandac$IRNode*) $tmp4460)->type);
        $tmp4455 = $tmp4461.value;
        $l4457:;
        panda$core$Bit $tmp4462 = { $tmp4455 };
        if ($tmp4462.value) {
        {
            panda$core$Int64 $tmp4463 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4435, offset4428);
            panda$core$Object* $tmp4464 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4403->subtypes, $tmp4463);
            panda$core$String* $tmp4465 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4464));
            panda$core$String* $tmp4467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4465, &$s4466);
            panda$core$Object* $tmp4468 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4435);
            panda$core$Int64 $tmp4469 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4435, offset4428);
            panda$core$Object* $tmp4470 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4403->subtypes, $tmp4469);
            panda$core$String* $tmp4471 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg4452, ((org$pandalanguage$pandac$IRNode*) $tmp4468)->type, ((org$pandalanguage$pandac$Type*) $tmp4470), p_out);
            panda$core$String* $tmp4472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4467, $tmp4471);
            arg4452 = $tmp4472;
        }
        }
        else {
        {
            panda$core$Object* $tmp4473 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i4435);
            panda$core$String* $tmp4474 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4473)->type);
            panda$core$String* $tmp4476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4474, &$s4475);
            panda$core$String* $tmp4477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4476, arg4452);
            arg4452 = $tmp4477;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4425, ((panda$core$Object*) arg4452));
    }
    $l4443:;
    int64_t $tmp4479 = $tmp4438 - i4435.value;
    if ($tmp4439) goto $l4480; else goto $l4481;
    $l4480:;
    if ($tmp4479 >= 1) goto $l4478; else goto $l4442;
    $l4481:;
    if ($tmp4479 > 1) goto $l4478; else goto $l4442;
    $l4478:;
    i4435.value += 1;
    goto $l4440;
    $l4442:;
    panda$core$Int64 $tmp4485 = panda$collections$Array$get_count$R$panda$core$Int64(args4425);
    panda$core$Bit $tmp4486 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4485, ((panda$core$Int64) { 0 }));
    if ($tmp4486.value) {
    {
        panda$core$Object* $tmp4487 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4425, ((panda$core$Int64) { 0 }));
        refTarget4484 = ((panda$core$String*) $tmp4487);
    }
    }
    else {
    {
        refTarget4484 = NULL;
    }
    }
    panda$core$String* $tmp4489 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, refTarget4484, m4400, isSuper4405, p_out);
    methodRef4488 = $tmp4489;
    separator4490 = &$s4491;
    panda$core$Bit $tmp4492 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4400);
    if ($tmp4492.value) {
    {
        panda$core$Int64 $tmp4493 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4493;
        panda$core$String* $tmp4496 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4495, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4494 = $tmp4496;
        panda$core$String* $tmp4498 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4497 = $tmp4498;
        panda$core$String* $tmp4499 = panda$core$String$convert$R$panda$core$String(indirectVar4494);
        panda$core$String* $tmp4501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4499, &$s4500);
        panda$core$String* $tmp4502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4501, resultType4497);
        panda$core$String* $tmp4504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4502, &$s4503);
        (($fn4505) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4504);
        panda$core$String* $tmp4507 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4400);
        panda$core$String* $tmp4508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4506, $tmp4507);
        panda$core$String* $tmp4510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4508, &$s4509);
        panda$core$String* $tmp4511 = panda$core$String$convert$R$panda$core$String(methodRef4488);
        panda$core$String* $tmp4513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4511, &$s4512);
        panda$core$String* $tmp4514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4513, resultType4497);
        panda$core$String* $tmp4516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4514, &$s4515);
        panda$core$String* $tmp4517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4516, indirectVar4494);
        panda$core$String* $tmp4519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4517, &$s4518);
        panda$core$String* $tmp4520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4510, $tmp4519);
        (($fn4521) p_out->$class->vtable[16])(p_out, $tmp4520);
        separator4490 = &$s4522;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4523 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4524 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4523);
        if ($tmp4524.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4526 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4400);
        panda$core$String* $tmp4527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4525, $tmp4526);
        panda$core$String* $tmp4529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4527, &$s4528);
        panda$core$String* $tmp4530 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4529, $tmp4530);
        panda$core$String* $tmp4533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4531, &$s4532);
        panda$core$String* $tmp4534 = panda$core$String$convert$R$panda$core$String(methodRef4488);
        panda$core$String* $tmp4536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4534, &$s4535);
        panda$core$String* $tmp4537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4533, $tmp4536);
        (($fn4538) p_out->$class->vtable[16])(p_out, $tmp4537);
    }
    }
    {
        ITable* $tmp4540 = ((panda$collections$Iterable*) args4425)->$class->itable;
        while ($tmp4540->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4540 = $tmp4540->next;
        }
        $fn4542 $tmp4541 = $tmp4540->methods[0];
        panda$collections$Iterator* $tmp4543 = $tmp4541(((panda$collections$Iterable*) args4425));
        a$Iter4539 = $tmp4543;
        $l4544:;
        ITable* $tmp4546 = a$Iter4539->$class->itable;
        while ($tmp4546->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4546 = $tmp4546->next;
        }
        $fn4548 $tmp4547 = $tmp4546->methods[0];
        panda$core$Bit $tmp4549 = $tmp4547(a$Iter4539);
        panda$core$Bit $tmp4550 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4549);
        if (!$tmp4550.value) goto $l4545;
        {
            ITable* $tmp4552 = a$Iter4539->$class->itable;
            while ($tmp4552->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4552 = $tmp4552->next;
            }
            $fn4554 $tmp4553 = $tmp4552->methods[1];
            panda$core$Object* $tmp4555 = $tmp4553(a$Iter4539);
            a4551 = ((panda$core$String*) $tmp4555);
            (($fn4556) p_out->$class->vtable[16])(p_out, separator4490);
            (($fn4557) p_out->$class->vtable[16])(p_out, a4551);
            separator4490 = &$s4558;
        }
        goto $l4544;
        $l4545:;
    }
    (($fn4560) p_out->$class->vtable[19])(p_out, &$s4559);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* test4572;
    panda$core$String* testBit4575;
    panda$core$String* ifTrue4584;
    panda$core$String* ifFalse4586;
    panda$core$String* end4600;
    panda$core$Bit $tmp4561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4561.value);
    panda$core$Int64 $tmp4563 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4563, ((panda$core$Int64) { 2 }));
    bool $tmp4562 = $tmp4564.value;
    if ($tmp4562) goto $l4565;
    panda$core$Int64 $tmp4566 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4566, ((panda$core$Int64) { 3 }));
    $tmp4562 = $tmp4567.value;
    $l4565:;
    panda$core$Bit $tmp4568 = { $tmp4562 };
    PANDA_ASSERT($tmp4568.value);
    panda$core$Object* $tmp4569 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4570 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4571 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4569)->type, $tmp4570);
    PANDA_ASSERT($tmp4571.value);
    panda$core$Object* $tmp4573 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4574 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4573), p_out);
    test4572 = $tmp4574;
    panda$core$String* $tmp4576 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4575 = $tmp4576;
    panda$core$String* $tmp4577 = panda$core$String$convert$R$panda$core$String(testBit4575);
    panda$core$String* $tmp4579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4577, &$s4578);
    panda$core$String* $tmp4580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4579, test4572);
    panda$core$String* $tmp4582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4580, &$s4581);
    (($fn4583) p_out->$class->vtable[19])(p_out, $tmp4582);
    panda$core$String* $tmp4585 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4584 = $tmp4585;
    panda$core$String* $tmp4587 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4586 = $tmp4587;
    panda$core$String* $tmp4589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4588, testBit4575);
    panda$core$String* $tmp4591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4589, &$s4590);
    panda$core$String* $tmp4592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4591, ifTrue4584);
    panda$core$String* $tmp4594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4592, &$s4593);
    panda$core$String* $tmp4595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4594, ifFalse4586);
    panda$core$String* $tmp4597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4595, &$s4596);
    (($fn4598) p_out->$class->vtable[19])(p_out, $tmp4597);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue4584, p_out);
    panda$core$Object* $tmp4599 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4599), p_out);
    panda$core$Int64 $tmp4601 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4601, ((panda$core$Int64) { 3 }));
    if ($tmp4602.value) {
    {
        panda$core$String* $tmp4603 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4600 = $tmp4603;
    }
    }
    else {
    {
        end4600 = ifFalse4586;
    }
    }
    panda$core$Object* $tmp4604 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4605 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4604));
    panda$core$Bit $tmp4606 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4605);
    if ($tmp4606.value) {
    {
        panda$core$String* $tmp4608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4607, end4600);
        panda$core$String* $tmp4610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4608, &$s4609);
        (($fn4611) p_out->$class->vtable[19])(p_out, $tmp4610);
    }
    }
    panda$core$Int64 $tmp4612 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4612, ((panda$core$Int64) { 3 }));
    if ($tmp4613.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse4586, p_out);
        panda$core$Object* $tmp4614 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4614), p_out);
        panda$core$Object* $tmp4615 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4616 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4615));
        panda$core$Bit $tmp4617 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4616);
        if ($tmp4617.value) {
        {
            panda$core$String* $tmp4619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4618, end4600);
            panda$core$String* $tmp4621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4619, &$s4620);
            (($fn4622) p_out->$class->vtable[19])(p_out, $tmp4621);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end4600, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4626;
    panda$core$String* range4637;
    org$pandalanguage$pandac$IRNode* block4640;
    org$pandalanguage$pandac$Type* t4642;
    panda$core$String* llt4645;
    panda$core$String* indexType4647;
    org$pandalanguage$pandac$ClassDecl* cl4653;
    panda$core$String* numberType4661;
    panda$core$String* index4669;
    panda$core$String* start4678;
    panda$core$String* indexValuePtr4687;
    panda$core$String* end4718;
    panda$core$String* inclusive4727;
    panda$core$String* loopStart4736;
    panda$core$String* loopBody4738;
    panda$core$String* loopEnd4740;
    panda$core$String* loopTest4742;
    panda$core$String* forwardEntry4746;
    panda$core$String* backwardEntry4748;
    panda$core$String* signPrefix4750;
    panda$core$String* forwardEntryInclusive4762;
    panda$core$String* forwardEntryExclusive4764;
    panda$core$String* forwardEntryInclusiveTest4779;
    panda$core$String* forwardEntryExclusiveTest4809;
    panda$core$String* indexValue4839;
    panda$core$String* loopInc4861;
    panda$core$String* forwardDelta4863;
    panda$core$String* forwardInclusiveLabel4878;
    panda$core$String* forwardExclusiveLabel4880;
    panda$core$String* forwardInclusiveTest4891;
    panda$core$String* forwardExclusiveTest4914;
    panda$core$String* inc4937;
    panda$core$String* incStruct4949;
    panda$core$Bit $tmp4623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4623.value);
    panda$core$Int64 $tmp4624 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4624, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4625.value);
    panda$core$Object* $tmp4627 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4626 = ((org$pandalanguage$pandac$IRNode*) $tmp4627);
    panda$core$Object* $tmp4628 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4628)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4629.value);
    panda$core$Object* $tmp4630 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4631 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4630)->type->subtypes);
    panda$core$Bit $tmp4632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4631, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4632.value);
    panda$core$Object* $tmp4633 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4634 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4633)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4636 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4634))->name, &$s4635);
    PANDA_ASSERT($tmp4636.value);
    panda$core$Object* $tmp4638 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4639 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4638), p_out);
    range4637 = $tmp4639;
    panda$core$Object* $tmp4641 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4640 = ((org$pandalanguage$pandac$IRNode*) $tmp4641);
    panda$core$Object* $tmp4643 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4644 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4643)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4642 = ((org$pandalanguage$pandac$Type*) $tmp4644);
    panda$core$String* $tmp4646 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4642);
    llt4645 = $tmp4646;
    panda$core$Bit $tmp4648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4642->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4648.value) {
    {
        panda$core$Int64 $tmp4649 = panda$collections$Array$get_count$R$panda$core$Int64(t4642->subtypes);
        panda$core$Bit $tmp4650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4649, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4650.value);
        panda$core$Object* $tmp4651 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4642->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4652 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4651));
        indexType4647 = $tmp4652;
    }
    }
    else {
    {
        indexType4647 = llt4645;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4654 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4642);
    cl4653 = $tmp4654;
    PANDA_ASSERT(((panda$core$Bit) { cl4653 != NULL }).value);
    panda$collections$ListView* $tmp4655 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4653);
    ITable* $tmp4656 = ((panda$collections$CollectionView*) $tmp4655)->$class->itable;
    while ($tmp4656->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4656 = $tmp4656->next;
    }
    $fn4658 $tmp4657 = $tmp4656->methods[0];
    panda$core$Int64 $tmp4659 = $tmp4657(((panda$collections$CollectionView*) $tmp4655));
    panda$core$Bit $tmp4660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4659, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4660.value);
    panda$collections$ListView* $tmp4662 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4653);
    ITable* $tmp4663 = $tmp4662->$class->itable;
    while ($tmp4663->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4663 = $tmp4663->next;
    }
    $fn4665 $tmp4664 = $tmp4663->methods[0];
    panda$core$Object* $tmp4666 = $tmp4664($tmp4662, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4667 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4666)->type);
    numberType4661 = $tmp4667;
    panda$core$Bit $tmp4668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4626->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4668.value);
    panda$core$String* $tmp4670 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4626->payload));
    index4669 = $tmp4670;
    panda$core$String* $tmp4671 = panda$core$String$convert$R$panda$core$String(index4669);
    panda$core$String* $tmp4673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4671, &$s4672);
    panda$core$String* $tmp4674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4673, indexType4647);
    panda$core$String* $tmp4676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4674, &$s4675);
    (($fn4677) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4676);
    panda$core$String* $tmp4679 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4678 = $tmp4679;
    panda$core$String* $tmp4680 = panda$core$String$convert$R$panda$core$String(start4678);
    panda$core$String* $tmp4682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4680, &$s4681);
    panda$core$String* $tmp4683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4682, range4637);
    panda$core$String* $tmp4685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4683, &$s4684);
    (($fn4686) p_out->$class->vtable[19])(p_out, $tmp4685);
    panda$core$String* $tmp4688 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4687 = $tmp4688;
    panda$core$String* $tmp4689 = panda$core$String$convert$R$panda$core$String(indexValuePtr4687);
    panda$core$String* $tmp4691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4689, &$s4690);
    panda$core$String* $tmp4692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4691, indexType4647);
    panda$core$String* $tmp4694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4692, &$s4693);
    panda$core$String* $tmp4695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4694, indexType4647);
    panda$core$String* $tmp4697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4695, &$s4696);
    panda$core$String* $tmp4698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4697, index4669);
    panda$core$String* $tmp4700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4698, &$s4699);
    panda$core$String* $tmp4702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4700, &$s4701);
    (($fn4703) p_out->$class->vtable[19])(p_out, $tmp4702);
    panda$core$String* $tmp4705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4704, numberType4661);
    panda$core$String* $tmp4707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4705, &$s4706);
    panda$core$String* $tmp4708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4707, start4678);
    panda$core$String* $tmp4710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4708, &$s4709);
    panda$core$String* $tmp4711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4710, numberType4661);
    panda$core$String* $tmp4713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4711, &$s4712);
    panda$core$String* $tmp4714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4713, indexValuePtr4687);
    panda$core$String* $tmp4716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4714, &$s4715);
    (($fn4717) p_out->$class->vtable[19])(p_out, $tmp4716);
    panda$core$String* $tmp4719 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4718 = $tmp4719;
    panda$core$String* $tmp4720 = panda$core$String$convert$R$panda$core$String(end4718);
    panda$core$String* $tmp4722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4720, &$s4721);
    panda$core$String* $tmp4723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4722, range4637);
    panda$core$String* $tmp4725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4723, &$s4724);
    (($fn4726) p_out->$class->vtable[19])(p_out, $tmp4725);
    panda$core$String* $tmp4728 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4727 = $tmp4728;
    panda$core$String* $tmp4729 = panda$core$String$convert$R$panda$core$String(inclusive4727);
    panda$core$String* $tmp4731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4729, &$s4730);
    panda$core$String* $tmp4732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4731, range4637);
    panda$core$String* $tmp4734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4732, &$s4733);
    (($fn4735) p_out->$class->vtable[19])(p_out, $tmp4734);
    panda$core$String* $tmp4737 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4736 = $tmp4737;
    panda$core$String* $tmp4739 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4738 = $tmp4739;
    panda$core$String* $tmp4741 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4740 = $tmp4741;
    panda$core$String* $tmp4743 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4742 = $tmp4743;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4744 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4744->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4744->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4744, ((panda$core$String*) p_f->payload), loopEnd4740, loopTest4742);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4744));
    panda$core$String* $tmp4747 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4746 = $tmp4747;
    panda$core$String* $tmp4749 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4748 = $tmp4749;
    panda$core$Bit $tmp4752 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4642)->name, &$s4751);
    if ($tmp4752.value) {
    {
        signPrefix4750 = &$s4753;
    }
    }
    else {
    {
        panda$core$Bit $tmp4756 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4642)->name, &$s4755);
        bool $tmp4754 = $tmp4756.value;
        if ($tmp4754) goto $l4757;
        panda$core$Bit $tmp4759 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4642)->name, &$s4758);
        $tmp4754 = $tmp4759.value;
        $l4757:;
        panda$core$Bit $tmp4760 = { $tmp4754 };
        PANDA_ASSERT($tmp4760.value);
        signPrefix4750 = &$s4761;
    }
    }
    panda$core$String* $tmp4763 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4762 = $tmp4763;
    panda$core$String* $tmp4765 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4764 = $tmp4765;
    panda$core$String* $tmp4767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4766, inclusive4727);
    panda$core$String* $tmp4769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4767, &$s4768);
    panda$core$String* $tmp4770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4769, forwardEntryInclusive4762);
    panda$core$String* $tmp4772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4770, &$s4771);
    panda$core$String* $tmp4774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4773, forwardEntryExclusive4764);
    panda$core$String* $tmp4776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4774, &$s4775);
    panda$core$String* $tmp4777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4772, $tmp4776);
    (($fn4778) p_out->$class->vtable[19])(p_out, $tmp4777);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive4762, p_out);
    panda$core$String* $tmp4780 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4779 = $tmp4780;
    panda$core$String* $tmp4781 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4779);
    panda$core$String* $tmp4783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4781, &$s4782);
    panda$core$String* $tmp4784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4783, signPrefix4750);
    panda$core$String* $tmp4786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4784, &$s4785);
    panda$core$String* $tmp4787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4786, numberType4661);
    panda$core$String* $tmp4789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4787, &$s4788);
    panda$core$String* $tmp4790 = panda$core$String$convert$R$panda$core$String(start4678);
    panda$core$String* $tmp4792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4790, &$s4791);
    panda$core$String* $tmp4793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4792, end4718);
    panda$core$String* $tmp4795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4793, &$s4794);
    panda$core$String* $tmp4796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4789, $tmp4795);
    (($fn4797) p_out->$class->vtable[19])(p_out, $tmp4796);
    panda$core$String* $tmp4799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4798, forwardEntryInclusiveTest4779);
    panda$core$String* $tmp4801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4799, &$s4800);
    panda$core$String* $tmp4802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4801, loopStart4736);
    panda$core$String* $tmp4804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4802, &$s4803);
    panda$core$String* $tmp4805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4804, loopEnd4740);
    panda$core$String* $tmp4807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4805, &$s4806);
    (($fn4808) p_out->$class->vtable[19])(p_out, $tmp4807);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive4764, p_out);
    panda$core$String* $tmp4810 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4809 = $tmp4810;
    panda$core$String* $tmp4811 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4809);
    panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4811, &$s4812);
    panda$core$String* $tmp4814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4813, signPrefix4750);
    panda$core$String* $tmp4816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, &$s4815);
    panda$core$String* $tmp4817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4816, numberType4661);
    panda$core$String* $tmp4819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4817, &$s4818);
    panda$core$String* $tmp4820 = panda$core$String$convert$R$panda$core$String(start4678);
    panda$core$String* $tmp4822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4820, &$s4821);
    panda$core$String* $tmp4823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4822, end4718);
    panda$core$String* $tmp4825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4823, &$s4824);
    panda$core$String* $tmp4826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4819, $tmp4825);
    (($fn4827) p_out->$class->vtable[19])(p_out, $tmp4826);
    panda$core$String* $tmp4829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4828, forwardEntryExclusiveTest4809);
    panda$core$String* $tmp4831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4829, &$s4830);
    panda$core$String* $tmp4832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4831, loopStart4736);
    panda$core$String* $tmp4834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4832, &$s4833);
    panda$core$String* $tmp4835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4834, loopEnd4740);
    panda$core$String* $tmp4837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4835, &$s4836);
    (($fn4838) p_out->$class->vtable[19])(p_out, $tmp4837);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart4736, p_out);
    panda$core$String* $tmp4840 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4839 = $tmp4840;
    panda$core$String* $tmp4841 = panda$core$String$convert$R$panda$core$String(indexValue4839);
    panda$core$String* $tmp4843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4841, &$s4842);
    panda$core$String* $tmp4844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4843, numberType4661);
    panda$core$String* $tmp4846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4844, &$s4845);
    panda$core$String* $tmp4847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4846, numberType4661);
    panda$core$String* $tmp4849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4847, &$s4848);
    panda$core$String* $tmp4850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4849, indexValuePtr4687);
    panda$core$String* $tmp4852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4850, &$s4851);
    (($fn4853) p_out->$class->vtable[19])(p_out, $tmp4852);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block4640, p_out);
    panda$core$Bit $tmp4854 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4640);
    panda$core$Bit $tmp4855 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4854);
    if ($tmp4855.value) {
    {
        panda$core$String* $tmp4857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4856, loopTest4742);
        panda$core$String* $tmp4859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4857, &$s4858);
        (($fn4860) p_out->$class->vtable[19])(p_out, $tmp4859);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest4742, p_out);
    panda$core$String* $tmp4862 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc4861 = $tmp4862;
    panda$core$String* $tmp4864 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta4863 = $tmp4864;
    panda$core$String* $tmp4865 = panda$core$String$convert$R$panda$core$String(forwardDelta4863);
    panda$core$String* $tmp4867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4865, &$s4866);
    panda$core$String* $tmp4868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4867, numberType4661);
    panda$core$String* $tmp4870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4868, &$s4869);
    panda$core$String* $tmp4871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4870, end4718);
    panda$core$String* $tmp4873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4871, &$s4872);
    panda$core$String* $tmp4874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4873, indexValue4839);
    panda$core$String* $tmp4876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4874, &$s4875);
    (($fn4877) p_out->$class->vtable[19])(p_out, $tmp4876);
    panda$core$String* $tmp4879 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel4878 = $tmp4879;
    panda$core$String* $tmp4881 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel4880 = $tmp4881;
    panda$core$String* $tmp4883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4882, inclusive4727);
    panda$core$String* $tmp4885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4883, &$s4884);
    panda$core$String* $tmp4886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4885, forwardInclusiveLabel4878);
    panda$core$String* $tmp4888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4886, &$s4887);
    panda$core$String* $tmp4889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4888, forwardExclusiveLabel4880);
    (($fn4890) p_out->$class->vtable[19])(p_out, $tmp4889);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel4878, p_out);
    panda$core$String* $tmp4892 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest4891 = $tmp4892;
    panda$core$String* $tmp4893 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest4891);
    panda$core$String* $tmp4895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4893, &$s4894);
    panda$core$String* $tmp4896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4895, numberType4661);
    panda$core$String* $tmp4898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4896, &$s4897);
    panda$core$String* $tmp4899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4898, forwardDelta4863);
    panda$core$String* $tmp4901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4899, &$s4900);
    (($fn4902) p_out->$class->vtable[19])(p_out, $tmp4901);
    panda$core$String* $tmp4904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4903, forwardInclusiveTest4891);
    panda$core$String* $tmp4906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4904, &$s4905);
    panda$core$String* $tmp4907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4906, loopInc4861);
    panda$core$String* $tmp4909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4907, &$s4908);
    panda$core$String* $tmp4910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4909, loopEnd4740);
    panda$core$String* $tmp4912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4910, &$s4911);
    (($fn4913) p_out->$class->vtable[19])(p_out, $tmp4912);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel4880, p_out);
    panda$core$String* $tmp4915 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest4914 = $tmp4915;
    panda$core$String* $tmp4916 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest4914);
    panda$core$String* $tmp4918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4916, &$s4917);
    panda$core$String* $tmp4919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4918, numberType4661);
    panda$core$String* $tmp4921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4919, &$s4920);
    panda$core$String* $tmp4922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4921, forwardDelta4863);
    panda$core$String* $tmp4924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4922, &$s4923);
    (($fn4925) p_out->$class->vtable[19])(p_out, $tmp4924);
    panda$core$String* $tmp4927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4926, forwardExclusiveTest4914);
    panda$core$String* $tmp4929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4927, &$s4928);
    panda$core$String* $tmp4930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4929, loopInc4861);
    panda$core$String* $tmp4932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4930, &$s4931);
    panda$core$String* $tmp4933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4932, loopEnd4740);
    panda$core$String* $tmp4935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4933, &$s4934);
    (($fn4936) p_out->$class->vtable[19])(p_out, $tmp4935);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc4861, p_out);
    panda$core$String* $tmp4938 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc4937 = $tmp4938;
    panda$core$String* $tmp4939 = panda$core$String$convert$R$panda$core$String(inc4937);
    panda$core$String* $tmp4941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4939, &$s4940);
    panda$core$String* $tmp4942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4941, numberType4661);
    panda$core$String* $tmp4944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4942, &$s4943);
    panda$core$String* $tmp4945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4944, indexValue4839);
    panda$core$String* $tmp4947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4945, &$s4946);
    (($fn4948) p_out->$class->vtable[19])(p_out, $tmp4947);
    panda$core$String* $tmp4950 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct4949 = $tmp4950;
    panda$core$String* $tmp4951 = panda$core$String$convert$R$panda$core$String(incStruct4949);
    panda$core$String* $tmp4953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4951, &$s4952);
    panda$core$String* $tmp4954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4953, indexType4647);
    panda$core$String* $tmp4956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4954, &$s4955);
    panda$core$String* $tmp4957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4956, numberType4661);
    panda$core$String* $tmp4959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4957, &$s4958);
    (($fn4960) p_out->$class->vtable[19])(p_out, $tmp4959);
    panda$core$String* $tmp4962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4961, numberType4661);
    panda$core$String* $tmp4964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4962, &$s4963);
    panda$core$String* $tmp4965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4964, inc4937);
    panda$core$String* $tmp4967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4965, &$s4966);
    (($fn4968) p_out->$class->vtable[19])(p_out, $tmp4967);
    panda$core$String* $tmp4970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4969, indexType4647);
    panda$core$String* $tmp4972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4970, &$s4971);
    panda$core$String* $tmp4973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4972, incStruct4949);
    panda$core$String* $tmp4975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4973, &$s4974);
    panda$core$String* $tmp4976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4975, indexType4647);
    panda$core$String* $tmp4978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4976, &$s4977);
    panda$core$String* $tmp4979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4978, index4669);
    panda$core$String* $tmp4981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4979, &$s4980);
    (($fn4982) p_out->$class->vtable[19])(p_out, $tmp4981);
    panda$core$String* $tmp4984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4983, loopStart4736);
    panda$core$String* $tmp4986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4984, &$s4985);
    (($fn4987) p_out->$class->vtable[19])(p_out, $tmp4986);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd4740, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4991;
    panda$core$String* range5002;
    org$pandalanguage$pandac$IRNode* block5005;
    org$pandalanguage$pandac$Type* t5007;
    panda$core$String* llt5010;
    panda$core$String* indexType5012;
    org$pandalanguage$pandac$ClassDecl* cl5018;
    panda$core$String* numberType5026;
    panda$core$String* index5034;
    panda$core$String* start5043;
    panda$core$String* indexValuePtr5052;
    panda$core$String* end5083;
    panda$core$String* rawStep5092;
    panda$core$String* step5101;
    panda$core$String* inclusive5115;
    panda$core$String* loopStart5124;
    panda$core$String* loopBody5126;
    panda$core$String* loopEnd5128;
    panda$core$String* loopTest5130;
    panda$core$String* forwardEntry5134;
    panda$core$String* backwardEntry5136;
    panda$core$String* signPrefix5138;
    panda$core$String* direction5150;
    panda$core$String* forwardEntryInclusive5176;
    panda$core$String* forwardEntryExclusive5178;
    panda$core$String* forwardEntryInclusiveTest5193;
    panda$core$String* forwardEntryExclusiveTest5223;
    panda$core$String* backwardEntryInclusive5253;
    panda$core$String* backwardEntryExclusive5255;
    panda$core$String* backwardEntryInclusiveTest5270;
    panda$core$String* backwardEntryExclusiveTest5300;
    panda$core$String* indexValue5330;
    panda$core$String* loopInc5352;
    panda$core$String* forwardLabel5354;
    panda$core$String* backwardLabel5356;
    panda$core$String* forwardDelta5369;
    panda$core$String* forwardInclusiveLabel5384;
    panda$core$String* forwardExclusiveLabel5386;
    panda$core$String* forwardInclusiveTest5397;
    panda$core$String* forwardExclusiveTest5423;
    panda$core$String* backwardDelta5449;
    panda$core$String* negStep5464;
    panda$core$String* backwardInclusiveLabel5476;
    panda$core$String* backwardExclusiveLabel5478;
    panda$core$String* backwardInclusiveTest5489;
    panda$core$String* backwardExclusiveTest5513;
    panda$core$String* inc5537;
    panda$core$String* incStruct5552;
    panda$core$Bit $tmp4988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4988.value);
    panda$core$Int64 $tmp4989 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4989, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4990.value);
    panda$core$Object* $tmp4992 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4991 = ((org$pandalanguage$pandac$IRNode*) $tmp4992);
    panda$core$Object* $tmp4993 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4993)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4994.value);
    panda$core$Object* $tmp4995 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4996 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4995)->type->subtypes);
    panda$core$Bit $tmp4997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4996, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4997.value);
    panda$core$Object* $tmp4998 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4999 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4998)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5001 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4999))->name, &$s5000);
    PANDA_ASSERT($tmp5001.value);
    panda$core$Object* $tmp5003 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5004 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5003), p_out);
    range5002 = $tmp5004;
    panda$core$Object* $tmp5006 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block5005 = ((org$pandalanguage$pandac$IRNode*) $tmp5006);
    panda$core$Object* $tmp5008 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5009 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp5008)->type->subtypes, ((panda$core$Int64) { 1 }));
    t5007 = ((org$pandalanguage$pandac$Type*) $tmp5009);
    panda$core$String* $tmp5011 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t5007);
    llt5010 = $tmp5011;
    panda$core$Bit $tmp5013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t5007->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp5013.value) {
    {
        panda$core$Int64 $tmp5014 = panda$collections$Array$get_count$R$panda$core$Int64(t5007->subtypes);
        panda$core$Bit $tmp5015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5014, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp5015.value);
        panda$core$Object* $tmp5016 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t5007->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp5017 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp5016));
        indexType5012 = $tmp5017;
    }
    }
    else {
    {
        indexType5012 = llt5010;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp5019 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t5007);
    cl5018 = $tmp5019;
    PANDA_ASSERT(((panda$core$Bit) { cl5018 != NULL }).value);
    panda$collections$ListView* $tmp5020 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5018);
    ITable* $tmp5021 = ((panda$collections$CollectionView*) $tmp5020)->$class->itable;
    while ($tmp5021->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp5021 = $tmp5021->next;
    }
    $fn5023 $tmp5022 = $tmp5021->methods[0];
    panda$core$Int64 $tmp5024 = $tmp5022(((panda$collections$CollectionView*) $tmp5020));
    panda$core$Bit $tmp5025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5024, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5025.value);
    panda$collections$ListView* $tmp5027 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5018);
    ITable* $tmp5028 = $tmp5027->$class->itable;
    while ($tmp5028->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp5028 = $tmp5028->next;
    }
    $fn5030 $tmp5029 = $tmp5028->methods[0];
    panda$core$Object* $tmp5031 = $tmp5029($tmp5027, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5032 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp5031)->type);
    numberType5026 = $tmp5032;
    panda$core$Bit $tmp5033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4991->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp5033.value);
    panda$core$String* $tmp5035 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4991->payload));
    index5034 = $tmp5035;
    panda$core$String* $tmp5036 = panda$core$String$convert$R$panda$core$String(index5034);
    panda$core$String* $tmp5038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5036, &$s5037);
    panda$core$String* $tmp5039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5038, indexType5012);
    panda$core$String* $tmp5041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5039, &$s5040);
    (($fn5042) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5041);
    panda$core$String* $tmp5044 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start5043 = $tmp5044;
    panda$core$String* $tmp5045 = panda$core$String$convert$R$panda$core$String(start5043);
    panda$core$String* $tmp5047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5045, &$s5046);
    panda$core$String* $tmp5048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5047, range5002);
    panda$core$String* $tmp5050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5048, &$s5049);
    (($fn5051) p_out->$class->vtable[19])(p_out, $tmp5050);
    panda$core$String* $tmp5053 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr5052 = $tmp5053;
    panda$core$String* $tmp5054 = panda$core$String$convert$R$panda$core$String(indexValuePtr5052);
    panda$core$String* $tmp5056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5054, &$s5055);
    panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5056, indexType5012);
    panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5057, &$s5058);
    panda$core$String* $tmp5060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5059, indexType5012);
    panda$core$String* $tmp5062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5060, &$s5061);
    panda$core$String* $tmp5063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5062, index5034);
    panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5063, &$s5064);
    panda$core$String* $tmp5067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5065, &$s5066);
    (($fn5068) p_out->$class->vtable[19])(p_out, $tmp5067);
    panda$core$String* $tmp5070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5069, numberType5026);
    panda$core$String* $tmp5072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5070, &$s5071);
    panda$core$String* $tmp5073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5072, start5043);
    panda$core$String* $tmp5075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5073, &$s5074);
    panda$core$String* $tmp5076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5075, numberType5026);
    panda$core$String* $tmp5078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5076, &$s5077);
    panda$core$String* $tmp5079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5078, indexValuePtr5052);
    panda$core$String* $tmp5081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5079, &$s5080);
    (($fn5082) p_out->$class->vtable[19])(p_out, $tmp5081);
    panda$core$String* $tmp5084 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end5083 = $tmp5084;
    panda$core$String* $tmp5085 = panda$core$String$convert$R$panda$core$String(end5083);
    panda$core$String* $tmp5087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5085, &$s5086);
    panda$core$String* $tmp5088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5087, range5002);
    panda$core$String* $tmp5090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5088, &$s5089);
    (($fn5091) p_out->$class->vtable[19])(p_out, $tmp5090);
    panda$core$String* $tmp5093 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep5092 = $tmp5093;
    panda$core$String* $tmp5094 = panda$core$String$convert$R$panda$core$String(rawStep5092);
    panda$core$String* $tmp5096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5094, &$s5095);
    panda$core$String* $tmp5097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5096, range5002);
    panda$core$String* $tmp5099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5097, &$s5098);
    (($fn5100) p_out->$class->vtable[19])(p_out, $tmp5099);
    panda$core$Bit $tmp5103 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType5026, &$s5102);
    if ($tmp5103.value) {
    {
        panda$core$String* $tmp5104 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step5101 = $tmp5104;
        panda$core$String* $tmp5105 = panda$core$String$convert$R$panda$core$String(step5101);
        panda$core$String* $tmp5107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5105, &$s5106);
        panda$core$String* $tmp5108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5107, rawStep5092);
        panda$core$String* $tmp5110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5108, &$s5109);
        panda$core$String* $tmp5111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5110, numberType5026);
        panda$core$String* $tmp5113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5111, &$s5112);
        (($fn5114) p_out->$class->vtable[19])(p_out, $tmp5113);
    }
    }
    else {
    {
        step5101 = rawStep5092;
    }
    }
    panda$core$String* $tmp5116 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive5115 = $tmp5116;
    panda$core$String* $tmp5117 = panda$core$String$convert$R$panda$core$String(inclusive5115);
    panda$core$String* $tmp5119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5117, &$s5118);
    panda$core$String* $tmp5120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5119, range5002);
    panda$core$String* $tmp5122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5120, &$s5121);
    (($fn5123) p_out->$class->vtable[19])(p_out, $tmp5122);
    panda$core$String* $tmp5125 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5124 = $tmp5125;
    panda$core$String* $tmp5127 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5126 = $tmp5127;
    panda$core$String* $tmp5129 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5128 = $tmp5129;
    panda$core$String* $tmp5131 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest5130 = $tmp5131;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5132 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5132->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5132->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5132, ((panda$core$String*) p_f->payload), loopEnd5128, loopTest5130);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5132));
    panda$core$String* $tmp5135 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry5134 = $tmp5135;
    panda$core$String* $tmp5137 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry5136 = $tmp5137;
    panda$core$Bit $tmp5140 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t5007)->name, &$s5139);
    if ($tmp5140.value) {
    {
        signPrefix5138 = &$s5141;
    }
    }
    else {
    {
        panda$core$Bit $tmp5144 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t5007)->name, &$s5143);
        bool $tmp5142 = $tmp5144.value;
        if ($tmp5142) goto $l5145;
        panda$core$Bit $tmp5147 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t5007)->name, &$s5146);
        $tmp5142 = $tmp5147.value;
        $l5145:;
        panda$core$Bit $tmp5148 = { $tmp5142 };
        PANDA_ASSERT($tmp5148.value);
        signPrefix5138 = &$s5149;
    }
    }
    panda$core$Bit $tmp5152 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix5138, &$s5151);
    if ($tmp5152.value) {
    {
        panda$core$String* $tmp5153 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction5150 = $tmp5153;
        panda$core$String* $tmp5154 = panda$core$String$convert$R$panda$core$String(direction5150);
        panda$core$String* $tmp5156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5154, &$s5155);
        panda$core$String* $tmp5157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5156, numberType5026);
        panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5157, &$s5158);
        panda$core$String* $tmp5160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, step5101);
        panda$core$String* $tmp5162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5160, &$s5161);
        (($fn5163) p_out->$class->vtable[19])(p_out, $tmp5162);
    }
    }
    else {
    {
        direction5150 = &$s5164;
    }
    }
    panda$core$String* $tmp5166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5165, direction5150);
    panda$core$String* $tmp5168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5166, &$s5167);
    panda$core$String* $tmp5169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5168, forwardEntry5134);
    panda$core$String* $tmp5171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5169, &$s5170);
    panda$core$String* $tmp5172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5171, backwardEntry5136);
    panda$core$String* $tmp5174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5172, &$s5173);
    (($fn5175) p_out->$class->vtable[19])(p_out, $tmp5174);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntry5134, p_out);
    panda$core$String* $tmp5177 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive5176 = $tmp5177;
    panda$core$String* $tmp5179 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive5178 = $tmp5179;
    panda$core$String* $tmp5181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5180, inclusive5115);
    panda$core$String* $tmp5183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5181, &$s5182);
    panda$core$String* $tmp5184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5183, forwardEntryInclusive5176);
    panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5184, &$s5185);
    panda$core$String* $tmp5188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5187, forwardEntryExclusive5178);
    panda$core$String* $tmp5190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5188, &$s5189);
    panda$core$String* $tmp5191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5186, $tmp5190);
    (($fn5192) p_out->$class->vtable[19])(p_out, $tmp5191);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive5176, p_out);
    panda$core$String* $tmp5194 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest5193 = $tmp5194;
    panda$core$String* $tmp5195 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest5193);
    panda$core$String* $tmp5197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, &$s5196);
    panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5197, signPrefix5138);
    panda$core$String* $tmp5200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5198, &$s5199);
    panda$core$String* $tmp5201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5200, numberType5026);
    panda$core$String* $tmp5203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5201, &$s5202);
    panda$core$String* $tmp5204 = panda$core$String$convert$R$panda$core$String(start5043);
    panda$core$String* $tmp5206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5204, &$s5205);
    panda$core$String* $tmp5207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5206, end5083);
    panda$core$String* $tmp5209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5207, &$s5208);
    panda$core$String* $tmp5210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5203, $tmp5209);
    (($fn5211) p_out->$class->vtable[19])(p_out, $tmp5210);
    panda$core$String* $tmp5213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5212, forwardEntryInclusiveTest5193);
    panda$core$String* $tmp5215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5213, &$s5214);
    panda$core$String* $tmp5216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5215, loopStart5124);
    panda$core$String* $tmp5218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5216, &$s5217);
    panda$core$String* $tmp5219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5218, loopEnd5128);
    panda$core$String* $tmp5221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5219, &$s5220);
    (($fn5222) p_out->$class->vtable[19])(p_out, $tmp5221);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive5178, p_out);
    panda$core$String* $tmp5224 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest5223 = $tmp5224;
    panda$core$String* $tmp5225 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest5223);
    panda$core$String* $tmp5227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5225, &$s5226);
    panda$core$String* $tmp5228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5227, signPrefix5138);
    panda$core$String* $tmp5230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5228, &$s5229);
    panda$core$String* $tmp5231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5230, numberType5026);
    panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5231, &$s5232);
    panda$core$String* $tmp5234 = panda$core$String$convert$R$panda$core$String(start5043);
    panda$core$String* $tmp5236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5234, &$s5235);
    panda$core$String* $tmp5237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5236, end5083);
    panda$core$String* $tmp5239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5237, &$s5238);
    panda$core$String* $tmp5240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5233, $tmp5239);
    (($fn5241) p_out->$class->vtable[19])(p_out, $tmp5240);
    panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5242, forwardEntryExclusiveTest5223);
    panda$core$String* $tmp5245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5243, &$s5244);
    panda$core$String* $tmp5246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5245, loopStart5124);
    panda$core$String* $tmp5248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5246, &$s5247);
    panda$core$String* $tmp5249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5248, loopEnd5128);
    panda$core$String* $tmp5251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5249, &$s5250);
    (($fn5252) p_out->$class->vtable[19])(p_out, $tmp5251);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntry5136, p_out);
    panda$core$String* $tmp5254 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive5253 = $tmp5254;
    panda$core$String* $tmp5256 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive5255 = $tmp5256;
    panda$core$String* $tmp5258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5257, inclusive5115);
    panda$core$String* $tmp5260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5258, &$s5259);
    panda$core$String* $tmp5261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5260, backwardEntryInclusive5253);
    panda$core$String* $tmp5263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5261, &$s5262);
    panda$core$String* $tmp5265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5264, backwardEntryExclusive5255);
    panda$core$String* $tmp5267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5265, &$s5266);
    panda$core$String* $tmp5268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5263, $tmp5267);
    (($fn5269) p_out->$class->vtable[19])(p_out, $tmp5268);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryInclusive5253, p_out);
    panda$core$String* $tmp5271 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5270 = $tmp5271;
    panda$core$String* $tmp5272 = panda$core$String$convert$R$panda$core$String(backwardEntryInclusiveTest5270);
    panda$core$String* $tmp5274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5272, &$s5273);
    panda$core$String* $tmp5275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5274, signPrefix5138);
    panda$core$String* $tmp5277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5275, &$s5276);
    panda$core$String* $tmp5278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5277, numberType5026);
    panda$core$String* $tmp5280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5278, &$s5279);
    panda$core$String* $tmp5281 = panda$core$String$convert$R$panda$core$String(start5043);
    panda$core$String* $tmp5283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5281, &$s5282);
    panda$core$String* $tmp5284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5283, end5083);
    panda$core$String* $tmp5286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5284, &$s5285);
    panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5280, $tmp5286);
    (($fn5288) p_out->$class->vtable[19])(p_out, $tmp5287);
    panda$core$String* $tmp5290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5289, backwardEntryInclusiveTest5270);
    panda$core$String* $tmp5292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5290, &$s5291);
    panda$core$String* $tmp5293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5292, loopStart5124);
    panda$core$String* $tmp5295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5293, &$s5294);
    panda$core$String* $tmp5296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5295, loopEnd5128);
    panda$core$String* $tmp5298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5296, &$s5297);
    (($fn5299) p_out->$class->vtable[19])(p_out, $tmp5298);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryExclusive5255, p_out);
    panda$core$String* $tmp5301 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5300 = $tmp5301;
    panda$core$String* $tmp5302 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusiveTest5300);
    panda$core$String* $tmp5304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5302, &$s5303);
    panda$core$String* $tmp5305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5304, signPrefix5138);
    panda$core$String* $tmp5307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5305, &$s5306);
    panda$core$String* $tmp5308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5307, numberType5026);
    panda$core$String* $tmp5310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5308, &$s5309);
    panda$core$String* $tmp5311 = panda$core$String$convert$R$panda$core$String(start5043);
    panda$core$String* $tmp5313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5311, &$s5312);
    panda$core$String* $tmp5314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5313, end5083);
    panda$core$String* $tmp5316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5314, &$s5315);
    panda$core$String* $tmp5317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5310, $tmp5316);
    (($fn5318) p_out->$class->vtable[19])(p_out, $tmp5317);
    panda$core$String* $tmp5320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5319, backwardEntryExclusiveTest5300);
    panda$core$String* $tmp5322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5320, &$s5321);
    panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5322, loopStart5124);
    panda$core$String* $tmp5325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5323, &$s5324);
    panda$core$String* $tmp5326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5325, loopEnd5128);
    panda$core$String* $tmp5328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5326, &$s5327);
    (($fn5329) p_out->$class->vtable[19])(p_out, $tmp5328);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5124, p_out);
    panda$core$String* $tmp5331 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5330 = $tmp5331;
    panda$core$String* $tmp5332 = panda$core$String$convert$R$panda$core$String(indexValue5330);
    panda$core$String* $tmp5334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5332, &$s5333);
    panda$core$String* $tmp5335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5334, numberType5026);
    panda$core$String* $tmp5337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5335, &$s5336);
    panda$core$String* $tmp5338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5337, numberType5026);
    panda$core$String* $tmp5340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5338, &$s5339);
    panda$core$String* $tmp5341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5340, indexValuePtr5052);
    panda$core$String* $tmp5343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5341, &$s5342);
    (($fn5344) p_out->$class->vtable[19])(p_out, $tmp5343);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block5005, p_out);
    panda$core$Bit $tmp5345 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block5005);
    panda$core$Bit $tmp5346 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5345);
    if ($tmp5346.value) {
    {
        panda$core$String* $tmp5348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5347, loopTest5130);
        panda$core$String* $tmp5350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5348, &$s5349);
        (($fn5351) p_out->$class->vtable[19])(p_out, $tmp5350);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest5130, p_out);
    panda$core$String* $tmp5353 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5352 = $tmp5353;
    panda$core$String* $tmp5355 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5354 = $tmp5355;
    panda$core$String* $tmp5357 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5356 = $tmp5357;
    panda$core$String* $tmp5359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5358, direction5150);
    panda$core$String* $tmp5361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5359, &$s5360);
    panda$core$String* $tmp5362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5361, forwardLabel5354);
    panda$core$String* $tmp5364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5362, &$s5363);
    panda$core$String* $tmp5365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5364, backwardLabel5356);
    panda$core$String* $tmp5367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5365, &$s5366);
    (($fn5368) p_out->$class->vtable[19])(p_out, $tmp5367);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardLabel5354, p_out);
    panda$core$String* $tmp5370 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5369 = $tmp5370;
    panda$core$String* $tmp5371 = panda$core$String$convert$R$panda$core$String(forwardDelta5369);
    panda$core$String* $tmp5373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5371, &$s5372);
    panda$core$String* $tmp5374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5373, numberType5026);
    panda$core$String* $tmp5376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5374, &$s5375);
    panda$core$String* $tmp5377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5376, end5083);
    panda$core$String* $tmp5379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5377, &$s5378);
    panda$core$String* $tmp5380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5379, indexValue5330);
    panda$core$String* $tmp5382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5380, &$s5381);
    (($fn5383) p_out->$class->vtable[19])(p_out, $tmp5382);
    panda$core$String* $tmp5385 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5384 = $tmp5385;
    panda$core$String* $tmp5387 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5386 = $tmp5387;
    panda$core$String* $tmp5389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5388, inclusive5115);
    panda$core$String* $tmp5391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5389, &$s5390);
    panda$core$String* $tmp5392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5391, forwardInclusiveLabel5384);
    panda$core$String* $tmp5394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5392, &$s5393);
    panda$core$String* $tmp5395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5394, forwardExclusiveLabel5386);
    (($fn5396) p_out->$class->vtable[19])(p_out, $tmp5395);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel5384, p_out);
    panda$core$String* $tmp5398 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5397 = $tmp5398;
    panda$core$String* $tmp5399 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest5397);
    panda$core$String* $tmp5401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5399, &$s5400);
    panda$core$String* $tmp5402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5401, numberType5026);
    panda$core$String* $tmp5404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5402, &$s5403);
    panda$core$String* $tmp5405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5404, forwardDelta5369);
    panda$core$String* $tmp5407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5405, &$s5406);
    panda$core$String* $tmp5408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5407, step5101);
    panda$core$String* $tmp5410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5408, &$s5409);
    (($fn5411) p_out->$class->vtable[19])(p_out, $tmp5410);
    panda$core$String* $tmp5413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5412, forwardInclusiveTest5397);
    panda$core$String* $tmp5415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5413, &$s5414);
    panda$core$String* $tmp5416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5415, loopInc5352);
    panda$core$String* $tmp5418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5416, &$s5417);
    panda$core$String* $tmp5419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5418, loopEnd5128);
    panda$core$String* $tmp5421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5419, &$s5420);
    (($fn5422) p_out->$class->vtable[19])(p_out, $tmp5421);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel5386, p_out);
    panda$core$String* $tmp5424 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5423 = $tmp5424;
    panda$core$String* $tmp5425 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest5423);
    panda$core$String* $tmp5427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5425, &$s5426);
    panda$core$String* $tmp5428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5427, numberType5026);
    panda$core$String* $tmp5430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5428, &$s5429);
    panda$core$String* $tmp5431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5430, forwardDelta5369);
    panda$core$String* $tmp5433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5431, &$s5432);
    panda$core$String* $tmp5434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5433, step5101);
    panda$core$String* $tmp5436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5434, &$s5435);
    (($fn5437) p_out->$class->vtable[19])(p_out, $tmp5436);
    panda$core$String* $tmp5439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5438, forwardExclusiveTest5423);
    panda$core$String* $tmp5441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5439, &$s5440);
    panda$core$String* $tmp5442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5441, loopInc5352);
    panda$core$String* $tmp5444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5442, &$s5443);
    panda$core$String* $tmp5445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5444, loopEnd5128);
    panda$core$String* $tmp5447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5445, &$s5446);
    (($fn5448) p_out->$class->vtable[19])(p_out, $tmp5447);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardLabel5356, p_out);
    panda$core$String* $tmp5450 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5449 = $tmp5450;
    panda$core$String* $tmp5451 = panda$core$String$convert$R$panda$core$String(backwardDelta5449);
    panda$core$String* $tmp5453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5451, &$s5452);
    panda$core$String* $tmp5454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5453, numberType5026);
    panda$core$String* $tmp5456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5454, &$s5455);
    panda$core$String* $tmp5457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5456, indexValue5330);
    panda$core$String* $tmp5459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5457, &$s5458);
    panda$core$String* $tmp5460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5459, end5083);
    panda$core$String* $tmp5462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5460, &$s5461);
    (($fn5463) p_out->$class->vtable[19])(p_out, $tmp5462);
    panda$core$String* $tmp5465 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5464 = $tmp5465;
    panda$core$String* $tmp5466 = panda$core$String$convert$R$panda$core$String(negStep5464);
    panda$core$String* $tmp5468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5466, &$s5467);
    panda$core$String* $tmp5469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5468, numberType5026);
    panda$core$String* $tmp5471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5469, &$s5470);
    panda$core$String* $tmp5472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5471, step5101);
    panda$core$String* $tmp5474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5472, &$s5473);
    (($fn5475) p_out->$class->vtable[19])(p_out, $tmp5474);
    panda$core$String* $tmp5477 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5476 = $tmp5477;
    panda$core$String* $tmp5479 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5478 = $tmp5479;
    panda$core$String* $tmp5481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5480, inclusive5115);
    panda$core$String* $tmp5483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5481, &$s5482);
    panda$core$String* $tmp5484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5483, backwardInclusiveLabel5476);
    panda$core$String* $tmp5486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5484, &$s5485);
    panda$core$String* $tmp5487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5486, backwardExclusiveLabel5478);
    (($fn5488) p_out->$class->vtable[19])(p_out, $tmp5487);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardInclusiveLabel5476, p_out);
    panda$core$String* $tmp5490 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5489 = $tmp5490;
    panda$core$String* $tmp5491 = panda$core$String$convert$R$panda$core$String(backwardInclusiveTest5489);
    panda$core$String* $tmp5493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5491, &$s5492);
    panda$core$String* $tmp5494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5493, numberType5026);
    panda$core$String* $tmp5496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5494, &$s5495);
    panda$core$String* $tmp5497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5496, backwardDelta5449);
    panda$core$String* $tmp5499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5497, &$s5498);
    panda$core$String* $tmp5500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5499, negStep5464);
    (($fn5501) p_out->$class->vtable[19])(p_out, $tmp5500);
    panda$core$String* $tmp5503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5502, backwardInclusiveTest5489);
    panda$core$String* $tmp5505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5503, &$s5504);
    panda$core$String* $tmp5506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5505, loopInc5352);
    panda$core$String* $tmp5508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5506, &$s5507);
    panda$core$String* $tmp5509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5508, loopEnd5128);
    panda$core$String* $tmp5511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5509, &$s5510);
    (($fn5512) p_out->$class->vtable[19])(p_out, $tmp5511);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardExclusiveLabel5478, p_out);
    panda$core$String* $tmp5514 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5513 = $tmp5514;
    panda$core$String* $tmp5515 = panda$core$String$convert$R$panda$core$String(backwardExclusiveTest5513);
    panda$core$String* $tmp5517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5515, &$s5516);
    panda$core$String* $tmp5518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5517, numberType5026);
    panda$core$String* $tmp5520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5518, &$s5519);
    panda$core$String* $tmp5521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5520, backwardDelta5449);
    panda$core$String* $tmp5523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5521, &$s5522);
    panda$core$String* $tmp5524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5523, negStep5464);
    (($fn5525) p_out->$class->vtable[19])(p_out, $tmp5524);
    panda$core$String* $tmp5527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5526, backwardExclusiveTest5513);
    panda$core$String* $tmp5529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5527, &$s5528);
    panda$core$String* $tmp5530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5529, loopInc5352);
    panda$core$String* $tmp5532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5530, &$s5531);
    panda$core$String* $tmp5533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5532, loopEnd5128);
    panda$core$String* $tmp5535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5533, &$s5534);
    (($fn5536) p_out->$class->vtable[19])(p_out, $tmp5535);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc5352, p_out);
    panda$core$String* $tmp5538 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5537 = $tmp5538;
    panda$core$String* $tmp5539 = panda$core$String$convert$R$panda$core$String(inc5537);
    panda$core$String* $tmp5541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5539, &$s5540);
    panda$core$String* $tmp5542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5541, numberType5026);
    panda$core$String* $tmp5544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5542, &$s5543);
    panda$core$String* $tmp5545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5544, indexValue5330);
    panda$core$String* $tmp5547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5545, &$s5546);
    panda$core$String* $tmp5548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5547, step5101);
    panda$core$String* $tmp5550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5548, &$s5549);
    (($fn5551) p_out->$class->vtable[19])(p_out, $tmp5550);
    panda$core$String* $tmp5553 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5552 = $tmp5553;
    panda$core$String* $tmp5554 = panda$core$String$convert$R$panda$core$String(incStruct5552);
    panda$core$String* $tmp5556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5554, &$s5555);
    panda$core$String* $tmp5557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5556, indexType5012);
    panda$core$String* $tmp5559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5557, &$s5558);
    panda$core$String* $tmp5560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5559, numberType5026);
    panda$core$String* $tmp5562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5560, &$s5561);
    (($fn5563) p_out->$class->vtable[19])(p_out, $tmp5562);
    panda$core$String* $tmp5565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5564, numberType5026);
    panda$core$String* $tmp5567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5565, &$s5566);
    panda$core$String* $tmp5568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5567, inc5537);
    panda$core$String* $tmp5570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5568, &$s5569);
    (($fn5571) p_out->$class->vtable[19])(p_out, $tmp5570);
    panda$core$String* $tmp5573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5572, indexType5012);
    panda$core$String* $tmp5575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5573, &$s5574);
    panda$core$String* $tmp5576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5575, incStruct5552);
    panda$core$String* $tmp5578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5576, &$s5577);
    panda$core$String* $tmp5579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5578, indexType5012);
    panda$core$String* $tmp5581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5579, &$s5580);
    panda$core$String* $tmp5582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5581, index5034);
    panda$core$String* $tmp5584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5582, &$s5583);
    (($fn5585) p_out->$class->vtable[19])(p_out, $tmp5584);
    panda$core$String* $tmp5587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5586, loopStart5124);
    panda$core$String* $tmp5589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5587, &$s5588);
    (($fn5590) p_out->$class->vtable[19])(p_out, $tmp5589);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5128, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    panda$core$Object* $tmp5591 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5592 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5591)->type);
    if ($tmp5592.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5593 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5594 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5593)->type);
    if ($tmp5594.value) {
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
    panda$core$String* loopStart5601;
    panda$core$String* loopBody5603;
    panda$core$String* loopEnd5605;
    panda$core$String* test5614;
    panda$core$String* testBit5617;
    panda$core$Bit $tmp5595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5595.value);
    panda$core$Int64 $tmp5596 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5596, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5597.value);
    panda$core$Object* $tmp5598 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5599 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5600 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5598)->type, $tmp5599);
    PANDA_ASSERT($tmp5600.value);
    panda$core$String* $tmp5602 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5601 = $tmp5602;
    panda$core$String* $tmp5604 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5603 = $tmp5604;
    panda$core$String* $tmp5606 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5605 = $tmp5606;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5607 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5607->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5607->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5607, ((panda$core$String*) p_w->payload), loopEnd5605, loopStart5601);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5607));
    panda$core$String* $tmp5610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5609, loopStart5601);
    panda$core$String* $tmp5612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5610, &$s5611);
    (($fn5613) p_out->$class->vtable[19])(p_out, $tmp5612);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5601, p_out);
    panda$core$Object* $tmp5615 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5616 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5615), p_out);
    test5614 = $tmp5616;
    panda$core$String* $tmp5618 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5617 = $tmp5618;
    panda$core$String* $tmp5619 = panda$core$String$convert$R$panda$core$String(testBit5617);
    panda$core$String* $tmp5621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5619, &$s5620);
    panda$core$String* $tmp5622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5621, test5614);
    panda$core$String* $tmp5624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5622, &$s5623);
    (($fn5625) p_out->$class->vtable[19])(p_out, $tmp5624);
    panda$core$String* $tmp5627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5626, testBit5617);
    panda$core$String* $tmp5629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5627, &$s5628);
    panda$core$String* $tmp5630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5629, loopBody5603);
    panda$core$String* $tmp5632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5630, &$s5631);
    panda$core$String* $tmp5633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5632, loopEnd5605);
    panda$core$String* $tmp5635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5633, &$s5634);
    (($fn5636) p_out->$class->vtable[19])(p_out, $tmp5635);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5603, p_out);
    panda$core$Object* $tmp5637 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5637), p_out);
    panda$core$Object* $tmp5638 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5639 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5638));
    panda$core$Bit $tmp5640 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5639);
    if ($tmp5640.value) {
    {
        panda$core$String* $tmp5642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5641, loopStart5601);
        panda$core$String* $tmp5644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5642, &$s5643);
        (($fn5645) p_out->$class->vtable[19])(p_out, $tmp5644);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5605, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5652;
    panda$core$String* loopBody5654;
    panda$core$String* loopEnd5656;
    panda$core$String* test5665;
    panda$core$String* testBit5668;
    panda$core$Bit $tmp5646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5646.value);
    panda$core$Int64 $tmp5647 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5647, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5648.value);
    panda$core$Object* $tmp5649 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5650 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5651 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5649)->type, $tmp5650);
    PANDA_ASSERT($tmp5651.value);
    panda$core$String* $tmp5653 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5652 = $tmp5653;
    panda$core$String* $tmp5655 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5654 = $tmp5655;
    panda$core$String* $tmp5657 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5656 = $tmp5657;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5658 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5658->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5658->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5658, ((panda$core$String*) p_d->payload), loopEnd5656, loopStart5652);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5658));
    panda$core$String* $tmp5661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5660, loopBody5654);
    panda$core$String* $tmp5663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5661, &$s5662);
    (($fn5664) p_out->$class->vtable[19])(p_out, $tmp5663);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5652, p_out);
    panda$core$Object* $tmp5666 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5667 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5666), p_out);
    test5665 = $tmp5667;
    panda$core$String* $tmp5669 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5668 = $tmp5669;
    panda$core$String* $tmp5670 = panda$core$String$convert$R$panda$core$String(testBit5668);
    panda$core$String* $tmp5672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5670, &$s5671);
    panda$core$String* $tmp5673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5672, test5665);
    panda$core$String* $tmp5675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5673, &$s5674);
    (($fn5676) p_out->$class->vtable[19])(p_out, $tmp5675);
    panda$core$String* $tmp5678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5677, testBit5668);
    panda$core$String* $tmp5680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5678, &$s5679);
    panda$core$String* $tmp5681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5680, loopBody5654);
    panda$core$String* $tmp5683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5681, &$s5682);
    panda$core$String* $tmp5684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5683, loopEnd5656);
    panda$core$String* $tmp5686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5684, &$s5685);
    (($fn5687) p_out->$class->vtable[19])(p_out, $tmp5686);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5654, p_out);
    panda$core$Object* $tmp5688 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5688), p_out);
    panda$core$Object* $tmp5689 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5690 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5689));
    panda$core$Bit $tmp5691 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5690);
    if ($tmp5691.value) {
    {
        panda$core$String* $tmp5693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5692, loopStart5652);
        panda$core$String* $tmp5695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5693, &$s5694);
        (($fn5696) p_out->$class->vtable[19])(p_out, $tmp5695);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5656, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5700;
    panda$core$String* loopEnd5702;
    panda$core$Bit $tmp5697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5697.value);
    panda$core$Int64 $tmp5698 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5698, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5699.value);
    panda$core$String* $tmp5701 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5700 = $tmp5701;
    panda$core$String* $tmp5703 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5702 = $tmp5703;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5704 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5704->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5704->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5704, ((panda$core$String*) p_l->payload), loopEnd5702, loopStart5700);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5704));
    panda$core$String* $tmp5707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5706, loopStart5700);
    panda$core$String* $tmp5709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5707, &$s5708);
    (($fn5710) p_out->$class->vtable[19])(p_out, $tmp5709);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5700, p_out);
    panda$core$Object* $tmp5711 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5711), p_out);
    panda$core$Object* $tmp5712 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5713 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5712));
    panda$core$Bit $tmp5714 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5713);
    if ($tmp5714.value) {
    {
        panda$core$String* $tmp5716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5715, loopStart5700);
        panda$core$String* $tmp5718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5716, &$s5717);
        (($fn5719) p_out->$class->vtable[19])(p_out, $tmp5718);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5702, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5720;
    panda$core$String* ref5730;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5720 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5721 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5720);
            panda$core$String* $tmp5722 = panda$core$String$convert$R$panda$core$String($tmp5721);
            panda$core$String* $tmp5724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5722, &$s5723);
            panda$core$String* $tmp5725 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5720->type);
            panda$core$String* $tmp5726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5724, $tmp5725);
            panda$core$String* $tmp5728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5726, &$s5727);
            (($fn5729) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5728);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5731 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_value, p_out);
                ref5730 = $tmp5731;
                panda$core$String* $tmp5733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5732, ref5730);
                panda$core$String* $tmp5735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5733, &$s5734);
                panda$core$String* $tmp5736 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5720->type);
                panda$core$String* $tmp5737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5735, $tmp5736);
                panda$core$String* $tmp5739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5737, &$s5738);
                panda$core$String* $tmp5740 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5720);
                panda$core$String* $tmp5741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5739, $tmp5740);
                panda$core$String* $tmp5743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5741, &$s5742);
                (($fn5744) p_out->$class->vtable[19])(p_out, $tmp5743);
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
    panda$collections$Iterator* decl$Iter5758;
    org$pandalanguage$pandac$IRNode* decl5770;
    panda$core$Bit $tmp5748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5747 = $tmp5748.value;
    if ($tmp5747) goto $l5749;
    panda$core$Bit $tmp5750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5747 = $tmp5750.value;
    $l5749:;
    panda$core$Bit $tmp5751 = { $tmp5747 };
    bool $tmp5746 = $tmp5751.value;
    if ($tmp5746) goto $l5752;
    panda$core$Bit $tmp5753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5746 = $tmp5753.value;
    $l5752:;
    panda$core$Bit $tmp5754 = { $tmp5746 };
    bool $tmp5745 = $tmp5754.value;
    if ($tmp5745) goto $l5755;
    panda$core$Bit $tmp5756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5745 = $tmp5756.value;
    $l5755:;
    panda$core$Bit $tmp5757 = { $tmp5745 };
    PANDA_ASSERT($tmp5757.value);
    {
        ITable* $tmp5759 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5759->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5759 = $tmp5759->next;
        }
        $fn5761 $tmp5760 = $tmp5759->methods[0];
        panda$collections$Iterator* $tmp5762 = $tmp5760(((panda$collections$Iterable*) p_v->children));
        decl$Iter5758 = $tmp5762;
        $l5763:;
        ITable* $tmp5765 = decl$Iter5758->$class->itable;
        while ($tmp5765->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5765 = $tmp5765->next;
        }
        $fn5767 $tmp5766 = $tmp5765->methods[0];
        panda$core$Bit $tmp5768 = $tmp5766(decl$Iter5758);
        panda$core$Bit $tmp5769 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5768);
        if (!$tmp5769.value) goto $l5764;
        {
            ITable* $tmp5771 = decl$Iter5758->$class->itable;
            while ($tmp5771->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5771 = $tmp5771->next;
            }
            $fn5773 $tmp5772 = $tmp5771->methods[1];
            panda$core$Object* $tmp5774 = $tmp5772(decl$Iter5758);
            decl5770 = ((org$pandalanguage$pandac$IRNode*) $tmp5774);
            panda$core$Bit $tmp5775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5770->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5775.value);
            panda$core$Int64 $tmp5776 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl5770->children);
            panda$core$Bit $tmp5777 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5776, ((panda$core$Int64) { 1 }));
            if ($tmp5777.value) {
            {
                panda$core$Object* $tmp5778 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5770->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5779 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5770->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5778), ((org$pandalanguage$pandac$IRNode*) $tmp5779), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5780 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl5770->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5780), NULL, p_out);
            }
            }
        }
        goto $l5763;
        $l5764:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$OutputStream* p_out) {
    panda$core$String* base5784;
    panda$core$String* raw5787;
    org$pandalanguage$pandac$ClassDecl* cl5789;
    org$pandalanguage$pandac$FieldDecl* f5792;
    panda$collections$ListView* fields5793;
    panda$core$Int64 index5795;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5796;
    panda$core$String* result5853;
    panda$core$String* result5866;
    panda$core$String* reused5869;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5781 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5782 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp5781, p_out);
            return $tmp5782;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5783 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5783;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5785 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5786 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5785), p_out);
            base5784 = $tmp5786;
            panda$core$String* $tmp5788 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            raw5787 = $tmp5788;
            panda$core$Object* $tmp5790 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5791 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5790)->type);
            cl5789 = $tmp5791;
            PANDA_ASSERT(((panda$core$Bit) { cl5789 != NULL }).value);
            f5792 = ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload);
            panda$collections$ListView* $tmp5794 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5789);
            fields5793 = $tmp5794;
            index5795 = ((panda$core$Int64) { -1 });
            ITable* $tmp5797 = ((panda$collections$CollectionView*) fields5793)->$class->itable;
            while ($tmp5797->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5797 = $tmp5797->next;
            }
            $fn5799 $tmp5798 = $tmp5797->methods[0];
            panda$core$Int64 $tmp5800 = $tmp5798(((panda$collections$CollectionView*) fields5793));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5796, ((panda$core$Int64) { 0 }), $tmp5800, ((panda$core$Bit) { false }));
            int64_t $tmp5802 = $tmp5796.min.value;
            panda$core$Int64 i5801 = { $tmp5802 };
            int64_t $tmp5804 = $tmp5796.max.value;
            bool $tmp5805 = $tmp5796.inclusive.value;
            if ($tmp5805) goto $l5812; else goto $l5813;
            $l5812:;
            if ($tmp5802 <= $tmp5804) goto $l5806; else goto $l5808;
            $l5813:;
            if ($tmp5802 < $tmp5804) goto $l5806; else goto $l5808;
            $l5806:;
            {
                ITable* $tmp5814 = fields5793->$class->itable;
                while ($tmp5814->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5814 = $tmp5814->next;
                }
                $fn5816 $tmp5815 = $tmp5814->methods[0];
                panda$core$Object* $tmp5817 = $tmp5815(fields5793, i5801);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5817))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) f5792)->name) }).value) {
                {
                    index5795 = i5801;
                    goto $l5808;
                }
                }
            }
            $l5809:;
            int64_t $tmp5819 = $tmp5804 - i5801.value;
            if ($tmp5805) goto $l5820; else goto $l5821;
            $l5820:;
            if ($tmp5819 >= 1) goto $l5818; else goto $l5808;
            $l5821:;
            if ($tmp5819 > 1) goto $l5818; else goto $l5808;
            $l5818:;
            i5801.value += 1;
            goto $l5806;
            $l5808:;
            panda$core$Bit $tmp5824 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5795, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5824.value);
            panda$core$String* $tmp5825 = panda$core$String$convert$R$panda$core$String(raw5787);
            panda$core$String* $tmp5827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5825, &$s5826);
            org$pandalanguage$pandac$Type* $tmp5828 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5789);
            panda$core$String* $tmp5829 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5828);
            panda$core$String* $tmp5830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5827, $tmp5829);
            panda$core$String* $tmp5832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5830, &$s5831);
            org$pandalanguage$pandac$Type* $tmp5833 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5789);
            panda$core$String* $tmp5834 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5833);
            panda$core$String* $tmp5835 = panda$core$String$convert$R$panda$core$String($tmp5834);
            panda$core$String* $tmp5837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5835, &$s5836);
            panda$core$String* $tmp5838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5837, base5784);
            panda$core$String* $tmp5840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5838, &$s5839);
            panda$core$String* $tmp5841 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5840, ((panda$core$Object*) wrap_panda$core$Int64(index5795)));
            panda$core$String* $tmp5843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5841, &$s5842);
            panda$core$String* $tmp5844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5832, $tmp5843);
            (($fn5845) p_out->$class->vtable[19])(p_out, $tmp5844);
            panda$core$Bit $tmp5847 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f5792->type);
            panda$core$Bit $tmp5848 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5847);
            bool $tmp5846 = $tmp5848.value;
            if ($tmp5846) goto $l5849;
            org$pandalanguage$pandac$ClassDecl* $tmp5850 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f5792->type);
            panda$core$Bit $tmp5851 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp5850);
            $tmp5846 = $tmp5851.value;
            $l5849:;
            panda$core$Bit $tmp5852 = { $tmp5846 };
            if ($tmp5852.value) {
            {
                return raw5787;
            }
            }
            panda$core$String* $tmp5854 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result5853 = $tmp5854;
            panda$core$String* $tmp5855 = panda$core$String$convert$R$panda$core$String(result5853);
            panda$core$String* $tmp5857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5855, &$s5856);
            panda$core$String* $tmp5858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5857, raw5787);
            panda$core$String* $tmp5860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5858, &$s5859);
            panda$core$String* $tmp5861 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5860, $tmp5861);
            panda$core$String* $tmp5864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5862, &$s5863);
            (($fn5865) p_out->$class->vtable[19])(p_out, $tmp5864);
            return result5853;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5867 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5868 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5867), p_out);
            result5866 = $tmp5868;
            panda$core$String* $tmp5870 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5869 = $tmp5870;
            panda$core$String* $tmp5871 = panda$core$String$convert$R$panda$core$String(reused5869);
            panda$core$String* $tmp5873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5871, &$s5872);
            panda$core$String* $tmp5874 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5873, $tmp5874);
            panda$core$String* $tmp5877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5875, &$s5876);
            panda$core$String* $tmp5878 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5879 = panda$core$String$convert$R$panda$core$String($tmp5878);
            panda$core$String* $tmp5881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5879, &$s5880);
            panda$core$String* $tmp5882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5881, result5866);
            panda$core$String* $tmp5884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5882, &$s5883);
            panda$core$String* $tmp5885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5877, $tmp5884);
            (($fn5886) p_out->$class->vtable[19])(p_out, $tmp5885);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5869));
            return result5866;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* lvalue5890;
    panda$core$String* value5901;
    panda$core$String* t5902;
    panda$core$Int64 op5905;
    panda$core$String* right5907;
    panda$core$Bit $tmp5887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5887.value);
    panda$core$Int64 $tmp5888 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5888, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5889.value);
    panda$core$Object* $tmp5891 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5892 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5891)->type);
    panda$core$String* $tmp5893 = panda$core$String$convert$R$panda$core$String($tmp5892);
    panda$core$String* $tmp5895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5893, &$s5894);
    panda$core$Object* $tmp5896 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5897 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5896), p_out);
    panda$core$String* $tmp5898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5895, $tmp5897);
    panda$core$String* $tmp5900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5898, &$s5899);
    lvalue5890 = $tmp5900;
    panda$core$Object* $tmp5903 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5904 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5903)->type);
    t5902 = $tmp5904;
    op5905 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5905, ((panda$core$Int64) { 73 }));
    if ($tmp5906.value) {
    {
        panda$core$Object* $tmp5908 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5909 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5908), p_out);
        right5907 = $tmp5909;
        panda$core$String* $tmp5910 = panda$core$String$convert$R$panda$core$String(t5902);
        panda$core$String* $tmp5912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5910, &$s5911);
        panda$core$String* $tmp5913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5912, right5907);
        panda$core$String* $tmp5915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5913, &$s5914);
        value5901 = $tmp5915;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5916, value5901);
    panda$core$String* $tmp5919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5917, &$s5918);
    panda$core$String* $tmp5920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5919, lvalue5890);
    panda$core$String* $tmp5922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5920, &$s5921);
    (($fn5923) p_out->$class->vtable[19])(p_out, $tmp5922);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5933;
    panda$core$String* result5935;
    bool $tmp5924 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp5924) goto $l5925;
    panda$core$Int64 $tmp5926 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5927 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5926, ((panda$core$Int64) { 0 }));
    $tmp5924 = $tmp5927.value;
    $l5925:;
    panda$core$Bit $tmp5928 = { $tmp5924 };
    if ($tmp5928.value) {
    {
        panda$core$Int64 $tmp5929 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5929, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp5930.value);
        panda$core$Int64 $tmp5931 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5932 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5931, ((panda$core$Int64) { 0 }));
        if ($tmp5932.value) {
        {
            panda$core$Object* $tmp5934 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5933 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5934);
            panda$core$Object* $tmp5936 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5937 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5936), p_out);
            result5935 = $tmp5937;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5938 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5938->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5938->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5938, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5935));
            panda$collections$Array$add$panda$collections$Array$T(inline5933->returns, ((panda$core$Object*) $tmp5938));
            panda$core$String* $tmp5941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5940, inline5933->exitLabel);
            panda$core$String* $tmp5943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5941, &$s5942);
            (($fn5944) p_out->$class->vtable[19])(p_out, $tmp5943);
        }
        }
        else {
        {
            panda$core$Object* $tmp5946 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5947 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5946), p_out);
            panda$core$String* $tmp5948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5945, $tmp5947);
            panda$core$String* $tmp5950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5948, &$s5949);
            (($fn5951) p_out->$class->vtable[19])(p_out, $tmp5950);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5952 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5953 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5952, ((panda$core$Int64) { 0 }));
        if ($tmp5953.value) {
        {
            panda$core$Object* $tmp5955 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5954, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5955)->exitLabel);
            panda$core$String* $tmp5958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5956, &$s5957);
            (($fn5959) p_out->$class->vtable[19])(p_out, $tmp5958);
        }
        }
        else {
        {
            (($fn5961) p_out->$class->vtable[19])(p_out, &$s5960);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5965;
    panda$core$Int64 $tmp5962 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5963 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5962, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5963.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5964 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5964);
    }
    }
    panda$core$Int64 $tmp5966 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5965, ((panda$core$Int64) { 0 }), $tmp5966, ((panda$core$Bit) { false }));
    int64_t $tmp5968 = $tmp5965.min.value;
    panda$core$Int64 i5967 = { $tmp5968 };
    int64_t $tmp5970 = $tmp5965.max.value;
    bool $tmp5971 = $tmp5965.inclusive.value;
    if ($tmp5971) goto $l5978; else goto $l5979;
    $l5978:;
    if ($tmp5968 <= $tmp5970) goto $l5972; else goto $l5974;
    $l5979:;
    if ($tmp5968 < $tmp5970) goto $l5972; else goto $l5974;
    $l5972:;
    {
        panda$core$Object* $tmp5981 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5967);
        bool $tmp5980 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5981)->loopLabel != NULL }).value;
        if (!$tmp5980) goto $l5982;
        panda$core$Object* $tmp5983 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5967);
        panda$core$Bit $tmp5987;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5983)->loopLabel != NULL }).value) goto $l5984; else goto $l5985;
        $l5984:;
        panda$core$Bit $tmp5988 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5983)->loopLabel, p_name);
        $tmp5987 = $tmp5988;
        goto $l5986;
        $l5985:;
        $tmp5987 = ((panda$core$Bit) { false });
        goto $l5986;
        $l5986:;
        $tmp5980 = $tmp5987.value;
        $l5982:;
        panda$core$Bit $tmp5989 = { $tmp5980 };
        if ($tmp5989.value) {
        {
            panda$core$Object* $tmp5990 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5967);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5990);
        }
        }
    }
    $l5975:;
    int64_t $tmp5992 = $tmp5970 - i5967.value;
    if ($tmp5971) goto $l5993; else goto $l5994;
    $l5993:;
    if ($tmp5992 >= 1) goto $l5991; else goto $l5974;
    $l5994:;
    if ($tmp5992 > 1) goto $l5991; else goto $l5974;
    $l5991:;
    i5967.value += 1;
    goto $l5972;
    $l5974:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5997;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5998 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5997 = $tmp5998;
    panda$core$String* $tmp6000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5999, desc5997->breakLabel);
    panda$core$String* $tmp6002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6000, &$s6001);
    (($fn6003) p_out->$class->vtable[19])(p_out, $tmp6002);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc6004;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6005 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc6004 = $tmp6005;
    panda$core$String* $tmp6007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6006, desc6004->continueLabel);
    panda$core$String* $tmp6009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6007, &$s6008);
    (($fn6010) p_out->$class->vtable[19])(p_out, $tmp6009);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* test6020;
    panda$core$String* ifTrue6023;
    panda$core$String* ifFalse6025;
    panda$core$String* name6038;
    panda$core$String* path6039;
    panda$core$String$Index$nullable index6041;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp6044;
    panda$core$String* nameRef6046;
    panda$core$String* line6048;
    panda$core$String* msg6053;
    panda$collections$Iterator* m$Iter6060;
    org$pandalanguage$pandac$MethodDecl* m6074;
    panda$core$Bit $tmp6011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp6011.value);
    panda$core$Int64 $tmp6013 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6013, ((panda$core$Int64) { 1 }));
    bool $tmp6012 = $tmp6014.value;
    if ($tmp6012) goto $l6015;
    panda$core$Int64 $tmp6016 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6016, ((panda$core$Int64) { 2 }));
    $tmp6012 = $tmp6017.value;
    $l6015:;
    panda$core$Bit $tmp6018 = { $tmp6012 };
    PANDA_ASSERT($tmp6018.value);
    panda$core$Bit $tmp6019 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp6019.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp6021 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6022 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6021), p_out);
    test6020 = $tmp6022;
    panda$core$String* $tmp6024 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue6023 = $tmp6024;
    panda$core$String* $tmp6026 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse6025 = $tmp6026;
    panda$core$String* $tmp6028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6027, test6020);
    panda$core$String* $tmp6030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6028, &$s6029);
    panda$core$String* $tmp6031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6030, ifTrue6023);
    panda$core$String* $tmp6033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6031, &$s6032);
    panda$core$String* $tmp6034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6033, ifFalse6025);
    panda$core$String* $tmp6036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6034, &$s6035);
    (($fn6037) p_out->$class->vtable[19])(p_out, $tmp6036);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse6025, p_out);
    panda$core$Object* $tmp6040 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path6039 = ((org$pandalanguage$pandac$ClassDecl*) $tmp6040)->source->path;
    panda$core$String$Index$nullable $tmp6043 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path6039, &$s6042);
    index6041 = $tmp6043;
    if (((panda$core$Bit) { !index6041.nonnull }).value) {
    {
        name6038 = path6039;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp6044, index6041, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp6045 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path6039, $tmp6044);
        name6038 = $tmp6045;
    }
    }
    panda$core$String* $tmp6047 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, name6038, p_out);
    nameRef6046 = $tmp6047;
    panda$core$String* $tmp6050 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s6049, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp6052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6050, &$s6051);
    line6048 = $tmp6052;
    panda$core$Int64 $tmp6054 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6054, ((panda$core$Int64) { 2 }));
    if ($tmp6055.value) {
    {
        panda$core$Object* $tmp6056 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp6057 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6056), p_out);
        msg6053 = $tmp6057;
    }
    }
    else {
    {
        msg6053 = NULL;
    }
    }
    (($fn6059) p_out->$class->vtable[16])(p_out, &$s6058);
    {
        org$pandalanguage$pandac$Type* $tmp6061 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp6062 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp6061);
        ITable* $tmp6063 = ((panda$collections$Iterable*) $tmp6062->methods)->$class->itable;
        while ($tmp6063->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6063 = $tmp6063->next;
        }
        $fn6065 $tmp6064 = $tmp6063->methods[0];
        panda$collections$Iterator* $tmp6066 = $tmp6064(((panda$collections$Iterable*) $tmp6062->methods));
        m$Iter6060 = $tmp6066;
        $l6067:;
        ITable* $tmp6069 = m$Iter6060->$class->itable;
        while ($tmp6069->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6069 = $tmp6069->next;
        }
        $fn6071 $tmp6070 = $tmp6069->methods[0];
        panda$core$Bit $tmp6072 = $tmp6070(m$Iter6060);
        panda$core$Bit $tmp6073 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6072);
        if (!$tmp6073.value) goto $l6068;
        {
            ITable* $tmp6075 = m$Iter6060->$class->itable;
            while ($tmp6075->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6075 = $tmp6075->next;
            }
            $fn6077 $tmp6076 = $tmp6075->methods[1];
            panda$core$Object* $tmp6078 = $tmp6076(m$Iter6060);
            m6074 = ((org$pandalanguage$pandac$MethodDecl*) $tmp6078);
            panda$core$Bit $tmp6080 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m6074)->name, &$s6079);
            if ($tmp6080.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m6074);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m6074);
            }
            }
        }
        goto $l6067;
        $l6068:;
    }
    if (((panda$core$Bit) { msg6053 != NULL }).value) {
    {
        panda$core$String* $tmp6083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6081, &$s6082);
        (($fn6084) p_out->$class->vtable[16])(p_out, $tmp6083);
    }
    }
    else {
    {
        (($fn6086) p_out->$class->vtable[16])(p_out, &$s6085);
    }
    }
    panda$core$String* $tmp6088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6087, nameRef6046);
    panda$core$String* $tmp6090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6088, &$s6089);
    panda$core$String* $tmp6091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6090, line6048);
    panda$core$String* $tmp6093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6091, &$s6092);
    (($fn6094) p_out->$class->vtable[16])(p_out, $tmp6093);
    if (((panda$core$Bit) { msg6053 != NULL }).value) {
    {
        panda$core$String* $tmp6096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6095, msg6053);
        panda$core$String* $tmp6098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6096, &$s6097);
        (($fn6099) p_out->$class->vtable[16])(p_out, $tmp6098);
    }
    }
    (($fn6101) p_out->$class->vtable[19])(p_out, &$s6100);
    (($fn6103) p_out->$class->vtable[19])(p_out, &$s6102);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue6023, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$OutputStream* p_out) {
    panda$core$String* valueStruct6105;
    org$pandalanguage$pandac$ClassDecl* numberClass6108;
    panda$core$String* value6111;
    org$pandalanguage$pandac$FieldDecl* f6120;
    panda$core$String* switchType6123;
    panda$core$String* endLabel6133;
    panda$collections$Array* whenLabels6135;
    panda$core$String* otherwiseLabel6138;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6149;
    org$pandalanguage$pandac$IRNode* w6164;
    panda$core$String* label6168;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6170;
    panda$core$UInt64 number6186;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6214;
    org$pandalanguage$pandac$IRNode* w6229;
    org$pandalanguage$pandac$IRNode* block6231;
    panda$core$Bit $tmp6104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp6104.value);
    panda$core$Object* $tmp6106 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6107 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6106), p_out);
    valueStruct6105 = $tmp6107;
    panda$core$Object* $tmp6109 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp6110 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6109)->type);
    numberClass6108 = $tmp6110;
    panda$core$String* $tmp6112 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value6111 = $tmp6112;
    panda$core$String* $tmp6113 = panda$core$String$convert$R$panda$core$String(value6111);
    panda$core$String* $tmp6115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6113, &$s6114);
    panda$core$String* $tmp6116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6115, valueStruct6105);
    panda$core$String* $tmp6118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6116, &$s6117);
    (($fn6119) p_out->$class->vtable[19])(p_out, $tmp6118);
    org$pandalanguage$pandac$Symbol* $tmp6122 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass6108->symbolTable, &$s6121);
    f6120 = ((org$pandalanguage$pandac$FieldDecl*) $tmp6122);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f6120);
    panda$core$String* $tmp6124 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f6120->type);
    switchType6123 = $tmp6124;
    panda$core$String* $tmp6126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6125, switchType6123);
    panda$core$String* $tmp6128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6126, &$s6127);
    panda$core$String* $tmp6129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6128, value6111);
    panda$core$String* $tmp6131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6129, &$s6130);
    (($fn6132) p_out->$class->vtable[16])(p_out, $tmp6131);
    panda$core$String* $tmp6134 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel6133 = $tmp6134;
    panda$collections$Array* $tmp6136 = (panda$collections$Array*) malloc(40);
    $tmp6136->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp6136->refCount.value = 1;
    panda$collections$Array$init($tmp6136);
    whenLabels6135 = $tmp6136;
    panda$core$Int64 $tmp6139 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp6140 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6139, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp6141 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, $tmp6140);
    panda$core$Bit $tmp6142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp6141)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp6142.value) {
    {
        panda$core$String* $tmp6143 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel6138 = $tmp6143;
    }
    }
    else {
    {
        otherwiseLabel6138 = endLabel6133;
    }
    }
    panda$core$String* $tmp6145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6144, otherwiseLabel6138);
    panda$core$String* $tmp6147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6145, &$s6146);
    (($fn6148) p_out->$class->vtable[19])(p_out, $tmp6147);
    panda$core$Int64 $tmp6150 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6149, ((panda$core$Int64) { 1 }), $tmp6150, ((panda$core$Bit) { false }));
    int64_t $tmp6152 = $tmp6149.min.value;
    panda$core$Int64 i6151 = { $tmp6152 };
    int64_t $tmp6154 = $tmp6149.max.value;
    bool $tmp6155 = $tmp6149.inclusive.value;
    if ($tmp6155) goto $l6162; else goto $l6163;
    $l6162:;
    if ($tmp6152 <= $tmp6154) goto $l6156; else goto $l6158;
    $l6163:;
    if ($tmp6152 < $tmp6154) goto $l6156; else goto $l6158;
    $l6156:;
    {
        panda$core$Object* $tmp6165 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i6151);
        w6164 = ((org$pandalanguage$pandac$IRNode*) $tmp6165);
        panda$core$Bit $tmp6166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6164->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp6166.value) {
        {
            goto $l6159;
        }
        }
        panda$core$Bit $tmp6167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6164->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp6167.value);
        panda$core$String* $tmp6169 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label6168 = $tmp6169;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels6135, ((panda$core$Object*) label6168));
        panda$core$Int64 $tmp6171 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w6164->children);
        panda$core$Int64 $tmp6172 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6171, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6170, ((panda$core$Int64) { 0 }), $tmp6172, ((panda$core$Bit) { false }));
        int64_t $tmp6174 = $tmp6170.min.value;
        panda$core$Int64 i6173 = { $tmp6174 };
        int64_t $tmp6176 = $tmp6170.max.value;
        bool $tmp6177 = $tmp6170.inclusive.value;
        if ($tmp6177) goto $l6184; else goto $l6185;
        $l6184:;
        if ($tmp6174 <= $tmp6176) goto $l6178; else goto $l6180;
        $l6185:;
        if ($tmp6174 < $tmp6176) goto $l6178; else goto $l6180;
        $l6178:;
        {
            panda$core$Object* $tmp6187 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w6164->children, i6173);
            panda$core$UInt64 $tmp6188 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6187));
            number6186 = $tmp6188;
            panda$core$String* $tmp6190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6189, switchType6123);
            panda$core$String* $tmp6192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6190, &$s6191);
            panda$core$String* $tmp6193 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6192, ((panda$core$Object*) wrap_panda$core$UInt64(number6186)));
            panda$core$String* $tmp6195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6193, &$s6194);
            panda$core$String* $tmp6196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6195, label6168);
            panda$core$String* $tmp6198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6196, &$s6197);
            (($fn6199) p_out->$class->vtable[19])(p_out, $tmp6198);
        }
        $l6181:;
        int64_t $tmp6201 = $tmp6176 - i6173.value;
        if ($tmp6177) goto $l6202; else goto $l6203;
        $l6202:;
        if ($tmp6201 >= 1) goto $l6200; else goto $l6180;
        $l6203:;
        if ($tmp6201 > 1) goto $l6200; else goto $l6180;
        $l6200:;
        i6173.value += 1;
        goto $l6178;
        $l6180:;
    }
    $l6159:;
    int64_t $tmp6207 = $tmp6154 - i6151.value;
    if ($tmp6155) goto $l6208; else goto $l6209;
    $l6208:;
    if ($tmp6207 >= 1) goto $l6206; else goto $l6158;
    $l6209:;
    if ($tmp6207 > 1) goto $l6206; else goto $l6158;
    $l6206:;
    i6151.value += 1;
    goto $l6156;
    $l6158:;
    (($fn6213) p_out->$class->vtable[19])(p_out, &$s6212);
    panda$core$Int64 $tmp6215 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6214, ((panda$core$Int64) { 1 }), $tmp6215, ((panda$core$Bit) { false }));
    int64_t $tmp6217 = $tmp6214.min.value;
    panda$core$Int64 i6216 = { $tmp6217 };
    int64_t $tmp6219 = $tmp6214.max.value;
    bool $tmp6220 = $tmp6214.inclusive.value;
    if ($tmp6220) goto $l6227; else goto $l6228;
    $l6227:;
    if ($tmp6217 <= $tmp6219) goto $l6221; else goto $l6223;
    $l6228:;
    if ($tmp6217 < $tmp6219) goto $l6221; else goto $l6223;
    $l6221:;
    {
        panda$core$Object* $tmp6230 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i6216);
        w6229 = ((org$pandalanguage$pandac$IRNode*) $tmp6230);
        panda$core$Int64 $tmp6232 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w6229->children);
        panda$core$Int64 $tmp6233 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6232, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp6234 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w6229->children, $tmp6233);
        block6231 = ((org$pandalanguage$pandac$IRNode*) $tmp6234);
        panda$core$Int64 $tmp6235 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6216, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp6236 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels6135);
        panda$core$Bit $tmp6237 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp6235, $tmp6236);
        if ($tmp6237.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, otherwiseLabel6138, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp6238 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6216, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp6239 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels6135, $tmp6238);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ((panda$core$String*) $tmp6239), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block6231, p_out);
        panda$core$Bit $tmp6240 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block6231);
        panda$core$Bit $tmp6241 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6240);
        if ($tmp6241.value) {
        {
            panda$core$String* $tmp6243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6242, endLabel6133);
            panda$core$String* $tmp6245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6243, &$s6244);
            (($fn6246) p_out->$class->vtable[19])(p_out, $tmp6245);
        }
        }
    }
    $l6224:;
    int64_t $tmp6248 = $tmp6219 - i6216.value;
    if ($tmp6220) goto $l6249; else goto $l6250;
    $l6249:;
    if ($tmp6248 >= 1) goto $l6247; else goto $l6223;
    $l6250:;
    if ($tmp6248 > 1) goto $l6247; else goto $l6223;
    $l6247:;
    i6216.value += 1;
    goto $l6221;
    $l6223:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel6133, p_out);
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
    panda$core$String* result6253;
    org$pandalanguage$pandac$Type* $tmp6254 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp6255 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6254);
    result6253 = $tmp6255;
    panda$core$Bit $tmp6257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6256 = $tmp6257.value;
    if (!$tmp6256) goto $l6258;
    panda$core$Bit $tmp6260 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6253, &$s6259);
    panda$core$Bit $tmp6261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6260);
    $tmp6256 = $tmp6261.value;
    $l6258:;
    panda$core$Bit $tmp6262 = { $tmp6256 };
    if ($tmp6262.value) {
    {
        panda$core$String* $tmp6264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6253, &$s6263);
        return $tmp6264;
    }
    }
    return result6253;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6265;
    panda$core$Bit needsIndirection6274;
    panda$core$String* separator6286;
    panda$collections$Iterator* p$Iter6305;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6317;
    panda$core$String* $tmp6266 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6265 = $tmp6266;
    panda$core$Bit $tmp6267 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6265));
    if ($tmp6267.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6265));
    panda$core$String* $tmp6269 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6268, $tmp6269);
    panda$core$String* $tmp6272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6270, &$s6271);
    (($fn6273) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6272);
    panda$core$Bit $tmp6275 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6274 = $tmp6275;
    if (needsIndirection6274.value) {
    {
        (($fn6277) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6276);
    }
    }
    else {
    {
        panda$core$String* $tmp6278 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6279) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6278);
    }
    }
    panda$core$String* $tmp6281 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6280, $tmp6281);
    panda$core$String* $tmp6284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6282, &$s6283);
    (($fn6285) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6284);
    separator6286 = &$s6287;
    if (needsIndirection6274.value) {
    {
        panda$core$String* $tmp6288 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6289 = panda$core$String$convert$R$panda$core$String($tmp6288);
        panda$core$String* $tmp6291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6289, &$s6290);
        (($fn6292) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6291);
        separator6286 = &$s6293;
    }
    }
    panda$core$Bit $tmp6294 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6295 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6294);
    if ($tmp6295.value) {
    {
        panda$core$String* $tmp6296 = panda$core$String$convert$R$panda$core$String(separator6286);
        panda$core$String* $tmp6298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6296, &$s6297);
        panda$core$String* $tmp6299 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6298, $tmp6299);
        panda$core$String* $tmp6302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6300, &$s6301);
        (($fn6303) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6302);
        separator6286 = &$s6304;
    }
    }
    {
        ITable* $tmp6306 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6306->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6306 = $tmp6306->next;
        }
        $fn6308 $tmp6307 = $tmp6306->methods[0];
        panda$collections$Iterator* $tmp6309 = $tmp6307(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6305 = $tmp6309;
        $l6310:;
        ITable* $tmp6312 = p$Iter6305->$class->itable;
        while ($tmp6312->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6312 = $tmp6312->next;
        }
        $fn6314 $tmp6313 = $tmp6312->methods[0];
        panda$core$Bit $tmp6315 = $tmp6313(p$Iter6305);
        panda$core$Bit $tmp6316 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6315);
        if (!$tmp6316.value) goto $l6311;
        {
            ITable* $tmp6318 = p$Iter6305->$class->itable;
            while ($tmp6318->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6318 = $tmp6318->next;
            }
            $fn6320 $tmp6319 = $tmp6318->methods[1];
            panda$core$Object* $tmp6321 = $tmp6319(p$Iter6305);
            p6317 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6321);
            panda$core$String* $tmp6322 = panda$core$String$convert$R$panda$core$String(separator6286);
            panda$core$String* $tmp6324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6322, &$s6323);
            panda$core$String* $tmp6325 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6317->type);
            panda$core$String* $tmp6326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6324, $tmp6325);
            panda$core$String* $tmp6328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6326, &$s6327);
            panda$core$String* $tmp6329 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6317->name);
            panda$core$String* $tmp6330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6328, $tmp6329);
            panda$core$String* $tmp6332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6330, &$s6331);
            (($fn6333) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6332);
            separator6286 = &$s6334;
        }
        goto $l6310;
        $l6311:;
    }
    (($fn6336) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6335);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6359;
    panda$collections$Iterator* p$Iter6369;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6381;
    panda$io$MemoryOutputStream* bodyBuffer6402;
    panda$collections$Iterator* s$Iter6405;
    org$pandalanguage$pandac$IRNode* s6417;
    panda$core$Object* $tmp6337 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6337)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6338;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$io$MemoryOutputStream* $tmp6339 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6339->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6339->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6339);
    self->methodHeader = $tmp6339;
    (($fn6342) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6341);
    panda$core$Bit $tmp6343 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6343.value) {
    {
        (($fn6345) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6344);
    }
    }
    panda$core$String* $tmp6346 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6347 = panda$core$String$convert$R$panda$core$String($tmp6346);
    panda$core$String* $tmp6349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6347, &$s6348);
    panda$core$String* $tmp6350 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6349, $tmp6350);
    panda$core$String* $tmp6353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6351, &$s6352);
    panda$core$String* $tmp6354 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6353, $tmp6354);
    panda$core$String* $tmp6357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6355, &$s6356);
    (($fn6358) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6357);
    separator6359 = &$s6360;
    panda$core$Bit $tmp6361 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6362 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6361);
    if ($tmp6362.value) {
    {
        panda$core$String* $tmp6363 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6364 = panda$core$String$convert$R$panda$core$String($tmp6363);
        panda$core$String* $tmp6366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6364, &$s6365);
        (($fn6367) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6366);
        separator6359 = &$s6368;
    }
    }
    {
        ITable* $tmp6370 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6370->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6370 = $tmp6370->next;
        }
        $fn6372 $tmp6371 = $tmp6370->methods[0];
        panda$collections$Iterator* $tmp6373 = $tmp6371(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6369 = $tmp6373;
        $l6374:;
        ITable* $tmp6376 = p$Iter6369->$class->itable;
        while ($tmp6376->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6376 = $tmp6376->next;
        }
        $fn6378 $tmp6377 = $tmp6376->methods[0];
        panda$core$Bit $tmp6379 = $tmp6377(p$Iter6369);
        panda$core$Bit $tmp6380 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6379);
        if (!$tmp6380.value) goto $l6375;
        {
            ITable* $tmp6382 = p$Iter6369->$class->itable;
            while ($tmp6382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6382 = $tmp6382->next;
            }
            $fn6384 $tmp6383 = $tmp6382->methods[1];
            panda$core$Object* $tmp6385 = $tmp6383(p$Iter6369);
            p6381 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6385);
            panda$core$String* $tmp6386 = panda$core$String$convert$R$panda$core$String(separator6359);
            panda$core$String* $tmp6388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6386, &$s6387);
            panda$core$String* $tmp6389 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6381->type);
            panda$core$String* $tmp6390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6388, $tmp6389);
            panda$core$String* $tmp6392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6390, &$s6391);
            panda$core$String* $tmp6393 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6381->name);
            panda$core$String* $tmp6394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6392, $tmp6393);
            panda$core$String* $tmp6396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6394, &$s6395);
            (($fn6397) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6396);
            separator6359 = &$s6398;
        }
        goto $l6374;
        $l6375:;
    }
    (($fn6400) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6399);
    panda$core$Bit $tmp6401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6401.value);
    panda$io$MemoryOutputStream* $tmp6403 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6403->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6403->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6403);
    bodyBuffer6402 = $tmp6403;
    {
        ITable* $tmp6406 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6406->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6406 = $tmp6406->next;
        }
        $fn6408 $tmp6407 = $tmp6406->methods[0];
        panda$collections$Iterator* $tmp6409 = $tmp6407(((panda$collections$Iterable*) p_body->children));
        s$Iter6405 = $tmp6409;
        $l6410:;
        ITable* $tmp6412 = s$Iter6405->$class->itable;
        while ($tmp6412->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6412 = $tmp6412->next;
        }
        $fn6414 $tmp6413 = $tmp6412->methods[0];
        panda$core$Bit $tmp6415 = $tmp6413(s$Iter6405);
        panda$core$Bit $tmp6416 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6415);
        if (!$tmp6416.value) goto $l6411;
        {
            ITable* $tmp6418 = s$Iter6405->$class->itable;
            while ($tmp6418->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6418 = $tmp6418->next;
            }
            $fn6420 $tmp6419 = $tmp6418->methods[1];
            panda$core$Object* $tmp6421 = $tmp6419(s$Iter6405);
            s6417 = ((org$pandalanguage$pandac$IRNode*) $tmp6421);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s6417, ((panda$io$OutputStream*) bodyBuffer6402));
        }
        goto $l6410;
        $l6411:;
    }
    panda$core$String* $tmp6422 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeader);
    (($fn6423) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6422);
    panda$core$String* $tmp6424 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer6402);
    (($fn6425) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6424);
    panda$core$Bit $tmp6426 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6427 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6426);
    if ($tmp6427.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6428 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6429 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6428);
        if ($tmp6429.value) {
        {
            (($fn6431) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6430);
        }
        }
        else {
        {
            (($fn6433) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6432);
        }
        }
    }
    }
    (($fn6435) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6434);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6436 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6436.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6437 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6437);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

