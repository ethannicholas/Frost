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
typedef panda$core$Int64 (*$fn573)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn584)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn590)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn596)(panda$collections$Iterator*);
typedef void (*$fn612)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn645)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn648)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn655)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn661)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn689)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn697)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn741)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn760)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn786)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn794)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn806)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn808)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn814)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn829)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn832)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn843)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn873)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn881)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn886)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn937)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn962)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn996)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1001)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1003)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1012)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1018)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1024)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1051)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1088)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1099)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1105)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1111)(panda$collections$Iterator*);
typedef void (*$fn1128)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1236)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1256)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1313)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1324)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1330)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1336)(panda$collections$Iterator*);
typedef void (*$fn1352)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1370)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1393)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1457)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1468)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1486)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1510)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1667)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1673)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1679)(panda$collections$Iterator*);
typedef void (*$fn1712)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1728)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1741)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1747)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1762)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1775)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1804)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1810)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1825)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1883)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1899)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1908)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1924)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1933)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1960)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1977)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2000)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2009)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2021)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2044)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2053)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2065)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2075)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2097)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2112)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2127)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2157)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2186)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2195)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2209)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2224)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2248)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2261)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2273)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2278)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2285)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2302)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2315)(panda$collections$CollectionView*);
typedef void (*$fn2335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2347)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2362)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2389)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2410)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2423)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2437)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2462)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2477)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2502)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2514)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2534)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2549)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2565)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2577)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2594)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2611)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2648)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2663)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2717)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2724)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2735)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2741)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2747)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2753)(panda$collections$Iterator*);
typedef void (*$fn2764)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2766)(panda$io$OutputStream*);
typedef void (*$fn2791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2809)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2911)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2923)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2928)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2941)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2948)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2953)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2959)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2965)(panda$collections$Iterator*);
typedef void (*$fn2973)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2976)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3026)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3037)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3058)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3069)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3087)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3134)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3139)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3155)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3171)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3189)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3211)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3228)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3254)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3274)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3291)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3306)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3317)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3345)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3367)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3382)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3421)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3434)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3511)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3566)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3607)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3621)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3653)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3666)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3708)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3741)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3753)(panda$collections$CollectionView*);
typedef void (*$fn3764)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3771)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3777)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3783)(panda$collections$Iterator*);
typedef void (*$fn3792)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3795)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3832)(panda$collections$CollectionView*);
typedef void (*$fn3844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3861)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3884)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3892)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3900)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3909)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3931)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3939)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3948)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3980)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3991)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4025)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4031)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4037)(panda$collections$Iterator*);
typedef void (*$fn4059)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4086)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4111)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4123)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4139)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4144)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4247)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4263)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4280)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4284)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4290)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4296)(panda$collections$Iterator*);
typedef void (*$fn4298)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4299)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4302)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4325)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4340)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4353)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4364)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4400)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4407)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4419)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4428)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4445)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4468)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4477)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4520)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4539)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4550)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4569)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4580)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4595)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4619)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4632)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4644)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4655)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4667)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4678)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4690)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4702)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4710)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4724)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4729)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4765)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4772)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4793)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4810)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4824)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4833)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4842)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4856)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4917)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4934)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4953)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4964)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4983)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4994)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5030)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5041)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5060)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5071)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5086)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5093)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5110)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5125)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5153)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5164)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5179)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5190)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5205)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5217)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5230)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5243)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5254)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5267)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5278)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5293)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5305)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5313)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5327)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5332)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5355)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5367)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5378)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5387)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5406)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5418)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5429)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5452)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5471)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5486)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5503)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5509)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5515)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5541)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5558)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5587)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5610)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5631)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5668)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5689)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5696)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5704)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5706)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5744)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5751)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5778)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5800)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5806)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5812)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5818)(panda$collections$Iterator*);
typedef void (*$fn5825)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5835)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5840)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5842)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5860)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5873)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5889)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5940)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5954)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5987)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6014)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6018)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6020)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6026)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6033)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6044)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6049)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6055)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6061)(panda$collections$Iterator*);
typedef void (*$fn6074)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6077)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6083)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6086)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6099)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6108)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6113)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6119)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6125)(panda$collections$Iterator*);
typedef void (*$fn6138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6141)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6149)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6155)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6161)(panda$collections$Iterator*);
typedef void (*$fn6164)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6172)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6174)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6176)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 5576385260267864236, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1453018, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1482468, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 14387129908788272, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 22145878250529579, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 200217461, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 786813570417990567, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, -7649133232731397023, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 14375831170, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3, 1360582, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2, 14050, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, -5595348649711353309, NULL };
static panda$core$String $s823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1496394141948660748, NULL };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12, 8117540625486023742, NULL };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, 4666563658315683327, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, 8017085082545020976, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, -907514259111148708, NULL };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, 1496394141948660752, NULL };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 224, NULL };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, -6248805146137626796, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 5576385260267864236, NULL };
static panda$core$String $s1063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s1068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1453018, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1482468, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 14387129908788272, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 22145878250529579, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 200217461, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 786813570417990567, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, -7649133232731397023, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, 2313371919207, NULL };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, -7053567309059437070, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, -5503210093567996833, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 8410572937891831521, NULL };
static panda$core$String $s1292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s1298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 4466831713963476000, NULL };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, -899563194480661156, NULL };
static panda$core$String $s1304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1482468, NULL };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1453100120787609604, NULL };
static panda$core$String $s1320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 22145878250529579, NULL };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s1344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 200217461, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s1363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, -7053567309059437070, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, -5503210093567996833, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s1426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s1430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 8410572937891831521, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 4466831713963476000, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, 137534358, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1482468, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1453100120787609604, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, 1982351, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, 13918, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1405297, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1404792, NULL };
static panda$core$String $s1530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, 13904, NULL };
static panda$core$String $s1560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, 217363422, NULL };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, -2786053692556271290, NULL };
static panda$core$String $s1584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s1590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, 141821238, NULL };
static panda$core$String $s1591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, 142006571, NULL };
static panda$core$String $s1594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s1596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, 141945375, NULL };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, 141852364, NULL };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s1602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, 146203701926599, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, 141994765, NULL };
static panda$core$String $s1606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, 141975383, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, 141902866, NULL };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, 1447551143116, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, 1404587, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, 141953965, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1404792, NULL };
static panda$core$String $s1624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1405297, NULL };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, 1404777, NULL };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, 1405282, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, 1405598, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, 141832564, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, 141822248, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, 14324945814, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, 142056986, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, 14325180552, NULL };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, 141954978, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, 14325078544, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, 142005268, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, 142005274, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, 1405855, NULL };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, -8516432373732149011, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s1808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, -8516432373731118710, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s1820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 2215331, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 2154135, NULL };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, 223575839, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, 223718240, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 2214028, NULL };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, 205183331, NULL };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 2031008, NULL };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 21526, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 2265746, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 219725109287572, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 219725109288469, NULL };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, 22192236038186692, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, 22192236038187197, NULL };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, 22192236038186677, NULL };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, 22192236038187182, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 2215331, NULL };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 2154135, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, 225636441, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, 225778842, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 2214028, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, 216516642, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 2031008, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 21526, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 2265746, NULL };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 219725109287572, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 219725109288469, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, 22192236038207094, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, 22192236038207599, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, 22192236038207079, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, 22192236038207584, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, 210150800, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, 210336133, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, 210274937, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, 210181926, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, 21870595432513580, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, 21870595432514477, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, 21870595432513785, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, 21870595432514290, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, 21870595432513770, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, 21870595432514275, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, 212767339, NULL };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A", 2, 14485, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, 14834798317007399, NULL };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, 5996012307911795392, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, 19638, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, -284792955217493296, NULL };
static panda$core$String $s2193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, 1445392722364703443, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, 9180175165629405233, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, 147755760, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, 1445392722364703444, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, 2891297979021532403, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 20716344924, NULL };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, -68084191220774643, NULL };
static panda$core$String $s2416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, 212798144, NULL };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 229298558774239, NULL };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, 2946720541906757250, NULL };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, 178709719977385382, NULL };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, 2005081535935103476, NULL };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 146543380183876, NULL };
static panda$core$String $s2711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, 22799530931, NULL };
static panda$core$String $s2729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s2733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s2765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 171978245881277, NULL };
static panda$core$String $s2879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 14324499638457470, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1450073858438092980, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1983470, NULL };
static panda$core$String $s3050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, -3655795335382666026, NULL };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 9041927512917235400, NULL };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, -6901405387198259419, NULL };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, -5055193716233257020, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, -38380777888947644, NULL };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s3286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1971047, NULL };
static panda$core$String $s3331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, -7594506016420023174, NULL };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s3339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 2084875595949565210, NULL };
static panda$core$String $s3415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 22699766057, NULL };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 223587553, NULL };
static panda$core$String $s3447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 230799660, NULL };
static panda$core$String $s3488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 212358244529747, NULL };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s3613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s3683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s3691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 21489501287, NULL };
static panda$core$String $s3696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 3556234982078979695, NULL };
static panda$core$String $s3698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x69\x38\x2A\x2A\x20", 11, -1701017812076485794, NULL };
static panda$core$String $s3705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s3720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 175539598599330, NULL };
static panda$core$String $s3746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1410364661239, NULL };
static panda$core$String $s3759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, -4682671939848071135, NULL };
static panda$core$String $s3762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s3766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 2107094, NULL };
static panda$core$String $s3790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s3798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 17208241946, NULL };
static panda$core$String $s3800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, -4560911471279777923, NULL };
static panda$core$String $s3810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s3812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 54, -4410989833928586841, NULL };
static panda$core$String $s3820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, -1652634297463438611, NULL };
static panda$core$String $s3822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, -1388553655089279848, NULL };
static panda$core$String $s3835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s3838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s3841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20\x69\x38\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 14, 8437322619071490889, NULL };
static panda$core$String $s3848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 14479861264, NULL };
static panda$core$String $s3852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, -1700716425750402941, NULL };
static panda$core$String $s3875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, 24050909224991147, NULL };
static panda$core$String $s3879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, -1449709338160382639, NULL };
static panda$core$String $s3890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, 149724671, NULL };
static panda$core$String $s3895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s3898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s3907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 24050909225001348, NULL };
static panda$core$String $s3926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s3937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s3946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 2138506394783058478, NULL };
static panda$core$String $s3960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s3971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s3975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s3978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 141826750873303, NULL };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 13886901203, NULL };
static panda$core$String $s3989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s4052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s4081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s4098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s4105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 214439158056679, NULL };
static panda$core$String $s4134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s4137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s4140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 2149145203081189652, NULL };
static panda$core$String $s4142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s4208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s4242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s4254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s4414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s4432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s4435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s4446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s4472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s4493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s4500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s4503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s4508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s4517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s4530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s4560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s4587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s4639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s4662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s4685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s4697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s4700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s4703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s4705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s4779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s4797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s4800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s4811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s4837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s4844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s4848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, -8455018733144080751, NULL };
static panda$core$String $s4851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s4854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1527347502952, NULL };
static panda$core$String $s4881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s4888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s4891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s4893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 5640068998409967338, NULL };
static panda$core$String $s4900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 150, NULL };
static panda$core$String $s4907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s4931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s4944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s4974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 2091237, NULL };
static panda$core$String $s5021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 2092752, NULL };
static panda$core$String $s5051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s5215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s5285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s5300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s5303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s5306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s5308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s5469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s5573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 5661491935713932202, NULL };
static panda$core$String $s5584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s5604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s5608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s5617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s5694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s5740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s5790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s5792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s5799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20", 10, -1561809288486392881, NULL };
static panda$core$String $s5820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1112391861657830585, NULL };
static panda$core$String $s5822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, -3426205430399916046, NULL };
static panda$core$String $s5823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, -6932554582644871757, NULL };
static panda$core$String $s5826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, -418642434149121372, NULL };
static panda$core$String $s5828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, -3066853447063148068, NULL };
static panda$core$String $s5830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 3939743058867758116, NULL };
static panda$core$String $s5838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s5843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s5855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s5866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, 230550101366891, NULL };
static panda$core$String $s5868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 13524, NULL };
static panda$core$String $s5930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, 14293708514290657, NULL };
static panda$core$String $s5932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, 13873332722, NULL };
static panda$core$String $s5983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 21658185952146853, NULL };
static panda$core$String $s6012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s6021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s6079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s6082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s6085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s6089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s6171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s6173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s6175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };

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
    panda$core$MutableString* result541;
    panda$core$String* separator579;
    panda$collections$Iterator* m$Iter581;
    org$pandalanguage$pandac$MethodDecl* m593;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry601;
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
            panda$core$MutableString* $tmp542 = (panda$core$MutableString*) malloc(48);
            $tmp542->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp542->refCount.value = 1;
            panda$core$String* $tmp544 = panda$core$String$convert$R$panda$core$String(name517);
            panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, &$s545);
            panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, t527);
            panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, &$s548);
            org$pandalanguage$pandac$Type* $tmp550 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp551 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp550);
            panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, $tmp551);
            panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp552, &$s553);
            panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s555, intfCC513->type);
            panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp556, &$s557);
            panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp558, intfCC513->name);
            panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp559, &$s560);
            org$pandalanguage$pandac$Type* $tmp562 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp563 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp562);
            panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp561, $tmp563);
            panda$core$String* $tmp566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp564, &$s565);
            panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp554, $tmp566);
            panda$core$String* $tmp568 = panda$core$String$convert$R$panda$core$String(previous492);
            panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, &$s569);
            ITable* $tmp571 = ((panda$collections$CollectionView*) methods515)->$class->itable;
            while ($tmp571->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp571 = $tmp571->next;
            }
            $fn573 $tmp572 = $tmp571->methods[0];
            panda$core$Int64 $tmp574 = $tmp572(((panda$collections$CollectionView*) methods515));
            panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp570, ((panda$core$Object*) wrap_panda$core$Int64($tmp574)));
            panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s576);
            panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp567, $tmp577);
            panda$core$MutableString$init$panda$core$String($tmp542, $tmp578);
            result541 = $tmp542;
            separator579 = &$s580;
            {
                ITable* $tmp582 = ((panda$collections$Iterable*) methods515)->$class->itable;
                while ($tmp582->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp582 = $tmp582->next;
                }
                $fn584 $tmp583 = $tmp582->methods[0];
                panda$collections$Iterator* $tmp585 = $tmp583(((panda$collections$Iterable*) methods515));
                m$Iter581 = $tmp585;
                $l586:;
                ITable* $tmp588 = m$Iter581->$class->itable;
                while ($tmp588->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp588 = $tmp588->next;
                }
                $fn590 $tmp589 = $tmp588->methods[0];
                panda$core$Bit $tmp591 = $tmp589(m$Iter581);
                panda$core$Bit $tmp592 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp591);
                if (!$tmp592.value) goto $l587;
                {
                    ITable* $tmp594 = m$Iter581->$class->itable;
                    while ($tmp594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp594 = $tmp594->next;
                    }
                    $fn596 $tmp595 = $tmp594->methods[1];
                    panda$core$Object* $tmp597 = $tmp595(m$Iter581);
                    m593 = ((org$pandalanguage$pandac$MethodDecl*) $tmp597);
                    panda$core$MutableString$append$panda$core$String(result541, separator579);
                    separator579 = &$s598;
                    panda$core$Bit $tmp599 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m593->annotations);
                    if ($tmp599.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result541, &$s600);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp602 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m593);
                        entry601 = $tmp602;
                        panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s603, ((panda$core$String*) entry601->second));
                        panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp604, &$s605);
                        panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp606, ((panda$core$String*) entry601->first));
                        panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp607, &$s608);
                        panda$core$MutableString$append$panda$core$String(result541, $tmp609);
                    }
                    }
                }
                goto $l586;
                $l587:;
            }
            panda$core$MutableString$append$panda$core$String(result541, &$s610);
            panda$core$String* $tmp611 = panda$core$MutableString$finish$R$panda$core$String(result541);
            (($fn612) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp611);
            panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s613, t527);
            panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp614, &$s615);
            panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp616, name517);
            panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp617, &$s618);
            previous492 = $tmp619;
        }
        goto $l499;
        $l500:;
    }
    return previous492;
}
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* out620;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* found623;
    panda$core$Int64 oldVarCount631;
    org$pandalanguage$pandac$Type* effectiveReturnType632;
    panda$core$String* resultName636;
    panda$core$MutableString* resultType640;
    panda$core$String* self_t656;
    panda$core$Range$LTpanda$core$Int64$GT $tmp663;
    panda$core$String* pType678;
    panda$collections$Array* casts699;
    panda$core$Range$LTpanda$core$Int64$GT $tmp702;
    panda$core$String* p717;
    panda$core$String* returnValue734;
    panda$core$Range$LTpanda$core$Int64$GT $tmp761;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* result809;
    panda$io$MemoryOutputStream* $tmp621 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp621->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp621->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp621);
    out620 = $tmp621;
    panda$core$Object* $tmp624 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found623 = ((org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) $tmp624);
    if (((panda$core$Bit) { found623 != NULL }).value) {
    {
        return found623;
    }
    }
    panda$core$Bit $tmp625 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp625.value);
    panda$core$Int64 $tmp626 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp627 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp628 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp627, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp626, $tmp628);
    PANDA_ASSERT($tmp629.value);
    panda$core$Bit $tmp630 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp630.value);
    oldVarCount631 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp633 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp634 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp633, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp635 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp634);
    effectiveReturnType632 = ((org$pandalanguage$pandac$Type*) $tmp635);
    panda$core$String* $tmp637 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp637, &$s638);
    resultName636 = $tmp639;
    panda$core$MutableString* $tmp641 = (panda$core$MutableString*) malloc(48);
    $tmp641->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp641->refCount.value = 1;
    panda$core$String* $tmp643 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType632);
    panda$core$MutableString$init$panda$core$String($tmp641, $tmp643);
    resultType640 = $tmp641;
    (($fn645) ((panda$io$OutputStream*) out620)->$class->vtable[16])(((panda$io$OutputStream*) out620), &$s644);
    panda$core$Bit $tmp646 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_raw->owner);
    if ($tmp646.value) {
    {
        (($fn648) ((panda$io$OutputStream*) out620)->$class->vtable[16])(((panda$io$OutputStream*) out620), &$s647);
    }
    }
    panda$core$String* $tmp649 = panda$core$MutableString$convert$R$panda$core$String(resultType640);
    panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp649, &$s650);
    panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp651, resultName636);
    panda$core$String* $tmp654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp652, &$s653);
    (($fn655) ((panda$io$OutputStream*) out620)->$class->vtable[16])(((panda$io$OutputStream*) out620), $tmp654);
    panda$core$String* $tmp657 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t656 = $tmp657;
    panda$core$String* $tmp658 = panda$core$String$convert$R$panda$core$String(self_t656);
    panda$core$String* $tmp660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp658, &$s659);
    (($fn661) ((panda$io$OutputStream*) out620)->$class->vtable[16])(((panda$io$OutputStream*) out620), $tmp660);
    panda$core$MutableString$append$panda$core$String(resultType640, &$s662);
    panda$core$MutableString$append$panda$core$String(resultType640, self_t656);
    panda$core$Int64 $tmp664 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp663, ((panda$core$Int64) { 0 }), $tmp664, ((panda$core$Bit) { false }));
    int64_t $tmp666 = $tmp663.min.value;
    panda$core$Int64 i665 = { $tmp666 };
    int64_t $tmp668 = $tmp663.max.value;
    bool $tmp669 = $tmp663.inclusive.value;
    if ($tmp669) goto $l676; else goto $l677;
    $l676:;
    if ($tmp666 <= $tmp668) goto $l670; else goto $l672;
    $l677:;
    if ($tmp666 < $tmp668) goto $l670; else goto $l672;
    $l670:;
    {
        panda$core$Object* $tmp679 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i665);
        panda$core$String* $tmp680 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp679));
        pType678 = $tmp680;
        panda$core$MutableString$append$panda$core$String(resultType640, &$s681);
        panda$core$MutableString$append$panda$core$String(resultType640, pType678);
        panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s682, pType678);
        panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp683, &$s684);
        panda$core$String* $tmp686 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp685, ((panda$core$Object*) wrap_panda$core$Int64(i665)));
        panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp686, &$s687);
        (($fn689) ((panda$io$OutputStream*) out620)->$class->vtable[16])(((panda$io$OutputStream*) out620), $tmp688);
    }
    $l673:;
    int64_t $tmp691 = $tmp668 - i665.value;
    if ($tmp669) goto $l692; else goto $l693;
    $l692:;
    if ($tmp691 >= 1) goto $l690; else goto $l672;
    $l693:;
    if ($tmp691 > 1) goto $l690; else goto $l672;
    $l690:;
    i665.value += 1;
    goto $l670;
    $l672:;
    (($fn697) ((panda$io$OutputStream*) out620)->$class->vtable[19])(((panda$io$OutputStream*) out620), &$s696);
    panda$core$MutableString$append$panda$core$String(resultType640, &$s698);
    panda$collections$Array* $tmp700 = (panda$collections$Array*) malloc(40);
    $tmp700->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp700->refCount.value = 1;
    panda$collections$Array$init($tmp700);
    casts699 = $tmp700;
    panda$core$Int64 $tmp703 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp702, ((panda$core$Int64) { 0 }), $tmp703, ((panda$core$Bit) { false }));
    int64_t $tmp705 = $tmp702.min.value;
    panda$core$Int64 i704 = { $tmp705 };
    int64_t $tmp707 = $tmp702.max.value;
    bool $tmp708 = $tmp702.inclusive.value;
    if ($tmp708) goto $l715; else goto $l716;
    $l715:;
    if ($tmp705 <= $tmp707) goto $l709; else goto $l711;
    $l716:;
    if ($tmp705 < $tmp707) goto $l709; else goto $l711;
    $l709:;
    {
        panda$core$String* $tmp719 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s718, ((panda$core$Object*) wrap_panda$core$Int64(i704)));
        panda$core$String* $tmp721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp719, &$s720);
        p717 = $tmp721;
        panda$core$Object* $tmp722 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i704);
        panda$core$Object* $tmp723 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i704);
        panda$core$Bit $tmp724 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp722)->type, ((org$pandalanguage$pandac$Type*) $tmp723));
        if ($tmp724.value) {
        {
            panda$core$Object* $tmp725 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i704);
            panda$core$Object* $tmp726 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i704);
            panda$core$String* $tmp727 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p717, ((org$pandalanguage$pandac$Type*) $tmp725), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp726)->type, ((panda$io$OutputStream*) out620));
            panda$collections$Array$add$panda$collections$Array$T(casts699, ((panda$core$Object*) $tmp727));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts699, ((panda$core$Object*) p717));
        }
        }
    }
    $l712:;
    int64_t $tmp729 = $tmp707 - i704.value;
    if ($tmp708) goto $l730; else goto $l731;
    $l730:;
    if ($tmp729 >= 1) goto $l728; else goto $l711;
    $l731:;
    if ($tmp729 > 1) goto $l728; else goto $l711;
    $l728:;
    i704.value += 1;
    goto $l709;
    $l711:;
    org$pandalanguage$pandac$Type* $tmp735 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp736 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp735);
    if ($tmp736.value) {
    {
        panda$core$String* $tmp737 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue734 = $tmp737;
        panda$core$String* $tmp738 = panda$core$String$convert$R$panda$core$String(returnValue734);
        panda$core$String* $tmp740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp738, &$s739);
        (($fn741) ((panda$io$OutputStream*) out620)->$class->vtable[16])(((panda$io$OutputStream*) out620), $tmp740);
    }
    }
    else {
    {
        returnValue734 = &$s742;
    }
    }
    panda$core$String* $tmp744 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s743, $tmp744);
    panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, &$s746);
    panda$core$String* $tmp748 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
    panda$core$String* $tmp749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp747, $tmp748);
    panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp749, &$s750);
    panda$core$String* $tmp752 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp751, $tmp752);
    panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp753, &$s754);
    panda$core$String* $tmp756 = panda$core$String$convert$R$panda$core$String(self_t656);
    panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp756, &$s757);
    panda$core$String* $tmp759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp755, $tmp758);
    (($fn760) ((panda$io$OutputStream*) out620)->$class->vtable[16])(((panda$io$OutputStream*) out620), $tmp759);
    panda$core$Int64 $tmp762 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp761, ((panda$core$Int64) { 0 }), $tmp762, ((panda$core$Bit) { false }));
    int64_t $tmp764 = $tmp761.min.value;
    panda$core$Int64 i763 = { $tmp764 };
    int64_t $tmp766 = $tmp761.max.value;
    bool $tmp767 = $tmp761.inclusive.value;
    if ($tmp767) goto $l774; else goto $l775;
    $l774:;
    if ($tmp764 <= $tmp766) goto $l768; else goto $l770;
    $l775:;
    if ($tmp764 < $tmp766) goto $l768; else goto $l770;
    $l768:;
    {
        panda$core$Object* $tmp777 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i763);
        panda$core$String* $tmp778 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp777)->type);
        panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s776, $tmp778);
        panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp779, &$s780);
        panda$core$Object* $tmp782 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts699, i763);
        panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp781, ((panda$core$String*) $tmp782));
        panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp783, &$s784);
        (($fn786) ((panda$io$OutputStream*) out620)->$class->vtable[16])(((panda$io$OutputStream*) out620), $tmp785);
    }
    $l771:;
    int64_t $tmp788 = $tmp766 - i763.value;
    if ($tmp767) goto $l789; else goto $l790;
    $l789:;
    if ($tmp788 >= 1) goto $l787; else goto $l770;
    $l790:;
    if ($tmp788 > 1) goto $l787; else goto $l770;
    $l787:;
    i763.value += 1;
    goto $l768;
    $l770:;
    (($fn794) ((panda$io$OutputStream*) out620)->$class->vtable[19])(((panda$io$OutputStream*) out620), &$s793);
    org$pandalanguage$pandac$Type* $tmp795 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp796 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp795);
    if ($tmp796.value) {
    {
        panda$core$String* $tmp797 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType632);
        panda$core$String* $tmp799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp797, &$s798);
        panda$core$String* $tmp800 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, returnValue734, p_raw->returnType, effectiveReturnType632, ((panda$io$OutputStream*) out620));
        panda$core$String* $tmp801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp799, $tmp800);
        returnValue734 = $tmp801;
    }
    }
    panda$core$String* $tmp803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s802, returnValue734);
    panda$core$String* $tmp805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp803, &$s804);
    (($fn806) ((panda$io$OutputStream*) out620)->$class->vtable[19])(((panda$io$OutputStream*) out620), $tmp805);
    (($fn808) ((panda$io$OutputStream*) out620)->$class->vtable[19])(((panda$io$OutputStream*) out620), &$s807);
    self->varCount = oldVarCount631;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp810 = (org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) malloc(32);
    $tmp810->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class;
    $tmp810->refCount.value = 1;
    panda$core$String* $tmp812 = panda$core$MutableString$finish$R$panda$core$String(resultType640);
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp810, resultName636, $tmp812);
    result809 = $tmp810;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result809));
    panda$core$String* $tmp813 = panda$io$MemoryOutputStream$finish$R$panda$core$String(out620);
    (($fn814) p_rawOut->$class->vtable[16])(p_rawOut, $tmp813);
    return result809;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    panda$core$Int64 oldVarCount816;
    panda$core$String* result817;
    panda$core$String* selfType822;
    org$pandalanguage$pandac$Type* actualMethodType844;
    org$pandalanguage$pandac$Type* inheritedMethodType846;
    panda$core$Range$LTpanda$core$Int64$GT $tmp848;
    panda$collections$Array* parameters887;
    panda$core$Range$LTpanda$core$Int64$GT $tmp890;
    panda$collections$Array* children917;
    org$pandalanguage$pandac$Position $tmp922;
    panda$core$String* unwrapped924;
    org$pandalanguage$pandac$Position $tmp927;
    panda$core$String* returnValue930;
    panda$core$Range$LTpanda$core$Int64$GT $tmp963;
    panda$core$Bit $tmp815 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp815.value);
    oldVarCount816 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$String* $tmp818 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp819 = panda$core$String$convert$R$panda$core$String($tmp818);
    panda$core$String* $tmp821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp819, &$s820);
    result817 = $tmp821;
    panda$core$String* $tmp824 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s823, $tmp824);
    panda$core$String* $tmp827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp825, &$s826);
    selfType822 = $tmp827;
    (($fn829) p_out->$class->vtable[16])(p_out, &$s828);
    panda$core$Bit $tmp830 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp830.value) {
    {
        (($fn832) p_out->$class->vtable[16])(p_out, &$s831);
    }
    }
    panda$core$String* $tmp833 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp834 = panda$core$String$convert$R$panda$core$String($tmp833);
    panda$core$String* $tmp836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp834, &$s835);
    panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp836, result817);
    panda$core$String* $tmp839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp837, &$s838);
    panda$core$String* $tmp840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp839, selfType822);
    panda$core$String* $tmp842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp840, &$s841);
    (($fn843) p_out->$class->vtable[16])(p_out, $tmp842);
    org$pandalanguage$pandac$Type* $tmp845 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType844 = $tmp845;
    org$pandalanguage$pandac$Type* $tmp847 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType846 = $tmp847;
    panda$core$Int64 $tmp849 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp848, ((panda$core$Int64) { 0 }), $tmp849, ((panda$core$Bit) { false }));
    int64_t $tmp851 = $tmp848.min.value;
    panda$core$Int64 i850 = { $tmp851 };
    int64_t $tmp853 = $tmp848.max.value;
    bool $tmp854 = $tmp848.inclusive.value;
    if ($tmp854) goto $l861; else goto $l862;
    $l861:;
    if ($tmp851 <= $tmp853) goto $l855; else goto $l857;
    $l862:;
    if ($tmp851 < $tmp853) goto $l855; else goto $l857;
    $l855:;
    {
        panda$core$Object* $tmp864 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType846->subtypes, i850);
        panda$core$String* $tmp865 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp864));
        panda$core$String* $tmp866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s863, $tmp865);
        panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp866, &$s867);
        panda$core$Object* $tmp869 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i850);
        panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp868, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp869)->name);
        panda$core$String* $tmp872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp870, &$s871);
        (($fn873) p_out->$class->vtable[16])(p_out, $tmp872);
    }
    $l858:;
    int64_t $tmp875 = $tmp853 - i850.value;
    if ($tmp854) goto $l876; else goto $l877;
    $l876:;
    if ($tmp875 >= 1) goto $l874; else goto $l857;
    $l877:;
    if ($tmp875 > 1) goto $l874; else goto $l857;
    $l874:;
    i850.value += 1;
    goto $l855;
    $l857:;
    (($fn881) p_out->$class->vtable[19])(p_out, &$s880);
    panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s882, selfType822);
    panda$core$String* $tmp885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp883, &$s884);
    (($fn886) p_out->$class->vtable[19])(p_out, $tmp885);
    panda$collections$Array* $tmp888 = (panda$collections$Array*) malloc(40);
    $tmp888->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp888->refCount.value = 1;
    panda$collections$Array$init($tmp888);
    parameters887 = $tmp888;
    panda$core$Int64 $tmp891 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp890, ((panda$core$Int64) { 0 }), $tmp891, ((panda$core$Bit) { false }));
    int64_t $tmp893 = $tmp890.min.value;
    panda$core$Int64 i892 = { $tmp893 };
    int64_t $tmp895 = $tmp890.max.value;
    bool $tmp896 = $tmp890.inclusive.value;
    if ($tmp896) goto $l903; else goto $l904;
    $l903:;
    if ($tmp893 <= $tmp895) goto $l897; else goto $l899;
    $l904:;
    if ($tmp893 < $tmp895) goto $l897; else goto $l899;
    $l897:;
    {
        panda$core$Object* $tmp906 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i892);
        panda$core$String* $tmp907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s905, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp906)->name);
        panda$core$Object* $tmp908 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType846->subtypes, i892);
        panda$core$Object* $tmp909 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType844->subtypes, i892);
        panda$core$String* $tmp910 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, $tmp907, ((org$pandalanguage$pandac$Type*) $tmp908), ((org$pandalanguage$pandac$Type*) $tmp909), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters887, ((panda$core$Object*) $tmp910));
    }
    $l900:;
    int64_t $tmp912 = $tmp895 - i892.value;
    if ($tmp896) goto $l913; else goto $l914;
    $l913:;
    if ($tmp912 >= 1) goto $l911; else goto $l899;
    $l914:;
    if ($tmp912 > 1) goto $l911; else goto $l899;
    $l911:;
    i892.value += 1;
    goto $l897;
    $l899:;
    panda$collections$Array* $tmp918 = (panda$collections$Array*) malloc(40);
    $tmp918->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp918->refCount.value = 1;
    panda$collections$Array$init($tmp918);
    children917 = $tmp918;
    org$pandalanguage$pandac$IRNode* $tmp920 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp920->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp920->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp922);
    org$pandalanguage$pandac$Type* $tmp923 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp920, ((panda$core$Int64) { 1025 }), $tmp922, $tmp923);
    panda$collections$Array$add$panda$collections$Array$T(children917, ((panda$core$Object*) $tmp920));
    org$pandalanguage$pandac$IRNode* $tmp925 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp925->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp925->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp927);
    org$pandalanguage$pandac$Type* $tmp928 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp925, ((panda$core$Int64) { 1009 }), $tmp927, $tmp928, ((panda$collections$ListView*) children917));
    panda$core$String* $tmp929 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp925, p_out);
    unwrapped924 = $tmp929;
    org$pandalanguage$pandac$Type* $tmp931 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp932 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp931);
    if ($tmp932.value) {
    {
        panda$core$String* $tmp933 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue930 = $tmp933;
        panda$core$String* $tmp934 = panda$core$String$convert$R$panda$core$String(returnValue930);
        panda$core$String* $tmp936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp934, &$s935);
        (($fn937) p_out->$class->vtable[16])(p_out, $tmp936);
        panda$core$String* $tmp938 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp939 = panda$core$String$convert$R$panda$core$String($tmp938);
        panda$core$String* $tmp941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp939, &$s940);
        panda$core$String* $tmp942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp941, returnValue930);
        panda$core$String* $tmp944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp942, &$s943);
        returnValue930 = $tmp944;
    }
    }
    else {
    {
        returnValue930 = &$s945;
    }
    }
    panda$core$String* $tmp947 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s946, $tmp947);
    panda$core$String* $tmp950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp948, &$s949);
    panda$core$String* $tmp951 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp950, $tmp951);
    panda$core$String* $tmp954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp952, &$s953);
    panda$core$String* $tmp955 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, $tmp955);
    panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp956, &$s957);
    panda$core$String* $tmp959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp958, unwrapped924);
    panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp959, &$s960);
    (($fn962) p_out->$class->vtable[16])(p_out, $tmp961);
    panda$core$Int64 $tmp964 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp963, ((panda$core$Int64) { 0 }), $tmp964, ((panda$core$Bit) { false }));
    int64_t $tmp966 = $tmp963.min.value;
    panda$core$Int64 i965 = { $tmp966 };
    int64_t $tmp968 = $tmp963.max.value;
    bool $tmp969 = $tmp963.inclusive.value;
    if ($tmp969) goto $l976; else goto $l977;
    $l976:;
    if ($tmp966 <= $tmp968) goto $l970; else goto $l972;
    $l977:;
    if ($tmp966 < $tmp968) goto $l970; else goto $l972;
    $l970:;
    {
        panda$core$Object* $tmp979 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType844->subtypes, i965);
        panda$core$String* $tmp980 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp979));
        panda$core$String* $tmp981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s978, $tmp980);
        panda$core$String* $tmp983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp981, &$s982);
        panda$core$Object* $tmp984 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters887, i965);
        panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp983, ((panda$core$String*) $tmp984));
        panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp985, &$s986);
        (($fn988) p_out->$class->vtable[16])(p_out, $tmp987);
    }
    $l973:;
    int64_t $tmp990 = $tmp968 - i965.value;
    if ($tmp969) goto $l991; else goto $l992;
    $l991:;
    if ($tmp990 >= 1) goto $l989; else goto $l972;
    $l992:;
    if ($tmp990 > 1) goto $l989; else goto $l972;
    $l989:;
    i965.value += 1;
    goto $l970;
    $l972:;
    (($fn996) p_out->$class->vtable[19])(p_out, &$s995);
    panda$core$String* $tmp998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s997, returnValue930);
    panda$core$String* $tmp1000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp998, &$s999);
    (($fn1001) p_out->$class->vtable[19])(p_out, $tmp1000);
    (($fn1003) p_out->$class->vtable[19])(p_out, &$s1002);
    self->varCount = oldVarCount816;
    return result817;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1004;
    panda$core$String* previous1007;
    panda$collections$Iterator* intfType$Iter1009;
    org$pandalanguage$pandac$Type* intfType1021;
    org$pandalanguage$pandac$ClassDecl* intf1026;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1028;
    panda$collections$ListView* methods1030;
    panda$core$String* name1032;
    panda$core$String* t1042;
    panda$core$MutableString* result1056;
    panda$core$String* separator1094;
    panda$collections$Iterator* m$Iter1096;
    org$pandalanguage$pandac$MethodDecl* m1108;
    panda$core$String* shim1116;
    org$pandalanguage$pandac$Type* $tmp1005 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp1006 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp1005);
    interfaces1004 = $tmp1006;
    previous1007 = &$s1008;
    {
        ITable* $tmp1010 = ((panda$collections$Iterable*) interfaces1004)->$class->itable;
        while ($tmp1010->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1010 = $tmp1010->next;
        }
        $fn1012 $tmp1011 = $tmp1010->methods[0];
        panda$collections$Iterator* $tmp1013 = $tmp1011(((panda$collections$Iterable*) interfaces1004));
        intfType$Iter1009 = $tmp1013;
        $l1014:;
        ITable* $tmp1016 = intfType$Iter1009->$class->itable;
        while ($tmp1016->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1016 = $tmp1016->next;
        }
        $fn1018 $tmp1017 = $tmp1016->methods[0];
        panda$core$Bit $tmp1019 = $tmp1017(intfType$Iter1009);
        panda$core$Bit $tmp1020 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1019);
        if (!$tmp1020.value) goto $l1015;
        {
            ITable* $tmp1022 = intfType$Iter1009->$class->itable;
            while ($tmp1022->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1022 = $tmp1022->next;
            }
            $fn1024 $tmp1023 = $tmp1022->methods[1];
            panda$core$Object* $tmp1025 = $tmp1023(intfType$Iter1009);
            intfType1021 = ((org$pandalanguage$pandac$Type*) $tmp1025);
            org$pandalanguage$pandac$ClassDecl* $tmp1027 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType1021);
            intf1026 = $tmp1027;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1029 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf1026);
            intfCC1028 = $tmp1029;
            panda$collections$ListView* $tmp1031 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType1021);
            methods1030 = $tmp1031;
            panda$core$String* $tmp1034 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1033, $tmp1034);
            panda$core$String* $tmp1037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1035, &$s1036);
            panda$core$String* $tmp1038 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf1026)->name);
            panda$core$String* $tmp1039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1037, $tmp1038);
            panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1039, &$s1040);
            name1032 = $tmp1041;
            org$pandalanguage$pandac$Type* $tmp1044 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1045 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1044);
            panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1043, $tmp1045);
            panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1046, &$s1047);
            ITable* $tmp1049 = ((panda$collections$CollectionView*) methods1030)->$class->itable;
            while ($tmp1049->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1049 = $tmp1049->next;
            }
            $fn1051 $tmp1050 = $tmp1049->methods[0];
            panda$core$Int64 $tmp1052 = $tmp1050(((panda$collections$CollectionView*) methods1030));
            panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1048, ((panda$core$Object*) wrap_panda$core$Int64($tmp1052)));
            panda$core$String* $tmp1055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1053, &$s1054);
            t1042 = $tmp1055;
            panda$core$MutableString* $tmp1057 = (panda$core$MutableString*) malloc(48);
            $tmp1057->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1057->refCount.value = 1;
            panda$core$String* $tmp1059 = panda$core$String$convert$R$panda$core$String(name1032);
            panda$core$String* $tmp1061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1059, &$s1060);
            panda$core$String* $tmp1062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1061, t1042);
            panda$core$String* $tmp1064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1062, &$s1063);
            org$pandalanguage$pandac$Type* $tmp1065 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1066 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1065);
            panda$core$String* $tmp1067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1064, $tmp1066);
            panda$core$String* $tmp1069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1067, &$s1068);
            panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1070, intfCC1028->type);
            panda$core$String* $tmp1073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1071, &$s1072);
            panda$core$String* $tmp1074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1073, intfCC1028->name);
            panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1074, &$s1075);
            org$pandalanguage$pandac$Type* $tmp1077 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1078 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1077);
            panda$core$String* $tmp1079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1076, $tmp1078);
            panda$core$String* $tmp1081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1079, &$s1080);
            panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1069, $tmp1081);
            panda$core$String* $tmp1083 = panda$core$String$convert$R$panda$core$String(previous1007);
            panda$core$String* $tmp1085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1083, &$s1084);
            ITable* $tmp1086 = ((panda$collections$CollectionView*) methods1030)->$class->itable;
            while ($tmp1086->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1086 = $tmp1086->next;
            }
            $fn1088 $tmp1087 = $tmp1086->methods[0];
            panda$core$Int64 $tmp1089 = $tmp1087(((panda$collections$CollectionView*) methods1030));
            panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1085, ((panda$core$Object*) wrap_panda$core$Int64($tmp1089)));
            panda$core$String* $tmp1092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1090, &$s1091);
            panda$core$String* $tmp1093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1082, $tmp1092);
            panda$core$MutableString$init$panda$core$String($tmp1057, $tmp1093);
            result1056 = $tmp1057;
            separator1094 = &$s1095;
            {
                ITable* $tmp1097 = ((panda$collections$Iterable*) methods1030)->$class->itable;
                while ($tmp1097->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1097 = $tmp1097->next;
                }
                $fn1099 $tmp1098 = $tmp1097->methods[0];
                panda$collections$Iterator* $tmp1100 = $tmp1098(((panda$collections$Iterable*) methods1030));
                m$Iter1096 = $tmp1100;
                $l1101:;
                ITable* $tmp1103 = m$Iter1096->$class->itable;
                while ($tmp1103->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1103 = $tmp1103->next;
                }
                $fn1105 $tmp1104 = $tmp1103->methods[0];
                panda$core$Bit $tmp1106 = $tmp1104(m$Iter1096);
                panda$core$Bit $tmp1107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1106);
                if (!$tmp1107.value) goto $l1102;
                {
                    ITable* $tmp1109 = m$Iter1096->$class->itable;
                    while ($tmp1109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1109 = $tmp1109->next;
                    }
                    $fn1111 $tmp1110 = $tmp1109->methods[1];
                    panda$core$Object* $tmp1112 = $tmp1110(m$Iter1096);
                    m1108 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1112);
                    panda$core$MutableString$append$panda$core$String(result1056, separator1094);
                    separator1094 = &$s1113;
                    panda$core$Bit $tmp1114 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1108->annotations);
                    if ($tmp1114.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1056, &$s1115);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1117 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, m1108, ((panda$io$OutputStream*) self->wrapperShims));
                        shim1116 = $tmp1117;
                        panda$core$String* $tmp1119 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1108);
                        panda$core$String* $tmp1120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1118, $tmp1119);
                        panda$core$String* $tmp1122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1120, &$s1121);
                        panda$core$String* $tmp1123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1122, shim1116);
                        panda$core$String* $tmp1125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1123, &$s1124);
                        panda$core$MutableString$append$panda$core$String(result1056, $tmp1125);
                    }
                    }
                }
                goto $l1101;
                $l1102:;
            }
            panda$core$MutableString$append$panda$core$String(result1056, &$s1126);
            panda$core$String* $tmp1127 = panda$core$MutableString$finish$R$panda$core$String(result1056);
            (($fn1128) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1127);
            panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1129, t1042);
            panda$core$String* $tmp1132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1130, &$s1131);
            panda$core$String* $tmp1133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1132, name1032);
            panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1133, &$s1134);
            previous1007 = $tmp1135;
        }
        goto $l1014;
        $l1015:;
    }
    return previous1007;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1138;
    panda$core$Bit $tmp1136 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp1137 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1136);
    if ($tmp1137.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1141 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1140 = $tmp1141.value;
    if (!$tmp1140) goto $l1142;
    panda$core$Bit $tmp1143 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp1140 = $tmp1143.value;
    $l1142:;
    panda$core$Bit $tmp1144 = { $tmp1140 };
    bool $tmp1139 = $tmp1144.value;
    if (!$tmp1139) goto $l1145;
    org$pandalanguage$pandac$ClassDecl* $tmp1146 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1147 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp1146);
    $tmp1139 = $tmp1147.value;
    $l1145:;
    panda$core$Bit $tmp1148 = { $tmp1139 };
    result1138 = $tmp1148;
    panda$core$Bit $tmp1150 = panda$core$Bit$$NOT$R$panda$core$Bit(result1138);
    bool $tmp1149 = $tmp1150.value;
    if ($tmp1149) goto $l1151;
    panda$core$Bit $tmp1153 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1154 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1153);
    bool $tmp1152 = $tmp1154.value;
    if (!$tmp1152) goto $l1155;
    panda$core$Bit $tmp1157 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1156 = $tmp1157.value;
    if ($tmp1156) goto $l1158;
    panda$core$Bit $tmp1159 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp1156 = $tmp1159.value;
    $l1158:;
    panda$core$Bit $tmp1160 = { $tmp1156 };
    $tmp1152 = $tmp1160.value;
    $l1155:;
    panda$core$Bit $tmp1161 = { $tmp1152 };
    $tmp1149 = $tmp1161.value;
    $l1151:;
    panda$core$Bit $tmp1162 = { $tmp1149 };
    PANDA_ASSERT($tmp1162.value);
    return result1138;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1163;
    org$pandalanguage$pandac$Type* declared1164;
    org$pandalanguage$pandac$Type* inherited1167;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1170;
    panda$core$MutableString* resultType1175;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1184;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1165 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1166 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp1165);
    declared1164 = $tmp1166;
    org$pandalanguage$pandac$Type* $tmp1168 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited1167 = $tmp1168;
    panda$core$Bit $tmp1169 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared1164, inherited1167);
    if ($tmp1169.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1171 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1172 = org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(self, p_m, $tmp1171, ((panda$io$OutputStream*) self->shims));
        shim1170 = $tmp1172;
        resultName1163 = shim1170->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1173 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        resultName1163 = $tmp1173;
    }
    }
    panda$core$Bit $tmp1174 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp1174.value) {
    {
        panda$core$MutableString* $tmp1176 = (panda$core$MutableString*) malloc(48);
        $tmp1176->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1176->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1176, &$s1178);
        resultType1175 = $tmp1176;
        panda$core$Int64 $tmp1179 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1167->subtypes);
        panda$core$Int64 $tmp1180 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1179, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1167->subtypes, $tmp1180);
        panda$core$String* $tmp1182 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1181));
        panda$core$MutableString$append$panda$core$String(resultType1175, $tmp1182);
        panda$core$MutableString$append$panda$core$String(resultType1175, &$s1183);
        panda$core$Int64 $tmp1185 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1167->subtypes);
        panda$core$Int64 $tmp1186 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1185, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1184, ((panda$core$Int64) { 0 }), $tmp1186, ((panda$core$Bit) { false }));
        int64_t $tmp1188 = $tmp1184.min.value;
        panda$core$Int64 i1187 = { $tmp1188 };
        int64_t $tmp1190 = $tmp1184.max.value;
        bool $tmp1191 = $tmp1184.inclusive.value;
        if ($tmp1191) goto $l1198; else goto $l1199;
        $l1198:;
        if ($tmp1188 <= $tmp1190) goto $l1192; else goto $l1194;
        $l1199:;
        if ($tmp1188 < $tmp1190) goto $l1192; else goto $l1194;
        $l1192:;
        {
            panda$core$MutableString$append$panda$core$String(resultType1175, &$s1200);
            panda$core$Object* $tmp1201 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1167->subtypes, i1187);
            panda$core$String* $tmp1202 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1201));
            panda$core$MutableString$append$panda$core$String(resultType1175, $tmp1202);
        }
        $l1195:;
        int64_t $tmp1204 = $tmp1190 - i1187.value;
        if ($tmp1191) goto $l1205; else goto $l1206;
        $l1205:;
        if ($tmp1204 >= 1) goto $l1203; else goto $l1194;
        $l1206:;
        if ($tmp1204 > 1) goto $l1203; else goto $l1194;
        $l1203:;
        i1187.value += 1;
        goto $l1192;
        $l1194:;
        panda$core$MutableString$append$panda$core$String(resultType1175, &$s1209);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1210 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1210->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1210->refCount.value = 1;
        panda$core$String* $tmp1212 = panda$core$MutableString$finish$R$panda$core$String(resultType1175);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1210, ((panda$core$Object*) resultName1163), ((panda$core$Object*) $tmp1212));
        return $tmp1210;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1213 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1213->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1213->refCount.value = 1;
    panda$core$String* $tmp1215 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, inherited1167);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1213, ((panda$core$Object*) resultName1163), ((panda$core$Object*) $tmp1215));
    return $tmp1213;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1218;
    panda$core$String* type1220;
    panda$collections$ListView* vtable1238;
    panda$core$String* superPtr1262;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1263;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1274;
    panda$core$MutableString* code1278;
    panda$core$String* separator1319;
    panda$collections$Iterator* m$Iter1321;
    org$pandalanguage$pandac$MethodDecl* m1333;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1340;
    panda$core$Bit $tmp1216 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp1217 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1216);
    PANDA_ASSERT($tmp1217.value);
    panda$core$Object* $tmp1219 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result1218 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1219);
    if (((panda$core$Bit) { result1218 == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1221 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1221->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1221->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1224 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp1225 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1224)->name);
            panda$core$String* $tmp1226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1223, $tmp1225);
            panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1226, &$s1227);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1221, $tmp1228, &$s1229);
            result1218 = $tmp1221;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1218));
            panda$core$String* $tmp1230 = panda$core$String$convert$R$panda$core$String(result1218->name);
            panda$core$String* $tmp1232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1230, &$s1231);
            panda$core$String* $tmp1233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1232, result1218->type);
            panda$core$String* $tmp1235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1233, &$s1234);
            (($fn1236) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1235);
            panda$core$Object* $tmp1237 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1237);
        }
        }
        panda$collections$ListView* $tmp1239 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable1238 = $tmp1239;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1240 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1240->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1240->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1243 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp1244 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1243)->name);
        panda$core$String* $tmp1245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1242, $tmp1244);
        panda$core$String* $tmp1247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1245, &$s1246);
        panda$core$String* $tmp1250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1248, &$s1249);
        panda$core$String* $tmp1252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1250, &$s1251);
        ITable* $tmp1254 = ((panda$collections$CollectionView*) vtable1238)->$class->itable;
        while ($tmp1254->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1254 = $tmp1254->next;
        }
        $fn1256 $tmp1255 = $tmp1254->methods[0];
        panda$core$Int64 $tmp1257 = $tmp1255(((panda$collections$CollectionView*) vtable1238));
        panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1253, ((panda$core$Object*) wrap_panda$core$Int64($tmp1257)));
        panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1258, &$s1259);
        panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1252, $tmp1260);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1240, $tmp1247, $tmp1261);
        result1218 = $tmp1240;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1218));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1264 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1265 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1264);
            superCC1263 = $tmp1265;
            panda$core$String* $tmp1267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1266, superCC1263->type);
            panda$core$String* $tmp1269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1267, &$s1268);
            panda$core$String* $tmp1270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1269, superCC1263->name);
            panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1270, &$s1271);
            superPtr1262 = $tmp1272;
        }
        }
        else {
        {
            superPtr1262 = &$s1273;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1275 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1276 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1275);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1277 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1276);
        clConstant1274 = $tmp1277;
        panda$core$MutableString* $tmp1279 = (panda$core$MutableString*) malloc(48);
        $tmp1279->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1279->refCount.value = 1;
        panda$core$String* $tmp1281 = panda$core$String$convert$R$panda$core$String(result1218->name);
        panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1281, &$s1282);
        panda$core$MutableString$init$panda$core$String($tmp1279, $tmp1283);
        code1278 = $tmp1279;
        panda$core$Bit $tmp1284 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
        if ($tmp1284.value) {
        {
            panda$core$MutableString$append$panda$core$String(code1278, &$s1285);
        }
        }
        panda$core$String* $tmp1287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1286, result1218->type);
        panda$core$String* $tmp1289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1287, &$s1288);
        panda$core$String* $tmp1291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1290, clConstant1274->type);
        panda$core$String* $tmp1293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1291, &$s1292);
        panda$core$String* $tmp1294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1293, clConstant1274->name);
        panda$core$String* $tmp1296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1294, &$s1295);
        panda$core$String* $tmp1297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1289, $tmp1296);
        panda$core$String* $tmp1300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1298, &$s1299);
        panda$core$String* $tmp1302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1300, &$s1301);
        panda$core$String* $tmp1303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1302, superPtr1262);
        panda$core$String* $tmp1305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1303, &$s1304);
        panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1297, $tmp1305);
        panda$core$String* $tmp1307 = org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1308 = panda$core$String$convert$R$panda$core$String($tmp1307);
        panda$core$String* $tmp1310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1308, &$s1309);
        ITable* $tmp1311 = ((panda$collections$CollectionView*) vtable1238)->$class->itable;
        while ($tmp1311->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1311 = $tmp1311->next;
        }
        $fn1313 $tmp1312 = $tmp1311->methods[0];
        panda$core$Int64 $tmp1314 = $tmp1312(((panda$collections$CollectionView*) vtable1238));
        panda$core$String* $tmp1315 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1310, ((panda$core$Object*) wrap_panda$core$Int64($tmp1314)));
        panda$core$String* $tmp1317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1315, &$s1316);
        panda$core$String* $tmp1318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1306, $tmp1317);
        panda$core$MutableString$append$panda$core$String(code1278, $tmp1318);
        separator1319 = &$s1320;
        {
            ITable* $tmp1322 = ((panda$collections$Iterable*) vtable1238)->$class->itable;
            while ($tmp1322->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1322 = $tmp1322->next;
            }
            $fn1324 $tmp1323 = $tmp1322->methods[0];
            panda$collections$Iterator* $tmp1325 = $tmp1323(((panda$collections$Iterable*) vtable1238));
            m$Iter1321 = $tmp1325;
            $l1326:;
            ITable* $tmp1328 = m$Iter1321->$class->itable;
            while ($tmp1328->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1328 = $tmp1328->next;
            }
            $fn1330 $tmp1329 = $tmp1328->methods[0];
            panda$core$Bit $tmp1331 = $tmp1329(m$Iter1321);
            panda$core$Bit $tmp1332 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1331);
            if (!$tmp1332.value) goto $l1327;
            {
                ITable* $tmp1334 = m$Iter1321->$class->itable;
                while ($tmp1334->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1334 = $tmp1334->next;
                }
                $fn1336 $tmp1335 = $tmp1334->methods[1];
                panda$core$Object* $tmp1337 = $tmp1335(m$Iter1321);
                m1333 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1337);
                panda$core$MutableString$append$panda$core$String(code1278, separator1319);
                panda$core$Bit $tmp1338 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1333->annotations);
                if ($tmp1338.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code1278, &$s1339);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1341 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m1333);
                    entry1340 = $tmp1341;
                    panda$core$String* $tmp1343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1342, ((panda$core$String*) entry1340->second));
                    panda$core$String* $tmp1345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1343, &$s1344);
                    panda$core$String* $tmp1346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1345, ((panda$core$String*) entry1340->first));
                    panda$core$String* $tmp1348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1346, &$s1347);
                    panda$core$MutableString$append$panda$core$String(code1278, $tmp1348);
                }
                }
                separator1319 = &$s1349;
            }
            goto $l1326;
            $l1327:;
        }
        panda$core$MutableString$append$panda$core$String(code1278, &$s1350);
        panda$core$String* $tmp1351 = panda$core$MutableString$finish$R$panda$core$String(code1278);
        (($fn1352) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1351);
    }
    }
    return result1218;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1353;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1359;
    panda$core$String* type1362;
    org$pandalanguage$pandac$ClassDecl* value1373;
    panda$collections$ListView* valueVTable1376;
    panda$collections$ListView* vtable1399;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1401;
    panda$core$String* superCast1404;
    panda$core$String* itable1412;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1414;
    panda$core$MutableString* code1418;
    panda$core$String* separator1463;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1465;
    org$pandalanguage$pandac$MethodDecl* m1483;
    panda$core$String* methodName1488;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
    panda$core$String* $tmp1355 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1354, $tmp1355);
    panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1356, &$s1357);
    name1353 = $tmp1358;
    panda$core$Object* $tmp1360 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name1353));
    result1359 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1360);
    if (((panda$core$Bit) { result1359 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1361 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1361);
            type1362 = &$s1363;
            panda$core$String* $tmp1364 = panda$core$String$convert$R$panda$core$String(name1353);
            panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1364, &$s1365);
            panda$core$String* $tmp1367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, type1362);
            panda$core$String* $tmp1369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1367, &$s1368);
            (($fn1370) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1369);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1371 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1371->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1371->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1371, name1353, type1362);
            result1359 = $tmp1371;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1374 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1375 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1374);
            value1373 = $tmp1375;
            panda$collections$ListView* $tmp1377 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1373);
            valueVTable1376 = $tmp1377;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1378 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1378->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1378->refCount.value = 1;
            panda$core$String* $tmp1381 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1380, $tmp1381);
            panda$core$String* $tmp1384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, &$s1383);
            panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1385, &$s1386);
            panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1387, &$s1388);
            ITable* $tmp1391 = ((panda$collections$CollectionView*) valueVTable1376)->$class->itable;
            while ($tmp1391->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1391 = $tmp1391->next;
            }
            $fn1393 $tmp1392 = $tmp1391->methods[0];
            panda$core$Int64 $tmp1394 = $tmp1392(((panda$collections$CollectionView*) valueVTable1376));
            panda$core$String* $tmp1395 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1390, ((panda$core$Object*) wrap_panda$core$Int64($tmp1394)));
            panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1395, &$s1396);
            panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, $tmp1397);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1378, $tmp1384, $tmp1398);
            result1359 = $tmp1378;
            panda$collections$ListView* $tmp1400 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1399 = $tmp1400;
            org$pandalanguage$pandac$ClassDecl* $tmp1402 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1403 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1402);
            superCC1401 = $tmp1403;
            panda$core$String* $tmp1406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1405, superCC1401->type);
            panda$core$String* $tmp1408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1406, &$s1407);
            panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1408, superCC1401->name);
            panda$core$String* $tmp1411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1409, &$s1410);
            superCast1404 = $tmp1411;
            panda$core$String* $tmp1413 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1412 = $tmp1413;
            org$pandalanguage$pandac$Type* $tmp1415 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1416 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1415);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1417 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1416);
            clConstant1414 = $tmp1417;
            panda$core$MutableString* $tmp1419 = (panda$core$MutableString*) malloc(48);
            $tmp1419->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1419->refCount.value = 1;
            panda$core$String* $tmp1421 = panda$core$String$convert$R$panda$core$String(result1359->name);
            panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, &$s1422);
            panda$core$MutableString$init$panda$core$String($tmp1419, $tmp1423);
            code1418 = $tmp1419;
            panda$core$Bit $tmp1424 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1424.value) {
            {
                panda$core$MutableString$append$panda$core$String(code1418, &$s1425);
            }
            }
            panda$core$String* $tmp1427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1426, result1359->type);
            panda$core$String* $tmp1429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1427, &$s1428);
            panda$core$String* $tmp1431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1430, clConstant1414->type);
            panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1431, &$s1432);
            panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1433, clConstant1414->name);
            panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, &$s1435);
            panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1429, $tmp1436);
            panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1438, &$s1439);
            panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1440, &$s1441);
            org$pandalanguage$pandac$Type* $tmp1443 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1444 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1443);
            panda$core$String* $tmp1445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1442, $tmp1444);
            panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1445, &$s1446);
            panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1447, superCast1404);
            panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1448, &$s1449);
            panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1437, $tmp1450);
            panda$core$String* $tmp1452 = panda$core$String$convert$R$panda$core$String(itable1412);
            panda$core$String* $tmp1454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1452, &$s1453);
            ITable* $tmp1455 = ((panda$collections$CollectionView*) valueVTable1376)->$class->itable;
            while ($tmp1455->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1455 = $tmp1455->next;
            }
            $fn1457 $tmp1456 = $tmp1455->methods[0];
            panda$core$Int64 $tmp1458 = $tmp1456(((panda$collections$CollectionView*) valueVTable1376));
            panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1454, ((panda$core$Object*) wrap_panda$core$Int64($tmp1458)));
            panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1459, &$s1460);
            panda$core$String* $tmp1462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1451, $tmp1461);
            panda$core$MutableString$append$panda$core$String(code1418, $tmp1462);
            separator1463 = &$s1464;
            ITable* $tmp1466 = ((panda$collections$CollectionView*) valueVTable1376)->$class->itable;
            while ($tmp1466->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1466 = $tmp1466->next;
            }
            $fn1468 $tmp1467 = $tmp1466->methods[0];
            panda$core$Int64 $tmp1469 = $tmp1467(((panda$collections$CollectionView*) valueVTable1376));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1465, ((panda$core$Int64) { 0 }), $tmp1469, ((panda$core$Bit) { false }));
            int64_t $tmp1471 = $tmp1465.min.value;
            panda$core$Int64 i1470 = { $tmp1471 };
            int64_t $tmp1473 = $tmp1465.max.value;
            bool $tmp1474 = $tmp1465.inclusive.value;
            if ($tmp1474) goto $l1481; else goto $l1482;
            $l1481:;
            if ($tmp1471 <= $tmp1473) goto $l1475; else goto $l1477;
            $l1482:;
            if ($tmp1471 < $tmp1473) goto $l1475; else goto $l1477;
            $l1475:;
            {
                ITable* $tmp1484 = vtable1399->$class->itable;
                while ($tmp1484->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1484 = $tmp1484->next;
                }
                $fn1486 $tmp1485 = $tmp1484->methods[0];
                panda$core$Object* $tmp1487 = $tmp1485(vtable1399, i1470);
                m1483 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1487);
                if (((panda$core$Bit) { ((panda$core$Object*) m1483->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1489 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, m1483, ((panda$io$OutputStream*) self->wrapperShims));
                    methodName1488 = $tmp1489;
                }
                }
                else {
                {
                    panda$core$String* $tmp1490 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1483);
                    methodName1488 = $tmp1490;
                    if (m1483->owner->external.value) {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1483);
                    }
                    }
                }
                }
                panda$core$String* $tmp1491 = panda$core$String$convert$R$panda$core$String(separator1463);
                panda$core$String* $tmp1493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1491, &$s1492);
                panda$core$String* $tmp1494 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1483);
                panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1493, $tmp1494);
                panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1495, &$s1496);
                panda$core$String* $tmp1498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1497, methodName1488);
                panda$core$String* $tmp1500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1498, &$s1499);
                panda$core$MutableString$append$panda$core$String(code1418, $tmp1500);
                separator1463 = &$s1501;
            }
            $l1478:;
            int64_t $tmp1503 = $tmp1473 - i1470.value;
            if ($tmp1474) goto $l1504; else goto $l1505;
            $l1504:;
            if ($tmp1503 >= 1) goto $l1502; else goto $l1477;
            $l1505:;
            if ($tmp1503 > 1) goto $l1502; else goto $l1477;
            $l1502:;
            i1470.value += 1;
            goto $l1475;
            $l1477:;
            panda$core$MutableString$append$panda$core$String(code1418, &$s1508);
            panda$core$String* $tmp1509 = panda$core$MutableString$finish$R$panda$core$String(code1418);
            (($fn1510) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1509);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name1353), ((panda$core$Object*) result1359));
    }
    }
    return result1359;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$MutableString* result1511;
    panda$core$String$Index current1516;
    panda$core$String$Index end1518;
    panda$core$Char32 c1523;
    panda$core$Char8 $tmp1526;
    panda$core$MutableString* $tmp1512 = (panda$core$MutableString*) malloc(48);
    $tmp1512->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1512->refCount.value = 1;
    panda$core$Int64 $tmp1514 = panda$core$String$byteLength$R$panda$core$Int64(p_s);
    panda$core$Int64 $tmp1515 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp1514, ((panda$core$Int64) { 2 }));
    panda$core$MutableString$init$panda$core$Int64($tmp1512, $tmp1515);
    result1511 = $tmp1512;
    panda$core$String$Index $tmp1517 = panda$core$String$start$R$panda$core$String$Index(p_s);
    current1516 = $tmp1517;
    panda$core$String$Index $tmp1519 = panda$core$String$end$R$panda$core$String$Index(p_s);
    end1518 = $tmp1519;
    $l1520:;
    panda$core$Bit $tmp1522 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(current1516, end1518);
    if (!$tmp1522.value) goto $l1521;
    {
        panda$core$Char32 $tmp1524 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_s, current1516);
        c1523 = $tmp1524;
        panda$core$Int32 $tmp1525 = panda$core$Char32$convert$R$panda$core$Int32(c1523);
        switch ($tmp1525.value) {
            case 46:
            {
                panda$core$Char8$init$panda$core$UInt8(&$tmp1526, ((panda$core$UInt8) { 36 }));
                panda$core$MutableString$append$panda$core$Char8(result1511, $tmp1526);
            }
            break;
            case 63:
            {
                panda$core$MutableString$append$panda$core$String(result1511, &$s1527);
            }
            break;
            case 60:
            {
                panda$core$MutableString$append$panda$core$String(result1511, &$s1528);
            }
            break;
            case 62:
            {
                panda$core$MutableString$append$panda$core$String(result1511, &$s1529);
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
                panda$core$MutableString$append$panda$core$String(result1511, &$s1530);
            }
            break;
            default:
            {
                panda$core$MutableString$append$panda$core$Char32(result1511, c1523);
            }
        }
        panda$core$String$Index $tmp1531 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_s, current1516);
        current1516 = $tmp1531;
    }
    goto $l1520;
    $l1521:;
    panda$core$String* $tmp1532 = panda$core$MutableString$finish$R$panda$core$String(result1511);
    return $tmp1532;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1536;
    panda$core$String* result1564;
    panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1533.value) {
    {
        panda$core$Int64 $tmp1534 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1535 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1534, ((panda$core$Int64) { 0 }));
        if ($tmp1535.value) {
        {
            panda$core$Int64 $tmp1537 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1536, ((panda$core$Int64) { 0 }), $tmp1537, ((panda$core$Bit) { false }));
            int64_t $tmp1539 = $tmp1536.min.value;
            panda$core$Int64 i1538 = { $tmp1539 };
            int64_t $tmp1541 = $tmp1536.max.value;
            bool $tmp1542 = $tmp1536.inclusive.value;
            if ($tmp1542) goto $l1549; else goto $l1550;
            $l1549:;
            if ($tmp1539 <= $tmp1541) goto $l1543; else goto $l1545;
            $l1550:;
            if ($tmp1539 < $tmp1541) goto $l1543; else goto $l1545;
            $l1543:;
            {
                panda$core$Object* $tmp1551 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1538);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1551)->name) }).value) {
                {
                    panda$core$Object* $tmp1552 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1553 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1552)->argRefs, i1538);
                    return ((panda$core$String*) $tmp1553);
                }
                }
            }
            $l1546:;
            int64_t $tmp1555 = $tmp1541 - i1538.value;
            if ($tmp1542) goto $l1556; else goto $l1557;
            $l1556:;
            if ($tmp1555 >= 1) goto $l1554; else goto $l1545;
            $l1557:;
            if ($tmp1555 > 1) goto $l1554; else goto $l1545;
            $l1554:;
            i1538.value += 1;
            goto $l1543;
            $l1545:;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp1561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1560, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1561, &$s1562);
        return $tmp1563;
    }
    }
    panda$core$Object* $tmp1565 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1564 = ((panda$core$String*) $tmp1565);
    if (((panda$core$Bit) { result1564 == NULL }).value) {
    {
        panda$core$Int64 $tmp1566 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1566;
        panda$core$String* $tmp1568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1567, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1568, &$s1569);
        panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1570, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1571, &$s1572);
        result1564 = $tmp1573;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1564));
    }
    }
    panda$core$Int64 $tmp1574 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1575 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1574, ((panda$core$Int64) { 0 }));
    if ($tmp1575.value) {
    {
        panda$core$Object* $tmp1576 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1564, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1576)->varSuffix);
        result1564 = $tmp1577;
    }
    }
    return result1564;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1581;
    panda$core$String* $match$863_91587;
    panda$collections$Iterator* p$Iter1664;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1676;
    panda$core$Bit $tmp1579 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1578);
    if ($tmp1579.value) {
    {
        return &$s1580;
    }
    }
    panda$core$MutableString* $tmp1582 = (panda$core$MutableString*) malloc(48);
    $tmp1582->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1582->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1582, &$s1584);
    result1581 = $tmp1582;
    panda$core$String* $tmp1585 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1581, $tmp1585);
    panda$core$MutableString$append$panda$core$String(result1581, &$s1586);
    {
        $match$863_91587 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1589 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1588);
        if ($tmp1589.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1590);
        }
        }
        else {
        panda$core$Bit $tmp1592 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1591);
        if ($tmp1592.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1593);
        }
        }
        else {
        panda$core$Bit $tmp1595 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1594);
        if ($tmp1595.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1596);
        }
        }
        else {
        panda$core$Bit $tmp1598 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1597);
        if ($tmp1598.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1599);
        }
        }
        else {
        panda$core$Bit $tmp1601 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1600);
        if ($tmp1601.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1602);
        }
        }
        else {
        panda$core$Bit $tmp1604 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1603);
        if ($tmp1604.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1605);
        }
        }
        else {
        panda$core$Bit $tmp1607 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1606);
        if ($tmp1607.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1608);
        }
        }
        else {
        panda$core$Bit $tmp1610 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1609);
        if ($tmp1610.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1611);
        }
        }
        else {
        panda$core$Bit $tmp1613 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1612);
        if ($tmp1613.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1614);
        }
        }
        else {
        panda$core$Bit $tmp1616 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1615);
        if ($tmp1616.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1617);
        }
        }
        else {
        panda$core$Bit $tmp1619 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1618);
        if ($tmp1619.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1620);
        }
        }
        else {
        panda$core$Bit $tmp1622 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1621);
        if ($tmp1622.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1623);
        }
        }
        else {
        panda$core$Bit $tmp1625 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1624);
        if ($tmp1625.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1626);
        }
        }
        else {
        panda$core$Bit $tmp1628 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1627);
        if ($tmp1628.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1629);
        }
        }
        else {
        panda$core$Bit $tmp1631 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1630);
        if ($tmp1631.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1632);
        }
        }
        else {
        panda$core$Bit $tmp1634 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1633);
        if ($tmp1634.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1635);
        }
        }
        else {
        panda$core$Bit $tmp1637 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1636);
        if ($tmp1637.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1638);
        }
        }
        else {
        panda$core$Bit $tmp1640 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1639);
        if ($tmp1640.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1641);
        }
        }
        else {
        panda$core$Bit $tmp1643 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1642);
        if ($tmp1643.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1644);
        }
        }
        else {
        panda$core$Bit $tmp1646 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1645);
        if ($tmp1646.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1647);
        }
        }
        else {
        panda$core$Bit $tmp1649 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1648);
        if ($tmp1649.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1650);
        }
        }
        else {
        panda$core$Bit $tmp1652 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1651);
        if ($tmp1652.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1653);
        }
        }
        else {
        panda$core$Bit $tmp1655 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1654);
        if ($tmp1655.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1656);
        }
        }
        else {
        panda$core$Bit $tmp1658 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1657);
        if ($tmp1658.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1659);
        }
        }
        else {
        panda$core$Bit $tmp1661 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$863_91587, &$s1660);
        if ($tmp1661.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1581, &$s1662);
        }
        }
        else {
        {
            panda$core$String* $tmp1663 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1581, $tmp1663);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        ITable* $tmp1665 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1665->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1665 = $tmp1665->next;
        }
        $fn1667 $tmp1666 = $tmp1665->methods[0];
        panda$collections$Iterator* $tmp1668 = $tmp1666(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1664 = $tmp1668;
        $l1669:;
        ITable* $tmp1671 = p$Iter1664->$class->itable;
        while ($tmp1671->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1671 = $tmp1671->next;
        }
        $fn1673 $tmp1672 = $tmp1671->methods[0];
        panda$core$Bit $tmp1674 = $tmp1672(p$Iter1664);
        panda$core$Bit $tmp1675 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1674);
        if (!$tmp1675.value) goto $l1670;
        {
            ITable* $tmp1677 = p$Iter1664->$class->itable;
            while ($tmp1677->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1677 = $tmp1677->next;
            }
            $fn1679 $tmp1678 = $tmp1677->methods[1];
            panda$core$Object* $tmp1680 = $tmp1678(p$Iter1664);
            p1676 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1680);
            panda$core$String* $tmp1682 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1676->type)->name);
            panda$core$String* $tmp1683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1681, $tmp1682);
            panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1683, &$s1684);
            panda$core$MutableString$append$panda$core$String(result1581, $tmp1685);
        }
        goto $l1669;
        $l1670:;
    }
    org$pandalanguage$pandac$Type* $tmp1686 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1687 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1686);
    if ($tmp1687.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1581, &$s1688);
        panda$core$String* $tmp1689 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1581, $tmp1689);
    }
    }
    panda$core$String* $tmp1690 = panda$core$MutableString$finish$R$panda$core$String(result1581);
    return $tmp1690;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1691 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1691.value);
    panda$core$String* $tmp1693 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1692, $tmp1693);
    panda$core$String* $tmp1696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1694, &$s1695);
    panda$core$String* $tmp1697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1696, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1697, &$s1698);
    return $tmp1699;
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
    panda$core$String* leftRef1700;
    panda$core$String* leftField1704;
    panda$core$String* start1713;
    panda$core$String* ifTrue1714;
    panda$core$String* ifFalse1716;
    panda$core$String* rightRef1729;
    panda$core$String* rightField1733;
    panda$core$String* truePred1742;
    panda$core$String* result1748;
    panda$core$String* $tmp1701 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1700 = $tmp1701;
    org$pandalanguage$pandac$Type* $tmp1702 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1703 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1702);
    if ($tmp1703.value) {
    {
        panda$core$String* $tmp1705 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1704 = $tmp1705;
        panda$core$String* $tmp1706 = panda$core$String$convert$R$panda$core$String(leftField1704);
        panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1707);
        panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, leftRef1700);
        panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1709, &$s1710);
        (($fn1712) p_out->$class->vtable[19])(p_out, $tmp1711);
        leftRef1700 = leftField1704;
    }
    }
    start1713 = self->currentBlock;
    panda$core$String* $tmp1715 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1714 = $tmp1715;
    panda$core$String* $tmp1717 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1716 = $tmp1717;
    panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1718, leftRef1700);
    panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, &$s1720);
    panda$core$String* $tmp1722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, ifTrue1714);
    panda$core$String* $tmp1724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1722, &$s1723);
    panda$core$String* $tmp1725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1724, ifFalse1716);
    panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1725, &$s1726);
    (($fn1728) p_out->$class->vtable[19])(p_out, $tmp1727);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue1714, p_out);
    panda$core$String* $tmp1730 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1729 = $tmp1730;
    org$pandalanguage$pandac$Type* $tmp1731 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1732 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1731);
    if ($tmp1732.value) {
    {
        panda$core$String* $tmp1734 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1733 = $tmp1734;
        panda$core$String* $tmp1735 = panda$core$String$convert$R$panda$core$String(rightField1733);
        panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1735, &$s1736);
        panda$core$String* $tmp1738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1737, rightRef1729);
        panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1738, &$s1739);
        (($fn1741) p_out->$class->vtable[19])(p_out, $tmp1740);
        rightRef1729 = rightField1733;
    }
    }
    truePred1742 = self->currentBlock;
    panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1743, ifFalse1716);
    panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1744, &$s1745);
    (($fn1747) p_out->$class->vtable[19])(p_out, $tmp1746);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse1716, p_out);
    panda$core$String* $tmp1749 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1748 = $tmp1749;
    panda$core$String* $tmp1750 = panda$core$String$convert$R$panda$core$String(result1748);
    panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1750, &$s1751);
    panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1752, start1713);
    panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, &$s1754);
    panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1755, rightRef1729);
    panda$core$String* $tmp1758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1756, &$s1757);
    panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1758, truePred1742);
    panda$core$String* $tmp1761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1759, &$s1760);
    (($fn1762) p_out->$class->vtable[19])(p_out, $tmp1761);
    return result1748;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1763;
    panda$core$String* leftField1767;
    panda$core$String* start1776;
    panda$core$String* ifTrue1777;
    panda$core$String* ifFalse1779;
    panda$core$String* rightRef1792;
    panda$core$String* rightField1796;
    panda$core$String* falsePred1805;
    panda$core$String* result1811;
    panda$core$String* $tmp1764 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1763 = $tmp1764;
    org$pandalanguage$pandac$Type* $tmp1765 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1766 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1765);
    if ($tmp1766.value) {
    {
        panda$core$String* $tmp1768 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1767 = $tmp1768;
        panda$core$String* $tmp1769 = panda$core$String$convert$R$panda$core$String(leftField1767);
        panda$core$String* $tmp1771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1769, &$s1770);
        panda$core$String* $tmp1772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1771, leftRef1763);
        panda$core$String* $tmp1774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1772, &$s1773);
        (($fn1775) p_out->$class->vtable[19])(p_out, $tmp1774);
        leftRef1763 = leftField1767;
    }
    }
    start1776 = self->currentBlock;
    panda$core$String* $tmp1778 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1777 = $tmp1778;
    panda$core$String* $tmp1780 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1779 = $tmp1780;
    panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1781, leftRef1763);
    panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1782, &$s1783);
    panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, ifTrue1777);
    panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1785, &$s1786);
    panda$core$String* $tmp1788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1787, ifFalse1779);
    panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1788, &$s1789);
    (($fn1791) p_out->$class->vtable[19])(p_out, $tmp1790);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse1779, p_out);
    panda$core$String* $tmp1793 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1792 = $tmp1793;
    org$pandalanguage$pandac$Type* $tmp1794 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1795 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1794);
    if ($tmp1795.value) {
    {
        panda$core$String* $tmp1797 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1796 = $tmp1797;
        panda$core$String* $tmp1798 = panda$core$String$convert$R$panda$core$String(rightField1796);
        panda$core$String* $tmp1800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1798, &$s1799);
        panda$core$String* $tmp1801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1800, rightRef1792);
        panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1801, &$s1802);
        (($fn1804) p_out->$class->vtable[19])(p_out, $tmp1803);
        rightRef1792 = rightField1796;
    }
    }
    falsePred1805 = self->currentBlock;
    panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1806, ifTrue1777);
    panda$core$String* $tmp1809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1807, &$s1808);
    (($fn1810) p_out->$class->vtable[19])(p_out, $tmp1809);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue1777, p_out);
    panda$core$String* $tmp1812 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1811 = $tmp1812;
    panda$core$String* $tmp1813 = panda$core$String$convert$R$panda$core$String(result1811);
    panda$core$String* $tmp1815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1813, &$s1814);
    panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1815, start1776);
    panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1816, &$s1817);
    panda$core$String* $tmp1819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, rightRef1792);
    panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1819, &$s1820);
    panda$core$String* $tmp1822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1821, falsePred1805);
    panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1823);
    (($fn1825) p_out->$class->vtable[19])(p_out, $tmp1824);
    return result1811;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$OutputStream* p_out) {
    panda$core$String* llvmOp1826;
    panda$core$String* result1869;
    switch (p_cl.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1826 = &$s1827;
                }
                break;
                case 52:
                {
                    llvmOp1826 = &$s1828;
                }
                break;
                case 53:
                {
                    llvmOp1826 = &$s1829;
                }
                break;
                case 55:
                {
                    llvmOp1826 = &$s1830;
                }
                break;
                case 56:
                {
                    llvmOp1826 = &$s1831;
                }
                break;
                case 72:
                {
                    llvmOp1826 = &$s1832;
                }
                break;
                case 1:
                {
                    llvmOp1826 = &$s1833;
                }
                break;
                case 67:
                {
                    llvmOp1826 = &$s1834;
                }
                break;
                case 69:
                {
                    llvmOp1826 = &$s1835;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1826 = &$s1836;
                }
                break;
                case 58:
                {
                    llvmOp1826 = &$s1837;
                }
                break;
                case 59:
                {
                    llvmOp1826 = &$s1838;
                }
                break;
                case 63:
                {
                    llvmOp1826 = &$s1839;
                }
                break;
                case 62:
                {
                    llvmOp1826 = &$s1840;
                }
                break;
                case 65:
                {
                    llvmOp1826 = &$s1841;
                }
                break;
                case 64:
                {
                    llvmOp1826 = &$s1842;
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
                    llvmOp1826 = &$s1843;
                }
                break;
                case 52:
                {
                    llvmOp1826 = &$s1844;
                }
                break;
                case 53:
                {
                    llvmOp1826 = &$s1845;
                }
                break;
                case 55:
                {
                    llvmOp1826 = &$s1846;
                }
                break;
                case 56:
                {
                    llvmOp1826 = &$s1847;
                }
                break;
                case 72:
                {
                    llvmOp1826 = &$s1848;
                }
                break;
                case 1:
                {
                    llvmOp1826 = &$s1849;
                }
                break;
                case 67:
                {
                    llvmOp1826 = &$s1850;
                }
                break;
                case 69:
                {
                    llvmOp1826 = &$s1851;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1826 = &$s1852;
                }
                break;
                case 58:
                {
                    llvmOp1826 = &$s1853;
                }
                break;
                case 59:
                {
                    llvmOp1826 = &$s1854;
                }
                break;
                case 63:
                {
                    llvmOp1826 = &$s1855;
                }
                break;
                case 62:
                {
                    llvmOp1826 = &$s1856;
                }
                break;
                case 65:
                {
                    llvmOp1826 = &$s1857;
                }
                break;
                case 64:
                {
                    llvmOp1826 = &$s1858;
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
                    llvmOp1826 = &$s1859;
                }
                break;
                case 52:
                {
                    llvmOp1826 = &$s1860;
                }
                break;
                case 53:
                {
                    llvmOp1826 = &$s1861;
                }
                break;
                case 55:
                {
                    llvmOp1826 = &$s1862;
                }
                break;
                case 58:
                {
                    llvmOp1826 = &$s1863;
                }
                break;
                case 59:
                {
                    llvmOp1826 = &$s1864;
                }
                break;
                case 63:
                {
                    llvmOp1826 = &$s1865;
                }
                break;
                case 62:
                {
                    llvmOp1826 = &$s1866;
                }
                break;
                case 65:
                {
                    llvmOp1826 = &$s1867;
                }
                break;
                case 64:
                {
                    llvmOp1826 = &$s1868;
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
    panda$core$String* $tmp1870 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1869 = $tmp1870;
    panda$core$String* $tmp1871 = panda$core$String$convert$R$panda$core$String(result1869);
    panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1871, &$s1872);
    panda$core$String* $tmp1874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1873, llvmOp1826);
    panda$core$String* $tmp1876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1874, &$s1875);
    panda$core$String* $tmp1877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1876, p_leftRef);
    panda$core$String* $tmp1879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1877, &$s1878);
    panda$core$String* $tmp1880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, p_rightRef);
    panda$core$String* $tmp1882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1880, &$s1881);
    (($fn1883) p_out->$class->vtable[19])(p_out, $tmp1882);
    return result1869;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1884;
    panda$core$String* rightRef1886;
    panda$core$String* raw1888;
    panda$core$String* result1900;
    panda$core$String* $tmp1885 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1884 = $tmp1885;
    panda$core$String* $tmp1887 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1886 = $tmp1887;
    panda$core$String* $tmp1889 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1888 = $tmp1889;
    panda$core$String* $tmp1890 = panda$core$String$convert$R$panda$core$String(raw1888);
    panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1890, &$s1891);
    panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1892, leftRef1884);
    panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1893, &$s1894);
    panda$core$String* $tmp1896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1895, rightRef1886);
    panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1896, &$s1897);
    (($fn1899) p_out->$class->vtable[19])(p_out, $tmp1898);
    panda$core$String* $tmp1901 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1900 = $tmp1901;
    panda$core$String* $tmp1902 = panda$core$String$convert$R$panda$core$String(result1900);
    panda$core$String* $tmp1904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1902, &$s1903);
    panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1904, raw1888);
    panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1905, &$s1906);
    (($fn1908) p_out->$class->vtable[19])(p_out, $tmp1907);
    return result1900;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1909;
    panda$core$String* rightRef1911;
    panda$core$String* raw1913;
    panda$core$String* result1925;
    panda$core$String* $tmp1910 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1909 = $tmp1910;
    panda$core$String* $tmp1912 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1911 = $tmp1912;
    panda$core$String* $tmp1914 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1913 = $tmp1914;
    panda$core$String* $tmp1915 = panda$core$String$convert$R$panda$core$String(raw1913);
    panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, &$s1916);
    panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, leftRef1909);
    panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1918, &$s1919);
    panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1920, rightRef1911);
    panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1921, &$s1922);
    (($fn1924) p_out->$class->vtable[19])(p_out, $tmp1923);
    panda$core$String* $tmp1926 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1925 = $tmp1926;
    panda$core$String* $tmp1927 = panda$core$String$convert$R$panda$core$String(result1925);
    panda$core$String* $tmp1929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1927, &$s1928);
    panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1929, raw1913);
    panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1930, &$s1931);
    (($fn1933) p_out->$class->vtable[19])(p_out, $tmp1932);
    return result1925;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$OutputStream* p_out) {
    panda$core$String* leftRef1939;
    panda$core$String* rightRef1941;
    panda$core$Bit $tmp1934 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1934.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1935 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1935;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1936 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1936;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1937 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1937;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1938 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1938;
        }
        break;
        default:
        {
            panda$core$String* $tmp1940 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1939 = $tmp1940;
            panda$core$String* $tmp1942 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1941 = $tmp1942;
            panda$core$Int64 $tmp1943 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1944 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, $tmp1943, leftRef1939, p_op, rightRef1941, p_out);
            return $tmp1944;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp1945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1945.value);
    panda$core$Int64 $tmp1946 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1946, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1947.value);
    panda$core$Object* $tmp1948 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1949 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1950 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1948), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1949), p_out);
    return $tmp1950;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    return &$s1951;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc1952;
    panda$core$Int64 index1954;
    panda$collections$ListView* vtable1955;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1957;
    panda$core$String* classPtrPtr1986;
    panda$core$String* classPtr2001;
    panda$core$String* cast2010;
    panda$core$String* ptr2022;
    panda$core$String* load2045;
    panda$core$String* result2054;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1953 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc1952 = $tmp1953;
    index1954 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1956 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1955 = $tmp1956;
    ITable* $tmp1958 = ((panda$collections$CollectionView*) vtable1955)->$class->itable;
    while ($tmp1958->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1958 = $tmp1958->next;
    }
    $fn1960 $tmp1959 = $tmp1958->methods[0];
    panda$core$Int64 $tmp1961 = $tmp1959(((panda$collections$CollectionView*) vtable1955));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1957, ((panda$core$Int64) { 0 }), $tmp1961, ((panda$core$Bit) { false }));
    int64_t $tmp1963 = $tmp1957.min.value;
    panda$core$Int64 i1962 = { $tmp1963 };
    int64_t $tmp1965 = $tmp1957.max.value;
    bool $tmp1966 = $tmp1957.inclusive.value;
    if ($tmp1966) goto $l1973; else goto $l1974;
    $l1973:;
    if ($tmp1963 <= $tmp1965) goto $l1967; else goto $l1969;
    $l1974:;
    if ($tmp1963 < $tmp1965) goto $l1967; else goto $l1969;
    $l1967:;
    {
        ITable* $tmp1975 = vtable1955->$class->itable;
        while ($tmp1975->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1975 = $tmp1975->next;
        }
        $fn1977 $tmp1976 = $tmp1975->methods[0];
        panda$core$Object* $tmp1978 = $tmp1976(vtable1955, i1962);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1978)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1954 = i1962;
            goto $l1969;
        }
        }
    }
    $l1970:;
    int64_t $tmp1980 = $tmp1965 - i1962.value;
    if ($tmp1966) goto $l1981; else goto $l1982;
    $l1981:;
    if ($tmp1980 >= 1) goto $l1979; else goto $l1969;
    $l1982:;
    if ($tmp1980 > 1) goto $l1979; else goto $l1969;
    $l1979:;
    i1962.value += 1;
    goto $l1967;
    $l1969:;
    panda$core$Bit $tmp1985 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1954, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1985.value);
    panda$core$String* $tmp1987 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr1986 = $tmp1987;
    panda$core$String* $tmp1988 = panda$core$String$convert$R$panda$core$String(classPtrPtr1986);
    panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1988, &$s1989);
    org$pandalanguage$pandac$Type* $tmp1991 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp1992 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1991);
    panda$core$String* $tmp1993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1990, $tmp1992);
    panda$core$String* $tmp1995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1993, &$s1994);
    panda$core$String* $tmp1996 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1996, &$s1997);
    panda$core$String* $tmp1999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1995, $tmp1998);
    (($fn2000) p_out->$class->vtable[19])(p_out, $tmp1999);
    panda$core$String* $tmp2002 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2001 = $tmp2002;
    panda$core$String* $tmp2003 = panda$core$String$convert$R$panda$core$String(classPtr2001);
    panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2003, &$s2004);
    panda$core$String* $tmp2006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2005, classPtrPtr1986);
    panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2006, &$s2007);
    (($fn2009) p_out->$class->vtable[19])(p_out, $tmp2008);
    panda$core$String* $tmp2011 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2010 = $tmp2011;
    panda$core$String* $tmp2012 = panda$core$String$convert$R$panda$core$String(cast2010);
    panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2012, &$s2013);
    panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, classPtr2001);
    panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, &$s2016);
    panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2017, cc1952->type);
    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2018, &$s2019);
    (($fn2021) p_out->$class->vtable[19])(p_out, $tmp2020);
    panda$core$String* $tmp2023 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2022 = $tmp2023;
    panda$core$String* $tmp2024 = panda$core$String$convert$R$panda$core$String(ptr2022);
    panda$core$String* $tmp2026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2024, &$s2025);
    panda$core$String* $tmp2027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2026, cc1952->type);
    panda$core$String* $tmp2029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2027, &$s2028);
    panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2029, cc1952->type);
    panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2030, &$s2031);
    panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2032, cast2010);
    panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, &$s2034);
    panda$core$String* $tmp2037 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2036, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2037, &$s2038);
    panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2039, ((panda$core$Object*) wrap_panda$core$Int64(index1954)));
    panda$core$String* $tmp2042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2040, &$s2041);
    panda$core$String* $tmp2043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2035, $tmp2042);
    (($fn2044) p_out->$class->vtable[19])(p_out, $tmp2043);
    panda$core$String* $tmp2046 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2045 = $tmp2046;
    panda$core$String* $tmp2047 = panda$core$String$convert$R$panda$core$String(load2045);
    panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, &$s2048);
    panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2049, ptr2022);
    panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2050, &$s2051);
    (($fn2053) p_out->$class->vtable[19])(p_out, $tmp2052);
    panda$core$String* $tmp2055 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2054 = $tmp2055;
    panda$core$String* $tmp2056 = panda$core$String$convert$R$panda$core$String(result2054);
    panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2056, &$s2057);
    panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, load2045);
    panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2059, &$s2060);
    org$pandalanguage$pandac$Type* $tmp2062 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2063 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2062);
    panda$core$String* $tmp2064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2061, $tmp2063);
    (($fn2065) p_out->$class->vtable[19])(p_out, $tmp2064);
    return result2054;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$OutputStream* p_out) {
    panda$core$String* methodType2066;
    panda$core$String* entry2069;
    panda$core$String* rawClassPointer2076;
    panda$core$String* classPointer2098;
    panda$core$String* classType2100;
    panda$core$String* loadedClass2113;
    panda$core$String* itableFirst2128;
    panda$core$String* next2151;
    panda$core$String* leavingEntryLabel2158;
    panda$core$String* itableNext2160;
    panda$core$String* itablePtrPtr2165;
    panda$core$String* fail2167;
    panda$core$String* itablePtr2187;
    panda$core$String* itableClassPtr2196;
    panda$core$String* itableClass2210;
    panda$core$String* test2225;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2227;
    panda$core$String* success2249;
    panda$core$Int64 index2279;
    panda$collections$ListView* vtable2280;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2282;
    panda$core$String* methodPtrPtr2319;
    panda$core$String* cast2336;
    panda$core$String* methodPtr2348;
    org$pandalanguage$pandac$Type* $tmp2067 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2068 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2067);
    methodType2066 = $tmp2068;
    panda$core$String* $tmp2070 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2069 = $tmp2070;
    panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2071, entry2069);
    panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2072, &$s2073);
    (($fn2075) p_out->$class->vtable[19])(p_out, $tmp2074);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, entry2069, p_out);
    panda$core$String* $tmp2077 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawClassPointer2076 = $tmp2077;
    panda$core$String* $tmp2078 = panda$core$String$convert$R$panda$core$String(rawClassPointer2076);
    panda$core$String* $tmp2080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2078, &$s2079);
    org$pandalanguage$pandac$Type* $tmp2081 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2082 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2081);
    panda$core$String* $tmp2083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2080, $tmp2082);
    panda$core$String* $tmp2085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2083, &$s2084);
    panda$core$String* $tmp2086 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2086, &$s2087);
    panda$core$String* $tmp2090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2088, &$s2089);
    panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2090, &$s2091);
    panda$core$String* $tmp2093 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2092, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2093, &$s2094);
    panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2085, $tmp2095);
    (($fn2097) p_out->$class->vtable[19])(p_out, $tmp2096);
    panda$core$String* $tmp2099 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2098 = $tmp2099;
    org$pandalanguage$pandac$Type* $tmp2101 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2102 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2101);
    classType2100 = $tmp2102;
    panda$core$String* $tmp2103 = panda$core$String$convert$R$panda$core$String(classPointer2098);
    panda$core$String* $tmp2105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2103, &$s2104);
    panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2105, rawClassPointer2076);
    panda$core$String* $tmp2108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2106, &$s2107);
    panda$core$String* $tmp2109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2108, classType2100);
    panda$core$String* $tmp2111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2109, &$s2110);
    (($fn2112) p_out->$class->vtable[19])(p_out, $tmp2111);
    panda$core$String* $tmp2114 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2113 = $tmp2114;
    panda$core$String* $tmp2115 = panda$core$String$convert$R$panda$core$String(loadedClass2113);
    panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, &$s2116);
    panda$core$String* $tmp2118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2117, classType2100);
    panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2118, &$s2119);
    panda$core$String* $tmp2121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2120, classType2100);
    panda$core$String* $tmp2123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, &$s2122);
    panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2123, classPointer2098);
    panda$core$String* $tmp2126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2124, &$s2125);
    (($fn2127) p_out->$class->vtable[19])(p_out, $tmp2126);
    panda$core$String* $tmp2129 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2128 = $tmp2129;
    panda$core$String* $tmp2130 = panda$core$String$convert$R$panda$core$String(itableFirst2128);
    panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2131);
    panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2132, classType2100);
    panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2134);
    panda$core$String* $tmp2136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2135, classType2100);
    panda$core$String* $tmp2138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2136, &$s2137);
    panda$core$String* $tmp2139 = panda$core$String$convert$R$panda$core$String(loadedClass2113);
    panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2139, &$s2140);
    panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2141, &$s2142);
    panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, &$s2144);
    panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2145, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2146, &$s2147);
    panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2138, $tmp2148);
    (($fn2150) p_out->$class->vtable[19])(p_out, $tmp2149);
    panda$core$String* $tmp2152 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2151 = $tmp2152;
    panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2153, next2151);
    panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2154, &$s2155);
    (($fn2157) p_out->$class->vtable[19])(p_out, $tmp2156);
    leavingEntryLabel2158 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, next2151, p_out);
    panda$core$Int64 $tmp2159 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2159;
    panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2161, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, &$s2163);
    itableNext2160 = $tmp2164;
    panda$core$String* $tmp2166 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2165 = $tmp2166;
    panda$core$String* $tmp2168 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2167 = $tmp2168;
    panda$core$String* $tmp2169 = panda$core$String$convert$R$panda$core$String(itablePtrPtr2165);
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2170);
    panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2171, itableFirst2128);
    panda$core$String* $tmp2174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2172, &$s2173);
    panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2174, leavingEntryLabel2158);
    panda$core$String* $tmp2177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2175, &$s2176);
    panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2178, itableNext2160);
    panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2179, &$s2180);
    panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2181, fail2167);
    panda$core$String* $tmp2184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2182, &$s2183);
    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2177, $tmp2184);
    (($fn2186) p_out->$class->vtable[19])(p_out, $tmp2185);
    panda$core$String* $tmp2188 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2187 = $tmp2188;
    panda$core$String* $tmp2189 = panda$core$String$convert$R$panda$core$String(itablePtr2187);
    panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2190);
    panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, itablePtrPtr2165);
    panda$core$String* $tmp2194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, &$s2193);
    (($fn2195) p_out->$class->vtable[19])(p_out, $tmp2194);
    panda$core$String* $tmp2197 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2196 = $tmp2197;
    panda$core$String* $tmp2198 = panda$core$String$convert$R$panda$core$String(itableClassPtr2196);
    panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2198, &$s2199);
    panda$core$String* $tmp2201 = panda$core$String$convert$R$panda$core$String(itablePtr2187);
    panda$core$String* $tmp2203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2201, &$s2202);
    panda$core$String* $tmp2205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2203, &$s2204);
    panda$core$String* $tmp2207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2205, &$s2206);
    panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2200, $tmp2207);
    (($fn2209) p_out->$class->vtable[19])(p_out, $tmp2208);
    panda$core$String* $tmp2211 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2210 = $tmp2211;
    panda$core$String* $tmp2212 = panda$core$String$convert$R$panda$core$String(itableClass2210);
    panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2212, &$s2213);
    panda$core$String* $tmp2215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, classType2100);
    panda$core$String* $tmp2217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2215, &$s2216);
    panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2217, classType2100);
    panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2218, &$s2219);
    panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2220, itableClassPtr2196);
    panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2221, &$s2222);
    (($fn2224) p_out->$class->vtable[19])(p_out, $tmp2223);
    panda$core$String* $tmp2226 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2225 = $tmp2226;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2228 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2227 = $tmp2228;
    panda$core$String* $tmp2229 = panda$core$String$convert$R$panda$core$String(test2225);
    panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2229, &$s2230);
    panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2231, classType2100);
    panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2232, &$s2233);
    panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2234, intfCC2227->type);
    panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, &$s2236);
    panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, intfCC2227->name);
    panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, &$s2239);
    panda$core$String* $tmp2241 = panda$core$String$convert$R$panda$core$String(classType2100);
    panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2241, &$s2242);
    panda$core$String* $tmp2244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2243, itableClass2210);
    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2244, &$s2245);
    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2240, $tmp2246);
    (($fn2248) p_out->$class->vtable[19])(p_out, $tmp2247);
    panda$core$String* $tmp2250 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2249 = $tmp2250;
    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2251, test2225);
    panda$core$String* $tmp2254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, &$s2253);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2254, success2249);
    panda$core$String* $tmp2257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2255, &$s2256);
    panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2257, fail2167);
    panda$core$String* $tmp2260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2258, &$s2259);
    (($fn2261) p_out->$class->vtable[19])(p_out, $tmp2260);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, fail2167, p_out);
    panda$core$String* $tmp2262 = panda$core$String$convert$R$panda$core$String(itableNext2160);
    panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2262, &$s2263);
    panda$core$String* $tmp2265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, itablePtr2187);
    panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2265, &$s2266);
    panda$core$String* $tmp2269 = panda$core$String$convert$R$panda$core$String(&$s2268);
    panda$core$String* $tmp2271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, &$s2270);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, $tmp2271);
    (($fn2273) p_out->$class->vtable[19])(p_out, $tmp2272);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2274, next2151);
    panda$core$String* $tmp2277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2275, &$s2276);
    (($fn2278) p_out->$class->vtable[19])(p_out, $tmp2277);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, success2249, p_out);
    index2279 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2281 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2280 = $tmp2281;
    ITable* $tmp2283 = ((panda$collections$CollectionView*) vtable2280)->$class->itable;
    while ($tmp2283->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2283 = $tmp2283->next;
    }
    $fn2285 $tmp2284 = $tmp2283->methods[0];
    panda$core$Int64 $tmp2286 = $tmp2284(((panda$collections$CollectionView*) vtable2280));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2282, ((panda$core$Int64) { 0 }), $tmp2286, ((panda$core$Bit) { false }));
    int64_t $tmp2288 = $tmp2282.min.value;
    panda$core$Int64 i2287 = { $tmp2288 };
    int64_t $tmp2290 = $tmp2282.max.value;
    bool $tmp2291 = $tmp2282.inclusive.value;
    if ($tmp2291) goto $l2298; else goto $l2299;
    $l2298:;
    if ($tmp2288 <= $tmp2290) goto $l2292; else goto $l2294;
    $l2299:;
    if ($tmp2288 < $tmp2290) goto $l2292; else goto $l2294;
    $l2292:;
    {
        ITable* $tmp2300 = vtable2280->$class->itable;
        while ($tmp2300->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2300 = $tmp2300->next;
        }
        $fn2302 $tmp2301 = $tmp2300->methods[0];
        panda$core$Object* $tmp2303 = $tmp2301(vtable2280, i2287);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2303)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2279 = i2287;
            goto $l2294;
        }
        }
    }
    $l2295:;
    int64_t $tmp2305 = $tmp2290 - i2287.value;
    if ($tmp2291) goto $l2306; else goto $l2307;
    $l2306:;
    if ($tmp2305 >= 1) goto $l2304; else goto $l2294;
    $l2307:;
    if ($tmp2305 > 1) goto $l2304; else goto $l2294;
    $l2304:;
    i2287.value += 1;
    goto $l2292;
    $l2294:;
    org$pandalanguage$pandac$Type* $tmp2310 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2311 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2310);
    panda$collections$ListView* $tmp2312 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2311);
    ITable* $tmp2313 = ((panda$collections$CollectionView*) $tmp2312)->$class->itable;
    while ($tmp2313->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2313 = $tmp2313->next;
    }
    $fn2315 $tmp2314 = $tmp2313->methods[0];
    panda$core$Int64 $tmp2316 = $tmp2314(((panda$collections$CollectionView*) $tmp2312));
    panda$core$Int64 $tmp2317 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2279, $tmp2316);
    index2279 = $tmp2317;
    panda$core$Bit $tmp2318 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2279, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2318.value);
    panda$core$String* $tmp2320 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2319 = $tmp2320;
    panda$core$String* $tmp2321 = panda$core$String$convert$R$panda$core$String(methodPtrPtr2319);
    panda$core$String* $tmp2323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2321, &$s2322);
    panda$core$String* $tmp2324 = panda$core$String$convert$R$panda$core$String(itablePtr2187);
    panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2324, &$s2325);
    panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2326, &$s2327);
    panda$core$String* $tmp2330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2328, &$s2329);
    panda$core$String* $tmp2331 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2330, ((panda$core$Object*) wrap_panda$core$Int64(index2279)));
    panda$core$String* $tmp2333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2331, &$s2332);
    panda$core$String* $tmp2334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2323, $tmp2333);
    (($fn2335) p_out->$class->vtable[19])(p_out, $tmp2334);
    panda$core$String* $tmp2337 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2336 = $tmp2337;
    panda$core$String* $tmp2338 = panda$core$String$convert$R$panda$core$String(cast2336);
    panda$core$String* $tmp2340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2338, &$s2339);
    panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2340, methodPtrPtr2319);
    panda$core$String* $tmp2343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2341, &$s2342);
    panda$core$String* $tmp2344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2343, methodType2066);
    panda$core$String* $tmp2346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2344, &$s2345);
    (($fn2347) p_out->$class->vtable[19])(p_out, $tmp2346);
    panda$core$String* $tmp2349 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2348 = $tmp2349;
    panda$core$String* $tmp2350 = panda$core$String$convert$R$panda$core$String(methodPtr2348);
    panda$core$String* $tmp2352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2350, &$s2351);
    panda$core$String* $tmp2353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2352, methodType2066);
    panda$core$String* $tmp2355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2353, &$s2354);
    panda$core$String* $tmp2356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2355, methodType2066);
    panda$core$String* $tmp2358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2356, &$s2357);
    panda$core$String* $tmp2359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2358, cast2336);
    panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2359, &$s2360);
    (($fn2362) p_out->$class->vtable[19])(p_out, $tmp2361);
    return methodPtr2348;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$OutputStream* p_out) {
    panda$core$Bit $tmp2364 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2363 = $tmp2364.value;
    if (!$tmp2363) goto $l2365;
    panda$core$Bit $tmp2366 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2363 = $tmp2366.value;
    $l2365:;
    panda$core$Bit $tmp2367 = { $tmp2363 };
    if ($tmp2367.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2368.value) {
        {
            panda$core$String* $tmp2369 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2369;
        }
        }
        else {
        {
            panda$core$String* $tmp2370 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$OutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2370;
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
        panda$core$String* $tmp2371 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2371;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2372;
    panda$core$String* $match$1208_92373;
    panda$core$String* countStruct2378;
    panda$core$String* count2381;
    panda$core$String* size2390;
    panda$core$Int64 elementSize2392;
    panda$core$String* malloc2411;
    panda$core$String* result2424;
    panda$core$String* ptr2442;
    panda$core$String* baseType2445;
    panda$core$String* ptrType2448;
    panda$core$String* cast2451;
    panda$core$String* load2463;
    panda$core$String* ptr2482;
    panda$core$String* baseType2485;
    panda$core$String* ptrType2488;
    panda$core$String* cast2491;
    panda$core$String* indexStruct2503;
    panda$core$String* index2506;
    panda$core$String* offsetPtr2515;
    panda$core$String* load2535;
    panda$core$String* ptr2554;
    panda$core$String* ptrCast2557;
    panda$core$String* countStruct2566;
    panda$core$String* count2569;
    panda$core$String* size2578;
    panda$core$String* realloc2595;
    panda$core$String* result2612;
    panda$core$String* ptr2630;
    panda$core$String* baseType2633;
    panda$core$String* offsetStruct2637;
    panda$core$String* offset2640;
    panda$core$String* result2649;
    m2372 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$1208_92373 = ((org$pandalanguage$pandac$Symbol*) m2372->value)->name;
        panda$core$Bit $tmp2375 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1208_92373, &$s2374);
        if ($tmp2375.value) {
        {
            panda$core$Int64 $tmp2376 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2376, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2377.value);
            panda$core$Object* $tmp2379 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2380 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2379), p_out);
            countStruct2378 = $tmp2380;
            panda$core$String* $tmp2382 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2381 = $tmp2382;
            panda$core$String* $tmp2383 = panda$core$String$convert$R$panda$core$String(count2381);
            panda$core$String* $tmp2385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2383, &$s2384);
            panda$core$String* $tmp2386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2385, countStruct2378);
            panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2386, &$s2387);
            (($fn2389) p_out->$class->vtable[19])(p_out, $tmp2388);
            panda$core$String* $tmp2391 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2390 = $tmp2391;
            org$pandalanguage$pandac$Type* $tmp2393 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2372);
            panda$core$Object* $tmp2394 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2393->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2395 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2394));
            elementSize2392 = $tmp2395;
            panda$core$Bit $tmp2396 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2392, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2396.value);
            panda$core$String* $tmp2397 = panda$core$String$convert$R$panda$core$String(size2390);
            panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2397, &$s2398);
            panda$core$String* $tmp2401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2399, &$s2400);
            panda$core$String* $tmp2403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2401, &$s2402);
            panda$core$String* $tmp2404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2403, count2381);
            panda$core$String* $tmp2406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2404, &$s2405);
            panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2406, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2392)));
            panda$core$String* $tmp2409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2407, &$s2408);
            (($fn2410) p_out->$class->vtable[19])(p_out, $tmp2409);
            panda$core$String* $tmp2412 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2411 = $tmp2412;
            panda$core$String* $tmp2413 = panda$core$String$convert$R$panda$core$String(malloc2411);
            panda$core$String* $tmp2415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2413, &$s2414);
            panda$core$String* $tmp2417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2415, &$s2416);
            panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2417, &$s2418);
            panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2419, size2390);
            panda$core$String* $tmp2422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2420, &$s2421);
            (($fn2423) p_out->$class->vtable[19])(p_out, $tmp2422);
            panda$core$String* $tmp2425 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2424 = $tmp2425;
            panda$core$String* $tmp2426 = panda$core$String$convert$R$panda$core$String(result2424);
            panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2426, &$s2427);
            panda$core$String* $tmp2429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, malloc2411);
            panda$core$String* $tmp2431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2429, &$s2430);
            org$pandalanguage$pandac$Type* $tmp2432 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2372);
            panda$core$String* $tmp2433 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2432);
            panda$core$String* $tmp2434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2431, $tmp2433);
            panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2434, &$s2435);
            (($fn2437) p_out->$class->vtable[19])(p_out, $tmp2436);
            return result2424;
        }
        }
        else {
        panda$core$Bit $tmp2439 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1208_92373, &$s2438);
        if ($tmp2439.value) {
        {
            panda$core$Int64 $tmp2440 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2440, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2441.value);
            panda$core$Object* $tmp2443 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2444 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2443), p_out);
            ptr2442 = $tmp2444;
            org$pandalanguage$pandac$Type* $tmp2446 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2372);
            panda$core$String* $tmp2447 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2446);
            baseType2445 = $tmp2447;
            panda$core$String* $tmp2450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2445, &$s2449);
            ptrType2448 = $tmp2450;
            panda$core$String* $tmp2452 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2451 = $tmp2452;
            panda$core$String* $tmp2453 = panda$core$String$convert$R$panda$core$String(cast2451);
            panda$core$String* $tmp2455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2453, &$s2454);
            panda$core$String* $tmp2456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2455, ptr2442);
            panda$core$String* $tmp2458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2456, &$s2457);
            panda$core$String* $tmp2459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2458, ptrType2448);
            panda$core$String* $tmp2461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2459, &$s2460);
            (($fn2462) p_out->$class->vtable[19])(p_out, $tmp2461);
            panda$core$String* $tmp2464 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2463 = $tmp2464;
            panda$core$String* $tmp2465 = panda$core$String$convert$R$panda$core$String(load2463);
            panda$core$String* $tmp2467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2465, &$s2466);
            panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, baseType2445);
            panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2468, &$s2469);
            panda$core$String* $tmp2471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, ptrType2448);
            panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2471, &$s2472);
            panda$core$String* $tmp2474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, cast2451);
            panda$core$String* $tmp2476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2474, &$s2475);
            (($fn2477) p_out->$class->vtable[19])(p_out, $tmp2476);
            return load2463;
        }
        }
        else {
        panda$core$Bit $tmp2479 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1208_92373, &$s2478);
        if ($tmp2479.value) {
        {
            panda$core$Int64 $tmp2480 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2480, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2481.value);
            panda$core$Object* $tmp2483 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2484 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2483), p_out);
            ptr2482 = $tmp2484;
            org$pandalanguage$pandac$Type* $tmp2486 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2372);
            panda$core$String* $tmp2487 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2486);
            baseType2485 = $tmp2487;
            panda$core$String* $tmp2490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2485, &$s2489);
            ptrType2488 = $tmp2490;
            panda$core$String* $tmp2492 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2491 = $tmp2492;
            panda$core$String* $tmp2493 = panda$core$String$convert$R$panda$core$String(cast2491);
            panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2493, &$s2494);
            panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2495, ptr2482);
            panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2496, &$s2497);
            panda$core$String* $tmp2499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, ptrType2488);
            panda$core$String* $tmp2501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2499, &$s2500);
            (($fn2502) p_out->$class->vtable[19])(p_out, $tmp2501);
            panda$core$Object* $tmp2504 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2505 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2504), p_out);
            indexStruct2503 = $tmp2505;
            panda$core$String* $tmp2507 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2506 = $tmp2507;
            panda$core$String* $tmp2508 = panda$core$String$convert$R$panda$core$String(index2506);
            panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2508, &$s2509);
            panda$core$String* $tmp2511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2510, indexStruct2503);
            panda$core$String* $tmp2513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2511, &$s2512);
            (($fn2514) p_out->$class->vtable[19])(p_out, $tmp2513);
            panda$core$String* $tmp2516 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2515 = $tmp2516;
            panda$core$String* $tmp2517 = panda$core$String$convert$R$panda$core$String(offsetPtr2515);
            panda$core$String* $tmp2519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2517, &$s2518);
            panda$core$String* $tmp2520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2519, baseType2485);
            panda$core$String* $tmp2522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2520, &$s2521);
            panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2522, ptrType2488);
            panda$core$String* $tmp2525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2523, &$s2524);
            panda$core$String* $tmp2526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2525, cast2491);
            panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2526, &$s2527);
            panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2529, index2506);
            panda$core$String* $tmp2532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, &$s2531);
            panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, $tmp2532);
            (($fn2534) p_out->$class->vtable[19])(p_out, $tmp2533);
            panda$core$String* $tmp2536 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2535 = $tmp2536;
            panda$core$String* $tmp2537 = panda$core$String$convert$R$panda$core$String(load2535);
            panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, &$s2538);
            panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2539, baseType2485);
            panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2540, &$s2541);
            panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2542, ptrType2488);
            panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2543, &$s2544);
            panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2545, offsetPtr2515);
            panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, &$s2547);
            (($fn2549) p_out->$class->vtable[19])(p_out, $tmp2548);
            return load2535;
        }
        }
        else {
        panda$core$Bit $tmp2551 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1208_92373, &$s2550);
        if ($tmp2551.value) {
        {
            panda$core$Int64 $tmp2552 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2552, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2553.value);
            panda$core$Object* $tmp2555 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2556 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2555), p_out);
            ptr2554 = $tmp2556;
            panda$core$String* $tmp2558 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2557 = $tmp2558;
            panda$core$String* $tmp2559 = panda$core$String$convert$R$panda$core$String(ptrCast2557);
            panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2559, &$s2560);
            panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2561, ptr2554);
            panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2562, &$s2563);
            (($fn2565) p_out->$class->vtable[19])(p_out, $tmp2564);
            panda$core$Object* $tmp2567 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2568 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2567), p_out);
            countStruct2566 = $tmp2568;
            panda$core$String* $tmp2570 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2569 = $tmp2570;
            panda$core$String* $tmp2571 = panda$core$String$convert$R$panda$core$String(count2569);
            panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2571, &$s2572);
            panda$core$String* $tmp2574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2573, countStruct2566);
            panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2574, &$s2575);
            (($fn2577) p_out->$class->vtable[19])(p_out, $tmp2576);
            panda$core$String* $tmp2579 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2578 = $tmp2579;
            panda$core$String* $tmp2580 = panda$core$String$convert$R$panda$core$String(size2578);
            panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, &$s2581);
            panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, &$s2583);
            panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, &$s2585);
            panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, count2569);
            panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, &$s2588);
            org$pandalanguage$pandac$Type* $tmp2590 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2372);
            panda$core$Object* $tmp2591 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2590->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2592 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2591));
            panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2589, ((panda$core$Object*) wrap_panda$core$Int64($tmp2592)));
            (($fn2594) p_out->$class->vtable[19])(p_out, $tmp2593);
            panda$core$String* $tmp2596 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2595 = $tmp2596;
            panda$core$String* $tmp2597 = panda$core$String$convert$R$panda$core$String(realloc2595);
            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2598);
            panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, ptrCast2557);
            panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2600, &$s2601);
            panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2602, &$s2603);
            panda$core$String* $tmp2606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, &$s2605);
            panda$core$String* $tmp2607 = panda$core$String$convert$R$panda$core$String(size2578);
            panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2607, &$s2608);
            panda$core$String* $tmp2610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, $tmp2609);
            (($fn2611) p_out->$class->vtable[19])(p_out, $tmp2610);
            panda$core$String* $tmp2613 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2612 = $tmp2613;
            panda$core$String* $tmp2614 = panda$core$String$convert$R$panda$core$String(result2612);
            panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2614, &$s2615);
            panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2616, realloc2595);
            panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2617, &$s2618);
            org$pandalanguage$pandac$Type* $tmp2620 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2372);
            panda$core$String* $tmp2621 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2620);
            panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, $tmp2621);
            panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, &$s2623);
            (($fn2625) p_out->$class->vtable[19])(p_out, $tmp2624);
            return result2612;
        }
        }
        else {
        panda$core$Bit $tmp2627 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1208_92373, &$s2626);
        if ($tmp2627.value) {
        {
            panda$core$Int64 $tmp2628 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2628, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2629.value);
            panda$core$Object* $tmp2631 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2632 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2631), p_out);
            ptr2630 = $tmp2632;
            panda$core$Object* $tmp2634 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2635 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2634)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2636 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2635));
            baseType2633 = $tmp2636;
            panda$core$Object* $tmp2638 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2639 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2638), p_out);
            offsetStruct2637 = $tmp2639;
            panda$core$String* $tmp2641 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2640 = $tmp2641;
            panda$core$String* $tmp2642 = panda$core$String$convert$R$panda$core$String(offset2640);
            panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2643);
            panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, offsetStruct2637);
            panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2645, &$s2646);
            (($fn2648) p_out->$class->vtable[19])(p_out, $tmp2647);
            panda$core$String* $tmp2650 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2649 = $tmp2650;
            panda$core$String* $tmp2651 = panda$core$String$convert$R$panda$core$String(result2649);
            panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, &$s2652);
            panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2653, baseType2633);
            panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, &$s2655);
            panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, ptr2630);
            panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, &$s2658);
            panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2659, offset2640);
            panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, &$s2661);
            (($fn2663) p_out->$class->vtable[19])(p_out, $tmp2662);
            return result2649;
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
    org$pandalanguage$pandac$MethodDecl* m2664;
    panda$core$String* selfRef2665;
    panda$core$Int64 argStart2667;
    panda$collections$Array* args2671;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2674;
    panda$core$String* end2697;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2706;
    org$pandalanguage$pandac$MethodDecl* old2713;
    panda$core$String* phi2726;
    panda$core$String* separator2736;
    panda$collections$Iterator* ret$Iter2738;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2750;
    m2664 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) m2664->owner));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2664), ((panda$core$Object*) m2664));
    selfRef2665 = &$s2666;
    panda$core$Bit $tmp2668 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2664);
    if ($tmp2668.value) {
    {
        argStart2667 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2669 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2670 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2669), p_out);
        selfRef2665 = $tmp2670;
    }
    }
    else {
    {
        argStart2667 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2672 = (panda$collections$Array*) malloc(40);
    $tmp2672->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2672->refCount.value = 1;
    panda$collections$Array$init($tmp2672);
    args2671 = $tmp2672;
    panda$core$Int64 $tmp2675 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2674, argStart2667, $tmp2675, ((panda$core$Bit) { false }));
    int64_t $tmp2677 = $tmp2674.min.value;
    panda$core$Int64 i2676 = { $tmp2677 };
    int64_t $tmp2679 = $tmp2674.max.value;
    bool $tmp2680 = $tmp2674.inclusive.value;
    if ($tmp2680) goto $l2687; else goto $l2688;
    $l2687:;
    if ($tmp2677 <= $tmp2679) goto $l2681; else goto $l2683;
    $l2688:;
    if ($tmp2677 < $tmp2679) goto $l2681; else goto $l2683;
    $l2681:;
    {
        panda$core$Object* $tmp2689 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2676);
        panda$core$String* $tmp2690 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2689), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2671, ((panda$core$Object*) $tmp2690));
    }
    $l2684:;
    int64_t $tmp2692 = $tmp2679 - i2676.value;
    if ($tmp2680) goto $l2693; else goto $l2694;
    $l2693:;
    if ($tmp2692 >= 1) goto $l2691; else goto $l2683;
    $l2694:;
    if ($tmp2692 > 1) goto $l2691; else goto $l2683;
    $l2691:;
    i2676.value += 1;
    goto $l2681;
    $l2683:;
    panda$core$String* $tmp2698 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2697 = $tmp2698;
    panda$core$Int64 $tmp2699 = panda$collections$Array$get_count$R$panda$core$Int64(args2671);
    panda$core$Int64 $tmp2700 = panda$collections$Array$get_count$R$panda$core$Int64(m2664->parameters);
    panda$core$Bit $tmp2701 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2699, $tmp2700);
    if ($tmp2701.value) {
    {
        panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2702, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, &$s2704);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2705));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2707 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2707->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2707->refCount.value = 1;
    panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2709, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, &$s2711);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2707, $tmp2712, selfRef2665, ((panda$collections$ListView*) args2671), end2697);
    inline2706 = $tmp2707;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2706));
    old2713 = self->currentMethod;
    self->currentMethod = m2664;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_body, p_out);
    self->currentMethod = old2713;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2714 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2715 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2714);
    if ($tmp2715.value) {
    {
        (($fn2717) p_out->$class->vtable[19])(p_out, &$s2716);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end2697, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2664));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    panda$core$Int64 $tmp2718 = panda$collections$Array$get_count$R$panda$core$Int64(inline2706->returns);
    panda$core$Bit $tmp2719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2718, ((panda$core$Int64) { 1 }));
    if ($tmp2719.value) {
    {
        panda$core$Object* $tmp2720 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2706->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2720)->second);
    }
    }
    panda$core$Int64 $tmp2721 = panda$collections$Array$get_count$R$panda$core$Int64(inline2706->returns);
    panda$core$Bit $tmp2722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2721, ((panda$core$Int64) { 0 }));
    if ($tmp2722.value) {
    {
        (($fn2724) p_out->$class->vtable[16])(p_out, &$s2723);
        return &$s2725;
    }
    }
    panda$core$String* $tmp2727 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2726 = $tmp2727;
    panda$core$String* $tmp2728 = panda$core$String$convert$R$panda$core$String(phi2726);
    panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2728, &$s2729);
    panda$core$String* $tmp2731 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2664->returnType);
    panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2730, $tmp2731);
    panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2732, &$s2733);
    (($fn2735) p_out->$class->vtable[16])(p_out, $tmp2734);
    separator2736 = &$s2737;
    {
        ITable* $tmp2739 = ((panda$collections$Iterable*) inline2706->returns)->$class->itable;
        while ($tmp2739->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2739 = $tmp2739->next;
        }
        $fn2741 $tmp2740 = $tmp2739->methods[0];
        panda$collections$Iterator* $tmp2742 = $tmp2740(((panda$collections$Iterable*) inline2706->returns));
        ret$Iter2738 = $tmp2742;
        $l2743:;
        ITable* $tmp2745 = ret$Iter2738->$class->itable;
        while ($tmp2745->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2745 = $tmp2745->next;
        }
        $fn2747 $tmp2746 = $tmp2745->methods[0];
        panda$core$Bit $tmp2748 = $tmp2746(ret$Iter2738);
        panda$core$Bit $tmp2749 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2748);
        if (!$tmp2749.value) goto $l2744;
        {
            ITable* $tmp2751 = ret$Iter2738->$class->itable;
            while ($tmp2751->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2751 = $tmp2751->next;
            }
            $fn2753 $tmp2752 = $tmp2751->methods[1];
            panda$core$Object* $tmp2754 = $tmp2752(ret$Iter2738);
            ret2750 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2754);
            panda$core$String* $tmp2755 = panda$core$String$convert$R$panda$core$String(separator2736);
            panda$core$String* $tmp2757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2755, &$s2756);
            panda$core$String* $tmp2758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2757, ((panda$core$String*) ret2750->second));
            panda$core$String* $tmp2760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2758, &$s2759);
            panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2760, ((panda$core$String*) ret2750->first));
            panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2761, &$s2762);
            (($fn2764) p_out->$class->vtable[16])(p_out, $tmp2763);
            separator2736 = &$s2765;
        }
        goto $l2743;
        $l2744:;
    }
    (($fn2766) p_out->$class->vtable[17])(p_out);
    return phi2726;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2768;
    panda$core$String* bit2778;
    panda$core$String* result2782;
    panda$core$String* bit2796;
    panda$core$String* result2800;
    org$pandalanguage$pandac$IRNode* block2815;
    panda$collections$Array* args2819;
    org$pandalanguage$pandac$Type* actualMethodType2823;
    panda$core$String* actualResultType2824;
    panda$core$Bit isSuper2825;
    panda$core$Int64 offset2845;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2850;
    panda$core$String* arg2865;
    panda$core$String* target2897;
    panda$core$String* methodRef2901;
    panda$core$String* result2903;
    panda$core$Bit indirect2904;
    panda$core$String* separator2929;
    panda$core$String* indirectVar2931;
    panda$collections$Iterator* arg$Iter2950;
    panda$core$String* arg2962;
    panda$core$Bit $tmp2767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2767.value);
    m2768 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2770 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2768->owner)->name, &$s2769);
    if ($tmp2770.value) {
    {
        panda$core$String* $tmp2771 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2771;
    }
    }
    if (m2768->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2768);
    }
    }
    panda$core$Bit $tmp2773 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2768->owner)->name, &$s2772);
    if ($tmp2773.value) {
    {
        panda$core$Bit $tmp2775 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2768)->name, &$s2774);
        if ($tmp2775.value) {
        {
            panda$core$Int64 $tmp2776 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2776, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2777.value);
            panda$core$Object* $tmp2779 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2780 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2781 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2779), ((org$pandalanguage$pandac$IRNode*) $tmp2780), p_out);
            bit2778 = $tmp2781;
            panda$core$String* $tmp2783 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2782 = $tmp2783;
            panda$core$String* $tmp2784 = panda$core$String$convert$R$panda$core$String(result2782);
            panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2784, &$s2785);
            panda$core$String* $tmp2787 = panda$core$String$convert$R$panda$core$String(bit2778);
            panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2787, &$s2788);
            panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2786, $tmp2789);
            (($fn2791) p_out->$class->vtable[19])(p_out, $tmp2790);
            return result2782;
        }
        }
        panda$core$Bit $tmp2793 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2768)->name, &$s2792);
        if ($tmp2793.value) {
        {
            panda$core$Int64 $tmp2794 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2794, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2795.value);
            panda$core$Object* $tmp2797 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2798 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2799 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2797), ((org$pandalanguage$pandac$IRNode*) $tmp2798), p_out);
            bit2796 = $tmp2799;
            panda$core$String* $tmp2801 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2800 = $tmp2801;
            panda$core$String* $tmp2802 = panda$core$String$convert$R$panda$core$String(result2800);
            panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2802, &$s2803);
            panda$core$String* $tmp2805 = panda$core$String$convert$R$panda$core$String(bit2796);
            panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, &$s2806);
            panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, $tmp2807);
            (($fn2809) p_out->$class->vtable[19])(p_out, $tmp2808);
            return result2800;
        }
        }
    }
    }
    panda$core$Bit $tmp2811 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2768->annotations);
    bool $tmp2810 = $tmp2811.value;
    if (!$tmp2810) goto $l2812;
    panda$core$Object* $tmp2813 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2768));
    $tmp2810 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp2813) == NULL }).value;
    $l2812:;
    panda$core$Bit $tmp2814 = { $tmp2810 };
    if ($tmp2814.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2816 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2768);
        block2815 = $tmp2816;
        if (((panda$core$Bit) { block2815 != NULL }).value) {
        {
            panda$core$String* $tmp2817 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_call, block2815, p_out);
            return $tmp2817;
        }
        }
        return &$s2818;
    }
    }
    panda$collections$Array* $tmp2820 = (panda$collections$Array*) malloc(40);
    $tmp2820->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2820->refCount.value = 1;
    panda$core$Int64 $tmp2822 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp2820, $tmp2822);
    args2819 = $tmp2820;
    panda$core$Int64 $tmp2827 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2828 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2827, ((panda$core$Int64) { 1 }));
    bool $tmp2826 = $tmp2828.value;
    if (!$tmp2826) goto $l2829;
    panda$core$Object* $tmp2830 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2830)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2826 = $tmp2831.value;
    $l2829:;
    panda$core$Bit $tmp2832 = { $tmp2826 };
    isSuper2825 = $tmp2832;
    panda$core$Bit $tmp2834 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2825);
    bool $tmp2833 = $tmp2834.value;
    if (!$tmp2833) goto $l2835;
    panda$core$Bit $tmp2836 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2768);
    $tmp2833 = $tmp2836.value;
    $l2835:;
    panda$core$Bit $tmp2837 = { $tmp2833 };
    if ($tmp2837.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2838 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2768);
        actualMethodType2823 = $tmp2838;
        panda$core$Int64 $tmp2839 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2823->subtypes);
        panda$core$Int64 $tmp2840 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2839, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2841 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2823->subtypes, $tmp2840);
        panda$core$String* $tmp2842 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2841));
        actualResultType2824 = $tmp2842;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2843 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2768);
        actualMethodType2823 = $tmp2843;
        panda$core$String* $tmp2844 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2824 = $tmp2844;
    }
    }
    panda$core$Int64 $tmp2846 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2847 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2823->subtypes);
    panda$core$Int64 $tmp2848 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2846, $tmp2847);
    panda$core$Int64 $tmp2849 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2848, ((panda$core$Int64) { 1 }));
    offset2845 = $tmp2849;
    panda$core$Int64 $tmp2851 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2850, ((panda$core$Int64) { 0 }), $tmp2851, ((panda$core$Bit) { false }));
    int64_t $tmp2853 = $tmp2850.min.value;
    panda$core$Int64 i2852 = { $tmp2853 };
    int64_t $tmp2855 = $tmp2850.max.value;
    bool $tmp2856 = $tmp2850.inclusive.value;
    if ($tmp2856) goto $l2863; else goto $l2864;
    $l2863:;
    if ($tmp2853 <= $tmp2855) goto $l2857; else goto $l2859;
    $l2864:;
    if ($tmp2853 < $tmp2855) goto $l2857; else goto $l2859;
    $l2857:;
    {
        panda$core$Object* $tmp2866 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2852);
        panda$core$String* $tmp2867 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2866), p_out);
        arg2865 = $tmp2867;
        panda$core$Bit $tmp2869 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2852, offset2845);
        bool $tmp2868 = $tmp2869.value;
        if (!$tmp2868) goto $l2870;
        panda$core$Int64 $tmp2871 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2852, offset2845);
        panda$core$Object* $tmp2872 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2823->subtypes, $tmp2871);
        panda$core$Object* $tmp2873 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2852);
        panda$core$Bit $tmp2874 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2872), ((org$pandalanguage$pandac$IRNode*) $tmp2873)->type);
        $tmp2868 = $tmp2874.value;
        $l2870:;
        panda$core$Bit $tmp2875 = { $tmp2868 };
        if ($tmp2875.value) {
        {
            panda$core$Int64 $tmp2876 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2852, offset2845);
            panda$core$Object* $tmp2877 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2823->subtypes, $tmp2876);
            panda$core$String* $tmp2878 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2877));
            panda$core$String* $tmp2880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2878, &$s2879);
            panda$core$Object* $tmp2881 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2852);
            panda$core$Int64 $tmp2882 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2852, offset2845);
            panda$core$Object* $tmp2883 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2823->subtypes, $tmp2882);
            panda$core$String* $tmp2884 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg2865, ((org$pandalanguage$pandac$IRNode*) $tmp2881)->type, ((org$pandalanguage$pandac$Type*) $tmp2883), p_out);
            panda$core$String* $tmp2885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2880, $tmp2884);
            arg2865 = $tmp2885;
        }
        }
        else {
        {
            panda$core$Object* $tmp2886 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2852);
            panda$core$String* $tmp2887 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2886)->type);
            panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, &$s2888);
            panda$core$String* $tmp2890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, arg2865);
            arg2865 = $tmp2890;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2819, ((panda$core$Object*) arg2865));
    }
    $l2860:;
    int64_t $tmp2892 = $tmp2855 - i2852.value;
    if ($tmp2856) goto $l2893; else goto $l2894;
    $l2893:;
    if ($tmp2892 >= 1) goto $l2891; else goto $l2859;
    $l2894:;
    if ($tmp2892 > 1) goto $l2891; else goto $l2859;
    $l2891:;
    i2852.value += 1;
    goto $l2857;
    $l2859:;
    panda$core$Int64 $tmp2898 = panda$collections$Array$get_count$R$panda$core$Int64(args2819);
    panda$core$Bit $tmp2899 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2898, ((panda$core$Int64) { 0 }));
    if ($tmp2899.value) {
    {
        panda$core$Object* $tmp2900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2819, ((panda$core$Int64) { 0 }));
        target2897 = ((panda$core$String*) $tmp2900);
    }
    }
    else {
    {
        target2897 = NULL;
    }
    }
    panda$core$String* $tmp2902 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, target2897, m2768, isSuper2825, p_out);
    methodRef2901 = $tmp2902;
    panda$core$Bit $tmp2905 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2768);
    indirect2904 = $tmp2905;
    if (indirect2904.value) {
    {
        panda$core$String* $tmp2907 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2768);
        panda$core$String* $tmp2908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2906, $tmp2907);
        panda$core$String* $tmp2910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2908, &$s2909);
        (($fn2911) p_out->$class->vtable[16])(p_out, $tmp2910);
    }
    }
    else {
    {
        panda$core$String* $tmp2912 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2903 = $tmp2912;
        panda$core$String* $tmp2913 = panda$core$String$convert$R$panda$core$String(result2903);
        panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2913, &$s2914);
        panda$core$String* $tmp2916 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2768);
        panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2915, $tmp2916);
        panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, &$s2918);
        panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, actualResultType2824);
        panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2920, &$s2921);
        (($fn2923) p_out->$class->vtable[16])(p_out, $tmp2922);
    }
    }
    panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2924, methodRef2901);
    panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2925, &$s2926);
    (($fn2928) p_out->$class->vtable[16])(p_out, $tmp2927);
    separator2929 = &$s2930;
    if (indirect2904.value) {
    {
        panda$core$Int64 $tmp2932 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp2932;
        panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2933, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar2931 = $tmp2934;
        panda$core$String* $tmp2935 = panda$core$String$convert$R$panda$core$String(indirectVar2931);
        panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, &$s2936);
        panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2937, actualResultType2824);
        panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2938, &$s2939);
        (($fn2941) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2940);
        panda$core$String* $tmp2942 = panda$core$String$convert$R$panda$core$String(actualResultType2824);
        panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2942, &$s2943);
        panda$core$String* $tmp2945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2944, indirectVar2931);
        panda$core$String* $tmp2947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2945, &$s2946);
        (($fn2948) p_out->$class->vtable[16])(p_out, $tmp2947);
        separator2929 = &$s2949;
    }
    }
    {
        ITable* $tmp2951 = ((panda$collections$Iterable*) args2819)->$class->itable;
        while ($tmp2951->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2951 = $tmp2951->next;
        }
        $fn2953 $tmp2952 = $tmp2951->methods[0];
        panda$collections$Iterator* $tmp2954 = $tmp2952(((panda$collections$Iterable*) args2819));
        arg$Iter2950 = $tmp2954;
        $l2955:;
        ITable* $tmp2957 = arg$Iter2950->$class->itable;
        while ($tmp2957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2957 = $tmp2957->next;
        }
        $fn2959 $tmp2958 = $tmp2957->methods[0];
        panda$core$Bit $tmp2960 = $tmp2958(arg$Iter2950);
        panda$core$Bit $tmp2961 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2960);
        if (!$tmp2961.value) goto $l2956;
        {
            ITable* $tmp2963 = arg$Iter2950->$class->itable;
            while ($tmp2963->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2963 = $tmp2963->next;
            }
            $fn2965 $tmp2964 = $tmp2963->methods[1];
            panda$core$Object* $tmp2966 = $tmp2964(arg$Iter2950);
            arg2962 = ((panda$core$String*) $tmp2966);
            panda$core$String* $tmp2967 = panda$core$String$convert$R$panda$core$String(separator2929);
            panda$core$String* $tmp2969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2967, &$s2968);
            panda$core$String* $tmp2970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2969, arg2962);
            panda$core$String* $tmp2972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2970, &$s2971);
            (($fn2973) p_out->$class->vtable[16])(p_out, $tmp2972);
            separator2929 = &$s2974;
        }
        goto $l2955;
        $l2956:;
    }
    (($fn2976) p_out->$class->vtable[19])(p_out, &$s2975);
    if (indirect2904.value) {
    {
        panda$core$String* $tmp2977 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2903 = $tmp2977;
        panda$core$String* $tmp2978 = panda$core$String$convert$R$panda$core$String(result2903);
        panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, &$s2979);
        panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, actualResultType2824);
        panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
        panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, actualResultType2824);
        panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, &$s2985);
        panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2986, indirectVar2931);
        (($fn2988) p_out->$class->vtable[19])(p_out, $tmp2987);
    }
    }
    panda$core$String* $tmp2989 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp2990 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp2989, actualResultType2824);
    if ($tmp2990.value) {
    {
        panda$core$Int64 $tmp2991 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2823->subtypes);
        panda$core$Int64 $tmp2992 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2991, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2993 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2823->subtypes, $tmp2992);
        panda$core$String* $tmp2994 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, result2903, ((org$pandalanguage$pandac$Type*) $tmp2993), p_call->type, p_out);
        return $tmp2994;
    }
    }
    return result2903;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src2995;
    panda$core$String* testStart2998;
    panda$core$String* isNonNull2999;
    panda$core$String* nonNullLabel3012;
    panda$core$String* endLabel3014;
    panda$core$String* unwrapped3027;
    panda$core$String* nonNullValue3030;
    panda$core$String* result3038;
    panda$core$String* mallocRef3059;
    panda$core$String* wrapperTypeName3070;
    panda$core$String* wrapperType3073;
    panda$core$String* wrapperCast3076;
    panda$core$String* classPtr3088;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3104;
    panda$core$String* refCount3119;
    panda$core$String* target3140;
    panda$core$String* result3174;
    org$pandalanguage$pandac$ClassDecl* $tmp2996 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src2995 = $tmp2996;
    PANDA_ASSERT(((panda$core$Bit) { src2995 != NULL }).value);
    panda$core$Bit $tmp2997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2997.value) {
    {
        testStart2998 = self->currentBlock;
        panda$core$String* $tmp3000 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull2999 = $tmp3000;
        panda$core$String* $tmp3001 = panda$core$String$convert$R$panda$core$String(isNonNull2999);
        panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, &$s3002);
        panda$core$String* $tmp3004 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3003, $tmp3004);
        panda$core$String* $tmp3007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3005, &$s3006);
        panda$core$String* $tmp3008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3007, p_value);
        panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3008, &$s3009);
        (($fn3011) p_out->$class->vtable[19])(p_out, $tmp3010);
        panda$core$String* $tmp3013 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3012 = $tmp3013;
        panda$core$String* $tmp3015 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3014 = $tmp3015;
        panda$core$String* $tmp3017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3016, isNonNull2999);
        panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3017, &$s3018);
        panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, nonNullLabel3012);
        panda$core$String* $tmp3022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, &$s3021);
        panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3022, endLabel3014);
        panda$core$String* $tmp3025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3023, &$s3024);
        (($fn3026) p_out->$class->vtable[19])(p_out, $tmp3025);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3012, p_out);
        panda$core$Object* $tmp3028 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3029 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3028), p_out);
        unwrapped3027 = $tmp3029;
        panda$core$Object* $tmp3031 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3032 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, unwrapped3027, ((org$pandalanguage$pandac$Type*) $tmp3031), p_dstType, p_out);
        nonNullValue3030 = $tmp3032;
        panda$core$String* $tmp3034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3033, endLabel3014);
        panda$core$String* $tmp3036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3034, &$s3035);
        (($fn3037) p_out->$class->vtable[19])(p_out, $tmp3036);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3014, p_out);
        panda$core$String* $tmp3039 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3038 = $tmp3039;
        panda$core$String* $tmp3040 = panda$core$String$convert$R$panda$core$String(result3038);
        panda$core$String* $tmp3042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3040, &$s3041);
        panda$core$String* $tmp3043 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3042, $tmp3043);
        panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, &$s3045);
        panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, testStart2998);
        panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3047, &$s3048);
        panda$core$String* $tmp3051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3050, nonNullValue3030);
        panda$core$String* $tmp3053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3051, &$s3052);
        panda$core$String* $tmp3054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3053, nonNullLabel3012);
        panda$core$String* $tmp3056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3054, &$s3055);
        panda$core$String* $tmp3057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3049, $tmp3056);
        (($fn3058) p_out->$class->vtable[19])(p_out, $tmp3057);
        return result3038;
    }
    }
    panda$core$String* $tmp3060 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3059 = $tmp3060;
    panda$core$String* $tmp3061 = panda$core$String$convert$R$panda$core$String(mallocRef3059);
    panda$core$String* $tmp3063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, &$s3062);
    org$pandalanguage$pandac$Type* $tmp3064 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src2995);
    panda$core$Int64 $tmp3065 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3064);
    panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3063, ((panda$core$Object*) wrap_panda$core$Int64($tmp3065)));
    panda$core$String* $tmp3068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, &$s3067);
    (($fn3069) p_out->$class->vtable[19])(p_out, $tmp3068);
    org$pandalanguage$pandac$Type* $tmp3071 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src2995);
    panda$core$String* $tmp3072 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3071);
    wrapperTypeName3070 = $tmp3072;
    org$pandalanguage$pandac$Type* $tmp3074 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src2995);
    panda$core$String* $tmp3075 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3074);
    wrapperType3073 = $tmp3075;
    panda$core$String* $tmp3077 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3076 = $tmp3077;
    panda$core$String* $tmp3078 = panda$core$String$convert$R$panda$core$String(wrapperCast3076);
    panda$core$String* $tmp3080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3078, &$s3079);
    panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3080, mallocRef3059);
    panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, &$s3082);
    panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, wrapperType3073);
    panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3084, &$s3085);
    (($fn3087) p_out->$class->vtable[19])(p_out, $tmp3086);
    panda$core$String* $tmp3089 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3088 = $tmp3089;
    panda$core$String* $tmp3090 = panda$core$String$convert$R$panda$core$String(classPtr3088);
    panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3090, &$s3091);
    panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, wrapperTypeName3070);
    panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, &$s3094);
    panda$core$String* $tmp3096 = panda$core$String$convert$R$panda$core$String(wrapperType3073);
    panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
    panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3098, wrapperCast3076);
    panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, &$s3100);
    panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, $tmp3101);
    (($fn3103) p_out->$class->vtable[19])(p_out, $tmp3102);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3105 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src2995);
    cc3104 = $tmp3105;
    panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3106, cc3104->type);
    panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, &$s3108);
    panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, cc3104->name);
    panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, &$s3111);
    panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3113, classPtr3088);
    panda$core$String* $tmp3116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3114, &$s3115);
    panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, $tmp3116);
    (($fn3118) p_out->$class->vtable[19])(p_out, $tmp3117);
    panda$core$String* $tmp3120 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3119 = $tmp3120;
    panda$core$String* $tmp3121 = panda$core$String$convert$R$panda$core$String(refCount3119);
    panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, &$s3122);
    panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3123, wrapperTypeName3070);
    panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, &$s3125);
    panda$core$String* $tmp3127 = panda$core$String$convert$R$panda$core$String(wrapperType3073);
    panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3127, &$s3128);
    panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, wrapperCast3076);
    panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3130, &$s3131);
    panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3126, $tmp3132);
    (($fn3134) p_out->$class->vtable[19])(p_out, $tmp3133);
    panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3135, refCount3119);
    panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3136, &$s3137);
    (($fn3139) p_out->$class->vtable[19])(p_out, $tmp3138);
    panda$core$String* $tmp3141 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3140 = $tmp3141;
    panda$core$String* $tmp3142 = panda$core$String$convert$R$panda$core$String(target3140);
    panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, &$s3143);
    panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3144, wrapperTypeName3070);
    panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, &$s3146);
    panda$core$String* $tmp3148 = panda$core$String$convert$R$panda$core$String(wrapperType3073);
    panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3148, &$s3149);
    panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3150, wrapperCast3076);
    panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, &$s3152);
    panda$core$String* $tmp3154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, $tmp3153);
    (($fn3155) p_out->$class->vtable[19])(p_out, $tmp3154);
    panda$core$String* $tmp3157 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3156, $tmp3157);
    panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, &$s3159);
    panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, p_value);
    panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, &$s3162);
    panda$core$String* $tmp3164 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, $tmp3164);
    panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, &$s3166);
    panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, target3140);
    panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3168, &$s3169);
    (($fn3171) p_out->$class->vtable[19])(p_out, $tmp3170);
    panda$core$String* $tmp3172 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3173 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3073, $tmp3172);
    if ($tmp3173.value) {
    {
        panda$core$String* $tmp3175 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3174 = $tmp3175;
        panda$core$String* $tmp3176 = panda$core$String$convert$R$panda$core$String(result3174);
        panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, &$s3177);
        panda$core$String* $tmp3179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, wrapperType3073);
        panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3179, &$s3180);
        panda$core$String* $tmp3182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3181, wrapperCast3076);
        panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3182, &$s3183);
        panda$core$String* $tmp3185 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3184, $tmp3185);
        panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3186, &$s3187);
        (($fn3189) p_out->$class->vtable[19])(p_out, $tmp3188);
        return result3174;
    }
    }
    return wrapperCast3076;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3193;
    panda$core$String* t3194;
    org$pandalanguage$pandac$ClassDecl* cl3198;
    panda$core$String* base3202;
    panda$collections$ListView* fields3205;
    panda$core$Int64$nullable index3207;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3208;
    panda$core$String* result3236;
    panda$core$String* ptr3255;
    panda$core$String* result3263;
    panda$core$Bit $tmp3190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3190.value);
    panda$core$Int64 $tmp3191 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3191, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3192.value);
    field3193 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3195 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3193->type);
    t3194 = $tmp3195;
    panda$core$Bit $tmp3196 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3193->annotations);
    if ($tmp3196.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3193->value != NULL }).value);
        panda$core$String* $tmp3197 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, field3193->value, p_out);
        return $tmp3197;
    }
    }
    panda$core$Object* $tmp3199 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3200 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3199)->type);
    cl3198 = $tmp3200;
    PANDA_ASSERT(((panda$core$Bit) { cl3198 != NULL }).value);
    panda$core$Bit $tmp3201 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3198);
    if ($tmp3201.value) {
    {
        panda$core$Object* $tmp3203 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3204 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3203), p_out);
        base3202 = $tmp3204;
        panda$collections$ListView* $tmp3206 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3198);
        fields3205 = $tmp3206;
        index3207 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3209 = ((panda$collections$CollectionView*) fields3205)->$class->itable;
        while ($tmp3209->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3209 = $tmp3209->next;
        }
        $fn3211 $tmp3210 = $tmp3209->methods[0];
        panda$core$Int64 $tmp3212 = $tmp3210(((panda$collections$CollectionView*) fields3205));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3208, ((panda$core$Int64) { 0 }), $tmp3212, ((panda$core$Bit) { false }));
        int64_t $tmp3214 = $tmp3208.min.value;
        panda$core$Int64 i3213 = { $tmp3214 };
        int64_t $tmp3216 = $tmp3208.max.value;
        bool $tmp3217 = $tmp3208.inclusive.value;
        if ($tmp3217) goto $l3224; else goto $l3225;
        $l3224:;
        if ($tmp3214 <= $tmp3216) goto $l3218; else goto $l3220;
        $l3225:;
        if ($tmp3214 < $tmp3216) goto $l3218; else goto $l3220;
        $l3218:;
        {
            ITable* $tmp3226 = fields3205->$class->itable;
            while ($tmp3226->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3226 = $tmp3226->next;
            }
            $fn3228 $tmp3227 = $tmp3226->methods[0];
            panda$core$Object* $tmp3229 = $tmp3227(fields3205, i3213);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3229)) == ((panda$core$Object*) field3193) }).value) {
            {
                index3207 = ((panda$core$Int64$nullable) { i3213, true });
                goto $l3220;
            }
            }
        }
        $l3221:;
        int64_t $tmp3231 = $tmp3216 - i3213.value;
        if ($tmp3217) goto $l3232; else goto $l3233;
        $l3232:;
        if ($tmp3231 >= 1) goto $l3230; else goto $l3220;
        $l3233:;
        if ($tmp3231 > 1) goto $l3230; else goto $l3220;
        $l3230:;
        i3213.value += 1;
        goto $l3218;
        $l3220:;
        PANDA_ASSERT(((panda$core$Bit) { index3207.nonnull }).value);
        panda$core$String* $tmp3237 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3236 = $tmp3237;
        panda$core$String* $tmp3238 = panda$core$String$convert$R$panda$core$String(result3236);
        panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, &$s3239);
        panda$core$Object* $tmp3241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3242 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3241)->type);
        panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3240, $tmp3242);
        panda$core$String* $tmp3245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3243, &$s3244);
        panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3245, base3202);
        panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, &$s3247);
        panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3249, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3207.value))));
        panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3250, &$s3251);
        panda$core$String* $tmp3253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3248, $tmp3252);
        (($fn3254) p_out->$class->vtable[19])(p_out, $tmp3253);
        return result3236;
    }
    }
    panda$core$String* $tmp3256 = panda$core$String$convert$R$panda$core$String(t3194);
    panda$core$String* $tmp3258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, &$s3257);
    panda$core$String* $tmp3259 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3258, $tmp3259);
    panda$core$String* $tmp3262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3260, &$s3261);
    ptr3255 = $tmp3262;
    panda$core$String* $tmp3264 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3263 = $tmp3264;
    panda$core$String* $tmp3265 = panda$core$String$convert$R$panda$core$String(result3263);
    panda$core$String* $tmp3267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3265, &$s3266);
    panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3267, t3194);
    panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3268, &$s3269);
    panda$core$String* $tmp3271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3270, ptr3255);
    panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3271, &$s3272);
    (($fn3274) p_out->$class->vtable[19])(p_out, $tmp3273);
    return result3263;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3275;
    panda$core$String* testStart3278;
    panda$core$String* isNonNull3279;
    panda$core$String* nonNullLabel3292;
    panda$core$String* endLabel3294;
    panda$core$String* wrapped3307;
    panda$core$String* nonNullValue3310;
    panda$core$String* result3318;
    panda$core$String* targetType3346;
    panda$core$String* wrapperTypeName3348;
    panda$core$String* wrapperType3350;
    panda$core$String* srcCast3352;
    panda$core$String* load3368;
    panda$core$String* result3383;
    org$pandalanguage$pandac$ClassDecl* $tmp3276 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3275 = $tmp3276;
    PANDA_ASSERT(((panda$core$Bit) { target3275 != NULL }).value);
    panda$core$Bit $tmp3277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3277.value) {
    {
        testStart3278 = self->currentBlock;
        panda$core$String* $tmp3280 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3279 = $tmp3280;
        panda$core$String* $tmp3281 = panda$core$String$convert$R$panda$core$String(isNonNull3279);
        panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3281, &$s3282);
        panda$core$String* $tmp3284 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, $tmp3284);
        panda$core$String* $tmp3287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3285, &$s3286);
        panda$core$String* $tmp3288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3287, p_value);
        panda$core$String* $tmp3290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3288, &$s3289);
        (($fn3291) p_out->$class->vtable[19])(p_out, $tmp3290);
        panda$core$String* $tmp3293 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3292 = $tmp3293;
        panda$core$String* $tmp3295 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3294 = $tmp3295;
        panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3296, isNonNull3279);
        panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3297, &$s3298);
        panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3299, nonNullLabel3292);
        panda$core$String* $tmp3302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3300, &$s3301);
        panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3302, endLabel3294);
        panda$core$String* $tmp3305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, &$s3304);
        (($fn3306) p_out->$class->vtable[19])(p_out, $tmp3305);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, nonNullLabel3292, p_out);
        panda$core$Object* $tmp3308 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3309 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3308), p_out);
        wrapped3307 = $tmp3309;
        panda$core$Object* $tmp3311 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3312 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, wrapped3307, ((org$pandalanguage$pandac$Type*) $tmp3311), p_dstType, p_out);
        nonNullValue3310 = $tmp3312;
        panda$core$String* $tmp3314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3313, endLabel3294);
        panda$core$String* $tmp3316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3314, &$s3315);
        (($fn3317) p_out->$class->vtable[19])(p_out, $tmp3316);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel3294, p_out);
        panda$core$String* $tmp3319 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3318 = $tmp3319;
        panda$core$String* $tmp3320 = panda$core$String$convert$R$panda$core$String(result3318);
        panda$core$String* $tmp3322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3320, &$s3321);
        panda$core$String* $tmp3323 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3322, $tmp3323);
        panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3324, &$s3325);
        panda$core$Object* $tmp3328 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3329 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3328));
        panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3327, $tmp3329);
        panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, &$s3331);
        panda$core$String* $tmp3333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, $tmp3332);
        panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3334, testStart3278);
        panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, &$s3336);
        panda$core$String* $tmp3338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, nonNullValue3310);
        panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3338, &$s3339);
        panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3340, nonNullLabel3292);
        panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
        panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3333, $tmp3343);
        (($fn3345) p_out->$class->vtable[19])(p_out, $tmp3344);
        return result3318;
    }
    }
    panda$core$String* $tmp3347 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3346 = $tmp3347;
    panda$core$String* $tmp3349 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3348 = $tmp3349;
    panda$core$String* $tmp3351 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3350 = $tmp3351;
    panda$core$String* $tmp3353 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3352 = $tmp3353;
    panda$core$String* $tmp3354 = panda$core$String$convert$R$panda$core$String(srcCast3352);
    panda$core$String* $tmp3356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3354, &$s3355);
    panda$core$String* $tmp3357 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3356, $tmp3357);
    panda$core$String* $tmp3360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3358, &$s3359);
    panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3360, p_value);
    panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3361, &$s3362);
    panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, wrapperType3350);
    panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3364, &$s3365);
    (($fn3367) p_out->$class->vtable[19])(p_out, $tmp3366);
    panda$core$String* $tmp3369 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3368 = $tmp3369;
    panda$core$String* $tmp3370 = panda$core$String$convert$R$panda$core$String(load3368);
    panda$core$String* $tmp3372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3370, &$s3371);
    panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3372, wrapperTypeName3348);
    panda$core$String* $tmp3375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3373, &$s3374);
    panda$core$String* $tmp3376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3375, wrapperType3350);
    panda$core$String* $tmp3378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3376, &$s3377);
    panda$core$String* $tmp3379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3378, srcCast3352);
    panda$core$String* $tmp3381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3379, &$s3380);
    (($fn3382) p_out->$class->vtable[19])(p_out, $tmp3381);
    panda$core$String* $tmp3384 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3383 = $tmp3384;
    panda$core$String* $tmp3385 = panda$core$String$convert$R$panda$core$String(result3383);
    panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3385, &$s3386);
    panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, wrapperTypeName3348);
    panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, &$s3389);
    panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, load3368);
    panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3391, &$s3392);
    panda$core$String* $tmp3394 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3393, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3394, &$s3395);
    (($fn3397) p_out->$class->vtable[19])(p_out, $tmp3396);
    return result3383;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* nullableType3398;
    panda$core$String* result3400;
    panda$core$String* $tmp3399 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3398 = $tmp3399;
    panda$core$String* $tmp3401 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3400 = $tmp3401;
    panda$core$String* $tmp3402 = panda$core$String$convert$R$panda$core$String(result3400);
    panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3402, &$s3403);
    panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3404, nullableType3398);
    panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, &$s3406);
    panda$core$String* $tmp3409 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3408, $tmp3409);
    panda$core$String* $tmp3412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3410, &$s3411);
    panda$core$String* $tmp3413 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3412, $tmp3413);
    panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3414, &$s3415);
    panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3416, p_value);
    panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3417, &$s3418);
    panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3407, $tmp3419);
    (($fn3421) p_out->$class->vtable[19])(p_out, $tmp3420);
    return result3400;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$OutputStream* p_out) {
    panda$core$String* result3422;
    panda$core$String* $tmp3423 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3422 = $tmp3423;
    panda$core$String* $tmp3424 = panda$core$String$convert$R$panda$core$String(result3422);
    panda$core$String* $tmp3426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3424, &$s3425);
    panda$core$String* $tmp3427 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3426, $tmp3427);
    panda$core$String* $tmp3430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3428, &$s3429);
    panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3430, p_value);
    panda$core$String* $tmp3433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3431, &$s3432);
    (($fn3434) p_out->$class->vtable[19])(p_out, $tmp3433);
    return result3422;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$OutputStream* p_out) {
    panda$core$String* op3435;
    panda$core$Int64 size13438;
    panda$core$Int64 size23440;
    org$pandalanguage$pandac$ClassDecl* srcClass3448;
    org$pandalanguage$pandac$ClassDecl* targetClass3450;
    panda$core$String* srcType3489;
    panda$core$String* dstType3491;
    panda$core$String* result3494;
    panda$core$Bit $tmp3436 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3436.value) {
    {
        panda$core$Bit $tmp3437 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3437.value);
        panda$core$Int64 $tmp3439 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13438 = $tmp3439;
        panda$core$Int64 $tmp3441 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23440 = $tmp3441;
        panda$core$Bit $tmp3442 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13438, size23440);
        if ($tmp3442.value) {
        {
            op3435 = &$s3443;
        }
        }
        else {
        panda$core$Bit $tmp3444 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13438, size23440);
        if ($tmp3444.value) {
        {
            panda$core$Bit $tmp3445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3445.value) {
            {
                op3435 = &$s3446;
            }
            }
            else {
            {
                op3435 = &$s3447;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3449 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3448 = $tmp3449;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3448 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3451 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3450 = $tmp3451;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3450 != NULL }).value);
        panda$core$Bit $tmp3453 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3448);
        bool $tmp3452 = $tmp3453.value;
        if (!$tmp3452) goto $l3454;
        panda$core$Bit $tmp3455 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3450);
        panda$core$Bit $tmp3456 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3455);
        $tmp3452 = $tmp3456.value;
        $l3454:;
        panda$core$Bit $tmp3457 = { $tmp3452 };
        if ($tmp3457.value) {
        {
            panda$core$String* $tmp3458 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3458;
        }
        }
        else {
        panda$core$Bit $tmp3460 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3448);
        panda$core$Bit $tmp3461 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3460);
        bool $tmp3459 = $tmp3461.value;
        if (!$tmp3459) goto $l3462;
        panda$core$Bit $tmp3463 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3450);
        $tmp3459 = $tmp3463.value;
        $l3462:;
        panda$core$Bit $tmp3464 = { $tmp3459 };
        if ($tmp3464.value) {
        {
            panda$core$String* $tmp3465 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3465;
        }
        }
        else {
        panda$core$Bit $tmp3468 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3448);
        bool $tmp3467 = $tmp3468.value;
        if (!$tmp3467) goto $l3469;
        panda$core$Bit $tmp3470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3467 = $tmp3470.value;
        $l3469:;
        panda$core$Bit $tmp3471 = { $tmp3467 };
        bool $tmp3466 = $tmp3471.value;
        if (!$tmp3466) goto $l3472;
        panda$core$Object* $tmp3473 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3474 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3473), p_src);
        $tmp3466 = $tmp3474.value;
        $l3472:;
        panda$core$Bit $tmp3475 = { $tmp3466 };
        if ($tmp3475.value) {
        {
            panda$core$String* $tmp3476 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3476;
        }
        }
        else {
        panda$core$Bit $tmp3479 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3450);
        bool $tmp3478 = $tmp3479.value;
        if (!$tmp3478) goto $l3480;
        panda$core$Bit $tmp3481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3478 = $tmp3481.value;
        $l3480:;
        panda$core$Bit $tmp3482 = { $tmp3478 };
        bool $tmp3477 = $tmp3482.value;
        if (!$tmp3477) goto $l3483;
        panda$core$Object* $tmp3484 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3485 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3484), p_target);
        $tmp3477 = $tmp3485.value;
        $l3483:;
        panda$core$Bit $tmp3486 = { $tmp3477 };
        if ($tmp3486.value) {
        {
            panda$core$String* $tmp3487 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3487;
        }
        }
        }
        }
        }
        op3435 = &$s3488;
    }
    }
    panda$core$String* $tmp3490 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3489 = $tmp3490;
    panda$core$String* $tmp3492 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3491 = $tmp3492;
    panda$core$Bit $tmp3493 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3489, dstType3491);
    if ($tmp3493.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3495 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3494 = $tmp3495;
    panda$core$String* $tmp3496 = panda$core$String$convert$R$panda$core$String(result3494);
    panda$core$String* $tmp3498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3496, &$s3497);
    panda$core$String* $tmp3499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3498, op3435);
    panda$core$String* $tmp3501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3499, &$s3500);
    panda$core$String* $tmp3502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3501, srcType3489);
    panda$core$String* $tmp3504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3502, &$s3503);
    panda$core$String* $tmp3505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3504, p_value);
    panda$core$String* $tmp3507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3505, &$s3506);
    panda$core$String* $tmp3508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3507, dstType3491);
    panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3508, &$s3509);
    (($fn3511) p_out->$class->vtable[19])(p_out, $tmp3510);
    return result3494;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$OutputStream* p_out) {
    panda$core$String* base3515;
    panda$core$Bit $tmp3512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3512.value);
    panda$core$Int64 $tmp3513 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3513, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3514.value);
    panda$core$Object* $tmp3516 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3517 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3516), p_out);
    base3515 = $tmp3517;
    panda$core$Object* $tmp3518 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3519 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, base3515, ((org$pandalanguage$pandac$IRNode*) $tmp3518)->type, p_cast->type, p_out);
    return $tmp3519;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3523;
    panda$core$String* t3525;
    panda$core$String* value3533;
    panda$core$String* result3544;
    org$pandalanguage$pandac$FieldDecl* lastField3546;
    panda$core$String* value3574;
    panda$core$String* result3585;
    org$pandalanguage$pandac$FieldDecl* lastField3587;
    panda$core$String* alloca3610;
    panda$core$String* result3629;
    panda$core$String* callRef3644;
    panda$core$String* result3654;
    panda$core$String* classPtr3667;
    panda$core$String* className3669;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3694;
    panda$core$Bit $tmp3520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3520.value);
    panda$core$Int64 $tmp3521 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3522 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3521, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3522.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3524 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3523 = $tmp3524;
    PANDA_ASSERT(((panda$core$Bit) { cl3523 != NULL }).value);
    panda$core$String* $tmp3526 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3525 = $tmp3526;
    panda$core$Bit $tmp3527 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3527.value) {
    {
        panda$core$Int64 $tmp3528 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3528, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3529.value);
        panda$core$Object* $tmp3530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3531 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3530)->children);
        panda$core$Bit $tmp3532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3531, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3532.value);
        panda$core$Object* $tmp3534 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3535 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3534)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3536 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3535), p_out);
        value3533 = $tmp3536;
        panda$core$Object* $tmp3537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3538 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3537)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3538)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3539.value) {
        {
            panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3540, value3533);
            panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3541, &$s3542);
            return $tmp3543;
        }
        }
        panda$core$String* $tmp3545 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3544 = $tmp3545;
        panda$core$Int64 $tmp3547 = panda$collections$Array$get_count$R$panda$core$Int64(cl3523->fields);
        panda$core$Int64 $tmp3548 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3547, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3549 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3523->fields, $tmp3548);
        lastField3546 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3549);
        panda$core$Bit $tmp3550 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3546->annotations);
        panda$core$Bit $tmp3551 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3550);
        PANDA_ASSERT($tmp3551.value);
        panda$core$String* $tmp3552 = panda$core$String$convert$R$panda$core$String(result3544);
        panda$core$String* $tmp3554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3552, &$s3553);
        panda$core$String* $tmp3555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3554, t3525);
        panda$core$String* $tmp3557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3555, &$s3556);
        panda$core$String* $tmp3558 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3546->type);
        panda$core$String* $tmp3559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3557, $tmp3558);
        panda$core$String* $tmp3561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3559, &$s3560);
        panda$core$String* $tmp3562 = panda$core$String$convert$R$panda$core$String(value3533);
        panda$core$String* $tmp3564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3562, &$s3563);
        panda$core$String* $tmp3565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3561, $tmp3564);
        (($fn3566) p_out->$class->vtable[19])(p_out, $tmp3565);
        return result3544;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3567 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3568 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3567);
    if ($tmp3568.value) {
    {
        panda$core$Int64 $tmp3569 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3569, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3570.value);
        panda$core$Object* $tmp3571 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3572 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3571)->children);
        panda$core$Bit $tmp3573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3572, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3573.value);
        panda$core$Object* $tmp3575 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3576 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3575)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3577 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3576), p_out);
        value3574 = $tmp3577;
        panda$core$Object* $tmp3578 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3579 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3578)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3579)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3580.value) {
        {
            panda$core$String* $tmp3582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3581, value3574);
            panda$core$String* $tmp3584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3582, &$s3583);
            return $tmp3584;
        }
        }
        panda$core$String* $tmp3586 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3585 = $tmp3586;
        panda$core$Int64 $tmp3588 = panda$collections$Array$get_count$R$panda$core$Int64(cl3523->fields);
        panda$core$Int64 $tmp3589 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3588, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3523->fields, $tmp3589);
        lastField3587 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3590);
        panda$core$Bit $tmp3591 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3587->annotations);
        panda$core$Bit $tmp3592 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3591);
        PANDA_ASSERT($tmp3592.value);
        panda$core$String* $tmp3593 = panda$core$String$convert$R$panda$core$String(result3585);
        panda$core$String* $tmp3595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3593, &$s3594);
        panda$core$String* $tmp3596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3595, t3525);
        panda$core$String* $tmp3598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3596, &$s3597);
        panda$core$String* $tmp3599 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3587->type);
        panda$core$String* $tmp3600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3598, $tmp3599);
        panda$core$String* $tmp3602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3600, &$s3601);
        panda$core$String* $tmp3603 = panda$core$String$convert$R$panda$core$String(value3574);
        panda$core$String* $tmp3605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3603, &$s3604);
        panda$core$String* $tmp3606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3602, $tmp3605);
        (($fn3607) p_out->$class->vtable[19])(p_out, $tmp3606);
        return result3585;
    }
    }
    panda$core$Bit $tmp3608 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3523);
    if ($tmp3608.value) {
    {
        panda$core$Int64 $tmp3609 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3609;
        panda$core$String* $tmp3612 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3611, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3612, &$s3613);
        alloca3610 = $tmp3614;
        panda$core$String* $tmp3615 = panda$core$String$convert$R$panda$core$String(alloca3610);
        panda$core$String* $tmp3617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3615, &$s3616);
        panda$core$String* $tmp3618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3617, t3525);
        panda$core$String* $tmp3620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3618, &$s3619);
        (($fn3621) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3620);
        panda$core$Object* $tmp3622 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3623 = panda$core$String$convert$R$panda$core$String(t3525);
        panda$core$String* $tmp3625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3623, &$s3624);
        panda$core$String* $tmp3626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3625, alloca3610);
        panda$core$String* $tmp3628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3626, &$s3627);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3622), $tmp3628, p_out);
        panda$core$String* $tmp3630 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3629 = $tmp3630;
        panda$core$String* $tmp3631 = panda$core$String$convert$R$panda$core$String(result3629);
        panda$core$String* $tmp3633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3631, &$s3632);
        panda$core$String* $tmp3634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3633, t3525);
        panda$core$String* $tmp3636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3634, &$s3635);
        panda$core$String* $tmp3637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3636, t3525);
        panda$core$String* $tmp3639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3637, &$s3638);
        panda$core$String* $tmp3640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3639, alloca3610);
        panda$core$String* $tmp3642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3640, &$s3641);
        (($fn3643) p_out->$class->vtable[19])(p_out, $tmp3642);
        return result3629;
    }
    }
    panda$core$String* $tmp3645 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3644 = $tmp3645;
    panda$core$String* $tmp3646 = panda$core$String$convert$R$panda$core$String(callRef3644);
    panda$core$String* $tmp3648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3646, &$s3647);
    panda$core$Int64 $tmp3649 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3650 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3648, ((panda$core$Object*) wrap_panda$core$Int64($tmp3649)));
    panda$core$String* $tmp3652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3650, &$s3651);
    (($fn3653) p_out->$class->vtable[19])(p_out, $tmp3652);
    panda$core$String* $tmp3655 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3654 = $tmp3655;
    panda$core$String* $tmp3656 = panda$core$String$convert$R$panda$core$String(result3654);
    panda$core$String* $tmp3658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3656, &$s3657);
    panda$core$String* $tmp3659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3658, callRef3644);
    panda$core$String* $tmp3661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3659, &$s3660);
    panda$core$String* $tmp3662 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3661, $tmp3662);
    panda$core$String* $tmp3665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3663, &$s3664);
    (($fn3666) p_out->$class->vtable[19])(p_out, $tmp3665);
    panda$core$String* $tmp3668 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3667 = $tmp3668;
    panda$core$Bit $tmp3671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3670 = $tmp3671.value;
    if (!$tmp3670) goto $l3672;
    panda$core$Bit $tmp3673 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3523);
    panda$core$Bit $tmp3674 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3673);
    $tmp3670 = $tmp3674.value;
    $l3672:;
    panda$core$Bit $tmp3675 = { $tmp3670 };
    if ($tmp3675.value) {
    {
        panda$core$Object* $tmp3676 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3677 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3676));
        className3669 = $tmp3677;
    }
    }
    else {
    {
        panda$core$String* $tmp3678 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3669 = $tmp3678;
    }
    }
    panda$core$String* $tmp3679 = panda$core$String$convert$R$panda$core$String(classPtr3667);
    panda$core$String* $tmp3681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3679, &$s3680);
    panda$core$String* $tmp3682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3681, className3669);
    panda$core$String* $tmp3684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3682, &$s3683);
    panda$core$String* $tmp3685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3684, t3525);
    panda$core$String* $tmp3687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3685, &$s3686);
    panda$core$String* $tmp3688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3687, result3654);
    panda$core$String* $tmp3690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3688, &$s3689);
    panda$core$String* $tmp3692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3690, &$s3691);
    (($fn3693) p_out->$class->vtable[19])(p_out, $tmp3692);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3695 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3523);
    cc3694 = $tmp3695;
    panda$core$String* $tmp3697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3696, cc3694->type);
    panda$core$String* $tmp3699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3697, &$s3698);
    panda$core$String* $tmp3700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3699, cc3694->name);
    panda$core$String* $tmp3702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3700, &$s3701);
    panda$core$String* $tmp3704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3703, classPtr3667);
    panda$core$String* $tmp3706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3704, &$s3705);
    panda$core$String* $tmp3707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3702, $tmp3706);
    (($fn3708) p_out->$class->vtable[19])(p_out, $tmp3707);
    panda$core$Object* $tmp3709 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3710 = panda$core$String$convert$R$panda$core$String(t3525);
    panda$core$String* $tmp3712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3710, &$s3711);
    panda$core$String* $tmp3713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3712, result3654);
    panda$core$String* $tmp3715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3713, &$s3714);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3709), $tmp3715, p_out);
    return result3654;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3716 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3716;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp3718 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3717, $tmp3718);
    return $tmp3719;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$OutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3720;
    }
    }
    return &$s3721;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$OutputStream* p_out) {
    panda$core$String* result3724;
    panda$core$String* t3726;
    panda$core$Bit $tmp3722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3722.value) {
    {
        panda$core$String* $tmp3723 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3723;
    }
    }
    panda$core$String* $tmp3725 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3724 = $tmp3725;
    panda$core$String* $tmp3727 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3726 = $tmp3727;
    panda$core$String* $tmp3728 = panda$core$String$convert$R$panda$core$String(result3724);
    panda$core$String* $tmp3730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3728, &$s3729);
    panda$core$String* $tmp3731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3730, t3726);
    panda$core$String* $tmp3733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3731, &$s3732);
    panda$core$String* $tmp3734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3733, t3726);
    panda$core$String* $tmp3736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3734, &$s3735);
    panda$core$String* $tmp3737 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3736, $tmp3737);
    panda$core$String* $tmp3740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3738, &$s3739);
    (($fn3741) p_out->$class->vtable[19])(p_out, $tmp3740);
    return result3724;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* chars3743;
    panda$core$String* charsType3748;
    panda$core$String* separator3765;
    panda$collections$Iterator* c$Iter3767;
    panda$core$Char8 c3780;
    panda$core$String* result3797;
    org$pandalanguage$pandac$ClassDecl* string3802;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3805;
    panda$core$Int64 $tmp3742 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3742;
    panda$core$String* $tmp3745 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3744, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3745, &$s3746);
    chars3743 = $tmp3747;
    panda$collections$ListView* $tmp3750 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3751 = ((panda$collections$CollectionView*) $tmp3750)->$class->itable;
    while ($tmp3751->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3751 = $tmp3751->next;
    }
    $fn3753 $tmp3752 = $tmp3751->methods[0];
    panda$core$Int64 $tmp3754 = $tmp3752(((panda$collections$CollectionView*) $tmp3750));
    panda$core$String* $tmp3755 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3749, ((panda$core$Object*) wrap_panda$core$Int64($tmp3754)));
    panda$core$String* $tmp3757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3755, &$s3756);
    charsType3748 = $tmp3757;
    panda$core$String* $tmp3758 = panda$core$String$convert$R$panda$core$String(chars3743);
    panda$core$String* $tmp3760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3758, &$s3759);
    panda$core$String* $tmp3761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3760, charsType3748);
    panda$core$String* $tmp3763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3761, &$s3762);
    (($fn3764) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3763);
    separator3765 = &$s3766;
    {
        panda$collections$ListView* $tmp3768 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp3769 = ((panda$collections$Iterable*) $tmp3768)->$class->itable;
        while ($tmp3769->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3769 = $tmp3769->next;
        }
        $fn3771 $tmp3770 = $tmp3769->methods[0];
        panda$collections$Iterator* $tmp3772 = $tmp3770(((panda$collections$Iterable*) $tmp3768));
        c$Iter3767 = $tmp3772;
        $l3773:;
        ITable* $tmp3775 = c$Iter3767->$class->itable;
        while ($tmp3775->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3775 = $tmp3775->next;
        }
        $fn3777 $tmp3776 = $tmp3775->methods[0];
        panda$core$Bit $tmp3778 = $tmp3776(c$Iter3767);
        panda$core$Bit $tmp3779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3778);
        if (!$tmp3779.value) goto $l3774;
        {
            ITable* $tmp3781 = c$Iter3767->$class->itable;
            while ($tmp3781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3781 = $tmp3781->next;
            }
            $fn3783 $tmp3782 = $tmp3781->methods[1];
            panda$core$Object* $tmp3784 = $tmp3782(c$Iter3767);
            c3780 = ((panda$core$Char8$wrapper*) $tmp3784)->value;
            panda$core$String* $tmp3785 = panda$core$String$convert$R$panda$core$String(separator3765);
            panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3785, &$s3786);
            panda$core$Int8 $tmp3788 = panda$core$Char8$convert$R$panda$core$Int8(c3780);
            panda$core$String* $tmp3789 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3787, ((panda$core$Object*) wrap_panda$core$Int8($tmp3788)));
            panda$core$String* $tmp3791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3789, &$s3790);
            (($fn3792) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3791);
            separator3765 = &$s3793;
        }
        goto $l3773;
        $l3774:;
    }
    (($fn3795) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s3794);
    panda$core$Int64 $tmp3796 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3796;
    panda$core$String* $tmp3799 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3798, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3799, &$s3800);
    result3797 = $tmp3801;
    org$pandalanguage$pandac$Type* $tmp3803 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3804 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp3803);
    string3802 = $tmp3804;
    PANDA_ASSERT(((panda$core$Bit) { string3802 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3806 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string3802);
    cc3805 = $tmp3806;
    panda$core$String* $tmp3807 = panda$core$String$convert$R$panda$core$String(result3797);
    panda$core$String* $tmp3809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3807, &$s3808);
    panda$core$String* $tmp3811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3810, cc3805->type);
    panda$core$String* $tmp3813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3811, &$s3812);
    panda$core$String* $tmp3814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3813, cc3805->name);
    panda$core$String* $tmp3816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3814, &$s3815);
    panda$core$String* $tmp3817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3809, $tmp3816);
    panda$core$String* $tmp3819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3817, &$s3818);
    panda$core$String* $tmp3821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3820, charsType3748);
    panda$core$String* $tmp3823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3821, &$s3822);
    panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3823, chars3743);
    panda$core$String* $tmp3826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3824, &$s3825);
    panda$core$String* $tmp3827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3819, $tmp3826);
    panda$collections$ListView* $tmp3829 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3830 = ((panda$collections$CollectionView*) $tmp3829)->$class->itable;
    while ($tmp3830->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3830 = $tmp3830->next;
    }
    $fn3832 $tmp3831 = $tmp3830->methods[0];
    panda$core$Int64 $tmp3833 = $tmp3831(((panda$collections$CollectionView*) $tmp3829));
    panda$core$String* $tmp3834 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3828, ((panda$core$Object*) wrap_panda$core$Int64($tmp3833)));
    panda$core$String* $tmp3836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3834, &$s3835);
    panda$core$String* $tmp3837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3827, $tmp3836);
    panda$core$Int64 $tmp3839 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$String* $tmp3840 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3838, ((panda$core$Object*) wrap_panda$core$Int64($tmp3839)));
    panda$core$String* $tmp3842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3840, &$s3841);
    panda$core$String* $tmp3843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3837, $tmp3842);
    (($fn3844) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp3843);
    return result3797;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$Int64 $tmp3845 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp3846 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3845, ((panda$core$Int64) { 0 }));
    if ($tmp3846.value) {
    {
        panda$core$Object* $tmp3847 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp3847)->selfRef;
    }
    }
    return &$s3848;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* result3849;
    panda$core$String* $tmp3850 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3849 = $tmp3850;
    panda$core$String* $tmp3851 = panda$core$String$convert$R$panda$core$String(result3849);
    panda$core$String* $tmp3853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3851, &$s3852);
    org$pandalanguage$pandac$Type* $tmp3854 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
    panda$core$String* $tmp3855 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3854);
    panda$core$String* $tmp3856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3853, $tmp3855);
    panda$core$String* $tmp3858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3856, &$s3857);
    panda$core$String* $tmp3859 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp3860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3858, $tmp3859);
    (($fn3861) p_out->$class->vtable[19])(p_out, $tmp3860);
    return result3849;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value3865;
    org$pandalanguage$pandac$ClassDecl* cl3868;
    panda$core$String* resultValue3871;
    panda$core$String* field3876;
    panda$core$String* result3901;
    panda$core$Bit $tmp3862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp3862.value);
    panda$core$Int64 $tmp3863 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3863, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3864.value);
    panda$core$Object* $tmp3866 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3867 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3866), p_out);
    value3865 = $tmp3867;
    panda$core$Object* $tmp3869 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3870 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3869)->type);
    cl3868 = $tmp3870;
    panda$core$Bit $tmp3872 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3868);
    if ($tmp3872.value) {
    {
        panda$core$Object* $tmp3873 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3874 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3873)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3874.value) {
        {
            return &$s3875;
        }
        }
        panda$core$String* $tmp3877 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field3876 = $tmp3877;
        panda$core$String* $tmp3878 = panda$core$String$convert$R$panda$core$String(field3876);
        panda$core$String* $tmp3880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3878, &$s3879);
        panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3880, value3865);
        panda$core$String* $tmp3883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3881, &$s3882);
        (($fn3884) p_out->$class->vtable[19])(p_out, $tmp3883);
        panda$core$String* $tmp3885 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3871 = $tmp3885;
        panda$core$String* $tmp3886 = panda$core$String$convert$R$panda$core$String(resultValue3871);
        panda$core$String* $tmp3888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3886, &$s3887);
        panda$core$String* $tmp3889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3888, field3876);
        panda$core$String* $tmp3891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3889, &$s3890);
        (($fn3892) p_out->$class->vtable[19])(p_out, $tmp3891);
    }
    }
    else {
    {
        panda$core$String* $tmp3893 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3871 = $tmp3893;
        panda$core$String* $tmp3894 = panda$core$String$convert$R$panda$core$String(resultValue3871);
        panda$core$String* $tmp3896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3894, &$s3895);
        panda$core$String* $tmp3897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3896, value3865);
        panda$core$String* $tmp3899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3897, &$s3898);
        (($fn3900) p_out->$class->vtable[19])(p_out, $tmp3899);
    }
    }
    panda$core$String* $tmp3902 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3901 = $tmp3902;
    panda$core$String* $tmp3903 = panda$core$String$convert$R$panda$core$String(result3901);
    panda$core$String* $tmp3905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3903, &$s3904);
    panda$core$String* $tmp3906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3905, resultValue3871);
    panda$core$String* $tmp3908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3906, &$s3907);
    (($fn3909) p_out->$class->vtable[19])(p_out, $tmp3908);
    return result3901;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$OutputStream* p_out) {
    panda$core$String* value3913;
    org$pandalanguage$pandac$ClassDecl* cl3916;
    panda$core$String* resultValue3919;
    panda$core$String* result3940;
    panda$core$Bit $tmp3910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp3910.value);
    panda$core$Int64 $tmp3911 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3911, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3912.value);
    panda$core$Object* $tmp3914 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3915 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3914), p_out);
    value3913 = $tmp3915;
    panda$core$Object* $tmp3917 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3918 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3917)->type);
    cl3916 = $tmp3918;
    panda$core$Bit $tmp3920 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3916);
    if ($tmp3920.value) {
    {
        panda$core$Object* $tmp3921 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3922 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3921)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3922.value) {
        {
            return &$s3923;
        }
        }
        panda$core$String* $tmp3924 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3919 = $tmp3924;
        panda$core$String* $tmp3925 = panda$core$String$convert$R$panda$core$String(resultValue3919);
        panda$core$String* $tmp3927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3925, &$s3926);
        panda$core$String* $tmp3928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3927, value3913);
        panda$core$String* $tmp3930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3928, &$s3929);
        (($fn3931) p_out->$class->vtable[19])(p_out, $tmp3930);
    }
    }
    else {
    {
        panda$core$String* $tmp3932 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3919 = $tmp3932;
        panda$core$String* $tmp3933 = panda$core$String$convert$R$panda$core$String(resultValue3919);
        panda$core$String* $tmp3935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3933, &$s3934);
        panda$core$String* $tmp3936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3935, value3913);
        panda$core$String* $tmp3938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3936, &$s3937);
        (($fn3939) p_out->$class->vtable[19])(p_out, $tmp3938);
    }
    }
    panda$core$String* $tmp3941 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3940 = $tmp3941;
    panda$core$String* $tmp3942 = panda$core$String$convert$R$panda$core$String(result3940);
    panda$core$String* $tmp3944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3942, &$s3943);
    panda$core$String* $tmp3945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3944, resultValue3919);
    panda$core$String* $tmp3947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3945, &$s3946);
    (($fn3948) p_out->$class->vtable[19])(p_out, $tmp3947);
    return result3940;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3950;
    panda$core$Bit $tmp3949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp3949.value);
    panda$core$Object* $tmp3951 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3952 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp3951));
    cl3950 = $tmp3952;
    PANDA_ASSERT(((panda$core$Bit) { cl3950 != NULL }).value);
    panda$core$Bit $tmp3953 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3950);
    if ($tmp3953.value) {
    {
        panda$core$Object* $tmp3955 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3956 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3955));
        panda$core$String* $tmp3957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3954, $tmp3956);
        panda$core$String* $tmp3959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3957, &$s3958);
        return $tmp3959;
    }
    }
    else {
    {
        return &$s3960;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* base3964;
    panda$core$String* result3967;
    panda$core$Bit $tmp3961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp3961.value);
    panda$core$Int64 $tmp3962 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp3963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3962, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3963.value);
    panda$core$Object* $tmp3965 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3966 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3965), p_out);
    base3964 = $tmp3966;
    panda$core$String* $tmp3968 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3967 = $tmp3968;
    panda$core$Int64 $tmp3969 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp3969.value) {
        case 52:
        {
            panda$core$String* $tmp3970 = panda$core$String$convert$R$panda$core$String(result3967);
            panda$core$String* $tmp3972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3970, &$s3971);
            panda$core$String* $tmp3973 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp3974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3972, $tmp3973);
            panda$core$String* $tmp3976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3974, &$s3975);
            panda$core$String* $tmp3977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3976, base3964);
            panda$core$String* $tmp3979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3977, &$s3978);
            (($fn3980) p_out->$class->vtable[19])(p_out, $tmp3979);
            return result3967;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp3981 = panda$core$String$convert$R$panda$core$String(result3967);
            panda$core$String* $tmp3983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3981, &$s3982);
            panda$core$String* $tmp3984 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp3985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3983, $tmp3984);
            panda$core$String* $tmp3987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3985, &$s3986);
            panda$core$String* $tmp3988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3987, base3964);
            panda$core$String* $tmp3990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3988, &$s3989);
            (($fn3991) p_out->$class->vtable[19])(p_out, $tmp3990);
            return result3967;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* value4004;
    panda$core$String* result4007;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp3992 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp3992;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp3993 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp3993;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp3994 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp3994;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp3995 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp3995;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp3996 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp3996;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp3997 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp3997;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp3998 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp3998;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3999 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp3999;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4000 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4000;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4001 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4001;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4002 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4002;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4003 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4003;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4005 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4006 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4005), p_out);
            value4004 = $tmp4006;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4004));
            return value4004;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4008 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4007 = ((panda$core$String*) $tmp4008);
            PANDA_ASSERT(((panda$core$Bit) { result4007 != NULL }).value);
            return result4007;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4009 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4009;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4010 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4010;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4011 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4011;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4012 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4012;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$OutputStream* p_out) {
    panda$core$String* $tmp4013 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4014 = panda$core$String$convert$R$panda$core$String($tmp4013);
    panda$core$String* $tmp4016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4014, &$s4015);
    panda$core$String* $tmp4017 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4016, $tmp4017);
    panda$core$String* $tmp4020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4018, &$s4019);
    return $tmp4020;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$OutputStream* p_out) {
    panda$collections$Iterator* s$Iter4022;
    org$pandalanguage$pandac$IRNode* s4034;
    panda$core$Bit $tmp4021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4021.value);
    {
        ITable* $tmp4023 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4023->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4023 = $tmp4023->next;
        }
        $fn4025 $tmp4024 = $tmp4023->methods[0];
        panda$collections$Iterator* $tmp4026 = $tmp4024(((panda$collections$Iterable*) p_block->children));
        s$Iter4022 = $tmp4026;
        $l4027:;
        ITable* $tmp4029 = s$Iter4022->$class->itable;
        while ($tmp4029->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4029 = $tmp4029->next;
        }
        $fn4031 $tmp4030 = $tmp4029->methods[0];
        panda$core$Bit $tmp4032 = $tmp4030(s$Iter4022);
        panda$core$Bit $tmp4033 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4032);
        if (!$tmp4033.value) goto $l4028;
        {
            ITable* $tmp4035 = s$Iter4022->$class->itable;
            while ($tmp4035->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4035 = $tmp4035->next;
            }
            $fn4037 $tmp4036 = $tmp4035->methods[1];
            panda$core$Object* $tmp4038 = $tmp4036(s$Iter4022);
            s4034 = ((org$pandalanguage$pandac$IRNode*) $tmp4038);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s4034, p_out);
        }
        goto $l4027;
        $l4028:;
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4039;
    panda$core$String* $match$1896_94040;
    panda$core$String* ptr4045;
    panda$core$String* arg4048;
    org$pandalanguage$pandac$Type* baseType4068;
    panda$core$String* base4072;
    panda$core$String* indexStruct4075;
    panda$core$String* index4078;
    panda$core$String* value4087;
    panda$core$String* ptr4091;
    panda$core$String* ptr4128;
    panda$core$String* cast4131;
    m4039 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1896_94040 = ((org$pandalanguage$pandac$Symbol*) m4039->value)->name;
        panda$core$Bit $tmp4042 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1896_94040, &$s4041);
        if ($tmp4042.value) {
        {
            panda$core$Int64 $tmp4043 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4043, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4044.value);
            panda$core$Object* $tmp4046 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4047 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4046), p_out);
            ptr4045 = $tmp4047;
            panda$core$Object* $tmp4049 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4050 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4049));
            panda$core$String* $tmp4051 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4050, p_out);
            arg4048 = $tmp4051;
            panda$core$String* $tmp4053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4052, arg4048);
            panda$core$String* $tmp4055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4053, &$s4054);
            panda$core$String* $tmp4056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4055, ptr4045);
            panda$core$String* $tmp4058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4056, &$s4057);
            (($fn4059) p_out->$class->vtable[19])(p_out, $tmp4058);
        }
        }
        else {
        panda$core$Bit $tmp4061 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1896_94040, &$s4060);
        if ($tmp4061.value) {
        {
            panda$core$Int64 $tmp4062 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4062, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4063.value);
            panda$core$Object* $tmp4064 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4065 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4064));
            panda$core$Int64 $tmp4066 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4065->type->subtypes);
            panda$core$Bit $tmp4067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4066, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4067.value);
            panda$core$Object* $tmp4069 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4070 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4069));
            panda$core$Object* $tmp4071 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4070->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4068 = ((org$pandalanguage$pandac$Type*) $tmp4071);
            panda$core$Object* $tmp4073 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4074 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4073), p_out);
            base4072 = $tmp4074;
            panda$core$Object* $tmp4076 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4077 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4076), p_out);
            indexStruct4075 = $tmp4077;
            panda$core$String* $tmp4079 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4078 = $tmp4079;
            panda$core$String* $tmp4080 = panda$core$String$convert$R$panda$core$String(index4078);
            panda$core$String* $tmp4082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4080, &$s4081);
            panda$core$String* $tmp4083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4082, indexStruct4075);
            panda$core$String* $tmp4085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4083, &$s4084);
            (($fn4086) p_out->$class->vtable[19])(p_out, $tmp4085);
            panda$core$Object* $tmp4088 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4089 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4088));
            panda$core$String* $tmp4090 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp4089, p_out);
            value4087 = $tmp4090;
            panda$core$String* $tmp4092 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4091 = $tmp4092;
            panda$core$String* $tmp4093 = panda$core$String$convert$R$panda$core$String(ptr4091);
            panda$core$String* $tmp4095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4093, &$s4094);
            panda$core$String* $tmp4096 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4068);
            panda$core$String* $tmp4097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4095, $tmp4096);
            panda$core$String* $tmp4099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4097, &$s4098);
            panda$core$String* $tmp4100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4099, base4072);
            panda$core$String* $tmp4102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4100, &$s4101);
            panda$core$String* $tmp4104 = panda$core$String$convert$R$panda$core$String(&$s4103);
            panda$core$String* $tmp4106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4104, &$s4105);
            panda$core$String* $tmp4107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4106, index4078);
            panda$core$String* $tmp4109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4107, &$s4108);
            panda$core$String* $tmp4110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4102, $tmp4109);
            (($fn4111) p_out->$class->vtable[19])(p_out, $tmp4110);
            panda$core$String* $tmp4113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4112, value4087);
            panda$core$String* $tmp4115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4113, &$s4114);
            panda$core$String* $tmp4116 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4068);
            panda$core$String* $tmp4117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4115, $tmp4116);
            panda$core$String* $tmp4119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4117, &$s4118);
            panda$core$String* $tmp4120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4119, ptr4091);
            panda$core$String* $tmp4122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4120, &$s4121);
            (($fn4123) p_out->$class->vtable[19])(p_out, $tmp4122);
        }
        }
        else {
        panda$core$Bit $tmp4125 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1896_94040, &$s4124);
        if ($tmp4125.value) {
        {
            panda$core$Int64 $tmp4126 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4126, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4127.value);
            panda$core$Object* $tmp4129 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4130 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4129), p_out);
            ptr4128 = $tmp4130;
            panda$core$String* $tmp4132 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4131 = $tmp4132;
            panda$core$String* $tmp4133 = panda$core$String$convert$R$panda$core$String(cast4131);
            panda$core$String* $tmp4135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4133, &$s4134);
            panda$core$String* $tmp4136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4135, ptr4128);
            panda$core$String* $tmp4138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4136, &$s4137);
            (($fn4139) p_out->$class->vtable[19])(p_out, $tmp4138);
            panda$core$String* $tmp4141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4140, cast4131);
            panda$core$String* $tmp4143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4141, &$s4142);
            (($fn4144) p_out->$class->vtable[19])(p_out, $tmp4143);
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
    org$pandalanguage$pandac$MethodDecl* m4146;
    org$pandalanguage$pandac$Type* actualMethodType4149;
    panda$core$String* actualResultType4150;
    panda$core$Bit isSuper4151;
    panda$collections$Array* args4171;
    panda$core$Int64 offset4174;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4179;
    panda$core$String* arg4194;
    panda$core$String* refTarget4226;
    panda$core$String* methodRef4230;
    panda$core$String* separator4232;
    panda$core$String* indirectVar4236;
    panda$core$String* resultType4239;
    panda$collections$Iterator* a$Iter4281;
    panda$core$String* a4293;
    panda$core$Bit $tmp4145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4145.value);
    m4146 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4148 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4146->owner)->name, &$s4147);
    if ($tmp4148.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4146->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4146);
    }
    }
    panda$core$Int64 $tmp4153 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4154 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4153, ((panda$core$Int64) { 1 }));
    bool $tmp4152 = $tmp4154.value;
    if (!$tmp4152) goto $l4155;
    panda$core$Object* $tmp4156 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4156)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4152 = $tmp4157.value;
    $l4155:;
    panda$core$Bit $tmp4158 = { $tmp4152 };
    isSuper4151 = $tmp4158;
    panda$core$Bit $tmp4160 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4151);
    bool $tmp4159 = $tmp4160.value;
    if (!$tmp4159) goto $l4161;
    panda$core$Bit $tmp4162 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4146);
    $tmp4159 = $tmp4162.value;
    $l4161:;
    panda$core$Bit $tmp4163 = { $tmp4159 };
    if ($tmp4163.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4164 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4146);
        actualMethodType4149 = $tmp4164;
        panda$core$Int64 $tmp4165 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4149->subtypes);
        panda$core$Int64 $tmp4166 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4165, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4167 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4149->subtypes, $tmp4166);
        panda$core$String* $tmp4168 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4167));
        actualResultType4150 = $tmp4168;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4169 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4146);
        actualMethodType4149 = $tmp4169;
        panda$core$String* $tmp4170 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4150 = $tmp4170;
    }
    }
    panda$collections$Array* $tmp4172 = (panda$collections$Array*) malloc(40);
    $tmp4172->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4172->refCount.value = 1;
    panda$collections$Array$init($tmp4172);
    args4171 = $tmp4172;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4171, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4175 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4176 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4149->subtypes);
    panda$core$Int64 $tmp4177 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4175, $tmp4176);
    panda$core$Int64 $tmp4178 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4177, ((panda$core$Int64) { 1 }));
    offset4174 = $tmp4178;
    panda$core$Int64 $tmp4180 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4179, ((panda$core$Int64) { 0 }), $tmp4180, ((panda$core$Bit) { false }));
    int64_t $tmp4182 = $tmp4179.min.value;
    panda$core$Int64 i4181 = { $tmp4182 };
    int64_t $tmp4184 = $tmp4179.max.value;
    bool $tmp4185 = $tmp4179.inclusive.value;
    if ($tmp4185) goto $l4192; else goto $l4193;
    $l4192:;
    if ($tmp4182 <= $tmp4184) goto $l4186; else goto $l4188;
    $l4193:;
    if ($tmp4182 < $tmp4184) goto $l4186; else goto $l4188;
    $l4186:;
    {
        panda$core$Object* $tmp4195 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4181);
        panda$core$String* $tmp4196 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4195), p_out);
        arg4194 = $tmp4196;
        panda$core$Bit $tmp4198 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4181, offset4174);
        bool $tmp4197 = $tmp4198.value;
        if (!$tmp4197) goto $l4199;
        panda$core$Int64 $tmp4200 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4181, offset4174);
        panda$core$Object* $tmp4201 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4149->subtypes, $tmp4200);
        panda$core$Object* $tmp4202 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4181);
        panda$core$Bit $tmp4203 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4201), ((org$pandalanguage$pandac$IRNode*) $tmp4202)->type);
        $tmp4197 = $tmp4203.value;
        $l4199:;
        panda$core$Bit $tmp4204 = { $tmp4197 };
        if ($tmp4204.value) {
        {
            panda$core$Int64 $tmp4205 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4181, offset4174);
            panda$core$Object* $tmp4206 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4149->subtypes, $tmp4205);
            panda$core$String* $tmp4207 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4206));
            panda$core$String* $tmp4209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4207, &$s4208);
            panda$core$Object* $tmp4210 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4181);
            panda$core$Int64 $tmp4211 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4181, offset4174);
            panda$core$Object* $tmp4212 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4149->subtypes, $tmp4211);
            panda$core$String* $tmp4213 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$panda$core$String(self, arg4194, ((org$pandalanguage$pandac$IRNode*) $tmp4210)->type, ((org$pandalanguage$pandac$Type*) $tmp4212), p_out);
            panda$core$String* $tmp4214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4209, $tmp4213);
            arg4194 = $tmp4214;
        }
        }
        else {
        {
            panda$core$Object* $tmp4215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4181);
            panda$core$String* $tmp4216 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4215)->type);
            panda$core$String* $tmp4218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4216, &$s4217);
            panda$core$String* $tmp4219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4218, arg4194);
            arg4194 = $tmp4219;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4171, ((panda$core$Object*) arg4194));
    }
    $l4189:;
    int64_t $tmp4221 = $tmp4184 - i4181.value;
    if ($tmp4185) goto $l4222; else goto $l4223;
    $l4222:;
    if ($tmp4221 >= 1) goto $l4220; else goto $l4188;
    $l4223:;
    if ($tmp4221 > 1) goto $l4220; else goto $l4188;
    $l4220:;
    i4181.value += 1;
    goto $l4186;
    $l4188:;
    panda$core$Int64 $tmp4227 = panda$collections$Array$get_count$R$panda$core$Int64(args4171);
    panda$core$Bit $tmp4228 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4227, ((panda$core$Int64) { 0 }));
    if ($tmp4228.value) {
    {
        panda$core$Object* $tmp4229 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4171, ((panda$core$Int64) { 0 }));
        refTarget4226 = ((panda$core$String*) $tmp4229);
    }
    }
    else {
    {
        refTarget4226 = NULL;
    }
    }
    panda$core$String* $tmp4231 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$OutputStream$R$panda$core$String(self, refTarget4226, m4146, isSuper4151, p_out);
    methodRef4230 = $tmp4231;
    separator4232 = &$s4233;
    panda$core$Bit $tmp4234 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4146);
    if ($tmp4234.value) {
    {
        panda$core$Int64 $tmp4235 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4235;
        panda$core$String* $tmp4238 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4237, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4236 = $tmp4238;
        panda$core$String* $tmp4240 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4239 = $tmp4240;
        panda$core$String* $tmp4241 = panda$core$String$convert$R$panda$core$String(indirectVar4236);
        panda$core$String* $tmp4243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4241, &$s4242);
        panda$core$String* $tmp4244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4243, resultType4239);
        panda$core$String* $tmp4246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4244, &$s4245);
        (($fn4247) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4246);
        panda$core$String* $tmp4249 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4146);
        panda$core$String* $tmp4250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4248, $tmp4249);
        panda$core$String* $tmp4252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4250, &$s4251);
        panda$core$String* $tmp4253 = panda$core$String$convert$R$panda$core$String(methodRef4230);
        panda$core$String* $tmp4255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4253, &$s4254);
        panda$core$String* $tmp4256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4255, resultType4239);
        panda$core$String* $tmp4258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4256, &$s4257);
        panda$core$String* $tmp4259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4258, indirectVar4236);
        panda$core$String* $tmp4261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4259, &$s4260);
        panda$core$String* $tmp4262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4252, $tmp4261);
        (($fn4263) p_out->$class->vtable[16])(p_out, $tmp4262);
        separator4232 = &$s4264;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4265 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4266 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4265);
        if ($tmp4266.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4268 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4146);
        panda$core$String* $tmp4269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4267, $tmp4268);
        panda$core$String* $tmp4271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4269, &$s4270);
        panda$core$String* $tmp4272 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4271, $tmp4272);
        panda$core$String* $tmp4275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4273, &$s4274);
        panda$core$String* $tmp4276 = panda$core$String$convert$R$panda$core$String(methodRef4230);
        panda$core$String* $tmp4278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4276, &$s4277);
        panda$core$String* $tmp4279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4275, $tmp4278);
        (($fn4280) p_out->$class->vtable[16])(p_out, $tmp4279);
    }
    }
    {
        ITable* $tmp4282 = ((panda$collections$Iterable*) args4171)->$class->itable;
        while ($tmp4282->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4282 = $tmp4282->next;
        }
        $fn4284 $tmp4283 = $tmp4282->methods[0];
        panda$collections$Iterator* $tmp4285 = $tmp4283(((panda$collections$Iterable*) args4171));
        a$Iter4281 = $tmp4285;
        $l4286:;
        ITable* $tmp4288 = a$Iter4281->$class->itable;
        while ($tmp4288->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4288 = $tmp4288->next;
        }
        $fn4290 $tmp4289 = $tmp4288->methods[0];
        panda$core$Bit $tmp4291 = $tmp4289(a$Iter4281);
        panda$core$Bit $tmp4292 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4291);
        if (!$tmp4292.value) goto $l4287;
        {
            ITable* $tmp4294 = a$Iter4281->$class->itable;
            while ($tmp4294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4294 = $tmp4294->next;
            }
            $fn4296 $tmp4295 = $tmp4294->methods[1];
            panda$core$Object* $tmp4297 = $tmp4295(a$Iter4281);
            a4293 = ((panda$core$String*) $tmp4297);
            (($fn4298) p_out->$class->vtable[16])(p_out, separator4232);
            (($fn4299) p_out->$class->vtable[16])(p_out, a4293);
            separator4232 = &$s4300;
        }
        goto $l4286;
        $l4287:;
    }
    (($fn4302) p_out->$class->vtable[19])(p_out, &$s4301);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$OutputStream* p_out) {
    panda$core$String* test4314;
    panda$core$String* testBit4317;
    panda$core$String* ifTrue4326;
    panda$core$String* ifFalse4328;
    panda$core$String* end4342;
    panda$core$Bit $tmp4303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4303.value);
    panda$core$Int64 $tmp4305 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4305, ((panda$core$Int64) { 2 }));
    bool $tmp4304 = $tmp4306.value;
    if ($tmp4304) goto $l4307;
    panda$core$Int64 $tmp4308 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4308, ((panda$core$Int64) { 3 }));
    $tmp4304 = $tmp4309.value;
    $l4307:;
    panda$core$Bit $tmp4310 = { $tmp4304 };
    PANDA_ASSERT($tmp4310.value);
    panda$core$Object* $tmp4311 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4312 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4313 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4311)->type, $tmp4312);
    PANDA_ASSERT($tmp4313.value);
    panda$core$Object* $tmp4315 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4316 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4315), p_out);
    test4314 = $tmp4316;
    panda$core$String* $tmp4318 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4317 = $tmp4318;
    panda$core$String* $tmp4319 = panda$core$String$convert$R$panda$core$String(testBit4317);
    panda$core$String* $tmp4321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4319, &$s4320);
    panda$core$String* $tmp4322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4321, test4314);
    panda$core$String* $tmp4324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4322, &$s4323);
    (($fn4325) p_out->$class->vtable[19])(p_out, $tmp4324);
    panda$core$String* $tmp4327 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4326 = $tmp4327;
    panda$core$String* $tmp4329 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4328 = $tmp4329;
    panda$core$String* $tmp4331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4330, testBit4317);
    panda$core$String* $tmp4333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4331, &$s4332);
    panda$core$String* $tmp4334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4333, ifTrue4326);
    panda$core$String* $tmp4336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4334, &$s4335);
    panda$core$String* $tmp4337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4336, ifFalse4328);
    panda$core$String* $tmp4339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4337, &$s4338);
    (($fn4340) p_out->$class->vtable[19])(p_out, $tmp4339);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue4326, p_out);
    panda$core$Object* $tmp4341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4341), p_out);
    panda$core$Int64 $tmp4343 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4343, ((panda$core$Int64) { 3 }));
    if ($tmp4344.value) {
    {
        panda$core$String* $tmp4345 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4342 = $tmp4345;
    }
    }
    else {
    {
        end4342 = ifFalse4328;
    }
    }
    panda$core$Object* $tmp4346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4347 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4346));
    panda$core$Bit $tmp4348 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4347);
    if ($tmp4348.value) {
    {
        panda$core$String* $tmp4350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4349, end4342);
        panda$core$String* $tmp4352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4350, &$s4351);
        (($fn4353) p_out->$class->vtable[19])(p_out, $tmp4352);
    }
    }
    panda$core$Int64 $tmp4354 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4354, ((panda$core$Int64) { 3 }));
    if ($tmp4355.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse4328, p_out);
        panda$core$Object* $tmp4356 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4356), p_out);
        panda$core$Object* $tmp4357 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4358 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4357));
        panda$core$Bit $tmp4359 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4358);
        if ($tmp4359.value) {
        {
            panda$core$String* $tmp4361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4360, end4342);
            panda$core$String* $tmp4363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4361, &$s4362);
            (($fn4364) p_out->$class->vtable[19])(p_out, $tmp4363);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, end4342, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4368;
    panda$core$String* range4379;
    org$pandalanguage$pandac$IRNode* block4382;
    org$pandalanguage$pandac$Type* t4384;
    panda$core$String* llt4387;
    panda$core$String* indexType4389;
    org$pandalanguage$pandac$ClassDecl* cl4395;
    panda$core$String* numberType4403;
    panda$core$String* index4411;
    panda$core$String* start4420;
    panda$core$String* indexValuePtr4429;
    panda$core$String* end4460;
    panda$core$String* inclusive4469;
    panda$core$String* loopStart4478;
    panda$core$String* loopBody4480;
    panda$core$String* loopEnd4482;
    panda$core$String* loopTest4484;
    panda$core$String* forwardEntry4488;
    panda$core$String* backwardEntry4490;
    panda$core$String* signPrefix4492;
    panda$core$String* forwardEntryInclusive4504;
    panda$core$String* forwardEntryExclusive4506;
    panda$core$String* forwardEntryInclusiveTest4521;
    panda$core$String* forwardEntryExclusiveTest4551;
    panda$core$String* indexValue4581;
    panda$core$String* loopInc4603;
    panda$core$String* forwardDelta4605;
    panda$core$String* forwardInclusiveLabel4620;
    panda$core$String* forwardExclusiveLabel4622;
    panda$core$String* forwardInclusiveTest4633;
    panda$core$String* forwardExclusiveTest4656;
    panda$core$String* inc4679;
    panda$core$String* incStruct4691;
    panda$core$Bit $tmp4365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4365.value);
    panda$core$Int64 $tmp4366 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4366, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4367.value);
    panda$core$Object* $tmp4369 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4368 = ((org$pandalanguage$pandac$IRNode*) $tmp4369);
    panda$core$Object* $tmp4370 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4370)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4371.value);
    panda$core$Object* $tmp4372 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4373 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4372)->type->subtypes);
    panda$core$Bit $tmp4374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4373, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4374.value);
    panda$core$Object* $tmp4375 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4376 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4375)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4378 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4376))->name, &$s4377);
    PANDA_ASSERT($tmp4378.value);
    panda$core$Object* $tmp4380 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4381 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4380), p_out);
    range4379 = $tmp4381;
    panda$core$Object* $tmp4383 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4382 = ((org$pandalanguage$pandac$IRNode*) $tmp4383);
    panda$core$Object* $tmp4385 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4386 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4385)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4384 = ((org$pandalanguage$pandac$Type*) $tmp4386);
    panda$core$String* $tmp4388 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4384);
    llt4387 = $tmp4388;
    panda$core$Bit $tmp4390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4384->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4390.value) {
    {
        panda$core$Int64 $tmp4391 = panda$collections$Array$get_count$R$panda$core$Int64(t4384->subtypes);
        panda$core$Bit $tmp4392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4391, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4392.value);
        panda$core$Object* $tmp4393 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4384->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4394 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4393));
        indexType4389 = $tmp4394;
    }
    }
    else {
    {
        indexType4389 = llt4387;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4396 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4384);
    cl4395 = $tmp4396;
    PANDA_ASSERT(((panda$core$Bit) { cl4395 != NULL }).value);
    panda$collections$ListView* $tmp4397 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4395);
    ITable* $tmp4398 = ((panda$collections$CollectionView*) $tmp4397)->$class->itable;
    while ($tmp4398->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4398 = $tmp4398->next;
    }
    $fn4400 $tmp4399 = $tmp4398->methods[0];
    panda$core$Int64 $tmp4401 = $tmp4399(((panda$collections$CollectionView*) $tmp4397));
    panda$core$Bit $tmp4402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4401, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4402.value);
    panda$collections$ListView* $tmp4404 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4395);
    ITable* $tmp4405 = $tmp4404->$class->itable;
    while ($tmp4405->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4405 = $tmp4405->next;
    }
    $fn4407 $tmp4406 = $tmp4405->methods[0];
    panda$core$Object* $tmp4408 = $tmp4406($tmp4404, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4409 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4408)->type);
    numberType4403 = $tmp4409;
    panda$core$Bit $tmp4410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4368->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4410.value);
    panda$core$String* $tmp4412 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4368->payload));
    index4411 = $tmp4412;
    panda$core$String* $tmp4413 = panda$core$String$convert$R$panda$core$String(index4411);
    panda$core$String* $tmp4415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4413, &$s4414);
    panda$core$String* $tmp4416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4415, indexType4389);
    panda$core$String* $tmp4418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4416, &$s4417);
    (($fn4419) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4418);
    panda$core$String* $tmp4421 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4420 = $tmp4421;
    panda$core$String* $tmp4422 = panda$core$String$convert$R$panda$core$String(start4420);
    panda$core$String* $tmp4424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4422, &$s4423);
    panda$core$String* $tmp4425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4424, range4379);
    panda$core$String* $tmp4427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4425, &$s4426);
    (($fn4428) p_out->$class->vtable[19])(p_out, $tmp4427);
    panda$core$String* $tmp4430 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4429 = $tmp4430;
    panda$core$String* $tmp4431 = panda$core$String$convert$R$panda$core$String(indexValuePtr4429);
    panda$core$String* $tmp4433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4431, &$s4432);
    panda$core$String* $tmp4434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4433, indexType4389);
    panda$core$String* $tmp4436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4434, &$s4435);
    panda$core$String* $tmp4437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4436, indexType4389);
    panda$core$String* $tmp4439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4437, &$s4438);
    panda$core$String* $tmp4440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4439, index4411);
    panda$core$String* $tmp4442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4440, &$s4441);
    panda$core$String* $tmp4444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4442, &$s4443);
    (($fn4445) p_out->$class->vtable[19])(p_out, $tmp4444);
    panda$core$String* $tmp4447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4446, numberType4403);
    panda$core$String* $tmp4449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4447, &$s4448);
    panda$core$String* $tmp4450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4449, start4420);
    panda$core$String* $tmp4452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4450, &$s4451);
    panda$core$String* $tmp4453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4452, numberType4403);
    panda$core$String* $tmp4455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4453, &$s4454);
    panda$core$String* $tmp4456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4455, indexValuePtr4429);
    panda$core$String* $tmp4458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4456, &$s4457);
    (($fn4459) p_out->$class->vtable[19])(p_out, $tmp4458);
    panda$core$String* $tmp4461 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4460 = $tmp4461;
    panda$core$String* $tmp4462 = panda$core$String$convert$R$panda$core$String(end4460);
    panda$core$String* $tmp4464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4462, &$s4463);
    panda$core$String* $tmp4465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4464, range4379);
    panda$core$String* $tmp4467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4465, &$s4466);
    (($fn4468) p_out->$class->vtable[19])(p_out, $tmp4467);
    panda$core$String* $tmp4470 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4469 = $tmp4470;
    panda$core$String* $tmp4471 = panda$core$String$convert$R$panda$core$String(inclusive4469);
    panda$core$String* $tmp4473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4471, &$s4472);
    panda$core$String* $tmp4474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4473, range4379);
    panda$core$String* $tmp4476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4474, &$s4475);
    (($fn4477) p_out->$class->vtable[19])(p_out, $tmp4476);
    panda$core$String* $tmp4479 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4478 = $tmp4479;
    panda$core$String* $tmp4481 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4480 = $tmp4481;
    panda$core$String* $tmp4483 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4482 = $tmp4483;
    panda$core$String* $tmp4485 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4484 = $tmp4485;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4486 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4486->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4486->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4486, ((panda$core$String*) p_f->payload), loopEnd4482, loopTest4484);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4486));
    panda$core$String* $tmp4489 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4488 = $tmp4489;
    panda$core$String* $tmp4491 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4490 = $tmp4491;
    panda$core$Bit $tmp4494 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4384)->name, &$s4493);
    if ($tmp4494.value) {
    {
        signPrefix4492 = &$s4495;
    }
    }
    else {
    {
        panda$core$Bit $tmp4498 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4384)->name, &$s4497);
        bool $tmp4496 = $tmp4498.value;
        if ($tmp4496) goto $l4499;
        panda$core$Bit $tmp4501 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4384)->name, &$s4500);
        $tmp4496 = $tmp4501.value;
        $l4499:;
        panda$core$Bit $tmp4502 = { $tmp4496 };
        PANDA_ASSERT($tmp4502.value);
        signPrefix4492 = &$s4503;
    }
    }
    panda$core$String* $tmp4505 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4504 = $tmp4505;
    panda$core$String* $tmp4507 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4506 = $tmp4507;
    panda$core$String* $tmp4509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4508, inclusive4469);
    panda$core$String* $tmp4511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4509, &$s4510);
    panda$core$String* $tmp4512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4511, forwardEntryInclusive4504);
    panda$core$String* $tmp4514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4512, &$s4513);
    panda$core$String* $tmp4516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4515, forwardEntryExclusive4506);
    panda$core$String* $tmp4518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4516, &$s4517);
    panda$core$String* $tmp4519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4514, $tmp4518);
    (($fn4520) p_out->$class->vtable[19])(p_out, $tmp4519);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive4504, p_out);
    panda$core$String* $tmp4522 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4521 = $tmp4522;
    panda$core$String* $tmp4523 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4521);
    panda$core$String* $tmp4525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4523, &$s4524);
    panda$core$String* $tmp4526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4525, signPrefix4492);
    panda$core$String* $tmp4528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4526, &$s4527);
    panda$core$String* $tmp4529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4528, numberType4403);
    panda$core$String* $tmp4531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4529, &$s4530);
    panda$core$String* $tmp4532 = panda$core$String$convert$R$panda$core$String(start4420);
    panda$core$String* $tmp4534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4532, &$s4533);
    panda$core$String* $tmp4535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4534, end4460);
    panda$core$String* $tmp4537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4535, &$s4536);
    panda$core$String* $tmp4538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4531, $tmp4537);
    (($fn4539) p_out->$class->vtable[19])(p_out, $tmp4538);
    panda$core$String* $tmp4541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4540, forwardEntryInclusiveTest4521);
    panda$core$String* $tmp4543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4541, &$s4542);
    panda$core$String* $tmp4544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4543, loopStart4478);
    panda$core$String* $tmp4546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4544, &$s4545);
    panda$core$String* $tmp4547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4546, loopEnd4482);
    panda$core$String* $tmp4549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4547, &$s4548);
    (($fn4550) p_out->$class->vtable[19])(p_out, $tmp4549);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive4506, p_out);
    panda$core$String* $tmp4552 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4551 = $tmp4552;
    panda$core$String* $tmp4553 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4551);
    panda$core$String* $tmp4555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4553, &$s4554);
    panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4555, signPrefix4492);
    panda$core$String* $tmp4558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, &$s4557);
    panda$core$String* $tmp4559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4558, numberType4403);
    panda$core$String* $tmp4561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4559, &$s4560);
    panda$core$String* $tmp4562 = panda$core$String$convert$R$panda$core$String(start4420);
    panda$core$String* $tmp4564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4562, &$s4563);
    panda$core$String* $tmp4565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4564, end4460);
    panda$core$String* $tmp4567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4565, &$s4566);
    panda$core$String* $tmp4568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4561, $tmp4567);
    (($fn4569) p_out->$class->vtable[19])(p_out, $tmp4568);
    panda$core$String* $tmp4571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4570, forwardEntryExclusiveTest4551);
    panda$core$String* $tmp4573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4571, &$s4572);
    panda$core$String* $tmp4574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4573, loopStart4478);
    panda$core$String* $tmp4576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4574, &$s4575);
    panda$core$String* $tmp4577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4576, loopEnd4482);
    panda$core$String* $tmp4579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4577, &$s4578);
    (($fn4580) p_out->$class->vtable[19])(p_out, $tmp4579);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart4478, p_out);
    panda$core$String* $tmp4582 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4581 = $tmp4582;
    panda$core$String* $tmp4583 = panda$core$String$convert$R$panda$core$String(indexValue4581);
    panda$core$String* $tmp4585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4583, &$s4584);
    panda$core$String* $tmp4586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4585, numberType4403);
    panda$core$String* $tmp4588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4586, &$s4587);
    panda$core$String* $tmp4589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4588, numberType4403);
    panda$core$String* $tmp4591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4589, &$s4590);
    panda$core$String* $tmp4592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4591, indexValuePtr4429);
    panda$core$String* $tmp4594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4592, &$s4593);
    (($fn4595) p_out->$class->vtable[19])(p_out, $tmp4594);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block4382, p_out);
    panda$core$Bit $tmp4596 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4382);
    panda$core$Bit $tmp4597 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4596);
    if ($tmp4597.value) {
    {
        panda$core$String* $tmp4599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4598, loopTest4484);
        panda$core$String* $tmp4601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4599, &$s4600);
        (($fn4602) p_out->$class->vtable[19])(p_out, $tmp4601);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest4484, p_out);
    panda$core$String* $tmp4604 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc4603 = $tmp4604;
    panda$core$String* $tmp4606 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta4605 = $tmp4606;
    panda$core$String* $tmp4607 = panda$core$String$convert$R$panda$core$String(forwardDelta4605);
    panda$core$String* $tmp4609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4607, &$s4608);
    panda$core$String* $tmp4610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4609, numberType4403);
    panda$core$String* $tmp4612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4610, &$s4611);
    panda$core$String* $tmp4613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4612, end4460);
    panda$core$String* $tmp4615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4613, &$s4614);
    panda$core$String* $tmp4616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4615, indexValue4581);
    panda$core$String* $tmp4618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4616, &$s4617);
    (($fn4619) p_out->$class->vtable[19])(p_out, $tmp4618);
    panda$core$String* $tmp4621 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel4620 = $tmp4621;
    panda$core$String* $tmp4623 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel4622 = $tmp4623;
    panda$core$String* $tmp4625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4624, inclusive4469);
    panda$core$String* $tmp4627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4625, &$s4626);
    panda$core$String* $tmp4628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4627, forwardInclusiveLabel4620);
    panda$core$String* $tmp4630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4628, &$s4629);
    panda$core$String* $tmp4631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4630, forwardExclusiveLabel4622);
    (($fn4632) p_out->$class->vtable[19])(p_out, $tmp4631);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel4620, p_out);
    panda$core$String* $tmp4634 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest4633 = $tmp4634;
    panda$core$String* $tmp4635 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest4633);
    panda$core$String* $tmp4637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4635, &$s4636);
    panda$core$String* $tmp4638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4637, numberType4403);
    panda$core$String* $tmp4640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4638, &$s4639);
    panda$core$String* $tmp4641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4640, forwardDelta4605);
    panda$core$String* $tmp4643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4641, &$s4642);
    (($fn4644) p_out->$class->vtable[19])(p_out, $tmp4643);
    panda$core$String* $tmp4646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4645, forwardInclusiveTest4633);
    panda$core$String* $tmp4648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4646, &$s4647);
    panda$core$String* $tmp4649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4648, loopInc4603);
    panda$core$String* $tmp4651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4649, &$s4650);
    panda$core$String* $tmp4652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4651, loopEnd4482);
    panda$core$String* $tmp4654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4652, &$s4653);
    (($fn4655) p_out->$class->vtable[19])(p_out, $tmp4654);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel4622, p_out);
    panda$core$String* $tmp4657 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest4656 = $tmp4657;
    panda$core$String* $tmp4658 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest4656);
    panda$core$String* $tmp4660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4658, &$s4659);
    panda$core$String* $tmp4661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4660, numberType4403);
    panda$core$String* $tmp4663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4661, &$s4662);
    panda$core$String* $tmp4664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4663, forwardDelta4605);
    panda$core$String* $tmp4666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4664, &$s4665);
    (($fn4667) p_out->$class->vtable[19])(p_out, $tmp4666);
    panda$core$String* $tmp4669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4668, forwardExclusiveTest4656);
    panda$core$String* $tmp4671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4669, &$s4670);
    panda$core$String* $tmp4672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4671, loopInc4603);
    panda$core$String* $tmp4674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4672, &$s4673);
    panda$core$String* $tmp4675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4674, loopEnd4482);
    panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4675, &$s4676);
    (($fn4678) p_out->$class->vtable[19])(p_out, $tmp4677);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc4603, p_out);
    panda$core$String* $tmp4680 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc4679 = $tmp4680;
    panda$core$String* $tmp4681 = panda$core$String$convert$R$panda$core$String(inc4679);
    panda$core$String* $tmp4683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4681, &$s4682);
    panda$core$String* $tmp4684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4683, numberType4403);
    panda$core$String* $tmp4686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4684, &$s4685);
    panda$core$String* $tmp4687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4686, indexValue4581);
    panda$core$String* $tmp4689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4687, &$s4688);
    (($fn4690) p_out->$class->vtable[19])(p_out, $tmp4689);
    panda$core$String* $tmp4692 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct4691 = $tmp4692;
    panda$core$String* $tmp4693 = panda$core$String$convert$R$panda$core$String(incStruct4691);
    panda$core$String* $tmp4695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4693, &$s4694);
    panda$core$String* $tmp4696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4695, indexType4389);
    panda$core$String* $tmp4698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4696, &$s4697);
    panda$core$String* $tmp4699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4698, numberType4403);
    panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4699, &$s4700);
    (($fn4702) p_out->$class->vtable[19])(p_out, $tmp4701);
    panda$core$String* $tmp4704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4703, numberType4403);
    panda$core$String* $tmp4706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4704, &$s4705);
    panda$core$String* $tmp4707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4706, inc4679);
    panda$core$String* $tmp4709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4707, &$s4708);
    (($fn4710) p_out->$class->vtable[19])(p_out, $tmp4709);
    panda$core$String* $tmp4712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4711, indexType4389);
    panda$core$String* $tmp4714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4712, &$s4713);
    panda$core$String* $tmp4715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4714, incStruct4691);
    panda$core$String* $tmp4717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4715, &$s4716);
    panda$core$String* $tmp4718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4717, indexType4389);
    panda$core$String* $tmp4720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4718, &$s4719);
    panda$core$String* $tmp4721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4720, index4411);
    panda$core$String* $tmp4723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4721, &$s4722);
    (($fn4724) p_out->$class->vtable[19])(p_out, $tmp4723);
    panda$core$String* $tmp4726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4725, loopStart4478);
    panda$core$String* $tmp4728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4726, &$s4727);
    (($fn4729) p_out->$class->vtable[19])(p_out, $tmp4728);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd4482, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4733;
    panda$core$String* range4744;
    org$pandalanguage$pandac$IRNode* block4747;
    org$pandalanguage$pandac$Type* t4749;
    panda$core$String* llt4752;
    panda$core$String* indexType4754;
    org$pandalanguage$pandac$ClassDecl* cl4760;
    panda$core$String* numberType4768;
    panda$core$String* index4776;
    panda$core$String* start4785;
    panda$core$String* indexValuePtr4794;
    panda$core$String* end4825;
    panda$core$String* rawStep4834;
    panda$core$String* step4843;
    panda$core$String* inclusive4857;
    panda$core$String* loopStart4866;
    panda$core$String* loopBody4868;
    panda$core$String* loopEnd4870;
    panda$core$String* loopTest4872;
    panda$core$String* forwardEntry4876;
    panda$core$String* backwardEntry4878;
    panda$core$String* signPrefix4880;
    panda$core$String* direction4892;
    panda$core$String* forwardEntryInclusive4918;
    panda$core$String* forwardEntryExclusive4920;
    panda$core$String* forwardEntryInclusiveTest4935;
    panda$core$String* forwardEntryExclusiveTest4965;
    panda$core$String* backwardEntryInclusive4995;
    panda$core$String* backwardEntryExclusive4997;
    panda$core$String* backwardEntryInclusiveTest5012;
    panda$core$String* backwardEntryExclusiveTest5042;
    panda$core$String* indexValue5072;
    panda$core$String* loopInc5094;
    panda$core$String* forwardLabel5096;
    panda$core$String* backwardLabel5098;
    panda$core$String* forwardDelta5111;
    panda$core$String* forwardInclusiveLabel5126;
    panda$core$String* forwardExclusiveLabel5128;
    panda$core$String* forwardInclusiveTest5139;
    panda$core$String* forwardExclusiveTest5165;
    panda$core$String* backwardDelta5191;
    panda$core$String* negStep5206;
    panda$core$String* backwardInclusiveLabel5218;
    panda$core$String* backwardExclusiveLabel5220;
    panda$core$String* backwardInclusiveTest5231;
    panda$core$String* backwardExclusiveTest5255;
    panda$core$String* inc5279;
    panda$core$String* incStruct5294;
    panda$core$Bit $tmp4730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4730.value);
    panda$core$Int64 $tmp4731 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4731, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4732.value);
    panda$core$Object* $tmp4734 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4733 = ((org$pandalanguage$pandac$IRNode*) $tmp4734);
    panda$core$Object* $tmp4735 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4735)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4736.value);
    panda$core$Object* $tmp4737 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4738 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4737)->type->subtypes);
    panda$core$Bit $tmp4739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4738, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4739.value);
    panda$core$Object* $tmp4740 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4741 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4740)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4743 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4741))->name, &$s4742);
    PANDA_ASSERT($tmp4743.value);
    panda$core$Object* $tmp4745 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4746 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4745), p_out);
    range4744 = $tmp4746;
    panda$core$Object* $tmp4748 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4747 = ((org$pandalanguage$pandac$IRNode*) $tmp4748);
    panda$core$Object* $tmp4750 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4751 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4750)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4749 = ((org$pandalanguage$pandac$Type*) $tmp4751);
    panda$core$String* $tmp4753 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4749);
    llt4752 = $tmp4753;
    panda$core$Bit $tmp4755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4749->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4755.value) {
    {
        panda$core$Int64 $tmp4756 = panda$collections$Array$get_count$R$panda$core$Int64(t4749->subtypes);
        panda$core$Bit $tmp4757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4756, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4757.value);
        panda$core$Object* $tmp4758 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4749->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4759 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4758));
        indexType4754 = $tmp4759;
    }
    }
    else {
    {
        indexType4754 = llt4752;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4761 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4749);
    cl4760 = $tmp4761;
    PANDA_ASSERT(((panda$core$Bit) { cl4760 != NULL }).value);
    panda$collections$ListView* $tmp4762 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4760);
    ITable* $tmp4763 = ((panda$collections$CollectionView*) $tmp4762)->$class->itable;
    while ($tmp4763->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4763 = $tmp4763->next;
    }
    $fn4765 $tmp4764 = $tmp4763->methods[0];
    panda$core$Int64 $tmp4766 = $tmp4764(((panda$collections$CollectionView*) $tmp4762));
    panda$core$Bit $tmp4767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4766, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4767.value);
    panda$collections$ListView* $tmp4769 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4760);
    ITable* $tmp4770 = $tmp4769->$class->itable;
    while ($tmp4770->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4770 = $tmp4770->next;
    }
    $fn4772 $tmp4771 = $tmp4770->methods[0];
    panda$core$Object* $tmp4773 = $tmp4771($tmp4769, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4774 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4773)->type);
    numberType4768 = $tmp4774;
    panda$core$Bit $tmp4775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4733->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4775.value);
    panda$core$String* $tmp4777 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4733->payload));
    index4776 = $tmp4777;
    panda$core$String* $tmp4778 = panda$core$String$convert$R$panda$core$String(index4776);
    panda$core$String* $tmp4780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4778, &$s4779);
    panda$core$String* $tmp4781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4780, indexType4754);
    panda$core$String* $tmp4783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4781, &$s4782);
    (($fn4784) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4783);
    panda$core$String* $tmp4786 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4785 = $tmp4786;
    panda$core$String* $tmp4787 = panda$core$String$convert$R$panda$core$String(start4785);
    panda$core$String* $tmp4789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4787, &$s4788);
    panda$core$String* $tmp4790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4789, range4744);
    panda$core$String* $tmp4792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4790, &$s4791);
    (($fn4793) p_out->$class->vtable[19])(p_out, $tmp4792);
    panda$core$String* $tmp4795 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4794 = $tmp4795;
    panda$core$String* $tmp4796 = panda$core$String$convert$R$panda$core$String(indexValuePtr4794);
    panda$core$String* $tmp4798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4796, &$s4797);
    panda$core$String* $tmp4799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4798, indexType4754);
    panda$core$String* $tmp4801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4799, &$s4800);
    panda$core$String* $tmp4802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4801, indexType4754);
    panda$core$String* $tmp4804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4802, &$s4803);
    panda$core$String* $tmp4805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4804, index4776);
    panda$core$String* $tmp4807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4805, &$s4806);
    panda$core$String* $tmp4809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4807, &$s4808);
    (($fn4810) p_out->$class->vtable[19])(p_out, $tmp4809);
    panda$core$String* $tmp4812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4811, numberType4768);
    panda$core$String* $tmp4814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4812, &$s4813);
    panda$core$String* $tmp4815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, start4785);
    panda$core$String* $tmp4817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4815, &$s4816);
    panda$core$String* $tmp4818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4817, numberType4768);
    panda$core$String* $tmp4820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4818, &$s4819);
    panda$core$String* $tmp4821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4820, indexValuePtr4794);
    panda$core$String* $tmp4823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4821, &$s4822);
    (($fn4824) p_out->$class->vtable[19])(p_out, $tmp4823);
    panda$core$String* $tmp4826 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4825 = $tmp4826;
    panda$core$String* $tmp4827 = panda$core$String$convert$R$panda$core$String(end4825);
    panda$core$String* $tmp4829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4827, &$s4828);
    panda$core$String* $tmp4830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4829, range4744);
    panda$core$String* $tmp4832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4830, &$s4831);
    (($fn4833) p_out->$class->vtable[19])(p_out, $tmp4832);
    panda$core$String* $tmp4835 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep4834 = $tmp4835;
    panda$core$String* $tmp4836 = panda$core$String$convert$R$panda$core$String(rawStep4834);
    panda$core$String* $tmp4838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4836, &$s4837);
    panda$core$String* $tmp4839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4838, range4744);
    panda$core$String* $tmp4841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4839, &$s4840);
    (($fn4842) p_out->$class->vtable[19])(p_out, $tmp4841);
    panda$core$Bit $tmp4845 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4768, &$s4844);
    if ($tmp4845.value) {
    {
        panda$core$String* $tmp4846 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step4843 = $tmp4846;
        panda$core$String* $tmp4847 = panda$core$String$convert$R$panda$core$String(step4843);
        panda$core$String* $tmp4849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4847, &$s4848);
        panda$core$String* $tmp4850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4849, rawStep4834);
        panda$core$String* $tmp4852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4850, &$s4851);
        panda$core$String* $tmp4853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4852, numberType4768);
        panda$core$String* $tmp4855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4853, &$s4854);
        (($fn4856) p_out->$class->vtable[19])(p_out, $tmp4855);
    }
    }
    else {
    {
        step4843 = rawStep4834;
    }
    }
    panda$core$String* $tmp4858 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4857 = $tmp4858;
    panda$core$String* $tmp4859 = panda$core$String$convert$R$panda$core$String(inclusive4857);
    panda$core$String* $tmp4861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4859, &$s4860);
    panda$core$String* $tmp4862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4861, range4744);
    panda$core$String* $tmp4864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4862, &$s4863);
    (($fn4865) p_out->$class->vtable[19])(p_out, $tmp4864);
    panda$core$String* $tmp4867 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4866 = $tmp4867;
    panda$core$String* $tmp4869 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4868 = $tmp4869;
    panda$core$String* $tmp4871 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4870 = $tmp4871;
    panda$core$String* $tmp4873 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4872 = $tmp4873;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4874 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4874->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4874->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4874, ((panda$core$String*) p_f->payload), loopEnd4870, loopTest4872);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4874));
    panda$core$String* $tmp4877 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4876 = $tmp4877;
    panda$core$String* $tmp4879 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4878 = $tmp4879;
    panda$core$Bit $tmp4882 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4749)->name, &$s4881);
    if ($tmp4882.value) {
    {
        signPrefix4880 = &$s4883;
    }
    }
    else {
    {
        panda$core$Bit $tmp4886 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4749)->name, &$s4885);
        bool $tmp4884 = $tmp4886.value;
        if ($tmp4884) goto $l4887;
        panda$core$Bit $tmp4889 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4749)->name, &$s4888);
        $tmp4884 = $tmp4889.value;
        $l4887:;
        panda$core$Bit $tmp4890 = { $tmp4884 };
        PANDA_ASSERT($tmp4890.value);
        signPrefix4880 = &$s4891;
    }
    }
    panda$core$Bit $tmp4894 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix4880, &$s4893);
    if ($tmp4894.value) {
    {
        panda$core$String* $tmp4895 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction4892 = $tmp4895;
        panda$core$String* $tmp4896 = panda$core$String$convert$R$panda$core$String(direction4892);
        panda$core$String* $tmp4898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4896, &$s4897);
        panda$core$String* $tmp4899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4898, numberType4768);
        panda$core$String* $tmp4901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4899, &$s4900);
        panda$core$String* $tmp4902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4901, step4843);
        panda$core$String* $tmp4904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4902, &$s4903);
        (($fn4905) p_out->$class->vtable[19])(p_out, $tmp4904);
    }
    }
    else {
    {
        direction4892 = &$s4906;
    }
    }
    panda$core$String* $tmp4908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4907, direction4892);
    panda$core$String* $tmp4910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4908, &$s4909);
    panda$core$String* $tmp4911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4910, forwardEntry4876);
    panda$core$String* $tmp4913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4911, &$s4912);
    panda$core$String* $tmp4914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4913, backwardEntry4878);
    panda$core$String* $tmp4916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4914, &$s4915);
    (($fn4917) p_out->$class->vtable[19])(p_out, $tmp4916);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntry4876, p_out);
    panda$core$String* $tmp4919 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4918 = $tmp4919;
    panda$core$String* $tmp4921 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4920 = $tmp4921;
    panda$core$String* $tmp4923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4922, inclusive4857);
    panda$core$String* $tmp4925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4923, &$s4924);
    panda$core$String* $tmp4926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4925, forwardEntryInclusive4918);
    panda$core$String* $tmp4928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4926, &$s4927);
    panda$core$String* $tmp4930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4929, forwardEntryExclusive4920);
    panda$core$String* $tmp4932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4930, &$s4931);
    panda$core$String* $tmp4933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4928, $tmp4932);
    (($fn4934) p_out->$class->vtable[19])(p_out, $tmp4933);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryInclusive4918, p_out);
    panda$core$String* $tmp4936 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4935 = $tmp4936;
    panda$core$String* $tmp4937 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4935);
    panda$core$String* $tmp4939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4937, &$s4938);
    panda$core$String* $tmp4940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4939, signPrefix4880);
    panda$core$String* $tmp4942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4940, &$s4941);
    panda$core$String* $tmp4943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4942, numberType4768);
    panda$core$String* $tmp4945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4943, &$s4944);
    panda$core$String* $tmp4946 = panda$core$String$convert$R$panda$core$String(start4785);
    panda$core$String* $tmp4948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4946, &$s4947);
    panda$core$String* $tmp4949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4948, end4825);
    panda$core$String* $tmp4951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4949, &$s4950);
    panda$core$String* $tmp4952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4945, $tmp4951);
    (($fn4953) p_out->$class->vtable[19])(p_out, $tmp4952);
    panda$core$String* $tmp4955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4954, forwardEntryInclusiveTest4935);
    panda$core$String* $tmp4957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4955, &$s4956);
    panda$core$String* $tmp4958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4957, loopStart4866);
    panda$core$String* $tmp4960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4958, &$s4959);
    panda$core$String* $tmp4961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4960, loopEnd4870);
    panda$core$String* $tmp4963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4961, &$s4962);
    (($fn4964) p_out->$class->vtable[19])(p_out, $tmp4963);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardEntryExclusive4920, p_out);
    panda$core$String* $tmp4966 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4965 = $tmp4966;
    panda$core$String* $tmp4967 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4965);
    panda$core$String* $tmp4969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4967, &$s4968);
    panda$core$String* $tmp4970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4969, signPrefix4880);
    panda$core$String* $tmp4972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4970, &$s4971);
    panda$core$String* $tmp4973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4972, numberType4768);
    panda$core$String* $tmp4975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4973, &$s4974);
    panda$core$String* $tmp4976 = panda$core$String$convert$R$panda$core$String(start4785);
    panda$core$String* $tmp4978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4976, &$s4977);
    panda$core$String* $tmp4979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4978, end4825);
    panda$core$String* $tmp4981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4979, &$s4980);
    panda$core$String* $tmp4982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4975, $tmp4981);
    (($fn4983) p_out->$class->vtable[19])(p_out, $tmp4982);
    panda$core$String* $tmp4985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4984, forwardEntryExclusiveTest4965);
    panda$core$String* $tmp4987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4985, &$s4986);
    panda$core$String* $tmp4988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4987, loopStart4866);
    panda$core$String* $tmp4990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4988, &$s4989);
    panda$core$String* $tmp4991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4990, loopEnd4870);
    panda$core$String* $tmp4993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4991, &$s4992);
    (($fn4994) p_out->$class->vtable[19])(p_out, $tmp4993);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntry4878, p_out);
    panda$core$String* $tmp4996 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive4995 = $tmp4996;
    panda$core$String* $tmp4998 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive4997 = $tmp4998;
    panda$core$String* $tmp5000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4999, inclusive4857);
    panda$core$String* $tmp5002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5000, &$s5001);
    panda$core$String* $tmp5003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5002, backwardEntryInclusive4995);
    panda$core$String* $tmp5005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5003, &$s5004);
    panda$core$String* $tmp5007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5006, backwardEntryExclusive4997);
    panda$core$String* $tmp5009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5007, &$s5008);
    panda$core$String* $tmp5010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5005, $tmp5009);
    (($fn5011) p_out->$class->vtable[19])(p_out, $tmp5010);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryInclusive4995, p_out);
    panda$core$String* $tmp5013 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5012 = $tmp5013;
    panda$core$String* $tmp5014 = panda$core$String$convert$R$panda$core$String(backwardEntryInclusiveTest5012);
    panda$core$String* $tmp5016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5014, &$s5015);
    panda$core$String* $tmp5017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5016, signPrefix4880);
    panda$core$String* $tmp5019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5017, &$s5018);
    panda$core$String* $tmp5020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5019, numberType4768);
    panda$core$String* $tmp5022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5020, &$s5021);
    panda$core$String* $tmp5023 = panda$core$String$convert$R$panda$core$String(start4785);
    panda$core$String* $tmp5025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5023, &$s5024);
    panda$core$String* $tmp5026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5025, end4825);
    panda$core$String* $tmp5028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5026, &$s5027);
    panda$core$String* $tmp5029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5022, $tmp5028);
    (($fn5030) p_out->$class->vtable[19])(p_out, $tmp5029);
    panda$core$String* $tmp5032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5031, backwardEntryInclusiveTest5012);
    panda$core$String* $tmp5034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5032, &$s5033);
    panda$core$String* $tmp5035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5034, loopStart4866);
    panda$core$String* $tmp5037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5035, &$s5036);
    panda$core$String* $tmp5038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5037, loopEnd4870);
    panda$core$String* $tmp5040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5038, &$s5039);
    (($fn5041) p_out->$class->vtable[19])(p_out, $tmp5040);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardEntryExclusive4997, p_out);
    panda$core$String* $tmp5043 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5042 = $tmp5043;
    panda$core$String* $tmp5044 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusiveTest5042);
    panda$core$String* $tmp5046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5044, &$s5045);
    panda$core$String* $tmp5047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5046, signPrefix4880);
    panda$core$String* $tmp5049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5047, &$s5048);
    panda$core$String* $tmp5050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5049, numberType4768);
    panda$core$String* $tmp5052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5050, &$s5051);
    panda$core$String* $tmp5053 = panda$core$String$convert$R$panda$core$String(start4785);
    panda$core$String* $tmp5055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5053, &$s5054);
    panda$core$String* $tmp5056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5055, end4825);
    panda$core$String* $tmp5058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5056, &$s5057);
    panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5052, $tmp5058);
    (($fn5060) p_out->$class->vtable[19])(p_out, $tmp5059);
    panda$core$String* $tmp5062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5061, backwardEntryExclusiveTest5042);
    panda$core$String* $tmp5064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5062, &$s5063);
    panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5064, loopStart4866);
    panda$core$String* $tmp5067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5065, &$s5066);
    panda$core$String* $tmp5068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5067, loopEnd4870);
    panda$core$String* $tmp5070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5068, &$s5069);
    (($fn5071) p_out->$class->vtable[19])(p_out, $tmp5070);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart4866, p_out);
    panda$core$String* $tmp5073 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5072 = $tmp5073;
    panda$core$String* $tmp5074 = panda$core$String$convert$R$panda$core$String(indexValue5072);
    panda$core$String* $tmp5076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5074, &$s5075);
    panda$core$String* $tmp5077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5076, numberType4768);
    panda$core$String* $tmp5079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5077, &$s5078);
    panda$core$String* $tmp5080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5079, numberType4768);
    panda$core$String* $tmp5082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5080, &$s5081);
    panda$core$String* $tmp5083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5082, indexValuePtr4794);
    panda$core$String* $tmp5085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5083, &$s5084);
    (($fn5086) p_out->$class->vtable[19])(p_out, $tmp5085);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block4747, p_out);
    panda$core$Bit $tmp5087 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4747);
    panda$core$Bit $tmp5088 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5087);
    if ($tmp5088.value) {
    {
        panda$core$String* $tmp5090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5089, loopTest4872);
        panda$core$String* $tmp5092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5090, &$s5091);
        (($fn5093) p_out->$class->vtable[19])(p_out, $tmp5092);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopTest4872, p_out);
    panda$core$String* $tmp5095 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5094 = $tmp5095;
    panda$core$String* $tmp5097 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5096 = $tmp5097;
    panda$core$String* $tmp5099 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5098 = $tmp5099;
    panda$core$String* $tmp5101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5100, direction4892);
    panda$core$String* $tmp5103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5101, &$s5102);
    panda$core$String* $tmp5104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5103, forwardLabel5096);
    panda$core$String* $tmp5106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5104, &$s5105);
    panda$core$String* $tmp5107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5106, backwardLabel5098);
    panda$core$String* $tmp5109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5107, &$s5108);
    (($fn5110) p_out->$class->vtable[19])(p_out, $tmp5109);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardLabel5096, p_out);
    panda$core$String* $tmp5112 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5111 = $tmp5112;
    panda$core$String* $tmp5113 = panda$core$String$convert$R$panda$core$String(forwardDelta5111);
    panda$core$String* $tmp5115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5113, &$s5114);
    panda$core$String* $tmp5116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5115, numberType4768);
    panda$core$String* $tmp5118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5116, &$s5117);
    panda$core$String* $tmp5119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5118, end4825);
    panda$core$String* $tmp5121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5119, &$s5120);
    panda$core$String* $tmp5122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5121, indexValue5072);
    panda$core$String* $tmp5124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5122, &$s5123);
    (($fn5125) p_out->$class->vtable[19])(p_out, $tmp5124);
    panda$core$String* $tmp5127 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5126 = $tmp5127;
    panda$core$String* $tmp5129 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5128 = $tmp5129;
    panda$core$String* $tmp5131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5130, inclusive4857);
    panda$core$String* $tmp5133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5131, &$s5132);
    panda$core$String* $tmp5134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5133, forwardInclusiveLabel5126);
    panda$core$String* $tmp5136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5134, &$s5135);
    panda$core$String* $tmp5137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5136, forwardExclusiveLabel5128);
    (($fn5138) p_out->$class->vtable[19])(p_out, $tmp5137);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardInclusiveLabel5126, p_out);
    panda$core$String* $tmp5140 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5139 = $tmp5140;
    panda$core$String* $tmp5141 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest5139);
    panda$core$String* $tmp5143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5141, &$s5142);
    panda$core$String* $tmp5144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5143, numberType4768);
    panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5144, &$s5145);
    panda$core$String* $tmp5147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5146, forwardDelta5111);
    panda$core$String* $tmp5149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5147, &$s5148);
    panda$core$String* $tmp5150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5149, step4843);
    panda$core$String* $tmp5152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5150, &$s5151);
    (($fn5153) p_out->$class->vtable[19])(p_out, $tmp5152);
    panda$core$String* $tmp5155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5154, forwardInclusiveTest5139);
    panda$core$String* $tmp5157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5155, &$s5156);
    panda$core$String* $tmp5158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5157, loopInc5094);
    panda$core$String* $tmp5160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5158, &$s5159);
    panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5160, loopEnd4870);
    panda$core$String* $tmp5163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5161, &$s5162);
    (($fn5164) p_out->$class->vtable[19])(p_out, $tmp5163);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, forwardExclusiveLabel5128, p_out);
    panda$core$String* $tmp5166 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5165 = $tmp5166;
    panda$core$String* $tmp5167 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest5165);
    panda$core$String* $tmp5169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5167, &$s5168);
    panda$core$String* $tmp5170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5169, numberType4768);
    panda$core$String* $tmp5172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5170, &$s5171);
    panda$core$String* $tmp5173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5172, forwardDelta5111);
    panda$core$String* $tmp5175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5173, &$s5174);
    panda$core$String* $tmp5176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5175, step4843);
    panda$core$String* $tmp5178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5176, &$s5177);
    (($fn5179) p_out->$class->vtable[19])(p_out, $tmp5178);
    panda$core$String* $tmp5181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5180, forwardExclusiveTest5165);
    panda$core$String* $tmp5183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5181, &$s5182);
    panda$core$String* $tmp5184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5183, loopInc5094);
    panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5184, &$s5185);
    panda$core$String* $tmp5187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5186, loopEnd4870);
    panda$core$String* $tmp5189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5187, &$s5188);
    (($fn5190) p_out->$class->vtable[19])(p_out, $tmp5189);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardLabel5098, p_out);
    panda$core$String* $tmp5192 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5191 = $tmp5192;
    panda$core$String* $tmp5193 = panda$core$String$convert$R$panda$core$String(backwardDelta5191);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5193, &$s5194);
    panda$core$String* $tmp5196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, numberType4768);
    panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5196, &$s5197);
    panda$core$String* $tmp5199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5198, indexValue5072);
    panda$core$String* $tmp5201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5199, &$s5200);
    panda$core$String* $tmp5202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5201, end4825);
    panda$core$String* $tmp5204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5202, &$s5203);
    (($fn5205) p_out->$class->vtable[19])(p_out, $tmp5204);
    panda$core$String* $tmp5207 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5206 = $tmp5207;
    panda$core$String* $tmp5208 = panda$core$String$convert$R$panda$core$String(negStep5206);
    panda$core$String* $tmp5210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5208, &$s5209);
    panda$core$String* $tmp5211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5210, numberType4768);
    panda$core$String* $tmp5213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5211, &$s5212);
    panda$core$String* $tmp5214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5213, step4843);
    panda$core$String* $tmp5216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5214, &$s5215);
    (($fn5217) p_out->$class->vtable[19])(p_out, $tmp5216);
    panda$core$String* $tmp5219 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5218 = $tmp5219;
    panda$core$String* $tmp5221 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5220 = $tmp5221;
    panda$core$String* $tmp5223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5222, inclusive4857);
    panda$core$String* $tmp5225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5223, &$s5224);
    panda$core$String* $tmp5226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5225, backwardInclusiveLabel5218);
    panda$core$String* $tmp5228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5226, &$s5227);
    panda$core$String* $tmp5229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5228, backwardExclusiveLabel5220);
    (($fn5230) p_out->$class->vtable[19])(p_out, $tmp5229);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardInclusiveLabel5218, p_out);
    panda$core$String* $tmp5232 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5231 = $tmp5232;
    panda$core$String* $tmp5233 = panda$core$String$convert$R$panda$core$String(backwardInclusiveTest5231);
    panda$core$String* $tmp5235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5233, &$s5234);
    panda$core$String* $tmp5236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5235, numberType4768);
    panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5236, &$s5237);
    panda$core$String* $tmp5239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5238, backwardDelta5191);
    panda$core$String* $tmp5241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5239, &$s5240);
    panda$core$String* $tmp5242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5241, negStep5206);
    (($fn5243) p_out->$class->vtable[19])(p_out, $tmp5242);
    panda$core$String* $tmp5245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5244, backwardInclusiveTest5231);
    panda$core$String* $tmp5247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5245, &$s5246);
    panda$core$String* $tmp5248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5247, loopInc5094);
    panda$core$String* $tmp5250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5248, &$s5249);
    panda$core$String* $tmp5251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5250, loopEnd4870);
    panda$core$String* $tmp5253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5251, &$s5252);
    (($fn5254) p_out->$class->vtable[19])(p_out, $tmp5253);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, backwardExclusiveLabel5220, p_out);
    panda$core$String* $tmp5256 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5255 = $tmp5256;
    panda$core$String* $tmp5257 = panda$core$String$convert$R$panda$core$String(backwardExclusiveTest5255);
    panda$core$String* $tmp5259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5257, &$s5258);
    panda$core$String* $tmp5260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5259, numberType4768);
    panda$core$String* $tmp5262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5260, &$s5261);
    panda$core$String* $tmp5263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5262, backwardDelta5191);
    panda$core$String* $tmp5265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5263, &$s5264);
    panda$core$String* $tmp5266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5265, negStep5206);
    (($fn5267) p_out->$class->vtable[19])(p_out, $tmp5266);
    panda$core$String* $tmp5269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5268, backwardExclusiveTest5255);
    panda$core$String* $tmp5271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5269, &$s5270);
    panda$core$String* $tmp5272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5271, loopInc5094);
    panda$core$String* $tmp5274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5272, &$s5273);
    panda$core$String* $tmp5275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5274, loopEnd4870);
    panda$core$String* $tmp5277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5275, &$s5276);
    (($fn5278) p_out->$class->vtable[19])(p_out, $tmp5277);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopInc5094, p_out);
    panda$core$String* $tmp5280 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5279 = $tmp5280;
    panda$core$String* $tmp5281 = panda$core$String$convert$R$panda$core$String(inc5279);
    panda$core$String* $tmp5283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5281, &$s5282);
    panda$core$String* $tmp5284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5283, numberType4768);
    panda$core$String* $tmp5286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5284, &$s5285);
    panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5286, indexValue5072);
    panda$core$String* $tmp5289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5287, &$s5288);
    panda$core$String* $tmp5290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5289, step4843);
    panda$core$String* $tmp5292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5290, &$s5291);
    (($fn5293) p_out->$class->vtable[19])(p_out, $tmp5292);
    panda$core$String* $tmp5295 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5294 = $tmp5295;
    panda$core$String* $tmp5296 = panda$core$String$convert$R$panda$core$String(incStruct5294);
    panda$core$String* $tmp5298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5296, &$s5297);
    panda$core$String* $tmp5299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5298, indexType4754);
    panda$core$String* $tmp5301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5299, &$s5300);
    panda$core$String* $tmp5302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5301, numberType4768);
    panda$core$String* $tmp5304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5302, &$s5303);
    (($fn5305) p_out->$class->vtable[19])(p_out, $tmp5304);
    panda$core$String* $tmp5307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5306, numberType4768);
    panda$core$String* $tmp5309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5307, &$s5308);
    panda$core$String* $tmp5310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5309, inc5279);
    panda$core$String* $tmp5312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5310, &$s5311);
    (($fn5313) p_out->$class->vtable[19])(p_out, $tmp5312);
    panda$core$String* $tmp5315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5314, indexType4754);
    panda$core$String* $tmp5317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5315, &$s5316);
    panda$core$String* $tmp5318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5317, incStruct5294);
    panda$core$String* $tmp5320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5318, &$s5319);
    panda$core$String* $tmp5321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5320, indexType4754);
    panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5321, &$s5322);
    panda$core$String* $tmp5324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5323, index4776);
    panda$core$String* $tmp5326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5324, &$s5325);
    (($fn5327) p_out->$class->vtable[19])(p_out, $tmp5326);
    panda$core$String* $tmp5329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5328, loopStart4866);
    panda$core$String* $tmp5331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5329, &$s5330);
    (($fn5332) p_out->$class->vtable[19])(p_out, $tmp5331);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd4870, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$OutputStream* p_out) {
    panda$core$Object* $tmp5333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5334 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5333)->type);
    if ($tmp5334.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5335 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5336 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5335)->type);
    if ($tmp5336.value) {
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
    panda$core$String* loopStart5343;
    panda$core$String* loopBody5345;
    panda$core$String* loopEnd5347;
    panda$core$String* test5356;
    panda$core$String* testBit5359;
    panda$core$Bit $tmp5337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5337.value);
    panda$core$Int64 $tmp5338 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5338, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5339.value);
    panda$core$Object* $tmp5340 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5341 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5342 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5340)->type, $tmp5341);
    PANDA_ASSERT($tmp5342.value);
    panda$core$String* $tmp5344 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5343 = $tmp5344;
    panda$core$String* $tmp5346 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5345 = $tmp5346;
    panda$core$String* $tmp5348 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5347 = $tmp5348;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5349 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5349->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5349->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5349, ((panda$core$String*) p_w->payload), loopEnd5347, loopStart5343);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5349));
    panda$core$String* $tmp5352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5351, loopStart5343);
    panda$core$String* $tmp5354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5352, &$s5353);
    (($fn5355) p_out->$class->vtable[19])(p_out, $tmp5354);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5343, p_out);
    panda$core$Object* $tmp5357 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5358 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5357), p_out);
    test5356 = $tmp5358;
    panda$core$String* $tmp5360 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5359 = $tmp5360;
    panda$core$String* $tmp5361 = panda$core$String$convert$R$panda$core$String(testBit5359);
    panda$core$String* $tmp5363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5361, &$s5362);
    panda$core$String* $tmp5364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5363, test5356);
    panda$core$String* $tmp5366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5364, &$s5365);
    (($fn5367) p_out->$class->vtable[19])(p_out, $tmp5366);
    panda$core$String* $tmp5369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5368, testBit5359);
    panda$core$String* $tmp5371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5369, &$s5370);
    panda$core$String* $tmp5372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5371, loopBody5345);
    panda$core$String* $tmp5374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5372, &$s5373);
    panda$core$String* $tmp5375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5374, loopEnd5347);
    panda$core$String* $tmp5377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5375, &$s5376);
    (($fn5378) p_out->$class->vtable[19])(p_out, $tmp5377);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5345, p_out);
    panda$core$Object* $tmp5379 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5379), p_out);
    panda$core$Object* $tmp5380 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5381 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5380));
    panda$core$Bit $tmp5382 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5381);
    if ($tmp5382.value) {
    {
        panda$core$String* $tmp5384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5383, loopStart5343);
        panda$core$String* $tmp5386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5384, &$s5385);
        (($fn5387) p_out->$class->vtable[19])(p_out, $tmp5386);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5347, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5394;
    panda$core$String* loopBody5396;
    panda$core$String* loopEnd5398;
    panda$core$String* test5407;
    panda$core$String* testBit5410;
    panda$core$Bit $tmp5388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5388.value);
    panda$core$Int64 $tmp5389 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5389, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5390.value);
    panda$core$Object* $tmp5391 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5392 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5393 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5391)->type, $tmp5392);
    PANDA_ASSERT($tmp5393.value);
    panda$core$String* $tmp5395 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5394 = $tmp5395;
    panda$core$String* $tmp5397 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5396 = $tmp5397;
    panda$core$String* $tmp5399 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5398 = $tmp5399;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5400 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5400->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5400->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5400, ((panda$core$String*) p_d->payload), loopEnd5398, loopStart5394);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5400));
    panda$core$String* $tmp5403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5402, loopBody5396);
    panda$core$String* $tmp5405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5403, &$s5404);
    (($fn5406) p_out->$class->vtable[19])(p_out, $tmp5405);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5394, p_out);
    panda$core$Object* $tmp5408 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5409 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5408), p_out);
    test5407 = $tmp5409;
    panda$core$String* $tmp5411 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5410 = $tmp5411;
    panda$core$String* $tmp5412 = panda$core$String$convert$R$panda$core$String(testBit5410);
    panda$core$String* $tmp5414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5412, &$s5413);
    panda$core$String* $tmp5415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5414, test5407);
    panda$core$String* $tmp5417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5415, &$s5416);
    (($fn5418) p_out->$class->vtable[19])(p_out, $tmp5417);
    panda$core$String* $tmp5420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5419, testBit5410);
    panda$core$String* $tmp5422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5420, &$s5421);
    panda$core$String* $tmp5423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5422, loopBody5396);
    panda$core$String* $tmp5425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5423, &$s5424);
    panda$core$String* $tmp5426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5425, loopEnd5398);
    panda$core$String* $tmp5428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5426, &$s5427);
    (($fn5429) p_out->$class->vtable[19])(p_out, $tmp5428);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopBody5396, p_out);
    panda$core$Object* $tmp5430 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5430), p_out);
    panda$core$Object* $tmp5431 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5432 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5431));
    panda$core$Bit $tmp5433 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5432);
    if ($tmp5433.value) {
    {
        panda$core$String* $tmp5435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5434, loopStart5394);
        panda$core$String* $tmp5437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5435, &$s5436);
        (($fn5438) p_out->$class->vtable[19])(p_out, $tmp5437);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5398, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$OutputStream* p_out) {
    panda$core$String* loopStart5442;
    panda$core$String* loopEnd5444;
    panda$core$Bit $tmp5439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5439.value);
    panda$core$Int64 $tmp5440 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5440, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5441.value);
    panda$core$String* $tmp5443 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5442 = $tmp5443;
    panda$core$String* $tmp5445 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5444 = $tmp5445;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5446 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5446->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5446->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5446, ((panda$core$String*) p_l->payload), loopEnd5444, loopStart5442);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5446));
    panda$core$String* $tmp5449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5448, loopStart5442);
    panda$core$String* $tmp5451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5449, &$s5450);
    (($fn5452) p_out->$class->vtable[19])(p_out, $tmp5451);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopStart5442, p_out);
    panda$core$Object* $tmp5453 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5453), p_out);
    panda$core$Object* $tmp5454 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5455 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5454));
    panda$core$Bit $tmp5456 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5455);
    if ($tmp5456.value) {
    {
        panda$core$String* $tmp5458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5457, loopStart5442);
        panda$core$String* $tmp5460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5458, &$s5459);
        (($fn5461) p_out->$class->vtable[19])(p_out, $tmp5460);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, loopEnd5444, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5462;
    panda$core$String* ref5472;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5462 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5463 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5462);
            panda$core$String* $tmp5464 = panda$core$String$convert$R$panda$core$String($tmp5463);
            panda$core$String* $tmp5466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5464, &$s5465);
            panda$core$String* $tmp5467 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5462->type);
            panda$core$String* $tmp5468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5466, $tmp5467);
            panda$core$String* $tmp5470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5468, &$s5469);
            (($fn5471) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5470);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5473 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_value, p_out);
                ref5472 = $tmp5473;
                panda$core$String* $tmp5475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5474, ref5472);
                panda$core$String* $tmp5477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5475, &$s5476);
                panda$core$String* $tmp5478 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5462->type);
                panda$core$String* $tmp5479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5477, $tmp5478);
                panda$core$String* $tmp5481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5479, &$s5480);
                panda$core$String* $tmp5482 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5462);
                panda$core$String* $tmp5483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5481, $tmp5482);
                panda$core$String* $tmp5485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5483, &$s5484);
                (($fn5486) p_out->$class->vtable[19])(p_out, $tmp5485);
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
    panda$collections$Iterator* decl$Iter5500;
    org$pandalanguage$pandac$IRNode* decl5512;
    panda$core$Bit $tmp5490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5489 = $tmp5490.value;
    if ($tmp5489) goto $l5491;
    panda$core$Bit $tmp5492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5489 = $tmp5492.value;
    $l5491:;
    panda$core$Bit $tmp5493 = { $tmp5489 };
    bool $tmp5488 = $tmp5493.value;
    if ($tmp5488) goto $l5494;
    panda$core$Bit $tmp5495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5488 = $tmp5495.value;
    $l5494:;
    panda$core$Bit $tmp5496 = { $tmp5488 };
    bool $tmp5487 = $tmp5496.value;
    if ($tmp5487) goto $l5497;
    panda$core$Bit $tmp5498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5487 = $tmp5498.value;
    $l5497:;
    panda$core$Bit $tmp5499 = { $tmp5487 };
    PANDA_ASSERT($tmp5499.value);
    {
        ITable* $tmp5501 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5501->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5501 = $tmp5501->next;
        }
        $fn5503 $tmp5502 = $tmp5501->methods[0];
        panda$collections$Iterator* $tmp5504 = $tmp5502(((panda$collections$Iterable*) p_v->children));
        decl$Iter5500 = $tmp5504;
        $l5505:;
        ITable* $tmp5507 = decl$Iter5500->$class->itable;
        while ($tmp5507->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5507 = $tmp5507->next;
        }
        $fn5509 $tmp5508 = $tmp5507->methods[0];
        panda$core$Bit $tmp5510 = $tmp5508(decl$Iter5500);
        panda$core$Bit $tmp5511 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5510);
        if (!$tmp5511.value) goto $l5506;
        {
            ITable* $tmp5513 = decl$Iter5500->$class->itable;
            while ($tmp5513->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5513 = $tmp5513->next;
            }
            $fn5515 $tmp5514 = $tmp5513->methods[1];
            panda$core$Object* $tmp5516 = $tmp5514(decl$Iter5500);
            decl5512 = ((org$pandalanguage$pandac$IRNode*) $tmp5516);
            panda$core$Bit $tmp5517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5512->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5517.value);
            panda$core$Int64 $tmp5518 = panda$collections$Array$get_count$R$panda$core$Int64(decl5512->children);
            panda$core$Bit $tmp5519 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5518, ((panda$core$Int64) { 1 }));
            if ($tmp5519.value) {
            {
                panda$core$Object* $tmp5520 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5512->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5521 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5512->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5520), ((org$pandalanguage$pandac$IRNode*) $tmp5521), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5522 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5512->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$OutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5522), NULL, p_out);
            }
            }
        }
        goto $l5505;
        $l5506:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$OutputStream* p_out) {
    panda$core$String* base5526;
    panda$core$String* raw5529;
    org$pandalanguage$pandac$ClassDecl* cl5531;
    org$pandalanguage$pandac$FieldDecl* f5534;
    panda$collections$ListView* fields5535;
    panda$core$Int64 index5537;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5538;
    panda$core$String* result5598;
    panda$core$String* result5611;
    panda$core$String* reused5614;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5523 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5524 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, $tmp5523, p_out);
            return $tmp5524;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5525 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5525;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5527 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5528 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5527), p_out);
            base5526 = $tmp5528;
            panda$core$String* $tmp5530 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            raw5529 = $tmp5530;
            panda$core$Object* $tmp5532 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5533 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5532)->type);
            cl5531 = $tmp5533;
            PANDA_ASSERT(((panda$core$Bit) { cl5531 != NULL }).value);
            f5534 = ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload);
            panda$collections$ListView* $tmp5536 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5531);
            fields5535 = $tmp5536;
            index5537 = ((panda$core$Int64) { -1 });
            ITable* $tmp5539 = ((panda$collections$CollectionView*) fields5535)->$class->itable;
            while ($tmp5539->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5539 = $tmp5539->next;
            }
            $fn5541 $tmp5540 = $tmp5539->methods[0];
            panda$core$Int64 $tmp5542 = $tmp5540(((panda$collections$CollectionView*) fields5535));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5538, ((panda$core$Int64) { 0 }), $tmp5542, ((panda$core$Bit) { false }));
            int64_t $tmp5544 = $tmp5538.min.value;
            panda$core$Int64 i5543 = { $tmp5544 };
            int64_t $tmp5546 = $tmp5538.max.value;
            bool $tmp5547 = $tmp5538.inclusive.value;
            if ($tmp5547) goto $l5554; else goto $l5555;
            $l5554:;
            if ($tmp5544 <= $tmp5546) goto $l5548; else goto $l5550;
            $l5555:;
            if ($tmp5544 < $tmp5546) goto $l5548; else goto $l5550;
            $l5548:;
            {
                ITable* $tmp5556 = fields5535->$class->itable;
                while ($tmp5556->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5556 = $tmp5556->next;
                }
                $fn5558 $tmp5557 = $tmp5556->methods[0];
                panda$core$Object* $tmp5559 = $tmp5557(fields5535, i5543);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5559))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) f5534)->name) }).value) {
                {
                    index5537 = i5543;
                    goto $l5550;
                }
                }
            }
            $l5551:;
            int64_t $tmp5561 = $tmp5546 - i5543.value;
            if ($tmp5547) goto $l5562; else goto $l5563;
            $l5562:;
            if ($tmp5561 >= 1) goto $l5560; else goto $l5550;
            $l5563:;
            if ($tmp5561 > 1) goto $l5560; else goto $l5550;
            $l5560:;
            i5543.value += 1;
            goto $l5548;
            $l5550:;
            panda$core$Bit $tmp5566 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5537, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5566.value);
            panda$core$String* $tmp5567 = panda$core$String$convert$R$panda$core$String(raw5529);
            panda$core$String* $tmp5569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5567, &$s5568);
            org$pandalanguage$pandac$Type* $tmp5570 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5531);
            panda$core$String* $tmp5571 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5570);
            panda$core$String* $tmp5572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5569, $tmp5571);
            panda$core$String* $tmp5574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5572, &$s5573);
            org$pandalanguage$pandac$Type* $tmp5575 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5531);
            panda$core$String* $tmp5576 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5575);
            panda$core$String* $tmp5577 = panda$core$String$convert$R$panda$core$String($tmp5576);
            panda$core$String* $tmp5579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5577, &$s5578);
            panda$core$String* $tmp5580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5579, base5526);
            panda$core$String* $tmp5582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5580, &$s5581);
            panda$core$String* $tmp5583 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5582, ((panda$core$Object*) wrap_panda$core$Int64(index5537)));
            panda$core$String* $tmp5585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5583, &$s5584);
            panda$core$String* $tmp5586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5574, $tmp5585);
            (($fn5587) p_out->$class->vtable[19])(p_out, $tmp5586);
            panda$core$Bit $tmp5589 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, f5534->owner);
            bool $tmp5588 = $tmp5589.value;
            if ($tmp5588) goto $l5590;
            panda$core$Bit $tmp5592 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f5534->type);
            bool $tmp5591 = $tmp5592.value;
            if (!$tmp5591) goto $l5593;
            org$pandalanguage$pandac$ClassDecl* $tmp5594 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f5534->type);
            panda$core$Bit $tmp5595 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp5594);
            $tmp5591 = $tmp5595.value;
            $l5593:;
            panda$core$Bit $tmp5596 = { $tmp5591 };
            $tmp5588 = $tmp5596.value;
            $l5590:;
            panda$core$Bit $tmp5597 = { $tmp5588 };
            if ($tmp5597.value) {
            {
                return raw5529;
            }
            }
            panda$core$String* $tmp5599 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result5598 = $tmp5599;
            panda$core$String* $tmp5600 = panda$core$String$convert$R$panda$core$String(result5598);
            panda$core$String* $tmp5602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5600, &$s5601);
            panda$core$String* $tmp5603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5602, raw5529);
            panda$core$String* $tmp5605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5603, &$s5604);
            panda$core$String* $tmp5606 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5605, $tmp5606);
            panda$core$String* $tmp5609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5607, &$s5608);
            (($fn5610) p_out->$class->vtable[19])(p_out, $tmp5609);
            return result5598;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5612 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5613 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5612), p_out);
            result5611 = $tmp5613;
            panda$core$String* $tmp5615 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5614 = $tmp5615;
            panda$core$String* $tmp5616 = panda$core$String$convert$R$panda$core$String(reused5614);
            panda$core$String* $tmp5618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5616, &$s5617);
            panda$core$String* $tmp5619 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5618, $tmp5619);
            panda$core$String* $tmp5622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5620, &$s5621);
            panda$core$String* $tmp5623 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5624 = panda$core$String$convert$R$panda$core$String($tmp5623);
            panda$core$String* $tmp5626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5624, &$s5625);
            panda$core$String* $tmp5627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5626, result5611);
            panda$core$String* $tmp5629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5627, &$s5628);
            panda$core$String* $tmp5630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5622, $tmp5629);
            (($fn5631) p_out->$class->vtable[19])(p_out, $tmp5630);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5614));
            return result5611;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* lvalue5635;
    panda$core$String* value5646;
    panda$core$String* t5647;
    panda$core$Int64 op5650;
    panda$core$String* right5652;
    panda$core$Bit $tmp5632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5632.value);
    panda$core$Int64 $tmp5633 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5633, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5634.value);
    panda$core$Object* $tmp5636 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5637 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5636)->type);
    panda$core$String* $tmp5638 = panda$core$String$convert$R$panda$core$String($tmp5637);
    panda$core$String* $tmp5640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5638, &$s5639);
    panda$core$Object* $tmp5641 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5642 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5641), p_out);
    panda$core$String* $tmp5643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5640, $tmp5642);
    panda$core$String* $tmp5645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5643, &$s5644);
    lvalue5635 = $tmp5645;
    panda$core$Object* $tmp5648 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5649 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5648)->type);
    t5647 = $tmp5649;
    op5650 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5650, ((panda$core$Int64) { 73 }));
    if ($tmp5651.value) {
    {
        panda$core$Object* $tmp5653 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5654 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5653), p_out);
        right5652 = $tmp5654;
        panda$core$String* $tmp5655 = panda$core$String$convert$R$panda$core$String(t5647);
        panda$core$String* $tmp5657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5655, &$s5656);
        panda$core$String* $tmp5658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5657, right5652);
        panda$core$String* $tmp5660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5658, &$s5659);
        value5646 = $tmp5660;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5661, value5646);
    panda$core$String* $tmp5664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5662, &$s5663);
    panda$core$String* $tmp5665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5664, lvalue5635);
    panda$core$String* $tmp5667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5665, &$s5666);
    (($fn5668) p_out->$class->vtable[19])(p_out, $tmp5667);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5678;
    panda$core$String* result5680;
    bool $tmp5669 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp5669) goto $l5670;
    panda$core$Int64 $tmp5671 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5672 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5671, ((panda$core$Int64) { 0 }));
    $tmp5669 = $tmp5672.value;
    $l5670:;
    panda$core$Bit $tmp5673 = { $tmp5669 };
    if ($tmp5673.value) {
    {
        panda$core$Int64 $tmp5674 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5674, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp5675.value);
        panda$core$Int64 $tmp5676 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5677 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5676, ((panda$core$Int64) { 0 }));
        if ($tmp5677.value) {
        {
            panda$core$Object* $tmp5679 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5678 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5679);
            panda$core$Object* $tmp5681 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5682 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5681), p_out);
            result5680 = $tmp5682;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5683 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5683->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5683->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5683, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5680));
            panda$collections$Array$add$panda$collections$Array$T(inline5678->returns, ((panda$core$Object*) $tmp5683));
            panda$core$String* $tmp5686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5685, inline5678->exitLabel);
            panda$core$String* $tmp5688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5686, &$s5687);
            (($fn5689) p_out->$class->vtable[19])(p_out, $tmp5688);
        }
        }
        else {
        {
            panda$core$Object* $tmp5691 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5692 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5691), p_out);
            panda$core$String* $tmp5693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5690, $tmp5692);
            panda$core$String* $tmp5695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5693, &$s5694);
            (($fn5696) p_out->$class->vtable[19])(p_out, $tmp5695);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5697 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5698 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5697, ((panda$core$Int64) { 0 }));
        if ($tmp5698.value) {
        {
            panda$core$Object* $tmp5700 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5699, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5700)->exitLabel);
            panda$core$String* $tmp5703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5701, &$s5702);
            (($fn5704) p_out->$class->vtable[19])(p_out, $tmp5703);
        }
        }
        else {
        {
            (($fn5706) p_out->$class->vtable[19])(p_out, &$s5705);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5710;
    panda$core$Int64 $tmp5707 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5708 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5707, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5708.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5709 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5709);
    }
    }
    panda$core$Int64 $tmp5711 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5710, ((panda$core$Int64) { 0 }), $tmp5711, ((panda$core$Bit) { false }));
    int64_t $tmp5713 = $tmp5710.min.value;
    panda$core$Int64 i5712 = { $tmp5713 };
    int64_t $tmp5715 = $tmp5710.max.value;
    bool $tmp5716 = $tmp5710.inclusive.value;
    if ($tmp5716) goto $l5723; else goto $l5724;
    $l5723:;
    if ($tmp5713 <= $tmp5715) goto $l5717; else goto $l5719;
    $l5724:;
    if ($tmp5713 < $tmp5715) goto $l5717; else goto $l5719;
    $l5717:;
    {
        panda$core$Object* $tmp5726 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5712);
        bool $tmp5725 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5726)->loopLabel != NULL }).value;
        if (!$tmp5725) goto $l5727;
        panda$core$Object* $tmp5728 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5712);
        panda$core$Bit $tmp5729 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5728)->loopLabel, p_name);
        $tmp5725 = $tmp5729.value;
        $l5727:;
        panda$core$Bit $tmp5730 = { $tmp5725 };
        if ($tmp5730.value) {
        {
            panda$core$Object* $tmp5731 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5712);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5731);
        }
        }
    }
    $l5720:;
    int64_t $tmp5733 = $tmp5715 - i5712.value;
    if ($tmp5716) goto $l5734; else goto $l5735;
    $l5734:;
    if ($tmp5733 >= 1) goto $l5732; else goto $l5719;
    $l5735:;
    if ($tmp5733 > 1) goto $l5732; else goto $l5719;
    $l5732:;
    i5712.value += 1;
    goto $l5717;
    $l5719:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5738;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5739 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5738 = $tmp5739;
    panda$core$String* $tmp5741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5740, desc5738->breakLabel);
    panda$core$String* $tmp5743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5741, &$s5742);
    (($fn5744) p_out->$class->vtable[19])(p_out, $tmp5743);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$OutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5745;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5746 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5745 = $tmp5746;
    panda$core$String* $tmp5748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5747, desc5745->continueLabel);
    panda$core$String* $tmp5750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5748, &$s5749);
    (($fn5751) p_out->$class->vtable[19])(p_out, $tmp5750);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$OutputStream* p_out) {
    panda$core$String* test5761;
    panda$core$String* ifTrue5764;
    panda$core$String* ifFalse5766;
    panda$core$String* name5779;
    panda$core$String* path5780;
    panda$core$String$Index$nullable index5782;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5785;
    panda$core$String* nameRef5787;
    panda$core$String* line5789;
    panda$core$String* msg5794;
    panda$collections$Iterator* m$Iter5801;
    org$pandalanguage$pandac$MethodDecl* m5815;
    panda$core$Bit $tmp5752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5752.value);
    panda$core$Int64 $tmp5754 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5754, ((panda$core$Int64) { 1 }));
    bool $tmp5753 = $tmp5755.value;
    if ($tmp5753) goto $l5756;
    panda$core$Int64 $tmp5757 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5757, ((panda$core$Int64) { 2 }));
    $tmp5753 = $tmp5758.value;
    $l5756:;
    panda$core$Bit $tmp5759 = { $tmp5753 };
    PANDA_ASSERT($tmp5759.value);
    panda$core$Bit $tmp5760 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5760.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5762 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5763 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5762), p_out);
    test5761 = $tmp5763;
    panda$core$String* $tmp5765 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5764 = $tmp5765;
    panda$core$String* $tmp5767 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5766 = $tmp5767;
    panda$core$String* $tmp5769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5768, test5761);
    panda$core$String* $tmp5771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5769, &$s5770);
    panda$core$String* $tmp5772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5771, ifTrue5764);
    panda$core$String* $tmp5774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5772, &$s5773);
    panda$core$String* $tmp5775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5774, ifFalse5766);
    panda$core$String* $tmp5777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5775, &$s5776);
    (($fn5778) p_out->$class->vtable[19])(p_out, $tmp5777);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifFalse5766, p_out);
    panda$core$Object* $tmp5781 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path5780 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5781)->source->path;
    panda$core$String$Index$nullable $tmp5784 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path5780, &$s5783);
    index5782 = $tmp5784;
    if (((panda$core$Bit) { !index5782.nonnull }).value) {
    {
        name5779 = path5780;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp5785, index5782, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5786 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path5780, $tmp5785);
        name5779 = $tmp5786;
    }
    }
    panda$core$String* $tmp5788 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$OutputStream$R$panda$core$String(self, name5779, p_out);
    nameRef5787 = $tmp5788;
    panda$core$String* $tmp5791 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5790, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp5793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5791, &$s5792);
    line5789 = $tmp5793;
    panda$core$Int64 $tmp5795 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5795, ((panda$core$Int64) { 2 }));
    if ($tmp5796.value) {
    {
        panda$core$Object* $tmp5797 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5798 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5797), p_out);
        msg5794 = $tmp5798;
    }
    }
    else {
    {
        msg5794 = NULL;
    }
    }
    (($fn5800) p_out->$class->vtable[16])(p_out, &$s5799);
    {
        org$pandalanguage$pandac$Type* $tmp5802 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp5803 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp5802);
        ITable* $tmp5804 = ((panda$collections$Iterable*) $tmp5803->methods)->$class->itable;
        while ($tmp5804->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5804 = $tmp5804->next;
        }
        $fn5806 $tmp5805 = $tmp5804->methods[0];
        panda$collections$Iterator* $tmp5807 = $tmp5805(((panda$collections$Iterable*) $tmp5803->methods));
        m$Iter5801 = $tmp5807;
        $l5808:;
        ITable* $tmp5810 = m$Iter5801->$class->itable;
        while ($tmp5810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5810 = $tmp5810->next;
        }
        $fn5812 $tmp5811 = $tmp5810->methods[0];
        panda$core$Bit $tmp5813 = $tmp5811(m$Iter5801);
        panda$core$Bit $tmp5814 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5813);
        if (!$tmp5814.value) goto $l5809;
        {
            ITable* $tmp5816 = m$Iter5801->$class->itable;
            while ($tmp5816->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5816 = $tmp5816->next;
            }
            $fn5818 $tmp5817 = $tmp5816->methods[1];
            panda$core$Object* $tmp5819 = $tmp5817(m$Iter5801);
            m5815 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5819);
            panda$core$Bit $tmp5821 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5815)->name, &$s5820);
            if ($tmp5821.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m5815);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m5815);
            }
            }
        }
        goto $l5808;
        $l5809:;
    }
    if (((panda$core$Bit) { msg5794 != NULL }).value) {
    {
        panda$core$String* $tmp5824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5822, &$s5823);
        (($fn5825) p_out->$class->vtable[16])(p_out, $tmp5824);
    }
    }
    else {
    {
        (($fn5827) p_out->$class->vtable[16])(p_out, &$s5826);
    }
    }
    panda$core$String* $tmp5829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5828, nameRef5787);
    panda$core$String* $tmp5831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5829, &$s5830);
    panda$core$String* $tmp5832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5831, line5789);
    panda$core$String* $tmp5834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5832, &$s5833);
    (($fn5835) p_out->$class->vtable[16])(p_out, $tmp5834);
    if (((panda$core$Bit) { msg5794 != NULL }).value) {
    {
        panda$core$String* $tmp5837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5836, msg5794);
        panda$core$String* $tmp5839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5837, &$s5838);
        (($fn5840) p_out->$class->vtable[16])(p_out, $tmp5839);
    }
    }
    (($fn5842) p_out->$class->vtable[19])(p_out, &$s5841);
    (($fn5844) p_out->$class->vtable[19])(p_out, &$s5843);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ifTrue5764, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$OutputStream* p_out) {
    panda$core$String* valueStruct5846;
    org$pandalanguage$pandac$ClassDecl* numberClass5849;
    panda$core$String* value5852;
    org$pandalanguage$pandac$FieldDecl* f5861;
    panda$core$String* switchType5864;
    panda$core$String* endLabel5874;
    panda$collections$Array* whenLabels5876;
    panda$core$String* otherwiseLabel5879;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5890;
    org$pandalanguage$pandac$IRNode* w5905;
    panda$core$String* label5909;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5911;
    panda$core$UInt64 number5927;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5955;
    org$pandalanguage$pandac$IRNode* w5970;
    org$pandalanguage$pandac$IRNode* block5972;
    panda$core$Bit $tmp5845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp5845.value);
    panda$core$Object* $tmp5847 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5848 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5847), p_out);
    valueStruct5846 = $tmp5848;
    panda$core$Object* $tmp5850 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp5851 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5850)->type);
    numberClass5849 = $tmp5851;
    panda$core$String* $tmp5853 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value5852 = $tmp5853;
    panda$core$String* $tmp5854 = panda$core$String$convert$R$panda$core$String(value5852);
    panda$core$String* $tmp5856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5854, &$s5855);
    panda$core$String* $tmp5857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5856, valueStruct5846);
    panda$core$String* $tmp5859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5857, &$s5858);
    (($fn5860) p_out->$class->vtable[19])(p_out, $tmp5859);
    org$pandalanguage$pandac$Symbol* $tmp5863 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass5849->symbolTable, &$s5862);
    f5861 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5863);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f5861);
    panda$core$String* $tmp5865 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f5861->type);
    switchType5864 = $tmp5865;
    panda$core$String* $tmp5867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5866, switchType5864);
    panda$core$String* $tmp5869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5867, &$s5868);
    panda$core$String* $tmp5870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5869, value5852);
    panda$core$String* $tmp5872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5870, &$s5871);
    (($fn5873) p_out->$class->vtable[16])(p_out, $tmp5872);
    panda$core$String* $tmp5875 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel5874 = $tmp5875;
    panda$collections$Array* $tmp5877 = (panda$collections$Array*) malloc(40);
    $tmp5877->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5877->refCount.value = 1;
    panda$collections$Array$init($tmp5877);
    whenLabels5876 = $tmp5877;
    panda$core$Int64 $tmp5880 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp5881 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5880, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5882 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, $tmp5881);
    panda$core$Bit $tmp5883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5882)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp5883.value) {
    {
        panda$core$String* $tmp5884 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel5879 = $tmp5884;
    }
    }
    else {
    {
        otherwiseLabel5879 = endLabel5874;
    }
    }
    panda$core$String* $tmp5886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5885, otherwiseLabel5879);
    panda$core$String* $tmp5888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5886, &$s5887);
    (($fn5889) p_out->$class->vtable[19])(p_out, $tmp5888);
    panda$core$Int64 $tmp5891 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5890, ((panda$core$Int64) { 1 }), $tmp5891, ((panda$core$Bit) { false }));
    int64_t $tmp5893 = $tmp5890.min.value;
    panda$core$Int64 i5892 = { $tmp5893 };
    int64_t $tmp5895 = $tmp5890.max.value;
    bool $tmp5896 = $tmp5890.inclusive.value;
    if ($tmp5896) goto $l5903; else goto $l5904;
    $l5903:;
    if ($tmp5893 <= $tmp5895) goto $l5897; else goto $l5899;
    $l5904:;
    if ($tmp5893 < $tmp5895) goto $l5897; else goto $l5899;
    $l5897:;
    {
        panda$core$Object* $tmp5906 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5892);
        w5905 = ((org$pandalanguage$pandac$IRNode*) $tmp5906);
        panda$core$Bit $tmp5907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5905->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp5907.value) {
        {
            goto $l5900;
        }
        }
        panda$core$Bit $tmp5908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5905->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp5908.value);
        panda$core$String* $tmp5910 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label5909 = $tmp5910;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels5876, ((panda$core$Object*) label5909));
        panda$core$Int64 $tmp5912 = panda$collections$Array$get_count$R$panda$core$Int64(w5905->children);
        panda$core$Int64 $tmp5913 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5912, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5911, ((panda$core$Int64) { 0 }), $tmp5913, ((panda$core$Bit) { false }));
        int64_t $tmp5915 = $tmp5911.min.value;
        panda$core$Int64 i5914 = { $tmp5915 };
        int64_t $tmp5917 = $tmp5911.max.value;
        bool $tmp5918 = $tmp5911.inclusive.value;
        if ($tmp5918) goto $l5925; else goto $l5926;
        $l5925:;
        if ($tmp5915 <= $tmp5917) goto $l5919; else goto $l5921;
        $l5926:;
        if ($tmp5915 < $tmp5917) goto $l5919; else goto $l5921;
        $l5919:;
        {
            panda$core$Object* $tmp5928 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5905->children, i5914);
            panda$core$UInt64 $tmp5929 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5928));
            number5927 = $tmp5929;
            panda$core$String* $tmp5931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5930, switchType5864);
            panda$core$String* $tmp5933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5931, &$s5932);
            panda$core$String* $tmp5934 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5933, ((panda$core$Object*) wrap_panda$core$UInt64(number5927)));
            panda$core$String* $tmp5936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5934, &$s5935);
            panda$core$String* $tmp5937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5936, label5909);
            panda$core$String* $tmp5939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5937, &$s5938);
            (($fn5940) p_out->$class->vtable[19])(p_out, $tmp5939);
        }
        $l5922:;
        int64_t $tmp5942 = $tmp5917 - i5914.value;
        if ($tmp5918) goto $l5943; else goto $l5944;
        $l5943:;
        if ($tmp5942 >= 1) goto $l5941; else goto $l5921;
        $l5944:;
        if ($tmp5942 > 1) goto $l5941; else goto $l5921;
        $l5941:;
        i5914.value += 1;
        goto $l5919;
        $l5921:;
    }
    $l5900:;
    int64_t $tmp5948 = $tmp5895 - i5892.value;
    if ($tmp5896) goto $l5949; else goto $l5950;
    $l5949:;
    if ($tmp5948 >= 1) goto $l5947; else goto $l5899;
    $l5950:;
    if ($tmp5948 > 1) goto $l5947; else goto $l5899;
    $l5947:;
    i5892.value += 1;
    goto $l5897;
    $l5899:;
    (($fn5954) p_out->$class->vtable[19])(p_out, &$s5953);
    panda$core$Int64 $tmp5956 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5955, ((panda$core$Int64) { 1 }), $tmp5956, ((panda$core$Bit) { false }));
    int64_t $tmp5958 = $tmp5955.min.value;
    panda$core$Int64 i5957 = { $tmp5958 };
    int64_t $tmp5960 = $tmp5955.max.value;
    bool $tmp5961 = $tmp5955.inclusive.value;
    if ($tmp5961) goto $l5968; else goto $l5969;
    $l5968:;
    if ($tmp5958 <= $tmp5960) goto $l5962; else goto $l5964;
    $l5969:;
    if ($tmp5958 < $tmp5960) goto $l5962; else goto $l5964;
    $l5962:;
    {
        panda$core$Object* $tmp5971 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5957);
        w5970 = ((org$pandalanguage$pandac$IRNode*) $tmp5971);
        panda$core$Int64 $tmp5973 = panda$collections$Array$get_count$R$panda$core$Int64(w5970->children);
        panda$core$Int64 $tmp5974 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5973, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp5975 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5970->children, $tmp5974);
        block5972 = ((org$pandalanguage$pandac$IRNode*) $tmp5975);
        panda$core$Int64 $tmp5976 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5957, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp5977 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels5876);
        panda$core$Bit $tmp5978 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp5976, $tmp5977);
        if ($tmp5978.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, otherwiseLabel5879, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp5979 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5957, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp5980 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels5876, $tmp5979);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, ((panda$core$String*) $tmp5980), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, block5972, p_out);
        panda$core$Bit $tmp5981 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block5972);
        panda$core$Bit $tmp5982 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5981);
        if ($tmp5982.value) {
        {
            panda$core$String* $tmp5984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5983, endLabel5874);
            panda$core$String* $tmp5986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5984, &$s5985);
            (($fn5987) p_out->$class->vtable[19])(p_out, $tmp5986);
        }
        }
    }
    $l5965:;
    int64_t $tmp5989 = $tmp5960 - i5957.value;
    if ($tmp5961) goto $l5990; else goto $l5991;
    $l5990:;
    if ($tmp5989 >= 1) goto $l5988; else goto $l5964;
    $l5991:;
    if ($tmp5989 > 1) goto $l5988; else goto $l5964;
    $l5988:;
    i5957.value += 1;
    goto $l5962;
    $l5964:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$OutputStream(self, endLabel5874, p_out);
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
    panda$core$String* result5994;
    org$pandalanguage$pandac$Type* $tmp5995 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp5996 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5995);
    result5994 = $tmp5996;
    panda$core$Bit $tmp5998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp5997 = $tmp5998.value;
    if (!$tmp5997) goto $l5999;
    panda$core$Bit $tmp6001 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result5994, &$s6000);
    panda$core$Bit $tmp6002 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6001);
    $tmp5997 = $tmp6002.value;
    $l5999:;
    panda$core$Bit $tmp6003 = { $tmp5997 };
    if ($tmp6003.value) {
    {
        panda$core$String* $tmp6005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result5994, &$s6004);
        return $tmp6005;
    }
    }
    return result5994;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6006;
    panda$core$Bit needsIndirection6015;
    panda$core$String* separator6027;
    panda$collections$Iterator* p$Iter6046;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6058;
    panda$core$String* $tmp6007 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6006 = $tmp6007;
    panda$core$Bit $tmp6008 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6006));
    if ($tmp6008.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6006));
    panda$core$String* $tmp6010 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6009, $tmp6010);
    panda$core$String* $tmp6013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6011, &$s6012);
    (($fn6014) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6013);
    panda$core$Bit $tmp6016 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6015 = $tmp6016;
    if (needsIndirection6015.value) {
    {
        (($fn6018) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6017);
    }
    }
    else {
    {
        panda$core$String* $tmp6019 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6020) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6019);
    }
    }
    panda$core$String* $tmp6022 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6021, $tmp6022);
    panda$core$String* $tmp6025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6023, &$s6024);
    (($fn6026) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6025);
    separator6027 = &$s6028;
    if (needsIndirection6015.value) {
    {
        panda$core$String* $tmp6029 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6030 = panda$core$String$convert$R$panda$core$String($tmp6029);
        panda$core$String* $tmp6032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6030, &$s6031);
        (($fn6033) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6032);
        separator6027 = &$s6034;
    }
    }
    panda$core$Bit $tmp6035 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6036 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6035);
    if ($tmp6036.value) {
    {
        panda$core$String* $tmp6037 = panda$core$String$convert$R$panda$core$String(separator6027);
        panda$core$String* $tmp6039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6037, &$s6038);
        panda$core$String* $tmp6040 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6039, $tmp6040);
        panda$core$String* $tmp6043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6041, &$s6042);
        (($fn6044) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6043);
        separator6027 = &$s6045;
    }
    }
    {
        ITable* $tmp6047 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6047->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6047 = $tmp6047->next;
        }
        $fn6049 $tmp6048 = $tmp6047->methods[0];
        panda$collections$Iterator* $tmp6050 = $tmp6048(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6046 = $tmp6050;
        $l6051:;
        ITable* $tmp6053 = p$Iter6046->$class->itable;
        while ($tmp6053->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6053 = $tmp6053->next;
        }
        $fn6055 $tmp6054 = $tmp6053->methods[0];
        panda$core$Bit $tmp6056 = $tmp6054(p$Iter6046);
        panda$core$Bit $tmp6057 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6056);
        if (!$tmp6057.value) goto $l6052;
        {
            ITable* $tmp6059 = p$Iter6046->$class->itable;
            while ($tmp6059->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6059 = $tmp6059->next;
            }
            $fn6061 $tmp6060 = $tmp6059->methods[1];
            panda$core$Object* $tmp6062 = $tmp6060(p$Iter6046);
            p6058 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6062);
            panda$core$String* $tmp6063 = panda$core$String$convert$R$panda$core$String(separator6027);
            panda$core$String* $tmp6065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6063, &$s6064);
            panda$core$String* $tmp6066 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6058->type);
            panda$core$String* $tmp6067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6065, $tmp6066);
            panda$core$String* $tmp6069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6067, &$s6068);
            panda$core$String* $tmp6070 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6058->name);
            panda$core$String* $tmp6071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6069, $tmp6070);
            panda$core$String* $tmp6073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6071, &$s6072);
            (($fn6074) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6073);
            separator6027 = &$s6075;
        }
        goto $l6051;
        $l6052:;
    }
    (($fn6077) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6076);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6100;
    panda$collections$Iterator* p$Iter6110;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6122;
    panda$io$MemoryOutputStream* bodyBuffer6143;
    panda$collections$Iterator* s$Iter6146;
    org$pandalanguage$pandac$IRNode* s6158;
    panda$core$Object* $tmp6078 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6078)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6079;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$io$MemoryOutputStream* $tmp6080 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6080->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6080->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6080);
    self->methodHeader = $tmp6080;
    (($fn6083) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6082);
    panda$core$Bit $tmp6084 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6084.value) {
    {
        (($fn6086) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6085);
    }
    }
    panda$core$String* $tmp6087 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6088 = panda$core$String$convert$R$panda$core$String($tmp6087);
    panda$core$String* $tmp6090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6088, &$s6089);
    panda$core$String* $tmp6091 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6090, $tmp6091);
    panda$core$String* $tmp6094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6092, &$s6093);
    panda$core$String* $tmp6095 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6094, $tmp6095);
    panda$core$String* $tmp6098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6096, &$s6097);
    (($fn6099) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6098);
    separator6100 = &$s6101;
    panda$core$Bit $tmp6102 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6102);
    if ($tmp6103.value) {
    {
        panda$core$String* $tmp6104 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6105 = panda$core$String$convert$R$panda$core$String($tmp6104);
        panda$core$String* $tmp6107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6105, &$s6106);
        (($fn6108) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6107);
        separator6100 = &$s6109;
    }
    }
    {
        ITable* $tmp6111 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6111->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6111 = $tmp6111->next;
        }
        $fn6113 $tmp6112 = $tmp6111->methods[0];
        panda$collections$Iterator* $tmp6114 = $tmp6112(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6110 = $tmp6114;
        $l6115:;
        ITable* $tmp6117 = p$Iter6110->$class->itable;
        while ($tmp6117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6117 = $tmp6117->next;
        }
        $fn6119 $tmp6118 = $tmp6117->methods[0];
        panda$core$Bit $tmp6120 = $tmp6118(p$Iter6110);
        panda$core$Bit $tmp6121 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6120);
        if (!$tmp6121.value) goto $l6116;
        {
            ITable* $tmp6123 = p$Iter6110->$class->itable;
            while ($tmp6123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6123 = $tmp6123->next;
            }
            $fn6125 $tmp6124 = $tmp6123->methods[1];
            panda$core$Object* $tmp6126 = $tmp6124(p$Iter6110);
            p6122 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6126);
            panda$core$String* $tmp6127 = panda$core$String$convert$R$panda$core$String(separator6100);
            panda$core$String* $tmp6129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6127, &$s6128);
            panda$core$String* $tmp6130 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6122->type);
            panda$core$String* $tmp6131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6129, $tmp6130);
            panda$core$String* $tmp6133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6131, &$s6132);
            panda$core$String* $tmp6134 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6122->name);
            panda$core$String* $tmp6135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6133, $tmp6134);
            panda$core$String* $tmp6137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6135, &$s6136);
            (($fn6138) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6137);
            separator6100 = &$s6139;
        }
        goto $l6115;
        $l6116:;
    }
    (($fn6141) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6140);
    panda$core$Bit $tmp6142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6142.value);
    panda$io$MemoryOutputStream* $tmp6144 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6144->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6144->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6144);
    bodyBuffer6143 = $tmp6144;
    {
        ITable* $tmp6147 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6147->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6147 = $tmp6147->next;
        }
        $fn6149 $tmp6148 = $tmp6147->methods[0];
        panda$collections$Iterator* $tmp6150 = $tmp6148(((panda$collections$Iterable*) p_body->children));
        s$Iter6146 = $tmp6150;
        $l6151:;
        ITable* $tmp6153 = s$Iter6146->$class->itable;
        while ($tmp6153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6153 = $tmp6153->next;
        }
        $fn6155 $tmp6154 = $tmp6153->methods[0];
        panda$core$Bit $tmp6156 = $tmp6154(s$Iter6146);
        panda$core$Bit $tmp6157 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6156);
        if (!$tmp6157.value) goto $l6152;
        {
            ITable* $tmp6159 = s$Iter6146->$class->itable;
            while ($tmp6159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6159 = $tmp6159->next;
            }
            $fn6161 $tmp6160 = $tmp6159->methods[1];
            panda$core$Object* $tmp6162 = $tmp6160(s$Iter6146);
            s6158 = ((org$pandalanguage$pandac$IRNode*) $tmp6162);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$OutputStream(self, s6158, ((panda$io$OutputStream*) bodyBuffer6143));
        }
        goto $l6151;
        $l6152:;
    }
    panda$core$String* $tmp6163 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeader);
    (($fn6164) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6163);
    panda$core$String* $tmp6165 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer6143);
    (($fn6166) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6165);
    panda$core$Bit $tmp6167 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6168 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6167);
    if ($tmp6168.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6169 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6170 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6169);
        if ($tmp6170.value) {
        {
            (($fn6172) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6171);
        }
        }
        else {
        {
            (($fn6174) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6173);
        }
        }
    }
    }
    (($fn6176) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6175);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6177 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6177.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6178 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6178);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

