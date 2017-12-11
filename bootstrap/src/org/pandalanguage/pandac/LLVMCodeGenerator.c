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
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/InlineContext.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char8.h"
#include "panda/core/Int8.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/io/File.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/SymbolTable.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$finish} };

org$pandalanguage$pandac$LLVMCodeGenerator$class_type org$pandalanguage$pandac$LLVMCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$finish, org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim, org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT, org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl} };

typedef void (*$fn50)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn52)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn54)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn56)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn58)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn60)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn63)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn65)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn67)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn69)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn71)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn73)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn74)(panda$core$Object*);
typedef void (*$fn89)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn121)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn127)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn133)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn162)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn174)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn205)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn211)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn217)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn250)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn256)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn262)(panda$collections$Iterator*);
typedef void (*$fn287)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn306)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn312)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn318)(panda$collections$Iterator*);
typedef void (*$fn335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn344)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn507)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn513)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn519)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn546)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn583)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn594)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn600)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn606)(panda$collections$Iterator*);
typedef void (*$fn622)(panda$io$OutputStream*, panda$core$String*);
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
typedef void (*$fn900)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn951)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn976)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1002)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1010)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1018)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1027)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1033)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1039)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1066)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1103)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1114)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1120)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1126)(panda$collections$Iterator*);
typedef void (*$fn1143)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1251)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1271)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1328)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1339)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1345)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1351)(panda$collections$Iterator*);
typedef void (*$fn1367)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1385)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1408)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1472)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1483)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1501)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1525)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1678)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1684)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1690)(panda$collections$Iterator*);
typedef void (*$fn1723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1739)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1752)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1758)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1773)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1786)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1802)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1815)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1821)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1836)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1894)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1910)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1919)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1935)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1944)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1971)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1988)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2020)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2032)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2055)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2064)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2076)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2086)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2108)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2123)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2168)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2197)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2220)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2235)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2272)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2284)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2289)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2296)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2313)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2326)(panda$collections$CollectionView*);
typedef void (*$fn2346)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2358)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2373)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2400)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2421)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2434)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2448)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2473)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2488)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2513)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2525)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2545)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2560)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2576)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2588)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2605)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2659)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2674)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2728)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2735)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2746)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2752)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2758)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2764)(panda$collections$Iterator*);
typedef void (*$fn2775)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2777)(panda$io$OutputStream*);
typedef void (*$fn2802)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2820)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2922)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2934)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2939)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2952)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2959)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2964)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2970)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2976)(panda$collections$Iterator*);
typedef void (*$fn2984)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2987)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2999)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3022)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3037)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3048)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3069)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3080)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3098)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3114)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3129)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3145)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3182)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3200)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3222)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3239)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3265)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3285)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3302)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3317)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3328)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3356)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3378)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3393)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3408)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3432)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3445)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3522)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3577)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3618)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3632)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3654)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3664)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3677)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3704)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3719)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3752)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3764)(panda$collections$CollectionView*);
typedef void (*$fn3775)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3782)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3788)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3794)(panda$collections$Iterator*);
typedef void (*$fn3803)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3806)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3843)(panda$collections$CollectionView*);
typedef void (*$fn3851)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3868)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3891)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3899)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3907)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3916)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3938)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3946)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3955)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3987)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3998)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4033)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4039)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4045)(panda$collections$Iterator*);
typedef void (*$fn4068)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4095)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4120)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4132)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4148)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4153)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4256)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4272)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4289)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4293)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4299)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4305)(panda$collections$Iterator*);
typedef void (*$fn4307)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4308)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4311)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4334)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4349)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4362)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4373)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4409)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4416)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4428)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4437)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4454)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4468)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4477)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4486)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4529)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4548)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4559)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4578)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4589)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4604)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4611)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4628)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4641)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4653)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4664)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4676)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4687)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4699)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4711)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4719)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4733)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4738)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4774)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4781)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4793)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4802)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4819)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4833)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4842)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4851)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4914)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4926)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4943)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4962)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4973)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4992)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5003)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5020)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5039)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5050)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5069)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5080)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5095)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5102)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5119)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5134)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5162)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5173)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5188)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5226)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5239)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5263)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5276)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5287)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5302)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5314)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5322)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5336)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5341)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5364)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5376)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5387)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5396)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5415)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5427)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5447)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5470)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5480)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5495)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5512)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5518)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5524)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5550)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5567)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5596)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5619)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5640)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5677)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5700)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5710)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5712)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5750)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5757)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5806)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5812)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5818)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5824)(panda$collections$Iterator*);
typedef void (*$fn5831)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5833)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5841)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5846)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5848)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5850)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5866)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5879)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5895)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5946)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5960)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5993)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6020)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6024)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6026)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6032)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6039)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6050)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6055)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6061)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6067)(panda$collections$Iterator*);
typedef void (*$fn6080)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6083)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6087)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6090)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6112)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6117)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6123)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6129)(panda$collections$Iterator*);
typedef void (*$fn6142)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6145)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6157)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6169)(panda$collections$Iterator*);
typedef void (*$fn6172)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6174)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6180)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6182)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6185)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x64\x61\x74\x61\x6C\x61\x79\x6F\x75\x74\x20\x3D\x20\x22\x65\x2D\x70\x3A\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x69\x31\x3A\x38\x3A\x38\x2D\x69\x38\x3A\x38\x3A\x38\x2D\x69\x31\x36\x3A\x31\x36\x3A\x31\x36\x2D\x69\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x69\x36\x34\x3A", 72, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34\x3A\x36\x34\x2D\x66\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x66\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x31\x32\x38\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D\x61\x30\x3A\x30\x3A\x36\x34\x2D\x73\x30\x3A\x36\x34\x3A\x36\x34\x2D\x66\x38\x30\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D", 78, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x38\x3A\x31\x36\x3A\x33\x32\x3A\x36\x34\x2D\x53\x31\x32\x38\x22", 17, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6C\x65\x20\x3D\x20\x22\x78\x38\x36\x5F\x36\x34\x2D\x61\x70\x70\x6C\x65\x2D\x6D\x61\x63\x6F\x73\x78\x31\x30\x2E\x38\x2E\x30\x22", 43, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x29", 24, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x2C\x20\x69\x36\x34\x29", 30, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x29", 23, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 60, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 10, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A", 3, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D", 42, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 18, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 19, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x31\x20\x7D", 6, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69", 1, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x31", 2, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, NULL };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, NULL };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, NULL };
static panda$core$String $s1069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, NULL };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s1133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, NULL };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, NULL };
static panda$core$String $s1303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, NULL };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s1530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, NULL };
static panda$core$String $s1535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, NULL };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C", 1, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, NULL };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, NULL };
static panda$core$String $s1591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, NULL };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, NULL };
static panda$core$String $s1602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s1604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, NULL };
static panda$core$String $s1619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, NULL };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, NULL };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, NULL };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, NULL };
static panda$core$String $s1703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, NULL };
static panda$core$String $s1765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, NULL };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, NULL };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, NULL };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, NULL };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, NULL };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, NULL };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, NULL };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, NULL };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, NULL };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, NULL };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A", 2, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, NULL };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, NULL };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, NULL };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, NULL };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, NULL };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, NULL };
static panda$core$String $s2204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, NULL };
static panda$core$String $s2224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, NULL };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, NULL };
static panda$core$String $s2256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s2264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, NULL };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, NULL };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, NULL };
static panda$core$String $s2353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, NULL };
static panda$core$String $s2395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, NULL };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, NULL };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, NULL };
static panda$core$String $s2460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, NULL };
static panda$core$String $s2571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, NULL };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, NULL };
static panda$core$String $s2654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s2666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, NULL };
static panda$core$String $s2672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, NULL };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, NULL };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s2736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s2799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, NULL };
static panda$core$String $s2890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s2925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, NULL };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s2950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s3029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s3046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, NULL };
static panda$core$String $s3059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, NULL };
static panda$core$String $s3061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s3073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s3078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, NULL };
static panda$core$String $s3117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, NULL };
static panda$core$String $s3119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, NULL };
static panda$core$String $s3126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, NULL };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, NULL };
static panda$core$String $s3167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s3326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, NULL };
static panda$core$String $s3345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, NULL };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, NULL };
static panda$core$String $s3457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, NULL };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, NULL };
static panda$core$String $s3508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s3511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s3564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s3571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, NULL };
static panda$core$String $s3574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, NULL };
static panda$core$String $s3592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s3605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, NULL };
static panda$core$String $s3615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, NULL };
static panda$core$String $s3622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s3624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s3630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s3662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s3671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s3694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, NULL };
static panda$core$String $s3702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, NULL };
static panda$core$String $s3707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, NULL };
static panda$core$String $s3709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x69\x38\x2A\x2A\x20", 11, NULL };
static panda$core$String $s3716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s3731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s3732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, NULL };
static panda$core$String $s3740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, NULL };
static panda$core$String $s3757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s3767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, NULL };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, NULL };
static panda$core$String $s3773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, NULL };
static panda$core$String $s3777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, NULL };
static panda$core$String $s3801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, NULL };
static panda$core$String $s3809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, NULL };
static panda$core$String $s3811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, NULL };
static panda$core$String $s3821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s3823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 54, NULL };
static panda$core$String $s3831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, NULL };
static panda$core$String $s3833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, NULL };
static panda$core$String $s3846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 10, NULL };
static panda$core$String $s3855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s3859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, NULL };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, NULL };
static panda$core$String $s3886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s3894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, NULL };
static panda$core$String $s3897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, NULL };
static panda$core$String $s3902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s3911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s3914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, NULL };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s3941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s3944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s3950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s3953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, NULL };
static panda$core$String $s3967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, NULL };
static panda$core$String $s3978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s3982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, NULL };
static panda$core$String $s3985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, NULL };
static panda$core$String $s3993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, NULL };
static panda$core$String $s3996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, NULL };
static panda$core$String $s4061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s4090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s4107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s4114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, NULL };
static panda$core$String $s4143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s4146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, NULL };
static panda$core$String $s4149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, NULL };
static panda$core$String $s4151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s4156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s4217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s4251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s4260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, NULL };
static panda$core$String $s4263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s4266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s4279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s4309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s4329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s4423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, NULL };
static panda$core$String $s4441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s4444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, NULL };
static panda$core$String $s4455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, NULL };
static panda$core$String $s4481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, NULL };
static panda$core$String $s4502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s4504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s4506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s4509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s4512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s4517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s4526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, NULL };
static panda$core$String $s4539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, NULL };
static panda$core$String $s4569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s4596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s4620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s4648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s4671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, NULL };
static panda$core$String $s4694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s4706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s4709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, NULL };
static panda$core$String $s4712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s4714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s4788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, NULL };
static panda$core$String $s4806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s4809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, NULL };
static panda$core$String $s4820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, NULL };
static panda$core$String $s4846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, NULL };
static panda$core$String $s4853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s4857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, NULL };
static panda$core$String $s4860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s4863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, NULL };
static panda$core$String $s4890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s4892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s4894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s4897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s4900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s4902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s4906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, NULL };
static panda$core$String $s4909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, NULL };
static panda$core$String $s4916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s4940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, NULL };
static panda$core$String $s4953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, NULL };
static panda$core$String $s4983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s5017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, NULL };
static panda$core$String $s5030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, NULL };
static panda$core$String $s5060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s5087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, NULL };
static panda$core$String $s5224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, NULL };
static panda$core$String $s5294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s5309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s5312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, NULL };
static panda$core$String $s5315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s5317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s5478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s5582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, NULL };
static panda$core$String $s5593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, NULL };
static panda$core$String $s5613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s5617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s5626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s5630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s5698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, NULL };
static panda$core$String $s5746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s5796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s5798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s5805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20", 10, NULL };
static panda$core$String $s5826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, NULL };
static panda$core$String $s5828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, NULL };
static panda$core$String $s5829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, NULL };
static panda$core$String $s5832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, NULL };
static panda$core$String $s5834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, NULL };
static panda$core$String $s5836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, NULL };
static panda$core$String $s5844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s5849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s5861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, NULL };
static panda$core$String $s5872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, NULL };
static panda$core$String $s5874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s5893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, NULL };
static panda$core$String $s5936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, NULL };
static panda$core$String $s5938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, NULL };
static panda$core$String $s5989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, NULL };
static panda$core$String $s6018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s6027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s6034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s6051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s6078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s6085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, NULL };
static panda$core$String $s6086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s6089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s6093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s6105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s6113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s6140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s6179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, NULL };
static panda$core$String $s6181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s6184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };

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
    panda$io$IndentedOutputStream* $tmp7 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp7->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp7->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp7, ((panda$io$OutputStream*) self->methodsBuffer));
    self->methods = $tmp7;
    panda$io$MemoryOutputStream* $tmp9 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp9->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp9);
    self->methodHeaderBuffer = $tmp9;
    panda$io$IndentedOutputStream* $tmp11 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp11->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp11, ((panda$io$OutputStream*) self->methodHeaderBuffer));
    self->methodHeader = $tmp11;
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp13->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp13);
    self->wrapperShimsBuffer = $tmp13;
    panda$io$IndentedOutputStream* $tmp15 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp15->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp15->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp15, ((panda$io$OutputStream*) self->wrapperShimsBuffer));
    self->wrapperShims = $tmp15;
    panda$io$MemoryOutputStream* $tmp17 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp17->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp17->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp17);
    self->shimsBuffer = $tmp17;
    panda$io$IndentedOutputStream* $tmp19 = (panda$io$IndentedOutputStream*) malloc(56);
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
    panda$io$IndentedOutputStream* $tmp43 = (panda$io$IndentedOutputStream*) malloc(56);
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
    org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp61);
    panda$core$String* $tmp62 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn63) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp62);
    panda$core$String* $tmp64 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn65) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp64);
    panda$core$String* $tmp66 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->declarations);
    (($fn67) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp66);
    panda$core$String* $tmp68 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn69) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp68);
    panda$core$String* $tmp70 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn71) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp70);
    panda$core$String* $tmp72 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn73) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp72);
    (($fn74) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self) {
    panda$core$Int64 $tmp75 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp75;
    panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s76, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp79 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp77, &$s78);
    return $tmp79;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self) {
    panda$core$Int64 $tmp80 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp80;
    panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s81, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, &$s83);
    return $tmp84;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s85, p_label);
    panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp86, &$s87);
    (($fn89) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp88);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    switch (p_stmt->kind.value) {
        case 1000:
        {
            panda$core$Int64 $tmp90 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp91 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp90, ((panda$core$Int64) { 0 }));
            if ($tmp91.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp92 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp93 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp92, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp94 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, $tmp93);
            panda$core$Bit $tmp95 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp94));
            return $tmp95;
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
    org$pandalanguage$pandac$ClassDecl* cl107;
    panda$core$Int64 result116;
    panda$collections$Iterator* f$Iter117;
    org$pandalanguage$pandac$FieldDecl* f130;
    panda$core$Int64 size136;
    panda$core$Int64 align138;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp96 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp96.value) {
    {
        panda$core$Bit $tmp98 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s97);
        if ($tmp98.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp100 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s99);
        if ($tmp100.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp102 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s101);
        if ($tmp102.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp104 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s103);
        PANDA_ASSERT($tmp104.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp105 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp106 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp105);
    if ($tmp106.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp108 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl107 = $tmp108;
    PANDA_ASSERT(((panda$core$Bit) { cl107 != NULL }).value);
    panda$core$Bit $tmp110 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl107);
    panda$core$Bit $tmp111 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp110);
    bool $tmp109 = $tmp111.value;
    if ($tmp109) goto $l112;
    panda$core$Bit $tmp114 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl107)->name, &$s113);
    $tmp109 = $tmp114.value;
    $l112:;
    panda$core$Bit $tmp115 = { $tmp109 };
    if ($tmp115.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result116 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp118 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl107);
        ITable* $tmp119 = ((panda$collections$Iterable*) $tmp118)->$class->itable;
        while ($tmp119->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp119 = $tmp119->next;
        }
        $fn121 $tmp120 = $tmp119->methods[0];
        panda$collections$Iterator* $tmp122 = $tmp120(((panda$collections$Iterable*) $tmp118));
        f$Iter117 = $tmp122;
        $l123:;
        ITable* $tmp125 = f$Iter117->$class->itable;
        while ($tmp125->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp125 = $tmp125->next;
        }
        $fn127 $tmp126 = $tmp125->methods[0];
        panda$core$Bit $tmp128 = $tmp126(f$Iter117);
        panda$core$Bit $tmp129 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp128);
        if (!$tmp129.value) goto $l124;
        {
            ITable* $tmp131 = f$Iter117->$class->itable;
            while ($tmp131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp131 = $tmp131->next;
            }
            $fn133 $tmp132 = $tmp131->methods[1];
            panda$core$Object* $tmp134 = $tmp132(f$Iter117);
            f130 = ((org$pandalanguage$pandac$FieldDecl*) $tmp134);
            panda$core$Bit $tmp135 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f130->annotations);
            if ($tmp135.value) {
            {
                goto $l123;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f130);
            panda$core$Int64 $tmp137 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f130->type);
            size136 = $tmp137;
            panda$core$Int64 $tmp139 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result116, size136);
            align138 = $tmp139;
            panda$core$Bit $tmp140 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align138, ((panda$core$Int64) { 0 }));
            if ($tmp140.value) {
            {
                panda$core$Int64 $tmp141 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size136, align138);
                panda$core$Int64 $tmp142 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result116, $tmp141);
                result116 = $tmp142;
            }
            }
            panda$core$Int64 $tmp143 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result116, size136);
            panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp143, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp144.value);
            panda$core$Int64 $tmp145 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result116, size136);
            result116 = $tmp145;
        }
        goto $l123;
        $l124:;
    }
    panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp146.value) {
    {
        panda$core$Int64 $tmp147 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result116, ((panda$core$Int64) { 1 }));
        result116 = $tmp147;
    }
    }
    return result116;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp148 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp149 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp148, ((panda$core$Int64) { 8 }));
    return $tmp149;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl153;
    panda$core$Int64 result157;
    panda$collections$Iterator* f$Iter158;
    org$pandalanguage$pandac$FieldDecl* f171;
    panda$core$Int64 size176;
    panda$core$Int64 align178;
    panda$core$Bit $tmp150 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    panda$core$Bit $tmp151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp150);
    if ($tmp151.value) {
    {
        panda$core$Int64 $tmp152 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
        return $tmp152;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp154 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl153 = $tmp154;
    PANDA_ASSERT(((panda$core$Bit) { cl153 != NULL }).value);
    panda$core$Bit $tmp156 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl153)->name, &$s155);
    if ($tmp156.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result157 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp159 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl153);
        ITable* $tmp160 = ((panda$collections$Iterable*) $tmp159)->$class->itable;
        while ($tmp160->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp160 = $tmp160->next;
        }
        $fn162 $tmp161 = $tmp160->methods[0];
        panda$collections$Iterator* $tmp163 = $tmp161(((panda$collections$Iterable*) $tmp159));
        f$Iter158 = $tmp163;
        $l164:;
        ITable* $tmp166 = f$Iter158->$class->itable;
        while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp166 = $tmp166->next;
        }
        $fn168 $tmp167 = $tmp166->methods[0];
        panda$core$Bit $tmp169 = $tmp167(f$Iter158);
        panda$core$Bit $tmp170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp169);
        if (!$tmp170.value) goto $l165;
        {
            ITable* $tmp172 = f$Iter158->$class->itable;
            while ($tmp172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp172 = $tmp172->next;
            }
            $fn174 $tmp173 = $tmp172->methods[1];
            panda$core$Object* $tmp175 = $tmp173(f$Iter158);
            f171 = ((org$pandalanguage$pandac$FieldDecl*) $tmp175);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f171);
            panda$core$Int64 $tmp177 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f171->type);
            size176 = $tmp177;
            panda$core$Int64 $tmp179 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result157, size176);
            align178 = $tmp179;
            panda$core$Bit $tmp180 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align178, ((panda$core$Int64) { 0 }));
            if ($tmp180.value) {
            {
                panda$core$Int64 $tmp181 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size176, align178);
                panda$core$Int64 $tmp182 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result157, $tmp181);
                result157 = $tmp182;
            }
            }
            panda$core$Int64 $tmp183 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result157, size176);
            panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp183, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp184.value);
            panda$core$Int64 $tmp185 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result157, size176);
            result157 = $tmp185;
        }
        goto $l164;
        $l165:;
    }
    panda$core$Bit $tmp187 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl153);
    bool $tmp186 = $tmp187.value;
    if (!$tmp186) goto $l188;
    panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    $tmp186 = $tmp189.value;
    $l188:;
    panda$core$Bit $tmp190 = { $tmp186 };
    if ($tmp190.value) {
    {
        panda$core$Int64 $tmp191 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result157, ((panda$core$Int64) { 1 }));
        result157 = $tmp191;
    }
    }
    return result157;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl192;
    panda$core$Int64 result198;
    panda$collections$Iterator* f$Iter201;
    org$pandalanguage$pandac$FieldDecl* f214;
    panda$core$Int64 size219;
    panda$core$Int64 align221;
    org$pandalanguage$pandac$ClassDecl* $tmp193 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl192 = $tmp193;
    bool $tmp194 = ((panda$core$Bit) { cl192 != NULL }).value;
    if (!$tmp194) goto $l195;
    panda$core$Bit $tmp196 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl192);
    $tmp194 = $tmp196.value;
    $l195:;
    panda$core$Bit $tmp197 = { $tmp194 };
    PANDA_ASSERT($tmp197.value);
    org$pandalanguage$pandac$Type* $tmp199 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp200 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp199);
    result198 = $tmp200;
    {
        panda$collections$ListView* $tmp202 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl192);
        ITable* $tmp203 = ((panda$collections$Iterable*) $tmp202)->$class->itable;
        while ($tmp203->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp203 = $tmp203->next;
        }
        $fn205 $tmp204 = $tmp203->methods[0];
        panda$collections$Iterator* $tmp206 = $tmp204(((panda$collections$Iterable*) $tmp202));
        f$Iter201 = $tmp206;
        $l207:;
        ITable* $tmp209 = f$Iter201->$class->itable;
        while ($tmp209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp209 = $tmp209->next;
        }
        $fn211 $tmp210 = $tmp209->methods[0];
        panda$core$Bit $tmp212 = $tmp210(f$Iter201);
        panda$core$Bit $tmp213 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp212);
        if (!$tmp213.value) goto $l208;
        {
            ITable* $tmp215 = f$Iter201->$class->itable;
            while ($tmp215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp215 = $tmp215->next;
            }
            $fn217 $tmp216 = $tmp215->methods[1];
            panda$core$Object* $tmp218 = $tmp216(f$Iter201);
            f214 = ((org$pandalanguage$pandac$FieldDecl*) $tmp218);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f214);
            panda$core$Int64 $tmp220 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f214->type);
            size219 = $tmp220;
            panda$core$Int64 $tmp222 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result198, size219);
            align221 = $tmp222;
            panda$core$Bit $tmp223 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align221, ((panda$core$Int64) { 0 }));
            if ($tmp223.value) {
            {
                panda$core$Int64 $tmp224 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size219, align221);
                panda$core$Int64 $tmp225 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result198, $tmp224);
                result198 = $tmp225;
            }
            }
            panda$core$Int64 $tmp226 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result198, size219);
            panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp226, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp227.value);
            panda$core$Int64 $tmp228 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result198, size219);
            result198 = $tmp228;
        }
        goto $l207;
        $l208:;
    }
    panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp229.value) {
    {
        panda$core$Int64 $tmp230 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result198, ((panda$core$Int64) { 1 }));
        result198 = $tmp230;
    }
    }
    return result198;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl232;
    panda$core$MutableString* code236;
    panda$core$String* separator244;
    panda$collections$Iterator* f$Iter246;
    org$pandalanguage$pandac$FieldDecl* f259;
    org$pandalanguage$pandac$ClassDecl* fCl266;
    panda$core$Bit $tmp231 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp231.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    org$pandalanguage$pandac$ClassDecl* $tmp233 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl232 = $tmp233;
    panda$core$Bit $tmp234 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(cl232->annotations);
    panda$core$Bit $tmp235 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp234);
    PANDA_ASSERT($tmp235.value);
    panda$core$MutableString* $tmp237 = (panda$core$MutableString*) malloc(40);
    $tmp237->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp237->refCount.value = 1;
    panda$core$String* $tmp240 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s239, $tmp240);
    panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, &$s242);
    panda$core$MutableString$init$panda$core$String($tmp237, $tmp243);
    code236 = $tmp237;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) cl232));
    PANDA_ASSERT(((panda$core$Bit) { cl232 != NULL }).value);
    separator244 = &$s245;
    {
        panda$collections$ListView* $tmp247 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl232);
        ITable* $tmp248 = ((panda$collections$Iterable*) $tmp247)->$class->itable;
        while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp248 = $tmp248->next;
        }
        $fn250 $tmp249 = $tmp248->methods[0];
        panda$collections$Iterator* $tmp251 = $tmp249(((panda$collections$Iterable*) $tmp247));
        f$Iter246 = $tmp251;
        $l252:;
        ITable* $tmp254 = f$Iter246->$class->itable;
        while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp254 = $tmp254->next;
        }
        $fn256 $tmp255 = $tmp254->methods[0];
        panda$core$Bit $tmp257 = $tmp255(f$Iter246);
        panda$core$Bit $tmp258 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp257);
        if (!$tmp258.value) goto $l253;
        {
            ITable* $tmp260 = f$Iter246->$class->itable;
            while ($tmp260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp260 = $tmp260->next;
            }
            $fn262 $tmp261 = $tmp260->methods[1];
            panda$core$Object* $tmp263 = $tmp261(f$Iter246);
            f259 = ((org$pandalanguage$pandac$FieldDecl*) $tmp263);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f259);
            panda$core$Bit $tmp264 = panda$core$Bit$$NOT$R$panda$core$Bit(f259->type->resolved);
            if ($tmp264.value) {
            {
                return;
            }
            }
            panda$core$Bit $tmp265 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f259->type);
            if ($tmp265.value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp267 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f259->type);
                fCl266 = $tmp267;
                panda$core$Bit $tmp268 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, fCl266);
                panda$core$Bit $tmp269 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp268);
                if ($tmp269.value) {
                {
                    panda$core$String* $tmp270 = panda$core$String$convert$R$panda$core$String(separator244);
                    panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp270, &$s271);
                    panda$core$MutableString$append$panda$core$String(code236, $tmp272);
                    separator244 = &$s273;
                    goto $l252;
                }
                }
            }
            }
            panda$core$String* $tmp274 = panda$core$String$convert$R$panda$core$String(separator244);
            panda$core$String* $tmp276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp274, &$s275);
            panda$core$String* $tmp277 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f259->type);
            panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp276, $tmp277);
            panda$core$String* $tmp280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp278, &$s279);
            panda$core$MutableString$append$panda$core$String(code236, $tmp280);
            separator244 = &$s281;
        }
        goto $l252;
        $l253:;
    }
    org$pandalanguage$pandac$Type* $tmp282 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp283 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp282);
    if ($tmp283.value) {
    {
        panda$core$MutableString$append$panda$core$String(code236, &$s284);
    }
    }
    panda$core$MutableString$append$panda$core$String(code236, &$s285);
    panda$core$String* $tmp286 = panda$core$MutableString$finish$R$panda$core$String(code236);
    (($fn287) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp286);
    panda$core$Bit $tmp288 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl232);
    if ($tmp288.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl232);
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$MutableString* code290;
    org$pandalanguage$pandac$ClassDecl* object297;
    panda$core$String* separator300;
    panda$collections$Iterator* f$Iter302;
    org$pandalanguage$pandac$FieldDecl* f315;
    panda$core$Bit $tmp289 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp289.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    panda$core$MutableString* $tmp291 = (panda$core$MutableString*) malloc(40);
    $tmp291->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp291->refCount.value = 1;
    panda$core$String* $tmp293 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp294 = panda$core$String$convert$R$panda$core$String($tmp293);
    panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp294, &$s295);
    panda$core$MutableString$init$panda$core$String($tmp291, $tmp296);
    code290 = $tmp291;
    org$pandalanguage$pandac$Type* $tmp298 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp299 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp298);
    object297 = $tmp299;
    PANDA_ASSERT(((panda$core$Bit) { object297 != NULL }).value);
    separator300 = &$s301;
    {
        panda$collections$ListView* $tmp303 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, object297);
        ITable* $tmp304 = ((panda$collections$Iterable*) $tmp303)->$class->itable;
        while ($tmp304->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp304 = $tmp304->next;
        }
        $fn306 $tmp305 = $tmp304->methods[0];
        panda$collections$Iterator* $tmp307 = $tmp305(((panda$collections$Iterable*) $tmp303));
        f$Iter302 = $tmp307;
        $l308:;
        ITable* $tmp310 = f$Iter302->$class->itable;
        while ($tmp310->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp310 = $tmp310->next;
        }
        $fn312 $tmp311 = $tmp310->methods[0];
        panda$core$Bit $tmp313 = $tmp311(f$Iter302);
        panda$core$Bit $tmp314 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp313);
        if (!$tmp314.value) goto $l309;
        {
            ITable* $tmp316 = f$Iter302->$class->itable;
            while ($tmp316->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp316 = $tmp316->next;
            }
            $fn318 $tmp317 = $tmp316->methods[1];
            panda$core$Object* $tmp319 = $tmp317(f$Iter302);
            f315 = ((org$pandalanguage$pandac$FieldDecl*) $tmp319);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f315);
            panda$core$String* $tmp320 = panda$core$String$convert$R$panda$core$String(separator300);
            panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp320, &$s321);
            panda$core$String* $tmp323 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f315->type);
            panda$core$String* $tmp324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp322, $tmp323);
            panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp324, &$s325);
            panda$core$MutableString$append$panda$core$String(code290, $tmp326);
            separator300 = &$s327;
        }
        goto $l308;
        $l309:;
    }
    panda$core$String* $tmp329 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s328, $tmp329);
    panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s331);
    panda$core$MutableString$append$panda$core$String(code290, $tmp332);
    panda$core$MutableString$append$panda$core$String(code290, &$s333);
    panda$core$String* $tmp334 = panda$core$MutableString$finish$R$panda$core$String(code290);
    (($fn335) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp334);
    panda$core$String* $tmp336 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp337 = panda$core$String$convert$R$panda$core$String($tmp336);
    panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp337, &$s338);
    panda$core$String* $tmp340 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp339, $tmp340);
    panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp341, &$s342);
    (($fn344) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp343);
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp346 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s345, $tmp346);
    return $tmp347;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* name356;
    org$pandalanguage$pandac$ClassDecl* cl362;
    org$pandalanguage$pandac$ClassDecl* cl368;
    org$pandalanguage$pandac$ClassDecl* cl381;
    panda$core$String* name384;
    org$pandalanguage$pandac$ClassDecl* cl390;
    panda$core$MutableString* result399;
    panda$core$Range$LTpanda$core$Int64$GT $tmp407;
    switch (p_t->typeKind.value) {
        case 14:
        {
            return &$s348;
        }
        break;
        case 12:
        case 13:
        {
            panda$core$Int64 $tmp350 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp351 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp350, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s349, ((panda$core$Object*) wrap_panda$core$Int64($tmp351)));
            panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp352, &$s353);
            return $tmp354;
        }
        break;
        case 19:
        {
            return &$s355;
        }
        break;
        case 10:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, p_t);
            panda$core$String* $tmp358 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s357, $tmp358);
            panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, &$s360);
            name356 = $tmp361;
            org$pandalanguage$pandac$ClassDecl* $tmp363 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl362 = $tmp363;
            PANDA_ASSERT(((panda$core$Bit) { cl362 != NULL }).value);
            panda$core$Bit $tmp364 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl362);
            panda$core$Bit $tmp365 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp364);
            if ($tmp365.value) {
            {
                panda$core$String* $tmp367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name356, &$s366);
                return $tmp367;
            }
            }
            return name356;
        }
        break;
        case 11:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp369 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl368 = $tmp369;
            PANDA_ASSERT(((panda$core$Bit) { cl368 != NULL }).value);
            panda$core$Bit $tmp370 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl368);
            if ($tmp370.value) {
            {
                panda$core$String* $tmp371 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                return $tmp371;
            }
            }
            panda$core$Object* $tmp372 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp373 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp372));
            return $tmp373;
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp374 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp376 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp374))->name, &$s375);
            if ($tmp376.value) {
            {
                panda$core$Object* $tmp377 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp378 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp377));
                panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp378, &$s379);
                return $tmp380;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp382 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl381 = $tmp382;
            panda$core$Bit $tmp383 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl381);
            if ($tmp383.value) {
            {
                panda$core$String* $tmp386 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s385, $tmp386);
                panda$core$String* $tmp389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp387, &$s388);
                name384 = $tmp389;
                org$pandalanguage$pandac$ClassDecl* $tmp391 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl390 = $tmp391;
                PANDA_ASSERT(((panda$core$Bit) { cl390 != NULL }).value);
                panda$core$Bit $tmp392 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl390);
                panda$core$Bit $tmp393 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp392);
                if ($tmp393.value) {
                {
                    panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name384, &$s394);
                    return $tmp395;
                }
                }
                return name384;
            }
            }
            panda$core$Object* $tmp396 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp397 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp396));
            return $tmp397;
        }
        break;
        case 22:
        {
            panda$core$String* $tmp398 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp398;
        }
        break;
        case 24:
        case 25:
        {
            panda$core$MutableString* $tmp400 = (panda$core$MutableString*) malloc(40);
            $tmp400->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp400->refCount.value = 1;
            panda$core$Int64 $tmp402 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp403 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp402, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp404 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp403);
            panda$core$String* $tmp405 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp404));
            panda$core$MutableString$init$panda$core$String($tmp400, $tmp405);
            result399 = $tmp400;
            panda$core$MutableString$append$panda$core$String(result399, &$s406);
            panda$core$Int64 $tmp408 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp409 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp408, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp407, ((panda$core$Int64) { 0 }), $tmp409, ((panda$core$Bit) { false }));
            int64_t $tmp411 = $tmp407.min.value;
            panda$core$Int64 i410 = { $tmp411 };
            int64_t $tmp413 = $tmp407.max.value;
            bool $tmp414 = $tmp407.inclusive.value;
            if ($tmp414) goto $l421; else goto $l422;
            $l421:;
            if ($tmp411 <= $tmp413) goto $l415; else goto $l417;
            $l422:;
            if ($tmp411 < $tmp413) goto $l415; else goto $l417;
            $l415:;
            {
                panda$core$Bit $tmp423 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i410, ((panda$core$Int64) { 0 }));
                if ($tmp423.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result399, &$s424);
                }
                }
                panda$core$Object* $tmp425 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i410);
                panda$core$String* $tmp426 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp425));
                panda$core$MutableString$append$panda$core$String(result399, $tmp426);
            }
            $l418:;
            int64_t $tmp428 = $tmp413 - i410.value;
            if ($tmp414) goto $l429; else goto $l430;
            $l429:;
            if ($tmp428 >= 1) goto $l427; else goto $l417;
            $l430:;
            if ($tmp428 > 1) goto $l427; else goto $l417;
            $l427:;
            i410.value += 1;
            goto $l415;
            $l417:;
            panda$core$MutableString$append$panda$core$String(result399, &$s433);
            panda$core$String* $tmp434 = panda$core$MutableString$finish$R$panda$core$String(result399);
            return $tmp434;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp435.value) {
    {
        panda$core$Object* $tmp436 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp437 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp436));
        return $tmp437;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, p_t);
    panda$core$String* $tmp439 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s438, $tmp439);
    panda$core$String* $tmp442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp440, &$s441);
    return $tmp442;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp443 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s444);
    return $tmp445;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType446;
    panda$core$MutableString* result448;
    panda$core$Range$LTpanda$core$Int64$GT $tmp465;
    org$pandalanguage$pandac$Type* $tmp447 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType446 = $tmp447;
    panda$core$MutableString* $tmp449 = (panda$core$MutableString*) malloc(40);
    $tmp449->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp449->refCount.value = 1;
    panda$core$MutableString$init($tmp449);
    result448 = $tmp449;
    panda$core$Int64 $tmp451 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType446->subtypes);
    panda$core$Int64 $tmp452 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp451, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp453 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType446->subtypes, $tmp452);
    panda$core$String* $tmp454 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp453));
    panda$core$MutableString$append$panda$core$String(result448, $tmp454);
    panda$core$MutableString$append$panda$core$String(result448, &$s455);
    panda$core$Bit $tmp456 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp456.value);
    panda$core$String* $tmp458 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s457, $tmp458);
    panda$core$String* $tmp461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp459, &$s460);
    panda$core$MutableString$append$panda$core$String(result448, $tmp461);
    panda$core$Bit $tmp462 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp462.value) {
    {
        panda$core$MutableString$append$panda$core$String(result448, &$s463);
    }
    }
    panda$core$MutableString$append$panda$core$String(result448, &$s464);
    panda$core$Int64 $tmp466 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType446->subtypes);
    panda$core$Int64 $tmp467 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp466, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp465, ((panda$core$Int64) { 0 }), $tmp467, ((panda$core$Bit) { false }));
    int64_t $tmp469 = $tmp465.min.value;
    panda$core$Int64 i468 = { $tmp469 };
    int64_t $tmp471 = $tmp465.max.value;
    bool $tmp472 = $tmp465.inclusive.value;
    if ($tmp472) goto $l479; else goto $l480;
    $l479:;
    if ($tmp469 <= $tmp471) goto $l473; else goto $l475;
    $l480:;
    if ($tmp469 < $tmp471) goto $l473; else goto $l475;
    $l473:;
    {
        panda$core$MutableString$append$panda$core$String(result448, &$s481);
        panda$core$Object* $tmp482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType446->subtypes, i468);
        panda$core$String* $tmp483 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp482));
        panda$core$MutableString$append$panda$core$String(result448, $tmp483);
    }
    $l476:;
    int64_t $tmp485 = $tmp471 - i468.value;
    if ($tmp472) goto $l486; else goto $l487;
    $l486:;
    if ($tmp485 >= 1) goto $l484; else goto $l475;
    $l487:;
    if ($tmp485 > 1) goto $l484; else goto $l475;
    $l484:;
    i468.value += 1;
    goto $l473;
    $l475:;
    panda$core$MutableString$append$panda$core$String(result448, &$s490);
    panda$core$String* $tmp491 = panda$core$MutableString$finish$R$panda$core$String(result448);
    return $tmp491;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp492.value);
    panda$core$Object* $tmp493 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp493));
    panda$core$Object* $tmp494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp495 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp494));
    panda$core$String* $tmp496 = panda$core$String$convert$R$panda$core$String($tmp495);
    panda$core$String* $tmp498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp496, &$s497);
    return $tmp498;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces499;
    panda$core$String* previous502;
    panda$collections$Iterator* intfType$Iter504;
    org$pandalanguage$pandac$Type* intfType516;
    org$pandalanguage$pandac$ClassDecl* intf521;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC523;
    panda$collections$ListView* methods525;
    panda$core$String* name527;
    panda$core$String* t537;
    panda$core$MutableString* result551;
    panda$core$String* separator589;
    panda$collections$Iterator* m$Iter591;
    org$pandalanguage$pandac$MethodDecl* m603;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry611;
    org$pandalanguage$pandac$Type* $tmp500 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp501 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp500);
    interfaces499 = $tmp501;
    previous502 = &$s503;
    {
        ITable* $tmp505 = ((panda$collections$Iterable*) interfaces499)->$class->itable;
        while ($tmp505->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp505 = $tmp505->next;
        }
        $fn507 $tmp506 = $tmp505->methods[0];
        panda$collections$Iterator* $tmp508 = $tmp506(((panda$collections$Iterable*) interfaces499));
        intfType$Iter504 = $tmp508;
        $l509:;
        ITable* $tmp511 = intfType$Iter504->$class->itable;
        while ($tmp511->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp511 = $tmp511->next;
        }
        $fn513 $tmp512 = $tmp511->methods[0];
        panda$core$Bit $tmp514 = $tmp512(intfType$Iter504);
        panda$core$Bit $tmp515 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp514);
        if (!$tmp515.value) goto $l510;
        {
            ITable* $tmp517 = intfType$Iter504->$class->itable;
            while ($tmp517->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp517 = $tmp517->next;
            }
            $fn519 $tmp518 = $tmp517->methods[1];
            panda$core$Object* $tmp520 = $tmp518(intfType$Iter504);
            intfType516 = ((org$pandalanguage$pandac$Type*) $tmp520);
            org$pandalanguage$pandac$ClassDecl* $tmp522 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType516);
            intf521 = $tmp522;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp524 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf521);
            intfCC523 = $tmp524;
            panda$collections$ListView* $tmp526 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType516);
            methods525 = $tmp526;
            panda$core$String* $tmp529 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s528, $tmp529);
            panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp530, &$s531);
            panda$core$String* $tmp533 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf521)->name);
            panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp532, $tmp533);
            panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, &$s535);
            name527 = $tmp536;
            org$pandalanguage$pandac$Type* $tmp539 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp540 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp539);
            panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s538, $tmp540);
            panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, &$s542);
            ITable* $tmp544 = ((panda$collections$CollectionView*) methods525)->$class->itable;
            while ($tmp544->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp544 = $tmp544->next;
            }
            $fn546 $tmp545 = $tmp544->methods[0];
            panda$core$Int64 $tmp547 = $tmp545(((panda$collections$CollectionView*) methods525));
            panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp543, ((panda$core$Object*) wrap_panda$core$Int64($tmp547)));
            panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s549);
            t537 = $tmp550;
            panda$core$MutableString* $tmp552 = (panda$core$MutableString*) malloc(40);
            $tmp552->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp552->refCount.value = 1;
            panda$core$String* $tmp554 = panda$core$String$convert$R$panda$core$String(name527);
            panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp554, &$s555);
            panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp556, t537);
            panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp557, &$s558);
            org$pandalanguage$pandac$Type* $tmp560 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp561 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp560);
            panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp559, $tmp561);
            panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp562, &$s563);
            panda$core$String* $tmp566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s565, intfCC523->type);
            panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp566, &$s567);
            panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, intfCC523->name);
            panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, &$s570);
            org$pandalanguage$pandac$Type* $tmp572 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp573 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp572);
            panda$core$String* $tmp574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp571, $tmp573);
            panda$core$String* $tmp576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp574, &$s575);
            panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp564, $tmp576);
            panda$core$String* $tmp578 = panda$core$String$convert$R$panda$core$String(previous502);
            panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, &$s579);
            ITable* $tmp581 = ((panda$collections$CollectionView*) methods525)->$class->itable;
            while ($tmp581->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp581 = $tmp581->next;
            }
            $fn583 $tmp582 = $tmp581->methods[0];
            panda$core$Int64 $tmp584 = $tmp582(((panda$collections$CollectionView*) methods525));
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp580, ((panda$core$Object*) wrap_panda$core$Int64($tmp584)));
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, &$s586);
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, $tmp587);
            panda$core$MutableString$init$panda$core$String($tmp552, $tmp588);
            result551 = $tmp552;
            separator589 = &$s590;
            {
                ITable* $tmp592 = ((panda$collections$Iterable*) methods525)->$class->itable;
                while ($tmp592->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp592 = $tmp592->next;
                }
                $fn594 $tmp593 = $tmp592->methods[0];
                panda$collections$Iterator* $tmp595 = $tmp593(((panda$collections$Iterable*) methods525));
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
                    panda$core$MutableString$append$panda$core$String(result551, separator589);
                    separator589 = &$s608;
                    panda$core$Bit $tmp609 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m603->annotations);
                    if ($tmp609.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result551, &$s610);
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
                        panda$core$MutableString$append$panda$core$String(result551, $tmp619);
                    }
                    }
                }
                goto $l596;
                $l597:;
            }
            panda$core$MutableString$append$panda$core$String(result551, &$s620);
            panda$core$String* $tmp621 = panda$core$MutableString$finish$R$panda$core$String(result551);
            (($fn622) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp621);
            panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s623, t537);
            panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s625);
            panda$core$String* $tmp627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp626, name527);
            panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp627, &$s628);
            previous502 = $tmp629;
        }
        goto $l509;
        $l510:;
    }
    return previous502;
}
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer630;
    panda$io$IndentedOutputStream* out633;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* found636;
    panda$core$Int64 oldVarCount644;
    org$pandalanguage$pandac$Type* effectiveReturnType645;
    panda$core$String* resultName649;
    panda$core$MutableString* resultType653;
    panda$core$String* self_t669;
    panda$core$Range$LTpanda$core$Int64$GT $tmp676;
    panda$core$String* pType691;
    panda$collections$Array* casts712;
    panda$core$Range$LTpanda$core$Int64$GT $tmp715;
    panda$core$String* p730;
    panda$core$String* returnValue747;
    panda$core$Range$LTpanda$core$Int64$GT $tmp774;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* result822;
    panda$io$MemoryOutputStream* $tmp631 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp631->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp631->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp631);
    outBuffer630 = $tmp631;
    panda$io$IndentedOutputStream* $tmp634 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp634->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp634->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp634, ((panda$io$OutputStream*) outBuffer630));
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
    panda$core$MutableString* $tmp654 = (panda$core$MutableString*) malloc(40);
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
    panda$core$MutableString$append$panda$core$String(resultType653, &$s675);
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
            panda$core$String* $tmp740 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p730, ((org$pandalanguage$pandac$Type*) $tmp738), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp739)->type, out633);
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
        panda$core$String* $tmp813 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, returnValue747, p_raw->returnType, effectiveReturnType645, out633);
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
    panda$core$String* $tmp826 = panda$io$MemoryOutputStream$finish$R$panda$core$String(outBuffer630);
    (($fn827) p_rawOut->$class->vtable[16])(p_rawOut, $tmp826);
    return result822;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 oldVarCount829;
    panda$core$String* result830;
    panda$core$String* selfType835;
    org$pandalanguage$pandac$Type* actualMethodType857;
    org$pandalanguage$pandac$Type* inheritedMethodType859;
    panda$core$Range$LTpanda$core$Int64$GT $tmp861;
    panda$collections$Array* parameters901;
    panda$core$Range$LTpanda$core$Int64$GT $tmp904;
    panda$collections$Array* children931;
    org$pandalanguage$pandac$Position $tmp936;
    panda$core$String* unwrapped938;
    org$pandalanguage$pandac$Position $tmp941;
    panda$core$String* returnValue944;
    panda$core$Range$LTpanda$core$Int64$GT $tmp977;
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
    (($fn842) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s841);
    panda$core$Bit $tmp843 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp843.value) {
    {
        (($fn845) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s844);
    }
    }
    panda$core$String* $tmp846 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp847 = panda$core$String$convert$R$panda$core$String($tmp846);
    panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp847, &$s848);
    panda$core$String* $tmp850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp849, result830);
    panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp850, &$s851);
    panda$core$String* $tmp853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp852, selfType835);
    panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp853, &$s854);
    (($fn856) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp855);
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
        (($fn886) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp885);
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
    (($fn894) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s893);
    panda$core$Int64 $tmp895 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp895;
    panda$core$String* $tmp897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s896, selfType835);
    panda$core$String* $tmp899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp897, &$s898);
    (($fn900) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp899);
    panda$collections$Array* $tmp902 = (panda$collections$Array*) malloc(40);
    $tmp902->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp902->refCount.value = 1;
    panda$collections$Array$init($tmp902);
    parameters901 = $tmp902;
    panda$core$Int64 $tmp905 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp904, ((panda$core$Int64) { 0 }), $tmp905, ((panda$core$Bit) { false }));
    int64_t $tmp907 = $tmp904.min.value;
    panda$core$Int64 i906 = { $tmp907 };
    int64_t $tmp909 = $tmp904.max.value;
    bool $tmp910 = $tmp904.inclusive.value;
    if ($tmp910) goto $l917; else goto $l918;
    $l917:;
    if ($tmp907 <= $tmp909) goto $l911; else goto $l913;
    $l918:;
    if ($tmp907 < $tmp909) goto $l911; else goto $l913;
    $l911:;
    {
        panda$core$Object* $tmp920 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i906);
        panda$core$String* $tmp921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s919, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp920)->name);
        panda$core$Object* $tmp922 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType859->subtypes, i906);
        panda$core$Object* $tmp923 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType857->subtypes, i906);
        panda$core$String* $tmp924 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp921, ((org$pandalanguage$pandac$Type*) $tmp922), ((org$pandalanguage$pandac$Type*) $tmp923), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters901, ((panda$core$Object*) $tmp924));
    }
    $l914:;
    int64_t $tmp926 = $tmp909 - i906.value;
    if ($tmp910) goto $l927; else goto $l928;
    $l927:;
    if ($tmp926 >= 1) goto $l925; else goto $l913;
    $l928:;
    if ($tmp926 > 1) goto $l925; else goto $l913;
    $l925:;
    i906.value += 1;
    goto $l911;
    $l913:;
    panda$collections$Array* $tmp932 = (panda$collections$Array*) malloc(40);
    $tmp932->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp932->refCount.value = 1;
    panda$collections$Array$init($tmp932);
    children931 = $tmp932;
    org$pandalanguage$pandac$IRNode* $tmp934 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp934->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp934->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp936);
    org$pandalanguage$pandac$Type* $tmp937 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp934, ((panda$core$Int64) { 1025 }), $tmp936, $tmp937);
    panda$collections$Array$add$panda$collections$Array$T(children931, ((panda$core$Object*) $tmp934));
    org$pandalanguage$pandac$IRNode* $tmp939 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp939->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp939->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp941);
    org$pandalanguage$pandac$Type* $tmp942 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp939, ((panda$core$Int64) { 1009 }), $tmp941, $tmp942, ((panda$collections$ListView*) children931));
    panda$core$String* $tmp943 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp939, p_out);
    unwrapped938 = $tmp943;
    org$pandalanguage$pandac$Type* $tmp945 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp946 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp945);
    if ($tmp946.value) {
    {
        panda$core$String* $tmp947 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue944 = $tmp947;
        panda$core$String* $tmp948 = panda$core$String$convert$R$panda$core$String(returnValue944);
        panda$core$String* $tmp950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp948, &$s949);
        (($fn951) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp950);
        panda$core$String* $tmp952 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp953 = panda$core$String$convert$R$panda$core$String($tmp952);
        panda$core$String* $tmp955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp953, &$s954);
        panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp955, returnValue944);
        panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp956, &$s957);
        returnValue944 = $tmp958;
    }
    }
    else {
    {
        returnValue944 = &$s959;
    }
    }
    panda$core$String* $tmp961 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s960, $tmp961);
    panda$core$String* $tmp964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp962, &$s963);
    panda$core$String* $tmp965 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp964, $tmp965);
    panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp966, &$s967);
    panda$core$String* $tmp969 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp968, $tmp969);
    panda$core$String* $tmp972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp970, &$s971);
    panda$core$String* $tmp973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp972, unwrapped938);
    panda$core$String* $tmp975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp973, &$s974);
    (($fn976) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp975);
    panda$core$Int64 $tmp978 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp977, ((panda$core$Int64) { 0 }), $tmp978, ((panda$core$Bit) { false }));
    int64_t $tmp980 = $tmp977.min.value;
    panda$core$Int64 i979 = { $tmp980 };
    int64_t $tmp982 = $tmp977.max.value;
    bool $tmp983 = $tmp977.inclusive.value;
    if ($tmp983) goto $l990; else goto $l991;
    $l990:;
    if ($tmp980 <= $tmp982) goto $l984; else goto $l986;
    $l991:;
    if ($tmp980 < $tmp982) goto $l984; else goto $l986;
    $l984:;
    {
        panda$core$Object* $tmp993 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType857->subtypes, i979);
        panda$core$String* $tmp994 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp993));
        panda$core$String* $tmp995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s992, $tmp994);
        panda$core$String* $tmp997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp995, &$s996);
        panda$core$Object* $tmp998 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters901, i979);
        panda$core$String* $tmp999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp997, ((panda$core$String*) $tmp998));
        panda$core$String* $tmp1001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp999, &$s1000);
        (($fn1002) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1001);
    }
    $l987:;
    int64_t $tmp1004 = $tmp982 - i979.value;
    if ($tmp983) goto $l1005; else goto $l1006;
    $l1005:;
    if ($tmp1004 >= 1) goto $l1003; else goto $l986;
    $l1006:;
    if ($tmp1004 > 1) goto $l1003; else goto $l986;
    $l1003:;
    i979.value += 1;
    goto $l984;
    $l986:;
    (($fn1010) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1009);
    panda$core$String* $tmp1012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1011, returnValue944);
    panda$core$String* $tmp1014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1012, &$s1013);
    (($fn1015) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1014);
    panda$core$Int64 $tmp1016 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1016;
    (($fn1018) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1017);
    self->varCount = oldVarCount829;
    return result830;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1019;
    panda$core$String* previous1022;
    panda$collections$Iterator* intfType$Iter1024;
    org$pandalanguage$pandac$Type* intfType1036;
    org$pandalanguage$pandac$ClassDecl* intf1041;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1043;
    panda$collections$ListView* methods1045;
    panda$core$String* name1047;
    panda$core$String* t1057;
    panda$core$MutableString* result1071;
    panda$core$String* separator1109;
    panda$collections$Iterator* m$Iter1111;
    org$pandalanguage$pandac$MethodDecl* m1123;
    panda$core$String* shim1131;
    org$pandalanguage$pandac$Type* $tmp1020 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp1021 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp1020);
    interfaces1019 = $tmp1021;
    previous1022 = &$s1023;
    {
        ITable* $tmp1025 = ((panda$collections$Iterable*) interfaces1019)->$class->itable;
        while ($tmp1025->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1025 = $tmp1025->next;
        }
        $fn1027 $tmp1026 = $tmp1025->methods[0];
        panda$collections$Iterator* $tmp1028 = $tmp1026(((panda$collections$Iterable*) interfaces1019));
        intfType$Iter1024 = $tmp1028;
        $l1029:;
        ITable* $tmp1031 = intfType$Iter1024->$class->itable;
        while ($tmp1031->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1031 = $tmp1031->next;
        }
        $fn1033 $tmp1032 = $tmp1031->methods[0];
        panda$core$Bit $tmp1034 = $tmp1032(intfType$Iter1024);
        panda$core$Bit $tmp1035 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1034);
        if (!$tmp1035.value) goto $l1030;
        {
            ITable* $tmp1037 = intfType$Iter1024->$class->itable;
            while ($tmp1037->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1037 = $tmp1037->next;
            }
            $fn1039 $tmp1038 = $tmp1037->methods[1];
            panda$core$Object* $tmp1040 = $tmp1038(intfType$Iter1024);
            intfType1036 = ((org$pandalanguage$pandac$Type*) $tmp1040);
            org$pandalanguage$pandac$ClassDecl* $tmp1042 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType1036);
            intf1041 = $tmp1042;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1044 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf1041);
            intfCC1043 = $tmp1044;
            panda$collections$ListView* $tmp1046 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType1036);
            methods1045 = $tmp1046;
            panda$core$String* $tmp1049 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1048, $tmp1049);
            panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, &$s1051);
            panda$core$String* $tmp1053 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf1041)->name);
            panda$core$String* $tmp1054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1052, $tmp1053);
            panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1054, &$s1055);
            name1047 = $tmp1056;
            org$pandalanguage$pandac$Type* $tmp1059 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1060 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1059);
            panda$core$String* $tmp1061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1058, $tmp1060);
            panda$core$String* $tmp1063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1061, &$s1062);
            ITable* $tmp1064 = ((panda$collections$CollectionView*) methods1045)->$class->itable;
            while ($tmp1064->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1064 = $tmp1064->next;
            }
            $fn1066 $tmp1065 = $tmp1064->methods[0];
            panda$core$Int64 $tmp1067 = $tmp1065(((panda$collections$CollectionView*) methods1045));
            panda$core$String* $tmp1068 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1063, ((panda$core$Object*) wrap_panda$core$Int64($tmp1067)));
            panda$core$String* $tmp1070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1068, &$s1069);
            t1057 = $tmp1070;
            panda$core$MutableString* $tmp1072 = (panda$core$MutableString*) malloc(40);
            $tmp1072->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1072->refCount.value = 1;
            panda$core$String* $tmp1074 = panda$core$String$convert$R$panda$core$String(name1047);
            panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1074, &$s1075);
            panda$core$String* $tmp1077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1076, t1057);
            panda$core$String* $tmp1079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1077, &$s1078);
            org$pandalanguage$pandac$Type* $tmp1080 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1081 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1080);
            panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1079, $tmp1081);
            panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1082, &$s1083);
            panda$core$String* $tmp1086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1085, intfCC1043->type);
            panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1086, &$s1087);
            panda$core$String* $tmp1089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1088, intfCC1043->name);
            panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1089, &$s1090);
            org$pandalanguage$pandac$Type* $tmp1092 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1093 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1092);
            panda$core$String* $tmp1094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, $tmp1093);
            panda$core$String* $tmp1096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1094, &$s1095);
            panda$core$String* $tmp1097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1084, $tmp1096);
            panda$core$String* $tmp1098 = panda$core$String$convert$R$panda$core$String(previous1022);
            panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, &$s1099);
            ITable* $tmp1101 = ((panda$collections$CollectionView*) methods1045)->$class->itable;
            while ($tmp1101->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1101 = $tmp1101->next;
            }
            $fn1103 $tmp1102 = $tmp1101->methods[0];
            panda$core$Int64 $tmp1104 = $tmp1102(((panda$collections$CollectionView*) methods1045));
            panda$core$String* $tmp1105 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1100, ((panda$core$Object*) wrap_panda$core$Int64($tmp1104)));
            panda$core$String* $tmp1107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1105, &$s1106);
            panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1097, $tmp1107);
            panda$core$MutableString$init$panda$core$String($tmp1072, $tmp1108);
            result1071 = $tmp1072;
            separator1109 = &$s1110;
            {
                ITable* $tmp1112 = ((panda$collections$Iterable*) methods1045)->$class->itable;
                while ($tmp1112->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1112 = $tmp1112->next;
                }
                $fn1114 $tmp1113 = $tmp1112->methods[0];
                panda$collections$Iterator* $tmp1115 = $tmp1113(((panda$collections$Iterable*) methods1045));
                m$Iter1111 = $tmp1115;
                $l1116:;
                ITable* $tmp1118 = m$Iter1111->$class->itable;
                while ($tmp1118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1118 = $tmp1118->next;
                }
                $fn1120 $tmp1119 = $tmp1118->methods[0];
                panda$core$Bit $tmp1121 = $tmp1119(m$Iter1111);
                panda$core$Bit $tmp1122 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1121);
                if (!$tmp1122.value) goto $l1117;
                {
                    ITable* $tmp1124 = m$Iter1111->$class->itable;
                    while ($tmp1124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1124 = $tmp1124->next;
                    }
                    $fn1126 $tmp1125 = $tmp1124->methods[1];
                    panda$core$Object* $tmp1127 = $tmp1125(m$Iter1111);
                    m1123 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1127);
                    panda$core$MutableString$append$panda$core$String(result1071, separator1109);
                    separator1109 = &$s1128;
                    panda$core$Bit $tmp1129 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1123->annotations);
                    if ($tmp1129.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1071, &$s1130);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1132 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1123, self->wrapperShims);
                        shim1131 = $tmp1132;
                        panda$core$String* $tmp1134 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1123);
                        panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1133, $tmp1134);
                        panda$core$String* $tmp1137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1135, &$s1136);
                        panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1137, shim1131);
                        panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1138, &$s1139);
                        panda$core$MutableString$append$panda$core$String(result1071, $tmp1140);
                    }
                    }
                }
                goto $l1116;
                $l1117:;
            }
            panda$core$MutableString$append$panda$core$String(result1071, &$s1141);
            panda$core$String* $tmp1142 = panda$core$MutableString$finish$R$panda$core$String(result1071);
            (($fn1143) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1142);
            panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1144, t1057);
            panda$core$String* $tmp1147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1145, &$s1146);
            panda$core$String* $tmp1148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1147, name1047);
            panda$core$String* $tmp1150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1148, &$s1149);
            previous1022 = $tmp1150;
        }
        goto $l1029;
        $l1030:;
    }
    return previous1022;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1153;
    panda$core$Bit $tmp1151 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp1152 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1151);
    if ($tmp1152.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1156 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1155 = $tmp1156.value;
    if (!$tmp1155) goto $l1157;
    panda$core$Bit $tmp1158 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp1155 = $tmp1158.value;
    $l1157:;
    panda$core$Bit $tmp1159 = { $tmp1155 };
    bool $tmp1154 = $tmp1159.value;
    if (!$tmp1154) goto $l1160;
    org$pandalanguage$pandac$ClassDecl* $tmp1161 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1162 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp1161);
    $tmp1154 = $tmp1162.value;
    $l1160:;
    panda$core$Bit $tmp1163 = { $tmp1154 };
    result1153 = $tmp1163;
    panda$core$Bit $tmp1165 = panda$core$Bit$$NOT$R$panda$core$Bit(result1153);
    bool $tmp1164 = $tmp1165.value;
    if ($tmp1164) goto $l1166;
    panda$core$Bit $tmp1168 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1169 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1168);
    bool $tmp1167 = $tmp1169.value;
    if (!$tmp1167) goto $l1170;
    panda$core$Bit $tmp1172 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1171 = $tmp1172.value;
    if ($tmp1171) goto $l1173;
    panda$core$Bit $tmp1174 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp1171 = $tmp1174.value;
    $l1173:;
    panda$core$Bit $tmp1175 = { $tmp1171 };
    $tmp1167 = $tmp1175.value;
    $l1170:;
    panda$core$Bit $tmp1176 = { $tmp1167 };
    $tmp1164 = $tmp1176.value;
    $l1166:;
    panda$core$Bit $tmp1177 = { $tmp1164 };
    PANDA_ASSERT($tmp1177.value);
    return result1153;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1178;
    org$pandalanguage$pandac$Type* declared1179;
    org$pandalanguage$pandac$Type* inherited1182;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1185;
    panda$core$MutableString* resultType1190;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1199;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1180 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1181 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp1180);
    declared1179 = $tmp1181;
    org$pandalanguage$pandac$Type* $tmp1183 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited1182 = $tmp1183;
    panda$core$Bit $tmp1184 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared1179, inherited1182);
    if ($tmp1184.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1186 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1187 = org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(self, p_m, $tmp1186, ((panda$io$OutputStream*) self->shims));
        shim1185 = $tmp1187;
        resultName1178 = shim1185->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1188 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        resultName1178 = $tmp1188;
    }
    }
    panda$core$Bit $tmp1189 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp1189.value) {
    {
        panda$core$MutableString* $tmp1191 = (panda$core$MutableString*) malloc(40);
        $tmp1191->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1191->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1191, &$s1193);
        resultType1190 = $tmp1191;
        panda$core$Int64 $tmp1194 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1182->subtypes);
        panda$core$Int64 $tmp1195 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1194, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1196 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1182->subtypes, $tmp1195);
        panda$core$String* $tmp1197 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1196));
        panda$core$MutableString$append$panda$core$String(resultType1190, $tmp1197);
        panda$core$MutableString$append$panda$core$String(resultType1190, &$s1198);
        panda$core$Int64 $tmp1200 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1182->subtypes);
        panda$core$Int64 $tmp1201 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1200, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1199, ((panda$core$Int64) { 0 }), $tmp1201, ((panda$core$Bit) { false }));
        int64_t $tmp1203 = $tmp1199.min.value;
        panda$core$Int64 i1202 = { $tmp1203 };
        int64_t $tmp1205 = $tmp1199.max.value;
        bool $tmp1206 = $tmp1199.inclusive.value;
        if ($tmp1206) goto $l1213; else goto $l1214;
        $l1213:;
        if ($tmp1203 <= $tmp1205) goto $l1207; else goto $l1209;
        $l1214:;
        if ($tmp1203 < $tmp1205) goto $l1207; else goto $l1209;
        $l1207:;
        {
            panda$core$MutableString$append$panda$core$String(resultType1190, &$s1215);
            panda$core$Object* $tmp1216 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1182->subtypes, i1202);
            panda$core$String* $tmp1217 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1216));
            panda$core$MutableString$append$panda$core$String(resultType1190, $tmp1217);
        }
        $l1210:;
        int64_t $tmp1219 = $tmp1205 - i1202.value;
        if ($tmp1206) goto $l1220; else goto $l1221;
        $l1220:;
        if ($tmp1219 >= 1) goto $l1218; else goto $l1209;
        $l1221:;
        if ($tmp1219 > 1) goto $l1218; else goto $l1209;
        $l1218:;
        i1202.value += 1;
        goto $l1207;
        $l1209:;
        panda$core$MutableString$append$panda$core$String(resultType1190, &$s1224);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1225 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1225->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1225->refCount.value = 1;
        panda$core$String* $tmp1227 = panda$core$MutableString$finish$R$panda$core$String(resultType1190);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1225, ((panda$core$Object*) resultName1178), ((panda$core$Object*) $tmp1227));
        return $tmp1225;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1228 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1228->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1228->refCount.value = 1;
    panda$core$String* $tmp1230 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, inherited1182);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1228, ((panda$core$Object*) resultName1178), ((panda$core$Object*) $tmp1230));
    return $tmp1228;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1233;
    panda$core$String* type1235;
    panda$collections$ListView* vtable1253;
    panda$core$String* superPtr1277;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1278;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1289;
    panda$core$MutableString* code1293;
    panda$core$String* separator1334;
    panda$collections$Iterator* m$Iter1336;
    org$pandalanguage$pandac$MethodDecl* m1348;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1355;
    panda$core$Bit $tmp1231 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp1232 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1231);
    PANDA_ASSERT($tmp1232.value);
    panda$core$Object* $tmp1234 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result1233 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1234);
    if (((panda$core$Bit) { result1233 == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1236 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1236->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1236->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1239 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp1240 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1239)->name);
            panda$core$String* $tmp1241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1238, $tmp1240);
            panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1241, &$s1242);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1236, $tmp1243, &$s1244);
            result1233 = $tmp1236;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1233));
            panda$core$String* $tmp1245 = panda$core$String$convert$R$panda$core$String(result1233->name);
            panda$core$String* $tmp1247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1245, &$s1246);
            panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1247, result1233->type);
            panda$core$String* $tmp1250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1248, &$s1249);
            (($fn1251) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1250);
            panda$core$Object* $tmp1252 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1252);
        }
        }
        panda$collections$ListView* $tmp1254 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable1253 = $tmp1254;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1255 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1255->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1255->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1258 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp1259 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1258)->name);
        panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1257, $tmp1259);
        panda$core$String* $tmp1262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1260, &$s1261);
        panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1263, &$s1264);
        panda$core$String* $tmp1267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1265, &$s1266);
        ITable* $tmp1269 = ((panda$collections$CollectionView*) vtable1253)->$class->itable;
        while ($tmp1269->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1269 = $tmp1269->next;
        }
        $fn1271 $tmp1270 = $tmp1269->methods[0];
        panda$core$Int64 $tmp1272 = $tmp1270(((panda$collections$CollectionView*) vtable1253));
        panda$core$String* $tmp1273 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1268, ((panda$core$Object*) wrap_panda$core$Int64($tmp1272)));
        panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1273, &$s1274);
        panda$core$String* $tmp1276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1267, $tmp1275);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1255, $tmp1262, $tmp1276);
        result1233 = $tmp1255;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1233));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1279 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1280 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1279);
            superCC1278 = $tmp1280;
            panda$core$String* $tmp1282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1281, superCC1278->type);
            panda$core$String* $tmp1284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1282, &$s1283);
            panda$core$String* $tmp1285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1284, superCC1278->name);
            panda$core$String* $tmp1287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1285, &$s1286);
            superPtr1277 = $tmp1287;
        }
        }
        else {
        {
            superPtr1277 = &$s1288;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1290 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1291 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1290);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1292 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1291);
        clConstant1289 = $tmp1292;
        panda$core$MutableString* $tmp1294 = (panda$core$MutableString*) malloc(40);
        $tmp1294->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1294->refCount.value = 1;
        panda$core$String* $tmp1296 = panda$core$String$convert$R$panda$core$String(result1233->name);
        panda$core$String* $tmp1298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1296, &$s1297);
        panda$core$MutableString$init$panda$core$String($tmp1294, $tmp1298);
        code1293 = $tmp1294;
        panda$core$Bit $tmp1299 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
        if ($tmp1299.value) {
        {
            panda$core$MutableString$append$panda$core$String(code1293, &$s1300);
        }
        }
        panda$core$String* $tmp1302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1301, result1233->type);
        panda$core$String* $tmp1304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1302, &$s1303);
        panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1305, clConstant1289->type);
        panda$core$String* $tmp1308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1306, &$s1307);
        panda$core$String* $tmp1309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1308, clConstant1289->name);
        panda$core$String* $tmp1311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1309, &$s1310);
        panda$core$String* $tmp1312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1304, $tmp1311);
        panda$core$String* $tmp1315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1313, &$s1314);
        panda$core$String* $tmp1317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1315, &$s1316);
        panda$core$String* $tmp1318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1317, superPtr1277);
        panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1318, &$s1319);
        panda$core$String* $tmp1321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1312, $tmp1320);
        panda$core$String* $tmp1322 = org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1323 = panda$core$String$convert$R$panda$core$String($tmp1322);
        panda$core$String* $tmp1325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1323, &$s1324);
        ITable* $tmp1326 = ((panda$collections$CollectionView*) vtable1253)->$class->itable;
        while ($tmp1326->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1326 = $tmp1326->next;
        }
        $fn1328 $tmp1327 = $tmp1326->methods[0];
        panda$core$Int64 $tmp1329 = $tmp1327(((panda$collections$CollectionView*) vtable1253));
        panda$core$String* $tmp1330 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1325, ((panda$core$Object*) wrap_panda$core$Int64($tmp1329)));
        panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1330, &$s1331);
        panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1321, $tmp1332);
        panda$core$MutableString$append$panda$core$String(code1293, $tmp1333);
        separator1334 = &$s1335;
        {
            ITable* $tmp1337 = ((panda$collections$Iterable*) vtable1253)->$class->itable;
            while ($tmp1337->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1337 = $tmp1337->next;
            }
            $fn1339 $tmp1338 = $tmp1337->methods[0];
            panda$collections$Iterator* $tmp1340 = $tmp1338(((panda$collections$Iterable*) vtable1253));
            m$Iter1336 = $tmp1340;
            $l1341:;
            ITable* $tmp1343 = m$Iter1336->$class->itable;
            while ($tmp1343->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1343 = $tmp1343->next;
            }
            $fn1345 $tmp1344 = $tmp1343->methods[0];
            panda$core$Bit $tmp1346 = $tmp1344(m$Iter1336);
            panda$core$Bit $tmp1347 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1346);
            if (!$tmp1347.value) goto $l1342;
            {
                ITable* $tmp1349 = m$Iter1336->$class->itable;
                while ($tmp1349->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1349 = $tmp1349->next;
                }
                $fn1351 $tmp1350 = $tmp1349->methods[1];
                panda$core$Object* $tmp1352 = $tmp1350(m$Iter1336);
                m1348 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1352);
                panda$core$MutableString$append$panda$core$String(code1293, separator1334);
                panda$core$Bit $tmp1353 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1348->annotations);
                if ($tmp1353.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code1293, &$s1354);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1356 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m1348);
                    entry1355 = $tmp1356;
                    panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1357, ((panda$core$String*) entry1355->second));
                    panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1358, &$s1359);
                    panda$core$String* $tmp1361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1360, ((panda$core$String*) entry1355->first));
                    panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1361, &$s1362);
                    panda$core$MutableString$append$panda$core$String(code1293, $tmp1363);
                }
                }
                separator1334 = &$s1364;
            }
            goto $l1341;
            $l1342:;
        }
        panda$core$MutableString$append$panda$core$String(code1293, &$s1365);
        panda$core$String* $tmp1366 = panda$core$MutableString$finish$R$panda$core$String(code1293);
        (($fn1367) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1366);
    }
    }
    return result1233;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1368;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1374;
    panda$core$String* type1377;
    org$pandalanguage$pandac$ClassDecl* value1388;
    panda$collections$ListView* valueVTable1391;
    panda$collections$ListView* vtable1414;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1416;
    panda$core$String* superCast1419;
    panda$core$String* itable1427;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1429;
    panda$core$MutableString* code1433;
    panda$core$String* separator1478;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1480;
    org$pandalanguage$pandac$MethodDecl* m1498;
    panda$core$String* methodName1503;
    PANDA_ASSERT(p_cl->resolved.value);
    panda$core$String* $tmp1370 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1369, $tmp1370);
    panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1371, &$s1372);
    name1368 = $tmp1373;
    panda$core$Object* $tmp1375 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name1368));
    result1374 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1375);
    if (((panda$core$Bit) { result1374 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1376 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1376);
            type1377 = &$s1378;
            panda$core$String* $tmp1379 = panda$core$String$convert$R$panda$core$String(name1368);
            panda$core$String* $tmp1381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1379, &$s1380);
            panda$core$String* $tmp1382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1381, type1377);
            panda$core$String* $tmp1384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, &$s1383);
            (($fn1385) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1384);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1386 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1386->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1386->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1386, name1368, type1377);
            result1374 = $tmp1386;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1389 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1390 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1389);
            value1388 = $tmp1390;
            panda$collections$ListView* $tmp1392 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1388);
            valueVTable1391 = $tmp1392;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1393 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1393->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1393->refCount.value = 1;
            panda$core$String* $tmp1396 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1395, $tmp1396);
            panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1397, &$s1398);
            panda$core$String* $tmp1402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1400, &$s1401);
            panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, &$s1403);
            ITable* $tmp1406 = ((panda$collections$CollectionView*) valueVTable1391)->$class->itable;
            while ($tmp1406->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1406 = $tmp1406->next;
            }
            $fn1408 $tmp1407 = $tmp1406->methods[0];
            panda$core$Int64 $tmp1409 = $tmp1407(((panda$collections$CollectionView*) valueVTable1391));
            panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1405, ((panda$core$Object*) wrap_panda$core$Int64($tmp1409)));
            panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, &$s1411);
            panda$core$String* $tmp1413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1404, $tmp1412);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1393, $tmp1399, $tmp1413);
            result1374 = $tmp1393;
            panda$collections$ListView* $tmp1415 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1414 = $tmp1415;
            org$pandalanguage$pandac$ClassDecl* $tmp1417 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1418 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1417);
            superCC1416 = $tmp1418;
            panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1420, superCC1416->type);
            panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, &$s1422);
            panda$core$String* $tmp1424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1423, superCC1416->name);
            panda$core$String* $tmp1426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1424, &$s1425);
            superCast1419 = $tmp1426;
            panda$core$String* $tmp1428 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1427 = $tmp1428;
            org$pandalanguage$pandac$Type* $tmp1430 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1431 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1430);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1432 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1431);
            clConstant1429 = $tmp1432;
            panda$core$MutableString* $tmp1434 = (panda$core$MutableString*) malloc(40);
            $tmp1434->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1434->refCount.value = 1;
            panda$core$String* $tmp1436 = panda$core$String$convert$R$panda$core$String(result1374->name);
            panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1436, &$s1437);
            panda$core$MutableString$init$panda$core$String($tmp1434, $tmp1438);
            code1433 = $tmp1434;
            panda$core$Bit $tmp1439 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1439.value) {
            {
                panda$core$MutableString$append$panda$core$String(code1433, &$s1440);
            }
            }
            panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1441, result1374->type);
            panda$core$String* $tmp1444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1442, &$s1443);
            panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1445, clConstant1429->type);
            panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1446, &$s1447);
            panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1448, clConstant1429->name);
            panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1449, &$s1450);
            panda$core$String* $tmp1452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1444, $tmp1451);
            panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1453, &$s1454);
            panda$core$String* $tmp1457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1455, &$s1456);
            org$pandalanguage$pandac$Type* $tmp1458 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1459 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1458);
            panda$core$String* $tmp1460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1457, $tmp1459);
            panda$core$String* $tmp1462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1460, &$s1461);
            panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1462, superCast1419);
            panda$core$String* $tmp1465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, &$s1464);
            panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1452, $tmp1465);
            panda$core$String* $tmp1467 = panda$core$String$convert$R$panda$core$String(itable1427);
            panda$core$String* $tmp1469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, &$s1468);
            ITable* $tmp1470 = ((panda$collections$CollectionView*) valueVTable1391)->$class->itable;
            while ($tmp1470->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1470 = $tmp1470->next;
            }
            $fn1472 $tmp1471 = $tmp1470->methods[0];
            panda$core$Int64 $tmp1473 = $tmp1471(((panda$collections$CollectionView*) valueVTable1391));
            panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1469, ((panda$core$Object*) wrap_panda$core$Int64($tmp1473)));
            panda$core$String* $tmp1476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1474, &$s1475);
            panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1466, $tmp1476);
            panda$core$MutableString$append$panda$core$String(code1433, $tmp1477);
            separator1478 = &$s1479;
            ITable* $tmp1481 = ((panda$collections$CollectionView*) valueVTable1391)->$class->itable;
            while ($tmp1481->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1481 = $tmp1481->next;
            }
            $fn1483 $tmp1482 = $tmp1481->methods[0];
            panda$core$Int64 $tmp1484 = $tmp1482(((panda$collections$CollectionView*) valueVTable1391));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1480, ((panda$core$Int64) { 0 }), $tmp1484, ((panda$core$Bit) { false }));
            int64_t $tmp1486 = $tmp1480.min.value;
            panda$core$Int64 i1485 = { $tmp1486 };
            int64_t $tmp1488 = $tmp1480.max.value;
            bool $tmp1489 = $tmp1480.inclusive.value;
            if ($tmp1489) goto $l1496; else goto $l1497;
            $l1496:;
            if ($tmp1486 <= $tmp1488) goto $l1490; else goto $l1492;
            $l1497:;
            if ($tmp1486 < $tmp1488) goto $l1490; else goto $l1492;
            $l1490:;
            {
                ITable* $tmp1499 = vtable1414->$class->itable;
                while ($tmp1499->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1499 = $tmp1499->next;
                }
                $fn1501 $tmp1500 = $tmp1499->methods[0];
                panda$core$Object* $tmp1502 = $tmp1500(vtable1414, i1485);
                m1498 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1502);
                if (((panda$core$Bit) { ((panda$core$Object*) m1498->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1504 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1498, self->wrapperShims);
                    methodName1503 = $tmp1504;
                }
                }
                else {
                {
                    panda$core$String* $tmp1505 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1498);
                    methodName1503 = $tmp1505;
                    if (m1498->owner->external.value) {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1498);
                    }
                    }
                }
                }
                panda$core$String* $tmp1506 = panda$core$String$convert$R$panda$core$String(separator1478);
                panda$core$String* $tmp1508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1506, &$s1507);
                panda$core$String* $tmp1509 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1498);
                panda$core$String* $tmp1510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1508, $tmp1509);
                panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1510, &$s1511);
                panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1512, methodName1503);
                panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1513, &$s1514);
                panda$core$MutableString$append$panda$core$String(code1433, $tmp1515);
                separator1478 = &$s1516;
            }
            $l1493:;
            int64_t $tmp1518 = $tmp1488 - i1485.value;
            if ($tmp1489) goto $l1519; else goto $l1520;
            $l1519:;
            if ($tmp1518 >= 1) goto $l1517; else goto $l1492;
            $l1520:;
            if ($tmp1518 > 1) goto $l1517; else goto $l1492;
            $l1517:;
            i1485.value += 1;
            goto $l1490;
            $l1492:;
            panda$core$MutableString$append$panda$core$String(code1433, &$s1523);
            panda$core$String* $tmp1524 = panda$core$MutableString$finish$R$panda$core$String(code1433);
            (($fn1525) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1524);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name1368), ((panda$core$Object*) result1374));
    }
    }
    return result1374;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp1528 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s1526, &$s1527);
    panda$core$String* $tmp1531 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1528, &$s1529, &$s1530);
    panda$core$String* $tmp1534 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1531, &$s1532, &$s1533);
    panda$core$String* $tmp1537 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1534, &$s1535, &$s1536);
    panda$core$String* $tmp1540 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1537, &$s1538, &$s1539);
    panda$core$String* $tmp1543 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1540, &$s1541, &$s1542);
    return $tmp1543;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1547;
    panda$core$String* result1575;
    panda$core$Bit $tmp1544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1544.value) {
    {
        panda$core$Int64 $tmp1545 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1546 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1545, ((panda$core$Int64) { 0 }));
        if ($tmp1546.value) {
        {
            panda$core$Int64 $tmp1548 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1547, ((panda$core$Int64) { 0 }), $tmp1548, ((panda$core$Bit) { false }));
            int64_t $tmp1550 = $tmp1547.min.value;
            panda$core$Int64 i1549 = { $tmp1550 };
            int64_t $tmp1552 = $tmp1547.max.value;
            bool $tmp1553 = $tmp1547.inclusive.value;
            if ($tmp1553) goto $l1560; else goto $l1561;
            $l1560:;
            if ($tmp1550 <= $tmp1552) goto $l1554; else goto $l1556;
            $l1561:;
            if ($tmp1550 < $tmp1552) goto $l1554; else goto $l1556;
            $l1554:;
            {
                panda$core$Object* $tmp1562 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1549);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1562)->name) }).value) {
                {
                    panda$core$Object* $tmp1563 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1564 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1563)->argRefs, i1549);
                    return ((panda$core$String*) $tmp1564);
                }
                }
            }
            $l1557:;
            int64_t $tmp1566 = $tmp1552 - i1549.value;
            if ($tmp1553) goto $l1567; else goto $l1568;
            $l1567:;
            if ($tmp1566 >= 1) goto $l1565; else goto $l1556;
            $l1568:;
            if ($tmp1566 > 1) goto $l1565; else goto $l1556;
            $l1565:;
            i1549.value += 1;
            goto $l1554;
            $l1556:;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp1572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1571, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1572, &$s1573);
        return $tmp1574;
    }
    }
    panda$core$Object* $tmp1576 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1575 = ((panda$core$String*) $tmp1576);
    if (((panda$core$Bit) { result1575 == NULL }).value) {
    {
        panda$core$Int64 $tmp1577 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1577;
        panda$core$String* $tmp1579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1578, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1579, &$s1580);
        panda$core$String* $tmp1582 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1581, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1582, &$s1583);
        result1575 = $tmp1584;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1575));
    }
    }
    panda$core$Int64 $tmp1585 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1586 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1585, ((panda$core$Int64) { 0 }));
    if ($tmp1586.value) {
    {
        panda$core$Object* $tmp1587 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1575, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1587)->varSuffix);
        result1575 = $tmp1588;
    }
    }
    return result1575;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1592;
    panda$core$String* $match$859_91598;
    panda$collections$Iterator* p$Iter1675;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1687;
    panda$core$Bit $tmp1590 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1589);
    if ($tmp1590.value) {
    {
        return &$s1591;
    }
    }
    panda$core$MutableString* $tmp1593 = (panda$core$MutableString*) malloc(40);
    $tmp1593->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1593->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1593, &$s1595);
    result1592 = $tmp1593;
    panda$core$String* $tmp1596 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1592, $tmp1596);
    panda$core$MutableString$append$panda$core$String(result1592, &$s1597);
    {
        $match$859_91598 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1600 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1599);
        if ($tmp1600.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1601);
        }
        }
        else {
        panda$core$Bit $tmp1603 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1602);
        if ($tmp1603.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1604);
        }
        }
        else {
        panda$core$Bit $tmp1606 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1605);
        if ($tmp1606.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1607);
        }
        }
        else {
        panda$core$Bit $tmp1609 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1608);
        if ($tmp1609.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1610);
        }
        }
        else {
        panda$core$Bit $tmp1612 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1611);
        if ($tmp1612.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1613);
        }
        }
        else {
        panda$core$Bit $tmp1615 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1614);
        if ($tmp1615.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1616);
        }
        }
        else {
        panda$core$Bit $tmp1618 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1617);
        if ($tmp1618.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1619);
        }
        }
        else {
        panda$core$Bit $tmp1621 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1620);
        if ($tmp1621.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1622);
        }
        }
        else {
        panda$core$Bit $tmp1624 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1623);
        if ($tmp1624.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1625);
        }
        }
        else {
        panda$core$Bit $tmp1627 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1626);
        if ($tmp1627.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1628);
        }
        }
        else {
        panda$core$Bit $tmp1630 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1629);
        if ($tmp1630.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1631);
        }
        }
        else {
        panda$core$Bit $tmp1633 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1632);
        if ($tmp1633.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1634);
        }
        }
        else {
        panda$core$Bit $tmp1636 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1635);
        if ($tmp1636.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1637);
        }
        }
        else {
        panda$core$Bit $tmp1639 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1638);
        if ($tmp1639.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1640);
        }
        }
        else {
        panda$core$Bit $tmp1642 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1641);
        if ($tmp1642.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1643);
        }
        }
        else {
        panda$core$Bit $tmp1645 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1644);
        if ($tmp1645.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1646);
        }
        }
        else {
        panda$core$Bit $tmp1648 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1647);
        if ($tmp1648.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1649);
        }
        }
        else {
        panda$core$Bit $tmp1651 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1650);
        if ($tmp1651.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1652);
        }
        }
        else {
        panda$core$Bit $tmp1654 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1653);
        if ($tmp1654.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1655);
        }
        }
        else {
        panda$core$Bit $tmp1657 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1656);
        if ($tmp1657.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1658);
        }
        }
        else {
        panda$core$Bit $tmp1660 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1659);
        if ($tmp1660.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1661);
        }
        }
        else {
        panda$core$Bit $tmp1663 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1662);
        if ($tmp1663.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1664);
        }
        }
        else {
        panda$core$Bit $tmp1666 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1665);
        if ($tmp1666.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1667);
        }
        }
        else {
        panda$core$Bit $tmp1669 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1668);
        if ($tmp1669.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1670);
        }
        }
        else {
        panda$core$Bit $tmp1672 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91598, &$s1671);
        if ($tmp1672.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1592, &$s1673);
        }
        }
        else {
        {
            panda$core$String* $tmp1674 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1592, $tmp1674);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        ITable* $tmp1676 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1676->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1676 = $tmp1676->next;
        }
        $fn1678 $tmp1677 = $tmp1676->methods[0];
        panda$collections$Iterator* $tmp1679 = $tmp1677(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1675 = $tmp1679;
        $l1680:;
        ITable* $tmp1682 = p$Iter1675->$class->itable;
        while ($tmp1682->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1682 = $tmp1682->next;
        }
        $fn1684 $tmp1683 = $tmp1682->methods[0];
        panda$core$Bit $tmp1685 = $tmp1683(p$Iter1675);
        panda$core$Bit $tmp1686 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1685);
        if (!$tmp1686.value) goto $l1681;
        {
            ITable* $tmp1688 = p$Iter1675->$class->itable;
            while ($tmp1688->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1688 = $tmp1688->next;
            }
            $fn1690 $tmp1689 = $tmp1688->methods[1];
            panda$core$Object* $tmp1691 = $tmp1689(p$Iter1675);
            p1687 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1691);
            panda$core$String* $tmp1693 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1687->type)->name);
            panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1692, $tmp1693);
            panda$core$String* $tmp1696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1694, &$s1695);
            panda$core$MutableString$append$panda$core$String(result1592, $tmp1696);
        }
        goto $l1680;
        $l1681:;
    }
    org$pandalanguage$pandac$Type* $tmp1697 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1698 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1697);
    if ($tmp1698.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1592, &$s1699);
        panda$core$String* $tmp1700 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1592, $tmp1700);
    }
    }
    panda$core$String* $tmp1701 = panda$core$MutableString$finish$R$panda$core$String(result1592);
    return $tmp1701;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1702 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1702.value);
    panda$core$String* $tmp1704 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1703, $tmp1704);
    panda$core$String* $tmp1707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, &$s1706);
    panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1707, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, &$s1709);
    return $tmp1710;
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
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1711;
    panda$core$String* leftField1715;
    panda$core$String* start1724;
    panda$core$String* ifTrue1725;
    panda$core$String* ifFalse1727;
    panda$core$String* rightRef1740;
    panda$core$String* rightField1744;
    panda$core$String* truePred1753;
    panda$core$String* result1759;
    panda$core$String* $tmp1712 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1711 = $tmp1712;
    org$pandalanguage$pandac$Type* $tmp1713 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1714 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1713);
    if ($tmp1714.value) {
    {
        panda$core$String* $tmp1716 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1715 = $tmp1716;
        panda$core$String* $tmp1717 = panda$core$String$convert$R$panda$core$String(leftField1715);
        panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1717, &$s1718);
        panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, leftRef1711);
        panda$core$String* $tmp1722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1720, &$s1721);
        (($fn1723) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1722);
        leftRef1711 = leftField1715;
    }
    }
    start1724 = self->currentBlock;
    panda$core$String* $tmp1726 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1725 = $tmp1726;
    panda$core$String* $tmp1728 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1727 = $tmp1728;
    panda$core$String* $tmp1730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1729, leftRef1711);
    panda$core$String* $tmp1732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1730, &$s1731);
    panda$core$String* $tmp1733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1732, ifTrue1725);
    panda$core$String* $tmp1735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1733, &$s1734);
    panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1735, ifFalse1727);
    panda$core$String* $tmp1738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1736, &$s1737);
    (($fn1739) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1738);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1725, p_out);
    panda$core$String* $tmp1741 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1740 = $tmp1741;
    org$pandalanguage$pandac$Type* $tmp1742 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1743 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1742);
    if ($tmp1743.value) {
    {
        panda$core$String* $tmp1745 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1744 = $tmp1745;
        panda$core$String* $tmp1746 = panda$core$String$convert$R$panda$core$String(rightField1744);
        panda$core$String* $tmp1748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1746, &$s1747);
        panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1748, rightRef1740);
        panda$core$String* $tmp1751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1749, &$s1750);
        (($fn1752) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1751);
        rightRef1740 = rightField1744;
    }
    }
    truePred1753 = self->currentBlock;
    panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1754, ifFalse1727);
    panda$core$String* $tmp1757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1755, &$s1756);
    (($fn1758) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1757);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1727, p_out);
    panda$core$String* $tmp1760 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1759 = $tmp1760;
    panda$core$String* $tmp1761 = panda$core$String$convert$R$panda$core$String(result1759);
    panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1761, &$s1762);
    panda$core$String* $tmp1764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1763, start1724);
    panda$core$String* $tmp1766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1764, &$s1765);
    panda$core$String* $tmp1767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1766, rightRef1740);
    panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1767, &$s1768);
    panda$core$String* $tmp1770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1769, truePred1753);
    panda$core$String* $tmp1772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1770, &$s1771);
    (($fn1773) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1772);
    return result1759;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1774;
    panda$core$String* leftField1778;
    panda$core$String* start1787;
    panda$core$String* ifTrue1788;
    panda$core$String* ifFalse1790;
    panda$core$String* rightRef1803;
    panda$core$String* rightField1807;
    panda$core$String* falsePred1816;
    panda$core$String* result1822;
    panda$core$String* $tmp1775 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1774 = $tmp1775;
    org$pandalanguage$pandac$Type* $tmp1776 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1777 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1776);
    if ($tmp1777.value) {
    {
        panda$core$String* $tmp1779 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1778 = $tmp1779;
        panda$core$String* $tmp1780 = panda$core$String$convert$R$panda$core$String(leftField1778);
        panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1780, &$s1781);
        panda$core$String* $tmp1783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1782, leftRef1774);
        panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1783, &$s1784);
        (($fn1786) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1785);
        leftRef1774 = leftField1778;
    }
    }
    start1787 = self->currentBlock;
    panda$core$String* $tmp1789 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1788 = $tmp1789;
    panda$core$String* $tmp1791 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1790 = $tmp1791;
    panda$core$String* $tmp1793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1792, leftRef1774);
    panda$core$String* $tmp1795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1793, &$s1794);
    panda$core$String* $tmp1796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1795, ifTrue1788);
    panda$core$String* $tmp1798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1796, &$s1797);
    panda$core$String* $tmp1799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1798, ifFalse1790);
    panda$core$String* $tmp1801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1799, &$s1800);
    (($fn1802) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1801);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1790, p_out);
    panda$core$String* $tmp1804 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1803 = $tmp1804;
    org$pandalanguage$pandac$Type* $tmp1805 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1806 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1805);
    if ($tmp1806.value) {
    {
        panda$core$String* $tmp1808 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1807 = $tmp1808;
        panda$core$String* $tmp1809 = panda$core$String$convert$R$panda$core$String(rightField1807);
        panda$core$String* $tmp1811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1809, &$s1810);
        panda$core$String* $tmp1812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1811, rightRef1803);
        panda$core$String* $tmp1814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1812, &$s1813);
        (($fn1815) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1814);
        rightRef1803 = rightField1807;
    }
    }
    falsePred1816 = self->currentBlock;
    panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1817, ifTrue1788);
    panda$core$String* $tmp1820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, &$s1819);
    (($fn1821) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1820);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1788, p_out);
    panda$core$String* $tmp1823 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1822 = $tmp1823;
    panda$core$String* $tmp1824 = panda$core$String$convert$R$panda$core$String(result1822);
    panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1824, &$s1825);
    panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1826, start1787);
    panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1827, &$s1828);
    panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, rightRef1803);
    panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, &$s1831);
    panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1832, falsePred1816);
    panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1833, &$s1834);
    (($fn1836) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1835);
    return result1822;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* llvmOp1837;
    panda$core$String* result1880;
    switch (p_cl.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1837 = &$s1838;
                }
                break;
                case 52:
                {
                    llvmOp1837 = &$s1839;
                }
                break;
                case 53:
                {
                    llvmOp1837 = &$s1840;
                }
                break;
                case 55:
                {
                    llvmOp1837 = &$s1841;
                }
                break;
                case 56:
                {
                    llvmOp1837 = &$s1842;
                }
                break;
                case 72:
                {
                    llvmOp1837 = &$s1843;
                }
                break;
                case 1:
                {
                    llvmOp1837 = &$s1844;
                }
                break;
                case 67:
                {
                    llvmOp1837 = &$s1845;
                }
                break;
                case 69:
                {
                    llvmOp1837 = &$s1846;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1837 = &$s1847;
                }
                break;
                case 58:
                {
                    llvmOp1837 = &$s1848;
                }
                break;
                case 59:
                {
                    llvmOp1837 = &$s1849;
                }
                break;
                case 63:
                {
                    llvmOp1837 = &$s1850;
                }
                break;
                case 62:
                {
                    llvmOp1837 = &$s1851;
                }
                break;
                case 65:
                {
                    llvmOp1837 = &$s1852;
                }
                break;
                case 64:
                {
                    llvmOp1837 = &$s1853;
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
                    llvmOp1837 = &$s1854;
                }
                break;
                case 52:
                {
                    llvmOp1837 = &$s1855;
                }
                break;
                case 53:
                {
                    llvmOp1837 = &$s1856;
                }
                break;
                case 55:
                {
                    llvmOp1837 = &$s1857;
                }
                break;
                case 56:
                {
                    llvmOp1837 = &$s1858;
                }
                break;
                case 72:
                {
                    llvmOp1837 = &$s1859;
                }
                break;
                case 1:
                {
                    llvmOp1837 = &$s1860;
                }
                break;
                case 67:
                {
                    llvmOp1837 = &$s1861;
                }
                break;
                case 69:
                {
                    llvmOp1837 = &$s1862;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1837 = &$s1863;
                }
                break;
                case 58:
                {
                    llvmOp1837 = &$s1864;
                }
                break;
                case 59:
                {
                    llvmOp1837 = &$s1865;
                }
                break;
                case 63:
                {
                    llvmOp1837 = &$s1866;
                }
                break;
                case 62:
                {
                    llvmOp1837 = &$s1867;
                }
                break;
                case 65:
                {
                    llvmOp1837 = &$s1868;
                }
                break;
                case 64:
                {
                    llvmOp1837 = &$s1869;
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
                    llvmOp1837 = &$s1870;
                }
                break;
                case 52:
                {
                    llvmOp1837 = &$s1871;
                }
                break;
                case 53:
                {
                    llvmOp1837 = &$s1872;
                }
                break;
                case 55:
                {
                    llvmOp1837 = &$s1873;
                }
                break;
                case 58:
                {
                    llvmOp1837 = &$s1874;
                }
                break;
                case 59:
                {
                    llvmOp1837 = &$s1875;
                }
                break;
                case 63:
                {
                    llvmOp1837 = &$s1876;
                }
                break;
                case 62:
                {
                    llvmOp1837 = &$s1877;
                }
                break;
                case 65:
                {
                    llvmOp1837 = &$s1878;
                }
                break;
                case 64:
                {
                    llvmOp1837 = &$s1879;
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
    panda$core$String* $tmp1881 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1880 = $tmp1881;
    panda$core$String* $tmp1882 = panda$core$String$convert$R$panda$core$String(result1880);
    panda$core$String* $tmp1884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1882, &$s1883);
    panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1884, llvmOp1837);
    panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1885, &$s1886);
    panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1887, p_leftRef);
    panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1888, &$s1889);
    panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1890, p_rightRef);
    panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1891, &$s1892);
    (($fn1894) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1893);
    return result1880;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1895;
    panda$core$String* rightRef1897;
    panda$core$String* raw1899;
    panda$core$String* result1911;
    panda$core$String* $tmp1896 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1895 = $tmp1896;
    panda$core$String* $tmp1898 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1897 = $tmp1898;
    panda$core$String* $tmp1900 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1899 = $tmp1900;
    panda$core$String* $tmp1901 = panda$core$String$convert$R$panda$core$String(raw1899);
    panda$core$String* $tmp1903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1901, &$s1902);
    panda$core$String* $tmp1904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1903, leftRef1895);
    panda$core$String* $tmp1906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1904, &$s1905);
    panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1906, rightRef1897);
    panda$core$String* $tmp1909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1907, &$s1908);
    (($fn1910) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1909);
    panda$core$String* $tmp1912 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1911 = $tmp1912;
    panda$core$String* $tmp1913 = panda$core$String$convert$R$panda$core$String(result1911);
    panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1913, &$s1914);
    panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, raw1899);
    panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, &$s1917);
    (($fn1919) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1918);
    return result1911;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1920;
    panda$core$String* rightRef1922;
    panda$core$String* raw1924;
    panda$core$String* result1936;
    panda$core$String* $tmp1921 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1920 = $tmp1921;
    panda$core$String* $tmp1923 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1922 = $tmp1923;
    panda$core$String* $tmp1925 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1924 = $tmp1925;
    panda$core$String* $tmp1926 = panda$core$String$convert$R$panda$core$String(raw1924);
    panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1926, &$s1927);
    panda$core$String* $tmp1929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1928, leftRef1920);
    panda$core$String* $tmp1931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1929, &$s1930);
    panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1931, rightRef1922);
    panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1932, &$s1933);
    (($fn1935) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1934);
    panda$core$String* $tmp1937 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1936 = $tmp1937;
    panda$core$String* $tmp1938 = panda$core$String$convert$R$panda$core$String(result1936);
    panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1938, &$s1939);
    panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1940, raw1924);
    panda$core$String* $tmp1943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1941, &$s1942);
    (($fn1944) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1943);
    return result1936;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1950;
    panda$core$String* rightRef1952;
    panda$core$Bit $tmp1945 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1945.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1946 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1946;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1947 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1947;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1948 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1948;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1949 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1949;
        }
        break;
        default:
        {
            panda$core$String* $tmp1951 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1950 = $tmp1951;
            panda$core$String* $tmp1953 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1952 = $tmp1953;
            panda$core$Int64 $tmp1954 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1955 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1954, leftRef1950, p_op, rightRef1952, p_out);
            return $tmp1955;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1956.value);
    panda$core$Int64 $tmp1957 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1957, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1958.value);
    panda$core$Object* $tmp1959 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1960 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1961 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1959), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1960), p_out);
    return $tmp1961;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    return &$s1962;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc1963;
    panda$core$Int64 index1965;
    panda$collections$ListView* vtable1966;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1968;
    panda$core$String* classPtrPtr1997;
    panda$core$String* classPtr2012;
    panda$core$String* cast2021;
    panda$core$String* ptr2033;
    panda$core$String* load2056;
    panda$core$String* result2065;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1964 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc1963 = $tmp1964;
    index1965 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1967 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1966 = $tmp1967;
    ITable* $tmp1969 = ((panda$collections$CollectionView*) vtable1966)->$class->itable;
    while ($tmp1969->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1969 = $tmp1969->next;
    }
    $fn1971 $tmp1970 = $tmp1969->methods[0];
    panda$core$Int64 $tmp1972 = $tmp1970(((panda$collections$CollectionView*) vtable1966));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1968, ((panda$core$Int64) { 0 }), $tmp1972, ((panda$core$Bit) { false }));
    int64_t $tmp1974 = $tmp1968.min.value;
    panda$core$Int64 i1973 = { $tmp1974 };
    int64_t $tmp1976 = $tmp1968.max.value;
    bool $tmp1977 = $tmp1968.inclusive.value;
    if ($tmp1977) goto $l1984; else goto $l1985;
    $l1984:;
    if ($tmp1974 <= $tmp1976) goto $l1978; else goto $l1980;
    $l1985:;
    if ($tmp1974 < $tmp1976) goto $l1978; else goto $l1980;
    $l1978:;
    {
        ITable* $tmp1986 = vtable1966->$class->itable;
        while ($tmp1986->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1986 = $tmp1986->next;
        }
        $fn1988 $tmp1987 = $tmp1986->methods[0];
        panda$core$Object* $tmp1989 = $tmp1987(vtable1966, i1973);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1989)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1965 = i1973;
            goto $l1980;
        }
        }
    }
    $l1981:;
    int64_t $tmp1991 = $tmp1976 - i1973.value;
    if ($tmp1977) goto $l1992; else goto $l1993;
    $l1992:;
    if ($tmp1991 >= 1) goto $l1990; else goto $l1980;
    $l1993:;
    if ($tmp1991 > 1) goto $l1990; else goto $l1980;
    $l1990:;
    i1973.value += 1;
    goto $l1978;
    $l1980:;
    panda$core$Bit $tmp1996 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1965, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1996.value);
    panda$core$String* $tmp1998 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr1997 = $tmp1998;
    panda$core$String* $tmp1999 = panda$core$String$convert$R$panda$core$String(classPtrPtr1997);
    panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1999, &$s2000);
    org$pandalanguage$pandac$Type* $tmp2002 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2003 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2002);
    panda$core$String* $tmp2004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2001, $tmp2003);
    panda$core$String* $tmp2006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2004, &$s2005);
    panda$core$String* $tmp2007 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2007, &$s2008);
    panda$core$String* $tmp2010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2006, $tmp2009);
    (($fn2011) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2010);
    panda$core$String* $tmp2013 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2012 = $tmp2013;
    panda$core$String* $tmp2014 = panda$core$String$convert$R$panda$core$String(classPtr2012);
    panda$core$String* $tmp2016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, &$s2015);
    panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, classPtrPtr1997);
    panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2017, &$s2018);
    (($fn2020) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2019);
    panda$core$String* $tmp2022 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2021 = $tmp2022;
    panda$core$String* $tmp2023 = panda$core$String$convert$R$panda$core$String(cast2021);
    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2023, &$s2024);
    panda$core$String* $tmp2026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2025, classPtr2012);
    panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2026, &$s2027);
    panda$core$String* $tmp2029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2028, cc1963->type);
    panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2029, &$s2030);
    (($fn2032) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2031);
    panda$core$String* $tmp2034 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2033 = $tmp2034;
    panda$core$String* $tmp2035 = panda$core$String$convert$R$panda$core$String(ptr2033);
    panda$core$String* $tmp2037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2035, &$s2036);
    panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2037, cc1963->type);
    panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2038, &$s2039);
    panda$core$String* $tmp2041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2040, cc1963->type);
    panda$core$String* $tmp2043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2041, &$s2042);
    panda$core$String* $tmp2044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2043, cast2021);
    panda$core$String* $tmp2046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2044, &$s2045);
    panda$core$String* $tmp2048 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2047, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2048, &$s2049);
    panda$core$String* $tmp2051 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2050, ((panda$core$Object*) wrap_panda$core$Int64(index1965)));
    panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2051, &$s2052);
    panda$core$String* $tmp2054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2046, $tmp2053);
    (($fn2055) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2054);
    panda$core$String* $tmp2057 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2056 = $tmp2057;
    panda$core$String* $tmp2058 = panda$core$String$convert$R$panda$core$String(load2056);
    panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, &$s2059);
    panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2060, ptr2033);
    panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2061, &$s2062);
    (($fn2064) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2063);
    panda$core$String* $tmp2066 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2065 = $tmp2066;
    panda$core$String* $tmp2067 = panda$core$String$convert$R$panda$core$String(result2065);
    panda$core$String* $tmp2069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2067, &$s2068);
    panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2069, load2056);
    panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2070, &$s2071);
    org$pandalanguage$pandac$Type* $tmp2073 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2074 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2073);
    panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2072, $tmp2074);
    (($fn2076) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2075);
    return result2065;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* methodType2077;
    panda$core$String* entry2080;
    panda$core$String* rawClassPointer2087;
    panda$core$String* classPointer2109;
    panda$core$String* classType2111;
    panda$core$String* loadedClass2124;
    panda$core$String* itableFirst2139;
    panda$core$String* next2162;
    panda$core$String* leavingEntryLabel2169;
    panda$core$String* itableNext2171;
    panda$core$String* itablePtrPtr2176;
    panda$core$String* fail2178;
    panda$core$String* itablePtr2198;
    panda$core$String* itableClassPtr2207;
    panda$core$String* itableClass2221;
    panda$core$String* test2236;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2238;
    panda$core$String* success2260;
    panda$core$Int64 index2290;
    panda$collections$ListView* vtable2291;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2293;
    panda$core$String* methodPtrPtr2330;
    panda$core$String* cast2347;
    panda$core$String* methodPtr2359;
    org$pandalanguage$pandac$Type* $tmp2078 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2079 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2078);
    methodType2077 = $tmp2079;
    panda$core$String* $tmp2081 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2080 = $tmp2081;
    panda$core$String* $tmp2083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2082, entry2080);
    panda$core$String* $tmp2085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2083, &$s2084);
    (($fn2086) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2085);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, entry2080, p_out);
    panda$core$String* $tmp2088 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawClassPointer2087 = $tmp2088;
    panda$core$String* $tmp2089 = panda$core$String$convert$R$panda$core$String(rawClassPointer2087);
    panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2089, &$s2090);
    org$pandalanguage$pandac$Type* $tmp2092 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2093 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2092);
    panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, $tmp2093);
    panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2094, &$s2095);
    panda$core$String* $tmp2097 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2097, &$s2098);
    panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, &$s2100);
    panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2101, &$s2102);
    panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2103, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2104, &$s2105);
    panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2096, $tmp2106);
    (($fn2108) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2107);
    panda$core$String* $tmp2110 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2109 = $tmp2110;
    org$pandalanguage$pandac$Type* $tmp2112 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2113 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2112);
    classType2111 = $tmp2113;
    panda$core$String* $tmp2114 = panda$core$String$convert$R$panda$core$String(classPointer2109);
    panda$core$String* $tmp2116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2114, &$s2115);
    panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2116, rawClassPointer2087);
    panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2117, &$s2118);
    panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2119, classType2111);
    panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2120, &$s2121);
    (($fn2123) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2122);
    panda$core$String* $tmp2125 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2124 = $tmp2125;
    panda$core$String* $tmp2126 = panda$core$String$convert$R$panda$core$String(loadedClass2124);
    panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2126, &$s2127);
    panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2128, classType2111);
    panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2129, &$s2130);
    panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2131, classType2111);
    panda$core$String* $tmp2134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2132, &$s2133);
    panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2134, classPointer2109);
    panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2135, &$s2136);
    (($fn2138) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2137);
    panda$core$String* $tmp2140 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2139 = $tmp2140;
    panda$core$String* $tmp2141 = panda$core$String$convert$R$panda$core$String(itableFirst2139);
    panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2141, &$s2142);
    panda$core$String* $tmp2144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, classType2111);
    panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2144, &$s2145);
    panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2146, classType2111);
    panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2147, &$s2148);
    panda$core$String* $tmp2150 = panda$core$String$convert$R$panda$core$String(loadedClass2124);
    panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
    panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, &$s2153);
    panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2154, &$s2155);
    panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2156, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, &$s2158);
    panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2149, $tmp2159);
    (($fn2161) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2160);
    panda$core$String* $tmp2163 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2162 = $tmp2163;
    panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2164, next2162);
    panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, &$s2166);
    (($fn2168) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2167);
    leavingEntryLabel2169 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, next2162, p_out);
    panda$core$Int64 $tmp2170 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2170;
    panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2172, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2174);
    itableNext2171 = $tmp2175;
    panda$core$String* $tmp2177 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2176 = $tmp2177;
    panda$core$String* $tmp2179 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2178 = $tmp2179;
    panda$core$String* $tmp2180 = panda$core$String$convert$R$panda$core$String(itablePtrPtr2176);
    panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, &$s2181);
    panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2182, itableFirst2139);
    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2183, &$s2184);
    panda$core$String* $tmp2186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, leavingEntryLabel2169);
    panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2186, &$s2187);
    panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2189, itableNext2171);
    panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2191);
    panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, fail2178);
    panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, &$s2194);
    panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2188, $tmp2195);
    (($fn2197) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2196);
    panda$core$String* $tmp2199 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2198 = $tmp2199;
    panda$core$String* $tmp2200 = panda$core$String$convert$R$panda$core$String(itablePtr2198);
    panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2200, &$s2201);
    panda$core$String* $tmp2203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2202, itablePtrPtr2176);
    panda$core$String* $tmp2205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2203, &$s2204);
    (($fn2206) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2205);
    panda$core$String* $tmp2208 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2207 = $tmp2208;
    panda$core$String* $tmp2209 = panda$core$String$convert$R$panda$core$String(itableClassPtr2207);
    panda$core$String* $tmp2211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, &$s2210);
    panda$core$String* $tmp2212 = panda$core$String$convert$R$panda$core$String(itablePtr2198);
    panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2212, &$s2213);
    panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, &$s2215);
    panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, &$s2217);
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2211, $tmp2218);
    (($fn2220) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2219);
    panda$core$String* $tmp2222 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2221 = $tmp2222;
    panda$core$String* $tmp2223 = panda$core$String$convert$R$panda$core$String(itableClass2221);
    panda$core$String* $tmp2225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2223, &$s2224);
    panda$core$String* $tmp2226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2225, classType2111);
    panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2226, &$s2227);
    panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2228, classType2111);
    panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2229, &$s2230);
    panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2231, itableClassPtr2207);
    panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2232, &$s2233);
    (($fn2235) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2234);
    panda$core$String* $tmp2237 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2236 = $tmp2237;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2239 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2238 = $tmp2239;
    panda$core$String* $tmp2240 = panda$core$String$convert$R$panda$core$String(test2236);
    panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2240, &$s2241);
    panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2242, classType2111);
    panda$core$String* $tmp2245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2243, &$s2244);
    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2245, intfCC2238->type);
    panda$core$String* $tmp2248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, &$s2247);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2248, intfCC2238->name);
    panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, &$s2250);
    panda$core$String* $tmp2252 = panda$core$String$convert$R$panda$core$String(classType2111);
    panda$core$String* $tmp2254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, &$s2253);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2254, itableClass2221);
    panda$core$String* $tmp2257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2255, &$s2256);
    panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, $tmp2257);
    (($fn2259) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2258);
    panda$core$String* $tmp2261 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2260 = $tmp2261;
    panda$core$String* $tmp2263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2262, test2236);
    panda$core$String* $tmp2265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2263, &$s2264);
    panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2265, success2260);
    panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2266, &$s2267);
    panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2268, fail2178);
    panda$core$String* $tmp2271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, &$s2270);
    (($fn2272) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2271);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, fail2178, p_out);
    panda$core$String* $tmp2273 = panda$core$String$convert$R$panda$core$String(itableNext2171);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2273, &$s2274);
    panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2275, itablePtr2198);
    panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2276, &$s2277);
    panda$core$String* $tmp2280 = panda$core$String$convert$R$panda$core$String(&$s2279);
    panda$core$String* $tmp2282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2280, &$s2281);
    panda$core$String* $tmp2283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2278, $tmp2282);
    (($fn2284) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2283);
    panda$core$String* $tmp2286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2285, next2162);
    panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2286, &$s2287);
    (($fn2289) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2288);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, success2260, p_out);
    index2290 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2292 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2291 = $tmp2292;
    ITable* $tmp2294 = ((panda$collections$CollectionView*) vtable2291)->$class->itable;
    while ($tmp2294->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2294 = $tmp2294->next;
    }
    $fn2296 $tmp2295 = $tmp2294->methods[0];
    panda$core$Int64 $tmp2297 = $tmp2295(((panda$collections$CollectionView*) vtable2291));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2293, ((panda$core$Int64) { 0 }), $tmp2297, ((panda$core$Bit) { false }));
    int64_t $tmp2299 = $tmp2293.min.value;
    panda$core$Int64 i2298 = { $tmp2299 };
    int64_t $tmp2301 = $tmp2293.max.value;
    bool $tmp2302 = $tmp2293.inclusive.value;
    if ($tmp2302) goto $l2309; else goto $l2310;
    $l2309:;
    if ($tmp2299 <= $tmp2301) goto $l2303; else goto $l2305;
    $l2310:;
    if ($tmp2299 < $tmp2301) goto $l2303; else goto $l2305;
    $l2303:;
    {
        ITable* $tmp2311 = vtable2291->$class->itable;
        while ($tmp2311->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2311 = $tmp2311->next;
        }
        $fn2313 $tmp2312 = $tmp2311->methods[0];
        panda$core$Object* $tmp2314 = $tmp2312(vtable2291, i2298);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2314)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2290 = i2298;
            goto $l2305;
        }
        }
    }
    $l2306:;
    int64_t $tmp2316 = $tmp2301 - i2298.value;
    if ($tmp2302) goto $l2317; else goto $l2318;
    $l2317:;
    if ($tmp2316 >= 1) goto $l2315; else goto $l2305;
    $l2318:;
    if ($tmp2316 > 1) goto $l2315; else goto $l2305;
    $l2315:;
    i2298.value += 1;
    goto $l2303;
    $l2305:;
    org$pandalanguage$pandac$Type* $tmp2321 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2322 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2321);
    panda$collections$ListView* $tmp2323 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2322);
    ITable* $tmp2324 = ((panda$collections$CollectionView*) $tmp2323)->$class->itable;
    while ($tmp2324->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2324 = $tmp2324->next;
    }
    $fn2326 $tmp2325 = $tmp2324->methods[0];
    panda$core$Int64 $tmp2327 = $tmp2325(((panda$collections$CollectionView*) $tmp2323));
    panda$core$Int64 $tmp2328 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2290, $tmp2327);
    index2290 = $tmp2328;
    panda$core$Bit $tmp2329 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2290, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2329.value);
    panda$core$String* $tmp2331 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2330 = $tmp2331;
    panda$core$String* $tmp2332 = panda$core$String$convert$R$panda$core$String(methodPtrPtr2330);
    panda$core$String* $tmp2334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, &$s2333);
    panda$core$String* $tmp2335 = panda$core$String$convert$R$panda$core$String(itablePtr2198);
    panda$core$String* $tmp2337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2335, &$s2336);
    panda$core$String* $tmp2339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2337, &$s2338);
    panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2339, &$s2340);
    panda$core$String* $tmp2342 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2341, ((panda$core$Object*) wrap_panda$core$Int64(index2290)));
    panda$core$String* $tmp2344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2342, &$s2343);
    panda$core$String* $tmp2345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2334, $tmp2344);
    (($fn2346) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2345);
    panda$core$String* $tmp2348 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2347 = $tmp2348;
    panda$core$String* $tmp2349 = panda$core$String$convert$R$panda$core$String(cast2347);
    panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2349, &$s2350);
    panda$core$String* $tmp2352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2351, methodPtrPtr2330);
    panda$core$String* $tmp2354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2352, &$s2353);
    panda$core$String* $tmp2355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2354, methodType2077);
    panda$core$String* $tmp2357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2355, &$s2356);
    (($fn2358) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2357);
    panda$core$String* $tmp2360 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2359 = $tmp2360;
    panda$core$String* $tmp2361 = panda$core$String$convert$R$panda$core$String(methodPtr2359);
    panda$core$String* $tmp2363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2361, &$s2362);
    panda$core$String* $tmp2364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2363, methodType2077);
    panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2364, &$s2365);
    panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2366, methodType2077);
    panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2367, &$s2368);
    panda$core$String* $tmp2370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2369, cast2347);
    panda$core$String* $tmp2372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2370, &$s2371);
    (($fn2373) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2372);
    return methodPtr2359;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2375 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2374 = $tmp2375.value;
    if (!$tmp2374) goto $l2376;
    panda$core$Bit $tmp2377 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2374 = $tmp2377.value;
    $l2376:;
    panda$core$Bit $tmp2378 = { $tmp2374 };
    if ($tmp2378.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2379.value) {
        {
            panda$core$String* $tmp2380 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2380;
        }
        }
        else {
        {
            panda$core$String* $tmp2381 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2381;
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
        panda$core$String* $tmp2382 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2382;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2383;
    panda$core$String* $match$1204_92384;
    panda$core$String* countStruct2389;
    panda$core$String* count2392;
    panda$core$String* size2401;
    panda$core$Int64 elementSize2403;
    panda$core$String* malloc2422;
    panda$core$String* result2435;
    panda$core$String* ptr2453;
    panda$core$String* baseType2456;
    panda$core$String* ptrType2459;
    panda$core$String* cast2462;
    panda$core$String* load2474;
    panda$core$String* ptr2493;
    panda$core$String* baseType2496;
    panda$core$String* ptrType2499;
    panda$core$String* cast2502;
    panda$core$String* indexStruct2514;
    panda$core$String* index2517;
    panda$core$String* offsetPtr2526;
    panda$core$String* load2546;
    panda$core$String* ptr2565;
    panda$core$String* ptrCast2568;
    panda$core$String* countStruct2577;
    panda$core$String* count2580;
    panda$core$String* size2589;
    panda$core$String* realloc2606;
    panda$core$String* result2623;
    panda$core$String* ptr2641;
    panda$core$String* baseType2644;
    panda$core$String* offsetStruct2648;
    panda$core$String* offset2651;
    panda$core$String* result2660;
    m2383 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$1204_92384 = ((org$pandalanguage$pandac$Symbol*) m2383->value)->name;
        panda$core$Bit $tmp2386 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1204_92384, &$s2385);
        if ($tmp2386.value) {
        {
            panda$core$Int64 $tmp2387 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2387, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2388.value);
            panda$core$Object* $tmp2390 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2391 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2390), p_out);
            countStruct2389 = $tmp2391;
            panda$core$String* $tmp2393 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2392 = $tmp2393;
            panda$core$String* $tmp2394 = panda$core$String$convert$R$panda$core$String(count2392);
            panda$core$String* $tmp2396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2394, &$s2395);
            panda$core$String* $tmp2397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2396, countStruct2389);
            panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2397, &$s2398);
            (($fn2400) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2399);
            panda$core$String* $tmp2402 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2401 = $tmp2402;
            org$pandalanguage$pandac$Type* $tmp2404 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2383);
            panda$core$Object* $tmp2405 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2404->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2406 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2405));
            elementSize2403 = $tmp2406;
            panda$core$Bit $tmp2407 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2403, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2407.value);
            panda$core$String* $tmp2408 = panda$core$String$convert$R$panda$core$String(size2401);
            panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2408, &$s2409);
            panda$core$String* $tmp2412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2410, &$s2411);
            panda$core$String* $tmp2414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2412, &$s2413);
            panda$core$String* $tmp2415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2414, count2392);
            panda$core$String* $tmp2417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2415, &$s2416);
            panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2417, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2403)));
            panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2418, &$s2419);
            (($fn2421) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2420);
            panda$core$String* $tmp2423 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2422 = $tmp2423;
            panda$core$String* $tmp2424 = panda$core$String$convert$R$panda$core$String(malloc2422);
            panda$core$String* $tmp2426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2424, &$s2425);
            panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2426, &$s2427);
            panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, &$s2429);
            panda$core$String* $tmp2431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2430, size2401);
            panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2431, &$s2432);
            (($fn2434) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2433);
            panda$core$String* $tmp2436 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2435 = $tmp2436;
            panda$core$String* $tmp2437 = panda$core$String$convert$R$panda$core$String(result2435);
            panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2437, &$s2438);
            panda$core$String* $tmp2440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2439, malloc2422);
            panda$core$String* $tmp2442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2440, &$s2441);
            org$pandalanguage$pandac$Type* $tmp2443 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2383);
            panda$core$String* $tmp2444 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2443);
            panda$core$String* $tmp2445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2442, $tmp2444);
            panda$core$String* $tmp2447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2445, &$s2446);
            (($fn2448) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2447);
            return result2435;
        }
        }
        else {
        panda$core$Bit $tmp2450 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1204_92384, &$s2449);
        if ($tmp2450.value) {
        {
            panda$core$Int64 $tmp2451 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2451, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2452.value);
            panda$core$Object* $tmp2454 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2455 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2454), p_out);
            ptr2453 = $tmp2455;
            org$pandalanguage$pandac$Type* $tmp2457 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2383);
            panda$core$String* $tmp2458 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2457);
            baseType2456 = $tmp2458;
            panda$core$String* $tmp2461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2456, &$s2460);
            ptrType2459 = $tmp2461;
            panda$core$String* $tmp2463 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2462 = $tmp2463;
            panda$core$String* $tmp2464 = panda$core$String$convert$R$panda$core$String(cast2462);
            panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2464, &$s2465);
            panda$core$String* $tmp2467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, ptr2453);
            panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, &$s2468);
            panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, ptrType2459);
            panda$core$String* $tmp2472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2471);
            (($fn2473) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2472);
            panda$core$String* $tmp2475 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2474 = $tmp2475;
            panda$core$String* $tmp2476 = panda$core$String$convert$R$panda$core$String(load2474);
            panda$core$String* $tmp2478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2476, &$s2477);
            panda$core$String* $tmp2479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2478, baseType2456);
            panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, &$s2480);
            panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2481, ptrType2459);
            panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2482, &$s2483);
            panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2484, cast2462);
            panda$core$String* $tmp2487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2485, &$s2486);
            (($fn2488) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2487);
            return load2474;
        }
        }
        else {
        panda$core$Bit $tmp2490 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1204_92384, &$s2489);
        if ($tmp2490.value) {
        {
            panda$core$Int64 $tmp2491 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2491, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2492.value);
            panda$core$Object* $tmp2494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2495 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2494), p_out);
            ptr2493 = $tmp2495;
            org$pandalanguage$pandac$Type* $tmp2497 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2383);
            panda$core$String* $tmp2498 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2497);
            baseType2496 = $tmp2498;
            panda$core$String* $tmp2501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2496, &$s2500);
            ptrType2499 = $tmp2501;
            panda$core$String* $tmp2503 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2502 = $tmp2503;
            panda$core$String* $tmp2504 = panda$core$String$convert$R$panda$core$String(cast2502);
            panda$core$String* $tmp2506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2504, &$s2505);
            panda$core$String* $tmp2507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2506, ptr2493);
            panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2507, &$s2508);
            panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2509, ptrType2499);
            panda$core$String* $tmp2512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2510, &$s2511);
            (($fn2513) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2512);
            panda$core$Object* $tmp2515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2516 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2515), p_out);
            indexStruct2514 = $tmp2516;
            panda$core$String* $tmp2518 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2517 = $tmp2518;
            panda$core$String* $tmp2519 = panda$core$String$convert$R$panda$core$String(index2517);
            panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2519, &$s2520);
            panda$core$String* $tmp2522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2521, indexStruct2514);
            panda$core$String* $tmp2524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2522, &$s2523);
            (($fn2525) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2524);
            panda$core$String* $tmp2527 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2526 = $tmp2527;
            panda$core$String* $tmp2528 = panda$core$String$convert$R$panda$core$String(offsetPtr2526);
            panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, &$s2529);
            panda$core$String* $tmp2531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, baseType2496);
            panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, &$s2532);
            panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, ptrType2499);
            panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, &$s2535);
            panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, cast2502);
            panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, &$s2538);
            panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2540, index2517);
            panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2542);
            panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2539, $tmp2543);
            (($fn2545) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2544);
            panda$core$String* $tmp2547 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2546 = $tmp2547;
            panda$core$String* $tmp2548 = panda$core$String$convert$R$panda$core$String(load2546);
            panda$core$String* $tmp2550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2548, &$s2549);
            panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2550, baseType2496);
            panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2551, &$s2552);
            panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, ptrType2499);
            panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, &$s2555);
            panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2556, offsetPtr2526);
            panda$core$String* $tmp2559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, &$s2558);
            (($fn2560) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2559);
            return load2546;
        }
        }
        else {
        panda$core$Bit $tmp2562 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1204_92384, &$s2561);
        if ($tmp2562.value) {
        {
            panda$core$Int64 $tmp2563 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2563, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2564.value);
            panda$core$Object* $tmp2566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2567 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2566), p_out);
            ptr2565 = $tmp2567;
            panda$core$String* $tmp2569 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2568 = $tmp2569;
            panda$core$String* $tmp2570 = panda$core$String$convert$R$panda$core$String(ptrCast2568);
            panda$core$String* $tmp2572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2570, &$s2571);
            panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2572, ptr2565);
            panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2573, &$s2574);
            (($fn2576) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2575);
            panda$core$Object* $tmp2578 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2579 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2578), p_out);
            countStruct2577 = $tmp2579;
            panda$core$String* $tmp2581 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2580 = $tmp2581;
            panda$core$String* $tmp2582 = panda$core$String$convert$R$panda$core$String(count2580);
            panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, &$s2583);
            panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, countStruct2577);
            panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2586);
            (($fn2588) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2587);
            panda$core$String* $tmp2590 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2589 = $tmp2590;
            panda$core$String* $tmp2591 = panda$core$String$convert$R$panda$core$String(size2589);
            panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2592);
            panda$core$String* $tmp2595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, &$s2594);
            panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2595, &$s2596);
            panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, count2580);
            panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2598, &$s2599);
            org$pandalanguage$pandac$Type* $tmp2601 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2383);
            panda$core$Object* $tmp2602 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2601->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2603 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2602));
            panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2600, ((panda$core$Object*) wrap_panda$core$Int64($tmp2603)));
            (($fn2605) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2604);
            panda$core$String* $tmp2607 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2606 = $tmp2607;
            panda$core$String* $tmp2608 = panda$core$String$convert$R$panda$core$String(realloc2606);
            panda$core$String* $tmp2610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, &$s2609);
            panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2610, ptrCast2568);
            panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, &$s2612);
            panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, &$s2614);
            panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2615, &$s2616);
            panda$core$String* $tmp2618 = panda$core$String$convert$R$panda$core$String(size2589);
            panda$core$String* $tmp2620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2618, &$s2619);
            panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2617, $tmp2620);
            (($fn2622) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2621);
            panda$core$String* $tmp2624 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2623 = $tmp2624;
            panda$core$String* $tmp2625 = panda$core$String$convert$R$panda$core$String(result2623);
            panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2625, &$s2626);
            panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, realloc2606);
            panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2628, &$s2629);
            org$pandalanguage$pandac$Type* $tmp2631 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2383);
            panda$core$String* $tmp2632 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2631);
            panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2630, $tmp2632);
            panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2633, &$s2634);
            (($fn2636) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2635);
            return result2623;
        }
        }
        else {
        panda$core$Bit $tmp2638 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1204_92384, &$s2637);
        if ($tmp2638.value) {
        {
            panda$core$Int64 $tmp2639 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2639, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2640.value);
            panda$core$Object* $tmp2642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2643 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2642), p_out);
            ptr2641 = $tmp2643;
            panda$core$Object* $tmp2645 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2646 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2645)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2647 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2646));
            baseType2644 = $tmp2647;
            panda$core$Object* $tmp2649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2650 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2649), p_out);
            offsetStruct2648 = $tmp2650;
            panda$core$String* $tmp2652 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2651 = $tmp2652;
            panda$core$String* $tmp2653 = panda$core$String$convert$R$panda$core$String(offset2651);
            panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2653, &$s2654);
            panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2655, offsetStruct2648);
            panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, &$s2657);
            (($fn2659) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2658);
            panda$core$String* $tmp2661 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2660 = $tmp2661;
            panda$core$String* $tmp2662 = panda$core$String$convert$R$panda$core$String(result2660);
            panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2662, &$s2663);
            panda$core$String* $tmp2665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, baseType2644);
            panda$core$String* $tmp2667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2665, &$s2666);
            panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2667, ptr2641);
            panda$core$String* $tmp2670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2668, &$s2669);
            panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2670, offset2651);
            panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, &$s2672);
            (($fn2674) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2673);
            return result2660;
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
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, org$pandalanguage$pandac$IRNode* p_body, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2675;
    panda$core$String* selfRef2676;
    panda$core$Int64 argStart2678;
    panda$collections$Array* args2682;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2685;
    panda$core$String* end2708;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2717;
    org$pandalanguage$pandac$MethodDecl* old2724;
    panda$core$String* phi2737;
    panda$core$String* separator2747;
    panda$collections$Iterator* ret$Iter2749;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2761;
    m2675 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) m2675->owner));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2675), ((panda$core$Object*) m2675));
    selfRef2676 = &$s2677;
    panda$core$Bit $tmp2679 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2675);
    if ($tmp2679.value) {
    {
        argStart2678 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2680 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2681 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2680), p_out);
        selfRef2676 = $tmp2681;
    }
    }
    else {
    {
        argStart2678 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2683 = (panda$collections$Array*) malloc(40);
    $tmp2683->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2683->refCount.value = 1;
    panda$collections$Array$init($tmp2683);
    args2682 = $tmp2683;
    panda$core$Int64 $tmp2686 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2685, argStart2678, $tmp2686, ((panda$core$Bit) { false }));
    int64_t $tmp2688 = $tmp2685.min.value;
    panda$core$Int64 i2687 = { $tmp2688 };
    int64_t $tmp2690 = $tmp2685.max.value;
    bool $tmp2691 = $tmp2685.inclusive.value;
    if ($tmp2691) goto $l2698; else goto $l2699;
    $l2698:;
    if ($tmp2688 <= $tmp2690) goto $l2692; else goto $l2694;
    $l2699:;
    if ($tmp2688 < $tmp2690) goto $l2692; else goto $l2694;
    $l2692:;
    {
        panda$core$Object* $tmp2700 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2687);
        panda$core$String* $tmp2701 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2700), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2682, ((panda$core$Object*) $tmp2701));
    }
    $l2695:;
    int64_t $tmp2703 = $tmp2690 - i2687.value;
    if ($tmp2691) goto $l2704; else goto $l2705;
    $l2704:;
    if ($tmp2703 >= 1) goto $l2702; else goto $l2694;
    $l2705:;
    if ($tmp2703 > 1) goto $l2702; else goto $l2694;
    $l2702:;
    i2687.value += 1;
    goto $l2692;
    $l2694:;
    panda$core$String* $tmp2709 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2708 = $tmp2709;
    panda$core$Int64 $tmp2710 = panda$collections$Array$get_count$R$panda$core$Int64(args2682);
    panda$core$Int64 $tmp2711 = panda$collections$Array$get_count$R$panda$core$Int64(m2675->parameters);
    panda$core$Bit $tmp2712 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2710, $tmp2711);
    if ($tmp2712.value) {
    {
        panda$core$String* $tmp2714 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2713, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2714, &$s2715);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2716));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2718 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2718->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2718->refCount.value = 1;
    panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2720, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, &$s2722);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2718, $tmp2723, selfRef2676, ((panda$collections$ListView*) args2682), end2708);
    inline2717 = $tmp2718;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2717));
    old2724 = self->currentMethod;
    self->currentMethod = m2675;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_body, p_out);
    self->currentMethod = old2724;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2725 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2726 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2725);
    if ($tmp2726.value) {
    {
        (($fn2728) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2727);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end2708, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2675));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    panda$core$Int64 $tmp2729 = panda$collections$Array$get_count$R$panda$core$Int64(inline2717->returns);
    panda$core$Bit $tmp2730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2729, ((panda$core$Int64) { 1 }));
    if ($tmp2730.value) {
    {
        panda$core$Object* $tmp2731 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2717->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2731)->second);
    }
    }
    panda$core$Int64 $tmp2732 = panda$collections$Array$get_count$R$panda$core$Int64(inline2717->returns);
    panda$core$Bit $tmp2733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2732, ((panda$core$Int64) { 0 }));
    if ($tmp2733.value) {
    {
        (($fn2735) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s2734);
        return &$s2736;
    }
    }
    panda$core$String* $tmp2738 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2737 = $tmp2738;
    panda$core$String* $tmp2739 = panda$core$String$convert$R$panda$core$String(phi2737);
    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, &$s2740);
    panda$core$String* $tmp2742 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2675->returnType);
    panda$core$String* $tmp2743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2741, $tmp2742);
    panda$core$String* $tmp2745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2743, &$s2744);
    (($fn2746) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2745);
    separator2747 = &$s2748;
    {
        ITable* $tmp2750 = ((panda$collections$Iterable*) inline2717->returns)->$class->itable;
        while ($tmp2750->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2750 = $tmp2750->next;
        }
        $fn2752 $tmp2751 = $tmp2750->methods[0];
        panda$collections$Iterator* $tmp2753 = $tmp2751(((panda$collections$Iterable*) inline2717->returns));
        ret$Iter2749 = $tmp2753;
        $l2754:;
        ITable* $tmp2756 = ret$Iter2749->$class->itable;
        while ($tmp2756->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2756 = $tmp2756->next;
        }
        $fn2758 $tmp2757 = $tmp2756->methods[0];
        panda$core$Bit $tmp2759 = $tmp2757(ret$Iter2749);
        panda$core$Bit $tmp2760 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2759);
        if (!$tmp2760.value) goto $l2755;
        {
            ITable* $tmp2762 = ret$Iter2749->$class->itable;
            while ($tmp2762->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2762 = $tmp2762->next;
            }
            $fn2764 $tmp2763 = $tmp2762->methods[1];
            panda$core$Object* $tmp2765 = $tmp2763(ret$Iter2749);
            ret2761 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2765);
            panda$core$String* $tmp2766 = panda$core$String$convert$R$panda$core$String(separator2747);
            panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2766, &$s2767);
            panda$core$String* $tmp2769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2768, ((panda$core$String*) ret2761->second));
            panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2769, &$s2770);
            panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2771, ((panda$core$String*) ret2761->first));
            panda$core$String* $tmp2774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2772, &$s2773);
            (($fn2775) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2774);
            separator2747 = &$s2776;
        }
        goto $l2754;
        $l2755:;
    }
    (($fn2777) ((panda$io$OutputStream*) p_out)->$class->vtable[17])(((panda$io$OutputStream*) p_out));
    return phi2737;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2779;
    panda$core$String* bit2789;
    panda$core$String* result2793;
    panda$core$String* bit2807;
    panda$core$String* result2811;
    org$pandalanguage$pandac$IRNode* block2826;
    panda$collections$Array* args2830;
    org$pandalanguage$pandac$Type* actualMethodType2834;
    panda$core$String* actualResultType2835;
    panda$core$Bit isSuper2836;
    panda$core$Int64 offset2856;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2861;
    panda$core$String* arg2876;
    panda$core$String* target2908;
    panda$core$String* methodRef2912;
    panda$core$String* result2914;
    panda$core$Bit indirect2915;
    panda$core$String* separator2940;
    panda$core$String* indirectVar2942;
    panda$collections$Iterator* arg$Iter2961;
    panda$core$String* arg2973;
    panda$core$Bit $tmp2778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2778.value);
    m2779 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2781 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2779->owner)->name, &$s2780);
    if ($tmp2781.value) {
    {
        panda$core$String* $tmp2782 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2782;
    }
    }
    if (m2779->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2779);
    }
    }
    panda$core$Bit $tmp2784 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2779->owner)->name, &$s2783);
    if ($tmp2784.value) {
    {
        panda$core$Bit $tmp2786 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2779)->name, &$s2785);
        if ($tmp2786.value) {
        {
            panda$core$Int64 $tmp2787 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2787, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2788.value);
            panda$core$Object* $tmp2790 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2791 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2792 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2790), ((org$pandalanguage$pandac$IRNode*) $tmp2791), p_out);
            bit2789 = $tmp2792;
            panda$core$String* $tmp2794 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2793 = $tmp2794;
            panda$core$String* $tmp2795 = panda$core$String$convert$R$panda$core$String(result2793);
            panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, &$s2796);
            panda$core$String* $tmp2798 = panda$core$String$convert$R$panda$core$String(bit2789);
            panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2798, &$s2799);
            panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2797, $tmp2800);
            (($fn2802) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2801);
            return result2793;
        }
        }
        panda$core$Bit $tmp2804 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2779)->name, &$s2803);
        if ($tmp2804.value) {
        {
            panda$core$Int64 $tmp2805 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2805, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2806.value);
            panda$core$Object* $tmp2808 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2809 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2810 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2808), ((org$pandalanguage$pandac$IRNode*) $tmp2809), p_out);
            bit2807 = $tmp2810;
            panda$core$String* $tmp2812 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2811 = $tmp2812;
            panda$core$String* $tmp2813 = panda$core$String$convert$R$panda$core$String(result2811);
            panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, &$s2814);
            panda$core$String* $tmp2816 = panda$core$String$convert$R$panda$core$String(bit2807);
            panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, &$s2817);
            panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, $tmp2818);
            (($fn2820) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2819);
            return result2811;
        }
        }
    }
    }
    panda$core$Bit $tmp2822 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2779->annotations);
    bool $tmp2821 = $tmp2822.value;
    if (!$tmp2821) goto $l2823;
    panda$core$Object* $tmp2824 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2779));
    $tmp2821 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp2824) == NULL }).value;
    $l2823:;
    panda$core$Bit $tmp2825 = { $tmp2821 };
    if ($tmp2825.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2827 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2779);
        block2826 = $tmp2827;
        if (((panda$core$Bit) { block2826 != NULL }).value) {
        {
            panda$core$String* $tmp2828 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, block2826, p_out);
            return $tmp2828;
        }
        }
        return &$s2829;
    }
    }
    panda$collections$Array* $tmp2831 = (panda$collections$Array*) malloc(40);
    $tmp2831->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2831->refCount.value = 1;
    panda$core$Int64 $tmp2833 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp2831, $tmp2833);
    args2830 = $tmp2831;
    panda$core$Int64 $tmp2838 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2839 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2838, ((panda$core$Int64) { 1 }));
    bool $tmp2837 = $tmp2839.value;
    if (!$tmp2837) goto $l2840;
    panda$core$Object* $tmp2841 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2841)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2837 = $tmp2842.value;
    $l2840:;
    panda$core$Bit $tmp2843 = { $tmp2837 };
    isSuper2836 = $tmp2843;
    panda$core$Bit $tmp2845 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2836);
    bool $tmp2844 = $tmp2845.value;
    if (!$tmp2844) goto $l2846;
    panda$core$Bit $tmp2847 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2779);
    $tmp2844 = $tmp2847.value;
    $l2846:;
    panda$core$Bit $tmp2848 = { $tmp2844 };
    if ($tmp2848.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2849 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2779);
        actualMethodType2834 = $tmp2849;
        panda$core$Int64 $tmp2850 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2834->subtypes);
        panda$core$Int64 $tmp2851 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2850, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2852 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2834->subtypes, $tmp2851);
        panda$core$String* $tmp2853 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2852));
        actualResultType2835 = $tmp2853;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2854 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2779);
        actualMethodType2834 = $tmp2854;
        panda$core$String* $tmp2855 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2835 = $tmp2855;
    }
    }
    panda$core$Int64 $tmp2857 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2858 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2834->subtypes);
    panda$core$Int64 $tmp2859 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2857, $tmp2858);
    panda$core$Int64 $tmp2860 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2859, ((panda$core$Int64) { 1 }));
    offset2856 = $tmp2860;
    panda$core$Int64 $tmp2862 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2861, ((panda$core$Int64) { 0 }), $tmp2862, ((panda$core$Bit) { false }));
    int64_t $tmp2864 = $tmp2861.min.value;
    panda$core$Int64 i2863 = { $tmp2864 };
    int64_t $tmp2866 = $tmp2861.max.value;
    bool $tmp2867 = $tmp2861.inclusive.value;
    if ($tmp2867) goto $l2874; else goto $l2875;
    $l2874:;
    if ($tmp2864 <= $tmp2866) goto $l2868; else goto $l2870;
    $l2875:;
    if ($tmp2864 < $tmp2866) goto $l2868; else goto $l2870;
    $l2868:;
    {
        panda$core$Object* $tmp2877 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2863);
        panda$core$String* $tmp2878 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2877), p_out);
        arg2876 = $tmp2878;
        panda$core$Bit $tmp2880 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2863, offset2856);
        bool $tmp2879 = $tmp2880.value;
        if (!$tmp2879) goto $l2881;
        panda$core$Int64 $tmp2882 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2863, offset2856);
        panda$core$Object* $tmp2883 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2834->subtypes, $tmp2882);
        panda$core$Object* $tmp2884 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2863);
        panda$core$Bit $tmp2885 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2883), ((org$pandalanguage$pandac$IRNode*) $tmp2884)->type);
        $tmp2879 = $tmp2885.value;
        $l2881:;
        panda$core$Bit $tmp2886 = { $tmp2879 };
        if ($tmp2886.value) {
        {
            panda$core$Int64 $tmp2887 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2863, offset2856);
            panda$core$Object* $tmp2888 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2834->subtypes, $tmp2887);
            panda$core$String* $tmp2889 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2888));
            panda$core$String* $tmp2891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, &$s2890);
            panda$core$Object* $tmp2892 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2863);
            panda$core$Int64 $tmp2893 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2863, offset2856);
            panda$core$Object* $tmp2894 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2834->subtypes, $tmp2893);
            panda$core$String* $tmp2895 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2876, ((org$pandalanguage$pandac$IRNode*) $tmp2892)->type, ((org$pandalanguage$pandac$Type*) $tmp2894), p_out);
            panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2891, $tmp2895);
            arg2876 = $tmp2896;
        }
        }
        else {
        {
            panda$core$Object* $tmp2897 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2863);
            panda$core$String* $tmp2898 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2897)->type);
            panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2898, &$s2899);
            panda$core$String* $tmp2901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2900, arg2876);
            arg2876 = $tmp2901;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2830, ((panda$core$Object*) arg2876));
    }
    $l2871:;
    int64_t $tmp2903 = $tmp2866 - i2863.value;
    if ($tmp2867) goto $l2904; else goto $l2905;
    $l2904:;
    if ($tmp2903 >= 1) goto $l2902; else goto $l2870;
    $l2905:;
    if ($tmp2903 > 1) goto $l2902; else goto $l2870;
    $l2902:;
    i2863.value += 1;
    goto $l2868;
    $l2870:;
    panda$core$Int64 $tmp2909 = panda$collections$Array$get_count$R$panda$core$Int64(args2830);
    panda$core$Bit $tmp2910 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2909, ((panda$core$Int64) { 0 }));
    if ($tmp2910.value) {
    {
        panda$core$Object* $tmp2911 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2830, ((panda$core$Int64) { 0 }));
        target2908 = ((panda$core$String*) $tmp2911);
    }
    }
    else {
    {
        target2908 = NULL;
    }
    }
    panda$core$String* $tmp2913 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target2908, m2779, isSuper2836, p_out);
    methodRef2912 = $tmp2913;
    panda$core$Bit $tmp2916 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2779);
    indirect2915 = $tmp2916;
    if (indirect2915.value) {
    {
        panda$core$String* $tmp2918 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2779);
        panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2917, $tmp2918);
        panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, &$s2920);
        (($fn2922) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2921);
    }
    }
    else {
    {
        panda$core$String* $tmp2923 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2914 = $tmp2923;
        panda$core$String* $tmp2924 = panda$core$String$convert$R$panda$core$String(result2914);
        panda$core$String* $tmp2926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, &$s2925);
        panda$core$String* $tmp2927 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2779);
        panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2926, $tmp2927);
        panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2928, &$s2929);
        panda$core$String* $tmp2931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, actualResultType2835);
        panda$core$String* $tmp2933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2931, &$s2932);
        (($fn2934) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2933);
    }
    }
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2935, methodRef2912);
    panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2936, &$s2937);
    (($fn2939) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2938);
    separator2940 = &$s2941;
    if (indirect2915.value) {
    {
        panda$core$Int64 $tmp2943 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp2943;
        panda$core$String* $tmp2945 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2944, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar2942 = $tmp2945;
        panda$core$String* $tmp2946 = panda$core$String$convert$R$panda$core$String(indirectVar2942);
        panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, &$s2947);
        panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, actualResultType2835);
        panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, &$s2950);
        (($fn2952) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2951);
        panda$core$String* $tmp2953 = panda$core$String$convert$R$panda$core$String(actualResultType2835);
        panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, &$s2954);
        panda$core$String* $tmp2956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2955, indirectVar2942);
        panda$core$String* $tmp2958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2956, &$s2957);
        (($fn2959) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2958);
        separator2940 = &$s2960;
    }
    }
    {
        ITable* $tmp2962 = ((panda$collections$Iterable*) args2830)->$class->itable;
        while ($tmp2962->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2962 = $tmp2962->next;
        }
        $fn2964 $tmp2963 = $tmp2962->methods[0];
        panda$collections$Iterator* $tmp2965 = $tmp2963(((panda$collections$Iterable*) args2830));
        arg$Iter2961 = $tmp2965;
        $l2966:;
        ITable* $tmp2968 = arg$Iter2961->$class->itable;
        while ($tmp2968->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2968 = $tmp2968->next;
        }
        $fn2970 $tmp2969 = $tmp2968->methods[0];
        panda$core$Bit $tmp2971 = $tmp2969(arg$Iter2961);
        panda$core$Bit $tmp2972 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2971);
        if (!$tmp2972.value) goto $l2967;
        {
            ITable* $tmp2974 = arg$Iter2961->$class->itable;
            while ($tmp2974->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2974 = $tmp2974->next;
            }
            $fn2976 $tmp2975 = $tmp2974->methods[1];
            panda$core$Object* $tmp2977 = $tmp2975(arg$Iter2961);
            arg2973 = ((panda$core$String*) $tmp2977);
            panda$core$String* $tmp2978 = panda$core$String$convert$R$panda$core$String(separator2940);
            panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, &$s2979);
            panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, arg2973);
            panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
            (($fn2984) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2983);
            separator2940 = &$s2985;
        }
        goto $l2966;
        $l2967:;
    }
    (($fn2987) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2986);
    if (indirect2915.value) {
    {
        panda$core$String* $tmp2988 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2914 = $tmp2988;
        panda$core$String* $tmp2989 = panda$core$String$convert$R$panda$core$String(result2914);
        panda$core$String* $tmp2991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2989, &$s2990);
        panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2991, actualResultType2835);
        panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2992, &$s2993);
        panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2994, actualResultType2835);
        panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, &$s2996);
        panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, indirectVar2942);
        (($fn2999) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2998);
    }
    }
    panda$core$String* $tmp3000 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3001 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3000, actualResultType2835);
    if ($tmp3001.value) {
    {
        panda$core$Int64 $tmp3002 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2834->subtypes);
        panda$core$Int64 $tmp3003 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3002, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3004 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2834->subtypes, $tmp3003);
        panda$core$String* $tmp3005 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result2914, ((org$pandalanguage$pandac$Type*) $tmp3004), p_call->type, p_out);
        return $tmp3005;
    }
    }
    return result2914;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3006;
    panda$core$String* testStart3009;
    panda$core$String* isNonNull3010;
    panda$core$String* nonNullLabel3023;
    panda$core$String* endLabel3025;
    panda$core$String* unwrapped3038;
    panda$core$String* nonNullValue3041;
    panda$core$String* result3049;
    panda$core$String* mallocRef3070;
    panda$core$String* wrapperTypeName3081;
    panda$core$String* wrapperType3084;
    panda$core$String* wrapperCast3087;
    panda$core$String* classPtr3099;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3115;
    panda$core$String* refCount3130;
    panda$core$String* target3151;
    panda$core$String* result3185;
    org$pandalanguage$pandac$ClassDecl* $tmp3007 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3006 = $tmp3007;
    PANDA_ASSERT(((panda$core$Bit) { src3006 != NULL }).value);
    panda$core$Bit $tmp3008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3008.value) {
    {
        testStart3009 = self->currentBlock;
        panda$core$String* $tmp3011 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3010 = $tmp3011;
        panda$core$String* $tmp3012 = panda$core$String$convert$R$panda$core$String(isNonNull3010);
        panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, &$s3013);
        panda$core$String* $tmp3015 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3014, $tmp3015);
        panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3017);
        panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, p_value);
        panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, &$s3020);
        (($fn3022) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3021);
        panda$core$String* $tmp3024 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3023 = $tmp3024;
        panda$core$String* $tmp3026 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3025 = $tmp3026;
        panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3027, isNonNull3010);
        panda$core$String* $tmp3030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3028, &$s3029);
        panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3030, nonNullLabel3023);
        panda$core$String* $tmp3033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3031, &$s3032);
        panda$core$String* $tmp3034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3033, endLabel3025);
        panda$core$String* $tmp3036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3034, &$s3035);
        (($fn3037) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3036);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3023, p_out);
        panda$core$Object* $tmp3039 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3040 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3039), p_out);
        unwrapped3038 = $tmp3040;
        panda$core$Object* $tmp3042 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3043 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped3038, ((org$pandalanguage$pandac$Type*) $tmp3042), p_dstType, p_out);
        nonNullValue3041 = $tmp3043;
        panda$core$String* $tmp3045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3044, endLabel3025);
        panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3045, &$s3046);
        (($fn3048) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3047);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3025, p_out);
        panda$core$String* $tmp3050 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3049 = $tmp3050;
        panda$core$String* $tmp3051 = panda$core$String$convert$R$panda$core$String(result3049);
        panda$core$String* $tmp3053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3051, &$s3052);
        panda$core$String* $tmp3054 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3053, $tmp3054);
        panda$core$String* $tmp3057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3055, &$s3056);
        panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3057, testStart3009);
        panda$core$String* $tmp3060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, &$s3059);
        panda$core$String* $tmp3062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3061, nonNullValue3041);
        panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3062, &$s3063);
        panda$core$String* $tmp3065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, nonNullLabel3023);
        panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3065, &$s3066);
        panda$core$String* $tmp3068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3060, $tmp3067);
        (($fn3069) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3068);
        return result3049;
    }
    }
    panda$core$String* $tmp3071 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3070 = $tmp3071;
    panda$core$String* $tmp3072 = panda$core$String$convert$R$panda$core$String(mallocRef3070);
    panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3072, &$s3073);
    org$pandalanguage$pandac$Type* $tmp3075 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3006);
    panda$core$Int64 $tmp3076 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3075);
    panda$core$String* $tmp3077 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3074, ((panda$core$Object*) wrap_panda$core$Int64($tmp3076)));
    panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3077, &$s3078);
    (($fn3080) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3079);
    org$pandalanguage$pandac$Type* $tmp3082 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3006);
    panda$core$String* $tmp3083 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3082);
    wrapperTypeName3081 = $tmp3083;
    org$pandalanguage$pandac$Type* $tmp3085 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3006);
    panda$core$String* $tmp3086 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3085);
    wrapperType3084 = $tmp3086;
    panda$core$String* $tmp3088 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3087 = $tmp3088;
    panda$core$String* $tmp3089 = panda$core$String$convert$R$panda$core$String(wrapperCast3087);
    panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3089, &$s3090);
    panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3091, mallocRef3070);
    panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3093);
    panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, wrapperType3084);
    panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, &$s3096);
    (($fn3098) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3097);
    panda$core$String* $tmp3100 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3099 = $tmp3100;
    panda$core$String* $tmp3101 = panda$core$String$convert$R$panda$core$String(classPtr3099);
    panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3101, &$s3102);
    panda$core$String* $tmp3104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3103, wrapperTypeName3081);
    panda$core$String* $tmp3106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3104, &$s3105);
    panda$core$String* $tmp3107 = panda$core$String$convert$R$panda$core$String(wrapperType3084);
    panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, &$s3108);
    panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, wrapperCast3087);
    panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, &$s3111);
    panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3106, $tmp3112);
    (($fn3114) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3113);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3116 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3006);
    cc3115 = $tmp3116;
    panda$core$String* $tmp3118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3117, cc3115->type);
    panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3118, &$s3119);
    panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3120, cc3115->name);
    panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, &$s3122);
    panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3124, classPtr3099);
    panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3125, &$s3126);
    panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3123, $tmp3127);
    (($fn3129) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3128);
    panda$core$String* $tmp3131 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3130 = $tmp3131;
    panda$core$String* $tmp3132 = panda$core$String$convert$R$panda$core$String(refCount3130);
    panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3132, &$s3133);
    panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3134, wrapperTypeName3081);
    panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, &$s3136);
    panda$core$String* $tmp3138 = panda$core$String$convert$R$panda$core$String(wrapperType3084);
    panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3138, &$s3139);
    panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3140, wrapperCast3087);
    panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, &$s3142);
    panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, $tmp3143);
    (($fn3145) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3144);
    panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3146, refCount3130);
    panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, &$s3148);
    (($fn3150) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3149);
    panda$core$String* $tmp3152 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3151 = $tmp3152;
    panda$core$String* $tmp3153 = panda$core$String$convert$R$panda$core$String(target3151);
    panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3153, &$s3154);
    panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, wrapperTypeName3081);
    panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3156, &$s3157);
    panda$core$String* $tmp3159 = panda$core$String$convert$R$panda$core$String(wrapperType3084);
    panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, &$s3160);
    panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, wrapperCast3087);
    panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, &$s3163);
    panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, $tmp3164);
    (($fn3166) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3165);
    panda$core$String* $tmp3168 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3167, $tmp3168);
    panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, &$s3170);
    panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, p_value);
    panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3172, &$s3173);
    panda$core$String* $tmp3175 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, $tmp3175);
    panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, &$s3177);
    panda$core$String* $tmp3179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, target3151);
    panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3179, &$s3180);
    (($fn3182) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3181);
    panda$core$String* $tmp3183 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3184 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3084, $tmp3183);
    if ($tmp3184.value) {
    {
        panda$core$String* $tmp3186 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3185 = $tmp3186;
        panda$core$String* $tmp3187 = panda$core$String$convert$R$panda$core$String(result3185);
        panda$core$String* $tmp3189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3187, &$s3188);
        panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3189, wrapperType3084);
        panda$core$String* $tmp3192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3190, &$s3191);
        panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3192, wrapperCast3087);
        panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3193, &$s3194);
        panda$core$String* $tmp3196 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, $tmp3196);
        panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, &$s3198);
        (($fn3200) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3199);
        return result3185;
    }
    }
    return wrapperCast3087;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3204;
    panda$core$String* t3205;
    org$pandalanguage$pandac$ClassDecl* cl3209;
    panda$core$String* base3213;
    panda$collections$ListView* fields3216;
    panda$core$Int64$nullable index3218;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3219;
    panda$core$String* result3247;
    panda$core$String* ptr3266;
    panda$core$String* result3274;
    panda$core$Bit $tmp3201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3201.value);
    panda$core$Int64 $tmp3202 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3202, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3203.value);
    field3204 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3206 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3204->type);
    t3205 = $tmp3206;
    panda$core$Bit $tmp3207 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3204->annotations);
    if ($tmp3207.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3204->value != NULL }).value);
        panda$core$String* $tmp3208 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field3204->value, p_out);
        return $tmp3208;
    }
    }
    panda$core$Object* $tmp3210 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3211 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3210)->type);
    cl3209 = $tmp3211;
    PANDA_ASSERT(((panda$core$Bit) { cl3209 != NULL }).value);
    panda$core$Bit $tmp3212 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3209);
    if ($tmp3212.value) {
    {
        panda$core$Object* $tmp3214 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3215 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3214), p_out);
        base3213 = $tmp3215;
        panda$collections$ListView* $tmp3217 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3209);
        fields3216 = $tmp3217;
        index3218 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3220 = ((panda$collections$CollectionView*) fields3216)->$class->itable;
        while ($tmp3220->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3220 = $tmp3220->next;
        }
        $fn3222 $tmp3221 = $tmp3220->methods[0];
        panda$core$Int64 $tmp3223 = $tmp3221(((panda$collections$CollectionView*) fields3216));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3219, ((panda$core$Int64) { 0 }), $tmp3223, ((panda$core$Bit) { false }));
        int64_t $tmp3225 = $tmp3219.min.value;
        panda$core$Int64 i3224 = { $tmp3225 };
        int64_t $tmp3227 = $tmp3219.max.value;
        bool $tmp3228 = $tmp3219.inclusive.value;
        if ($tmp3228) goto $l3235; else goto $l3236;
        $l3235:;
        if ($tmp3225 <= $tmp3227) goto $l3229; else goto $l3231;
        $l3236:;
        if ($tmp3225 < $tmp3227) goto $l3229; else goto $l3231;
        $l3229:;
        {
            ITable* $tmp3237 = fields3216->$class->itable;
            while ($tmp3237->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3237 = $tmp3237->next;
            }
            $fn3239 $tmp3238 = $tmp3237->methods[0];
            panda$core$Object* $tmp3240 = $tmp3238(fields3216, i3224);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3240)) == ((panda$core$Object*) field3204) }).value) {
            {
                index3218 = ((panda$core$Int64$nullable) { i3224, true });
                goto $l3231;
            }
            }
        }
        $l3232:;
        int64_t $tmp3242 = $tmp3227 - i3224.value;
        if ($tmp3228) goto $l3243; else goto $l3244;
        $l3243:;
        if ($tmp3242 >= 1) goto $l3241; else goto $l3231;
        $l3244:;
        if ($tmp3242 > 1) goto $l3241; else goto $l3231;
        $l3241:;
        i3224.value += 1;
        goto $l3229;
        $l3231:;
        PANDA_ASSERT(((panda$core$Bit) { index3218.nonnull }).value);
        panda$core$String* $tmp3248 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3247 = $tmp3248;
        panda$core$String* $tmp3249 = panda$core$String$convert$R$panda$core$String(result3247);
        panda$core$String* $tmp3251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, &$s3250);
        panda$core$Object* $tmp3252 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3253 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3252)->type);
        panda$core$String* $tmp3254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3251, $tmp3253);
        panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3254, &$s3255);
        panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, base3213);
        panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3257, &$s3258);
        panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3260, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3218.value))));
        panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3261, &$s3262);
        panda$core$String* $tmp3264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3259, $tmp3263);
        (($fn3265) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3264);
        return result3247;
    }
    }
    panda$core$String* $tmp3267 = panda$core$String$convert$R$panda$core$String(t3205);
    panda$core$String* $tmp3269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3267, &$s3268);
    panda$core$String* $tmp3270 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3269, $tmp3270);
    panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3271, &$s3272);
    ptr3266 = $tmp3273;
    panda$core$String* $tmp3275 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3274 = $tmp3275;
    panda$core$String* $tmp3276 = panda$core$String$convert$R$panda$core$String(result3274);
    panda$core$String* $tmp3278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3276, &$s3277);
    panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3278, t3205);
    panda$core$String* $tmp3281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3279, &$s3280);
    panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3281, ptr3266);
    panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, &$s3283);
    (($fn3285) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3284);
    return result3274;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3286;
    panda$core$String* testStart3289;
    panda$core$String* isNonNull3290;
    panda$core$String* nonNullLabel3303;
    panda$core$String* endLabel3305;
    panda$core$String* wrapped3318;
    panda$core$String* nonNullValue3321;
    panda$core$String* result3329;
    panda$core$String* targetType3357;
    panda$core$String* wrapperTypeName3359;
    panda$core$String* wrapperType3361;
    panda$core$String* srcCast3363;
    panda$core$String* load3379;
    panda$core$String* result3394;
    org$pandalanguage$pandac$ClassDecl* $tmp3287 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3286 = $tmp3287;
    PANDA_ASSERT(((panda$core$Bit) { target3286 != NULL }).value);
    panda$core$Bit $tmp3288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3288.value) {
    {
        testStart3289 = self->currentBlock;
        panda$core$String* $tmp3291 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3290 = $tmp3291;
        panda$core$String* $tmp3292 = panda$core$String$convert$R$panda$core$String(isNonNull3290);
        panda$core$String* $tmp3294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3292, &$s3293);
        panda$core$String* $tmp3295 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3294, $tmp3295);
        panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, &$s3297);
        panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3298, p_value);
        panda$core$String* $tmp3301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3299, &$s3300);
        (($fn3302) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3301);
        panda$core$String* $tmp3304 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3303 = $tmp3304;
        panda$core$String* $tmp3306 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3305 = $tmp3306;
        panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3307, isNonNull3290);
        panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3308, &$s3309);
        panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, nonNullLabel3303);
        panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3311, &$s3312);
        panda$core$String* $tmp3314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3313, endLabel3305);
        panda$core$String* $tmp3316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3314, &$s3315);
        (($fn3317) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3316);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3303, p_out);
        panda$core$Object* $tmp3319 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3320 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3319), p_out);
        wrapped3318 = $tmp3320;
        panda$core$Object* $tmp3322 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3323 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped3318, ((org$pandalanguage$pandac$Type*) $tmp3322), p_dstType, p_out);
        nonNullValue3321 = $tmp3323;
        panda$core$String* $tmp3325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3324, endLabel3305);
        panda$core$String* $tmp3327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3325, &$s3326);
        (($fn3328) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3327);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3305, p_out);
        panda$core$String* $tmp3330 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3329 = $tmp3330;
        panda$core$String* $tmp3331 = panda$core$String$convert$R$panda$core$String(result3329);
        panda$core$String* $tmp3333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3331, &$s3332);
        panda$core$String* $tmp3334 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3333, $tmp3334);
        panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, &$s3336);
        panda$core$Object* $tmp3339 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3340 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3339));
        panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3338, $tmp3340);
        panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
        panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, $tmp3343);
        panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3345, testStart3289);
        panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, &$s3347);
        panda$core$String* $tmp3349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3348, nonNullValue3321);
        panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3349, &$s3350);
        panda$core$String* $tmp3352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3351, nonNullLabel3303);
        panda$core$String* $tmp3354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3352, &$s3353);
        panda$core$String* $tmp3355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3344, $tmp3354);
        (($fn3356) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3355);
        return result3329;
    }
    }
    panda$core$String* $tmp3358 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3357 = $tmp3358;
    panda$core$String* $tmp3360 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3359 = $tmp3360;
    panda$core$String* $tmp3362 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3361 = $tmp3362;
    panda$core$String* $tmp3364 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3363 = $tmp3364;
    panda$core$String* $tmp3365 = panda$core$String$convert$R$panda$core$String(srcCast3363);
    panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, &$s3366);
    panda$core$String* $tmp3368 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3367, $tmp3368);
    panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3369, &$s3370);
    panda$core$String* $tmp3372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3371, p_value);
    panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3372, &$s3373);
    panda$core$String* $tmp3375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3374, wrapperType3361);
    panda$core$String* $tmp3377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3375, &$s3376);
    (($fn3378) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3377);
    panda$core$String* $tmp3380 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3379 = $tmp3380;
    panda$core$String* $tmp3381 = panda$core$String$convert$R$panda$core$String(load3379);
    panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3381, &$s3382);
    panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3383, wrapperTypeName3359);
    panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3384, &$s3385);
    panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, wrapperType3361);
    panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, &$s3388);
    panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3389, srcCast3363);
    panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, &$s3391);
    (($fn3393) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3392);
    panda$core$String* $tmp3395 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3394 = $tmp3395;
    panda$core$String* $tmp3396 = panda$core$String$convert$R$panda$core$String(result3394);
    panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3396, &$s3397);
    panda$core$String* $tmp3399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3398, wrapperTypeName3359);
    panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3399, &$s3400);
    panda$core$String* $tmp3402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3401, load3379);
    panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3402, &$s3403);
    panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3404, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, &$s3406);
    (($fn3408) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3407);
    return result3394;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* nullableType3409;
    panda$core$String* result3411;
    panda$core$String* $tmp3410 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3409 = $tmp3410;
    panda$core$String* $tmp3412 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3411 = $tmp3412;
    panda$core$String* $tmp3413 = panda$core$String$convert$R$panda$core$String(result3411);
    panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, &$s3414);
    panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3415, nullableType3409);
    panda$core$String* $tmp3418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3416, &$s3417);
    panda$core$String* $tmp3420 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3419, $tmp3420);
    panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3421, &$s3422);
    panda$core$String* $tmp3424 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, $tmp3424);
    panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3425, &$s3426);
    panda$core$String* $tmp3428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3427, p_value);
    panda$core$String* $tmp3430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3428, &$s3429);
    panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3418, $tmp3430);
    (($fn3432) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3431);
    return result3411;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3433;
    panda$core$String* $tmp3434 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3433 = $tmp3434;
    panda$core$String* $tmp3435 = panda$core$String$convert$R$panda$core$String(result3433);
    panda$core$String* $tmp3437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3435, &$s3436);
    panda$core$String* $tmp3438 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3437, $tmp3438);
    panda$core$String* $tmp3441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3439, &$s3440);
    panda$core$String* $tmp3442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3441, p_value);
    panda$core$String* $tmp3444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3442, &$s3443);
    (($fn3445) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3444);
    return result3433;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op3446;
    panda$core$Int64 size13449;
    panda$core$Int64 size23451;
    org$pandalanguage$pandac$ClassDecl* srcClass3459;
    org$pandalanguage$pandac$ClassDecl* targetClass3461;
    panda$core$String* srcType3500;
    panda$core$String* dstType3502;
    panda$core$String* result3505;
    panda$core$Bit $tmp3447 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3447.value) {
    {
        panda$core$Bit $tmp3448 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3448.value);
        panda$core$Int64 $tmp3450 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13449 = $tmp3450;
        panda$core$Int64 $tmp3452 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23451 = $tmp3452;
        panda$core$Bit $tmp3453 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13449, size23451);
        if ($tmp3453.value) {
        {
            op3446 = &$s3454;
        }
        }
        else {
        panda$core$Bit $tmp3455 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13449, size23451);
        if ($tmp3455.value) {
        {
            panda$core$Bit $tmp3456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3456.value) {
            {
                op3446 = &$s3457;
            }
            }
            else {
            {
                op3446 = &$s3458;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3460 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3459 = $tmp3460;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3459 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3462 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3461 = $tmp3462;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3461 != NULL }).value);
        panda$core$Bit $tmp3464 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3459);
        bool $tmp3463 = $tmp3464.value;
        if (!$tmp3463) goto $l3465;
        panda$core$Bit $tmp3466 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3461);
        panda$core$Bit $tmp3467 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3466);
        $tmp3463 = $tmp3467.value;
        $l3465:;
        panda$core$Bit $tmp3468 = { $tmp3463 };
        if ($tmp3468.value) {
        {
            panda$core$String* $tmp3469 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3469;
        }
        }
        else {
        panda$core$Bit $tmp3471 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3459);
        panda$core$Bit $tmp3472 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3471);
        bool $tmp3470 = $tmp3472.value;
        if (!$tmp3470) goto $l3473;
        panda$core$Bit $tmp3474 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3461);
        $tmp3470 = $tmp3474.value;
        $l3473:;
        panda$core$Bit $tmp3475 = { $tmp3470 };
        if ($tmp3475.value) {
        {
            panda$core$String* $tmp3476 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3476;
        }
        }
        else {
        panda$core$Bit $tmp3479 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3459);
        bool $tmp3478 = $tmp3479.value;
        if (!$tmp3478) goto $l3480;
        panda$core$Bit $tmp3481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3478 = $tmp3481.value;
        $l3480:;
        panda$core$Bit $tmp3482 = { $tmp3478 };
        bool $tmp3477 = $tmp3482.value;
        if (!$tmp3477) goto $l3483;
        panda$core$Object* $tmp3484 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3485 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3484), p_src);
        $tmp3477 = $tmp3485.value;
        $l3483:;
        panda$core$Bit $tmp3486 = { $tmp3477 };
        if ($tmp3486.value) {
        {
            panda$core$String* $tmp3487 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3487;
        }
        }
        else {
        panda$core$Bit $tmp3490 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3461);
        bool $tmp3489 = $tmp3490.value;
        if (!$tmp3489) goto $l3491;
        panda$core$Bit $tmp3492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3489 = $tmp3492.value;
        $l3491:;
        panda$core$Bit $tmp3493 = { $tmp3489 };
        bool $tmp3488 = $tmp3493.value;
        if (!$tmp3488) goto $l3494;
        panda$core$Object* $tmp3495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3496 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3495), p_target);
        $tmp3488 = $tmp3496.value;
        $l3494:;
        panda$core$Bit $tmp3497 = { $tmp3488 };
        if ($tmp3497.value) {
        {
            panda$core$String* $tmp3498 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3498;
        }
        }
        }
        }
        }
        op3446 = &$s3499;
    }
    }
    panda$core$String* $tmp3501 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3500 = $tmp3501;
    panda$core$String* $tmp3503 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3502 = $tmp3503;
    panda$core$Bit $tmp3504 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3500, dstType3502);
    if ($tmp3504.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3506 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3505 = $tmp3506;
    panda$core$String* $tmp3507 = panda$core$String$convert$R$panda$core$String(result3505);
    panda$core$String* $tmp3509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3507, &$s3508);
    panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3509, op3446);
    panda$core$String* $tmp3512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3510, &$s3511);
    panda$core$String* $tmp3513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3512, srcType3500);
    panda$core$String* $tmp3515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3513, &$s3514);
    panda$core$String* $tmp3516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3515, p_value);
    panda$core$String* $tmp3518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3516, &$s3517);
    panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3518, dstType3502);
    panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, &$s3520);
    (($fn3522) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3521);
    return result3505;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3526;
    panda$core$Bit $tmp3523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3523.value);
    panda$core$Int64 $tmp3524 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3524, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3525.value);
    panda$core$Object* $tmp3527 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3528 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3527), p_out);
    base3526 = $tmp3528;
    panda$core$Object* $tmp3529 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3530 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base3526, ((org$pandalanguage$pandac$IRNode*) $tmp3529)->type, p_cast->type, p_out);
    return $tmp3530;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3534;
    panda$core$String* t3536;
    panda$core$String* value3544;
    panda$core$String* result3555;
    org$pandalanguage$pandac$FieldDecl* lastField3557;
    panda$core$String* value3585;
    panda$core$String* result3596;
    org$pandalanguage$pandac$FieldDecl* lastField3598;
    panda$core$String* alloca3621;
    panda$core$String* result3640;
    panda$core$String* callRef3655;
    panda$core$String* result3665;
    panda$core$String* classPtr3678;
    panda$core$String* className3680;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3705;
    panda$core$Bit $tmp3531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3531.value);
    panda$core$Int64 $tmp3532 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3533 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3532, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3533.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3535 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3534 = $tmp3535;
    PANDA_ASSERT(((panda$core$Bit) { cl3534 != NULL }).value);
    panda$core$String* $tmp3537 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3536 = $tmp3537;
    panda$core$Bit $tmp3538 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3538.value) {
    {
        panda$core$Int64 $tmp3539 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3539, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3540.value);
        panda$core$Object* $tmp3541 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3542 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3541)->children);
        panda$core$Bit $tmp3543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3542, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3543.value);
        panda$core$Object* $tmp3545 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3546 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3545)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3547 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3546), p_out);
        value3544 = $tmp3547;
        panda$core$Object* $tmp3548 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3549 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3548)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3549)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3550.value) {
        {
            panda$core$String* $tmp3552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3551, value3544);
            panda$core$String* $tmp3554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3552, &$s3553);
            return $tmp3554;
        }
        }
        panda$core$String* $tmp3556 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3555 = $tmp3556;
        panda$core$Int64 $tmp3558 = panda$collections$Array$get_count$R$panda$core$Int64(cl3534->fields);
        panda$core$Int64 $tmp3559 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3558, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3560 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3534->fields, $tmp3559);
        lastField3557 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3560);
        panda$core$Bit $tmp3561 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3557->annotations);
        panda$core$Bit $tmp3562 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3561);
        PANDA_ASSERT($tmp3562.value);
        panda$core$String* $tmp3563 = panda$core$String$convert$R$panda$core$String(result3555);
        panda$core$String* $tmp3565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3563, &$s3564);
        panda$core$String* $tmp3566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3565, t3536);
        panda$core$String* $tmp3568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3566, &$s3567);
        panda$core$String* $tmp3569 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3557->type);
        panda$core$String* $tmp3570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3568, $tmp3569);
        panda$core$String* $tmp3572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3570, &$s3571);
        panda$core$String* $tmp3573 = panda$core$String$convert$R$panda$core$String(value3544);
        panda$core$String* $tmp3575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3573, &$s3574);
        panda$core$String* $tmp3576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3572, $tmp3575);
        (($fn3577) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3576);
        return result3555;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3578 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3579 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3578);
    if ($tmp3579.value) {
    {
        panda$core$Int64 $tmp3580 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3580, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3581.value);
        panda$core$Object* $tmp3582 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3583 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3582)->children);
        panda$core$Bit $tmp3584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3583, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3584.value);
        panda$core$Object* $tmp3586 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3587 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3586)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3588 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3587), p_out);
        value3585 = $tmp3588;
        panda$core$Object* $tmp3589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3589)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3590)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3591.value) {
        {
            panda$core$String* $tmp3593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3592, value3585);
            panda$core$String* $tmp3595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3593, &$s3594);
            return $tmp3595;
        }
        }
        panda$core$String* $tmp3597 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3596 = $tmp3597;
        panda$core$Int64 $tmp3599 = panda$collections$Array$get_count$R$panda$core$Int64(cl3534->fields);
        panda$core$Int64 $tmp3600 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3599, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3601 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3534->fields, $tmp3600);
        lastField3598 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3601);
        panda$core$Bit $tmp3602 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3598->annotations);
        panda$core$Bit $tmp3603 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3602);
        PANDA_ASSERT($tmp3603.value);
        panda$core$String* $tmp3604 = panda$core$String$convert$R$panda$core$String(result3596);
        panda$core$String* $tmp3606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3604, &$s3605);
        panda$core$String* $tmp3607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3606, t3536);
        panda$core$String* $tmp3609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3607, &$s3608);
        panda$core$String* $tmp3610 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3598->type);
        panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3609, $tmp3610);
        panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3611, &$s3612);
        panda$core$String* $tmp3614 = panda$core$String$convert$R$panda$core$String(value3585);
        panda$core$String* $tmp3616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3614, &$s3615);
        panda$core$String* $tmp3617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3613, $tmp3616);
        (($fn3618) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3617);
        return result3596;
    }
    }
    panda$core$Bit $tmp3619 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3534);
    if ($tmp3619.value) {
    {
        panda$core$Int64 $tmp3620 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3620;
        panda$core$String* $tmp3623 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3622, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3623, &$s3624);
        alloca3621 = $tmp3625;
        panda$core$String* $tmp3626 = panda$core$String$convert$R$panda$core$String(alloca3621);
        panda$core$String* $tmp3628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3626, &$s3627);
        panda$core$String* $tmp3629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3628, t3536);
        panda$core$String* $tmp3631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3629, &$s3630);
        (($fn3632) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3631);
        panda$core$Object* $tmp3633 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3634 = panda$core$String$convert$R$panda$core$String(t3536);
        panda$core$String* $tmp3636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3634, &$s3635);
        panda$core$String* $tmp3637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3636, alloca3621);
        panda$core$String* $tmp3639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3637, &$s3638);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3633), $tmp3639, p_out);
        panda$core$String* $tmp3641 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3640 = $tmp3641;
        panda$core$String* $tmp3642 = panda$core$String$convert$R$panda$core$String(result3640);
        panda$core$String* $tmp3644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3642, &$s3643);
        panda$core$String* $tmp3645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3644, t3536);
        panda$core$String* $tmp3647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3645, &$s3646);
        panda$core$String* $tmp3648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3647, t3536);
        panda$core$String* $tmp3650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3648, &$s3649);
        panda$core$String* $tmp3651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3650, alloca3621);
        panda$core$String* $tmp3653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3651, &$s3652);
        (($fn3654) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3653);
        return result3640;
    }
    }
    panda$core$String* $tmp3656 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3655 = $tmp3656;
    panda$core$String* $tmp3657 = panda$core$String$convert$R$panda$core$String(callRef3655);
    panda$core$String* $tmp3659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3657, &$s3658);
    panda$core$Int64 $tmp3660 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3661 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3659, ((panda$core$Object*) wrap_panda$core$Int64($tmp3660)));
    panda$core$String* $tmp3663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3661, &$s3662);
    (($fn3664) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3663);
    panda$core$String* $tmp3666 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3665 = $tmp3666;
    panda$core$String* $tmp3667 = panda$core$String$convert$R$panda$core$String(result3665);
    panda$core$String* $tmp3669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3667, &$s3668);
    panda$core$String* $tmp3670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3669, callRef3655);
    panda$core$String* $tmp3672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3670, &$s3671);
    panda$core$String* $tmp3673 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3672, $tmp3673);
    panda$core$String* $tmp3676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3674, &$s3675);
    (($fn3677) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3676);
    panda$core$String* $tmp3679 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3678 = $tmp3679;
    panda$core$Bit $tmp3682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3681 = $tmp3682.value;
    if (!$tmp3681) goto $l3683;
    panda$core$Bit $tmp3684 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3534);
    panda$core$Bit $tmp3685 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3684);
    $tmp3681 = $tmp3685.value;
    $l3683:;
    panda$core$Bit $tmp3686 = { $tmp3681 };
    if ($tmp3686.value) {
    {
        panda$core$Object* $tmp3687 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3688 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3687));
        className3680 = $tmp3688;
    }
    }
    else {
    {
        panda$core$String* $tmp3689 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3680 = $tmp3689;
    }
    }
    panda$core$String* $tmp3690 = panda$core$String$convert$R$panda$core$String(classPtr3678);
    panda$core$String* $tmp3692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3690, &$s3691);
    panda$core$String* $tmp3693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3692, className3680);
    panda$core$String* $tmp3695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3693, &$s3694);
    panda$core$String* $tmp3696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3695, t3536);
    panda$core$String* $tmp3698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3696, &$s3697);
    panda$core$String* $tmp3699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3698, result3665);
    panda$core$String* $tmp3701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3699, &$s3700);
    panda$core$String* $tmp3703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3701, &$s3702);
    (($fn3704) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3703);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3706 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3534);
    cc3705 = $tmp3706;
    panda$core$String* $tmp3708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3707, cc3705->type);
    panda$core$String* $tmp3710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3708, &$s3709);
    panda$core$String* $tmp3711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3710, cc3705->name);
    panda$core$String* $tmp3713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3711, &$s3712);
    panda$core$String* $tmp3715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3714, classPtr3678);
    panda$core$String* $tmp3717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3715, &$s3716);
    panda$core$String* $tmp3718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3713, $tmp3717);
    (($fn3719) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3718);
    panda$core$Object* $tmp3720 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3721 = panda$core$String$convert$R$panda$core$String(t3536);
    panda$core$String* $tmp3723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3721, &$s3722);
    panda$core$String* $tmp3724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3723, result3665);
    panda$core$String* $tmp3726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3724, &$s3725);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3720), $tmp3726, p_out);
    return result3665;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3727 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3727;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3729 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3728, $tmp3729);
    return $tmp3730;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3731;
    }
    }
    return &$s3732;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3735;
    panda$core$String* t3737;
    panda$core$Bit $tmp3733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3733.value) {
    {
        panda$core$String* $tmp3734 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3734;
    }
    }
    panda$core$String* $tmp3736 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3735 = $tmp3736;
    panda$core$String* $tmp3738 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3737 = $tmp3738;
    panda$core$String* $tmp3739 = panda$core$String$convert$R$panda$core$String(result3735);
    panda$core$String* $tmp3741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3739, &$s3740);
    panda$core$String* $tmp3742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3741, t3737);
    panda$core$String* $tmp3744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3742, &$s3743);
    panda$core$String* $tmp3745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3744, t3737);
    panda$core$String* $tmp3747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3745, &$s3746);
    panda$core$String* $tmp3748 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3747, $tmp3748);
    panda$core$String* $tmp3751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3749, &$s3750);
    (($fn3752) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3751);
    return result3735;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* chars3754;
    panda$core$String* charsType3759;
    panda$core$String* separator3776;
    panda$collections$Iterator* c$Iter3778;
    panda$core$Char8 c3791;
    panda$core$String* result3808;
    org$pandalanguage$pandac$ClassDecl* string3813;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3816;
    panda$core$Int64 $tmp3753 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3753;
    panda$core$String* $tmp3756 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3755, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3756, &$s3757);
    chars3754 = $tmp3758;
    panda$collections$ListView* $tmp3761 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3762 = ((panda$collections$CollectionView*) $tmp3761)->$class->itable;
    while ($tmp3762->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3762 = $tmp3762->next;
    }
    $fn3764 $tmp3763 = $tmp3762->methods[0];
    panda$core$Int64 $tmp3765 = $tmp3763(((panda$collections$CollectionView*) $tmp3761));
    panda$core$String* $tmp3766 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3760, ((panda$core$Object*) wrap_panda$core$Int64($tmp3765)));
    panda$core$String* $tmp3768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3766, &$s3767);
    charsType3759 = $tmp3768;
    panda$core$String* $tmp3769 = panda$core$String$convert$R$panda$core$String(chars3754);
    panda$core$String* $tmp3771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3769, &$s3770);
    panda$core$String* $tmp3772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3771, charsType3759);
    panda$core$String* $tmp3774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3772, &$s3773);
    (($fn3775) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3774);
    separator3776 = &$s3777;
    {
        panda$collections$ListView* $tmp3779 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp3780 = ((panda$collections$Iterable*) $tmp3779)->$class->itable;
        while ($tmp3780->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3780 = $tmp3780->next;
        }
        $fn3782 $tmp3781 = $tmp3780->methods[0];
        panda$collections$Iterator* $tmp3783 = $tmp3781(((panda$collections$Iterable*) $tmp3779));
        c$Iter3778 = $tmp3783;
        $l3784:;
        ITable* $tmp3786 = c$Iter3778->$class->itable;
        while ($tmp3786->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3786 = $tmp3786->next;
        }
        $fn3788 $tmp3787 = $tmp3786->methods[0];
        panda$core$Bit $tmp3789 = $tmp3787(c$Iter3778);
        panda$core$Bit $tmp3790 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3789);
        if (!$tmp3790.value) goto $l3785;
        {
            ITable* $tmp3792 = c$Iter3778->$class->itable;
            while ($tmp3792->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3792 = $tmp3792->next;
            }
            $fn3794 $tmp3793 = $tmp3792->methods[1];
            panda$core$Object* $tmp3795 = $tmp3793(c$Iter3778);
            c3791 = ((panda$core$Char8$wrapper*) $tmp3795)->value;
            panda$core$String* $tmp3796 = panda$core$String$convert$R$panda$core$String(separator3776);
            panda$core$String* $tmp3798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3796, &$s3797);
            panda$core$Int8 $tmp3799 = panda$core$Char8$convert$R$panda$core$Int8(c3791);
            panda$core$String* $tmp3800 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3798, ((panda$core$Object*) wrap_panda$core$Int8($tmp3799)));
            panda$core$String* $tmp3802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3800, &$s3801);
            (($fn3803) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3802);
            separator3776 = &$s3804;
        }
        goto $l3784;
        $l3785:;
    }
    (($fn3806) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s3805);
    panda$core$Int64 $tmp3807 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3807;
    panda$core$String* $tmp3810 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3809, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3810, &$s3811);
    result3808 = $tmp3812;
    org$pandalanguage$pandac$Type* $tmp3814 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3815 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp3814);
    string3813 = $tmp3815;
    PANDA_ASSERT(((panda$core$Bit) { string3813 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3817 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string3813);
    cc3816 = $tmp3817;
    panda$core$String* $tmp3818 = panda$core$String$convert$R$panda$core$String(result3808);
    panda$core$String* $tmp3820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3818, &$s3819);
    panda$core$String* $tmp3822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3821, cc3816->type);
    panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3822, &$s3823);
    panda$core$String* $tmp3825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3824, cc3816->name);
    panda$core$String* $tmp3827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3825, &$s3826);
    panda$core$String* $tmp3828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3820, $tmp3827);
    panda$core$String* $tmp3830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3828, &$s3829);
    panda$core$String* $tmp3832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3831, charsType3759);
    panda$core$String* $tmp3834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3832, &$s3833);
    panda$core$String* $tmp3835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3834, chars3754);
    panda$core$String* $tmp3837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3835, &$s3836);
    panda$core$String* $tmp3838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3830, $tmp3837);
    panda$collections$ListView* $tmp3840 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3841 = ((panda$collections$CollectionView*) $tmp3840)->$class->itable;
    while ($tmp3841->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3841 = $tmp3841->next;
    }
    $fn3843 $tmp3842 = $tmp3841->methods[0];
    panda$core$Int64 $tmp3844 = $tmp3842(((panda$collections$CollectionView*) $tmp3840));
    panda$core$String* $tmp3845 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3839, ((panda$core$Object*) wrap_panda$core$Int64($tmp3844)));
    panda$core$String* $tmp3847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3845, &$s3846);
    panda$core$String* $tmp3848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3838, $tmp3847);
    panda$core$String* $tmp3850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3848, &$s3849);
    (($fn3851) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp3850);
    return result3808;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3852 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp3853 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3852, ((panda$core$Int64) { 0 }));
    if ($tmp3853.value) {
    {
        panda$core$Object* $tmp3854 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp3854)->selfRef;
    }
    }
    return &$s3855;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3856;
    panda$core$String* $tmp3857 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3856 = $tmp3857;
    panda$core$String* $tmp3858 = panda$core$String$convert$R$panda$core$String(result3856);
    panda$core$String* $tmp3860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3858, &$s3859);
    org$pandalanguage$pandac$Type* $tmp3861 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
    panda$core$String* $tmp3862 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3861);
    panda$core$String* $tmp3863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3860, $tmp3862);
    panda$core$String* $tmp3865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3863, &$s3864);
    panda$core$String* $tmp3866 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp3867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3865, $tmp3866);
    (($fn3868) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3867);
    return result3856;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value3872;
    org$pandalanguage$pandac$ClassDecl* cl3875;
    panda$core$String* resultValue3878;
    panda$core$String* field3883;
    panda$core$String* result3908;
    panda$core$Bit $tmp3869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp3869.value);
    panda$core$Int64 $tmp3870 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3870, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3871.value);
    panda$core$Object* $tmp3873 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3874 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3873), p_out);
    value3872 = $tmp3874;
    panda$core$Object* $tmp3876 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3877 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3876)->type);
    cl3875 = $tmp3877;
    panda$core$Bit $tmp3879 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3875);
    if ($tmp3879.value) {
    {
        panda$core$Object* $tmp3880 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3881 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3880)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3881.value) {
        {
            return &$s3882;
        }
        }
        panda$core$String* $tmp3884 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field3883 = $tmp3884;
        panda$core$String* $tmp3885 = panda$core$String$convert$R$panda$core$String(field3883);
        panda$core$String* $tmp3887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3885, &$s3886);
        panda$core$String* $tmp3888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3887, value3872);
        panda$core$String* $tmp3890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3888, &$s3889);
        (($fn3891) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3890);
        panda$core$String* $tmp3892 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3878 = $tmp3892;
        panda$core$String* $tmp3893 = panda$core$String$convert$R$panda$core$String(resultValue3878);
        panda$core$String* $tmp3895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3893, &$s3894);
        panda$core$String* $tmp3896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3895, field3883);
        panda$core$String* $tmp3898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3896, &$s3897);
        (($fn3899) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3898);
    }
    }
    else {
    {
        panda$core$String* $tmp3900 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3878 = $tmp3900;
        panda$core$String* $tmp3901 = panda$core$String$convert$R$panda$core$String(resultValue3878);
        panda$core$String* $tmp3903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3901, &$s3902);
        panda$core$String* $tmp3904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3903, value3872);
        panda$core$String* $tmp3906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3904, &$s3905);
        (($fn3907) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3906);
    }
    }
    panda$core$String* $tmp3909 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3908 = $tmp3909;
    panda$core$String* $tmp3910 = panda$core$String$convert$R$panda$core$String(result3908);
    panda$core$String* $tmp3912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3910, &$s3911);
    panda$core$String* $tmp3913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3912, resultValue3878);
    panda$core$String* $tmp3915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3913, &$s3914);
    (($fn3916) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3915);
    return result3908;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value3920;
    org$pandalanguage$pandac$ClassDecl* cl3923;
    panda$core$String* resultValue3926;
    panda$core$String* result3947;
    panda$core$Bit $tmp3917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp3917.value);
    panda$core$Int64 $tmp3918 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3918, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3919.value);
    panda$core$Object* $tmp3921 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3922 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3921), p_out);
    value3920 = $tmp3922;
    panda$core$Object* $tmp3924 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3925 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3924)->type);
    cl3923 = $tmp3925;
    panda$core$Bit $tmp3927 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3923);
    if ($tmp3927.value) {
    {
        panda$core$Object* $tmp3928 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3929 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3928)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3929.value) {
        {
            return &$s3930;
        }
        }
        panda$core$String* $tmp3931 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3926 = $tmp3931;
        panda$core$String* $tmp3932 = panda$core$String$convert$R$panda$core$String(resultValue3926);
        panda$core$String* $tmp3934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3932, &$s3933);
        panda$core$String* $tmp3935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3934, value3920);
        panda$core$String* $tmp3937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3935, &$s3936);
        (($fn3938) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3937);
    }
    }
    else {
    {
        panda$core$String* $tmp3939 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3926 = $tmp3939;
        panda$core$String* $tmp3940 = panda$core$String$convert$R$panda$core$String(resultValue3926);
        panda$core$String* $tmp3942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3940, &$s3941);
        panda$core$String* $tmp3943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3942, value3920);
        panda$core$String* $tmp3945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3943, &$s3944);
        (($fn3946) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3945);
    }
    }
    panda$core$String* $tmp3948 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3947 = $tmp3948;
    panda$core$String* $tmp3949 = panda$core$String$convert$R$panda$core$String(result3947);
    panda$core$String* $tmp3951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3949, &$s3950);
    panda$core$String* $tmp3952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3951, resultValue3926);
    panda$core$String* $tmp3954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3952, &$s3953);
    (($fn3955) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3954);
    return result3947;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3957;
    panda$core$Bit $tmp3956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp3956.value);
    panda$core$Object* $tmp3958 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3959 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp3958));
    cl3957 = $tmp3959;
    PANDA_ASSERT(((panda$core$Bit) { cl3957 != NULL }).value);
    panda$core$Bit $tmp3960 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3957);
    if ($tmp3960.value) {
    {
        panda$core$Object* $tmp3962 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3963 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3962));
        panda$core$String* $tmp3964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3961, $tmp3963);
        panda$core$String* $tmp3966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3964, &$s3965);
        return $tmp3966;
    }
    }
    else {
    {
        return &$s3967;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3971;
    panda$core$String* result3974;
    panda$core$Bit $tmp3968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp3968.value);
    panda$core$Int64 $tmp3969 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp3970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3969, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3970.value);
    panda$core$Object* $tmp3972 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3973 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3972), p_out);
    base3971 = $tmp3973;
    panda$core$String* $tmp3975 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3974 = $tmp3975;
    panda$core$Int64 $tmp3976 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp3976.value) {
        case 52:
        {
            panda$core$String* $tmp3977 = panda$core$String$convert$R$panda$core$String(result3974);
            panda$core$String* $tmp3979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3977, &$s3978);
            panda$core$String* $tmp3980 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp3981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3979, $tmp3980);
            panda$core$String* $tmp3983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3981, &$s3982);
            panda$core$String* $tmp3984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3983, base3971);
            panda$core$String* $tmp3986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3984, &$s3985);
            (($fn3987) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3986);
            return result3974;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp3988 = panda$core$String$convert$R$panda$core$String(result3974);
            panda$core$String* $tmp3990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3988, &$s3989);
            panda$core$String* $tmp3991 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp3992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3990, $tmp3991);
            panda$core$String* $tmp3994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3992, &$s3993);
            panda$core$String* $tmp3995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3994, base3971);
            panda$core$String* $tmp3997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3995, &$s3996);
            (($fn3998) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3997);
            return result3974;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4011;
    panda$core$String* result4014;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp3999 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp3999;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4000 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4000;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4001 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4001;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4002 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4002;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4003 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4003;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4004 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4004;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4005 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4005;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4006 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4006;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4007 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4007;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4008 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4008;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4009 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4009;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4010 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4010;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4012 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4013 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4012), p_out);
            value4011 = $tmp4013;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4011));
            return value4011;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4015 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4014 = ((panda$core$String*) $tmp4015);
            PANDA_ASSERT(((panda$core$Bit) { result4014 != NULL }).value);
            return result4014;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4016 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4016;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4017 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4017;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4018 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4018;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4019 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4019;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4020 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4021 = panda$core$String$convert$R$panda$core$String($tmp4020);
    panda$core$String* $tmp4023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4021, &$s4022);
    panda$core$String* $tmp4024 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4023, $tmp4024);
    panda$core$String* $tmp4027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4025, &$s4026);
    return $tmp4027;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4030;
    org$pandalanguage$pandac$IRNode* s4042;
    panda$core$Bit $tmp4028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4028.value);
    panda$core$Int64 $tmp4029 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4029;
    {
        ITable* $tmp4031 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4031->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4031 = $tmp4031->next;
        }
        $fn4033 $tmp4032 = $tmp4031->methods[0];
        panda$collections$Iterator* $tmp4034 = $tmp4032(((panda$collections$Iterable*) p_block->children));
        s$Iter4030 = $tmp4034;
        $l4035:;
        ITable* $tmp4037 = s$Iter4030->$class->itable;
        while ($tmp4037->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4037 = $tmp4037->next;
        }
        $fn4039 $tmp4038 = $tmp4037->methods[0];
        panda$core$Bit $tmp4040 = $tmp4038(s$Iter4030);
        panda$core$Bit $tmp4041 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4040);
        if (!$tmp4041.value) goto $l4036;
        {
            ITable* $tmp4043 = s$Iter4030->$class->itable;
            while ($tmp4043->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4043 = $tmp4043->next;
            }
            $fn4045 $tmp4044 = $tmp4043->methods[1];
            panda$core$Object* $tmp4046 = $tmp4044(s$Iter4030);
            s4042 = ((org$pandalanguage$pandac$IRNode*) $tmp4046);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4042, p_out);
        }
        goto $l4035;
        $l4036:;
    }
    panda$core$Int64 $tmp4047 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4047;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4048;
    panda$core$String* $match$1894_94049;
    panda$core$String* ptr4054;
    panda$core$String* arg4057;
    org$pandalanguage$pandac$Type* baseType4077;
    panda$core$String* base4081;
    panda$core$String* indexStruct4084;
    panda$core$String* index4087;
    panda$core$String* value4096;
    panda$core$String* ptr4100;
    panda$core$String* ptr4137;
    panda$core$String* cast4140;
    m4048 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1894_94049 = ((org$pandalanguage$pandac$Symbol*) m4048->value)->name;
        panda$core$Bit $tmp4051 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1894_94049, &$s4050);
        if ($tmp4051.value) {
        {
            panda$core$Int64 $tmp4052 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4052, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4053.value);
            panda$core$Object* $tmp4055 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4056 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4055), p_out);
            ptr4054 = $tmp4056;
            panda$core$Object* $tmp4058 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4059 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4058));
            panda$core$String* $tmp4060 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4059, p_out);
            arg4057 = $tmp4060;
            panda$core$String* $tmp4062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4061, arg4057);
            panda$core$String* $tmp4064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4062, &$s4063);
            panda$core$String* $tmp4065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4064, ptr4054);
            panda$core$String* $tmp4067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4065, &$s4066);
            (($fn4068) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4067);
        }
        }
        else {
        panda$core$Bit $tmp4070 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1894_94049, &$s4069);
        if ($tmp4070.value) {
        {
            panda$core$Int64 $tmp4071 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4071, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4072.value);
            panda$core$Object* $tmp4073 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4074 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4073));
            panda$core$Int64 $tmp4075 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4074->type->subtypes);
            panda$core$Bit $tmp4076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4075, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4076.value);
            panda$core$Object* $tmp4078 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4079 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4078));
            panda$core$Object* $tmp4080 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4079->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4077 = ((org$pandalanguage$pandac$Type*) $tmp4080);
            panda$core$Object* $tmp4082 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4083 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4082), p_out);
            base4081 = $tmp4083;
            panda$core$Object* $tmp4085 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4086 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4085), p_out);
            indexStruct4084 = $tmp4086;
            panda$core$String* $tmp4088 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4087 = $tmp4088;
            panda$core$String* $tmp4089 = panda$core$String$convert$R$panda$core$String(index4087);
            panda$core$String* $tmp4091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4089, &$s4090);
            panda$core$String* $tmp4092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4091, indexStruct4084);
            panda$core$String* $tmp4094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4092, &$s4093);
            (($fn4095) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4094);
            panda$core$Object* $tmp4097 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4098 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4097));
            panda$core$String* $tmp4099 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4098, p_out);
            value4096 = $tmp4099;
            panda$core$String* $tmp4101 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4100 = $tmp4101;
            panda$core$String* $tmp4102 = panda$core$String$convert$R$panda$core$String(ptr4100);
            panda$core$String* $tmp4104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4102, &$s4103);
            panda$core$String* $tmp4105 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4077);
            panda$core$String* $tmp4106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4104, $tmp4105);
            panda$core$String* $tmp4108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4106, &$s4107);
            panda$core$String* $tmp4109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4108, base4081);
            panda$core$String* $tmp4111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4109, &$s4110);
            panda$core$String* $tmp4113 = panda$core$String$convert$R$panda$core$String(&$s4112);
            panda$core$String* $tmp4115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4113, &$s4114);
            panda$core$String* $tmp4116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4115, index4087);
            panda$core$String* $tmp4118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4116, &$s4117);
            panda$core$String* $tmp4119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4111, $tmp4118);
            (($fn4120) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4119);
            panda$core$String* $tmp4122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4121, value4096);
            panda$core$String* $tmp4124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4122, &$s4123);
            panda$core$String* $tmp4125 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4077);
            panda$core$String* $tmp4126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4124, $tmp4125);
            panda$core$String* $tmp4128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4126, &$s4127);
            panda$core$String* $tmp4129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4128, ptr4100);
            panda$core$String* $tmp4131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4129, &$s4130);
            (($fn4132) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4131);
        }
        }
        else {
        panda$core$Bit $tmp4134 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1894_94049, &$s4133);
        if ($tmp4134.value) {
        {
            panda$core$Int64 $tmp4135 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4135, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4136.value);
            panda$core$Object* $tmp4138 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4139 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4138), p_out);
            ptr4137 = $tmp4139;
            panda$core$String* $tmp4141 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4140 = $tmp4141;
            panda$core$String* $tmp4142 = panda$core$String$convert$R$panda$core$String(cast4140);
            panda$core$String* $tmp4144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4142, &$s4143);
            panda$core$String* $tmp4145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4144, ptr4137);
            panda$core$String* $tmp4147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4145, &$s4146);
            (($fn4148) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4147);
            panda$core$String* $tmp4150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4149, cast4140);
            panda$core$String* $tmp4152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4150, &$s4151);
            (($fn4153) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4152);
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
void org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$core$String* p_target, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m4155;
    org$pandalanguage$pandac$Type* actualMethodType4158;
    panda$core$String* actualResultType4159;
    panda$core$Bit isSuper4160;
    panda$collections$Array* args4180;
    panda$core$Int64 offset4183;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4188;
    panda$core$String* arg4203;
    panda$core$String* refTarget4235;
    panda$core$String* methodRef4239;
    panda$core$String* separator4241;
    panda$core$String* indirectVar4245;
    panda$core$String* resultType4248;
    panda$collections$Iterator* a$Iter4290;
    panda$core$String* a4302;
    panda$core$Bit $tmp4154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4154.value);
    m4155 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4157 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4155->owner)->name, &$s4156);
    if ($tmp4157.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4155->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4155);
    }
    }
    panda$core$Int64 $tmp4162 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4163 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4162, ((panda$core$Int64) { 1 }));
    bool $tmp4161 = $tmp4163.value;
    if (!$tmp4161) goto $l4164;
    panda$core$Object* $tmp4165 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4165)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4161 = $tmp4166.value;
    $l4164:;
    panda$core$Bit $tmp4167 = { $tmp4161 };
    isSuper4160 = $tmp4167;
    panda$core$Bit $tmp4169 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4160);
    bool $tmp4168 = $tmp4169.value;
    if (!$tmp4168) goto $l4170;
    panda$core$Bit $tmp4171 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4155);
    $tmp4168 = $tmp4171.value;
    $l4170:;
    panda$core$Bit $tmp4172 = { $tmp4168 };
    if ($tmp4172.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4173 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4155);
        actualMethodType4158 = $tmp4173;
        panda$core$Int64 $tmp4174 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4158->subtypes);
        panda$core$Int64 $tmp4175 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4174, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4176 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4158->subtypes, $tmp4175);
        panda$core$String* $tmp4177 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4176));
        actualResultType4159 = $tmp4177;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4178 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4155);
        actualMethodType4158 = $tmp4178;
        panda$core$String* $tmp4179 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4159 = $tmp4179;
    }
    }
    panda$collections$Array* $tmp4181 = (panda$collections$Array*) malloc(40);
    $tmp4181->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4181->refCount.value = 1;
    panda$collections$Array$init($tmp4181);
    args4180 = $tmp4181;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4180, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4184 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4185 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4158->subtypes);
    panda$core$Int64 $tmp4186 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4184, $tmp4185);
    panda$core$Int64 $tmp4187 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4186, ((panda$core$Int64) { 1 }));
    offset4183 = $tmp4187;
    panda$core$Int64 $tmp4189 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4188, ((panda$core$Int64) { 0 }), $tmp4189, ((panda$core$Bit) { false }));
    int64_t $tmp4191 = $tmp4188.min.value;
    panda$core$Int64 i4190 = { $tmp4191 };
    int64_t $tmp4193 = $tmp4188.max.value;
    bool $tmp4194 = $tmp4188.inclusive.value;
    if ($tmp4194) goto $l4201; else goto $l4202;
    $l4201:;
    if ($tmp4191 <= $tmp4193) goto $l4195; else goto $l4197;
    $l4202:;
    if ($tmp4191 < $tmp4193) goto $l4195; else goto $l4197;
    $l4195:;
    {
        panda$core$Object* $tmp4204 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4190);
        panda$core$String* $tmp4205 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4204), p_out);
        arg4203 = $tmp4205;
        panda$core$Bit $tmp4207 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4190, offset4183);
        bool $tmp4206 = $tmp4207.value;
        if (!$tmp4206) goto $l4208;
        panda$core$Int64 $tmp4209 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4190, offset4183);
        panda$core$Object* $tmp4210 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4158->subtypes, $tmp4209);
        panda$core$Object* $tmp4211 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4190);
        panda$core$Bit $tmp4212 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4210), ((org$pandalanguage$pandac$IRNode*) $tmp4211)->type);
        $tmp4206 = $tmp4212.value;
        $l4208:;
        panda$core$Bit $tmp4213 = { $tmp4206 };
        if ($tmp4213.value) {
        {
            panda$core$Int64 $tmp4214 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4190, offset4183);
            panda$core$Object* $tmp4215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4158->subtypes, $tmp4214);
            panda$core$String* $tmp4216 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4215));
            panda$core$String* $tmp4218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4216, &$s4217);
            panda$core$Object* $tmp4219 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4190);
            panda$core$Int64 $tmp4220 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4190, offset4183);
            panda$core$Object* $tmp4221 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4158->subtypes, $tmp4220);
            panda$core$String* $tmp4222 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg4203, ((org$pandalanguage$pandac$IRNode*) $tmp4219)->type, ((org$pandalanguage$pandac$Type*) $tmp4221), p_out);
            panda$core$String* $tmp4223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4218, $tmp4222);
            arg4203 = $tmp4223;
        }
        }
        else {
        {
            panda$core$Object* $tmp4224 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4190);
            panda$core$String* $tmp4225 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4224)->type);
            panda$core$String* $tmp4227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4225, &$s4226);
            panda$core$String* $tmp4228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4227, arg4203);
            arg4203 = $tmp4228;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4180, ((panda$core$Object*) arg4203));
    }
    $l4198:;
    int64_t $tmp4230 = $tmp4193 - i4190.value;
    if ($tmp4194) goto $l4231; else goto $l4232;
    $l4231:;
    if ($tmp4230 >= 1) goto $l4229; else goto $l4197;
    $l4232:;
    if ($tmp4230 > 1) goto $l4229; else goto $l4197;
    $l4229:;
    i4190.value += 1;
    goto $l4195;
    $l4197:;
    panda$core$Int64 $tmp4236 = panda$collections$Array$get_count$R$panda$core$Int64(args4180);
    panda$core$Bit $tmp4237 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4236, ((panda$core$Int64) { 0 }));
    if ($tmp4237.value) {
    {
        panda$core$Object* $tmp4238 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4180, ((panda$core$Int64) { 0 }));
        refTarget4235 = ((panda$core$String*) $tmp4238);
    }
    }
    else {
    {
        refTarget4235 = NULL;
    }
    }
    panda$core$String* $tmp4240 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget4235, m4155, isSuper4160, p_out);
    methodRef4239 = $tmp4240;
    separator4241 = &$s4242;
    panda$core$Bit $tmp4243 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4155);
    if ($tmp4243.value) {
    {
        panda$core$Int64 $tmp4244 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4244;
        panda$core$String* $tmp4247 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4246, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4245 = $tmp4247;
        panda$core$String* $tmp4249 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4248 = $tmp4249;
        panda$core$String* $tmp4250 = panda$core$String$convert$R$panda$core$String(indirectVar4245);
        panda$core$String* $tmp4252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4250, &$s4251);
        panda$core$String* $tmp4253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4252, resultType4248);
        panda$core$String* $tmp4255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4253, &$s4254);
        (($fn4256) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4255);
        panda$core$String* $tmp4258 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4155);
        panda$core$String* $tmp4259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4257, $tmp4258);
        panda$core$String* $tmp4261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4259, &$s4260);
        panda$core$String* $tmp4262 = panda$core$String$convert$R$panda$core$String(methodRef4239);
        panda$core$String* $tmp4264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4262, &$s4263);
        panda$core$String* $tmp4265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4264, resultType4248);
        panda$core$String* $tmp4267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4265, &$s4266);
        panda$core$String* $tmp4268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4267, indirectVar4245);
        panda$core$String* $tmp4270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4268, &$s4269);
        panda$core$String* $tmp4271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4261, $tmp4270);
        (($fn4272) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4271);
        separator4241 = &$s4273;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4274 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4275 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4274);
        if ($tmp4275.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4277 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4155);
        panda$core$String* $tmp4278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4276, $tmp4277);
        panda$core$String* $tmp4280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4278, &$s4279);
        panda$core$String* $tmp4281 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4280, $tmp4281);
        panda$core$String* $tmp4284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4282, &$s4283);
        panda$core$String* $tmp4285 = panda$core$String$convert$R$panda$core$String(methodRef4239);
        panda$core$String* $tmp4287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4285, &$s4286);
        panda$core$String* $tmp4288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4284, $tmp4287);
        (($fn4289) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4288);
    }
    }
    {
        ITable* $tmp4291 = ((panda$collections$Iterable*) args4180)->$class->itable;
        while ($tmp4291->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4291 = $tmp4291->next;
        }
        $fn4293 $tmp4292 = $tmp4291->methods[0];
        panda$collections$Iterator* $tmp4294 = $tmp4292(((panda$collections$Iterable*) args4180));
        a$Iter4290 = $tmp4294;
        $l4295:;
        ITable* $tmp4297 = a$Iter4290->$class->itable;
        while ($tmp4297->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4297 = $tmp4297->next;
        }
        $fn4299 $tmp4298 = $tmp4297->methods[0];
        panda$core$Bit $tmp4300 = $tmp4298(a$Iter4290);
        panda$core$Bit $tmp4301 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4300);
        if (!$tmp4301.value) goto $l4296;
        {
            ITable* $tmp4303 = a$Iter4290->$class->itable;
            while ($tmp4303->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4303 = $tmp4303->next;
            }
            $fn4305 $tmp4304 = $tmp4303->methods[1];
            panda$core$Object* $tmp4306 = $tmp4304(a$Iter4290);
            a4302 = ((panda$core$String*) $tmp4306);
            (($fn4307) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator4241);
            (($fn4308) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a4302);
            separator4241 = &$s4309;
        }
        goto $l4295;
        $l4296:;
    }
    (($fn4311) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4310);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test4323;
    panda$core$String* testBit4326;
    panda$core$String* ifTrue4335;
    panda$core$String* ifFalse4337;
    panda$core$String* end4351;
    panda$core$Bit $tmp4312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4312.value);
    panda$core$Int64 $tmp4314 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4314, ((panda$core$Int64) { 2 }));
    bool $tmp4313 = $tmp4315.value;
    if ($tmp4313) goto $l4316;
    panda$core$Int64 $tmp4317 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4317, ((panda$core$Int64) { 3 }));
    $tmp4313 = $tmp4318.value;
    $l4316:;
    panda$core$Bit $tmp4319 = { $tmp4313 };
    PANDA_ASSERT($tmp4319.value);
    panda$core$Object* $tmp4320 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4321 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4322 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4320)->type, $tmp4321);
    PANDA_ASSERT($tmp4322.value);
    panda$core$Object* $tmp4324 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4325 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4324), p_out);
    test4323 = $tmp4325;
    panda$core$String* $tmp4327 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4326 = $tmp4327;
    panda$core$String* $tmp4328 = panda$core$String$convert$R$panda$core$String(testBit4326);
    panda$core$String* $tmp4330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4328, &$s4329);
    panda$core$String* $tmp4331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4330, test4323);
    panda$core$String* $tmp4333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4331, &$s4332);
    (($fn4334) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4333);
    panda$core$String* $tmp4336 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4335 = $tmp4336;
    panda$core$String* $tmp4338 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4337 = $tmp4338;
    panda$core$String* $tmp4340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4339, testBit4326);
    panda$core$String* $tmp4342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4340, &$s4341);
    panda$core$String* $tmp4343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4342, ifTrue4335);
    panda$core$String* $tmp4345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4343, &$s4344);
    panda$core$String* $tmp4346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4345, ifFalse4337);
    panda$core$String* $tmp4348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4346, &$s4347);
    (($fn4349) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4348);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue4335, p_out);
    panda$core$Object* $tmp4350 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4350), p_out);
    panda$core$Int64 $tmp4352 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4352, ((panda$core$Int64) { 3 }));
    if ($tmp4353.value) {
    {
        panda$core$String* $tmp4354 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4351 = $tmp4354;
    }
    }
    else {
    {
        end4351 = ifFalse4337;
    }
    }
    panda$core$Object* $tmp4355 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4356 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4355));
    panda$core$Bit $tmp4357 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4356);
    if ($tmp4357.value) {
    {
        panda$core$String* $tmp4359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4358, end4351);
        panda$core$String* $tmp4361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4359, &$s4360);
        (($fn4362) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4361);
    }
    }
    panda$core$Int64 $tmp4363 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4363, ((panda$core$Int64) { 3 }));
    if ($tmp4364.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse4337, p_out);
        panda$core$Object* $tmp4365 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4365), p_out);
        panda$core$Object* $tmp4366 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4367 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4366));
        panda$core$Bit $tmp4368 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4367);
        if ($tmp4368.value) {
        {
            panda$core$String* $tmp4370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4369, end4351);
            panda$core$String* $tmp4372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4370, &$s4371);
            (($fn4373) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4372);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end4351, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4377;
    panda$core$String* range4388;
    org$pandalanguage$pandac$IRNode* block4391;
    org$pandalanguage$pandac$Type* t4393;
    panda$core$String* llt4396;
    panda$core$String* indexType4398;
    org$pandalanguage$pandac$ClassDecl* cl4404;
    panda$core$String* numberType4412;
    panda$core$String* index4420;
    panda$core$String* start4429;
    panda$core$String* indexValuePtr4438;
    panda$core$String* end4469;
    panda$core$String* inclusive4478;
    panda$core$String* loopStart4487;
    panda$core$String* loopBody4489;
    panda$core$String* loopEnd4491;
    panda$core$String* loopTest4493;
    panda$core$String* forwardEntry4497;
    panda$core$String* backwardEntry4499;
    panda$core$String* signPrefix4501;
    panda$core$String* forwardEntryInclusive4513;
    panda$core$String* forwardEntryExclusive4515;
    panda$core$String* forwardEntryInclusiveTest4530;
    panda$core$String* forwardEntryExclusiveTest4560;
    panda$core$String* indexValue4590;
    panda$core$String* loopInc4612;
    panda$core$String* forwardDelta4614;
    panda$core$String* forwardInclusiveLabel4629;
    panda$core$String* forwardExclusiveLabel4631;
    panda$core$String* forwardInclusiveTest4642;
    panda$core$String* forwardExclusiveTest4665;
    panda$core$String* inc4688;
    panda$core$String* incStruct4700;
    panda$core$Bit $tmp4374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4374.value);
    panda$core$Int64 $tmp4375 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4375, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4376.value);
    panda$core$Object* $tmp4378 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4377 = ((org$pandalanguage$pandac$IRNode*) $tmp4378);
    panda$core$Object* $tmp4379 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4379)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4380.value);
    panda$core$Object* $tmp4381 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4382 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4381)->type->subtypes);
    panda$core$Bit $tmp4383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4382, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4383.value);
    panda$core$Object* $tmp4384 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4385 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4384)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4387 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4385))->name, &$s4386);
    PANDA_ASSERT($tmp4387.value);
    panda$core$Object* $tmp4389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4390 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4389), p_out);
    range4388 = $tmp4390;
    panda$core$Object* $tmp4392 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4391 = ((org$pandalanguage$pandac$IRNode*) $tmp4392);
    panda$core$Object* $tmp4394 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4395 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4394)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4393 = ((org$pandalanguage$pandac$Type*) $tmp4395);
    panda$core$String* $tmp4397 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4393);
    llt4396 = $tmp4397;
    panda$core$Bit $tmp4399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4393->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4399.value) {
    {
        panda$core$Int64 $tmp4400 = panda$collections$Array$get_count$R$panda$core$Int64(t4393->subtypes);
        panda$core$Bit $tmp4401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4400, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4401.value);
        panda$core$Object* $tmp4402 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4393->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4403 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4402));
        indexType4398 = $tmp4403;
    }
    }
    else {
    {
        indexType4398 = llt4396;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4405 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4393);
    cl4404 = $tmp4405;
    PANDA_ASSERT(((panda$core$Bit) { cl4404 != NULL }).value);
    panda$collections$ListView* $tmp4406 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4404);
    ITable* $tmp4407 = ((panda$collections$CollectionView*) $tmp4406)->$class->itable;
    while ($tmp4407->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4407 = $tmp4407->next;
    }
    $fn4409 $tmp4408 = $tmp4407->methods[0];
    panda$core$Int64 $tmp4410 = $tmp4408(((panda$collections$CollectionView*) $tmp4406));
    panda$core$Bit $tmp4411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4410, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4411.value);
    panda$collections$ListView* $tmp4413 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4404);
    ITable* $tmp4414 = $tmp4413->$class->itable;
    while ($tmp4414->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4414 = $tmp4414->next;
    }
    $fn4416 $tmp4415 = $tmp4414->methods[0];
    panda$core$Object* $tmp4417 = $tmp4415($tmp4413, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4418 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4417)->type);
    numberType4412 = $tmp4418;
    panda$core$Bit $tmp4419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4377->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4419.value);
    panda$core$String* $tmp4421 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4377->payload));
    index4420 = $tmp4421;
    panda$core$String* $tmp4422 = panda$core$String$convert$R$panda$core$String(index4420);
    panda$core$String* $tmp4424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4422, &$s4423);
    panda$core$String* $tmp4425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4424, indexType4398);
    panda$core$String* $tmp4427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4425, &$s4426);
    (($fn4428) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4427);
    panda$core$String* $tmp4430 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4429 = $tmp4430;
    panda$core$String* $tmp4431 = panda$core$String$convert$R$panda$core$String(start4429);
    panda$core$String* $tmp4433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4431, &$s4432);
    panda$core$String* $tmp4434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4433, range4388);
    panda$core$String* $tmp4436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4434, &$s4435);
    (($fn4437) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4436);
    panda$core$String* $tmp4439 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4438 = $tmp4439;
    panda$core$String* $tmp4440 = panda$core$String$convert$R$panda$core$String(indexValuePtr4438);
    panda$core$String* $tmp4442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4440, &$s4441);
    panda$core$String* $tmp4443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4442, indexType4398);
    panda$core$String* $tmp4445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4443, &$s4444);
    panda$core$String* $tmp4446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4445, indexType4398);
    panda$core$String* $tmp4448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4446, &$s4447);
    panda$core$String* $tmp4449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4448, index4420);
    panda$core$String* $tmp4451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4449, &$s4450);
    panda$core$String* $tmp4453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4451, &$s4452);
    (($fn4454) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4453);
    panda$core$String* $tmp4456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4455, numberType4412);
    panda$core$String* $tmp4458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4456, &$s4457);
    panda$core$String* $tmp4459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4458, start4429);
    panda$core$String* $tmp4461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4459, &$s4460);
    panda$core$String* $tmp4462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4461, numberType4412);
    panda$core$String* $tmp4464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4462, &$s4463);
    panda$core$String* $tmp4465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4464, indexValuePtr4438);
    panda$core$String* $tmp4467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4465, &$s4466);
    (($fn4468) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4467);
    panda$core$String* $tmp4470 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4469 = $tmp4470;
    panda$core$String* $tmp4471 = panda$core$String$convert$R$panda$core$String(end4469);
    panda$core$String* $tmp4473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4471, &$s4472);
    panda$core$String* $tmp4474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4473, range4388);
    panda$core$String* $tmp4476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4474, &$s4475);
    (($fn4477) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4476);
    panda$core$String* $tmp4479 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4478 = $tmp4479;
    panda$core$String* $tmp4480 = panda$core$String$convert$R$panda$core$String(inclusive4478);
    panda$core$String* $tmp4482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4480, &$s4481);
    panda$core$String* $tmp4483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4482, range4388);
    panda$core$String* $tmp4485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4483, &$s4484);
    (($fn4486) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4485);
    panda$core$String* $tmp4488 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4487 = $tmp4488;
    panda$core$String* $tmp4490 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4489 = $tmp4490;
    panda$core$String* $tmp4492 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4491 = $tmp4492;
    panda$core$String* $tmp4494 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4493 = $tmp4494;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4495 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4495->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4495->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4495, ((panda$core$String*) p_f->payload), loopEnd4491, loopTest4493);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4495));
    panda$core$String* $tmp4498 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4497 = $tmp4498;
    panda$core$String* $tmp4500 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4499 = $tmp4500;
    panda$core$Bit $tmp4503 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4393)->name, &$s4502);
    if ($tmp4503.value) {
    {
        signPrefix4501 = &$s4504;
    }
    }
    else {
    {
        panda$core$Bit $tmp4507 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4393)->name, &$s4506);
        bool $tmp4505 = $tmp4507.value;
        if ($tmp4505) goto $l4508;
        panda$core$Bit $tmp4510 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4393)->name, &$s4509);
        $tmp4505 = $tmp4510.value;
        $l4508:;
        panda$core$Bit $tmp4511 = { $tmp4505 };
        PANDA_ASSERT($tmp4511.value);
        signPrefix4501 = &$s4512;
    }
    }
    panda$core$String* $tmp4514 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4513 = $tmp4514;
    panda$core$String* $tmp4516 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4515 = $tmp4516;
    panda$core$String* $tmp4518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4517, inclusive4478);
    panda$core$String* $tmp4520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4518, &$s4519);
    panda$core$String* $tmp4521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4520, forwardEntryInclusive4513);
    panda$core$String* $tmp4523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4521, &$s4522);
    panda$core$String* $tmp4525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4524, forwardEntryExclusive4515);
    panda$core$String* $tmp4527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4525, &$s4526);
    panda$core$String* $tmp4528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4523, $tmp4527);
    (($fn4529) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4528);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4513, p_out);
    panda$core$String* $tmp4531 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4530 = $tmp4531;
    panda$core$String* $tmp4532 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4530);
    panda$core$String* $tmp4534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4532, &$s4533);
    panda$core$String* $tmp4535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4534, signPrefix4501);
    panda$core$String* $tmp4537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4535, &$s4536);
    panda$core$String* $tmp4538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4537, numberType4412);
    panda$core$String* $tmp4540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4538, &$s4539);
    panda$core$String* $tmp4541 = panda$core$String$convert$R$panda$core$String(start4429);
    panda$core$String* $tmp4543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4541, &$s4542);
    panda$core$String* $tmp4544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4543, end4469);
    panda$core$String* $tmp4546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4544, &$s4545);
    panda$core$String* $tmp4547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4540, $tmp4546);
    (($fn4548) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4547);
    panda$core$String* $tmp4550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4549, forwardEntryInclusiveTest4530);
    panda$core$String* $tmp4552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4550, &$s4551);
    panda$core$String* $tmp4553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4552, loopStart4487);
    panda$core$String* $tmp4555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4553, &$s4554);
    panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4555, loopEnd4491);
    panda$core$String* $tmp4558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, &$s4557);
    (($fn4559) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4558);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4515, p_out);
    panda$core$String* $tmp4561 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4560 = $tmp4561;
    panda$core$String* $tmp4562 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4560);
    panda$core$String* $tmp4564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4562, &$s4563);
    panda$core$String* $tmp4565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4564, signPrefix4501);
    panda$core$String* $tmp4567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4565, &$s4566);
    panda$core$String* $tmp4568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4567, numberType4412);
    panda$core$String* $tmp4570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4568, &$s4569);
    panda$core$String* $tmp4571 = panda$core$String$convert$R$panda$core$String(start4429);
    panda$core$String* $tmp4573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4571, &$s4572);
    panda$core$String* $tmp4574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4573, end4469);
    panda$core$String* $tmp4576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4574, &$s4575);
    panda$core$String* $tmp4577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4570, $tmp4576);
    (($fn4578) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4577);
    panda$core$String* $tmp4580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4579, forwardEntryExclusiveTest4560);
    panda$core$String* $tmp4582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4580, &$s4581);
    panda$core$String* $tmp4583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4582, loopStart4487);
    panda$core$String* $tmp4585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4583, &$s4584);
    panda$core$String* $tmp4586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4585, loopEnd4491);
    panda$core$String* $tmp4588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4586, &$s4587);
    (($fn4589) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4588);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4487, p_out);
    panda$core$String* $tmp4591 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4590 = $tmp4591;
    panda$core$String* $tmp4592 = panda$core$String$convert$R$panda$core$String(indexValue4590);
    panda$core$String* $tmp4594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4592, &$s4593);
    panda$core$String* $tmp4595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4594, numberType4412);
    panda$core$String* $tmp4597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4595, &$s4596);
    panda$core$String* $tmp4598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4597, numberType4412);
    panda$core$String* $tmp4600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4598, &$s4599);
    panda$core$String* $tmp4601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4600, indexValuePtr4438);
    panda$core$String* $tmp4603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4601, &$s4602);
    (($fn4604) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4603);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4391, p_out);
    panda$core$Bit $tmp4605 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4391);
    panda$core$Bit $tmp4606 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4605);
    if ($tmp4606.value) {
    {
        panda$core$String* $tmp4608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4607, loopTest4493);
        panda$core$String* $tmp4610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4608, &$s4609);
        (($fn4611) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4610);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4493, p_out);
    panda$core$String* $tmp4613 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc4612 = $tmp4613;
    panda$core$String* $tmp4615 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta4614 = $tmp4615;
    panda$core$String* $tmp4616 = panda$core$String$convert$R$panda$core$String(forwardDelta4614);
    panda$core$String* $tmp4618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4616, &$s4617);
    panda$core$String* $tmp4619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4618, numberType4412);
    panda$core$String* $tmp4621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4619, &$s4620);
    panda$core$String* $tmp4622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4621, end4469);
    panda$core$String* $tmp4624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4622, &$s4623);
    panda$core$String* $tmp4625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4624, indexValue4590);
    panda$core$String* $tmp4627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4625, &$s4626);
    (($fn4628) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4627);
    panda$core$String* $tmp4630 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel4629 = $tmp4630;
    panda$core$String* $tmp4632 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel4631 = $tmp4632;
    panda$core$String* $tmp4634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4633, inclusive4478);
    panda$core$String* $tmp4636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4634, &$s4635);
    panda$core$String* $tmp4637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4636, forwardInclusiveLabel4629);
    panda$core$String* $tmp4639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4637, &$s4638);
    panda$core$String* $tmp4640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4639, forwardExclusiveLabel4631);
    (($fn4641) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4640);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel4629, p_out);
    panda$core$String* $tmp4643 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest4642 = $tmp4643;
    panda$core$String* $tmp4644 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest4642);
    panda$core$String* $tmp4646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4644, &$s4645);
    panda$core$String* $tmp4647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4646, numberType4412);
    panda$core$String* $tmp4649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4647, &$s4648);
    panda$core$String* $tmp4650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4649, forwardDelta4614);
    panda$core$String* $tmp4652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4650, &$s4651);
    (($fn4653) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4652);
    panda$core$String* $tmp4655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4654, forwardInclusiveTest4642);
    panda$core$String* $tmp4657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4655, &$s4656);
    panda$core$String* $tmp4658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4657, loopInc4612);
    panda$core$String* $tmp4660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4658, &$s4659);
    panda$core$String* $tmp4661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4660, loopEnd4491);
    panda$core$String* $tmp4663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4661, &$s4662);
    (($fn4664) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4663);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel4631, p_out);
    panda$core$String* $tmp4666 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest4665 = $tmp4666;
    panda$core$String* $tmp4667 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest4665);
    panda$core$String* $tmp4669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4667, &$s4668);
    panda$core$String* $tmp4670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4669, numberType4412);
    panda$core$String* $tmp4672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4670, &$s4671);
    panda$core$String* $tmp4673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4672, forwardDelta4614);
    panda$core$String* $tmp4675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4673, &$s4674);
    (($fn4676) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4675);
    panda$core$String* $tmp4678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4677, forwardExclusiveTest4665);
    panda$core$String* $tmp4680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4678, &$s4679);
    panda$core$String* $tmp4681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4680, loopInc4612);
    panda$core$String* $tmp4683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4681, &$s4682);
    panda$core$String* $tmp4684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4683, loopEnd4491);
    panda$core$String* $tmp4686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4684, &$s4685);
    (($fn4687) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4686);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc4612, p_out);
    panda$core$String* $tmp4689 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc4688 = $tmp4689;
    panda$core$String* $tmp4690 = panda$core$String$convert$R$panda$core$String(inc4688);
    panda$core$String* $tmp4692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4690, &$s4691);
    panda$core$String* $tmp4693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4692, numberType4412);
    panda$core$String* $tmp4695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4693, &$s4694);
    panda$core$String* $tmp4696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4695, indexValue4590);
    panda$core$String* $tmp4698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4696, &$s4697);
    (($fn4699) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4698);
    panda$core$String* $tmp4701 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct4700 = $tmp4701;
    panda$core$String* $tmp4702 = panda$core$String$convert$R$panda$core$String(incStruct4700);
    panda$core$String* $tmp4704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4702, &$s4703);
    panda$core$String* $tmp4705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4704, indexType4398);
    panda$core$String* $tmp4707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4705, &$s4706);
    panda$core$String* $tmp4708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4707, numberType4412);
    panda$core$String* $tmp4710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4708, &$s4709);
    (($fn4711) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4710);
    panda$core$String* $tmp4713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4712, numberType4412);
    panda$core$String* $tmp4715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4713, &$s4714);
    panda$core$String* $tmp4716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4715, inc4688);
    panda$core$String* $tmp4718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4716, &$s4717);
    (($fn4719) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4718);
    panda$core$String* $tmp4721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4720, indexType4398);
    panda$core$String* $tmp4723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4721, &$s4722);
    panda$core$String* $tmp4724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4723, incStruct4700);
    panda$core$String* $tmp4726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4724, &$s4725);
    panda$core$String* $tmp4727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4726, indexType4398);
    panda$core$String* $tmp4729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4727, &$s4728);
    panda$core$String* $tmp4730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4729, index4420);
    panda$core$String* $tmp4732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4730, &$s4731);
    (($fn4733) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4732);
    panda$core$String* $tmp4735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4734, loopStart4487);
    panda$core$String* $tmp4737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4735, &$s4736);
    (($fn4738) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4737);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4491, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4742;
    panda$core$String* range4753;
    org$pandalanguage$pandac$IRNode* block4756;
    org$pandalanguage$pandac$Type* t4758;
    panda$core$String* llt4761;
    panda$core$String* indexType4763;
    org$pandalanguage$pandac$ClassDecl* cl4769;
    panda$core$String* numberType4777;
    panda$core$String* index4785;
    panda$core$String* start4794;
    panda$core$String* indexValuePtr4803;
    panda$core$String* end4834;
    panda$core$String* rawStep4843;
    panda$core$String* step4852;
    panda$core$String* inclusive4866;
    panda$core$String* loopStart4875;
    panda$core$String* loopBody4877;
    panda$core$String* loopEnd4879;
    panda$core$String* loopTest4881;
    panda$core$String* forwardEntry4885;
    panda$core$String* backwardEntry4887;
    panda$core$String* signPrefix4889;
    panda$core$String* direction4901;
    panda$core$String* forwardEntryInclusive4927;
    panda$core$String* forwardEntryExclusive4929;
    panda$core$String* forwardEntryInclusiveTest4944;
    panda$core$String* forwardEntryExclusiveTest4974;
    panda$core$String* backwardEntryInclusive5004;
    panda$core$String* backwardEntryExclusive5006;
    panda$core$String* backwardEntryInclusiveTest5021;
    panda$core$String* backwardEntryExclusiveTest5051;
    panda$core$String* indexValue5081;
    panda$core$String* loopInc5103;
    panda$core$String* forwardLabel5105;
    panda$core$String* backwardLabel5107;
    panda$core$String* forwardDelta5120;
    panda$core$String* forwardInclusiveLabel5135;
    panda$core$String* forwardExclusiveLabel5137;
    panda$core$String* forwardInclusiveTest5148;
    panda$core$String* forwardExclusiveTest5174;
    panda$core$String* backwardDelta5200;
    panda$core$String* negStep5215;
    panda$core$String* backwardInclusiveLabel5227;
    panda$core$String* backwardExclusiveLabel5229;
    panda$core$String* backwardInclusiveTest5240;
    panda$core$String* backwardExclusiveTest5264;
    panda$core$String* inc5288;
    panda$core$String* incStruct5303;
    panda$core$Bit $tmp4739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4739.value);
    panda$core$Int64 $tmp4740 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4740, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4741.value);
    panda$core$Object* $tmp4743 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4742 = ((org$pandalanguage$pandac$IRNode*) $tmp4743);
    panda$core$Object* $tmp4744 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4744)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4745.value);
    panda$core$Object* $tmp4746 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4747 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4746)->type->subtypes);
    panda$core$Bit $tmp4748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4747, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4748.value);
    panda$core$Object* $tmp4749 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4750 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4749)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4752 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4750))->name, &$s4751);
    PANDA_ASSERT($tmp4752.value);
    panda$core$Object* $tmp4754 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4755 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4754), p_out);
    range4753 = $tmp4755;
    panda$core$Object* $tmp4757 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4756 = ((org$pandalanguage$pandac$IRNode*) $tmp4757);
    panda$core$Object* $tmp4759 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4760 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4759)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4758 = ((org$pandalanguage$pandac$Type*) $tmp4760);
    panda$core$String* $tmp4762 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4758);
    llt4761 = $tmp4762;
    panda$core$Bit $tmp4764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4758->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4764.value) {
    {
        panda$core$Int64 $tmp4765 = panda$collections$Array$get_count$R$panda$core$Int64(t4758->subtypes);
        panda$core$Bit $tmp4766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4765, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4766.value);
        panda$core$Object* $tmp4767 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4758->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4768 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4767));
        indexType4763 = $tmp4768;
    }
    }
    else {
    {
        indexType4763 = llt4761;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4770 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4758);
    cl4769 = $tmp4770;
    PANDA_ASSERT(((panda$core$Bit) { cl4769 != NULL }).value);
    panda$collections$ListView* $tmp4771 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4769);
    ITable* $tmp4772 = ((panda$collections$CollectionView*) $tmp4771)->$class->itable;
    while ($tmp4772->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4772 = $tmp4772->next;
    }
    $fn4774 $tmp4773 = $tmp4772->methods[0];
    panda$core$Int64 $tmp4775 = $tmp4773(((panda$collections$CollectionView*) $tmp4771));
    panda$core$Bit $tmp4776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4775, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4776.value);
    panda$collections$ListView* $tmp4778 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4769);
    ITable* $tmp4779 = $tmp4778->$class->itable;
    while ($tmp4779->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4779 = $tmp4779->next;
    }
    $fn4781 $tmp4780 = $tmp4779->methods[0];
    panda$core$Object* $tmp4782 = $tmp4780($tmp4778, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4783 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4782)->type);
    numberType4777 = $tmp4783;
    panda$core$Bit $tmp4784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4742->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4784.value);
    panda$core$String* $tmp4786 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4742->payload));
    index4785 = $tmp4786;
    panda$core$String* $tmp4787 = panda$core$String$convert$R$panda$core$String(index4785);
    panda$core$String* $tmp4789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4787, &$s4788);
    panda$core$String* $tmp4790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4789, indexType4763);
    panda$core$String* $tmp4792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4790, &$s4791);
    (($fn4793) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4792);
    panda$core$String* $tmp4795 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4794 = $tmp4795;
    panda$core$String* $tmp4796 = panda$core$String$convert$R$panda$core$String(start4794);
    panda$core$String* $tmp4798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4796, &$s4797);
    panda$core$String* $tmp4799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4798, range4753);
    panda$core$String* $tmp4801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4799, &$s4800);
    (($fn4802) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4801);
    panda$core$String* $tmp4804 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4803 = $tmp4804;
    panda$core$String* $tmp4805 = panda$core$String$convert$R$panda$core$String(indexValuePtr4803);
    panda$core$String* $tmp4807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4805, &$s4806);
    panda$core$String* $tmp4808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4807, indexType4763);
    panda$core$String* $tmp4810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4808, &$s4809);
    panda$core$String* $tmp4811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4810, indexType4763);
    panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4811, &$s4812);
    panda$core$String* $tmp4814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4813, index4785);
    panda$core$String* $tmp4816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, &$s4815);
    panda$core$String* $tmp4818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4816, &$s4817);
    (($fn4819) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4818);
    panda$core$String* $tmp4821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4820, numberType4777);
    panda$core$String* $tmp4823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4821, &$s4822);
    panda$core$String* $tmp4824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4823, start4794);
    panda$core$String* $tmp4826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4824, &$s4825);
    panda$core$String* $tmp4827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4826, numberType4777);
    panda$core$String* $tmp4829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4827, &$s4828);
    panda$core$String* $tmp4830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4829, indexValuePtr4803);
    panda$core$String* $tmp4832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4830, &$s4831);
    (($fn4833) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4832);
    panda$core$String* $tmp4835 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4834 = $tmp4835;
    panda$core$String* $tmp4836 = panda$core$String$convert$R$panda$core$String(end4834);
    panda$core$String* $tmp4838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4836, &$s4837);
    panda$core$String* $tmp4839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4838, range4753);
    panda$core$String* $tmp4841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4839, &$s4840);
    (($fn4842) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4841);
    panda$core$String* $tmp4844 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep4843 = $tmp4844;
    panda$core$String* $tmp4845 = panda$core$String$convert$R$panda$core$String(rawStep4843);
    panda$core$String* $tmp4847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4845, &$s4846);
    panda$core$String* $tmp4848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4847, range4753);
    panda$core$String* $tmp4850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4848, &$s4849);
    (($fn4851) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4850);
    panda$core$Bit $tmp4854 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4777, &$s4853);
    if ($tmp4854.value) {
    {
        panda$core$String* $tmp4855 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step4852 = $tmp4855;
        panda$core$String* $tmp4856 = panda$core$String$convert$R$panda$core$String(step4852);
        panda$core$String* $tmp4858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4856, &$s4857);
        panda$core$String* $tmp4859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4858, rawStep4843);
        panda$core$String* $tmp4861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4859, &$s4860);
        panda$core$String* $tmp4862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4861, numberType4777);
        panda$core$String* $tmp4864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4862, &$s4863);
        (($fn4865) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4864);
    }
    }
    else {
    {
        step4852 = rawStep4843;
    }
    }
    panda$core$String* $tmp4867 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4866 = $tmp4867;
    panda$core$String* $tmp4868 = panda$core$String$convert$R$panda$core$String(inclusive4866);
    panda$core$String* $tmp4870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4868, &$s4869);
    panda$core$String* $tmp4871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4870, range4753);
    panda$core$String* $tmp4873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4871, &$s4872);
    (($fn4874) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4873);
    panda$core$String* $tmp4876 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4875 = $tmp4876;
    panda$core$String* $tmp4878 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4877 = $tmp4878;
    panda$core$String* $tmp4880 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4879 = $tmp4880;
    panda$core$String* $tmp4882 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4881 = $tmp4882;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4883 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4883->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4883->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4883, ((panda$core$String*) p_f->payload), loopEnd4879, loopTest4881);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4883));
    panda$core$String* $tmp4886 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4885 = $tmp4886;
    panda$core$String* $tmp4888 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4887 = $tmp4888;
    panda$core$Bit $tmp4891 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4758)->name, &$s4890);
    if ($tmp4891.value) {
    {
        signPrefix4889 = &$s4892;
    }
    }
    else {
    {
        panda$core$Bit $tmp4895 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4758)->name, &$s4894);
        bool $tmp4893 = $tmp4895.value;
        if ($tmp4893) goto $l4896;
        panda$core$Bit $tmp4898 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4758)->name, &$s4897);
        $tmp4893 = $tmp4898.value;
        $l4896:;
        panda$core$Bit $tmp4899 = { $tmp4893 };
        PANDA_ASSERT($tmp4899.value);
        signPrefix4889 = &$s4900;
    }
    }
    panda$core$Bit $tmp4903 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix4889, &$s4902);
    if ($tmp4903.value) {
    {
        panda$core$String* $tmp4904 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction4901 = $tmp4904;
        panda$core$String* $tmp4905 = panda$core$String$convert$R$panda$core$String(direction4901);
        panda$core$String* $tmp4907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4905, &$s4906);
        panda$core$String* $tmp4908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4907, numberType4777);
        panda$core$String* $tmp4910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4908, &$s4909);
        panda$core$String* $tmp4911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4910, step4852);
        panda$core$String* $tmp4913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4911, &$s4912);
        (($fn4914) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4913);
    }
    }
    else {
    {
        direction4901 = &$s4915;
    }
    }
    panda$core$String* $tmp4917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4916, direction4901);
    panda$core$String* $tmp4919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4917, &$s4918);
    panda$core$String* $tmp4920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4919, forwardEntry4885);
    panda$core$String* $tmp4922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4920, &$s4921);
    panda$core$String* $tmp4923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4922, backwardEntry4887);
    panda$core$String* $tmp4925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4923, &$s4924);
    (($fn4926) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4925);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry4885, p_out);
    panda$core$String* $tmp4928 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4927 = $tmp4928;
    panda$core$String* $tmp4930 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4929 = $tmp4930;
    panda$core$String* $tmp4932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4931, inclusive4866);
    panda$core$String* $tmp4934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4932, &$s4933);
    panda$core$String* $tmp4935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4934, forwardEntryInclusive4927);
    panda$core$String* $tmp4937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4935, &$s4936);
    panda$core$String* $tmp4939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4938, forwardEntryExclusive4929);
    panda$core$String* $tmp4941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4939, &$s4940);
    panda$core$String* $tmp4942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4937, $tmp4941);
    (($fn4943) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4942);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4927, p_out);
    panda$core$String* $tmp4945 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4944 = $tmp4945;
    panda$core$String* $tmp4946 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4944);
    panda$core$String* $tmp4948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4946, &$s4947);
    panda$core$String* $tmp4949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4948, signPrefix4889);
    panda$core$String* $tmp4951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4949, &$s4950);
    panda$core$String* $tmp4952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4951, numberType4777);
    panda$core$String* $tmp4954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4952, &$s4953);
    panda$core$String* $tmp4955 = panda$core$String$convert$R$panda$core$String(start4794);
    panda$core$String* $tmp4957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4955, &$s4956);
    panda$core$String* $tmp4958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4957, end4834);
    panda$core$String* $tmp4960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4958, &$s4959);
    panda$core$String* $tmp4961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4954, $tmp4960);
    (($fn4962) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4961);
    panda$core$String* $tmp4964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4963, forwardEntryInclusiveTest4944);
    panda$core$String* $tmp4966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4964, &$s4965);
    panda$core$String* $tmp4967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4966, loopStart4875);
    panda$core$String* $tmp4969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4967, &$s4968);
    panda$core$String* $tmp4970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4969, loopEnd4879);
    panda$core$String* $tmp4972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4970, &$s4971);
    (($fn4973) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4972);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4929, p_out);
    panda$core$String* $tmp4975 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4974 = $tmp4975;
    panda$core$String* $tmp4976 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4974);
    panda$core$String* $tmp4978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4976, &$s4977);
    panda$core$String* $tmp4979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4978, signPrefix4889);
    panda$core$String* $tmp4981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4979, &$s4980);
    panda$core$String* $tmp4982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4981, numberType4777);
    panda$core$String* $tmp4984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4982, &$s4983);
    panda$core$String* $tmp4985 = panda$core$String$convert$R$panda$core$String(start4794);
    panda$core$String* $tmp4987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4985, &$s4986);
    panda$core$String* $tmp4988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4987, end4834);
    panda$core$String* $tmp4990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4988, &$s4989);
    panda$core$String* $tmp4991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4984, $tmp4990);
    (($fn4992) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4991);
    panda$core$String* $tmp4994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4993, forwardEntryExclusiveTest4974);
    panda$core$String* $tmp4996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4994, &$s4995);
    panda$core$String* $tmp4997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4996, loopStart4875);
    panda$core$String* $tmp4999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4997, &$s4998);
    panda$core$String* $tmp5000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4999, loopEnd4879);
    panda$core$String* $tmp5002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5000, &$s5001);
    (($fn5003) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5002);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry4887, p_out);
    panda$core$String* $tmp5005 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive5004 = $tmp5005;
    panda$core$String* $tmp5007 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive5006 = $tmp5007;
    panda$core$String* $tmp5009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5008, inclusive4866);
    panda$core$String* $tmp5011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5009, &$s5010);
    panda$core$String* $tmp5012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5011, backwardEntryInclusive5004);
    panda$core$String* $tmp5014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5012, &$s5013);
    panda$core$String* $tmp5016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5015, backwardEntryExclusive5006);
    panda$core$String* $tmp5018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5016, &$s5017);
    panda$core$String* $tmp5019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5014, $tmp5018);
    (($fn5020) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5019);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive5004, p_out);
    panda$core$String* $tmp5022 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5021 = $tmp5022;
    panda$core$String* $tmp5023 = panda$core$String$convert$R$panda$core$String(backwardEntryInclusiveTest5021);
    panda$core$String* $tmp5025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5023, &$s5024);
    panda$core$String* $tmp5026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5025, signPrefix4889);
    panda$core$String* $tmp5028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5026, &$s5027);
    panda$core$String* $tmp5029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5028, numberType4777);
    panda$core$String* $tmp5031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5029, &$s5030);
    panda$core$String* $tmp5032 = panda$core$String$convert$R$panda$core$String(start4794);
    panda$core$String* $tmp5034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5032, &$s5033);
    panda$core$String* $tmp5035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5034, end4834);
    panda$core$String* $tmp5037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5035, &$s5036);
    panda$core$String* $tmp5038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5031, $tmp5037);
    (($fn5039) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5038);
    panda$core$String* $tmp5041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5040, backwardEntryInclusiveTest5021);
    panda$core$String* $tmp5043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5041, &$s5042);
    panda$core$String* $tmp5044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5043, loopStart4875);
    panda$core$String* $tmp5046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5044, &$s5045);
    panda$core$String* $tmp5047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5046, loopEnd4879);
    panda$core$String* $tmp5049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5047, &$s5048);
    (($fn5050) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5049);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive5006, p_out);
    panda$core$String* $tmp5052 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5051 = $tmp5052;
    panda$core$String* $tmp5053 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusiveTest5051);
    panda$core$String* $tmp5055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5053, &$s5054);
    panda$core$String* $tmp5056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5055, signPrefix4889);
    panda$core$String* $tmp5058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5056, &$s5057);
    panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5058, numberType4777);
    panda$core$String* $tmp5061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5059, &$s5060);
    panda$core$String* $tmp5062 = panda$core$String$convert$R$panda$core$String(start4794);
    panda$core$String* $tmp5064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5062, &$s5063);
    panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5064, end4834);
    panda$core$String* $tmp5067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5065, &$s5066);
    panda$core$String* $tmp5068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5061, $tmp5067);
    (($fn5069) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5068);
    panda$core$String* $tmp5071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5070, backwardEntryExclusiveTest5051);
    panda$core$String* $tmp5073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5071, &$s5072);
    panda$core$String* $tmp5074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5073, loopStart4875);
    panda$core$String* $tmp5076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5074, &$s5075);
    panda$core$String* $tmp5077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5076, loopEnd4879);
    panda$core$String* $tmp5079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5077, &$s5078);
    (($fn5080) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5079);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4875, p_out);
    panda$core$String* $tmp5082 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5081 = $tmp5082;
    panda$core$String* $tmp5083 = panda$core$String$convert$R$panda$core$String(indexValue5081);
    panda$core$String* $tmp5085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5083, &$s5084);
    panda$core$String* $tmp5086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5085, numberType4777);
    panda$core$String* $tmp5088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5086, &$s5087);
    panda$core$String* $tmp5089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5088, numberType4777);
    panda$core$String* $tmp5091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5089, &$s5090);
    panda$core$String* $tmp5092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5091, indexValuePtr4803);
    panda$core$String* $tmp5094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5092, &$s5093);
    (($fn5095) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5094);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4756, p_out);
    panda$core$Bit $tmp5096 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4756);
    panda$core$Bit $tmp5097 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5096);
    if ($tmp5097.value) {
    {
        panda$core$String* $tmp5099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5098, loopTest4881);
        panda$core$String* $tmp5101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5099, &$s5100);
        (($fn5102) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5101);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4881, p_out);
    panda$core$String* $tmp5104 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5103 = $tmp5104;
    panda$core$String* $tmp5106 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5105 = $tmp5106;
    panda$core$String* $tmp5108 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5107 = $tmp5108;
    panda$core$String* $tmp5110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5109, direction4901);
    panda$core$String* $tmp5112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5110, &$s5111);
    panda$core$String* $tmp5113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5112, forwardLabel5105);
    panda$core$String* $tmp5115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5113, &$s5114);
    panda$core$String* $tmp5116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5115, backwardLabel5107);
    panda$core$String* $tmp5118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5116, &$s5117);
    (($fn5119) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5118);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel5105, p_out);
    panda$core$String* $tmp5121 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5120 = $tmp5121;
    panda$core$String* $tmp5122 = panda$core$String$convert$R$panda$core$String(forwardDelta5120);
    panda$core$String* $tmp5124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5122, &$s5123);
    panda$core$String* $tmp5125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5124, numberType4777);
    panda$core$String* $tmp5127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5125, &$s5126);
    panda$core$String* $tmp5128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5127, end4834);
    panda$core$String* $tmp5130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5128, &$s5129);
    panda$core$String* $tmp5131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5130, indexValue5081);
    panda$core$String* $tmp5133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5131, &$s5132);
    (($fn5134) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5133);
    panda$core$String* $tmp5136 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5135 = $tmp5136;
    panda$core$String* $tmp5138 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5137 = $tmp5138;
    panda$core$String* $tmp5140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5139, inclusive4866);
    panda$core$String* $tmp5142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5140, &$s5141);
    panda$core$String* $tmp5143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5142, forwardInclusiveLabel5135);
    panda$core$String* $tmp5145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5143, &$s5144);
    panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5145, forwardExclusiveLabel5137);
    (($fn5147) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5146);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel5135, p_out);
    panda$core$String* $tmp5149 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5148 = $tmp5149;
    panda$core$String* $tmp5150 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest5148);
    panda$core$String* $tmp5152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5150, &$s5151);
    panda$core$String* $tmp5153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5152, numberType4777);
    panda$core$String* $tmp5155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5153, &$s5154);
    panda$core$String* $tmp5156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5155, forwardDelta5120);
    panda$core$String* $tmp5158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5156, &$s5157);
    panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5158, step4852);
    panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, &$s5160);
    (($fn5162) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5161);
    panda$core$String* $tmp5164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5163, forwardInclusiveTest5148);
    panda$core$String* $tmp5166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5164, &$s5165);
    panda$core$String* $tmp5167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5166, loopInc5103);
    panda$core$String* $tmp5169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5167, &$s5168);
    panda$core$String* $tmp5170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5169, loopEnd4879);
    panda$core$String* $tmp5172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5170, &$s5171);
    (($fn5173) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5172);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel5137, p_out);
    panda$core$String* $tmp5175 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5174 = $tmp5175;
    panda$core$String* $tmp5176 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest5174);
    panda$core$String* $tmp5178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5176, &$s5177);
    panda$core$String* $tmp5179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5178, numberType4777);
    panda$core$String* $tmp5181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5179, &$s5180);
    panda$core$String* $tmp5182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5181, forwardDelta5120);
    panda$core$String* $tmp5184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5182, &$s5183);
    panda$core$String* $tmp5185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5184, step4852);
    panda$core$String* $tmp5187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5185, &$s5186);
    (($fn5188) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5187);
    panda$core$String* $tmp5190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5189, forwardExclusiveTest5174);
    panda$core$String* $tmp5192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5190, &$s5191);
    panda$core$String* $tmp5193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5192, loopInc5103);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5193, &$s5194);
    panda$core$String* $tmp5196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, loopEnd4879);
    panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5196, &$s5197);
    (($fn5199) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5198);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel5107, p_out);
    panda$core$String* $tmp5201 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5200 = $tmp5201;
    panda$core$String* $tmp5202 = panda$core$String$convert$R$panda$core$String(backwardDelta5200);
    panda$core$String* $tmp5204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5202, &$s5203);
    panda$core$String* $tmp5205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5204, numberType4777);
    panda$core$String* $tmp5207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5205, &$s5206);
    panda$core$String* $tmp5208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5207, indexValue5081);
    panda$core$String* $tmp5210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5208, &$s5209);
    panda$core$String* $tmp5211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5210, end4834);
    panda$core$String* $tmp5213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5211, &$s5212);
    (($fn5214) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5213);
    panda$core$String* $tmp5216 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5215 = $tmp5216;
    panda$core$String* $tmp5217 = panda$core$String$convert$R$panda$core$String(negStep5215);
    panda$core$String* $tmp5219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5217, &$s5218);
    panda$core$String* $tmp5220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5219, numberType4777);
    panda$core$String* $tmp5222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5220, &$s5221);
    panda$core$String* $tmp5223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5222, step4852);
    panda$core$String* $tmp5225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5223, &$s5224);
    (($fn5226) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5225);
    panda$core$String* $tmp5228 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5227 = $tmp5228;
    panda$core$String* $tmp5230 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5229 = $tmp5230;
    panda$core$String* $tmp5232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5231, inclusive4866);
    panda$core$String* $tmp5234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5232, &$s5233);
    panda$core$String* $tmp5235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5234, backwardInclusiveLabel5227);
    panda$core$String* $tmp5237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5235, &$s5236);
    panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5237, backwardExclusiveLabel5229);
    (($fn5239) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5238);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel5227, p_out);
    panda$core$String* $tmp5241 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5240 = $tmp5241;
    panda$core$String* $tmp5242 = panda$core$String$convert$R$panda$core$String(backwardInclusiveTest5240);
    panda$core$String* $tmp5244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5242, &$s5243);
    panda$core$String* $tmp5245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5244, numberType4777);
    panda$core$String* $tmp5247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5245, &$s5246);
    panda$core$String* $tmp5248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5247, backwardDelta5200);
    panda$core$String* $tmp5250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5248, &$s5249);
    panda$core$String* $tmp5251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5250, negStep5215);
    (($fn5252) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5251);
    panda$core$String* $tmp5254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5253, backwardInclusiveTest5240);
    panda$core$String* $tmp5256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5254, &$s5255);
    panda$core$String* $tmp5257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5256, loopInc5103);
    panda$core$String* $tmp5259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5257, &$s5258);
    panda$core$String* $tmp5260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5259, loopEnd4879);
    panda$core$String* $tmp5262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5260, &$s5261);
    (($fn5263) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5262);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel5229, p_out);
    panda$core$String* $tmp5265 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5264 = $tmp5265;
    panda$core$String* $tmp5266 = panda$core$String$convert$R$panda$core$String(backwardExclusiveTest5264);
    panda$core$String* $tmp5268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5266, &$s5267);
    panda$core$String* $tmp5269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5268, numberType4777);
    panda$core$String* $tmp5271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5269, &$s5270);
    panda$core$String* $tmp5272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5271, backwardDelta5200);
    panda$core$String* $tmp5274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5272, &$s5273);
    panda$core$String* $tmp5275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5274, negStep5215);
    (($fn5276) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5275);
    panda$core$String* $tmp5278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5277, backwardExclusiveTest5264);
    panda$core$String* $tmp5280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5278, &$s5279);
    panda$core$String* $tmp5281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5280, loopInc5103);
    panda$core$String* $tmp5283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5281, &$s5282);
    panda$core$String* $tmp5284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5283, loopEnd4879);
    panda$core$String* $tmp5286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5284, &$s5285);
    (($fn5287) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5286);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc5103, p_out);
    panda$core$String* $tmp5289 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5288 = $tmp5289;
    panda$core$String* $tmp5290 = panda$core$String$convert$R$panda$core$String(inc5288);
    panda$core$String* $tmp5292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5290, &$s5291);
    panda$core$String* $tmp5293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5292, numberType4777);
    panda$core$String* $tmp5295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5293, &$s5294);
    panda$core$String* $tmp5296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5295, indexValue5081);
    panda$core$String* $tmp5298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5296, &$s5297);
    panda$core$String* $tmp5299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5298, step4852);
    panda$core$String* $tmp5301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5299, &$s5300);
    (($fn5302) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5301);
    panda$core$String* $tmp5304 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5303 = $tmp5304;
    panda$core$String* $tmp5305 = panda$core$String$convert$R$panda$core$String(incStruct5303);
    panda$core$String* $tmp5307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5305, &$s5306);
    panda$core$String* $tmp5308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5307, indexType4763);
    panda$core$String* $tmp5310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5308, &$s5309);
    panda$core$String* $tmp5311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5310, numberType4777);
    panda$core$String* $tmp5313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5311, &$s5312);
    (($fn5314) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5313);
    panda$core$String* $tmp5316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5315, numberType4777);
    panda$core$String* $tmp5318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5316, &$s5317);
    panda$core$String* $tmp5319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5318, inc5288);
    panda$core$String* $tmp5321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5319, &$s5320);
    (($fn5322) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5321);
    panda$core$String* $tmp5324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5323, indexType4763);
    panda$core$String* $tmp5326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5324, &$s5325);
    panda$core$String* $tmp5327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5326, incStruct5303);
    panda$core$String* $tmp5329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5327, &$s5328);
    panda$core$String* $tmp5330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5329, indexType4763);
    panda$core$String* $tmp5332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5330, &$s5331);
    panda$core$String* $tmp5333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5332, index4785);
    panda$core$String* $tmp5335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5333, &$s5334);
    (($fn5336) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5335);
    panda$core$String* $tmp5338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5337, loopStart4875);
    panda$core$String* $tmp5340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5338, &$s5339);
    (($fn5341) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5340);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4879, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp5342 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5343 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5342)->type);
    if ($tmp5343.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5344 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5345 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5344)->type);
    if ($tmp5345.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5352;
    panda$core$String* loopBody5354;
    panda$core$String* loopEnd5356;
    panda$core$String* test5365;
    panda$core$String* testBit5368;
    panda$core$Bit $tmp5346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5346.value);
    panda$core$Int64 $tmp5347 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5347, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5348.value);
    panda$core$Object* $tmp5349 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5350 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5351 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5349)->type, $tmp5350);
    PANDA_ASSERT($tmp5351.value);
    panda$core$String* $tmp5353 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5352 = $tmp5353;
    panda$core$String* $tmp5355 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5354 = $tmp5355;
    panda$core$String* $tmp5357 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5356 = $tmp5357;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5358 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5358->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5358->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5358, ((panda$core$String*) p_w->payload), loopEnd5356, loopStart5352);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5358));
    panda$core$String* $tmp5361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5360, loopStart5352);
    panda$core$String* $tmp5363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5361, &$s5362);
    (($fn5364) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5363);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5352, p_out);
    panda$core$Object* $tmp5366 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5367 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5366), p_out);
    test5365 = $tmp5367;
    panda$core$String* $tmp5369 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5368 = $tmp5369;
    panda$core$String* $tmp5370 = panda$core$String$convert$R$panda$core$String(testBit5368);
    panda$core$String* $tmp5372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5370, &$s5371);
    panda$core$String* $tmp5373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5372, test5365);
    panda$core$String* $tmp5375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5373, &$s5374);
    (($fn5376) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5375);
    panda$core$String* $tmp5378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5377, testBit5368);
    panda$core$String* $tmp5380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5378, &$s5379);
    panda$core$String* $tmp5381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5380, loopBody5354);
    panda$core$String* $tmp5383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5381, &$s5382);
    panda$core$String* $tmp5384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5383, loopEnd5356);
    panda$core$String* $tmp5386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5384, &$s5385);
    (($fn5387) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5386);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5354, p_out);
    panda$core$Object* $tmp5388 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5388), p_out);
    panda$core$Object* $tmp5389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5390 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5389));
    panda$core$Bit $tmp5391 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5390);
    if ($tmp5391.value) {
    {
        panda$core$String* $tmp5393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5392, loopStart5352);
        panda$core$String* $tmp5395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5393, &$s5394);
        (($fn5396) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5395);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5356, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5403;
    panda$core$String* loopBody5405;
    panda$core$String* loopEnd5407;
    panda$core$String* test5416;
    panda$core$String* testBit5419;
    panda$core$Bit $tmp5397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5397.value);
    panda$core$Int64 $tmp5398 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5398, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5399.value);
    panda$core$Object* $tmp5400 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5401 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5402 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5400)->type, $tmp5401);
    PANDA_ASSERT($tmp5402.value);
    panda$core$String* $tmp5404 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5403 = $tmp5404;
    panda$core$String* $tmp5406 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5405 = $tmp5406;
    panda$core$String* $tmp5408 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5407 = $tmp5408;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5409 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5409->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5409->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5409, ((panda$core$String*) p_d->payload), loopEnd5407, loopStart5403);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5409));
    panda$core$String* $tmp5412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5411, loopBody5405);
    panda$core$String* $tmp5414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5412, &$s5413);
    (($fn5415) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5414);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5403, p_out);
    panda$core$Object* $tmp5417 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5418 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5417), p_out);
    test5416 = $tmp5418;
    panda$core$String* $tmp5420 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5419 = $tmp5420;
    panda$core$String* $tmp5421 = panda$core$String$convert$R$panda$core$String(testBit5419);
    panda$core$String* $tmp5423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5421, &$s5422);
    panda$core$String* $tmp5424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5423, test5416);
    panda$core$String* $tmp5426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5424, &$s5425);
    (($fn5427) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5426);
    panda$core$String* $tmp5429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5428, testBit5419);
    panda$core$String* $tmp5431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5429, &$s5430);
    panda$core$String* $tmp5432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5431, loopBody5405);
    panda$core$String* $tmp5434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5432, &$s5433);
    panda$core$String* $tmp5435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5434, loopEnd5407);
    panda$core$String* $tmp5437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5435, &$s5436);
    (($fn5438) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5437);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5405, p_out);
    panda$core$Object* $tmp5439 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5439), p_out);
    panda$core$Object* $tmp5440 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5441 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5440));
    panda$core$Bit $tmp5442 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5441);
    if ($tmp5442.value) {
    {
        panda$core$String* $tmp5444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5443, loopStart5403);
        panda$core$String* $tmp5446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5444, &$s5445);
        (($fn5447) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5446);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5407, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5451;
    panda$core$String* loopEnd5453;
    panda$core$Bit $tmp5448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5448.value);
    panda$core$Int64 $tmp5449 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5449, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5450.value);
    panda$core$String* $tmp5452 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5451 = $tmp5452;
    panda$core$String* $tmp5454 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5453 = $tmp5454;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5455 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5455->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5455->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5455, ((panda$core$String*) p_l->payload), loopEnd5453, loopStart5451);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5455));
    panda$core$String* $tmp5458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5457, loopStart5451);
    panda$core$String* $tmp5460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5458, &$s5459);
    (($fn5461) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5460);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5451, p_out);
    panda$core$Object* $tmp5462 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5462), p_out);
    panda$core$Object* $tmp5463 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5464 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5463));
    panda$core$Bit $tmp5465 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5464);
    if ($tmp5465.value) {
    {
        panda$core$String* $tmp5467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5466, loopStart5451);
        panda$core$String* $tmp5469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5467, &$s5468);
        (($fn5470) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5469);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5453, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5471;
    panda$core$String* ref5481;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5471 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5472 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5471);
            panda$core$String* $tmp5473 = panda$core$String$convert$R$panda$core$String($tmp5472);
            panda$core$String* $tmp5475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5473, &$s5474);
            panda$core$String* $tmp5476 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5471->type);
            panda$core$String* $tmp5477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5475, $tmp5476);
            panda$core$String* $tmp5479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5477, &$s5478);
            (($fn5480) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5479);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5482 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                ref5481 = $tmp5482;
                panda$core$String* $tmp5484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5483, ref5481);
                panda$core$String* $tmp5486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5484, &$s5485);
                panda$core$String* $tmp5487 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5471->type);
                panda$core$String* $tmp5488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5486, $tmp5487);
                panda$core$String* $tmp5490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5488, &$s5489);
                panda$core$String* $tmp5491 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5471);
                panda$core$String* $tmp5492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5490, $tmp5491);
                panda$core$String* $tmp5494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5492, &$s5493);
                (($fn5495) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5494);
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
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* decl$Iter5509;
    org$pandalanguage$pandac$IRNode* decl5521;
    panda$core$Bit $tmp5499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5498 = $tmp5499.value;
    if ($tmp5498) goto $l5500;
    panda$core$Bit $tmp5501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5498 = $tmp5501.value;
    $l5500:;
    panda$core$Bit $tmp5502 = { $tmp5498 };
    bool $tmp5497 = $tmp5502.value;
    if ($tmp5497) goto $l5503;
    panda$core$Bit $tmp5504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5497 = $tmp5504.value;
    $l5503:;
    panda$core$Bit $tmp5505 = { $tmp5497 };
    bool $tmp5496 = $tmp5505.value;
    if ($tmp5496) goto $l5506;
    panda$core$Bit $tmp5507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5496 = $tmp5507.value;
    $l5506:;
    panda$core$Bit $tmp5508 = { $tmp5496 };
    PANDA_ASSERT($tmp5508.value);
    {
        ITable* $tmp5510 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5510->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5510 = $tmp5510->next;
        }
        $fn5512 $tmp5511 = $tmp5510->methods[0];
        panda$collections$Iterator* $tmp5513 = $tmp5511(((panda$collections$Iterable*) p_v->children));
        decl$Iter5509 = $tmp5513;
        $l5514:;
        ITable* $tmp5516 = decl$Iter5509->$class->itable;
        while ($tmp5516->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5516 = $tmp5516->next;
        }
        $fn5518 $tmp5517 = $tmp5516->methods[0];
        panda$core$Bit $tmp5519 = $tmp5517(decl$Iter5509);
        panda$core$Bit $tmp5520 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5519);
        if (!$tmp5520.value) goto $l5515;
        {
            ITable* $tmp5522 = decl$Iter5509->$class->itable;
            while ($tmp5522->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5522 = $tmp5522->next;
            }
            $fn5524 $tmp5523 = $tmp5522->methods[1];
            panda$core$Object* $tmp5525 = $tmp5523(decl$Iter5509);
            decl5521 = ((org$pandalanguage$pandac$IRNode*) $tmp5525);
            panda$core$Bit $tmp5526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5521->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5526.value);
            panda$core$Int64 $tmp5527 = panda$collections$Array$get_count$R$panda$core$Int64(decl5521->children);
            panda$core$Bit $tmp5528 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5527, ((panda$core$Int64) { 1 }));
            if ($tmp5528.value) {
            {
                panda$core$Object* $tmp5529 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5521->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5521->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5529), ((org$pandalanguage$pandac$IRNode*) $tmp5530), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5531 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5521->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5531), NULL, p_out);
            }
            }
        }
        goto $l5514;
        $l5515:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base5535;
    panda$core$String* raw5538;
    org$pandalanguage$pandac$ClassDecl* cl5540;
    org$pandalanguage$pandac$FieldDecl* f5543;
    panda$collections$ListView* fields5544;
    panda$core$Int64 index5546;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5547;
    panda$core$String* result5607;
    panda$core$String* result5620;
    panda$core$String* reused5623;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5532 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5533 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp5532, p_out);
            return $tmp5533;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5534 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5534;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5536 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5537 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5536), p_out);
            base5535 = $tmp5537;
            panda$core$String* $tmp5539 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            raw5538 = $tmp5539;
            panda$core$Object* $tmp5541 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5542 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5541)->type);
            cl5540 = $tmp5542;
            PANDA_ASSERT(((panda$core$Bit) { cl5540 != NULL }).value);
            f5543 = ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload);
            panda$collections$ListView* $tmp5545 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5540);
            fields5544 = $tmp5545;
            index5546 = ((panda$core$Int64) { -1 });
            ITable* $tmp5548 = ((panda$collections$CollectionView*) fields5544)->$class->itable;
            while ($tmp5548->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5548 = $tmp5548->next;
            }
            $fn5550 $tmp5549 = $tmp5548->methods[0];
            panda$core$Int64 $tmp5551 = $tmp5549(((panda$collections$CollectionView*) fields5544));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5547, ((panda$core$Int64) { 0 }), $tmp5551, ((panda$core$Bit) { false }));
            int64_t $tmp5553 = $tmp5547.min.value;
            panda$core$Int64 i5552 = { $tmp5553 };
            int64_t $tmp5555 = $tmp5547.max.value;
            bool $tmp5556 = $tmp5547.inclusive.value;
            if ($tmp5556) goto $l5563; else goto $l5564;
            $l5563:;
            if ($tmp5553 <= $tmp5555) goto $l5557; else goto $l5559;
            $l5564:;
            if ($tmp5553 < $tmp5555) goto $l5557; else goto $l5559;
            $l5557:;
            {
                ITable* $tmp5565 = fields5544->$class->itable;
                while ($tmp5565->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5565 = $tmp5565->next;
                }
                $fn5567 $tmp5566 = $tmp5565->methods[0];
                panda$core$Object* $tmp5568 = $tmp5566(fields5544, i5552);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5568))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) f5543)->name) }).value) {
                {
                    index5546 = i5552;
                    goto $l5559;
                }
                }
            }
            $l5560:;
            int64_t $tmp5570 = $tmp5555 - i5552.value;
            if ($tmp5556) goto $l5571; else goto $l5572;
            $l5571:;
            if ($tmp5570 >= 1) goto $l5569; else goto $l5559;
            $l5572:;
            if ($tmp5570 > 1) goto $l5569; else goto $l5559;
            $l5569:;
            i5552.value += 1;
            goto $l5557;
            $l5559:;
            panda$core$Bit $tmp5575 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5546, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5575.value);
            panda$core$String* $tmp5576 = panda$core$String$convert$R$panda$core$String(raw5538);
            panda$core$String* $tmp5578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5576, &$s5577);
            org$pandalanguage$pandac$Type* $tmp5579 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5540);
            panda$core$String* $tmp5580 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5579);
            panda$core$String* $tmp5581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5578, $tmp5580);
            panda$core$String* $tmp5583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5581, &$s5582);
            org$pandalanguage$pandac$Type* $tmp5584 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5540);
            panda$core$String* $tmp5585 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5584);
            panda$core$String* $tmp5586 = panda$core$String$convert$R$panda$core$String($tmp5585);
            panda$core$String* $tmp5588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5586, &$s5587);
            panda$core$String* $tmp5589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5588, base5535);
            panda$core$String* $tmp5591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5589, &$s5590);
            panda$core$String* $tmp5592 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5591, ((panda$core$Object*) wrap_panda$core$Int64(index5546)));
            panda$core$String* $tmp5594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5592, &$s5593);
            panda$core$String* $tmp5595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5583, $tmp5594);
            (($fn5596) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5595);
            panda$core$Bit $tmp5598 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, f5543->owner);
            bool $tmp5597 = $tmp5598.value;
            if ($tmp5597) goto $l5599;
            panda$core$Bit $tmp5601 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f5543->type);
            bool $tmp5600 = $tmp5601.value;
            if (!$tmp5600) goto $l5602;
            org$pandalanguage$pandac$ClassDecl* $tmp5603 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f5543->type);
            panda$core$Bit $tmp5604 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp5603);
            $tmp5600 = $tmp5604.value;
            $l5602:;
            panda$core$Bit $tmp5605 = { $tmp5600 };
            $tmp5597 = $tmp5605.value;
            $l5599:;
            panda$core$Bit $tmp5606 = { $tmp5597 };
            if ($tmp5606.value) {
            {
                return raw5538;
            }
            }
            panda$core$String* $tmp5608 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result5607 = $tmp5608;
            panda$core$String* $tmp5609 = panda$core$String$convert$R$panda$core$String(result5607);
            panda$core$String* $tmp5611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5609, &$s5610);
            panda$core$String* $tmp5612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5611, raw5538);
            panda$core$String* $tmp5614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5612, &$s5613);
            panda$core$String* $tmp5615 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5614, $tmp5615);
            panda$core$String* $tmp5618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5616, &$s5617);
            (($fn5619) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5618);
            return result5607;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5621 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5622 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5621), p_out);
            result5620 = $tmp5622;
            panda$core$String* $tmp5624 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5623 = $tmp5624;
            panda$core$String* $tmp5625 = panda$core$String$convert$R$panda$core$String(reused5623);
            panda$core$String* $tmp5627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5625, &$s5626);
            panda$core$String* $tmp5628 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5627, $tmp5628);
            panda$core$String* $tmp5631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5629, &$s5630);
            panda$core$String* $tmp5632 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5633 = panda$core$String$convert$R$panda$core$String($tmp5632);
            panda$core$String* $tmp5635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5633, &$s5634);
            panda$core$String* $tmp5636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5635, result5620);
            panda$core$String* $tmp5638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5636, &$s5637);
            panda$core$String* $tmp5639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5631, $tmp5638);
            (($fn5640) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5639);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5623));
            return result5620;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue5644;
    panda$core$String* value5655;
    panda$core$String* t5656;
    panda$core$Int64 op5659;
    panda$core$String* right5661;
    panda$core$Bit $tmp5641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5641.value);
    panda$core$Int64 $tmp5642 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5642, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5643.value);
    panda$core$Object* $tmp5645 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5646 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5645)->type);
    panda$core$String* $tmp5647 = panda$core$String$convert$R$panda$core$String($tmp5646);
    panda$core$String* $tmp5649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5647, &$s5648);
    panda$core$Object* $tmp5650 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5651 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5650), p_out);
    panda$core$String* $tmp5652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5649, $tmp5651);
    panda$core$String* $tmp5654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5652, &$s5653);
    lvalue5644 = $tmp5654;
    panda$core$Object* $tmp5657 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5658 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5657)->type);
    t5656 = $tmp5658;
    op5659 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5659, ((panda$core$Int64) { 73 }));
    if ($tmp5660.value) {
    {
        panda$core$Object* $tmp5662 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5663 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5662), p_out);
        right5661 = $tmp5663;
        panda$core$String* $tmp5664 = panda$core$String$convert$R$panda$core$String(t5656);
        panda$core$String* $tmp5666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5664, &$s5665);
        panda$core$String* $tmp5667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5666, right5661);
        panda$core$String* $tmp5669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5667, &$s5668);
        value5655 = $tmp5669;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5670, value5655);
    panda$core$String* $tmp5673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5671, &$s5672);
    panda$core$String* $tmp5674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5673, lvalue5644);
    panda$core$String* $tmp5676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5674, &$s5675);
    (($fn5677) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5676);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5682;
    panda$core$String* result5684;
    panda$core$Int64 $tmp5678 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5678, ((panda$core$Int64) { 1 }));
    if ($tmp5679.value) {
    {
        panda$core$Int64 $tmp5680 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5681 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5680, ((panda$core$Int64) { 0 }));
        if ($tmp5681.value) {
        {
            panda$core$Object* $tmp5683 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5682 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5683);
            panda$core$Object* $tmp5685 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5686 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5685), p_out);
            result5684 = $tmp5686;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5687 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5687->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5687->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5687, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5684));
            panda$collections$Array$add$panda$collections$Array$T(inline5682->returns, ((panda$core$Object*) $tmp5687));
            panda$core$String* $tmp5690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5689, inline5682->exitLabel);
            panda$core$String* $tmp5692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5690, &$s5691);
            (($fn5693) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5692);
        }
        }
        else {
        {
            panda$core$Object* $tmp5695 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5696 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5695), p_out);
            panda$core$String* $tmp5697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5694, $tmp5696);
            panda$core$String* $tmp5699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5697, &$s5698);
            (($fn5700) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5699);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5701 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5701, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp5702.value);
        panda$core$Int64 $tmp5703 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5704 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5703, ((panda$core$Int64) { 0 }));
        if ($tmp5704.value) {
        {
            panda$core$Object* $tmp5706 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5705, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5706)->exitLabel);
            panda$core$String* $tmp5709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5707, &$s5708);
            (($fn5710) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5709);
        }
        }
        else {
        {
            (($fn5712) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5711);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5716;
    panda$core$Int64 $tmp5713 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5714 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5713, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5714.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5715 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5715);
    }
    }
    panda$core$Int64 $tmp5717 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5716, ((panda$core$Int64) { 0 }), $tmp5717, ((panda$core$Bit) { false }));
    int64_t $tmp5719 = $tmp5716.min.value;
    panda$core$Int64 i5718 = { $tmp5719 };
    int64_t $tmp5721 = $tmp5716.max.value;
    bool $tmp5722 = $tmp5716.inclusive.value;
    if ($tmp5722) goto $l5729; else goto $l5730;
    $l5729:;
    if ($tmp5719 <= $tmp5721) goto $l5723; else goto $l5725;
    $l5730:;
    if ($tmp5719 < $tmp5721) goto $l5723; else goto $l5725;
    $l5723:;
    {
        panda$core$Object* $tmp5732 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5718);
        bool $tmp5731 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5732)->loopLabel != NULL }).value;
        if (!$tmp5731) goto $l5733;
        panda$core$Object* $tmp5734 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5718);
        panda$core$Bit $tmp5735 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5734)->loopLabel, p_name);
        $tmp5731 = $tmp5735.value;
        $l5733:;
        panda$core$Bit $tmp5736 = { $tmp5731 };
        if ($tmp5736.value) {
        {
            panda$core$Object* $tmp5737 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5718);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5737);
        }
        }
    }
    $l5726:;
    int64_t $tmp5739 = $tmp5721 - i5718.value;
    if ($tmp5722) goto $l5740; else goto $l5741;
    $l5740:;
    if ($tmp5739 >= 1) goto $l5738; else goto $l5725;
    $l5741:;
    if ($tmp5739 > 1) goto $l5738; else goto $l5725;
    $l5738:;
    i5718.value += 1;
    goto $l5723;
    $l5725:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5744;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5745 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5744 = $tmp5745;
    panda$core$String* $tmp5747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5746, desc5744->breakLabel);
    panda$core$String* $tmp5749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5747, &$s5748);
    (($fn5750) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5749);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5751;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5752 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5751 = $tmp5752;
    panda$core$String* $tmp5754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5753, desc5751->continueLabel);
    panda$core$String* $tmp5756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5754, &$s5755);
    (($fn5757) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5756);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test5767;
    panda$core$String* ifTrue5770;
    panda$core$String* ifFalse5772;
    panda$core$String* name5785;
    panda$core$String* path5786;
    panda$core$String$Index$nullable index5788;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5791;
    panda$core$String* nameRef5793;
    panda$core$String* line5795;
    panda$core$String* msg5800;
    panda$collections$Iterator* m$Iter5807;
    org$pandalanguage$pandac$MethodDecl* m5821;
    panda$core$Bit $tmp5758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5758.value);
    panda$core$Int64 $tmp5760 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5760, ((panda$core$Int64) { 1 }));
    bool $tmp5759 = $tmp5761.value;
    if ($tmp5759) goto $l5762;
    panda$core$Int64 $tmp5763 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5763, ((panda$core$Int64) { 2 }));
    $tmp5759 = $tmp5764.value;
    $l5762:;
    panda$core$Bit $tmp5765 = { $tmp5759 };
    PANDA_ASSERT($tmp5765.value);
    panda$core$Bit $tmp5766 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5766.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5768 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5769 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5768), p_out);
    test5767 = $tmp5769;
    panda$core$String* $tmp5771 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5770 = $tmp5771;
    panda$core$String* $tmp5773 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5772 = $tmp5773;
    panda$core$String* $tmp5775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5774, test5767);
    panda$core$String* $tmp5777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5775, &$s5776);
    panda$core$String* $tmp5778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5777, ifTrue5770);
    panda$core$String* $tmp5780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5778, &$s5779);
    panda$core$String* $tmp5781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5780, ifFalse5772);
    panda$core$String* $tmp5783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5781, &$s5782);
    (($fn5784) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5783);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse5772, p_out);
    panda$core$Object* $tmp5787 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path5786 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5787)->source->path;
    panda$core$String$Index$nullable $tmp5790 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path5786, &$s5789);
    index5788 = $tmp5790;
    if (((panda$core$Bit) { !index5788.nonnull }).value) {
    {
        name5785 = path5786;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp5791, index5788, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5792 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path5786, $tmp5791);
        name5785 = $tmp5792;
    }
    }
    panda$core$String* $tmp5794 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, name5785, p_out);
    nameRef5793 = $tmp5794;
    panda$core$String* $tmp5797 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5796, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp5799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5797, &$s5798);
    line5795 = $tmp5799;
    panda$core$Int64 $tmp5801 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5801, ((panda$core$Int64) { 2 }));
    if ($tmp5802.value) {
    {
        panda$core$Object* $tmp5803 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5804 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5803), p_out);
        msg5800 = $tmp5804;
    }
    }
    else {
    {
        msg5800 = NULL;
    }
    }
    (($fn5806) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5805);
    {
        org$pandalanguage$pandac$Type* $tmp5808 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp5809 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp5808);
        ITable* $tmp5810 = ((panda$collections$Iterable*) $tmp5809->methods)->$class->itable;
        while ($tmp5810->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5810 = $tmp5810->next;
        }
        $fn5812 $tmp5811 = $tmp5810->methods[0];
        panda$collections$Iterator* $tmp5813 = $tmp5811(((panda$collections$Iterable*) $tmp5809->methods));
        m$Iter5807 = $tmp5813;
        $l5814:;
        ITable* $tmp5816 = m$Iter5807->$class->itable;
        while ($tmp5816->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5816 = $tmp5816->next;
        }
        $fn5818 $tmp5817 = $tmp5816->methods[0];
        panda$core$Bit $tmp5819 = $tmp5817(m$Iter5807);
        panda$core$Bit $tmp5820 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5819);
        if (!$tmp5820.value) goto $l5815;
        {
            ITable* $tmp5822 = m$Iter5807->$class->itable;
            while ($tmp5822->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5822 = $tmp5822->next;
            }
            $fn5824 $tmp5823 = $tmp5822->methods[1];
            panda$core$Object* $tmp5825 = $tmp5823(m$Iter5807);
            m5821 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5825);
            panda$core$Bit $tmp5827 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5821)->name, &$s5826);
            if ($tmp5827.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m5821);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m5821);
            }
            }
        }
        goto $l5814;
        $l5815:;
    }
    if (((panda$core$Bit) { msg5800 != NULL }).value) {
    {
        panda$core$String* $tmp5830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5828, &$s5829);
        (($fn5831) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5830);
    }
    }
    else {
    {
        (($fn5833) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5832);
    }
    }
    panda$core$String* $tmp5835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5834, nameRef5793);
    panda$core$String* $tmp5837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5835, &$s5836);
    panda$core$String* $tmp5838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5837, line5795);
    panda$core$String* $tmp5840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5838, &$s5839);
    (($fn5841) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5840);
    if (((panda$core$Bit) { msg5800 != NULL }).value) {
    {
        panda$core$String* $tmp5843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5842, msg5800);
        panda$core$String* $tmp5845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5843, &$s5844);
        (($fn5846) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5845);
    }
    }
    (($fn5848) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5847);
    (($fn5850) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5849);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue5770, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* valueStruct5852;
    org$pandalanguage$pandac$ClassDecl* numberClass5855;
    panda$core$String* value5858;
    org$pandalanguage$pandac$FieldDecl* f5867;
    panda$core$String* switchType5870;
    panda$core$String* endLabel5880;
    panda$collections$Array* whenLabels5882;
    panda$core$String* otherwiseLabel5885;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5896;
    org$pandalanguage$pandac$IRNode* w5911;
    panda$core$String* label5915;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5917;
    panda$core$UInt64 number5933;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5961;
    org$pandalanguage$pandac$IRNode* w5976;
    org$pandalanguage$pandac$IRNode* block5978;
    panda$core$Bit $tmp5851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp5851.value);
    panda$core$Object* $tmp5853 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5854 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5853), p_out);
    valueStruct5852 = $tmp5854;
    panda$core$Object* $tmp5856 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp5857 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5856)->type);
    numberClass5855 = $tmp5857;
    panda$core$String* $tmp5859 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value5858 = $tmp5859;
    panda$core$String* $tmp5860 = panda$core$String$convert$R$panda$core$String(value5858);
    panda$core$String* $tmp5862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5860, &$s5861);
    panda$core$String* $tmp5863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5862, valueStruct5852);
    panda$core$String* $tmp5865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5863, &$s5864);
    (($fn5866) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5865);
    org$pandalanguage$pandac$Symbol* $tmp5869 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass5855->symbolTable, &$s5868);
    f5867 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5869);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f5867);
    panda$core$String* $tmp5871 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f5867->type);
    switchType5870 = $tmp5871;
    panda$core$String* $tmp5873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5872, switchType5870);
    panda$core$String* $tmp5875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5873, &$s5874);
    panda$core$String* $tmp5876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5875, value5858);
    panda$core$String* $tmp5878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5876, &$s5877);
    (($fn5879) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5878);
    panda$core$String* $tmp5881 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel5880 = $tmp5881;
    panda$collections$Array* $tmp5883 = (panda$collections$Array*) malloc(40);
    $tmp5883->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5883->refCount.value = 1;
    panda$collections$Array$init($tmp5883);
    whenLabels5882 = $tmp5883;
    panda$core$Int64 $tmp5886 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp5887 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5886, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5888 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, $tmp5887);
    panda$core$Bit $tmp5889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5888)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp5889.value) {
    {
        panda$core$String* $tmp5890 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel5885 = $tmp5890;
    }
    }
    else {
    {
        otherwiseLabel5885 = endLabel5880;
    }
    }
    panda$core$String* $tmp5892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5891, otherwiseLabel5885);
    panda$core$String* $tmp5894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5892, &$s5893);
    (($fn5895) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5894);
    panda$core$Int64 $tmp5897 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5896, ((panda$core$Int64) { 1 }), $tmp5897, ((panda$core$Bit) { false }));
    int64_t $tmp5899 = $tmp5896.min.value;
    panda$core$Int64 i5898 = { $tmp5899 };
    int64_t $tmp5901 = $tmp5896.max.value;
    bool $tmp5902 = $tmp5896.inclusive.value;
    if ($tmp5902) goto $l5909; else goto $l5910;
    $l5909:;
    if ($tmp5899 <= $tmp5901) goto $l5903; else goto $l5905;
    $l5910:;
    if ($tmp5899 < $tmp5901) goto $l5903; else goto $l5905;
    $l5903:;
    {
        panda$core$Object* $tmp5912 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5898);
        w5911 = ((org$pandalanguage$pandac$IRNode*) $tmp5912);
        panda$core$Bit $tmp5913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5911->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp5913.value) {
        {
            goto $l5906;
        }
        }
        panda$core$Bit $tmp5914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5911->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp5914.value);
        panda$core$String* $tmp5916 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label5915 = $tmp5916;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels5882, ((panda$core$Object*) label5915));
        panda$core$Int64 $tmp5918 = panda$collections$Array$get_count$R$panda$core$Int64(w5911->children);
        panda$core$Int64 $tmp5919 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5918, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5917, ((panda$core$Int64) { 0 }), $tmp5919, ((panda$core$Bit) { false }));
        int64_t $tmp5921 = $tmp5917.min.value;
        panda$core$Int64 i5920 = { $tmp5921 };
        int64_t $tmp5923 = $tmp5917.max.value;
        bool $tmp5924 = $tmp5917.inclusive.value;
        if ($tmp5924) goto $l5931; else goto $l5932;
        $l5931:;
        if ($tmp5921 <= $tmp5923) goto $l5925; else goto $l5927;
        $l5932:;
        if ($tmp5921 < $tmp5923) goto $l5925; else goto $l5927;
        $l5925:;
        {
            panda$core$Object* $tmp5934 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5911->children, i5920);
            panda$core$UInt64 $tmp5935 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5934));
            number5933 = $tmp5935;
            panda$core$String* $tmp5937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5936, switchType5870);
            panda$core$String* $tmp5939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5937, &$s5938);
            panda$core$String* $tmp5940 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5939, ((panda$core$Object*) wrap_panda$core$UInt64(number5933)));
            panda$core$String* $tmp5942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5940, &$s5941);
            panda$core$String* $tmp5943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5942, label5915);
            panda$core$String* $tmp5945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5943, &$s5944);
            (($fn5946) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5945);
        }
        $l5928:;
        int64_t $tmp5948 = $tmp5923 - i5920.value;
        if ($tmp5924) goto $l5949; else goto $l5950;
        $l5949:;
        if ($tmp5948 >= 1) goto $l5947; else goto $l5927;
        $l5950:;
        if ($tmp5948 > 1) goto $l5947; else goto $l5927;
        $l5947:;
        i5920.value += 1;
        goto $l5925;
        $l5927:;
    }
    $l5906:;
    int64_t $tmp5954 = $tmp5901 - i5898.value;
    if ($tmp5902) goto $l5955; else goto $l5956;
    $l5955:;
    if ($tmp5954 >= 1) goto $l5953; else goto $l5905;
    $l5956:;
    if ($tmp5954 > 1) goto $l5953; else goto $l5905;
    $l5953:;
    i5898.value += 1;
    goto $l5903;
    $l5905:;
    (($fn5960) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5959);
    panda$core$Int64 $tmp5962 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5961, ((panda$core$Int64) { 1 }), $tmp5962, ((panda$core$Bit) { false }));
    int64_t $tmp5964 = $tmp5961.min.value;
    panda$core$Int64 i5963 = { $tmp5964 };
    int64_t $tmp5966 = $tmp5961.max.value;
    bool $tmp5967 = $tmp5961.inclusive.value;
    if ($tmp5967) goto $l5974; else goto $l5975;
    $l5974:;
    if ($tmp5964 <= $tmp5966) goto $l5968; else goto $l5970;
    $l5975:;
    if ($tmp5964 < $tmp5966) goto $l5968; else goto $l5970;
    $l5968:;
    {
        panda$core$Object* $tmp5977 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5963);
        w5976 = ((org$pandalanguage$pandac$IRNode*) $tmp5977);
        panda$core$Int64 $tmp5979 = panda$collections$Array$get_count$R$panda$core$Int64(w5976->children);
        panda$core$Int64 $tmp5980 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5979, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp5981 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5976->children, $tmp5980);
        block5978 = ((org$pandalanguage$pandac$IRNode*) $tmp5981);
        panda$core$Int64 $tmp5982 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5963, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp5983 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels5882);
        panda$core$Bit $tmp5984 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp5982, $tmp5983);
        if ($tmp5984.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, otherwiseLabel5885, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp5985 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5963, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp5986 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels5882, $tmp5985);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ((panda$core$String*) $tmp5986), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block5978, p_out);
        panda$core$Bit $tmp5987 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block5978);
        panda$core$Bit $tmp5988 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5987);
        if ($tmp5988.value) {
        {
            panda$core$String* $tmp5990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5989, endLabel5880);
            panda$core$String* $tmp5992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5990, &$s5991);
            (($fn5993) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5992);
        }
        }
    }
    $l5971:;
    int64_t $tmp5995 = $tmp5966 - i5963.value;
    if ($tmp5967) goto $l5996; else goto $l5997;
    $l5996:;
    if ($tmp5995 >= 1) goto $l5994; else goto $l5970;
    $l5997:;
    if ($tmp5995 > 1) goto $l5994; else goto $l5970;
    $l5994:;
    i5963.value += 1;
    goto $l5968;
    $l5970:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel5880, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    switch (p_stmt->kind.value) {
        case 1023:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1000:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1005:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, p_stmt, NULL, p_out);
        }
        break;
        case 1012:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1029:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1013:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1014:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1015:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1017:
        case 1018:
        case 1019:
        case 1020:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1008:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1006:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1007:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1034:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1042:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result6000;
    org$pandalanguage$pandac$Type* $tmp6001 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp6002 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6001);
    result6000 = $tmp6002;
    panda$core$Bit $tmp6004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6003 = $tmp6004.value;
    if (!$tmp6003) goto $l6005;
    panda$core$Bit $tmp6007 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6000, &$s6006);
    panda$core$Bit $tmp6008 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6007);
    $tmp6003 = $tmp6008.value;
    $l6005:;
    panda$core$Bit $tmp6009 = { $tmp6003 };
    if ($tmp6009.value) {
    {
        panda$core$String* $tmp6011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6000, &$s6010);
        return $tmp6011;
    }
    }
    return result6000;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6012;
    panda$core$Bit needsIndirection6021;
    panda$core$String* separator6033;
    panda$collections$Iterator* p$Iter6052;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6064;
    panda$core$String* $tmp6013 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6012 = $tmp6013;
    panda$core$Bit $tmp6014 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6012));
    if ($tmp6014.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6012));
    panda$core$String* $tmp6016 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6015, $tmp6016);
    panda$core$String* $tmp6019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6017, &$s6018);
    (($fn6020) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6019);
    panda$core$Bit $tmp6022 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6021 = $tmp6022;
    if (needsIndirection6021.value) {
    {
        (($fn6024) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6023);
    }
    }
    else {
    {
        panda$core$String* $tmp6025 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6026) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6025);
    }
    }
    panda$core$String* $tmp6028 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6027, $tmp6028);
    panda$core$String* $tmp6031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6029, &$s6030);
    (($fn6032) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6031);
    separator6033 = &$s6034;
    if (needsIndirection6021.value) {
    {
        panda$core$String* $tmp6035 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6036 = panda$core$String$convert$R$panda$core$String($tmp6035);
        panda$core$String* $tmp6038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6036, &$s6037);
        (($fn6039) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6038);
        separator6033 = &$s6040;
    }
    }
    panda$core$Bit $tmp6041 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6042 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6041);
    if ($tmp6042.value) {
    {
        panda$core$String* $tmp6043 = panda$core$String$convert$R$panda$core$String(separator6033);
        panda$core$String* $tmp6045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6043, &$s6044);
        panda$core$String* $tmp6046 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6045, $tmp6046);
        panda$core$String* $tmp6049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6047, &$s6048);
        (($fn6050) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6049);
        separator6033 = &$s6051;
    }
    }
    {
        ITable* $tmp6053 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6053->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6053 = $tmp6053->next;
        }
        $fn6055 $tmp6054 = $tmp6053->methods[0];
        panda$collections$Iterator* $tmp6056 = $tmp6054(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6052 = $tmp6056;
        $l6057:;
        ITable* $tmp6059 = p$Iter6052->$class->itable;
        while ($tmp6059->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6059 = $tmp6059->next;
        }
        $fn6061 $tmp6060 = $tmp6059->methods[0];
        panda$core$Bit $tmp6062 = $tmp6060(p$Iter6052);
        panda$core$Bit $tmp6063 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6062);
        if (!$tmp6063.value) goto $l6058;
        {
            ITable* $tmp6065 = p$Iter6052->$class->itable;
            while ($tmp6065->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6065 = $tmp6065->next;
            }
            $fn6067 $tmp6066 = $tmp6065->methods[1];
            panda$core$Object* $tmp6068 = $tmp6066(p$Iter6052);
            p6064 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6068);
            panda$core$String* $tmp6069 = panda$core$String$convert$R$panda$core$String(separator6033);
            panda$core$String* $tmp6071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6069, &$s6070);
            panda$core$String* $tmp6072 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6064->type);
            panda$core$String* $tmp6073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6071, $tmp6072);
            panda$core$String* $tmp6075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6073, &$s6074);
            panda$core$String* $tmp6076 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6064->name);
            panda$core$String* $tmp6077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6075, $tmp6076);
            panda$core$String* $tmp6079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6077, &$s6078);
            (($fn6080) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6079);
            separator6033 = &$s6081;
        }
        goto $l6057;
        $l6058:;
    }
    (($fn6083) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6082);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6104;
    panda$collections$Iterator* p$Iter6114;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6126;
    panda$io$MemoryOutputStream* bodyBuffer6148;
    panda$io$IndentedOutputStream* indentedBody6151;
    panda$collections$Iterator* s$Iter6154;
    org$pandalanguage$pandac$IRNode* s6166;
    panda$core$Object* $tmp6084 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6084)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6085;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    (($fn6087) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6086);
    panda$core$Bit $tmp6088 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6088.value) {
    {
        (($fn6090) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6089);
    }
    }
    panda$core$String* $tmp6091 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6092 = panda$core$String$convert$R$panda$core$String($tmp6091);
    panda$core$String* $tmp6094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6092, &$s6093);
    panda$core$String* $tmp6095 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6094, $tmp6095);
    panda$core$String* $tmp6098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6096, &$s6097);
    panda$core$String* $tmp6099 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6098, $tmp6099);
    panda$core$String* $tmp6102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6100, &$s6101);
    (($fn6103) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6102);
    separator6104 = &$s6105;
    panda$core$Bit $tmp6106 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6106);
    if ($tmp6107.value) {
    {
        panda$core$String* $tmp6108 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6109 = panda$core$String$convert$R$panda$core$String($tmp6108);
        panda$core$String* $tmp6111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6109, &$s6110);
        (($fn6112) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6111);
        separator6104 = &$s6113;
    }
    }
    {
        ITable* $tmp6115 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6115->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6115 = $tmp6115->next;
        }
        $fn6117 $tmp6116 = $tmp6115->methods[0];
        panda$collections$Iterator* $tmp6118 = $tmp6116(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6114 = $tmp6118;
        $l6119:;
        ITable* $tmp6121 = p$Iter6114->$class->itable;
        while ($tmp6121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6121 = $tmp6121->next;
        }
        $fn6123 $tmp6122 = $tmp6121->methods[0];
        panda$core$Bit $tmp6124 = $tmp6122(p$Iter6114);
        panda$core$Bit $tmp6125 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6124);
        if (!$tmp6125.value) goto $l6120;
        {
            ITable* $tmp6127 = p$Iter6114->$class->itable;
            while ($tmp6127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6127 = $tmp6127->next;
            }
            $fn6129 $tmp6128 = $tmp6127->methods[1];
            panda$core$Object* $tmp6130 = $tmp6128(p$Iter6114);
            p6126 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6130);
            panda$core$String* $tmp6131 = panda$core$String$convert$R$panda$core$String(separator6104);
            panda$core$String* $tmp6133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6131, &$s6132);
            panda$core$String* $tmp6134 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6126->type);
            panda$core$String* $tmp6135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6133, $tmp6134);
            panda$core$String* $tmp6137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6135, &$s6136);
            panda$core$String* $tmp6138 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6126->name);
            panda$core$String* $tmp6139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6137, $tmp6138);
            panda$core$String* $tmp6141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6139, &$s6140);
            (($fn6142) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6141);
            separator6104 = &$s6143;
        }
        goto $l6119;
        $l6120:;
    }
    (($fn6145) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6144);
    panda$core$Int64 $tmp6146 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6146;
    panda$core$Bit $tmp6147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6147.value);
    panda$io$MemoryOutputStream* $tmp6149 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6149->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6149->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6149);
    bodyBuffer6148 = $tmp6149;
    panda$io$IndentedOutputStream* $tmp6152 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp6152->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6152->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6152, ((panda$io$OutputStream*) bodyBuffer6148));
    indentedBody6151 = $tmp6152;
    {
        ITable* $tmp6155 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6155->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6155 = $tmp6155->next;
        }
        $fn6157 $tmp6156 = $tmp6155->methods[0];
        panda$collections$Iterator* $tmp6158 = $tmp6156(((panda$collections$Iterable*) p_body->children));
        s$Iter6154 = $tmp6158;
        $l6159:;
        ITable* $tmp6161 = s$Iter6154->$class->itable;
        while ($tmp6161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6161 = $tmp6161->next;
        }
        $fn6163 $tmp6162 = $tmp6161->methods[0];
        panda$core$Bit $tmp6164 = $tmp6162(s$Iter6154);
        panda$core$Bit $tmp6165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6164);
        if (!$tmp6165.value) goto $l6160;
        {
            ITable* $tmp6167 = s$Iter6154->$class->itable;
            while ($tmp6167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6167 = $tmp6167->next;
            }
            $fn6169 $tmp6168 = $tmp6167->methods[1];
            panda$core$Object* $tmp6170 = $tmp6168(s$Iter6154);
            s6166 = ((org$pandalanguage$pandac$IRNode*) $tmp6170);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s6166, indentedBody6151);
        }
        goto $l6159;
        $l6160:;
    }
    panda$core$String* $tmp6171 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn6172) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6171);
    panda$core$String* $tmp6173 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer6148);
    (($fn6174) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6173);
    panda$core$Bit $tmp6175 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6176 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6175);
    if ($tmp6176.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6177 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6178 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6177);
        if ($tmp6178.value) {
        {
            (($fn6180) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6179);
        }
        }
        else {
        {
            (($fn6182) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6181);
        }
        }
    }
    }
    panda$core$Int64 $tmp6183 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6183;
    (($fn6185) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6184);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6186 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6186.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6187 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6187);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

