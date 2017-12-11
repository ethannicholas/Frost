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
typedef panda$collections$Iterator* (*$fn1682)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1688)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1694)(panda$collections$Iterator*);
typedef void (*$fn1727)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1743)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1756)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1762)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1777)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1790)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1806)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1819)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1825)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1840)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1898)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1914)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1923)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1939)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1948)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1975)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1992)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2024)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2036)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2059)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2068)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2080)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2090)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2112)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2127)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2142)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2172)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2201)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2210)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2224)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2239)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2263)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2276)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2288)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2293)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2300)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2317)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2330)(panda$collections$CollectionView*);
typedef void (*$fn2350)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2362)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2377)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2404)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2425)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2452)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2477)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2492)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2517)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2529)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2549)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2564)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2580)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2592)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2609)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2626)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2640)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2663)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2678)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2732)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2739)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2750)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2756)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2762)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2768)(panda$collections$Iterator*);
typedef void (*$fn2779)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2781)(panda$io$OutputStream*);
typedef void (*$fn2806)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2824)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2926)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2938)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2943)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2956)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2963)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2968)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2974)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2980)(panda$collections$Iterator*);
typedef void (*$fn2988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2991)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3003)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3026)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3041)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3052)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3073)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3084)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3102)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3133)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3149)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3154)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3170)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3186)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3204)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3226)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3243)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3269)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3289)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3306)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3321)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3332)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3360)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3382)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3412)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3449)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3526)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3581)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3658)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3668)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3681)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3708)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3756)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3768)(panda$collections$CollectionView*);
typedef void (*$fn3779)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3786)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3792)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3798)(panda$collections$Iterator*);
typedef void (*$fn3807)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3810)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3847)(panda$collections$CollectionView*);
typedef void (*$fn3855)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3872)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3895)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3903)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3911)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3920)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3942)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3950)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3959)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3991)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4002)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4037)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4043)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4049)(panda$collections$Iterator*);
typedef void (*$fn4072)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4099)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4124)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4136)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4152)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4157)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4276)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4293)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4297)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4303)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4309)(panda$collections$Iterator*);
typedef void (*$fn4311)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4312)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4315)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4338)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4353)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4366)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4377)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4413)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4420)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4432)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4441)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4458)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4472)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4481)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4490)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4533)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4552)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4582)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4593)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4608)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4615)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4632)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4645)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4657)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4668)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4680)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4691)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4703)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4715)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4737)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4742)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4778)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4785)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4797)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4806)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4823)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4837)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4846)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4855)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4869)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4878)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4918)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4930)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4947)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4966)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4977)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4996)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5007)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5024)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5043)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5054)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5073)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5084)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5099)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5106)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5123)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5151)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5177)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5192)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5203)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5218)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5230)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5243)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5256)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5267)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5280)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5291)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5306)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5318)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5326)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5340)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5345)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5368)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5380)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5391)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5400)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5419)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5431)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5442)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5451)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5465)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5474)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5484)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5499)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5516)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5522)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5528)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5554)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5571)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5600)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5623)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5644)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5681)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5702)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5709)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5717)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5719)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5757)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5764)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5813)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5819)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5825)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5831)(panda$collections$Iterator*);
typedef void (*$fn5838)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5840)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5848)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5853)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5855)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5857)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5873)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5886)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5902)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5953)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5967)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6000)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6027)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6031)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6033)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6039)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6046)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6057)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6062)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6068)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6074)(panda$collections$Iterator*);
typedef void (*$fn6087)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6090)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6094)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6097)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6110)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6119)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6124)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6130)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6136)(panda$collections$Iterator*);
typedef void (*$fn6149)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6152)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6164)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6170)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6176)(panda$collections$Iterator*);
typedef void (*$fn6179)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6181)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6187)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6189)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6192)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, NULL };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, NULL };
static panda$core$String $s1545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, NULL };
static panda$core$String $s1575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, NULL };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, NULL };
static panda$core$String $s1606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, NULL };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, NULL };
static panda$core$String $s1624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, NULL };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, NULL };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, NULL };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, NULL };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, NULL };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, NULL };
static panda$core$String $s1669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, NULL };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, NULL };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, NULL };
static panda$core$String $s1769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s1772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s1798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, NULL };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, NULL };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s1934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, NULL };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, NULL };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A", 2, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, NULL };
static panda$core$String $s2137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, NULL };
static panda$core$String $s2140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, NULL };
static panda$core$String $s2193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, NULL };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, NULL };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, NULL };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, NULL };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, NULL };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, NULL };
static panda$core$String $s2546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, NULL };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, NULL };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, NULL };
static panda$core$String $s2726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, NULL };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s2924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s2951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s3050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, NULL };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, NULL };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, NULL };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, NULL };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, NULL };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, NULL };
static panda$core$String $s3150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, NULL };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, NULL };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s3174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s3330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, NULL };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, NULL };
static panda$core$String $s3349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s3351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s3357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, NULL };
static panda$core$String $s3430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, NULL };
static panda$core$String $s3461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, NULL };
static panda$core$String $s3462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, NULL };
static panda$core$String $s3503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, NULL };
static panda$core$String $s3512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s3515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s3568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s3575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, NULL };
static panda$core$String $s3578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, NULL };
static panda$core$String $s3596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, NULL };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, NULL };
static panda$core$String $s3626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s3628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s3634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s3666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s3698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, NULL };
static panda$core$String $s3706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, NULL };
static panda$core$String $s3711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, NULL };
static panda$core$String $s3713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x69\x38\x2A\x2A\x20", 11, NULL };
static panda$core$String $s3720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s3735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s3736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, NULL };
static panda$core$String $s3744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, NULL };
static panda$core$String $s3761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s3771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, NULL };
static panda$core$String $s3774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, NULL };
static panda$core$String $s3777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, NULL };
static panda$core$String $s3781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, NULL };
static panda$core$String $s3805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, NULL };
static panda$core$String $s3813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, NULL };
static panda$core$String $s3815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, NULL };
static panda$core$String $s3825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s3827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 54, NULL };
static panda$core$String $s3835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, NULL };
static panda$core$String $s3837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, NULL };
static panda$core$String $s3850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s3853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 10, NULL };
static panda$core$String $s3859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s3863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, NULL };
static panda$core$String $s3886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, NULL };
static panda$core$String $s3890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s3898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, NULL };
static panda$core$String $s3901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, NULL };
static panda$core$String $s3906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s3909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s3915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s3918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, NULL };
static panda$core$String $s3937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s3945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s3948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s3954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s3957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, NULL };
static panda$core$String $s3971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, NULL };
static panda$core$String $s3982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, NULL };
static panda$core$String $s3989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, NULL };
static panda$core$String $s3997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, NULL };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, NULL };
static panda$core$String $s4065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s4111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s4118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, NULL };
static panda$core$String $s4147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s4150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, NULL };
static panda$core$String $s4153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, NULL };
static panda$core$String $s4155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s4160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s4221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s4255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s4264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, NULL };
static panda$core$String $s4267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s4270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s4283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s4313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s4333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s4427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, NULL };
static panda$core$String $s4445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s4448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, NULL };
static panda$core$String $s4459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, NULL };
static panda$core$String $s4485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, NULL };
static panda$core$String $s4506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s4508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s4510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s4513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s4516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s4521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s4530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, NULL };
static panda$core$String $s4543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, NULL };
static panda$core$String $s4573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s4600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s4624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s4652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s4675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, NULL };
static panda$core$String $s4698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s4710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s4713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, NULL };
static panda$core$String $s4716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s4718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s4792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, NULL };
static panda$core$String $s4810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s4813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, NULL };
static panda$core$String $s4824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, NULL };
static panda$core$String $s4850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, NULL };
static panda$core$String $s4857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s4861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, NULL };
static panda$core$String $s4864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s4867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, NULL };
static panda$core$String $s4894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s4896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s4898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s4901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s4904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s4906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s4910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, NULL };
static panda$core$String $s4913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, NULL };
static panda$core$String $s4920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s4944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, NULL };
static panda$core$String $s4957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, NULL };
static panda$core$String $s4987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s5021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, NULL };
static panda$core$String $s5034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, NULL };
static panda$core$String $s5064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s5091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, NULL };
static panda$core$String $s5228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, NULL };
static panda$core$String $s5298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s5313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s5316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, NULL };
static panda$core$String $s5319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s5321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s5482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s5586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, NULL };
static panda$core$String $s5597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, NULL };
static panda$core$String $s5617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s5621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s5630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s5634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s5707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, NULL };
static panda$core$String $s5753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s5803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s5805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s5812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20", 10, NULL };
static panda$core$String $s5833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, NULL };
static panda$core$String $s5835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, NULL };
static panda$core$String $s5836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, NULL };
static panda$core$String $s5839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, NULL };
static panda$core$String $s5841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, NULL };
static panda$core$String $s5843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, NULL };
static panda$core$String $s5851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s5856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s5868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, NULL };
static panda$core$String $s5879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, NULL };
static panda$core$String $s5881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s5900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, NULL };
static panda$core$String $s5943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, NULL };
static panda$core$String $s5945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, NULL };
static panda$core$String $s5996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, NULL };
static panda$core$String $s6025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s6034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s6041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s6058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s6085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s6092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, NULL };
static panda$core$String $s6093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s6096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s6100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s6112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s6120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s6147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s6186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, NULL };
static panda$core$String $s6188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s6191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };

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
    panda$core$MutableString* result1526;
    panda$core$String$Index current1531;
    panda$core$String$Index end1533;
    panda$core$Char32 c1538;
    panda$core$Char8 $tmp1541;
    panda$core$MutableString* $tmp1527 = (panda$core$MutableString*) malloc(40);
    $tmp1527->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1527->refCount.value = 1;
    panda$core$Int64 $tmp1529 = panda$core$String$byteLength$R$panda$core$Int64(p_s);
    panda$core$Int64 $tmp1530 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp1529, ((panda$core$Int64) { 2 }));
    panda$core$MutableString$init$panda$core$Int64($tmp1527, $tmp1530);
    result1526 = $tmp1527;
    panda$core$String$Index $tmp1532 = panda$core$String$start$R$panda$core$String$Index(p_s);
    current1531 = $tmp1532;
    panda$core$String$Index $tmp1534 = panda$core$String$end$R$panda$core$String$Index(p_s);
    end1533 = $tmp1534;
    $l1535:;
    panda$core$Bit $tmp1537 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(current1531, end1533);
    if (!$tmp1537.value) goto $l1536;
    {
        panda$core$Char32 $tmp1539 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_s, current1531);
        c1538 = $tmp1539;
        panda$core$Int32 $tmp1540 = panda$core$Char32$convert$R$panda$core$Int32(c1538);
        switch ($tmp1540.value) {
            case 46:
            {
                panda$core$Char8$init$panda$core$UInt8(&$tmp1541, ((panda$core$UInt8) { 36 }));
                panda$core$MutableString$append$panda$core$Char8(result1526, $tmp1541);
            }
            break;
            case 63:
            {
                panda$core$MutableString$append$panda$core$String(result1526, &$s1542);
            }
            break;
            case 60:
            {
                panda$core$MutableString$append$panda$core$String(result1526, &$s1543);
            }
            break;
            case 62:
            {
                panda$core$MutableString$append$panda$core$String(result1526, &$s1544);
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
                panda$core$MutableString$append$panda$core$String(result1526, &$s1545);
            }
            break;
            default:
            {
                panda$core$MutableString$append$panda$core$Char32(result1526, c1538);
            }
        }
        panda$core$String$Index $tmp1546 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(p_s, current1531, ((panda$core$Int64) { 1 }));
        current1531 = $tmp1546;
    }
    goto $l1535;
    $l1536:;
    panda$core$String* $tmp1547 = panda$core$MutableString$finish$R$panda$core$String(result1526);
    return $tmp1547;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1551;
    panda$core$String* result1579;
    panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1548.value) {
    {
        panda$core$Int64 $tmp1549 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1550 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1549, ((panda$core$Int64) { 0 }));
        if ($tmp1550.value) {
        {
            panda$core$Int64 $tmp1552 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1551, ((panda$core$Int64) { 0 }), $tmp1552, ((panda$core$Bit) { false }));
            int64_t $tmp1554 = $tmp1551.min.value;
            panda$core$Int64 i1553 = { $tmp1554 };
            int64_t $tmp1556 = $tmp1551.max.value;
            bool $tmp1557 = $tmp1551.inclusive.value;
            if ($tmp1557) goto $l1564; else goto $l1565;
            $l1564:;
            if ($tmp1554 <= $tmp1556) goto $l1558; else goto $l1560;
            $l1565:;
            if ($tmp1554 < $tmp1556) goto $l1558; else goto $l1560;
            $l1558:;
            {
                panda$core$Object* $tmp1566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1553);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1566)->name) }).value) {
                {
                    panda$core$Object* $tmp1567 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1568 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1567)->argRefs, i1553);
                    return ((panda$core$String*) $tmp1568);
                }
                }
            }
            $l1561:;
            int64_t $tmp1570 = $tmp1556 - i1553.value;
            if ($tmp1557) goto $l1571; else goto $l1572;
            $l1571:;
            if ($tmp1570 >= 1) goto $l1569; else goto $l1560;
            $l1572:;
            if ($tmp1570 > 1) goto $l1569; else goto $l1560;
            $l1569:;
            i1553.value += 1;
            goto $l1558;
            $l1560:;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp1576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1575, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1576, &$s1577);
        return $tmp1578;
    }
    }
    panda$core$Object* $tmp1580 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1579 = ((panda$core$String*) $tmp1580);
    if (((panda$core$Bit) { result1579 == NULL }).value) {
    {
        panda$core$Int64 $tmp1581 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1581;
        panda$core$String* $tmp1583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1582, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1583, &$s1584);
        panda$core$String* $tmp1586 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1585, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1586, &$s1587);
        result1579 = $tmp1588;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1579));
    }
    }
    panda$core$Int64 $tmp1589 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1590 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1589, ((panda$core$Int64) { 0 }));
    if ($tmp1590.value) {
    {
        panda$core$Object* $tmp1591 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1579, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1591)->varSuffix);
        result1579 = $tmp1592;
    }
    }
    return result1579;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1596;
    panda$core$String* $match$874_91602;
    panda$collections$Iterator* p$Iter1679;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1691;
    panda$core$Bit $tmp1594 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1593);
    if ($tmp1594.value) {
    {
        return &$s1595;
    }
    }
    panda$core$MutableString* $tmp1597 = (panda$core$MutableString*) malloc(40);
    $tmp1597->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1597->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1597, &$s1599);
    result1596 = $tmp1597;
    panda$core$String* $tmp1600 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1596, $tmp1600);
    panda$core$MutableString$append$panda$core$String(result1596, &$s1601);
    {
        $match$874_91602 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1604 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1603);
        if ($tmp1604.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1605);
        }
        }
        else {
        panda$core$Bit $tmp1607 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1606);
        if ($tmp1607.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1608);
        }
        }
        else {
        panda$core$Bit $tmp1610 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1609);
        if ($tmp1610.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1611);
        }
        }
        else {
        panda$core$Bit $tmp1613 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1612);
        if ($tmp1613.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1614);
        }
        }
        else {
        panda$core$Bit $tmp1616 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1615);
        if ($tmp1616.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1617);
        }
        }
        else {
        panda$core$Bit $tmp1619 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1618);
        if ($tmp1619.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1620);
        }
        }
        else {
        panda$core$Bit $tmp1622 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1621);
        if ($tmp1622.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1623);
        }
        }
        else {
        panda$core$Bit $tmp1625 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1624);
        if ($tmp1625.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1626);
        }
        }
        else {
        panda$core$Bit $tmp1628 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1627);
        if ($tmp1628.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1629);
        }
        }
        else {
        panda$core$Bit $tmp1631 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1630);
        if ($tmp1631.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1632);
        }
        }
        else {
        panda$core$Bit $tmp1634 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1633);
        if ($tmp1634.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1635);
        }
        }
        else {
        panda$core$Bit $tmp1637 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1636);
        if ($tmp1637.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1638);
        }
        }
        else {
        panda$core$Bit $tmp1640 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1639);
        if ($tmp1640.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1641);
        }
        }
        else {
        panda$core$Bit $tmp1643 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1642);
        if ($tmp1643.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1644);
        }
        }
        else {
        panda$core$Bit $tmp1646 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1645);
        if ($tmp1646.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1647);
        }
        }
        else {
        panda$core$Bit $tmp1649 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1648);
        if ($tmp1649.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1650);
        }
        }
        else {
        panda$core$Bit $tmp1652 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1651);
        if ($tmp1652.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1653);
        }
        }
        else {
        panda$core$Bit $tmp1655 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1654);
        if ($tmp1655.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1656);
        }
        }
        else {
        panda$core$Bit $tmp1658 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1657);
        if ($tmp1658.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1659);
        }
        }
        else {
        panda$core$Bit $tmp1661 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1660);
        if ($tmp1661.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1662);
        }
        }
        else {
        panda$core$Bit $tmp1664 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1663);
        if ($tmp1664.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1665);
        }
        }
        else {
        panda$core$Bit $tmp1667 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1666);
        if ($tmp1667.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1668);
        }
        }
        else {
        panda$core$Bit $tmp1670 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1669);
        if ($tmp1670.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1671);
        }
        }
        else {
        panda$core$Bit $tmp1673 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1672);
        if ($tmp1673.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1674);
        }
        }
        else {
        panda$core$Bit $tmp1676 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$874_91602, &$s1675);
        if ($tmp1676.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1596, &$s1677);
        }
        }
        else {
        {
            panda$core$String* $tmp1678 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1596, $tmp1678);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        ITable* $tmp1680 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1680->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1680 = $tmp1680->next;
        }
        $fn1682 $tmp1681 = $tmp1680->methods[0];
        panda$collections$Iterator* $tmp1683 = $tmp1681(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1679 = $tmp1683;
        $l1684:;
        ITable* $tmp1686 = p$Iter1679->$class->itable;
        while ($tmp1686->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1686 = $tmp1686->next;
        }
        $fn1688 $tmp1687 = $tmp1686->methods[0];
        panda$core$Bit $tmp1689 = $tmp1687(p$Iter1679);
        panda$core$Bit $tmp1690 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1689);
        if (!$tmp1690.value) goto $l1685;
        {
            ITable* $tmp1692 = p$Iter1679->$class->itable;
            while ($tmp1692->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1692 = $tmp1692->next;
            }
            $fn1694 $tmp1693 = $tmp1692->methods[1];
            panda$core$Object* $tmp1695 = $tmp1693(p$Iter1679);
            p1691 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1695);
            panda$core$String* $tmp1697 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1691->type)->name);
            panda$core$String* $tmp1698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1696, $tmp1697);
            panda$core$String* $tmp1700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1698, &$s1699);
            panda$core$MutableString$append$panda$core$String(result1596, $tmp1700);
        }
        goto $l1684;
        $l1685:;
    }
    org$pandalanguage$pandac$Type* $tmp1701 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1702 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1701);
    if ($tmp1702.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1596, &$s1703);
        panda$core$String* $tmp1704 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1596, $tmp1704);
    }
    }
    panda$core$String* $tmp1705 = panda$core$MutableString$finish$R$panda$core$String(result1596);
    return $tmp1705;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1706 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1706.value);
    panda$core$String* $tmp1708 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1707, $tmp1708);
    panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1709, &$s1710);
    panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1711, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1712, &$s1713);
    return $tmp1714;
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
    panda$core$String* leftRef1715;
    panda$core$String* leftField1719;
    panda$core$String* start1728;
    panda$core$String* ifTrue1729;
    panda$core$String* ifFalse1731;
    panda$core$String* rightRef1744;
    panda$core$String* rightField1748;
    panda$core$String* truePred1757;
    panda$core$String* result1763;
    panda$core$String* $tmp1716 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1715 = $tmp1716;
    org$pandalanguage$pandac$Type* $tmp1717 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1718 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1717);
    if ($tmp1718.value) {
    {
        panda$core$String* $tmp1720 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1719 = $tmp1720;
        panda$core$String* $tmp1721 = panda$core$String$convert$R$panda$core$String(leftField1719);
        panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, &$s1722);
        panda$core$String* $tmp1724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1723, leftRef1715);
        panda$core$String* $tmp1726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1724, &$s1725);
        (($fn1727) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1726);
        leftRef1715 = leftField1719;
    }
    }
    start1728 = self->currentBlock;
    panda$core$String* $tmp1730 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1729 = $tmp1730;
    panda$core$String* $tmp1732 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1731 = $tmp1732;
    panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1733, leftRef1715);
    panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1734, &$s1735);
    panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1736, ifTrue1729);
    panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1737, &$s1738);
    panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, ifFalse1731);
    panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1740, &$s1741);
    (($fn1743) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1742);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1729, p_out);
    panda$core$String* $tmp1745 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1744 = $tmp1745;
    org$pandalanguage$pandac$Type* $tmp1746 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1747 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1746);
    if ($tmp1747.value) {
    {
        panda$core$String* $tmp1749 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1748 = $tmp1749;
        panda$core$String* $tmp1750 = panda$core$String$convert$R$panda$core$String(rightField1748);
        panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1750, &$s1751);
        panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1752, rightRef1744);
        panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, &$s1754);
        (($fn1756) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1755);
        rightRef1744 = rightField1748;
    }
    }
    truePred1757 = self->currentBlock;
    panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1758, ifFalse1731);
    panda$core$String* $tmp1761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1759, &$s1760);
    (($fn1762) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1761);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1731, p_out);
    panda$core$String* $tmp1764 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1763 = $tmp1764;
    panda$core$String* $tmp1765 = panda$core$String$convert$R$panda$core$String(result1763);
    panda$core$String* $tmp1767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1765, &$s1766);
    panda$core$String* $tmp1768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1767, start1728);
    panda$core$String* $tmp1770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1768, &$s1769);
    panda$core$String* $tmp1771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1770, rightRef1744);
    panda$core$String* $tmp1773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1771, &$s1772);
    panda$core$String* $tmp1774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1773, truePred1757);
    panda$core$String* $tmp1776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1774, &$s1775);
    (($fn1777) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1776);
    return result1763;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1778;
    panda$core$String* leftField1782;
    panda$core$String* start1791;
    panda$core$String* ifTrue1792;
    panda$core$String* ifFalse1794;
    panda$core$String* rightRef1807;
    panda$core$String* rightField1811;
    panda$core$String* falsePred1820;
    panda$core$String* result1826;
    panda$core$String* $tmp1779 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1778 = $tmp1779;
    org$pandalanguage$pandac$Type* $tmp1780 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1781 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1780);
    if ($tmp1781.value) {
    {
        panda$core$String* $tmp1783 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1782 = $tmp1783;
        panda$core$String* $tmp1784 = panda$core$String$convert$R$panda$core$String(leftField1782);
        panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, &$s1785);
        panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1786, leftRef1778);
        panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1787, &$s1788);
        (($fn1790) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1789);
        leftRef1778 = leftField1782;
    }
    }
    start1791 = self->currentBlock;
    panda$core$String* $tmp1793 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1792 = $tmp1793;
    panda$core$String* $tmp1795 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1794 = $tmp1795;
    panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1796, leftRef1778);
    panda$core$String* $tmp1799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1797, &$s1798);
    panda$core$String* $tmp1800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1799, ifTrue1792);
    panda$core$String* $tmp1802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1800, &$s1801);
    panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1802, ifFalse1794);
    panda$core$String* $tmp1805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1803, &$s1804);
    (($fn1806) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1805);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1794, p_out);
    panda$core$String* $tmp1808 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1807 = $tmp1808;
    org$pandalanguage$pandac$Type* $tmp1809 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1810 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1809);
    if ($tmp1810.value) {
    {
        panda$core$String* $tmp1812 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1811 = $tmp1812;
        panda$core$String* $tmp1813 = panda$core$String$convert$R$panda$core$String(rightField1811);
        panda$core$String* $tmp1815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1813, &$s1814);
        panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1815, rightRef1807);
        panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1816, &$s1817);
        (($fn1819) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1818);
        rightRef1807 = rightField1811;
    }
    }
    falsePred1820 = self->currentBlock;
    panda$core$String* $tmp1822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1821, ifTrue1792);
    panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1823);
    (($fn1825) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1824);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1792, p_out);
    panda$core$String* $tmp1827 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1826 = $tmp1827;
    panda$core$String* $tmp1828 = panda$core$String$convert$R$panda$core$String(result1826);
    panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1828, &$s1829);
    panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, start1791);
    panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1831, &$s1832);
    panda$core$String* $tmp1834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1833, rightRef1807);
    panda$core$String* $tmp1836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1834, &$s1835);
    panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1836, falsePred1820);
    panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1837, &$s1838);
    (($fn1840) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1839);
    return result1826;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* llvmOp1841;
    panda$core$String* result1884;
    switch (p_cl.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1841 = &$s1842;
                }
                break;
                case 52:
                {
                    llvmOp1841 = &$s1843;
                }
                break;
                case 53:
                {
                    llvmOp1841 = &$s1844;
                }
                break;
                case 55:
                {
                    llvmOp1841 = &$s1845;
                }
                break;
                case 56:
                {
                    llvmOp1841 = &$s1846;
                }
                break;
                case 72:
                {
                    llvmOp1841 = &$s1847;
                }
                break;
                case 1:
                {
                    llvmOp1841 = &$s1848;
                }
                break;
                case 67:
                {
                    llvmOp1841 = &$s1849;
                }
                break;
                case 69:
                {
                    llvmOp1841 = &$s1850;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1841 = &$s1851;
                }
                break;
                case 58:
                {
                    llvmOp1841 = &$s1852;
                }
                break;
                case 59:
                {
                    llvmOp1841 = &$s1853;
                }
                break;
                case 63:
                {
                    llvmOp1841 = &$s1854;
                }
                break;
                case 62:
                {
                    llvmOp1841 = &$s1855;
                }
                break;
                case 65:
                {
                    llvmOp1841 = &$s1856;
                }
                break;
                case 64:
                {
                    llvmOp1841 = &$s1857;
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
                    llvmOp1841 = &$s1858;
                }
                break;
                case 52:
                {
                    llvmOp1841 = &$s1859;
                }
                break;
                case 53:
                {
                    llvmOp1841 = &$s1860;
                }
                break;
                case 55:
                {
                    llvmOp1841 = &$s1861;
                }
                break;
                case 56:
                {
                    llvmOp1841 = &$s1862;
                }
                break;
                case 72:
                {
                    llvmOp1841 = &$s1863;
                }
                break;
                case 1:
                {
                    llvmOp1841 = &$s1864;
                }
                break;
                case 67:
                {
                    llvmOp1841 = &$s1865;
                }
                break;
                case 69:
                {
                    llvmOp1841 = &$s1866;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1841 = &$s1867;
                }
                break;
                case 58:
                {
                    llvmOp1841 = &$s1868;
                }
                break;
                case 59:
                {
                    llvmOp1841 = &$s1869;
                }
                break;
                case 63:
                {
                    llvmOp1841 = &$s1870;
                }
                break;
                case 62:
                {
                    llvmOp1841 = &$s1871;
                }
                break;
                case 65:
                {
                    llvmOp1841 = &$s1872;
                }
                break;
                case 64:
                {
                    llvmOp1841 = &$s1873;
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
                    llvmOp1841 = &$s1874;
                }
                break;
                case 52:
                {
                    llvmOp1841 = &$s1875;
                }
                break;
                case 53:
                {
                    llvmOp1841 = &$s1876;
                }
                break;
                case 55:
                {
                    llvmOp1841 = &$s1877;
                }
                break;
                case 58:
                {
                    llvmOp1841 = &$s1878;
                }
                break;
                case 59:
                {
                    llvmOp1841 = &$s1879;
                }
                break;
                case 63:
                {
                    llvmOp1841 = &$s1880;
                }
                break;
                case 62:
                {
                    llvmOp1841 = &$s1881;
                }
                break;
                case 65:
                {
                    llvmOp1841 = &$s1882;
                }
                break;
                case 64:
                {
                    llvmOp1841 = &$s1883;
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
    panda$core$String* $tmp1885 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1884 = $tmp1885;
    panda$core$String* $tmp1886 = panda$core$String$convert$R$panda$core$String(result1884);
    panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1886, &$s1887);
    panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1888, llvmOp1841);
    panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1889, &$s1890);
    panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1891, p_leftRef);
    panda$core$String* $tmp1894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1892, &$s1893);
    panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1894, p_rightRef);
    panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1895, &$s1896);
    (($fn1898) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1897);
    return result1884;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1899;
    panda$core$String* rightRef1901;
    panda$core$String* raw1903;
    panda$core$String* result1915;
    panda$core$String* $tmp1900 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1899 = $tmp1900;
    panda$core$String* $tmp1902 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1901 = $tmp1902;
    panda$core$String* $tmp1904 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1903 = $tmp1904;
    panda$core$String* $tmp1905 = panda$core$String$convert$R$panda$core$String(raw1903);
    panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1905, &$s1906);
    panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1907, leftRef1899);
    panda$core$String* $tmp1910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1908, &$s1909);
    panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1910, rightRef1901);
    panda$core$String* $tmp1913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1911, &$s1912);
    (($fn1914) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1913);
    panda$core$String* $tmp1916 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1915 = $tmp1916;
    panda$core$String* $tmp1917 = panda$core$String$convert$R$panda$core$String(result1915);
    panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, &$s1918);
    panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1919, raw1903);
    panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1920, &$s1921);
    (($fn1923) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1922);
    return result1915;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1924;
    panda$core$String* rightRef1926;
    panda$core$String* raw1928;
    panda$core$String* result1940;
    panda$core$String* $tmp1925 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1924 = $tmp1925;
    panda$core$String* $tmp1927 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1926 = $tmp1927;
    panda$core$String* $tmp1929 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1928 = $tmp1929;
    panda$core$String* $tmp1930 = panda$core$String$convert$R$panda$core$String(raw1928);
    panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1930, &$s1931);
    panda$core$String* $tmp1933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1932, leftRef1924);
    panda$core$String* $tmp1935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1933, &$s1934);
    panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1935, rightRef1926);
    panda$core$String* $tmp1938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1936, &$s1937);
    (($fn1939) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1938);
    panda$core$String* $tmp1941 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1940 = $tmp1941;
    panda$core$String* $tmp1942 = panda$core$String$convert$R$panda$core$String(result1940);
    panda$core$String* $tmp1944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1942, &$s1943);
    panda$core$String* $tmp1945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1944, raw1928);
    panda$core$String* $tmp1947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1945, &$s1946);
    (($fn1948) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1947);
    return result1940;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1954;
    panda$core$String* rightRef1956;
    panda$core$Bit $tmp1949 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1949.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1950 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1950;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1951 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1951;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1952 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1952;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1953 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1953;
        }
        break;
        default:
        {
            panda$core$String* $tmp1955 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1954 = $tmp1955;
            panda$core$String* $tmp1957 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1956 = $tmp1957;
            panda$core$Int64 $tmp1958 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1959 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1958, leftRef1954, p_op, rightRef1956, p_out);
            return $tmp1959;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1960.value);
    panda$core$Int64 $tmp1961 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1961, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1962.value);
    panda$core$Object* $tmp1963 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1964 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1965 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1963), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1964), p_out);
    return $tmp1965;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    return &$s1966;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc1967;
    panda$core$Int64 index1969;
    panda$collections$ListView* vtable1970;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1972;
    panda$core$String* classPtrPtr2001;
    panda$core$String* classPtr2016;
    panda$core$String* cast2025;
    panda$core$String* ptr2037;
    panda$core$String* load2060;
    panda$core$String* result2069;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1968 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc1967 = $tmp1968;
    index1969 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1971 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1970 = $tmp1971;
    ITable* $tmp1973 = ((panda$collections$CollectionView*) vtable1970)->$class->itable;
    while ($tmp1973->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1973 = $tmp1973->next;
    }
    $fn1975 $tmp1974 = $tmp1973->methods[0];
    panda$core$Int64 $tmp1976 = $tmp1974(((panda$collections$CollectionView*) vtable1970));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1972, ((panda$core$Int64) { 0 }), $tmp1976, ((panda$core$Bit) { false }));
    int64_t $tmp1978 = $tmp1972.min.value;
    panda$core$Int64 i1977 = { $tmp1978 };
    int64_t $tmp1980 = $tmp1972.max.value;
    bool $tmp1981 = $tmp1972.inclusive.value;
    if ($tmp1981) goto $l1988; else goto $l1989;
    $l1988:;
    if ($tmp1978 <= $tmp1980) goto $l1982; else goto $l1984;
    $l1989:;
    if ($tmp1978 < $tmp1980) goto $l1982; else goto $l1984;
    $l1982:;
    {
        ITable* $tmp1990 = vtable1970->$class->itable;
        while ($tmp1990->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1990 = $tmp1990->next;
        }
        $fn1992 $tmp1991 = $tmp1990->methods[0];
        panda$core$Object* $tmp1993 = $tmp1991(vtable1970, i1977);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1993)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1969 = i1977;
            goto $l1984;
        }
        }
    }
    $l1985:;
    int64_t $tmp1995 = $tmp1980 - i1977.value;
    if ($tmp1981) goto $l1996; else goto $l1997;
    $l1996:;
    if ($tmp1995 >= 1) goto $l1994; else goto $l1984;
    $l1997:;
    if ($tmp1995 > 1) goto $l1994; else goto $l1984;
    $l1994:;
    i1977.value += 1;
    goto $l1982;
    $l1984:;
    panda$core$Bit $tmp2000 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1969, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2000.value);
    panda$core$String* $tmp2002 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2001 = $tmp2002;
    panda$core$String* $tmp2003 = panda$core$String$convert$R$panda$core$String(classPtrPtr2001);
    panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2003, &$s2004);
    org$pandalanguage$pandac$Type* $tmp2006 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2007 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2006);
    panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2005, $tmp2007);
    panda$core$String* $tmp2010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2008, &$s2009);
    panda$core$String* $tmp2011 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2011, &$s2012);
    panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2010, $tmp2013);
    (($fn2015) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2014);
    panda$core$String* $tmp2017 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2016 = $tmp2017;
    panda$core$String* $tmp2018 = panda$core$String$convert$R$panda$core$String(classPtr2016);
    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2018, &$s2019);
    panda$core$String* $tmp2021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, classPtrPtr2001);
    panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2021, &$s2022);
    (($fn2024) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2023);
    panda$core$String* $tmp2026 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2025 = $tmp2026;
    panda$core$String* $tmp2027 = panda$core$String$convert$R$panda$core$String(cast2025);
    panda$core$String* $tmp2029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2027, &$s2028);
    panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2029, classPtr2016);
    panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2030, &$s2031);
    panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2032, cc1967->type);
    panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, &$s2034);
    (($fn2036) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2035);
    panda$core$String* $tmp2038 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2037 = $tmp2038;
    panda$core$String* $tmp2039 = panda$core$String$convert$R$panda$core$String(ptr2037);
    panda$core$String* $tmp2041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2039, &$s2040);
    panda$core$String* $tmp2042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2041, cc1967->type);
    panda$core$String* $tmp2044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2042, &$s2043);
    panda$core$String* $tmp2045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2044, cc1967->type);
    panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2045, &$s2046);
    panda$core$String* $tmp2048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, cast2025);
    panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2048, &$s2049);
    panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2051, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, &$s2053);
    panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2054, ((panda$core$Object*) wrap_panda$core$Int64(index1969)));
    panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2055, &$s2056);
    panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2050, $tmp2057);
    (($fn2059) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2058);
    panda$core$String* $tmp2061 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2060 = $tmp2061;
    panda$core$String* $tmp2062 = panda$core$String$convert$R$panda$core$String(load2060);
    panda$core$String* $tmp2064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2062, &$s2063);
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2064, ptr2037);
    panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
    (($fn2068) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2067);
    panda$core$String* $tmp2070 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2069 = $tmp2070;
    panda$core$String* $tmp2071 = panda$core$String$convert$R$panda$core$String(result2069);
    panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2071, &$s2072);
    panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, load2060);
    panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2074, &$s2075);
    org$pandalanguage$pandac$Type* $tmp2077 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2078 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2077);
    panda$core$String* $tmp2079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, $tmp2078);
    (($fn2080) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2079);
    return result2069;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* methodType2081;
    panda$core$String* entry2084;
    panda$core$String* rawClassPointer2091;
    panda$core$String* classPointer2113;
    panda$core$String* classType2115;
    panda$core$String* loadedClass2128;
    panda$core$String* itableFirst2143;
    panda$core$String* next2166;
    panda$core$String* leavingEntryLabel2173;
    panda$core$String* itableNext2175;
    panda$core$String* itablePtrPtr2180;
    panda$core$String* fail2182;
    panda$core$String* itablePtr2202;
    panda$core$String* itableClassPtr2211;
    panda$core$String* itableClass2225;
    panda$core$String* test2240;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2242;
    panda$core$String* success2264;
    panda$core$Int64 index2294;
    panda$collections$ListView* vtable2295;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2297;
    panda$core$String* methodPtrPtr2334;
    panda$core$String* cast2351;
    panda$core$String* methodPtr2363;
    org$pandalanguage$pandac$Type* $tmp2082 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2083 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2082);
    methodType2081 = $tmp2083;
    panda$core$String* $tmp2085 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2084 = $tmp2085;
    panda$core$String* $tmp2087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2086, entry2084);
    panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2087, &$s2088);
    (($fn2090) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2089);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, entry2084, p_out);
    panda$core$String* $tmp2092 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawClassPointer2091 = $tmp2092;
    panda$core$String* $tmp2093 = panda$core$String$convert$R$panda$core$String(rawClassPointer2091);
    panda$core$String* $tmp2095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2093, &$s2094);
    org$pandalanguage$pandac$Type* $tmp2096 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2097 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2096);
    panda$core$String* $tmp2098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2095, $tmp2097);
    panda$core$String* $tmp2100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2098, &$s2099);
    panda$core$String* $tmp2101 = panda$core$String$convert$R$panda$core$String(p_target);
    panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2101, &$s2102);
    panda$core$String* $tmp2105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2103, &$s2104);
    panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2105, &$s2106);
    panda$core$String* $tmp2108 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2107, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2108, &$s2109);
    panda$core$String* $tmp2111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2100, $tmp2110);
    (($fn2112) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2111);
    panda$core$String* $tmp2114 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2113 = $tmp2114;
    org$pandalanguage$pandac$Type* $tmp2116 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2117 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2116);
    classType2115 = $tmp2117;
    panda$core$String* $tmp2118 = panda$core$String$convert$R$panda$core$String(classPointer2113);
    panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2118, &$s2119);
    panda$core$String* $tmp2121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2120, rawClassPointer2091);
    panda$core$String* $tmp2123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, &$s2122);
    panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2123, classType2115);
    panda$core$String* $tmp2126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2124, &$s2125);
    (($fn2127) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2126);
    panda$core$String* $tmp2129 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2128 = $tmp2129;
    panda$core$String* $tmp2130 = panda$core$String$convert$R$panda$core$String(loadedClass2128);
    panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2131);
    panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2132, classType2115);
    panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2134);
    panda$core$String* $tmp2136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2135, classType2115);
    panda$core$String* $tmp2138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2136, &$s2137);
    panda$core$String* $tmp2139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2138, classPointer2113);
    panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2139, &$s2140);
    (($fn2142) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2141);
    panda$core$String* $tmp2144 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2143 = $tmp2144;
    panda$core$String* $tmp2145 = panda$core$String$convert$R$panda$core$String(itableFirst2143);
    panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2145, &$s2146);
    panda$core$String* $tmp2148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2147, classType2115);
    panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2148, &$s2149);
    panda$core$String* $tmp2151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, classType2115);
    panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2151, &$s2152);
    panda$core$String* $tmp2154 = panda$core$String$convert$R$panda$core$String(loadedClass2128);
    panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2154, &$s2155);
    panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2156, &$s2157);
    panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2158, &$s2159);
    panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2160, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, &$s2162);
    panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, $tmp2163);
    (($fn2165) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2164);
    panda$core$String* $tmp2167 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2166 = $tmp2167;
    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2168, next2166);
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2170);
    (($fn2172) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2171);
    leavingEntryLabel2173 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, next2166, p_out);
    panda$core$Int64 $tmp2174 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2174;
    panda$core$String* $tmp2177 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2176, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2177, &$s2178);
    itableNext2175 = $tmp2179;
    panda$core$String* $tmp2181 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2180 = $tmp2181;
    panda$core$String* $tmp2183 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2182 = $tmp2183;
    panda$core$String* $tmp2184 = panda$core$String$convert$R$panda$core$String(itablePtrPtr2180);
    panda$core$String* $tmp2186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2184, &$s2185);
    panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2186, itableFirst2143);
    panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, &$s2188);
    panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, leavingEntryLabel2173);
    panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2191);
    panda$core$String* $tmp2194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2193, itableNext2175);
    panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2194, &$s2195);
    panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2196, fail2182);
    panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2197, &$s2198);
    panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, $tmp2199);
    (($fn2201) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2200);
    panda$core$String* $tmp2203 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2202 = $tmp2203;
    panda$core$String* $tmp2204 = panda$core$String$convert$R$panda$core$String(itablePtr2202);
    panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2204, &$s2205);
    panda$core$String* $tmp2207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2206, itablePtrPtr2180);
    panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2207, &$s2208);
    (($fn2210) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2209);
    panda$core$String* $tmp2212 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2211 = $tmp2212;
    panda$core$String* $tmp2213 = panda$core$String$convert$R$panda$core$String(itableClassPtr2211);
    panda$core$String* $tmp2215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2213, &$s2214);
    panda$core$String* $tmp2216 = panda$core$String$convert$R$panda$core$String(itablePtr2202);
    panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, &$s2217);
    panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2218, &$s2219);
    panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2220, &$s2221);
    panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2215, $tmp2222);
    (($fn2224) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2223);
    panda$core$String* $tmp2226 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2225 = $tmp2226;
    panda$core$String* $tmp2227 = panda$core$String$convert$R$panda$core$String(itableClass2225);
    panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2227, &$s2228);
    panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2229, classType2115);
    panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2230, &$s2231);
    panda$core$String* $tmp2233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2232, classType2115);
    panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2233, &$s2234);
    panda$core$String* $tmp2236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, itableClassPtr2211);
    panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2236, &$s2237);
    (($fn2239) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2238);
    panda$core$String* $tmp2241 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2240 = $tmp2241;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2243 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2242 = $tmp2243;
    panda$core$String* $tmp2244 = panda$core$String$convert$R$panda$core$String(test2240);
    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2244, &$s2245);
    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, classType2115);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, &$s2248);
    panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, intfCC2242->type);
    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2250, &$s2251);
    panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, intfCC2242->name);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2253, &$s2254);
    panda$core$String* $tmp2256 = panda$core$String$convert$R$panda$core$String(classType2115);
    panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2256, &$s2257);
    panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2258, itableClass2225);
    panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2259, &$s2260);
    panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2255, $tmp2261);
    (($fn2263) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2262);
    panda$core$String* $tmp2265 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2264 = $tmp2265;
    panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2266, test2240);
    panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, &$s2268);
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, success2264);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, &$s2271);
    panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, fail2182);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2273, &$s2274);
    (($fn2276) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2275);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, fail2182, p_out);
    panda$core$String* $tmp2277 = panda$core$String$convert$R$panda$core$String(itableNext2175);
    panda$core$String* $tmp2279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2277, &$s2278);
    panda$core$String* $tmp2280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2279, itablePtr2202);
    panda$core$String* $tmp2282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2280, &$s2281);
    panda$core$String* $tmp2284 = panda$core$String$convert$R$panda$core$String(&$s2283);
    panda$core$String* $tmp2286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2284, &$s2285);
    panda$core$String* $tmp2287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2282, $tmp2286);
    (($fn2288) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2287);
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2289, next2166);
    panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, &$s2291);
    (($fn2293) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2292);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, success2264, p_out);
    index2294 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2296 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2295 = $tmp2296;
    ITable* $tmp2298 = ((panda$collections$CollectionView*) vtable2295)->$class->itable;
    while ($tmp2298->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2298 = $tmp2298->next;
    }
    $fn2300 $tmp2299 = $tmp2298->methods[0];
    panda$core$Int64 $tmp2301 = $tmp2299(((panda$collections$CollectionView*) vtable2295));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2297, ((panda$core$Int64) { 0 }), $tmp2301, ((panda$core$Bit) { false }));
    int64_t $tmp2303 = $tmp2297.min.value;
    panda$core$Int64 i2302 = { $tmp2303 };
    int64_t $tmp2305 = $tmp2297.max.value;
    bool $tmp2306 = $tmp2297.inclusive.value;
    if ($tmp2306) goto $l2313; else goto $l2314;
    $l2313:;
    if ($tmp2303 <= $tmp2305) goto $l2307; else goto $l2309;
    $l2314:;
    if ($tmp2303 < $tmp2305) goto $l2307; else goto $l2309;
    $l2307:;
    {
        ITable* $tmp2315 = vtable2295->$class->itable;
        while ($tmp2315->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2315 = $tmp2315->next;
        }
        $fn2317 $tmp2316 = $tmp2315->methods[0];
        panda$core$Object* $tmp2318 = $tmp2316(vtable2295, i2302);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2318)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2294 = i2302;
            goto $l2309;
        }
        }
    }
    $l2310:;
    int64_t $tmp2320 = $tmp2305 - i2302.value;
    if ($tmp2306) goto $l2321; else goto $l2322;
    $l2321:;
    if ($tmp2320 >= 1) goto $l2319; else goto $l2309;
    $l2322:;
    if ($tmp2320 > 1) goto $l2319; else goto $l2309;
    $l2319:;
    i2302.value += 1;
    goto $l2307;
    $l2309:;
    org$pandalanguage$pandac$Type* $tmp2325 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2326 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2325);
    panda$collections$ListView* $tmp2327 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2326);
    ITable* $tmp2328 = ((panda$collections$CollectionView*) $tmp2327)->$class->itable;
    while ($tmp2328->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2328 = $tmp2328->next;
    }
    $fn2330 $tmp2329 = $tmp2328->methods[0];
    panda$core$Int64 $tmp2331 = $tmp2329(((panda$collections$CollectionView*) $tmp2327));
    panda$core$Int64 $tmp2332 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2294, $tmp2331);
    index2294 = $tmp2332;
    panda$core$Bit $tmp2333 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2294, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2333.value);
    panda$core$String* $tmp2335 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2334 = $tmp2335;
    panda$core$String* $tmp2336 = panda$core$String$convert$R$panda$core$String(methodPtrPtr2334);
    panda$core$String* $tmp2338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2336, &$s2337);
    panda$core$String* $tmp2339 = panda$core$String$convert$R$panda$core$String(itablePtr2202);
    panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2339, &$s2340);
    panda$core$String* $tmp2343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2341, &$s2342);
    panda$core$String* $tmp2345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2343, &$s2344);
    panda$core$String* $tmp2346 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2345, ((panda$core$Object*) wrap_panda$core$Int64(index2294)));
    panda$core$String* $tmp2348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2346, &$s2347);
    panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2338, $tmp2348);
    (($fn2350) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2349);
    panda$core$String* $tmp2352 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2351 = $tmp2352;
    panda$core$String* $tmp2353 = panda$core$String$convert$R$panda$core$String(cast2351);
    panda$core$String* $tmp2355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2353, &$s2354);
    panda$core$String* $tmp2356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2355, methodPtrPtr2334);
    panda$core$String* $tmp2358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2356, &$s2357);
    panda$core$String* $tmp2359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2358, methodType2081);
    panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2359, &$s2360);
    (($fn2362) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2361);
    panda$core$String* $tmp2364 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2363 = $tmp2364;
    panda$core$String* $tmp2365 = panda$core$String$convert$R$panda$core$String(methodPtr2363);
    panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2365, &$s2366);
    panda$core$String* $tmp2368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2367, methodType2081);
    panda$core$String* $tmp2370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2368, &$s2369);
    panda$core$String* $tmp2371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2370, methodType2081);
    panda$core$String* $tmp2373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2371, &$s2372);
    panda$core$String* $tmp2374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2373, cast2351);
    panda$core$String* $tmp2376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2374, &$s2375);
    (($fn2377) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2376);
    return methodPtr2363;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2379 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2378 = $tmp2379.value;
    if (!$tmp2378) goto $l2380;
    panda$core$Bit $tmp2381 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2378 = $tmp2381.value;
    $l2380:;
    panda$core$Bit $tmp2382 = { $tmp2378 };
    if ($tmp2382.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2383.value) {
        {
            panda$core$String* $tmp2384 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2384;
        }
        }
        else {
        {
            panda$core$String* $tmp2385 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2385;
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
        panda$core$String* $tmp2386 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2386;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2387;
    panda$core$String* $match$1219_92388;
    panda$core$String* countStruct2393;
    panda$core$String* count2396;
    panda$core$String* size2405;
    panda$core$Int64 elementSize2407;
    panda$core$String* malloc2426;
    panda$core$String* result2439;
    panda$core$String* ptr2457;
    panda$core$String* baseType2460;
    panda$core$String* ptrType2463;
    panda$core$String* cast2466;
    panda$core$String* load2478;
    panda$core$String* ptr2497;
    panda$core$String* baseType2500;
    panda$core$String* ptrType2503;
    panda$core$String* cast2506;
    panda$core$String* indexStruct2518;
    panda$core$String* index2521;
    panda$core$String* offsetPtr2530;
    panda$core$String* load2550;
    panda$core$String* ptr2569;
    panda$core$String* ptrCast2572;
    panda$core$String* countStruct2581;
    panda$core$String* count2584;
    panda$core$String* size2593;
    panda$core$String* realloc2610;
    panda$core$String* result2627;
    panda$core$String* ptr2645;
    panda$core$String* baseType2648;
    panda$core$String* offsetStruct2652;
    panda$core$String* offset2655;
    panda$core$String* result2664;
    m2387 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$1219_92388 = ((org$pandalanguage$pandac$Symbol*) m2387->value)->name;
        panda$core$Bit $tmp2390 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1219_92388, &$s2389);
        if ($tmp2390.value) {
        {
            panda$core$Int64 $tmp2391 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2391, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2392.value);
            panda$core$Object* $tmp2394 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2395 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2394), p_out);
            countStruct2393 = $tmp2395;
            panda$core$String* $tmp2397 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2396 = $tmp2397;
            panda$core$String* $tmp2398 = panda$core$String$convert$R$panda$core$String(count2396);
            panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2398, &$s2399);
            panda$core$String* $tmp2401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2400, countStruct2393);
            panda$core$String* $tmp2403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2401, &$s2402);
            (($fn2404) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2403);
            panda$core$String* $tmp2406 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2405 = $tmp2406;
            org$pandalanguage$pandac$Type* $tmp2408 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2387);
            panda$core$Object* $tmp2409 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2408->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2410 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2409));
            elementSize2407 = $tmp2410;
            panda$core$Bit $tmp2411 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2407, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2411.value);
            panda$core$String* $tmp2412 = panda$core$String$convert$R$panda$core$String(size2405);
            panda$core$String* $tmp2414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2412, &$s2413);
            panda$core$String* $tmp2416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2414, &$s2415);
            panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2416, &$s2417);
            panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2418, count2396);
            panda$core$String* $tmp2421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2419, &$s2420);
            panda$core$String* $tmp2422 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2421, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2407)));
            panda$core$String* $tmp2424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2422, &$s2423);
            (($fn2425) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2424);
            panda$core$String* $tmp2427 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2426 = $tmp2427;
            panda$core$String* $tmp2428 = panda$core$String$convert$R$panda$core$String(malloc2426);
            panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, &$s2429);
            panda$core$String* $tmp2432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2430, &$s2431);
            panda$core$String* $tmp2434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2432, &$s2433);
            panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2434, size2405);
            panda$core$String* $tmp2437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2435, &$s2436);
            (($fn2438) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2437);
            panda$core$String* $tmp2440 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2439 = $tmp2440;
            panda$core$String* $tmp2441 = panda$core$String$convert$R$panda$core$String(result2439);
            panda$core$String* $tmp2443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2441, &$s2442);
            panda$core$String* $tmp2444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2443, malloc2426);
            panda$core$String* $tmp2446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2444, &$s2445);
            org$pandalanguage$pandac$Type* $tmp2447 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2387);
            panda$core$String* $tmp2448 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2447);
            panda$core$String* $tmp2449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2446, $tmp2448);
            panda$core$String* $tmp2451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2449, &$s2450);
            (($fn2452) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2451);
            return result2439;
        }
        }
        else {
        panda$core$Bit $tmp2454 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1219_92388, &$s2453);
        if ($tmp2454.value) {
        {
            panda$core$Int64 $tmp2455 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2455, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2456.value);
            panda$core$Object* $tmp2458 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2459 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2458), p_out);
            ptr2457 = $tmp2459;
            org$pandalanguage$pandac$Type* $tmp2461 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2387);
            panda$core$String* $tmp2462 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2461);
            baseType2460 = $tmp2462;
            panda$core$String* $tmp2465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2460, &$s2464);
            ptrType2463 = $tmp2465;
            panda$core$String* $tmp2467 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2466 = $tmp2467;
            panda$core$String* $tmp2468 = panda$core$String$convert$R$panda$core$String(cast2466);
            panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2468, &$s2469);
            panda$core$String* $tmp2471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, ptr2457);
            panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2471, &$s2472);
            panda$core$String* $tmp2474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, ptrType2463);
            panda$core$String* $tmp2476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2474, &$s2475);
            (($fn2477) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2476);
            panda$core$String* $tmp2479 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2478 = $tmp2479;
            panda$core$String* $tmp2480 = panda$core$String$convert$R$panda$core$String(load2478);
            panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2480, &$s2481);
            panda$core$String* $tmp2483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2482, baseType2460);
            panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2483, &$s2484);
            panda$core$String* $tmp2486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2485, ptrType2463);
            panda$core$String* $tmp2488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2486, &$s2487);
            panda$core$String* $tmp2489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2488, cast2466);
            panda$core$String* $tmp2491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2489, &$s2490);
            (($fn2492) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2491);
            return load2478;
        }
        }
        else {
        panda$core$Bit $tmp2494 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1219_92388, &$s2493);
        if ($tmp2494.value) {
        {
            panda$core$Int64 $tmp2495 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2495, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2496.value);
            panda$core$Object* $tmp2498 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2499 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2498), p_out);
            ptr2497 = $tmp2499;
            org$pandalanguage$pandac$Type* $tmp2501 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2387);
            panda$core$String* $tmp2502 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2501);
            baseType2500 = $tmp2502;
            panda$core$String* $tmp2505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2500, &$s2504);
            ptrType2503 = $tmp2505;
            panda$core$String* $tmp2507 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2506 = $tmp2507;
            panda$core$String* $tmp2508 = panda$core$String$convert$R$panda$core$String(cast2506);
            panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2508, &$s2509);
            panda$core$String* $tmp2511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2510, ptr2497);
            panda$core$String* $tmp2513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2511, &$s2512);
            panda$core$String* $tmp2514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2513, ptrType2503);
            panda$core$String* $tmp2516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2514, &$s2515);
            (($fn2517) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2516);
            panda$core$Object* $tmp2519 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2520 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2519), p_out);
            indexStruct2518 = $tmp2520;
            panda$core$String* $tmp2522 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2521 = $tmp2522;
            panda$core$String* $tmp2523 = panda$core$String$convert$R$panda$core$String(index2521);
            panda$core$String* $tmp2525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2523, &$s2524);
            panda$core$String* $tmp2526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2525, indexStruct2518);
            panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2526, &$s2527);
            (($fn2529) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2528);
            panda$core$String* $tmp2531 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2530 = $tmp2531;
            panda$core$String* $tmp2532 = panda$core$String$convert$R$panda$core$String(offsetPtr2530);
            panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2532, &$s2533);
            panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, baseType2500);
            panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2535, &$s2536);
            panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, ptrType2503);
            panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2538, &$s2539);
            panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2540, cast2506);
            panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2542);
            panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2544, index2521);
            panda$core$String* $tmp2547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2545, &$s2546);
            panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2543, $tmp2547);
            (($fn2549) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2548);
            panda$core$String* $tmp2551 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2550 = $tmp2551;
            panda$core$String* $tmp2552 = panda$core$String$convert$R$panda$core$String(load2550);
            panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2552, &$s2553);
            panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, baseType2500);
            panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, &$s2556);
            panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, ptrType2503);
            panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2558, &$s2559);
            panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, offsetPtr2530);
            panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2561, &$s2562);
            (($fn2564) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2563);
            return load2550;
        }
        }
        else {
        panda$core$Bit $tmp2566 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1219_92388, &$s2565);
        if ($tmp2566.value) {
        {
            panda$core$Int64 $tmp2567 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2567, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2568.value);
            panda$core$Object* $tmp2570 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2571 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2570), p_out);
            ptr2569 = $tmp2571;
            panda$core$String* $tmp2573 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2572 = $tmp2573;
            panda$core$String* $tmp2574 = panda$core$String$convert$R$panda$core$String(ptrCast2572);
            panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2574, &$s2575);
            panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2576, ptr2569);
            panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2577, &$s2578);
            (($fn2580) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2579);
            panda$core$Object* $tmp2582 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2583 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2582), p_out);
            countStruct2581 = $tmp2583;
            panda$core$String* $tmp2585 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2584 = $tmp2585;
            panda$core$String* $tmp2586 = panda$core$String$convert$R$panda$core$String(count2584);
            panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, &$s2587);
            panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, countStruct2581);
            panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2589, &$s2590);
            (($fn2592) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2591);
            panda$core$String* $tmp2594 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2593 = $tmp2594;
            panda$core$String* $tmp2595 = panda$core$String$convert$R$panda$core$String(size2593);
            panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2595, &$s2596);
            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2598);
            panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, &$s2600);
            panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, count2584);
            panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2602, &$s2603);
            org$pandalanguage$pandac$Type* $tmp2605 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2387);
            panda$core$Object* $tmp2606 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2605->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2607 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2606));
            panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2604, ((panda$core$Object*) wrap_panda$core$Int64($tmp2607)));
            (($fn2609) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2608);
            panda$core$String* $tmp2611 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2610 = $tmp2611;
            panda$core$String* $tmp2612 = panda$core$String$convert$R$panda$core$String(realloc2610);
            panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2612, &$s2613);
            panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2614, ptrCast2572);
            panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2615, &$s2616);
            panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2617, &$s2618);
            panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, &$s2620);
            panda$core$String* $tmp2622 = panda$core$String$convert$R$panda$core$String(size2593);
            panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, &$s2623);
            panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2621, $tmp2624);
            (($fn2626) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2625);
            panda$core$String* $tmp2628 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2627 = $tmp2628;
            panda$core$String* $tmp2629 = panda$core$String$convert$R$panda$core$String(result2627);
            panda$core$String* $tmp2631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2629, &$s2630);
            panda$core$String* $tmp2632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2631, realloc2610);
            panda$core$String* $tmp2634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2632, &$s2633);
            org$pandalanguage$pandac$Type* $tmp2635 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2387);
            panda$core$String* $tmp2636 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2635);
            panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2634, $tmp2636);
            panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, &$s2638);
            (($fn2640) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2639);
            return result2627;
        }
        }
        else {
        panda$core$Bit $tmp2642 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1219_92388, &$s2641);
        if ($tmp2642.value) {
        {
            panda$core$Int64 $tmp2643 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2643, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2644.value);
            panda$core$Object* $tmp2646 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2647 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2646), p_out);
            ptr2645 = $tmp2647;
            panda$core$Object* $tmp2649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2650 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2649)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2651 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2650));
            baseType2648 = $tmp2651;
            panda$core$Object* $tmp2653 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2654 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2653), p_out);
            offsetStruct2652 = $tmp2654;
            panda$core$String* $tmp2656 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2655 = $tmp2656;
            panda$core$String* $tmp2657 = panda$core$String$convert$R$panda$core$String(offset2655);
            panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, &$s2658);
            panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2659, offsetStruct2652);
            panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, &$s2661);
            (($fn2663) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2662);
            panda$core$String* $tmp2665 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2664 = $tmp2665;
            panda$core$String* $tmp2666 = panda$core$String$convert$R$panda$core$String(result2664);
            panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, &$s2667);
            panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2668, baseType2648);
            panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2669, &$s2670);
            panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, ptr2645);
            panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2672, &$s2673);
            panda$core$String* $tmp2675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2674, offset2655);
            panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2675, &$s2676);
            (($fn2678) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2677);
            return result2664;
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
    org$pandalanguage$pandac$MethodDecl* m2679;
    panda$core$String* selfRef2680;
    panda$core$Int64 argStart2682;
    panda$collections$Array* args2686;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2689;
    panda$core$String* end2712;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2721;
    org$pandalanguage$pandac$MethodDecl* old2728;
    panda$core$String* phi2741;
    panda$core$String* separator2751;
    panda$collections$Iterator* ret$Iter2753;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2765;
    m2679 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) m2679->owner));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2679), ((panda$core$Object*) m2679));
    selfRef2680 = &$s2681;
    panda$core$Bit $tmp2683 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2679);
    if ($tmp2683.value) {
    {
        argStart2682 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2684 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2685 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2684), p_out);
        selfRef2680 = $tmp2685;
    }
    }
    else {
    {
        argStart2682 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2687 = (panda$collections$Array*) malloc(40);
    $tmp2687->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2687->refCount.value = 1;
    panda$collections$Array$init($tmp2687);
    args2686 = $tmp2687;
    panda$core$Int64 $tmp2690 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2689, argStart2682, $tmp2690, ((panda$core$Bit) { false }));
    int64_t $tmp2692 = $tmp2689.min.value;
    panda$core$Int64 i2691 = { $tmp2692 };
    int64_t $tmp2694 = $tmp2689.max.value;
    bool $tmp2695 = $tmp2689.inclusive.value;
    if ($tmp2695) goto $l2702; else goto $l2703;
    $l2702:;
    if ($tmp2692 <= $tmp2694) goto $l2696; else goto $l2698;
    $l2703:;
    if ($tmp2692 < $tmp2694) goto $l2696; else goto $l2698;
    $l2696:;
    {
        panda$core$Object* $tmp2704 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2691);
        panda$core$String* $tmp2705 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2704), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2686, ((panda$core$Object*) $tmp2705));
    }
    $l2699:;
    int64_t $tmp2707 = $tmp2694 - i2691.value;
    if ($tmp2695) goto $l2708; else goto $l2709;
    $l2708:;
    if ($tmp2707 >= 1) goto $l2706; else goto $l2698;
    $l2709:;
    if ($tmp2707 > 1) goto $l2706; else goto $l2698;
    $l2706:;
    i2691.value += 1;
    goto $l2696;
    $l2698:;
    panda$core$String* $tmp2713 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2712 = $tmp2713;
    panda$core$Int64 $tmp2714 = panda$collections$Array$get_count$R$panda$core$Int64(args2686);
    panda$core$Int64 $tmp2715 = panda$collections$Array$get_count$R$panda$core$Int64(m2679->parameters);
    panda$core$Bit $tmp2716 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2714, $tmp2715);
    if ($tmp2716.value) {
    {
        panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2717, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2720));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2722 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2722->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2722->refCount.value = 1;
    panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2724, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2725, &$s2726);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2722, $tmp2727, selfRef2680, ((panda$collections$ListView*) args2686), end2712);
    inline2721 = $tmp2722;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2721));
    old2728 = self->currentMethod;
    self->currentMethod = m2679;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_body, p_out);
    self->currentMethod = old2728;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2729 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2730 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2729);
    if ($tmp2730.value) {
    {
        (($fn2732) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2731);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end2712, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2679));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    panda$core$Int64 $tmp2733 = panda$collections$Array$get_count$R$panda$core$Int64(inline2721->returns);
    panda$core$Bit $tmp2734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2733, ((panda$core$Int64) { 1 }));
    if ($tmp2734.value) {
    {
        panda$core$Object* $tmp2735 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2721->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2735)->second);
    }
    }
    panda$core$Int64 $tmp2736 = panda$collections$Array$get_count$R$panda$core$Int64(inline2721->returns);
    panda$core$Bit $tmp2737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2736, ((panda$core$Int64) { 0 }));
    if ($tmp2737.value) {
    {
        (($fn2739) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s2738);
        return &$s2740;
    }
    }
    panda$core$String* $tmp2742 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2741 = $tmp2742;
    panda$core$String* $tmp2743 = panda$core$String$convert$R$panda$core$String(phi2741);
    panda$core$String* $tmp2745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2743, &$s2744);
    panda$core$String* $tmp2746 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2679->returnType);
    panda$core$String* $tmp2747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2745, $tmp2746);
    panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2747, &$s2748);
    (($fn2750) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2749);
    separator2751 = &$s2752;
    {
        ITable* $tmp2754 = ((panda$collections$Iterable*) inline2721->returns)->$class->itable;
        while ($tmp2754->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2754 = $tmp2754->next;
        }
        $fn2756 $tmp2755 = $tmp2754->methods[0];
        panda$collections$Iterator* $tmp2757 = $tmp2755(((panda$collections$Iterable*) inline2721->returns));
        ret$Iter2753 = $tmp2757;
        $l2758:;
        ITable* $tmp2760 = ret$Iter2753->$class->itable;
        while ($tmp2760->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2760 = $tmp2760->next;
        }
        $fn2762 $tmp2761 = $tmp2760->methods[0];
        panda$core$Bit $tmp2763 = $tmp2761(ret$Iter2753);
        panda$core$Bit $tmp2764 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2763);
        if (!$tmp2764.value) goto $l2759;
        {
            ITable* $tmp2766 = ret$Iter2753->$class->itable;
            while ($tmp2766->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2766 = $tmp2766->next;
            }
            $fn2768 $tmp2767 = $tmp2766->methods[1];
            panda$core$Object* $tmp2769 = $tmp2767(ret$Iter2753);
            ret2765 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2769);
            panda$core$String* $tmp2770 = panda$core$String$convert$R$panda$core$String(separator2751);
            panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2770, &$s2771);
            panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2772, ((panda$core$String*) ret2765->second));
            panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2773, &$s2774);
            panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, ((panda$core$String*) ret2765->first));
            panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, &$s2777);
            (($fn2779) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2778);
            separator2751 = &$s2780;
        }
        goto $l2758;
        $l2759:;
    }
    (($fn2781) ((panda$io$OutputStream*) p_out)->$class->vtable[17])(((panda$io$OutputStream*) p_out));
    return phi2741;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2783;
    panda$core$String* bit2793;
    panda$core$String* result2797;
    panda$core$String* bit2811;
    panda$core$String* result2815;
    org$pandalanguage$pandac$IRNode* block2830;
    panda$collections$Array* args2834;
    org$pandalanguage$pandac$Type* actualMethodType2838;
    panda$core$String* actualResultType2839;
    panda$core$Bit isSuper2840;
    panda$core$Int64 offset2860;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2865;
    panda$core$String* arg2880;
    panda$core$String* target2912;
    panda$core$String* methodRef2916;
    panda$core$String* result2918;
    panda$core$Bit indirect2919;
    panda$core$String* separator2944;
    panda$core$String* indirectVar2946;
    panda$collections$Iterator* arg$Iter2965;
    panda$core$String* arg2977;
    panda$core$Bit $tmp2782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2782.value);
    m2783 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2785 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2783->owner)->name, &$s2784);
    if ($tmp2785.value) {
    {
        panda$core$String* $tmp2786 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2786;
    }
    }
    if (m2783->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2783);
    }
    }
    panda$core$Bit $tmp2788 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2783->owner)->name, &$s2787);
    if ($tmp2788.value) {
    {
        panda$core$Bit $tmp2790 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2783)->name, &$s2789);
        if ($tmp2790.value) {
        {
            panda$core$Int64 $tmp2791 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2791, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2792.value);
            panda$core$Object* $tmp2794 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2795 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2796 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2794), ((org$pandalanguage$pandac$IRNode*) $tmp2795), p_out);
            bit2793 = $tmp2796;
            panda$core$String* $tmp2798 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2797 = $tmp2798;
            panda$core$String* $tmp2799 = panda$core$String$convert$R$panda$core$String(result2797);
            panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2799, &$s2800);
            panda$core$String* $tmp2802 = panda$core$String$convert$R$panda$core$String(bit2793);
            panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2802, &$s2803);
            panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2801, $tmp2804);
            (($fn2806) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2805);
            return result2797;
        }
        }
        panda$core$Bit $tmp2808 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2783)->name, &$s2807);
        if ($tmp2808.value) {
        {
            panda$core$Int64 $tmp2809 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2809, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2810.value);
            panda$core$Object* $tmp2812 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2813 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2814 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2812), ((org$pandalanguage$pandac$IRNode*) $tmp2813), p_out);
            bit2811 = $tmp2814;
            panda$core$String* $tmp2816 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2815 = $tmp2816;
            panda$core$String* $tmp2817 = panda$core$String$convert$R$panda$core$String(result2815);
            panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, &$s2818);
            panda$core$String* $tmp2820 = panda$core$String$convert$R$panda$core$String(bit2811);
            panda$core$String* $tmp2822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, &$s2821);
            panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2819, $tmp2822);
            (($fn2824) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2823);
            return result2815;
        }
        }
    }
    }
    panda$core$Bit $tmp2826 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2783->annotations);
    bool $tmp2825 = $tmp2826.value;
    if (!$tmp2825) goto $l2827;
    panda$core$Object* $tmp2828 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2783));
    $tmp2825 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp2828) == NULL }).value;
    $l2827:;
    panda$core$Bit $tmp2829 = { $tmp2825 };
    if ($tmp2829.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2831 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2783);
        block2830 = $tmp2831;
        if (((panda$core$Bit) { block2830 != NULL }).value) {
        {
            panda$core$String* $tmp2832 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, block2830, p_out);
            return $tmp2832;
        }
        }
        return &$s2833;
    }
    }
    panda$collections$Array* $tmp2835 = (panda$collections$Array*) malloc(40);
    $tmp2835->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2835->refCount.value = 1;
    panda$core$Int64 $tmp2837 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp2835, $tmp2837);
    args2834 = $tmp2835;
    panda$core$Int64 $tmp2842 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2843 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2842, ((panda$core$Int64) { 1 }));
    bool $tmp2841 = $tmp2843.value;
    if (!$tmp2841) goto $l2844;
    panda$core$Object* $tmp2845 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2845)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2841 = $tmp2846.value;
    $l2844:;
    panda$core$Bit $tmp2847 = { $tmp2841 };
    isSuper2840 = $tmp2847;
    panda$core$Bit $tmp2849 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2840);
    bool $tmp2848 = $tmp2849.value;
    if (!$tmp2848) goto $l2850;
    panda$core$Bit $tmp2851 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2783);
    $tmp2848 = $tmp2851.value;
    $l2850:;
    panda$core$Bit $tmp2852 = { $tmp2848 };
    if ($tmp2852.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2853 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2783);
        actualMethodType2838 = $tmp2853;
        panda$core$Int64 $tmp2854 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2838->subtypes);
        panda$core$Int64 $tmp2855 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2854, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2856 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2838->subtypes, $tmp2855);
        panda$core$String* $tmp2857 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2856));
        actualResultType2839 = $tmp2857;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2858 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2783);
        actualMethodType2838 = $tmp2858;
        panda$core$String* $tmp2859 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2839 = $tmp2859;
    }
    }
    panda$core$Int64 $tmp2861 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2862 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2838->subtypes);
    panda$core$Int64 $tmp2863 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2861, $tmp2862);
    panda$core$Int64 $tmp2864 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2863, ((panda$core$Int64) { 1 }));
    offset2860 = $tmp2864;
    panda$core$Int64 $tmp2866 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2865, ((panda$core$Int64) { 0 }), $tmp2866, ((panda$core$Bit) { false }));
    int64_t $tmp2868 = $tmp2865.min.value;
    panda$core$Int64 i2867 = { $tmp2868 };
    int64_t $tmp2870 = $tmp2865.max.value;
    bool $tmp2871 = $tmp2865.inclusive.value;
    if ($tmp2871) goto $l2878; else goto $l2879;
    $l2878:;
    if ($tmp2868 <= $tmp2870) goto $l2872; else goto $l2874;
    $l2879:;
    if ($tmp2868 < $tmp2870) goto $l2872; else goto $l2874;
    $l2872:;
    {
        panda$core$Object* $tmp2881 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2867);
        panda$core$String* $tmp2882 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2881), p_out);
        arg2880 = $tmp2882;
        panda$core$Bit $tmp2884 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2867, offset2860);
        bool $tmp2883 = $tmp2884.value;
        if (!$tmp2883) goto $l2885;
        panda$core$Int64 $tmp2886 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2867, offset2860);
        panda$core$Object* $tmp2887 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2838->subtypes, $tmp2886);
        panda$core$Object* $tmp2888 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2867);
        panda$core$Bit $tmp2889 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2887), ((org$pandalanguage$pandac$IRNode*) $tmp2888)->type);
        $tmp2883 = $tmp2889.value;
        $l2885:;
        panda$core$Bit $tmp2890 = { $tmp2883 };
        if ($tmp2890.value) {
        {
            panda$core$Int64 $tmp2891 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2867, offset2860);
            panda$core$Object* $tmp2892 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2838->subtypes, $tmp2891);
            panda$core$String* $tmp2893 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2892));
            panda$core$String* $tmp2895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2893, &$s2894);
            panda$core$Object* $tmp2896 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2867);
            panda$core$Int64 $tmp2897 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2867, offset2860);
            panda$core$Object* $tmp2898 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2838->subtypes, $tmp2897);
            panda$core$String* $tmp2899 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2880, ((org$pandalanguage$pandac$IRNode*) $tmp2896)->type, ((org$pandalanguage$pandac$Type*) $tmp2898), p_out);
            panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2895, $tmp2899);
            arg2880 = $tmp2900;
        }
        }
        else {
        {
            panda$core$Object* $tmp2901 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2867);
            panda$core$String* $tmp2902 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2901)->type);
            panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, &$s2903);
            panda$core$String* $tmp2905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2904, arg2880);
            arg2880 = $tmp2905;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2834, ((panda$core$Object*) arg2880));
    }
    $l2875:;
    int64_t $tmp2907 = $tmp2870 - i2867.value;
    if ($tmp2871) goto $l2908; else goto $l2909;
    $l2908:;
    if ($tmp2907 >= 1) goto $l2906; else goto $l2874;
    $l2909:;
    if ($tmp2907 > 1) goto $l2906; else goto $l2874;
    $l2906:;
    i2867.value += 1;
    goto $l2872;
    $l2874:;
    panda$core$Int64 $tmp2913 = panda$collections$Array$get_count$R$panda$core$Int64(args2834);
    panda$core$Bit $tmp2914 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2913, ((panda$core$Int64) { 0 }));
    if ($tmp2914.value) {
    {
        panda$core$Object* $tmp2915 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2834, ((panda$core$Int64) { 0 }));
        target2912 = ((panda$core$String*) $tmp2915);
    }
    }
    else {
    {
        target2912 = NULL;
    }
    }
    panda$core$String* $tmp2917 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target2912, m2783, isSuper2840, p_out);
    methodRef2916 = $tmp2917;
    panda$core$Bit $tmp2920 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2783);
    indirect2919 = $tmp2920;
    if (indirect2919.value) {
    {
        panda$core$String* $tmp2922 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2783);
        panda$core$String* $tmp2923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2921, $tmp2922);
        panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2923, &$s2924);
        (($fn2926) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2925);
    }
    }
    else {
    {
        panda$core$String* $tmp2927 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2918 = $tmp2927;
        panda$core$String* $tmp2928 = panda$core$String$convert$R$panda$core$String(result2918);
        panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2928, &$s2929);
        panda$core$String* $tmp2931 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2783);
        panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, $tmp2931);
        panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2932, &$s2933);
        panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, actualResultType2839);
        panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, &$s2936);
        (($fn2938) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2937);
    }
    }
    panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2939, methodRef2916);
    panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2940, &$s2941);
    (($fn2943) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2942);
    separator2944 = &$s2945;
    if (indirect2919.value) {
    {
        panda$core$Int64 $tmp2947 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp2947;
        panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2948, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar2946 = $tmp2949;
        panda$core$String* $tmp2950 = panda$core$String$convert$R$panda$core$String(indirectVar2946);
        panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, &$s2951);
        panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, actualResultType2839);
        panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, &$s2954);
        (($fn2956) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2955);
        panda$core$String* $tmp2957 = panda$core$String$convert$R$panda$core$String(actualResultType2839);
        panda$core$String* $tmp2959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2957, &$s2958);
        panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, indirectVar2946);
        panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2961);
        (($fn2963) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2962);
        separator2944 = &$s2964;
    }
    }
    {
        ITable* $tmp2966 = ((panda$collections$Iterable*) args2834)->$class->itable;
        while ($tmp2966->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2966 = $tmp2966->next;
        }
        $fn2968 $tmp2967 = $tmp2966->methods[0];
        panda$collections$Iterator* $tmp2969 = $tmp2967(((panda$collections$Iterable*) args2834));
        arg$Iter2965 = $tmp2969;
        $l2970:;
        ITable* $tmp2972 = arg$Iter2965->$class->itable;
        while ($tmp2972->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2972 = $tmp2972->next;
        }
        $fn2974 $tmp2973 = $tmp2972->methods[0];
        panda$core$Bit $tmp2975 = $tmp2973(arg$Iter2965);
        panda$core$Bit $tmp2976 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2975);
        if (!$tmp2976.value) goto $l2971;
        {
            ITable* $tmp2978 = arg$Iter2965->$class->itable;
            while ($tmp2978->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2978 = $tmp2978->next;
            }
            $fn2980 $tmp2979 = $tmp2978->methods[1];
            panda$core$Object* $tmp2981 = $tmp2979(arg$Iter2965);
            arg2977 = ((panda$core$String*) $tmp2981);
            panda$core$String* $tmp2982 = panda$core$String$convert$R$panda$core$String(separator2944);
            panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, &$s2983);
            panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, arg2977);
            panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2985, &$s2986);
            (($fn2988) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2987);
            separator2944 = &$s2989;
        }
        goto $l2970;
        $l2971:;
    }
    (($fn2991) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2990);
    if (indirect2919.value) {
    {
        panda$core$String* $tmp2992 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2918 = $tmp2992;
        panda$core$String* $tmp2993 = panda$core$String$convert$R$panda$core$String(result2918);
        panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, &$s2994);
        panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, actualResultType2839);
        panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2996, &$s2997);
        panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, actualResultType2839);
        panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2999, &$s3000);
        panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, indirectVar2946);
        (($fn3003) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3002);
    }
    }
    panda$core$String* $tmp3004 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3005 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3004, actualResultType2839);
    if ($tmp3005.value) {
    {
        panda$core$Int64 $tmp3006 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2838->subtypes);
        panda$core$Int64 $tmp3007 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3006, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3008 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2838->subtypes, $tmp3007);
        panda$core$String* $tmp3009 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result2918, ((org$pandalanguage$pandac$Type*) $tmp3008), p_call->type, p_out);
        return $tmp3009;
    }
    }
    return result2918;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3010;
    panda$core$String* testStart3013;
    panda$core$String* isNonNull3014;
    panda$core$String* nonNullLabel3027;
    panda$core$String* endLabel3029;
    panda$core$String* unwrapped3042;
    panda$core$String* nonNullValue3045;
    panda$core$String* result3053;
    panda$core$String* mallocRef3074;
    panda$core$String* wrapperTypeName3085;
    panda$core$String* wrapperType3088;
    panda$core$String* wrapperCast3091;
    panda$core$String* classPtr3103;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3119;
    panda$core$String* refCount3134;
    panda$core$String* target3155;
    panda$core$String* result3189;
    org$pandalanguage$pandac$ClassDecl* $tmp3011 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3010 = $tmp3011;
    PANDA_ASSERT(((panda$core$Bit) { src3010 != NULL }).value);
    panda$core$Bit $tmp3012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3012.value) {
    {
        testStart3013 = self->currentBlock;
        panda$core$String* $tmp3015 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3014 = $tmp3015;
        panda$core$String* $tmp3016 = panda$core$String$convert$R$panda$core$String(isNonNull3014);
        panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3017);
        panda$core$String* $tmp3019 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, $tmp3019);
        panda$core$String* $tmp3022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, &$s3021);
        panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3022, p_value);
        panda$core$String* $tmp3025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3023, &$s3024);
        (($fn3026) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3025);
        panda$core$String* $tmp3028 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3027 = $tmp3028;
        panda$core$String* $tmp3030 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3029 = $tmp3030;
        panda$core$String* $tmp3032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3031, isNonNull3014);
        panda$core$String* $tmp3034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3032, &$s3033);
        panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3034, nonNullLabel3027);
        panda$core$String* $tmp3037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, &$s3036);
        panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3037, endLabel3029);
        panda$core$String* $tmp3040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3038, &$s3039);
        (($fn3041) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3040);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3027, p_out);
        panda$core$Object* $tmp3043 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3044 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3043), p_out);
        unwrapped3042 = $tmp3044;
        panda$core$Object* $tmp3046 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3047 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped3042, ((org$pandalanguage$pandac$Type*) $tmp3046), p_dstType, p_out);
        nonNullValue3045 = $tmp3047;
        panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3048, endLabel3029);
        panda$core$String* $tmp3051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3049, &$s3050);
        (($fn3052) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3051);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3029, p_out);
        panda$core$String* $tmp3054 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3053 = $tmp3054;
        panda$core$String* $tmp3055 = panda$core$String$convert$R$panda$core$String(result3053);
        panda$core$String* $tmp3057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3055, &$s3056);
        panda$core$String* $tmp3058 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3057, $tmp3058);
        panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, &$s3060);
        panda$core$String* $tmp3062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, testStart3013);
        panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3062, &$s3063);
        panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3065, nonNullValue3045);
        panda$core$String* $tmp3068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, &$s3067);
        panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3068, nonNullLabel3027);
        panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, &$s3070);
        panda$core$String* $tmp3072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, $tmp3071);
        (($fn3073) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3072);
        return result3053;
    }
    }
    panda$core$String* $tmp3075 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3074 = $tmp3075;
    panda$core$String* $tmp3076 = panda$core$String$convert$R$panda$core$String(mallocRef3074);
    panda$core$String* $tmp3078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3076, &$s3077);
    org$pandalanguage$pandac$Type* $tmp3079 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3010);
    panda$core$Int64 $tmp3080 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3079);
    panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3078, ((panda$core$Object*) wrap_panda$core$Int64($tmp3080)));
    panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, &$s3082);
    (($fn3084) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3083);
    org$pandalanguage$pandac$Type* $tmp3086 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3010);
    panda$core$String* $tmp3087 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3086);
    wrapperTypeName3085 = $tmp3087;
    org$pandalanguage$pandac$Type* $tmp3089 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3010);
    panda$core$String* $tmp3090 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3089);
    wrapperType3088 = $tmp3090;
    panda$core$String* $tmp3092 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3091 = $tmp3092;
    panda$core$String* $tmp3093 = panda$core$String$convert$R$panda$core$String(wrapperCast3091);
    panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, &$s3094);
    panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, mallocRef3074);
    panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
    panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3098, wrapperType3088);
    panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, &$s3100);
    (($fn3102) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3101);
    panda$core$String* $tmp3104 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3103 = $tmp3104;
    panda$core$String* $tmp3105 = panda$core$String$convert$R$panda$core$String(classPtr3103);
    panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3105, &$s3106);
    panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, wrapperTypeName3085);
    panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3108, &$s3109);
    panda$core$String* $tmp3111 = panda$core$String$convert$R$panda$core$String(wrapperType3088);
    panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, &$s3112);
    panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3113, wrapperCast3091);
    panda$core$String* $tmp3116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3114, &$s3115);
    panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, $tmp3116);
    (($fn3118) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3117);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3120 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3010);
    cc3119 = $tmp3120;
    panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3121, cc3119->type);
    panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, &$s3123);
    panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, cc3119->name);
    panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3125, &$s3126);
    panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3128, classPtr3103);
    panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, &$s3130);
    panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3127, $tmp3131);
    (($fn3133) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3132);
    panda$core$String* $tmp3135 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3134 = $tmp3135;
    panda$core$String* $tmp3136 = panda$core$String$convert$R$panda$core$String(refCount3134);
    panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3136, &$s3137);
    panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3138, wrapperTypeName3085);
    panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, &$s3140);
    panda$core$String* $tmp3142 = panda$core$String$convert$R$panda$core$String(wrapperType3088);
    panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, &$s3143);
    panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3144, wrapperCast3091);
    panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, &$s3146);
    panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, $tmp3147);
    (($fn3149) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3148);
    panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3150, refCount3134);
    panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, &$s3152);
    (($fn3154) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3153);
    panda$core$String* $tmp3156 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3155 = $tmp3156;
    panda$core$String* $tmp3157 = panda$core$String$convert$R$panda$core$String(target3155);
    panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3157, &$s3158);
    panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, wrapperTypeName3085);
    panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, &$s3161);
    panda$core$String* $tmp3163 = panda$core$String$convert$R$panda$core$String(wrapperType3088);
    panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, &$s3164);
    panda$core$String* $tmp3166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, wrapperCast3091);
    panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3166, &$s3167);
    panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, $tmp3168);
    (($fn3170) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3169);
    panda$core$String* $tmp3172 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3171, $tmp3172);
    panda$core$String* $tmp3175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, &$s3174);
    panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3175, p_value);
    panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, &$s3177);
    panda$core$String* $tmp3179 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, $tmp3179);
    panda$core$String* $tmp3182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3180, &$s3181);
    panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3182, target3155);
    panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3183, &$s3184);
    (($fn3186) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3185);
    panda$core$String* $tmp3187 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3188 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3088, $tmp3187);
    if ($tmp3188.value) {
    {
        panda$core$String* $tmp3190 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3189 = $tmp3190;
        panda$core$String* $tmp3191 = panda$core$String$convert$R$panda$core$String(result3189);
        panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, &$s3192);
        panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3193, wrapperType3088);
        panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, &$s3195);
        panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, wrapperCast3091);
        panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, &$s3198);
        panda$core$String* $tmp3200 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3199, $tmp3200);
        panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3201, &$s3202);
        (($fn3204) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3203);
        return result3189;
    }
    }
    return wrapperCast3091;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3208;
    panda$core$String* t3209;
    org$pandalanguage$pandac$ClassDecl* cl3213;
    panda$core$String* base3217;
    panda$collections$ListView* fields3220;
    panda$core$Int64$nullable index3222;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3223;
    panda$core$String* result3251;
    panda$core$String* ptr3270;
    panda$core$String* result3278;
    panda$core$Bit $tmp3205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3205.value);
    panda$core$Int64 $tmp3206 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3206, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3207.value);
    field3208 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3210 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3208->type);
    t3209 = $tmp3210;
    panda$core$Bit $tmp3211 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3208->annotations);
    if ($tmp3211.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3208->value != NULL }).value);
        panda$core$String* $tmp3212 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field3208->value, p_out);
        return $tmp3212;
    }
    }
    panda$core$Object* $tmp3214 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3215 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3214)->type);
    cl3213 = $tmp3215;
    PANDA_ASSERT(((panda$core$Bit) { cl3213 != NULL }).value);
    panda$core$Bit $tmp3216 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3213);
    if ($tmp3216.value) {
    {
        panda$core$Object* $tmp3218 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3219 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3218), p_out);
        base3217 = $tmp3219;
        panda$collections$ListView* $tmp3221 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3213);
        fields3220 = $tmp3221;
        index3222 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3224 = ((panda$collections$CollectionView*) fields3220)->$class->itable;
        while ($tmp3224->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3224 = $tmp3224->next;
        }
        $fn3226 $tmp3225 = $tmp3224->methods[0];
        panda$core$Int64 $tmp3227 = $tmp3225(((panda$collections$CollectionView*) fields3220));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3223, ((panda$core$Int64) { 0 }), $tmp3227, ((panda$core$Bit) { false }));
        int64_t $tmp3229 = $tmp3223.min.value;
        panda$core$Int64 i3228 = { $tmp3229 };
        int64_t $tmp3231 = $tmp3223.max.value;
        bool $tmp3232 = $tmp3223.inclusive.value;
        if ($tmp3232) goto $l3239; else goto $l3240;
        $l3239:;
        if ($tmp3229 <= $tmp3231) goto $l3233; else goto $l3235;
        $l3240:;
        if ($tmp3229 < $tmp3231) goto $l3233; else goto $l3235;
        $l3233:;
        {
            ITable* $tmp3241 = fields3220->$class->itable;
            while ($tmp3241->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3241 = $tmp3241->next;
            }
            $fn3243 $tmp3242 = $tmp3241->methods[0];
            panda$core$Object* $tmp3244 = $tmp3242(fields3220, i3228);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3244)) == ((panda$core$Object*) field3208) }).value) {
            {
                index3222 = ((panda$core$Int64$nullable) { i3228, true });
                goto $l3235;
            }
            }
        }
        $l3236:;
        int64_t $tmp3246 = $tmp3231 - i3228.value;
        if ($tmp3232) goto $l3247; else goto $l3248;
        $l3247:;
        if ($tmp3246 >= 1) goto $l3245; else goto $l3235;
        $l3248:;
        if ($tmp3246 > 1) goto $l3245; else goto $l3235;
        $l3245:;
        i3228.value += 1;
        goto $l3233;
        $l3235:;
        PANDA_ASSERT(((panda$core$Bit) { index3222.nonnull }).value);
        panda$core$String* $tmp3252 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3251 = $tmp3252;
        panda$core$String* $tmp3253 = panda$core$String$convert$R$panda$core$String(result3251);
        panda$core$String* $tmp3255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3253, &$s3254);
        panda$core$Object* $tmp3256 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3257 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3256)->type);
        panda$core$String* $tmp3258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3255, $tmp3257);
        panda$core$String* $tmp3260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3258, &$s3259);
        panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3260, base3217);
        panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3261, &$s3262);
        panda$core$String* $tmp3265 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3264, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3222.value))));
        panda$core$String* $tmp3267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3265, &$s3266);
        panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3263, $tmp3267);
        (($fn3269) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3268);
        return result3251;
    }
    }
    panda$core$String* $tmp3271 = panda$core$String$convert$R$panda$core$String(t3209);
    panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3271, &$s3272);
    panda$core$String* $tmp3274 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3273, $tmp3274);
    panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3275, &$s3276);
    ptr3270 = $tmp3277;
    panda$core$String* $tmp3279 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3278 = $tmp3279;
    panda$core$String* $tmp3280 = panda$core$String$convert$R$panda$core$String(result3278);
    panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3280, &$s3281);
    panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, t3209);
    panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3284);
    panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3285, ptr3270);
    panda$core$String* $tmp3288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3286, &$s3287);
    (($fn3289) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3288);
    return result3278;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3290;
    panda$core$String* testStart3293;
    panda$core$String* isNonNull3294;
    panda$core$String* nonNullLabel3307;
    panda$core$String* endLabel3309;
    panda$core$String* wrapped3322;
    panda$core$String* nonNullValue3325;
    panda$core$String* result3333;
    panda$core$String* targetType3361;
    panda$core$String* wrapperTypeName3363;
    panda$core$String* wrapperType3365;
    panda$core$String* srcCast3367;
    panda$core$String* load3383;
    panda$core$String* result3398;
    org$pandalanguage$pandac$ClassDecl* $tmp3291 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3290 = $tmp3291;
    PANDA_ASSERT(((panda$core$Bit) { target3290 != NULL }).value);
    panda$core$Bit $tmp3292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3292.value) {
    {
        testStart3293 = self->currentBlock;
        panda$core$String* $tmp3295 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3294 = $tmp3295;
        panda$core$String* $tmp3296 = panda$core$String$convert$R$panda$core$String(isNonNull3294);
        panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, &$s3297);
        panda$core$String* $tmp3299 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3298, $tmp3299);
        panda$core$String* $tmp3302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3300, &$s3301);
        panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3302, p_value);
        panda$core$String* $tmp3305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, &$s3304);
        (($fn3306) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3305);
        panda$core$String* $tmp3308 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3307 = $tmp3308;
        panda$core$String* $tmp3310 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3309 = $tmp3310;
        panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3311, isNonNull3294);
        panda$core$String* $tmp3314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3312, &$s3313);
        panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3314, nonNullLabel3307);
        panda$core$String* $tmp3317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3315, &$s3316);
        panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3317, endLabel3309);
        panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3318, &$s3319);
        (($fn3321) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3320);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3307, p_out);
        panda$core$Object* $tmp3323 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3324 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3323), p_out);
        wrapped3322 = $tmp3324;
        panda$core$Object* $tmp3326 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3327 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped3322, ((org$pandalanguage$pandac$Type*) $tmp3326), p_dstType, p_out);
        nonNullValue3325 = $tmp3327;
        panda$core$String* $tmp3329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3328, endLabel3309);
        panda$core$String* $tmp3331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3329, &$s3330);
        (($fn3332) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3331);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3309, p_out);
        panda$core$String* $tmp3334 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3333 = $tmp3334;
        panda$core$String* $tmp3335 = panda$core$String$convert$R$panda$core$String(result3333);
        panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, &$s3336);
        panda$core$String* $tmp3338 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, $tmp3338);
        panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3339, &$s3340);
        panda$core$Object* $tmp3343 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3344 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3343));
        panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3342, $tmp3344);
        panda$core$String* $tmp3347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3345, &$s3346);
        panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, $tmp3347);
        panda$core$String* $tmp3350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3349, testStart3293);
        panda$core$String* $tmp3352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3350, &$s3351);
        panda$core$String* $tmp3353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3352, nonNullValue3325);
        panda$core$String* $tmp3355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3353, &$s3354);
        panda$core$String* $tmp3356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3355, nonNullLabel3307);
        panda$core$String* $tmp3358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3356, &$s3357);
        panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3348, $tmp3358);
        (($fn3360) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3359);
        return result3333;
    }
    }
    panda$core$String* $tmp3362 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3361 = $tmp3362;
    panda$core$String* $tmp3364 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3363 = $tmp3364;
    panda$core$String* $tmp3366 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3365 = $tmp3366;
    panda$core$String* $tmp3368 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3367 = $tmp3368;
    panda$core$String* $tmp3369 = panda$core$String$convert$R$panda$core$String(srcCast3367);
    panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3369, &$s3370);
    panda$core$String* $tmp3372 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3371, $tmp3372);
    panda$core$String* $tmp3375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3373, &$s3374);
    panda$core$String* $tmp3376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3375, p_value);
    panda$core$String* $tmp3378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3376, &$s3377);
    panda$core$String* $tmp3379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3378, wrapperType3365);
    panda$core$String* $tmp3381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3379, &$s3380);
    (($fn3382) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3381);
    panda$core$String* $tmp3384 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3383 = $tmp3384;
    panda$core$String* $tmp3385 = panda$core$String$convert$R$panda$core$String(load3383);
    panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3385, &$s3386);
    panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, wrapperTypeName3363);
    panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, &$s3389);
    panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, wrapperType3365);
    panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3391, &$s3392);
    panda$core$String* $tmp3394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3393, srcCast3367);
    panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3394, &$s3395);
    (($fn3397) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3396);
    panda$core$String* $tmp3399 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3398 = $tmp3399;
    panda$core$String* $tmp3400 = panda$core$String$convert$R$panda$core$String(result3398);
    panda$core$String* $tmp3402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3400, &$s3401);
    panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3402, wrapperTypeName3363);
    panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3403, &$s3404);
    panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, load3383);
    panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3406, &$s3407);
    panda$core$String* $tmp3409 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3408, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3409, &$s3410);
    (($fn3412) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3411);
    return result3398;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* nullableType3413;
    panda$core$String* result3415;
    panda$core$String* $tmp3414 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3413 = $tmp3414;
    panda$core$String* $tmp3416 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3415 = $tmp3416;
    panda$core$String* $tmp3417 = panda$core$String$convert$R$panda$core$String(result3415);
    panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3417, &$s3418);
    panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3419, nullableType3413);
    panda$core$String* $tmp3422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3420, &$s3421);
    panda$core$String* $tmp3424 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3423, $tmp3424);
    panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3425, &$s3426);
    panda$core$String* $tmp3428 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3427, $tmp3428);
    panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3429, &$s3430);
    panda$core$String* $tmp3432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3431, p_value);
    panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3432, &$s3433);
    panda$core$String* $tmp3435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3422, $tmp3434);
    (($fn3436) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3435);
    return result3415;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3437;
    panda$core$String* $tmp3438 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3437 = $tmp3438;
    panda$core$String* $tmp3439 = panda$core$String$convert$R$panda$core$String(result3437);
    panda$core$String* $tmp3441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3439, &$s3440);
    panda$core$String* $tmp3442 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3441, $tmp3442);
    panda$core$String* $tmp3445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3443, &$s3444);
    panda$core$String* $tmp3446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3445, p_value);
    panda$core$String* $tmp3448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3446, &$s3447);
    (($fn3449) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3448);
    return result3437;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op3450;
    panda$core$Int64 size13453;
    panda$core$Int64 size23455;
    org$pandalanguage$pandac$ClassDecl* srcClass3463;
    org$pandalanguage$pandac$ClassDecl* targetClass3465;
    panda$core$String* srcType3504;
    panda$core$String* dstType3506;
    panda$core$String* result3509;
    panda$core$Bit $tmp3451 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3451.value) {
    {
        panda$core$Bit $tmp3452 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3452.value);
        panda$core$Int64 $tmp3454 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13453 = $tmp3454;
        panda$core$Int64 $tmp3456 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23455 = $tmp3456;
        panda$core$Bit $tmp3457 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13453, size23455);
        if ($tmp3457.value) {
        {
            op3450 = &$s3458;
        }
        }
        else {
        panda$core$Bit $tmp3459 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13453, size23455);
        if ($tmp3459.value) {
        {
            panda$core$Bit $tmp3460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3460.value) {
            {
                op3450 = &$s3461;
            }
            }
            else {
            {
                op3450 = &$s3462;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3464 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3463 = $tmp3464;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3463 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3466 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3465 = $tmp3466;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3465 != NULL }).value);
        panda$core$Bit $tmp3468 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3463);
        bool $tmp3467 = $tmp3468.value;
        if (!$tmp3467) goto $l3469;
        panda$core$Bit $tmp3470 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3465);
        panda$core$Bit $tmp3471 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3470);
        $tmp3467 = $tmp3471.value;
        $l3469:;
        panda$core$Bit $tmp3472 = { $tmp3467 };
        if ($tmp3472.value) {
        {
            panda$core$String* $tmp3473 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3473;
        }
        }
        else {
        panda$core$Bit $tmp3475 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3463);
        panda$core$Bit $tmp3476 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3475);
        bool $tmp3474 = $tmp3476.value;
        if (!$tmp3474) goto $l3477;
        panda$core$Bit $tmp3478 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3465);
        $tmp3474 = $tmp3478.value;
        $l3477:;
        panda$core$Bit $tmp3479 = { $tmp3474 };
        if ($tmp3479.value) {
        {
            panda$core$String* $tmp3480 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3480;
        }
        }
        else {
        panda$core$Bit $tmp3483 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3463);
        bool $tmp3482 = $tmp3483.value;
        if (!$tmp3482) goto $l3484;
        panda$core$Bit $tmp3485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3482 = $tmp3485.value;
        $l3484:;
        panda$core$Bit $tmp3486 = { $tmp3482 };
        bool $tmp3481 = $tmp3486.value;
        if (!$tmp3481) goto $l3487;
        panda$core$Object* $tmp3488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3489 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3488), p_src);
        $tmp3481 = $tmp3489.value;
        $l3487:;
        panda$core$Bit $tmp3490 = { $tmp3481 };
        if ($tmp3490.value) {
        {
            panda$core$String* $tmp3491 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3491;
        }
        }
        else {
        panda$core$Bit $tmp3494 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3465);
        bool $tmp3493 = $tmp3494.value;
        if (!$tmp3493) goto $l3495;
        panda$core$Bit $tmp3496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3493 = $tmp3496.value;
        $l3495:;
        panda$core$Bit $tmp3497 = { $tmp3493 };
        bool $tmp3492 = $tmp3497.value;
        if (!$tmp3492) goto $l3498;
        panda$core$Object* $tmp3499 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3500 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3499), p_target);
        $tmp3492 = $tmp3500.value;
        $l3498:;
        panda$core$Bit $tmp3501 = { $tmp3492 };
        if ($tmp3501.value) {
        {
            panda$core$String* $tmp3502 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3502;
        }
        }
        }
        }
        }
        op3450 = &$s3503;
    }
    }
    panda$core$String* $tmp3505 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3504 = $tmp3505;
    panda$core$String* $tmp3507 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3506 = $tmp3507;
    panda$core$Bit $tmp3508 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3504, dstType3506);
    if ($tmp3508.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3510 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3509 = $tmp3510;
    panda$core$String* $tmp3511 = panda$core$String$convert$R$panda$core$String(result3509);
    panda$core$String* $tmp3513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3511, &$s3512);
    panda$core$String* $tmp3514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3513, op3450);
    panda$core$String* $tmp3516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3514, &$s3515);
    panda$core$String* $tmp3517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3516, srcType3504);
    panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3517, &$s3518);
    panda$core$String* $tmp3520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, p_value);
    panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3520, &$s3521);
    panda$core$String* $tmp3523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, dstType3506);
    panda$core$String* $tmp3525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3523, &$s3524);
    (($fn3526) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3525);
    return result3509;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3530;
    panda$core$Bit $tmp3527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3527.value);
    panda$core$Int64 $tmp3528 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3528, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3529.value);
    panda$core$Object* $tmp3531 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3532 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3531), p_out);
    base3530 = $tmp3532;
    panda$core$Object* $tmp3533 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3534 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base3530, ((org$pandalanguage$pandac$IRNode*) $tmp3533)->type, p_cast->type, p_out);
    return $tmp3534;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3538;
    panda$core$String* t3540;
    panda$core$String* value3548;
    panda$core$String* result3559;
    org$pandalanguage$pandac$FieldDecl* lastField3561;
    panda$core$String* value3589;
    panda$core$String* result3600;
    org$pandalanguage$pandac$FieldDecl* lastField3602;
    panda$core$String* alloca3625;
    panda$core$String* result3644;
    panda$core$String* callRef3659;
    panda$core$String* result3669;
    panda$core$String* classPtr3682;
    panda$core$String* className3684;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3709;
    panda$core$Bit $tmp3535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3535.value);
    panda$core$Int64 $tmp3536 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3537 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3536, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3537.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3539 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3538 = $tmp3539;
    PANDA_ASSERT(((panda$core$Bit) { cl3538 != NULL }).value);
    panda$core$String* $tmp3541 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3540 = $tmp3541;
    panda$core$Bit $tmp3542 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3542.value) {
    {
        panda$core$Int64 $tmp3543 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3543, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3544.value);
        panda$core$Object* $tmp3545 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3546 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3545)->children);
        panda$core$Bit $tmp3547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3546, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3547.value);
        panda$core$Object* $tmp3549 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3550 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3549)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3551 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3550), p_out);
        value3548 = $tmp3551;
        panda$core$Object* $tmp3552 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3553 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3552)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3553)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3554.value) {
        {
            panda$core$String* $tmp3556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3555, value3548);
            panda$core$String* $tmp3558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3556, &$s3557);
            return $tmp3558;
        }
        }
        panda$core$String* $tmp3560 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3559 = $tmp3560;
        panda$core$Int64 $tmp3562 = panda$collections$Array$get_count$R$panda$core$Int64(cl3538->fields);
        panda$core$Int64 $tmp3563 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3562, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3564 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3538->fields, $tmp3563);
        lastField3561 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3564);
        panda$core$Bit $tmp3565 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3561->annotations);
        panda$core$Bit $tmp3566 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3565);
        PANDA_ASSERT($tmp3566.value);
        panda$core$String* $tmp3567 = panda$core$String$convert$R$panda$core$String(result3559);
        panda$core$String* $tmp3569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3567, &$s3568);
        panda$core$String* $tmp3570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3569, t3540);
        panda$core$String* $tmp3572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3570, &$s3571);
        panda$core$String* $tmp3573 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3561->type);
        panda$core$String* $tmp3574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3572, $tmp3573);
        panda$core$String* $tmp3576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3574, &$s3575);
        panda$core$String* $tmp3577 = panda$core$String$convert$R$panda$core$String(value3548);
        panda$core$String* $tmp3579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3577, &$s3578);
        panda$core$String* $tmp3580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3576, $tmp3579);
        (($fn3581) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3580);
        return result3559;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3582 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3583 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3582);
    if ($tmp3583.value) {
    {
        panda$core$Int64 $tmp3584 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3584, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3585.value);
        panda$core$Object* $tmp3586 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3587 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3586)->children);
        panda$core$Bit $tmp3588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3587, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3588.value);
        panda$core$Object* $tmp3590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3591 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3590)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3592 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3591), p_out);
        value3589 = $tmp3592;
        panda$core$Object* $tmp3593 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3593)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3594)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3595.value) {
        {
            panda$core$String* $tmp3597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3596, value3589);
            panda$core$String* $tmp3599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3597, &$s3598);
            return $tmp3599;
        }
        }
        panda$core$String* $tmp3601 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3600 = $tmp3601;
        panda$core$Int64 $tmp3603 = panda$collections$Array$get_count$R$panda$core$Int64(cl3538->fields);
        panda$core$Int64 $tmp3604 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3603, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3538->fields, $tmp3604);
        lastField3602 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3605);
        panda$core$Bit $tmp3606 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3602->annotations);
        panda$core$Bit $tmp3607 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3606);
        PANDA_ASSERT($tmp3607.value);
        panda$core$String* $tmp3608 = panda$core$String$convert$R$panda$core$String(result3600);
        panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3608, &$s3609);
        panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3610, t3540);
        panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3611, &$s3612);
        panda$core$String* $tmp3614 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3602->type);
        panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3613, $tmp3614);
        panda$core$String* $tmp3617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3615, &$s3616);
        panda$core$String* $tmp3618 = panda$core$String$convert$R$panda$core$String(value3589);
        panda$core$String* $tmp3620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3618, &$s3619);
        panda$core$String* $tmp3621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3617, $tmp3620);
        (($fn3622) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3621);
        return result3600;
    }
    }
    panda$core$Bit $tmp3623 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3538);
    if ($tmp3623.value) {
    {
        panda$core$Int64 $tmp3624 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3624;
        panda$core$String* $tmp3627 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3626, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3627, &$s3628);
        alloca3625 = $tmp3629;
        panda$core$String* $tmp3630 = panda$core$String$convert$R$panda$core$String(alloca3625);
        panda$core$String* $tmp3632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3630, &$s3631);
        panda$core$String* $tmp3633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3632, t3540);
        panda$core$String* $tmp3635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3633, &$s3634);
        (($fn3636) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3635);
        panda$core$Object* $tmp3637 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3638 = panda$core$String$convert$R$panda$core$String(t3540);
        panda$core$String* $tmp3640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3638, &$s3639);
        panda$core$String* $tmp3641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3640, alloca3625);
        panda$core$String* $tmp3643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3641, &$s3642);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3637), $tmp3643, p_out);
        panda$core$String* $tmp3645 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3644 = $tmp3645;
        panda$core$String* $tmp3646 = panda$core$String$convert$R$panda$core$String(result3644);
        panda$core$String* $tmp3648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3646, &$s3647);
        panda$core$String* $tmp3649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3648, t3540);
        panda$core$String* $tmp3651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3649, &$s3650);
        panda$core$String* $tmp3652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3651, t3540);
        panda$core$String* $tmp3654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3652, &$s3653);
        panda$core$String* $tmp3655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3654, alloca3625);
        panda$core$String* $tmp3657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3655, &$s3656);
        (($fn3658) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3657);
        return result3644;
    }
    }
    panda$core$String* $tmp3660 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3659 = $tmp3660;
    panda$core$String* $tmp3661 = panda$core$String$convert$R$panda$core$String(callRef3659);
    panda$core$String* $tmp3663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3661, &$s3662);
    panda$core$Int64 $tmp3664 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3665 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3663, ((panda$core$Object*) wrap_panda$core$Int64($tmp3664)));
    panda$core$String* $tmp3667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3665, &$s3666);
    (($fn3668) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3667);
    panda$core$String* $tmp3670 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3669 = $tmp3670;
    panda$core$String* $tmp3671 = panda$core$String$convert$R$panda$core$String(result3669);
    panda$core$String* $tmp3673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3671, &$s3672);
    panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3673, callRef3659);
    panda$core$String* $tmp3676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3674, &$s3675);
    panda$core$String* $tmp3677 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3676, $tmp3677);
    panda$core$String* $tmp3680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3678, &$s3679);
    (($fn3681) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3680);
    panda$core$String* $tmp3683 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3682 = $tmp3683;
    panda$core$Bit $tmp3686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3685 = $tmp3686.value;
    if (!$tmp3685) goto $l3687;
    panda$core$Bit $tmp3688 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3538);
    panda$core$Bit $tmp3689 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3688);
    $tmp3685 = $tmp3689.value;
    $l3687:;
    panda$core$Bit $tmp3690 = { $tmp3685 };
    if ($tmp3690.value) {
    {
        panda$core$Object* $tmp3691 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3692 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3691));
        className3684 = $tmp3692;
    }
    }
    else {
    {
        panda$core$String* $tmp3693 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3684 = $tmp3693;
    }
    }
    panda$core$String* $tmp3694 = panda$core$String$convert$R$panda$core$String(classPtr3682);
    panda$core$String* $tmp3696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3694, &$s3695);
    panda$core$String* $tmp3697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3696, className3684);
    panda$core$String* $tmp3699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3697, &$s3698);
    panda$core$String* $tmp3700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3699, t3540);
    panda$core$String* $tmp3702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3700, &$s3701);
    panda$core$String* $tmp3703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3702, result3669);
    panda$core$String* $tmp3705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3703, &$s3704);
    panda$core$String* $tmp3707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3705, &$s3706);
    (($fn3708) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3707);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3710 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3538);
    cc3709 = $tmp3710;
    panda$core$String* $tmp3712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3711, cc3709->type);
    panda$core$String* $tmp3714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3712, &$s3713);
    panda$core$String* $tmp3715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3714, cc3709->name);
    panda$core$String* $tmp3717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3715, &$s3716);
    panda$core$String* $tmp3719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3718, classPtr3682);
    panda$core$String* $tmp3721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3719, &$s3720);
    panda$core$String* $tmp3722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3717, $tmp3721);
    (($fn3723) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3722);
    panda$core$Object* $tmp3724 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3725 = panda$core$String$convert$R$panda$core$String(t3540);
    panda$core$String* $tmp3727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3725, &$s3726);
    panda$core$String* $tmp3728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3727, result3669);
    panda$core$String* $tmp3730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3728, &$s3729);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3724), $tmp3730, p_out);
    return result3669;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3731 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3731;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3733 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3732, $tmp3733);
    return $tmp3734;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3735;
    }
    }
    return &$s3736;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3739;
    panda$core$String* t3741;
    panda$core$Bit $tmp3737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3737.value) {
    {
        panda$core$String* $tmp3738 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3738;
    }
    }
    panda$core$String* $tmp3740 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3739 = $tmp3740;
    panda$core$String* $tmp3742 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3741 = $tmp3742;
    panda$core$String* $tmp3743 = panda$core$String$convert$R$panda$core$String(result3739);
    panda$core$String* $tmp3745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3743, &$s3744);
    panda$core$String* $tmp3746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3745, t3741);
    panda$core$String* $tmp3748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3746, &$s3747);
    panda$core$String* $tmp3749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3748, t3741);
    panda$core$String* $tmp3751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3749, &$s3750);
    panda$core$String* $tmp3752 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3751, $tmp3752);
    panda$core$String* $tmp3755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3753, &$s3754);
    (($fn3756) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3755);
    return result3739;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* chars3758;
    panda$core$String* charsType3763;
    panda$core$String* separator3780;
    panda$collections$Iterator* c$Iter3782;
    panda$core$Char8 c3795;
    panda$core$String* result3812;
    org$pandalanguage$pandac$ClassDecl* string3817;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3820;
    panda$core$Int64 $tmp3757 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3757;
    panda$core$String* $tmp3760 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3759, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3760, &$s3761);
    chars3758 = $tmp3762;
    panda$collections$ListView* $tmp3765 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3766 = ((panda$collections$CollectionView*) $tmp3765)->$class->itable;
    while ($tmp3766->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3766 = $tmp3766->next;
    }
    $fn3768 $tmp3767 = $tmp3766->methods[0];
    panda$core$Int64 $tmp3769 = $tmp3767(((panda$collections$CollectionView*) $tmp3765));
    panda$core$String* $tmp3770 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3764, ((panda$core$Object*) wrap_panda$core$Int64($tmp3769)));
    panda$core$String* $tmp3772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3770, &$s3771);
    charsType3763 = $tmp3772;
    panda$core$String* $tmp3773 = panda$core$String$convert$R$panda$core$String(chars3758);
    panda$core$String* $tmp3775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3773, &$s3774);
    panda$core$String* $tmp3776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3775, charsType3763);
    panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3776, &$s3777);
    (($fn3779) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3778);
    separator3780 = &$s3781;
    {
        panda$collections$ListView* $tmp3783 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp3784 = ((panda$collections$Iterable*) $tmp3783)->$class->itable;
        while ($tmp3784->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3784 = $tmp3784->next;
        }
        $fn3786 $tmp3785 = $tmp3784->methods[0];
        panda$collections$Iterator* $tmp3787 = $tmp3785(((panda$collections$Iterable*) $tmp3783));
        c$Iter3782 = $tmp3787;
        $l3788:;
        ITable* $tmp3790 = c$Iter3782->$class->itable;
        while ($tmp3790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3790 = $tmp3790->next;
        }
        $fn3792 $tmp3791 = $tmp3790->methods[0];
        panda$core$Bit $tmp3793 = $tmp3791(c$Iter3782);
        panda$core$Bit $tmp3794 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3793);
        if (!$tmp3794.value) goto $l3789;
        {
            ITable* $tmp3796 = c$Iter3782->$class->itable;
            while ($tmp3796->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3796 = $tmp3796->next;
            }
            $fn3798 $tmp3797 = $tmp3796->methods[1];
            panda$core$Object* $tmp3799 = $tmp3797(c$Iter3782);
            c3795 = ((panda$core$Char8$wrapper*) $tmp3799)->value;
            panda$core$String* $tmp3800 = panda$core$String$convert$R$panda$core$String(separator3780);
            panda$core$String* $tmp3802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3800, &$s3801);
            panda$core$Int8 $tmp3803 = panda$core$Char8$convert$R$panda$core$Int8(c3795);
            panda$core$String* $tmp3804 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3802, ((panda$core$Object*) wrap_panda$core$Int8($tmp3803)));
            panda$core$String* $tmp3806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3804, &$s3805);
            (($fn3807) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3806);
            separator3780 = &$s3808;
        }
        goto $l3788;
        $l3789:;
    }
    (($fn3810) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s3809);
    panda$core$Int64 $tmp3811 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3811;
    panda$core$String* $tmp3814 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3813, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3814, &$s3815);
    result3812 = $tmp3816;
    org$pandalanguage$pandac$Type* $tmp3818 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3819 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp3818);
    string3817 = $tmp3819;
    PANDA_ASSERT(((panda$core$Bit) { string3817 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3821 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string3817);
    cc3820 = $tmp3821;
    panda$core$String* $tmp3822 = panda$core$String$convert$R$panda$core$String(result3812);
    panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3822, &$s3823);
    panda$core$String* $tmp3826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3825, cc3820->type);
    panda$core$String* $tmp3828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3826, &$s3827);
    panda$core$String* $tmp3829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3828, cc3820->name);
    panda$core$String* $tmp3831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3829, &$s3830);
    panda$core$String* $tmp3832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3824, $tmp3831);
    panda$core$String* $tmp3834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3832, &$s3833);
    panda$core$String* $tmp3836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3835, charsType3763);
    panda$core$String* $tmp3838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3836, &$s3837);
    panda$core$String* $tmp3839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3838, chars3758);
    panda$core$String* $tmp3841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3839, &$s3840);
    panda$core$String* $tmp3842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3834, $tmp3841);
    panda$collections$ListView* $tmp3844 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3845 = ((panda$collections$CollectionView*) $tmp3844)->$class->itable;
    while ($tmp3845->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3845 = $tmp3845->next;
    }
    $fn3847 $tmp3846 = $tmp3845->methods[0];
    panda$core$Int64 $tmp3848 = $tmp3846(((panda$collections$CollectionView*) $tmp3844));
    panda$core$String* $tmp3849 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3843, ((panda$core$Object*) wrap_panda$core$Int64($tmp3848)));
    panda$core$String* $tmp3851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3849, &$s3850);
    panda$core$String* $tmp3852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3842, $tmp3851);
    panda$core$String* $tmp3854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3852, &$s3853);
    (($fn3855) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp3854);
    return result3812;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3856 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp3857 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3856, ((panda$core$Int64) { 0 }));
    if ($tmp3857.value) {
    {
        panda$core$Object* $tmp3858 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp3858)->selfRef;
    }
    }
    return &$s3859;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3860;
    panda$core$String* $tmp3861 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3860 = $tmp3861;
    panda$core$String* $tmp3862 = panda$core$String$convert$R$panda$core$String(result3860);
    panda$core$String* $tmp3864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3862, &$s3863);
    org$pandalanguage$pandac$Type* $tmp3865 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
    panda$core$String* $tmp3866 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3865);
    panda$core$String* $tmp3867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3864, $tmp3866);
    panda$core$String* $tmp3869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3867, &$s3868);
    panda$core$String* $tmp3870 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp3871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3869, $tmp3870);
    (($fn3872) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3871);
    return result3860;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value3876;
    org$pandalanguage$pandac$ClassDecl* cl3879;
    panda$core$String* resultValue3882;
    panda$core$String* field3887;
    panda$core$String* result3912;
    panda$core$Bit $tmp3873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp3873.value);
    panda$core$Int64 $tmp3874 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3874, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3875.value);
    panda$core$Object* $tmp3877 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3878 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3877), p_out);
    value3876 = $tmp3878;
    panda$core$Object* $tmp3880 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3881 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3880)->type);
    cl3879 = $tmp3881;
    panda$core$Bit $tmp3883 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3879);
    if ($tmp3883.value) {
    {
        panda$core$Object* $tmp3884 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3885 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3884)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3885.value) {
        {
            return &$s3886;
        }
        }
        panda$core$String* $tmp3888 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field3887 = $tmp3888;
        panda$core$String* $tmp3889 = panda$core$String$convert$R$panda$core$String(field3887);
        panda$core$String* $tmp3891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3889, &$s3890);
        panda$core$String* $tmp3892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3891, value3876);
        panda$core$String* $tmp3894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3892, &$s3893);
        (($fn3895) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3894);
        panda$core$String* $tmp3896 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3882 = $tmp3896;
        panda$core$String* $tmp3897 = panda$core$String$convert$R$panda$core$String(resultValue3882);
        panda$core$String* $tmp3899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3897, &$s3898);
        panda$core$String* $tmp3900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3899, field3887);
        panda$core$String* $tmp3902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3900, &$s3901);
        (($fn3903) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3902);
    }
    }
    else {
    {
        panda$core$String* $tmp3904 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3882 = $tmp3904;
        panda$core$String* $tmp3905 = panda$core$String$convert$R$panda$core$String(resultValue3882);
        panda$core$String* $tmp3907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3905, &$s3906);
        panda$core$String* $tmp3908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3907, value3876);
        panda$core$String* $tmp3910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3908, &$s3909);
        (($fn3911) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3910);
    }
    }
    panda$core$String* $tmp3913 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3912 = $tmp3913;
    panda$core$String* $tmp3914 = panda$core$String$convert$R$panda$core$String(result3912);
    panda$core$String* $tmp3916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3914, &$s3915);
    panda$core$String* $tmp3917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3916, resultValue3882);
    panda$core$String* $tmp3919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3917, &$s3918);
    (($fn3920) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3919);
    return result3912;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value3924;
    org$pandalanguage$pandac$ClassDecl* cl3927;
    panda$core$String* resultValue3930;
    panda$core$String* result3951;
    panda$core$Bit $tmp3921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp3921.value);
    panda$core$Int64 $tmp3922 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3922, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3923.value);
    panda$core$Object* $tmp3925 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3926 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3925), p_out);
    value3924 = $tmp3926;
    panda$core$Object* $tmp3928 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3929 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3928)->type);
    cl3927 = $tmp3929;
    panda$core$Bit $tmp3931 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3927);
    if ($tmp3931.value) {
    {
        panda$core$Object* $tmp3932 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3933 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3932)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3933.value) {
        {
            return &$s3934;
        }
        }
        panda$core$String* $tmp3935 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3930 = $tmp3935;
        panda$core$String* $tmp3936 = panda$core$String$convert$R$panda$core$String(resultValue3930);
        panda$core$String* $tmp3938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3936, &$s3937);
        panda$core$String* $tmp3939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3938, value3924);
        panda$core$String* $tmp3941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3939, &$s3940);
        (($fn3942) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3941);
    }
    }
    else {
    {
        panda$core$String* $tmp3943 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3930 = $tmp3943;
        panda$core$String* $tmp3944 = panda$core$String$convert$R$panda$core$String(resultValue3930);
        panda$core$String* $tmp3946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3944, &$s3945);
        panda$core$String* $tmp3947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3946, value3924);
        panda$core$String* $tmp3949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3947, &$s3948);
        (($fn3950) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3949);
    }
    }
    panda$core$String* $tmp3952 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3951 = $tmp3952;
    panda$core$String* $tmp3953 = panda$core$String$convert$R$panda$core$String(result3951);
    panda$core$String* $tmp3955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3953, &$s3954);
    panda$core$String* $tmp3956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3955, resultValue3930);
    panda$core$String* $tmp3958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3956, &$s3957);
    (($fn3959) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3958);
    return result3951;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3961;
    panda$core$Bit $tmp3960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp3960.value);
    panda$core$Object* $tmp3962 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3963 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp3962));
    cl3961 = $tmp3963;
    PANDA_ASSERT(((panda$core$Bit) { cl3961 != NULL }).value);
    panda$core$Bit $tmp3964 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3961);
    if ($tmp3964.value) {
    {
        panda$core$Object* $tmp3966 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3967 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3966));
        panda$core$String* $tmp3968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3965, $tmp3967);
        panda$core$String* $tmp3970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3968, &$s3969);
        return $tmp3970;
    }
    }
    else {
    {
        return &$s3971;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3975;
    panda$core$String* result3978;
    panda$core$Bit $tmp3972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp3972.value);
    panda$core$Int64 $tmp3973 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp3974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3973, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3974.value);
    panda$core$Object* $tmp3976 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3977 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3976), p_out);
    base3975 = $tmp3977;
    panda$core$String* $tmp3979 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3978 = $tmp3979;
    panda$core$Int64 $tmp3980 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp3980.value) {
        case 52:
        {
            panda$core$String* $tmp3981 = panda$core$String$convert$R$panda$core$String(result3978);
            panda$core$String* $tmp3983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3981, &$s3982);
            panda$core$String* $tmp3984 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp3985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3983, $tmp3984);
            panda$core$String* $tmp3987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3985, &$s3986);
            panda$core$String* $tmp3988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3987, base3975);
            panda$core$String* $tmp3990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3988, &$s3989);
            (($fn3991) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3990);
            return result3978;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp3992 = panda$core$String$convert$R$panda$core$String(result3978);
            panda$core$String* $tmp3994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3992, &$s3993);
            panda$core$String* $tmp3995 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp3996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3994, $tmp3995);
            panda$core$String* $tmp3998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3996, &$s3997);
            panda$core$String* $tmp3999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3998, base3975);
            panda$core$String* $tmp4001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3999, &$s4000);
            (($fn4002) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4001);
            return result3978;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4015;
    panda$core$String* result4018;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4003 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4003;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4004 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4004;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4005 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4005;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4006 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4006;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4007 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4007;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4008 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4008;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4009 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4009;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4010 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4010;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4011 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4011;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4012 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4012;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4013 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4013;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4014 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4014;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4016 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4017 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4016), p_out);
            value4015 = $tmp4017;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4015));
            return value4015;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4019 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4018 = ((panda$core$String*) $tmp4019);
            PANDA_ASSERT(((panda$core$Bit) { result4018 != NULL }).value);
            return result4018;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4020 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4020;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4021 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4021;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4022 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4022;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4023 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4023;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4024 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4025 = panda$core$String$convert$R$panda$core$String($tmp4024);
    panda$core$String* $tmp4027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4025, &$s4026);
    panda$core$String* $tmp4028 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4027, $tmp4028);
    panda$core$String* $tmp4031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4029, &$s4030);
    return $tmp4031;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4034;
    org$pandalanguage$pandac$IRNode* s4046;
    panda$core$Bit $tmp4032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4032.value);
    panda$core$Int64 $tmp4033 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4033;
    {
        ITable* $tmp4035 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4035->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4035 = $tmp4035->next;
        }
        $fn4037 $tmp4036 = $tmp4035->methods[0];
        panda$collections$Iterator* $tmp4038 = $tmp4036(((panda$collections$Iterable*) p_block->children));
        s$Iter4034 = $tmp4038;
        $l4039:;
        ITable* $tmp4041 = s$Iter4034->$class->itable;
        while ($tmp4041->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4041 = $tmp4041->next;
        }
        $fn4043 $tmp4042 = $tmp4041->methods[0];
        panda$core$Bit $tmp4044 = $tmp4042(s$Iter4034);
        panda$core$Bit $tmp4045 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4044);
        if (!$tmp4045.value) goto $l4040;
        {
            ITable* $tmp4047 = s$Iter4034->$class->itable;
            while ($tmp4047->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4047 = $tmp4047->next;
            }
            $fn4049 $tmp4048 = $tmp4047->methods[1];
            panda$core$Object* $tmp4050 = $tmp4048(s$Iter4034);
            s4046 = ((org$pandalanguage$pandac$IRNode*) $tmp4050);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4046, p_out);
        }
        goto $l4039;
        $l4040:;
    }
    panda$core$Int64 $tmp4051 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4051;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4052;
    panda$core$String* $match$1909_94053;
    panda$core$String* ptr4058;
    panda$core$String* arg4061;
    org$pandalanguage$pandac$Type* baseType4081;
    panda$core$String* base4085;
    panda$core$String* indexStruct4088;
    panda$core$String* index4091;
    panda$core$String* value4100;
    panda$core$String* ptr4104;
    panda$core$String* ptr4141;
    panda$core$String* cast4144;
    m4052 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1909_94053 = ((org$pandalanguage$pandac$Symbol*) m4052->value)->name;
        panda$core$Bit $tmp4055 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1909_94053, &$s4054);
        if ($tmp4055.value) {
        {
            panda$core$Int64 $tmp4056 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4056, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4057.value);
            panda$core$Object* $tmp4059 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4060 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4059), p_out);
            ptr4058 = $tmp4060;
            panda$core$Object* $tmp4062 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4063 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4062));
            panda$core$String* $tmp4064 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4063, p_out);
            arg4061 = $tmp4064;
            panda$core$String* $tmp4066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4065, arg4061);
            panda$core$String* $tmp4068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4066, &$s4067);
            panda$core$String* $tmp4069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4068, ptr4058);
            panda$core$String* $tmp4071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4069, &$s4070);
            (($fn4072) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4071);
        }
        }
        else {
        panda$core$Bit $tmp4074 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1909_94053, &$s4073);
        if ($tmp4074.value) {
        {
            panda$core$Int64 $tmp4075 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4075, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4076.value);
            panda$core$Object* $tmp4077 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4078 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4077));
            panda$core$Int64 $tmp4079 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4078->type->subtypes);
            panda$core$Bit $tmp4080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4079, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4080.value);
            panda$core$Object* $tmp4082 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4083 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4082));
            panda$core$Object* $tmp4084 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4083->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4081 = ((org$pandalanguage$pandac$Type*) $tmp4084);
            panda$core$Object* $tmp4086 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4087 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4086), p_out);
            base4085 = $tmp4087;
            panda$core$Object* $tmp4089 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4090 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4089), p_out);
            indexStruct4088 = $tmp4090;
            panda$core$String* $tmp4092 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4091 = $tmp4092;
            panda$core$String* $tmp4093 = panda$core$String$convert$R$panda$core$String(index4091);
            panda$core$String* $tmp4095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4093, &$s4094);
            panda$core$String* $tmp4096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4095, indexStruct4088);
            panda$core$String* $tmp4098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4096, &$s4097);
            (($fn4099) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4098);
            panda$core$Object* $tmp4101 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4102 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4101));
            panda$core$String* $tmp4103 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4102, p_out);
            value4100 = $tmp4103;
            panda$core$String* $tmp4105 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4104 = $tmp4105;
            panda$core$String* $tmp4106 = panda$core$String$convert$R$panda$core$String(ptr4104);
            panda$core$String* $tmp4108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4106, &$s4107);
            panda$core$String* $tmp4109 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4081);
            panda$core$String* $tmp4110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4108, $tmp4109);
            panda$core$String* $tmp4112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4110, &$s4111);
            panda$core$String* $tmp4113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4112, base4085);
            panda$core$String* $tmp4115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4113, &$s4114);
            panda$core$String* $tmp4117 = panda$core$String$convert$R$panda$core$String(&$s4116);
            panda$core$String* $tmp4119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4117, &$s4118);
            panda$core$String* $tmp4120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4119, index4091);
            panda$core$String* $tmp4122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4120, &$s4121);
            panda$core$String* $tmp4123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4115, $tmp4122);
            (($fn4124) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4123);
            panda$core$String* $tmp4126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4125, value4100);
            panda$core$String* $tmp4128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4126, &$s4127);
            panda$core$String* $tmp4129 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4081);
            panda$core$String* $tmp4130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4128, $tmp4129);
            panda$core$String* $tmp4132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4130, &$s4131);
            panda$core$String* $tmp4133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4132, ptr4104);
            panda$core$String* $tmp4135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4133, &$s4134);
            (($fn4136) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4135);
        }
        }
        else {
        panda$core$Bit $tmp4138 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1909_94053, &$s4137);
        if ($tmp4138.value) {
        {
            panda$core$Int64 $tmp4139 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4139, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4140.value);
            panda$core$Object* $tmp4142 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4143 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4142), p_out);
            ptr4141 = $tmp4143;
            panda$core$String* $tmp4145 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4144 = $tmp4145;
            panda$core$String* $tmp4146 = panda$core$String$convert$R$panda$core$String(cast4144);
            panda$core$String* $tmp4148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4146, &$s4147);
            panda$core$String* $tmp4149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4148, ptr4141);
            panda$core$String* $tmp4151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4149, &$s4150);
            (($fn4152) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4151);
            panda$core$String* $tmp4154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4153, cast4144);
            panda$core$String* $tmp4156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4154, &$s4155);
            (($fn4157) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4156);
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
    org$pandalanguage$pandac$MethodDecl* m4159;
    org$pandalanguage$pandac$Type* actualMethodType4162;
    panda$core$String* actualResultType4163;
    panda$core$Bit isSuper4164;
    panda$collections$Array* args4184;
    panda$core$Int64 offset4187;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4192;
    panda$core$String* arg4207;
    panda$core$String* refTarget4239;
    panda$core$String* methodRef4243;
    panda$core$String* separator4245;
    panda$core$String* indirectVar4249;
    panda$core$String* resultType4252;
    panda$collections$Iterator* a$Iter4294;
    panda$core$String* a4306;
    panda$core$Bit $tmp4158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4158.value);
    m4159 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4161 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4159->owner)->name, &$s4160);
    if ($tmp4161.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4159->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4159);
    }
    }
    panda$core$Int64 $tmp4166 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4167 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4166, ((panda$core$Int64) { 1 }));
    bool $tmp4165 = $tmp4167.value;
    if (!$tmp4165) goto $l4168;
    panda$core$Object* $tmp4169 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4169)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4165 = $tmp4170.value;
    $l4168:;
    panda$core$Bit $tmp4171 = { $tmp4165 };
    isSuper4164 = $tmp4171;
    panda$core$Bit $tmp4173 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4164);
    bool $tmp4172 = $tmp4173.value;
    if (!$tmp4172) goto $l4174;
    panda$core$Bit $tmp4175 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4159);
    $tmp4172 = $tmp4175.value;
    $l4174:;
    panda$core$Bit $tmp4176 = { $tmp4172 };
    if ($tmp4176.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4177 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4159);
        actualMethodType4162 = $tmp4177;
        panda$core$Int64 $tmp4178 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4162->subtypes);
        panda$core$Int64 $tmp4179 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4178, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4180 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4162->subtypes, $tmp4179);
        panda$core$String* $tmp4181 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4180));
        actualResultType4163 = $tmp4181;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4182 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4159);
        actualMethodType4162 = $tmp4182;
        panda$core$String* $tmp4183 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4163 = $tmp4183;
    }
    }
    panda$collections$Array* $tmp4185 = (panda$collections$Array*) malloc(40);
    $tmp4185->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4185->refCount.value = 1;
    panda$collections$Array$init($tmp4185);
    args4184 = $tmp4185;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4184, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4188 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4189 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4162->subtypes);
    panda$core$Int64 $tmp4190 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4188, $tmp4189);
    panda$core$Int64 $tmp4191 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4190, ((panda$core$Int64) { 1 }));
    offset4187 = $tmp4191;
    panda$core$Int64 $tmp4193 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4192, ((panda$core$Int64) { 0 }), $tmp4193, ((panda$core$Bit) { false }));
    int64_t $tmp4195 = $tmp4192.min.value;
    panda$core$Int64 i4194 = { $tmp4195 };
    int64_t $tmp4197 = $tmp4192.max.value;
    bool $tmp4198 = $tmp4192.inclusive.value;
    if ($tmp4198) goto $l4205; else goto $l4206;
    $l4205:;
    if ($tmp4195 <= $tmp4197) goto $l4199; else goto $l4201;
    $l4206:;
    if ($tmp4195 < $tmp4197) goto $l4199; else goto $l4201;
    $l4199:;
    {
        panda$core$Object* $tmp4208 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4194);
        panda$core$String* $tmp4209 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4208), p_out);
        arg4207 = $tmp4209;
        panda$core$Bit $tmp4211 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4194, offset4187);
        bool $tmp4210 = $tmp4211.value;
        if (!$tmp4210) goto $l4212;
        panda$core$Int64 $tmp4213 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4194, offset4187);
        panda$core$Object* $tmp4214 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4162->subtypes, $tmp4213);
        panda$core$Object* $tmp4215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4194);
        panda$core$Bit $tmp4216 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4214), ((org$pandalanguage$pandac$IRNode*) $tmp4215)->type);
        $tmp4210 = $tmp4216.value;
        $l4212:;
        panda$core$Bit $tmp4217 = { $tmp4210 };
        if ($tmp4217.value) {
        {
            panda$core$Int64 $tmp4218 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4194, offset4187);
            panda$core$Object* $tmp4219 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4162->subtypes, $tmp4218);
            panda$core$String* $tmp4220 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4219));
            panda$core$String* $tmp4222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4220, &$s4221);
            panda$core$Object* $tmp4223 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4194);
            panda$core$Int64 $tmp4224 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4194, offset4187);
            panda$core$Object* $tmp4225 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4162->subtypes, $tmp4224);
            panda$core$String* $tmp4226 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg4207, ((org$pandalanguage$pandac$IRNode*) $tmp4223)->type, ((org$pandalanguage$pandac$Type*) $tmp4225), p_out);
            panda$core$String* $tmp4227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4222, $tmp4226);
            arg4207 = $tmp4227;
        }
        }
        else {
        {
            panda$core$Object* $tmp4228 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4194);
            panda$core$String* $tmp4229 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4228)->type);
            panda$core$String* $tmp4231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4229, &$s4230);
            panda$core$String* $tmp4232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4231, arg4207);
            arg4207 = $tmp4232;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4184, ((panda$core$Object*) arg4207));
    }
    $l4202:;
    int64_t $tmp4234 = $tmp4197 - i4194.value;
    if ($tmp4198) goto $l4235; else goto $l4236;
    $l4235:;
    if ($tmp4234 >= 1) goto $l4233; else goto $l4201;
    $l4236:;
    if ($tmp4234 > 1) goto $l4233; else goto $l4201;
    $l4233:;
    i4194.value += 1;
    goto $l4199;
    $l4201:;
    panda$core$Int64 $tmp4240 = panda$collections$Array$get_count$R$panda$core$Int64(args4184);
    panda$core$Bit $tmp4241 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4240, ((panda$core$Int64) { 0 }));
    if ($tmp4241.value) {
    {
        panda$core$Object* $tmp4242 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4184, ((panda$core$Int64) { 0 }));
        refTarget4239 = ((panda$core$String*) $tmp4242);
    }
    }
    else {
    {
        refTarget4239 = NULL;
    }
    }
    panda$core$String* $tmp4244 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget4239, m4159, isSuper4164, p_out);
    methodRef4243 = $tmp4244;
    separator4245 = &$s4246;
    panda$core$Bit $tmp4247 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4159);
    if ($tmp4247.value) {
    {
        panda$core$Int64 $tmp4248 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4248;
        panda$core$String* $tmp4251 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4250, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4249 = $tmp4251;
        panda$core$String* $tmp4253 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4252 = $tmp4253;
        panda$core$String* $tmp4254 = panda$core$String$convert$R$panda$core$String(indirectVar4249);
        panda$core$String* $tmp4256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4254, &$s4255);
        panda$core$String* $tmp4257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4256, resultType4252);
        panda$core$String* $tmp4259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4257, &$s4258);
        (($fn4260) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4259);
        panda$core$String* $tmp4262 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4159);
        panda$core$String* $tmp4263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4261, $tmp4262);
        panda$core$String* $tmp4265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4263, &$s4264);
        panda$core$String* $tmp4266 = panda$core$String$convert$R$panda$core$String(methodRef4243);
        panda$core$String* $tmp4268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4266, &$s4267);
        panda$core$String* $tmp4269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4268, resultType4252);
        panda$core$String* $tmp4271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4269, &$s4270);
        panda$core$String* $tmp4272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4271, indirectVar4249);
        panda$core$String* $tmp4274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4272, &$s4273);
        panda$core$String* $tmp4275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4265, $tmp4274);
        (($fn4276) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4275);
        separator4245 = &$s4277;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4278 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4279 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4278);
        if ($tmp4279.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4281 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4159);
        panda$core$String* $tmp4282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4280, $tmp4281);
        panda$core$String* $tmp4284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4282, &$s4283);
        panda$core$String* $tmp4285 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4284, $tmp4285);
        panda$core$String* $tmp4288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4286, &$s4287);
        panda$core$String* $tmp4289 = panda$core$String$convert$R$panda$core$String(methodRef4243);
        panda$core$String* $tmp4291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4289, &$s4290);
        panda$core$String* $tmp4292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4288, $tmp4291);
        (($fn4293) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4292);
    }
    }
    {
        ITable* $tmp4295 = ((panda$collections$Iterable*) args4184)->$class->itable;
        while ($tmp4295->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4295 = $tmp4295->next;
        }
        $fn4297 $tmp4296 = $tmp4295->methods[0];
        panda$collections$Iterator* $tmp4298 = $tmp4296(((panda$collections$Iterable*) args4184));
        a$Iter4294 = $tmp4298;
        $l4299:;
        ITable* $tmp4301 = a$Iter4294->$class->itable;
        while ($tmp4301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4301 = $tmp4301->next;
        }
        $fn4303 $tmp4302 = $tmp4301->methods[0];
        panda$core$Bit $tmp4304 = $tmp4302(a$Iter4294);
        panda$core$Bit $tmp4305 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4304);
        if (!$tmp4305.value) goto $l4300;
        {
            ITable* $tmp4307 = a$Iter4294->$class->itable;
            while ($tmp4307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4307 = $tmp4307->next;
            }
            $fn4309 $tmp4308 = $tmp4307->methods[1];
            panda$core$Object* $tmp4310 = $tmp4308(a$Iter4294);
            a4306 = ((panda$core$String*) $tmp4310);
            (($fn4311) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator4245);
            (($fn4312) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a4306);
            separator4245 = &$s4313;
        }
        goto $l4299;
        $l4300:;
    }
    (($fn4315) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4314);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test4327;
    panda$core$String* testBit4330;
    panda$core$String* ifTrue4339;
    panda$core$String* ifFalse4341;
    panda$core$String* end4355;
    panda$core$Bit $tmp4316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4316.value);
    panda$core$Int64 $tmp4318 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4318, ((panda$core$Int64) { 2 }));
    bool $tmp4317 = $tmp4319.value;
    if ($tmp4317) goto $l4320;
    panda$core$Int64 $tmp4321 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, ((panda$core$Int64) { 3 }));
    $tmp4317 = $tmp4322.value;
    $l4320:;
    panda$core$Bit $tmp4323 = { $tmp4317 };
    PANDA_ASSERT($tmp4323.value);
    panda$core$Object* $tmp4324 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4325 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4326 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4324)->type, $tmp4325);
    PANDA_ASSERT($tmp4326.value);
    panda$core$Object* $tmp4328 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4329 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4328), p_out);
    test4327 = $tmp4329;
    panda$core$String* $tmp4331 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4330 = $tmp4331;
    panda$core$String* $tmp4332 = panda$core$String$convert$R$panda$core$String(testBit4330);
    panda$core$String* $tmp4334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4332, &$s4333);
    panda$core$String* $tmp4335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4334, test4327);
    panda$core$String* $tmp4337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4335, &$s4336);
    (($fn4338) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4337);
    panda$core$String* $tmp4340 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4339 = $tmp4340;
    panda$core$String* $tmp4342 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4341 = $tmp4342;
    panda$core$String* $tmp4344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4343, testBit4330);
    panda$core$String* $tmp4346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4344, &$s4345);
    panda$core$String* $tmp4347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4346, ifTrue4339);
    panda$core$String* $tmp4349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4347, &$s4348);
    panda$core$String* $tmp4350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4349, ifFalse4341);
    panda$core$String* $tmp4352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4350, &$s4351);
    (($fn4353) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4352);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue4339, p_out);
    panda$core$Object* $tmp4354 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4354), p_out);
    panda$core$Int64 $tmp4356 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4356, ((panda$core$Int64) { 3 }));
    if ($tmp4357.value) {
    {
        panda$core$String* $tmp4358 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4355 = $tmp4358;
    }
    }
    else {
    {
        end4355 = ifFalse4341;
    }
    }
    panda$core$Object* $tmp4359 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4360 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4359));
    panda$core$Bit $tmp4361 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4360);
    if ($tmp4361.value) {
    {
        panda$core$String* $tmp4363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4362, end4355);
        panda$core$String* $tmp4365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4363, &$s4364);
        (($fn4366) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4365);
    }
    }
    panda$core$Int64 $tmp4367 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4367, ((panda$core$Int64) { 3 }));
    if ($tmp4368.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse4341, p_out);
        panda$core$Object* $tmp4369 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4369), p_out);
        panda$core$Object* $tmp4370 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4371 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4370));
        panda$core$Bit $tmp4372 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4371);
        if ($tmp4372.value) {
        {
            panda$core$String* $tmp4374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4373, end4355);
            panda$core$String* $tmp4376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4374, &$s4375);
            (($fn4377) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4376);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end4355, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4381;
    panda$core$String* range4392;
    org$pandalanguage$pandac$IRNode* block4395;
    org$pandalanguage$pandac$Type* t4397;
    panda$core$String* llt4400;
    panda$core$String* indexType4402;
    org$pandalanguage$pandac$ClassDecl* cl4408;
    panda$core$String* numberType4416;
    panda$core$String* index4424;
    panda$core$String* start4433;
    panda$core$String* indexValuePtr4442;
    panda$core$String* end4473;
    panda$core$String* inclusive4482;
    panda$core$String* loopStart4491;
    panda$core$String* loopBody4493;
    panda$core$String* loopEnd4495;
    panda$core$String* loopTest4497;
    panda$core$String* forwardEntry4501;
    panda$core$String* backwardEntry4503;
    panda$core$String* signPrefix4505;
    panda$core$String* forwardEntryInclusive4517;
    panda$core$String* forwardEntryExclusive4519;
    panda$core$String* forwardEntryInclusiveTest4534;
    panda$core$String* forwardEntryExclusiveTest4564;
    panda$core$String* indexValue4594;
    panda$core$String* loopInc4616;
    panda$core$String* forwardDelta4618;
    panda$core$String* forwardInclusiveLabel4633;
    panda$core$String* forwardExclusiveLabel4635;
    panda$core$String* forwardInclusiveTest4646;
    panda$core$String* forwardExclusiveTest4669;
    panda$core$String* inc4692;
    panda$core$String* incStruct4704;
    panda$core$Bit $tmp4378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4378.value);
    panda$core$Int64 $tmp4379 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4379, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4380.value);
    panda$core$Object* $tmp4382 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4381 = ((org$pandalanguage$pandac$IRNode*) $tmp4382);
    panda$core$Object* $tmp4383 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4383)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4384.value);
    panda$core$Object* $tmp4385 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4386 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4385)->type->subtypes);
    panda$core$Bit $tmp4387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4386, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4387.value);
    panda$core$Object* $tmp4388 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4388)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4391 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4389))->name, &$s4390);
    PANDA_ASSERT($tmp4391.value);
    panda$core$Object* $tmp4393 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4394 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4393), p_out);
    range4392 = $tmp4394;
    panda$core$Object* $tmp4396 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4395 = ((org$pandalanguage$pandac$IRNode*) $tmp4396);
    panda$core$Object* $tmp4398 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4399 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4398)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4397 = ((org$pandalanguage$pandac$Type*) $tmp4399);
    panda$core$String* $tmp4401 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4397);
    llt4400 = $tmp4401;
    panda$core$Bit $tmp4403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4397->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4403.value) {
    {
        panda$core$Int64 $tmp4404 = panda$collections$Array$get_count$R$panda$core$Int64(t4397->subtypes);
        panda$core$Bit $tmp4405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4404, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4405.value);
        panda$core$Object* $tmp4406 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4397->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4407 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4406));
        indexType4402 = $tmp4407;
    }
    }
    else {
    {
        indexType4402 = llt4400;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4409 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4397);
    cl4408 = $tmp4409;
    PANDA_ASSERT(((panda$core$Bit) { cl4408 != NULL }).value);
    panda$collections$ListView* $tmp4410 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4408);
    ITable* $tmp4411 = ((panda$collections$CollectionView*) $tmp4410)->$class->itable;
    while ($tmp4411->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4411 = $tmp4411->next;
    }
    $fn4413 $tmp4412 = $tmp4411->methods[0];
    panda$core$Int64 $tmp4414 = $tmp4412(((panda$collections$CollectionView*) $tmp4410));
    panda$core$Bit $tmp4415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4414, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4415.value);
    panda$collections$ListView* $tmp4417 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4408);
    ITable* $tmp4418 = $tmp4417->$class->itable;
    while ($tmp4418->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4418 = $tmp4418->next;
    }
    $fn4420 $tmp4419 = $tmp4418->methods[0];
    panda$core$Object* $tmp4421 = $tmp4419($tmp4417, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4422 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4421)->type);
    numberType4416 = $tmp4422;
    panda$core$Bit $tmp4423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4381->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4423.value);
    panda$core$String* $tmp4425 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4381->payload));
    index4424 = $tmp4425;
    panda$core$String* $tmp4426 = panda$core$String$convert$R$panda$core$String(index4424);
    panda$core$String* $tmp4428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4426, &$s4427);
    panda$core$String* $tmp4429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4428, indexType4402);
    panda$core$String* $tmp4431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4429, &$s4430);
    (($fn4432) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4431);
    panda$core$String* $tmp4434 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4433 = $tmp4434;
    panda$core$String* $tmp4435 = panda$core$String$convert$R$panda$core$String(start4433);
    panda$core$String* $tmp4437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4435, &$s4436);
    panda$core$String* $tmp4438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4437, range4392);
    panda$core$String* $tmp4440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4438, &$s4439);
    (($fn4441) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4440);
    panda$core$String* $tmp4443 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4442 = $tmp4443;
    panda$core$String* $tmp4444 = panda$core$String$convert$R$panda$core$String(indexValuePtr4442);
    panda$core$String* $tmp4446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4444, &$s4445);
    panda$core$String* $tmp4447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4446, indexType4402);
    panda$core$String* $tmp4449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4447, &$s4448);
    panda$core$String* $tmp4450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4449, indexType4402);
    panda$core$String* $tmp4452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4450, &$s4451);
    panda$core$String* $tmp4453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4452, index4424);
    panda$core$String* $tmp4455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4453, &$s4454);
    panda$core$String* $tmp4457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4455, &$s4456);
    (($fn4458) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4457);
    panda$core$String* $tmp4460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4459, numberType4416);
    panda$core$String* $tmp4462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4460, &$s4461);
    panda$core$String* $tmp4463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4462, start4433);
    panda$core$String* $tmp4465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4463, &$s4464);
    panda$core$String* $tmp4466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4465, numberType4416);
    panda$core$String* $tmp4468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4466, &$s4467);
    panda$core$String* $tmp4469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4468, indexValuePtr4442);
    panda$core$String* $tmp4471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4469, &$s4470);
    (($fn4472) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4471);
    panda$core$String* $tmp4474 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4473 = $tmp4474;
    panda$core$String* $tmp4475 = panda$core$String$convert$R$panda$core$String(end4473);
    panda$core$String* $tmp4477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4475, &$s4476);
    panda$core$String* $tmp4478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4477, range4392);
    panda$core$String* $tmp4480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4478, &$s4479);
    (($fn4481) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4480);
    panda$core$String* $tmp4483 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4482 = $tmp4483;
    panda$core$String* $tmp4484 = panda$core$String$convert$R$panda$core$String(inclusive4482);
    panda$core$String* $tmp4486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4484, &$s4485);
    panda$core$String* $tmp4487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4486, range4392);
    panda$core$String* $tmp4489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4487, &$s4488);
    (($fn4490) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4489);
    panda$core$String* $tmp4492 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4491 = $tmp4492;
    panda$core$String* $tmp4494 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4493 = $tmp4494;
    panda$core$String* $tmp4496 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4495 = $tmp4496;
    panda$core$String* $tmp4498 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4497 = $tmp4498;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4499 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4499->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4499->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4499, ((panda$core$String*) p_f->payload), loopEnd4495, loopTest4497);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4499));
    panda$core$String* $tmp4502 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4501 = $tmp4502;
    panda$core$String* $tmp4504 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4503 = $tmp4504;
    panda$core$Bit $tmp4507 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4397)->name, &$s4506);
    if ($tmp4507.value) {
    {
        signPrefix4505 = &$s4508;
    }
    }
    else {
    {
        panda$core$Bit $tmp4511 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4397)->name, &$s4510);
        bool $tmp4509 = $tmp4511.value;
        if ($tmp4509) goto $l4512;
        panda$core$Bit $tmp4514 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4397)->name, &$s4513);
        $tmp4509 = $tmp4514.value;
        $l4512:;
        panda$core$Bit $tmp4515 = { $tmp4509 };
        PANDA_ASSERT($tmp4515.value);
        signPrefix4505 = &$s4516;
    }
    }
    panda$core$String* $tmp4518 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4517 = $tmp4518;
    panda$core$String* $tmp4520 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4519 = $tmp4520;
    panda$core$String* $tmp4522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4521, inclusive4482);
    panda$core$String* $tmp4524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4522, &$s4523);
    panda$core$String* $tmp4525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4524, forwardEntryInclusive4517);
    panda$core$String* $tmp4527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4525, &$s4526);
    panda$core$String* $tmp4529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4528, forwardEntryExclusive4519);
    panda$core$String* $tmp4531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4529, &$s4530);
    panda$core$String* $tmp4532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4527, $tmp4531);
    (($fn4533) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4532);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4517, p_out);
    panda$core$String* $tmp4535 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4534 = $tmp4535;
    panda$core$String* $tmp4536 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4534);
    panda$core$String* $tmp4538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4536, &$s4537);
    panda$core$String* $tmp4539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4538, signPrefix4505);
    panda$core$String* $tmp4541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4539, &$s4540);
    panda$core$String* $tmp4542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4541, numberType4416);
    panda$core$String* $tmp4544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4542, &$s4543);
    panda$core$String* $tmp4545 = panda$core$String$convert$R$panda$core$String(start4433);
    panda$core$String* $tmp4547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4545, &$s4546);
    panda$core$String* $tmp4548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4547, end4473);
    panda$core$String* $tmp4550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4548, &$s4549);
    panda$core$String* $tmp4551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4544, $tmp4550);
    (($fn4552) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4551);
    panda$core$String* $tmp4554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4553, forwardEntryInclusiveTest4534);
    panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4554, &$s4555);
    panda$core$String* $tmp4557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, loopStart4491);
    panda$core$String* $tmp4559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4557, &$s4558);
    panda$core$String* $tmp4560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4559, loopEnd4495);
    panda$core$String* $tmp4562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4560, &$s4561);
    (($fn4563) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4562);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4519, p_out);
    panda$core$String* $tmp4565 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4564 = $tmp4565;
    panda$core$String* $tmp4566 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4564);
    panda$core$String* $tmp4568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4566, &$s4567);
    panda$core$String* $tmp4569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4568, signPrefix4505);
    panda$core$String* $tmp4571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4569, &$s4570);
    panda$core$String* $tmp4572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4571, numberType4416);
    panda$core$String* $tmp4574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4572, &$s4573);
    panda$core$String* $tmp4575 = panda$core$String$convert$R$panda$core$String(start4433);
    panda$core$String* $tmp4577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4575, &$s4576);
    panda$core$String* $tmp4578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4577, end4473);
    panda$core$String* $tmp4580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4578, &$s4579);
    panda$core$String* $tmp4581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4574, $tmp4580);
    (($fn4582) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4581);
    panda$core$String* $tmp4584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4583, forwardEntryExclusiveTest4564);
    panda$core$String* $tmp4586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4584, &$s4585);
    panda$core$String* $tmp4587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4586, loopStart4491);
    panda$core$String* $tmp4589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4587, &$s4588);
    panda$core$String* $tmp4590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4589, loopEnd4495);
    panda$core$String* $tmp4592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4590, &$s4591);
    (($fn4593) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4592);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4491, p_out);
    panda$core$String* $tmp4595 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4594 = $tmp4595;
    panda$core$String* $tmp4596 = panda$core$String$convert$R$panda$core$String(indexValue4594);
    panda$core$String* $tmp4598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4596, &$s4597);
    panda$core$String* $tmp4599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4598, numberType4416);
    panda$core$String* $tmp4601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4599, &$s4600);
    panda$core$String* $tmp4602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4601, numberType4416);
    panda$core$String* $tmp4604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4602, &$s4603);
    panda$core$String* $tmp4605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4604, indexValuePtr4442);
    panda$core$String* $tmp4607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4605, &$s4606);
    (($fn4608) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4607);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4395, p_out);
    panda$core$Bit $tmp4609 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4395);
    panda$core$Bit $tmp4610 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4609);
    if ($tmp4610.value) {
    {
        panda$core$String* $tmp4612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4611, loopTest4497);
        panda$core$String* $tmp4614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4612, &$s4613);
        (($fn4615) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4614);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4497, p_out);
    panda$core$String* $tmp4617 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc4616 = $tmp4617;
    panda$core$String* $tmp4619 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta4618 = $tmp4619;
    panda$core$String* $tmp4620 = panda$core$String$convert$R$panda$core$String(forwardDelta4618);
    panda$core$String* $tmp4622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4620, &$s4621);
    panda$core$String* $tmp4623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4622, numberType4416);
    panda$core$String* $tmp4625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4623, &$s4624);
    panda$core$String* $tmp4626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4625, end4473);
    panda$core$String* $tmp4628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4626, &$s4627);
    panda$core$String* $tmp4629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4628, indexValue4594);
    panda$core$String* $tmp4631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4629, &$s4630);
    (($fn4632) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4631);
    panda$core$String* $tmp4634 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel4633 = $tmp4634;
    panda$core$String* $tmp4636 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel4635 = $tmp4636;
    panda$core$String* $tmp4638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4637, inclusive4482);
    panda$core$String* $tmp4640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4638, &$s4639);
    panda$core$String* $tmp4641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4640, forwardInclusiveLabel4633);
    panda$core$String* $tmp4643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4641, &$s4642);
    panda$core$String* $tmp4644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4643, forwardExclusiveLabel4635);
    (($fn4645) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4644);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel4633, p_out);
    panda$core$String* $tmp4647 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest4646 = $tmp4647;
    panda$core$String* $tmp4648 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest4646);
    panda$core$String* $tmp4650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4648, &$s4649);
    panda$core$String* $tmp4651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4650, numberType4416);
    panda$core$String* $tmp4653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4651, &$s4652);
    panda$core$String* $tmp4654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4653, forwardDelta4618);
    panda$core$String* $tmp4656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4654, &$s4655);
    (($fn4657) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4656);
    panda$core$String* $tmp4659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4658, forwardInclusiveTest4646);
    panda$core$String* $tmp4661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4659, &$s4660);
    panda$core$String* $tmp4662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4661, loopInc4616);
    panda$core$String* $tmp4664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4662, &$s4663);
    panda$core$String* $tmp4665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4664, loopEnd4495);
    panda$core$String* $tmp4667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4665, &$s4666);
    (($fn4668) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4667);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel4635, p_out);
    panda$core$String* $tmp4670 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest4669 = $tmp4670;
    panda$core$String* $tmp4671 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest4669);
    panda$core$String* $tmp4673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4671, &$s4672);
    panda$core$String* $tmp4674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4673, numberType4416);
    panda$core$String* $tmp4676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4674, &$s4675);
    panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4676, forwardDelta4618);
    panda$core$String* $tmp4679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4677, &$s4678);
    (($fn4680) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4679);
    panda$core$String* $tmp4682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4681, forwardExclusiveTest4669);
    panda$core$String* $tmp4684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4682, &$s4683);
    panda$core$String* $tmp4685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4684, loopInc4616);
    panda$core$String* $tmp4687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4685, &$s4686);
    panda$core$String* $tmp4688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4687, loopEnd4495);
    panda$core$String* $tmp4690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4688, &$s4689);
    (($fn4691) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4690);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc4616, p_out);
    panda$core$String* $tmp4693 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc4692 = $tmp4693;
    panda$core$String* $tmp4694 = panda$core$String$convert$R$panda$core$String(inc4692);
    panda$core$String* $tmp4696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4694, &$s4695);
    panda$core$String* $tmp4697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4696, numberType4416);
    panda$core$String* $tmp4699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4697, &$s4698);
    panda$core$String* $tmp4700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4699, indexValue4594);
    panda$core$String* $tmp4702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4700, &$s4701);
    (($fn4703) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4702);
    panda$core$String* $tmp4705 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct4704 = $tmp4705;
    panda$core$String* $tmp4706 = panda$core$String$convert$R$panda$core$String(incStruct4704);
    panda$core$String* $tmp4708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4706, &$s4707);
    panda$core$String* $tmp4709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4708, indexType4402);
    panda$core$String* $tmp4711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4709, &$s4710);
    panda$core$String* $tmp4712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4711, numberType4416);
    panda$core$String* $tmp4714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4712, &$s4713);
    (($fn4715) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4714);
    panda$core$String* $tmp4717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4716, numberType4416);
    panda$core$String* $tmp4719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4717, &$s4718);
    panda$core$String* $tmp4720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4719, inc4692);
    panda$core$String* $tmp4722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4720, &$s4721);
    (($fn4723) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4722);
    panda$core$String* $tmp4725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4724, indexType4402);
    panda$core$String* $tmp4727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4725, &$s4726);
    panda$core$String* $tmp4728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4727, incStruct4704);
    panda$core$String* $tmp4730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4728, &$s4729);
    panda$core$String* $tmp4731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4730, indexType4402);
    panda$core$String* $tmp4733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4731, &$s4732);
    panda$core$String* $tmp4734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4733, index4424);
    panda$core$String* $tmp4736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4734, &$s4735);
    (($fn4737) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4736);
    panda$core$String* $tmp4739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4738, loopStart4491);
    panda$core$String* $tmp4741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4739, &$s4740);
    (($fn4742) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4741);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4495, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4746;
    panda$core$String* range4757;
    org$pandalanguage$pandac$IRNode* block4760;
    org$pandalanguage$pandac$Type* t4762;
    panda$core$String* llt4765;
    panda$core$String* indexType4767;
    org$pandalanguage$pandac$ClassDecl* cl4773;
    panda$core$String* numberType4781;
    panda$core$String* index4789;
    panda$core$String* start4798;
    panda$core$String* indexValuePtr4807;
    panda$core$String* end4838;
    panda$core$String* rawStep4847;
    panda$core$String* step4856;
    panda$core$String* inclusive4870;
    panda$core$String* loopStart4879;
    panda$core$String* loopBody4881;
    panda$core$String* loopEnd4883;
    panda$core$String* loopTest4885;
    panda$core$String* forwardEntry4889;
    panda$core$String* backwardEntry4891;
    panda$core$String* signPrefix4893;
    panda$core$String* direction4905;
    panda$core$String* forwardEntryInclusive4931;
    panda$core$String* forwardEntryExclusive4933;
    panda$core$String* forwardEntryInclusiveTest4948;
    panda$core$String* forwardEntryExclusiveTest4978;
    panda$core$String* backwardEntryInclusive5008;
    panda$core$String* backwardEntryExclusive5010;
    panda$core$String* backwardEntryInclusiveTest5025;
    panda$core$String* backwardEntryExclusiveTest5055;
    panda$core$String* indexValue5085;
    panda$core$String* loopInc5107;
    panda$core$String* forwardLabel5109;
    panda$core$String* backwardLabel5111;
    panda$core$String* forwardDelta5124;
    panda$core$String* forwardInclusiveLabel5139;
    panda$core$String* forwardExclusiveLabel5141;
    panda$core$String* forwardInclusiveTest5152;
    panda$core$String* forwardExclusiveTest5178;
    panda$core$String* backwardDelta5204;
    panda$core$String* negStep5219;
    panda$core$String* backwardInclusiveLabel5231;
    panda$core$String* backwardExclusiveLabel5233;
    panda$core$String* backwardInclusiveTest5244;
    panda$core$String* backwardExclusiveTest5268;
    panda$core$String* inc5292;
    panda$core$String* incStruct5307;
    panda$core$Bit $tmp4743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4743.value);
    panda$core$Int64 $tmp4744 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4744, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4745.value);
    panda$core$Object* $tmp4747 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4746 = ((org$pandalanguage$pandac$IRNode*) $tmp4747);
    panda$core$Object* $tmp4748 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4748)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4749.value);
    panda$core$Object* $tmp4750 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4751 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4750)->type->subtypes);
    panda$core$Bit $tmp4752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4751, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4752.value);
    panda$core$Object* $tmp4753 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4754 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4753)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4756 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4754))->name, &$s4755);
    PANDA_ASSERT($tmp4756.value);
    panda$core$Object* $tmp4758 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4759 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4758), p_out);
    range4757 = $tmp4759;
    panda$core$Object* $tmp4761 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4760 = ((org$pandalanguage$pandac$IRNode*) $tmp4761);
    panda$core$Object* $tmp4763 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4764 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4763)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4762 = ((org$pandalanguage$pandac$Type*) $tmp4764);
    panda$core$String* $tmp4766 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4762);
    llt4765 = $tmp4766;
    panda$core$Bit $tmp4768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4762->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4768.value) {
    {
        panda$core$Int64 $tmp4769 = panda$collections$Array$get_count$R$panda$core$Int64(t4762->subtypes);
        panda$core$Bit $tmp4770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4769, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4770.value);
        panda$core$Object* $tmp4771 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4762->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4772 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4771));
        indexType4767 = $tmp4772;
    }
    }
    else {
    {
        indexType4767 = llt4765;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4774 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4762);
    cl4773 = $tmp4774;
    PANDA_ASSERT(((panda$core$Bit) { cl4773 != NULL }).value);
    panda$collections$ListView* $tmp4775 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4773);
    ITable* $tmp4776 = ((panda$collections$CollectionView*) $tmp4775)->$class->itable;
    while ($tmp4776->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4776 = $tmp4776->next;
    }
    $fn4778 $tmp4777 = $tmp4776->methods[0];
    panda$core$Int64 $tmp4779 = $tmp4777(((panda$collections$CollectionView*) $tmp4775));
    panda$core$Bit $tmp4780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4779, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4780.value);
    panda$collections$ListView* $tmp4782 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4773);
    ITable* $tmp4783 = $tmp4782->$class->itable;
    while ($tmp4783->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4783 = $tmp4783->next;
    }
    $fn4785 $tmp4784 = $tmp4783->methods[0];
    panda$core$Object* $tmp4786 = $tmp4784($tmp4782, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4787 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4786)->type);
    numberType4781 = $tmp4787;
    panda$core$Bit $tmp4788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4746->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4788.value);
    panda$core$String* $tmp4790 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4746->payload));
    index4789 = $tmp4790;
    panda$core$String* $tmp4791 = panda$core$String$convert$R$panda$core$String(index4789);
    panda$core$String* $tmp4793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4791, &$s4792);
    panda$core$String* $tmp4794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4793, indexType4767);
    panda$core$String* $tmp4796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4794, &$s4795);
    (($fn4797) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4796);
    panda$core$String* $tmp4799 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4798 = $tmp4799;
    panda$core$String* $tmp4800 = panda$core$String$convert$R$panda$core$String(start4798);
    panda$core$String* $tmp4802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4800, &$s4801);
    panda$core$String* $tmp4803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4802, range4757);
    panda$core$String* $tmp4805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4803, &$s4804);
    (($fn4806) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4805);
    panda$core$String* $tmp4808 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4807 = $tmp4808;
    panda$core$String* $tmp4809 = panda$core$String$convert$R$panda$core$String(indexValuePtr4807);
    panda$core$String* $tmp4811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4809, &$s4810);
    panda$core$String* $tmp4812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4811, indexType4767);
    panda$core$String* $tmp4814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4812, &$s4813);
    panda$core$String* $tmp4815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, indexType4767);
    panda$core$String* $tmp4817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4815, &$s4816);
    panda$core$String* $tmp4818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4817, index4789);
    panda$core$String* $tmp4820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4818, &$s4819);
    panda$core$String* $tmp4822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4820, &$s4821);
    (($fn4823) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4822);
    panda$core$String* $tmp4825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4824, numberType4781);
    panda$core$String* $tmp4827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4825, &$s4826);
    panda$core$String* $tmp4828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4827, start4798);
    panda$core$String* $tmp4830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4828, &$s4829);
    panda$core$String* $tmp4831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4830, numberType4781);
    panda$core$String* $tmp4833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4831, &$s4832);
    panda$core$String* $tmp4834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4833, indexValuePtr4807);
    panda$core$String* $tmp4836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4834, &$s4835);
    (($fn4837) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4836);
    panda$core$String* $tmp4839 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4838 = $tmp4839;
    panda$core$String* $tmp4840 = panda$core$String$convert$R$panda$core$String(end4838);
    panda$core$String* $tmp4842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4840, &$s4841);
    panda$core$String* $tmp4843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4842, range4757);
    panda$core$String* $tmp4845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4843, &$s4844);
    (($fn4846) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4845);
    panda$core$String* $tmp4848 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep4847 = $tmp4848;
    panda$core$String* $tmp4849 = panda$core$String$convert$R$panda$core$String(rawStep4847);
    panda$core$String* $tmp4851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4849, &$s4850);
    panda$core$String* $tmp4852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4851, range4757);
    panda$core$String* $tmp4854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4852, &$s4853);
    (($fn4855) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4854);
    panda$core$Bit $tmp4858 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4781, &$s4857);
    if ($tmp4858.value) {
    {
        panda$core$String* $tmp4859 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step4856 = $tmp4859;
        panda$core$String* $tmp4860 = panda$core$String$convert$R$panda$core$String(step4856);
        panda$core$String* $tmp4862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4860, &$s4861);
        panda$core$String* $tmp4863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4862, rawStep4847);
        panda$core$String* $tmp4865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4863, &$s4864);
        panda$core$String* $tmp4866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4865, numberType4781);
        panda$core$String* $tmp4868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4866, &$s4867);
        (($fn4869) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4868);
    }
    }
    else {
    {
        step4856 = rawStep4847;
    }
    }
    panda$core$String* $tmp4871 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4870 = $tmp4871;
    panda$core$String* $tmp4872 = panda$core$String$convert$R$panda$core$String(inclusive4870);
    panda$core$String* $tmp4874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4872, &$s4873);
    panda$core$String* $tmp4875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4874, range4757);
    panda$core$String* $tmp4877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4875, &$s4876);
    (($fn4878) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4877);
    panda$core$String* $tmp4880 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4879 = $tmp4880;
    panda$core$String* $tmp4882 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4881 = $tmp4882;
    panda$core$String* $tmp4884 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4883 = $tmp4884;
    panda$core$String* $tmp4886 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4885 = $tmp4886;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4887 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4887->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4887->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4887, ((panda$core$String*) p_f->payload), loopEnd4883, loopTest4885);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4887));
    panda$core$String* $tmp4890 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4889 = $tmp4890;
    panda$core$String* $tmp4892 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4891 = $tmp4892;
    panda$core$Bit $tmp4895 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4762)->name, &$s4894);
    if ($tmp4895.value) {
    {
        signPrefix4893 = &$s4896;
    }
    }
    else {
    {
        panda$core$Bit $tmp4899 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4762)->name, &$s4898);
        bool $tmp4897 = $tmp4899.value;
        if ($tmp4897) goto $l4900;
        panda$core$Bit $tmp4902 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4762)->name, &$s4901);
        $tmp4897 = $tmp4902.value;
        $l4900:;
        panda$core$Bit $tmp4903 = { $tmp4897 };
        PANDA_ASSERT($tmp4903.value);
        signPrefix4893 = &$s4904;
    }
    }
    panda$core$Bit $tmp4907 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix4893, &$s4906);
    if ($tmp4907.value) {
    {
        panda$core$String* $tmp4908 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction4905 = $tmp4908;
        panda$core$String* $tmp4909 = panda$core$String$convert$R$panda$core$String(direction4905);
        panda$core$String* $tmp4911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4909, &$s4910);
        panda$core$String* $tmp4912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4911, numberType4781);
        panda$core$String* $tmp4914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4912, &$s4913);
        panda$core$String* $tmp4915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4914, step4856);
        panda$core$String* $tmp4917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4915, &$s4916);
        (($fn4918) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4917);
    }
    }
    else {
    {
        direction4905 = &$s4919;
    }
    }
    panda$core$String* $tmp4921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4920, direction4905);
    panda$core$String* $tmp4923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4921, &$s4922);
    panda$core$String* $tmp4924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4923, forwardEntry4889);
    panda$core$String* $tmp4926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4924, &$s4925);
    panda$core$String* $tmp4927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4926, backwardEntry4891);
    panda$core$String* $tmp4929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4927, &$s4928);
    (($fn4930) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4929);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry4889, p_out);
    panda$core$String* $tmp4932 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4931 = $tmp4932;
    panda$core$String* $tmp4934 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4933 = $tmp4934;
    panda$core$String* $tmp4936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4935, inclusive4870);
    panda$core$String* $tmp4938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4936, &$s4937);
    panda$core$String* $tmp4939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4938, forwardEntryInclusive4931);
    panda$core$String* $tmp4941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4939, &$s4940);
    panda$core$String* $tmp4943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4942, forwardEntryExclusive4933);
    panda$core$String* $tmp4945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4943, &$s4944);
    panda$core$String* $tmp4946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4941, $tmp4945);
    (($fn4947) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4946);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4931, p_out);
    panda$core$String* $tmp4949 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4948 = $tmp4949;
    panda$core$String* $tmp4950 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4948);
    panda$core$String* $tmp4952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4950, &$s4951);
    panda$core$String* $tmp4953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4952, signPrefix4893);
    panda$core$String* $tmp4955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4953, &$s4954);
    panda$core$String* $tmp4956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4955, numberType4781);
    panda$core$String* $tmp4958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4956, &$s4957);
    panda$core$String* $tmp4959 = panda$core$String$convert$R$panda$core$String(start4798);
    panda$core$String* $tmp4961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4959, &$s4960);
    panda$core$String* $tmp4962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4961, end4838);
    panda$core$String* $tmp4964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4962, &$s4963);
    panda$core$String* $tmp4965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4958, $tmp4964);
    (($fn4966) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4965);
    panda$core$String* $tmp4968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4967, forwardEntryInclusiveTest4948);
    panda$core$String* $tmp4970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4968, &$s4969);
    panda$core$String* $tmp4971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4970, loopStart4879);
    panda$core$String* $tmp4973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4971, &$s4972);
    panda$core$String* $tmp4974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4973, loopEnd4883);
    panda$core$String* $tmp4976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4974, &$s4975);
    (($fn4977) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4976);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4933, p_out);
    panda$core$String* $tmp4979 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4978 = $tmp4979;
    panda$core$String* $tmp4980 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4978);
    panda$core$String* $tmp4982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4980, &$s4981);
    panda$core$String* $tmp4983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4982, signPrefix4893);
    panda$core$String* $tmp4985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4983, &$s4984);
    panda$core$String* $tmp4986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4985, numberType4781);
    panda$core$String* $tmp4988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4986, &$s4987);
    panda$core$String* $tmp4989 = panda$core$String$convert$R$panda$core$String(start4798);
    panda$core$String* $tmp4991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4989, &$s4990);
    panda$core$String* $tmp4992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4991, end4838);
    panda$core$String* $tmp4994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4992, &$s4993);
    panda$core$String* $tmp4995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4988, $tmp4994);
    (($fn4996) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4995);
    panda$core$String* $tmp4998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4997, forwardEntryExclusiveTest4978);
    panda$core$String* $tmp5000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4998, &$s4999);
    panda$core$String* $tmp5001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5000, loopStart4879);
    panda$core$String* $tmp5003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5001, &$s5002);
    panda$core$String* $tmp5004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5003, loopEnd4883);
    panda$core$String* $tmp5006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5004, &$s5005);
    (($fn5007) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5006);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry4891, p_out);
    panda$core$String* $tmp5009 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive5008 = $tmp5009;
    panda$core$String* $tmp5011 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive5010 = $tmp5011;
    panda$core$String* $tmp5013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5012, inclusive4870);
    panda$core$String* $tmp5015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5013, &$s5014);
    panda$core$String* $tmp5016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5015, backwardEntryInclusive5008);
    panda$core$String* $tmp5018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5016, &$s5017);
    panda$core$String* $tmp5020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5019, backwardEntryExclusive5010);
    panda$core$String* $tmp5022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5020, &$s5021);
    panda$core$String* $tmp5023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5018, $tmp5022);
    (($fn5024) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5023);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive5008, p_out);
    panda$core$String* $tmp5026 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5025 = $tmp5026;
    panda$core$String* $tmp5027 = panda$core$String$convert$R$panda$core$String(backwardEntryInclusiveTest5025);
    panda$core$String* $tmp5029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5027, &$s5028);
    panda$core$String* $tmp5030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5029, signPrefix4893);
    panda$core$String* $tmp5032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5030, &$s5031);
    panda$core$String* $tmp5033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5032, numberType4781);
    panda$core$String* $tmp5035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5033, &$s5034);
    panda$core$String* $tmp5036 = panda$core$String$convert$R$panda$core$String(start4798);
    panda$core$String* $tmp5038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5036, &$s5037);
    panda$core$String* $tmp5039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5038, end4838);
    panda$core$String* $tmp5041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5039, &$s5040);
    panda$core$String* $tmp5042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5035, $tmp5041);
    (($fn5043) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5042);
    panda$core$String* $tmp5045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5044, backwardEntryInclusiveTest5025);
    panda$core$String* $tmp5047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5045, &$s5046);
    panda$core$String* $tmp5048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5047, loopStart4879);
    panda$core$String* $tmp5050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5048, &$s5049);
    panda$core$String* $tmp5051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5050, loopEnd4883);
    panda$core$String* $tmp5053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5051, &$s5052);
    (($fn5054) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5053);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive5010, p_out);
    panda$core$String* $tmp5056 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5055 = $tmp5056;
    panda$core$String* $tmp5057 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusiveTest5055);
    panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5057, &$s5058);
    panda$core$String* $tmp5060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5059, signPrefix4893);
    panda$core$String* $tmp5062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5060, &$s5061);
    panda$core$String* $tmp5063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5062, numberType4781);
    panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5063, &$s5064);
    panda$core$String* $tmp5066 = panda$core$String$convert$R$panda$core$String(start4798);
    panda$core$String* $tmp5068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5066, &$s5067);
    panda$core$String* $tmp5069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5068, end4838);
    panda$core$String* $tmp5071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5069, &$s5070);
    panda$core$String* $tmp5072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5065, $tmp5071);
    (($fn5073) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5072);
    panda$core$String* $tmp5075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5074, backwardEntryExclusiveTest5055);
    panda$core$String* $tmp5077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5075, &$s5076);
    panda$core$String* $tmp5078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5077, loopStart4879);
    panda$core$String* $tmp5080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5078, &$s5079);
    panda$core$String* $tmp5081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5080, loopEnd4883);
    panda$core$String* $tmp5083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5081, &$s5082);
    (($fn5084) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5083);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4879, p_out);
    panda$core$String* $tmp5086 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5085 = $tmp5086;
    panda$core$String* $tmp5087 = panda$core$String$convert$R$panda$core$String(indexValue5085);
    panda$core$String* $tmp5089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5087, &$s5088);
    panda$core$String* $tmp5090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5089, numberType4781);
    panda$core$String* $tmp5092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5090, &$s5091);
    panda$core$String* $tmp5093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5092, numberType4781);
    panda$core$String* $tmp5095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5093, &$s5094);
    panda$core$String* $tmp5096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5095, indexValuePtr4807);
    panda$core$String* $tmp5098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5096, &$s5097);
    (($fn5099) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5098);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4760, p_out);
    panda$core$Bit $tmp5100 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4760);
    panda$core$Bit $tmp5101 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5100);
    if ($tmp5101.value) {
    {
        panda$core$String* $tmp5103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5102, loopTest4885);
        panda$core$String* $tmp5105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5103, &$s5104);
        (($fn5106) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5105);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4885, p_out);
    panda$core$String* $tmp5108 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5107 = $tmp5108;
    panda$core$String* $tmp5110 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5109 = $tmp5110;
    panda$core$String* $tmp5112 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5111 = $tmp5112;
    panda$core$String* $tmp5114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5113, direction4905);
    panda$core$String* $tmp5116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5114, &$s5115);
    panda$core$String* $tmp5117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5116, forwardLabel5109);
    panda$core$String* $tmp5119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5117, &$s5118);
    panda$core$String* $tmp5120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5119, backwardLabel5111);
    panda$core$String* $tmp5122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5120, &$s5121);
    (($fn5123) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5122);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel5109, p_out);
    panda$core$String* $tmp5125 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5124 = $tmp5125;
    panda$core$String* $tmp5126 = panda$core$String$convert$R$panda$core$String(forwardDelta5124);
    panda$core$String* $tmp5128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5126, &$s5127);
    panda$core$String* $tmp5129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5128, numberType4781);
    panda$core$String* $tmp5131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5129, &$s5130);
    panda$core$String* $tmp5132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5131, end4838);
    panda$core$String* $tmp5134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5132, &$s5133);
    panda$core$String* $tmp5135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5134, indexValue5085);
    panda$core$String* $tmp5137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5135, &$s5136);
    (($fn5138) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5137);
    panda$core$String* $tmp5140 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5139 = $tmp5140;
    panda$core$String* $tmp5142 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5141 = $tmp5142;
    panda$core$String* $tmp5144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5143, inclusive4870);
    panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5144, &$s5145);
    panda$core$String* $tmp5147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5146, forwardInclusiveLabel5139);
    panda$core$String* $tmp5149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5147, &$s5148);
    panda$core$String* $tmp5150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5149, forwardExclusiveLabel5141);
    (($fn5151) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5150);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel5139, p_out);
    panda$core$String* $tmp5153 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5152 = $tmp5153;
    panda$core$String* $tmp5154 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest5152);
    panda$core$String* $tmp5156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5154, &$s5155);
    panda$core$String* $tmp5157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5156, numberType4781);
    panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5157, &$s5158);
    panda$core$String* $tmp5160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, forwardDelta5124);
    panda$core$String* $tmp5162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5160, &$s5161);
    panda$core$String* $tmp5163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5162, step4856);
    panda$core$String* $tmp5165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5163, &$s5164);
    (($fn5166) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5165);
    panda$core$String* $tmp5168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5167, forwardInclusiveTest5152);
    panda$core$String* $tmp5170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5168, &$s5169);
    panda$core$String* $tmp5171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5170, loopInc5107);
    panda$core$String* $tmp5173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5171, &$s5172);
    panda$core$String* $tmp5174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5173, loopEnd4883);
    panda$core$String* $tmp5176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5174, &$s5175);
    (($fn5177) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5176);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel5141, p_out);
    panda$core$String* $tmp5179 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5178 = $tmp5179;
    panda$core$String* $tmp5180 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest5178);
    panda$core$String* $tmp5182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5180, &$s5181);
    panda$core$String* $tmp5183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5182, numberType4781);
    panda$core$String* $tmp5185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5183, &$s5184);
    panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5185, forwardDelta5124);
    panda$core$String* $tmp5188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5186, &$s5187);
    panda$core$String* $tmp5189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5188, step4856);
    panda$core$String* $tmp5191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5189, &$s5190);
    (($fn5192) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5191);
    panda$core$String* $tmp5194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5193, forwardExclusiveTest5178);
    panda$core$String* $tmp5196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5194, &$s5195);
    panda$core$String* $tmp5197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5196, loopInc5107);
    panda$core$String* $tmp5199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5197, &$s5198);
    panda$core$String* $tmp5200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5199, loopEnd4883);
    panda$core$String* $tmp5202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5200, &$s5201);
    (($fn5203) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5202);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel5111, p_out);
    panda$core$String* $tmp5205 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5204 = $tmp5205;
    panda$core$String* $tmp5206 = panda$core$String$convert$R$panda$core$String(backwardDelta5204);
    panda$core$String* $tmp5208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5206, &$s5207);
    panda$core$String* $tmp5209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5208, numberType4781);
    panda$core$String* $tmp5211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5209, &$s5210);
    panda$core$String* $tmp5212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5211, indexValue5085);
    panda$core$String* $tmp5214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5212, &$s5213);
    panda$core$String* $tmp5215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5214, end4838);
    panda$core$String* $tmp5217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5215, &$s5216);
    (($fn5218) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5217);
    panda$core$String* $tmp5220 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5219 = $tmp5220;
    panda$core$String* $tmp5221 = panda$core$String$convert$R$panda$core$String(negStep5219);
    panda$core$String* $tmp5223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5221, &$s5222);
    panda$core$String* $tmp5224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5223, numberType4781);
    panda$core$String* $tmp5226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5224, &$s5225);
    panda$core$String* $tmp5227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5226, step4856);
    panda$core$String* $tmp5229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5227, &$s5228);
    (($fn5230) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5229);
    panda$core$String* $tmp5232 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5231 = $tmp5232;
    panda$core$String* $tmp5234 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5233 = $tmp5234;
    panda$core$String* $tmp5236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5235, inclusive4870);
    panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5236, &$s5237);
    panda$core$String* $tmp5239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5238, backwardInclusiveLabel5231);
    panda$core$String* $tmp5241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5239, &$s5240);
    panda$core$String* $tmp5242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5241, backwardExclusiveLabel5233);
    (($fn5243) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5242);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel5231, p_out);
    panda$core$String* $tmp5245 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5244 = $tmp5245;
    panda$core$String* $tmp5246 = panda$core$String$convert$R$panda$core$String(backwardInclusiveTest5244);
    panda$core$String* $tmp5248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5246, &$s5247);
    panda$core$String* $tmp5249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5248, numberType4781);
    panda$core$String* $tmp5251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5249, &$s5250);
    panda$core$String* $tmp5252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5251, backwardDelta5204);
    panda$core$String* $tmp5254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5252, &$s5253);
    panda$core$String* $tmp5255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5254, negStep5219);
    (($fn5256) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5255);
    panda$core$String* $tmp5258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5257, backwardInclusiveTest5244);
    panda$core$String* $tmp5260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5258, &$s5259);
    panda$core$String* $tmp5261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5260, loopInc5107);
    panda$core$String* $tmp5263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5261, &$s5262);
    panda$core$String* $tmp5264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5263, loopEnd4883);
    panda$core$String* $tmp5266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5264, &$s5265);
    (($fn5267) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5266);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel5233, p_out);
    panda$core$String* $tmp5269 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5268 = $tmp5269;
    panda$core$String* $tmp5270 = panda$core$String$convert$R$panda$core$String(backwardExclusiveTest5268);
    panda$core$String* $tmp5272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5270, &$s5271);
    panda$core$String* $tmp5273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5272, numberType4781);
    panda$core$String* $tmp5275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5273, &$s5274);
    panda$core$String* $tmp5276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5275, backwardDelta5204);
    panda$core$String* $tmp5278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5276, &$s5277);
    panda$core$String* $tmp5279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5278, negStep5219);
    (($fn5280) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5279);
    panda$core$String* $tmp5282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5281, backwardExclusiveTest5268);
    panda$core$String* $tmp5284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5282, &$s5283);
    panda$core$String* $tmp5285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5284, loopInc5107);
    panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5285, &$s5286);
    panda$core$String* $tmp5288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5287, loopEnd4883);
    panda$core$String* $tmp5290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5288, &$s5289);
    (($fn5291) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5290);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc5107, p_out);
    panda$core$String* $tmp5293 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5292 = $tmp5293;
    panda$core$String* $tmp5294 = panda$core$String$convert$R$panda$core$String(inc5292);
    panda$core$String* $tmp5296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5294, &$s5295);
    panda$core$String* $tmp5297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5296, numberType4781);
    panda$core$String* $tmp5299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5297, &$s5298);
    panda$core$String* $tmp5300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5299, indexValue5085);
    panda$core$String* $tmp5302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5300, &$s5301);
    panda$core$String* $tmp5303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5302, step4856);
    panda$core$String* $tmp5305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5303, &$s5304);
    (($fn5306) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5305);
    panda$core$String* $tmp5308 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5307 = $tmp5308;
    panda$core$String* $tmp5309 = panda$core$String$convert$R$panda$core$String(incStruct5307);
    panda$core$String* $tmp5311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5309, &$s5310);
    panda$core$String* $tmp5312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5311, indexType4767);
    panda$core$String* $tmp5314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5312, &$s5313);
    panda$core$String* $tmp5315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5314, numberType4781);
    panda$core$String* $tmp5317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5315, &$s5316);
    (($fn5318) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5317);
    panda$core$String* $tmp5320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5319, numberType4781);
    panda$core$String* $tmp5322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5320, &$s5321);
    panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5322, inc5292);
    panda$core$String* $tmp5325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5323, &$s5324);
    (($fn5326) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5325);
    panda$core$String* $tmp5328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5327, indexType4767);
    panda$core$String* $tmp5330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5328, &$s5329);
    panda$core$String* $tmp5331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5330, incStruct5307);
    panda$core$String* $tmp5333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5331, &$s5332);
    panda$core$String* $tmp5334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5333, indexType4767);
    panda$core$String* $tmp5336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5334, &$s5335);
    panda$core$String* $tmp5337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5336, index4789);
    panda$core$String* $tmp5339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5337, &$s5338);
    (($fn5340) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5339);
    panda$core$String* $tmp5342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5341, loopStart4879);
    panda$core$String* $tmp5344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5342, &$s5343);
    (($fn5345) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5344);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4883, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp5346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5347 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5346)->type);
    if ($tmp5347.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5349 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5348)->type);
    if ($tmp5349.value) {
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
    panda$core$String* loopStart5356;
    panda$core$String* loopBody5358;
    panda$core$String* loopEnd5360;
    panda$core$String* test5369;
    panda$core$String* testBit5372;
    panda$core$Bit $tmp5350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5350.value);
    panda$core$Int64 $tmp5351 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5351, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5352.value);
    panda$core$Object* $tmp5353 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5354 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5355 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5353)->type, $tmp5354);
    PANDA_ASSERT($tmp5355.value);
    panda$core$String* $tmp5357 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5356 = $tmp5357;
    panda$core$String* $tmp5359 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5358 = $tmp5359;
    panda$core$String* $tmp5361 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5360 = $tmp5361;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5362 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5362->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5362->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5362, ((panda$core$String*) p_w->payload), loopEnd5360, loopStart5356);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5362));
    panda$core$String* $tmp5365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5364, loopStart5356);
    panda$core$String* $tmp5367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5365, &$s5366);
    (($fn5368) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5367);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5356, p_out);
    panda$core$Object* $tmp5370 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5371 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5370), p_out);
    test5369 = $tmp5371;
    panda$core$String* $tmp5373 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5372 = $tmp5373;
    panda$core$String* $tmp5374 = panda$core$String$convert$R$panda$core$String(testBit5372);
    panda$core$String* $tmp5376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5374, &$s5375);
    panda$core$String* $tmp5377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5376, test5369);
    panda$core$String* $tmp5379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5377, &$s5378);
    (($fn5380) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5379);
    panda$core$String* $tmp5382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5381, testBit5372);
    panda$core$String* $tmp5384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5382, &$s5383);
    panda$core$String* $tmp5385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5384, loopBody5358);
    panda$core$String* $tmp5387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5385, &$s5386);
    panda$core$String* $tmp5388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5387, loopEnd5360);
    panda$core$String* $tmp5390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5388, &$s5389);
    (($fn5391) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5390);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5358, p_out);
    panda$core$Object* $tmp5392 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5392), p_out);
    panda$core$Object* $tmp5393 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5394 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5393));
    panda$core$Bit $tmp5395 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5394);
    if ($tmp5395.value) {
    {
        panda$core$String* $tmp5397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5396, loopStart5356);
        panda$core$String* $tmp5399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5397, &$s5398);
        (($fn5400) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5399);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5360, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5407;
    panda$core$String* loopBody5409;
    panda$core$String* loopEnd5411;
    panda$core$String* test5420;
    panda$core$String* testBit5423;
    panda$core$Bit $tmp5401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5401.value);
    panda$core$Int64 $tmp5402 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5402, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5403.value);
    panda$core$Object* $tmp5404 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5405 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5406 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5404)->type, $tmp5405);
    PANDA_ASSERT($tmp5406.value);
    panda$core$String* $tmp5408 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5407 = $tmp5408;
    panda$core$String* $tmp5410 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5409 = $tmp5410;
    panda$core$String* $tmp5412 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5411 = $tmp5412;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5413 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5413->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5413->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5413, ((panda$core$String*) p_d->payload), loopEnd5411, loopStart5407);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5413));
    panda$core$String* $tmp5416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5415, loopBody5409);
    panda$core$String* $tmp5418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5416, &$s5417);
    (($fn5419) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5418);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5407, p_out);
    panda$core$Object* $tmp5421 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5422 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5421), p_out);
    test5420 = $tmp5422;
    panda$core$String* $tmp5424 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5423 = $tmp5424;
    panda$core$String* $tmp5425 = panda$core$String$convert$R$panda$core$String(testBit5423);
    panda$core$String* $tmp5427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5425, &$s5426);
    panda$core$String* $tmp5428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5427, test5420);
    panda$core$String* $tmp5430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5428, &$s5429);
    (($fn5431) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5430);
    panda$core$String* $tmp5433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5432, testBit5423);
    panda$core$String* $tmp5435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5433, &$s5434);
    panda$core$String* $tmp5436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5435, loopBody5409);
    panda$core$String* $tmp5438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5436, &$s5437);
    panda$core$String* $tmp5439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5438, loopEnd5411);
    panda$core$String* $tmp5441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5439, &$s5440);
    (($fn5442) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5441);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5409, p_out);
    panda$core$Object* $tmp5443 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5443), p_out);
    panda$core$Object* $tmp5444 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5445 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5444));
    panda$core$Bit $tmp5446 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5445);
    if ($tmp5446.value) {
    {
        panda$core$String* $tmp5448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5447, loopStart5407);
        panda$core$String* $tmp5450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5448, &$s5449);
        (($fn5451) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5450);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5411, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5455;
    panda$core$String* loopEnd5457;
    panda$core$Bit $tmp5452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5452.value);
    panda$core$Int64 $tmp5453 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5453, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5454.value);
    panda$core$String* $tmp5456 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5455 = $tmp5456;
    panda$core$String* $tmp5458 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5457 = $tmp5458;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5459 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5459->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5459->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5459, ((panda$core$String*) p_l->payload), loopEnd5457, loopStart5455);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5459));
    panda$core$String* $tmp5462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5461, loopStart5455);
    panda$core$String* $tmp5464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5462, &$s5463);
    (($fn5465) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5464);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5455, p_out);
    panda$core$Object* $tmp5466 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5466), p_out);
    panda$core$Object* $tmp5467 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5468 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5467));
    panda$core$Bit $tmp5469 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5468);
    if ($tmp5469.value) {
    {
        panda$core$String* $tmp5471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5470, loopStart5455);
        panda$core$String* $tmp5473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5471, &$s5472);
        (($fn5474) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5473);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5457, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5475;
    panda$core$String* ref5485;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5475 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5476 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5475);
            panda$core$String* $tmp5477 = panda$core$String$convert$R$panda$core$String($tmp5476);
            panda$core$String* $tmp5479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5477, &$s5478);
            panda$core$String* $tmp5480 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5475->type);
            panda$core$String* $tmp5481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5479, $tmp5480);
            panda$core$String* $tmp5483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5481, &$s5482);
            (($fn5484) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5483);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5486 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                ref5485 = $tmp5486;
                panda$core$String* $tmp5488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5487, ref5485);
                panda$core$String* $tmp5490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5488, &$s5489);
                panda$core$String* $tmp5491 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5475->type);
                panda$core$String* $tmp5492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5490, $tmp5491);
                panda$core$String* $tmp5494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5492, &$s5493);
                panda$core$String* $tmp5495 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5475);
                panda$core$String* $tmp5496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5494, $tmp5495);
                panda$core$String* $tmp5498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5496, &$s5497);
                (($fn5499) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5498);
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
    panda$collections$Iterator* decl$Iter5513;
    org$pandalanguage$pandac$IRNode* decl5525;
    panda$core$Bit $tmp5503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5502 = $tmp5503.value;
    if ($tmp5502) goto $l5504;
    panda$core$Bit $tmp5505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5502 = $tmp5505.value;
    $l5504:;
    panda$core$Bit $tmp5506 = { $tmp5502 };
    bool $tmp5501 = $tmp5506.value;
    if ($tmp5501) goto $l5507;
    panda$core$Bit $tmp5508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5501 = $tmp5508.value;
    $l5507:;
    panda$core$Bit $tmp5509 = { $tmp5501 };
    bool $tmp5500 = $tmp5509.value;
    if ($tmp5500) goto $l5510;
    panda$core$Bit $tmp5511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5500 = $tmp5511.value;
    $l5510:;
    panda$core$Bit $tmp5512 = { $tmp5500 };
    PANDA_ASSERT($tmp5512.value);
    {
        ITable* $tmp5514 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5514->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5514 = $tmp5514->next;
        }
        $fn5516 $tmp5515 = $tmp5514->methods[0];
        panda$collections$Iterator* $tmp5517 = $tmp5515(((panda$collections$Iterable*) p_v->children));
        decl$Iter5513 = $tmp5517;
        $l5518:;
        ITable* $tmp5520 = decl$Iter5513->$class->itable;
        while ($tmp5520->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5520 = $tmp5520->next;
        }
        $fn5522 $tmp5521 = $tmp5520->methods[0];
        panda$core$Bit $tmp5523 = $tmp5521(decl$Iter5513);
        panda$core$Bit $tmp5524 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5523);
        if (!$tmp5524.value) goto $l5519;
        {
            ITable* $tmp5526 = decl$Iter5513->$class->itable;
            while ($tmp5526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5526 = $tmp5526->next;
            }
            $fn5528 $tmp5527 = $tmp5526->methods[1];
            panda$core$Object* $tmp5529 = $tmp5527(decl$Iter5513);
            decl5525 = ((org$pandalanguage$pandac$IRNode*) $tmp5529);
            panda$core$Bit $tmp5530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5525->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5530.value);
            panda$core$Int64 $tmp5531 = panda$collections$Array$get_count$R$panda$core$Int64(decl5525->children);
            panda$core$Bit $tmp5532 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5531, ((panda$core$Int64) { 1 }));
            if ($tmp5532.value) {
            {
                panda$core$Object* $tmp5533 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5525->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5534 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5525->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5533), ((org$pandalanguage$pandac$IRNode*) $tmp5534), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5535 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5525->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5535), NULL, p_out);
            }
            }
        }
        goto $l5518;
        $l5519:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base5539;
    panda$core$String* raw5542;
    org$pandalanguage$pandac$ClassDecl* cl5544;
    org$pandalanguage$pandac$FieldDecl* f5547;
    panda$collections$ListView* fields5548;
    panda$core$Int64 index5550;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5551;
    panda$core$String* result5611;
    panda$core$String* result5624;
    panda$core$String* reused5627;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5536 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5537 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp5536, p_out);
            return $tmp5537;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5538 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5538;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5540 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5541 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5540), p_out);
            base5539 = $tmp5541;
            panda$core$String* $tmp5543 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            raw5542 = $tmp5543;
            panda$core$Object* $tmp5545 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5546 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5545)->type);
            cl5544 = $tmp5546;
            PANDA_ASSERT(((panda$core$Bit) { cl5544 != NULL }).value);
            f5547 = ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload);
            panda$collections$ListView* $tmp5549 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5544);
            fields5548 = $tmp5549;
            index5550 = ((panda$core$Int64) { -1 });
            ITable* $tmp5552 = ((panda$collections$CollectionView*) fields5548)->$class->itable;
            while ($tmp5552->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5552 = $tmp5552->next;
            }
            $fn5554 $tmp5553 = $tmp5552->methods[0];
            panda$core$Int64 $tmp5555 = $tmp5553(((panda$collections$CollectionView*) fields5548));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5551, ((panda$core$Int64) { 0 }), $tmp5555, ((panda$core$Bit) { false }));
            int64_t $tmp5557 = $tmp5551.min.value;
            panda$core$Int64 i5556 = { $tmp5557 };
            int64_t $tmp5559 = $tmp5551.max.value;
            bool $tmp5560 = $tmp5551.inclusive.value;
            if ($tmp5560) goto $l5567; else goto $l5568;
            $l5567:;
            if ($tmp5557 <= $tmp5559) goto $l5561; else goto $l5563;
            $l5568:;
            if ($tmp5557 < $tmp5559) goto $l5561; else goto $l5563;
            $l5561:;
            {
                ITable* $tmp5569 = fields5548->$class->itable;
                while ($tmp5569->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5569 = $tmp5569->next;
                }
                $fn5571 $tmp5570 = $tmp5569->methods[0];
                panda$core$Object* $tmp5572 = $tmp5570(fields5548, i5556);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5572))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) f5547)->name) }).value) {
                {
                    index5550 = i5556;
                    goto $l5563;
                }
                }
            }
            $l5564:;
            int64_t $tmp5574 = $tmp5559 - i5556.value;
            if ($tmp5560) goto $l5575; else goto $l5576;
            $l5575:;
            if ($tmp5574 >= 1) goto $l5573; else goto $l5563;
            $l5576:;
            if ($tmp5574 > 1) goto $l5573; else goto $l5563;
            $l5573:;
            i5556.value += 1;
            goto $l5561;
            $l5563:;
            panda$core$Bit $tmp5579 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5550, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5579.value);
            panda$core$String* $tmp5580 = panda$core$String$convert$R$panda$core$String(raw5542);
            panda$core$String* $tmp5582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5580, &$s5581);
            org$pandalanguage$pandac$Type* $tmp5583 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5544);
            panda$core$String* $tmp5584 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5583);
            panda$core$String* $tmp5585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5582, $tmp5584);
            panda$core$String* $tmp5587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5585, &$s5586);
            org$pandalanguage$pandac$Type* $tmp5588 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5544);
            panda$core$String* $tmp5589 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5588);
            panda$core$String* $tmp5590 = panda$core$String$convert$R$panda$core$String($tmp5589);
            panda$core$String* $tmp5592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5590, &$s5591);
            panda$core$String* $tmp5593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5592, base5539);
            panda$core$String* $tmp5595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5593, &$s5594);
            panda$core$String* $tmp5596 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5595, ((panda$core$Object*) wrap_panda$core$Int64(index5550)));
            panda$core$String* $tmp5598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5596, &$s5597);
            panda$core$String* $tmp5599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5587, $tmp5598);
            (($fn5600) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5599);
            panda$core$Bit $tmp5602 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, f5547->owner);
            bool $tmp5601 = $tmp5602.value;
            if ($tmp5601) goto $l5603;
            panda$core$Bit $tmp5605 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f5547->type);
            bool $tmp5604 = $tmp5605.value;
            if (!$tmp5604) goto $l5606;
            org$pandalanguage$pandac$ClassDecl* $tmp5607 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f5547->type);
            panda$core$Bit $tmp5608 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp5607);
            $tmp5604 = $tmp5608.value;
            $l5606:;
            panda$core$Bit $tmp5609 = { $tmp5604 };
            $tmp5601 = $tmp5609.value;
            $l5603:;
            panda$core$Bit $tmp5610 = { $tmp5601 };
            if ($tmp5610.value) {
            {
                return raw5542;
            }
            }
            panda$core$String* $tmp5612 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result5611 = $tmp5612;
            panda$core$String* $tmp5613 = panda$core$String$convert$R$panda$core$String(result5611);
            panda$core$String* $tmp5615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5613, &$s5614);
            panda$core$String* $tmp5616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5615, raw5542);
            panda$core$String* $tmp5618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5616, &$s5617);
            panda$core$String* $tmp5619 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5618, $tmp5619);
            panda$core$String* $tmp5622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5620, &$s5621);
            (($fn5623) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5622);
            return result5611;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5626 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5625), p_out);
            result5624 = $tmp5626;
            panda$core$String* $tmp5628 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5627 = $tmp5628;
            panda$core$String* $tmp5629 = panda$core$String$convert$R$panda$core$String(reused5627);
            panda$core$String* $tmp5631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5629, &$s5630);
            panda$core$String* $tmp5632 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5631, $tmp5632);
            panda$core$String* $tmp5635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5633, &$s5634);
            panda$core$String* $tmp5636 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5637 = panda$core$String$convert$R$panda$core$String($tmp5636);
            panda$core$String* $tmp5639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5637, &$s5638);
            panda$core$String* $tmp5640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5639, result5624);
            panda$core$String* $tmp5642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5640, &$s5641);
            panda$core$String* $tmp5643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5635, $tmp5642);
            (($fn5644) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5643);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5627));
            return result5624;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue5648;
    panda$core$String* value5659;
    panda$core$String* t5660;
    panda$core$Int64 op5663;
    panda$core$String* right5665;
    panda$core$Bit $tmp5645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5645.value);
    panda$core$Int64 $tmp5646 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5646, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5647.value);
    panda$core$Object* $tmp5649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5650 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5649)->type);
    panda$core$String* $tmp5651 = panda$core$String$convert$R$panda$core$String($tmp5650);
    panda$core$String* $tmp5653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5651, &$s5652);
    panda$core$Object* $tmp5654 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5655 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5654), p_out);
    panda$core$String* $tmp5656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5653, $tmp5655);
    panda$core$String* $tmp5658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5656, &$s5657);
    lvalue5648 = $tmp5658;
    panda$core$Object* $tmp5661 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5662 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5661)->type);
    t5660 = $tmp5662;
    op5663 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5663, ((panda$core$Int64) { 73 }));
    if ($tmp5664.value) {
    {
        panda$core$Object* $tmp5666 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5667 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5666), p_out);
        right5665 = $tmp5667;
        panda$core$String* $tmp5668 = panda$core$String$convert$R$panda$core$String(t5660);
        panda$core$String* $tmp5670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5668, &$s5669);
        panda$core$String* $tmp5671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5670, right5665);
        panda$core$String* $tmp5673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5671, &$s5672);
        value5659 = $tmp5673;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5674, value5659);
    panda$core$String* $tmp5677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5675, &$s5676);
    panda$core$String* $tmp5678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5677, lvalue5648);
    panda$core$String* $tmp5680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5678, &$s5679);
    (($fn5681) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5680);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5691;
    panda$core$String* result5693;
    bool $tmp5682 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp5682) goto $l5683;
    panda$core$Int64 $tmp5684 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5685 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5684, ((panda$core$Int64) { 0 }));
    $tmp5682 = $tmp5685.value;
    $l5683:;
    panda$core$Bit $tmp5686 = { $tmp5682 };
    if ($tmp5686.value) {
    {
        panda$core$Int64 $tmp5687 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5687, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp5688.value);
        panda$core$Int64 $tmp5689 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5690 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5689, ((panda$core$Int64) { 0 }));
        if ($tmp5690.value) {
        {
            panda$core$Object* $tmp5692 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5691 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5692);
            panda$core$Object* $tmp5694 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5695 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5694), p_out);
            result5693 = $tmp5695;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5696 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5696->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5696->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5696, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5693));
            panda$collections$Array$add$panda$collections$Array$T(inline5691->returns, ((panda$core$Object*) $tmp5696));
            panda$core$String* $tmp5699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5698, inline5691->exitLabel);
            panda$core$String* $tmp5701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5699, &$s5700);
            (($fn5702) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5701);
        }
        }
        else {
        {
            panda$core$Object* $tmp5704 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5705 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5704), p_out);
            panda$core$String* $tmp5706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5703, $tmp5705);
            panda$core$String* $tmp5708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5706, &$s5707);
            (($fn5709) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5708);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5710 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5711 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5710, ((panda$core$Int64) { 0 }));
        if ($tmp5711.value) {
        {
            panda$core$Object* $tmp5713 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5712, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5713)->exitLabel);
            panda$core$String* $tmp5716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5714, &$s5715);
            (($fn5717) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5716);
        }
        }
        else {
        {
            (($fn5719) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5718);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5723;
    panda$core$Int64 $tmp5720 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5721 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5720, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5721.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5722 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5722);
    }
    }
    panda$core$Int64 $tmp5724 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5723, ((panda$core$Int64) { 0 }), $tmp5724, ((panda$core$Bit) { false }));
    int64_t $tmp5726 = $tmp5723.min.value;
    panda$core$Int64 i5725 = { $tmp5726 };
    int64_t $tmp5728 = $tmp5723.max.value;
    bool $tmp5729 = $tmp5723.inclusive.value;
    if ($tmp5729) goto $l5736; else goto $l5737;
    $l5736:;
    if ($tmp5726 <= $tmp5728) goto $l5730; else goto $l5732;
    $l5737:;
    if ($tmp5726 < $tmp5728) goto $l5730; else goto $l5732;
    $l5730:;
    {
        panda$core$Object* $tmp5739 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5725);
        bool $tmp5738 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5739)->loopLabel != NULL }).value;
        if (!$tmp5738) goto $l5740;
        panda$core$Object* $tmp5741 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5725);
        panda$core$Bit $tmp5742 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5741)->loopLabel, p_name);
        $tmp5738 = $tmp5742.value;
        $l5740:;
        panda$core$Bit $tmp5743 = { $tmp5738 };
        if ($tmp5743.value) {
        {
            panda$core$Object* $tmp5744 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5725);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5744);
        }
        }
    }
    $l5733:;
    int64_t $tmp5746 = $tmp5728 - i5725.value;
    if ($tmp5729) goto $l5747; else goto $l5748;
    $l5747:;
    if ($tmp5746 >= 1) goto $l5745; else goto $l5732;
    $l5748:;
    if ($tmp5746 > 1) goto $l5745; else goto $l5732;
    $l5745:;
    i5725.value += 1;
    goto $l5730;
    $l5732:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5751;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5752 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5751 = $tmp5752;
    panda$core$String* $tmp5754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5753, desc5751->breakLabel);
    panda$core$String* $tmp5756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5754, &$s5755);
    (($fn5757) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5756);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5758;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5759 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5758 = $tmp5759;
    panda$core$String* $tmp5761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5760, desc5758->continueLabel);
    panda$core$String* $tmp5763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5761, &$s5762);
    (($fn5764) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5763);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test5774;
    panda$core$String* ifTrue5777;
    panda$core$String* ifFalse5779;
    panda$core$String* name5792;
    panda$core$String* path5793;
    panda$core$String$Index$nullable index5795;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5798;
    panda$core$String* nameRef5800;
    panda$core$String* line5802;
    panda$core$String* msg5807;
    panda$collections$Iterator* m$Iter5814;
    org$pandalanguage$pandac$MethodDecl* m5828;
    panda$core$Bit $tmp5765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5765.value);
    panda$core$Int64 $tmp5767 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5767, ((panda$core$Int64) { 1 }));
    bool $tmp5766 = $tmp5768.value;
    if ($tmp5766) goto $l5769;
    panda$core$Int64 $tmp5770 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5770, ((panda$core$Int64) { 2 }));
    $tmp5766 = $tmp5771.value;
    $l5769:;
    panda$core$Bit $tmp5772 = { $tmp5766 };
    PANDA_ASSERT($tmp5772.value);
    panda$core$Bit $tmp5773 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5773.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5775 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5776 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5775), p_out);
    test5774 = $tmp5776;
    panda$core$String* $tmp5778 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5777 = $tmp5778;
    panda$core$String* $tmp5780 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5779 = $tmp5780;
    panda$core$String* $tmp5782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5781, test5774);
    panda$core$String* $tmp5784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5782, &$s5783);
    panda$core$String* $tmp5785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5784, ifTrue5777);
    panda$core$String* $tmp5787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5785, &$s5786);
    panda$core$String* $tmp5788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5787, ifFalse5779);
    panda$core$String* $tmp5790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5788, &$s5789);
    (($fn5791) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5790);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse5779, p_out);
    panda$core$Object* $tmp5794 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path5793 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5794)->source->path;
    panda$core$String$Index$nullable $tmp5797 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path5793, &$s5796);
    index5795 = $tmp5797;
    if (((panda$core$Bit) { !index5795.nonnull }).value) {
    {
        name5792 = path5793;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp5798, index5795, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5799 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path5793, $tmp5798);
        name5792 = $tmp5799;
    }
    }
    panda$core$String* $tmp5801 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, name5792, p_out);
    nameRef5800 = $tmp5801;
    panda$core$String* $tmp5804 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5803, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp5806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5804, &$s5805);
    line5802 = $tmp5806;
    panda$core$Int64 $tmp5808 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5808, ((panda$core$Int64) { 2 }));
    if ($tmp5809.value) {
    {
        panda$core$Object* $tmp5810 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5811 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5810), p_out);
        msg5807 = $tmp5811;
    }
    }
    else {
    {
        msg5807 = NULL;
    }
    }
    (($fn5813) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5812);
    {
        org$pandalanguage$pandac$Type* $tmp5815 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp5816 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp5815);
        ITable* $tmp5817 = ((panda$collections$Iterable*) $tmp5816->methods)->$class->itable;
        while ($tmp5817->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5817 = $tmp5817->next;
        }
        $fn5819 $tmp5818 = $tmp5817->methods[0];
        panda$collections$Iterator* $tmp5820 = $tmp5818(((panda$collections$Iterable*) $tmp5816->methods));
        m$Iter5814 = $tmp5820;
        $l5821:;
        ITable* $tmp5823 = m$Iter5814->$class->itable;
        while ($tmp5823->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5823 = $tmp5823->next;
        }
        $fn5825 $tmp5824 = $tmp5823->methods[0];
        panda$core$Bit $tmp5826 = $tmp5824(m$Iter5814);
        panda$core$Bit $tmp5827 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5826);
        if (!$tmp5827.value) goto $l5822;
        {
            ITable* $tmp5829 = m$Iter5814->$class->itable;
            while ($tmp5829->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5829 = $tmp5829->next;
            }
            $fn5831 $tmp5830 = $tmp5829->methods[1];
            panda$core$Object* $tmp5832 = $tmp5830(m$Iter5814);
            m5828 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5832);
            panda$core$Bit $tmp5834 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5828)->name, &$s5833);
            if ($tmp5834.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m5828);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m5828);
            }
            }
        }
        goto $l5821;
        $l5822:;
    }
    if (((panda$core$Bit) { msg5807 != NULL }).value) {
    {
        panda$core$String* $tmp5837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5835, &$s5836);
        (($fn5838) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5837);
    }
    }
    else {
    {
        (($fn5840) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5839);
    }
    }
    panda$core$String* $tmp5842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5841, nameRef5800);
    panda$core$String* $tmp5844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5842, &$s5843);
    panda$core$String* $tmp5845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5844, line5802);
    panda$core$String* $tmp5847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5845, &$s5846);
    (($fn5848) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5847);
    if (((panda$core$Bit) { msg5807 != NULL }).value) {
    {
        panda$core$String* $tmp5850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5849, msg5807);
        panda$core$String* $tmp5852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5850, &$s5851);
        (($fn5853) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5852);
    }
    }
    (($fn5855) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5854);
    (($fn5857) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5856);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue5777, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* valueStruct5859;
    org$pandalanguage$pandac$ClassDecl* numberClass5862;
    panda$core$String* value5865;
    org$pandalanguage$pandac$FieldDecl* f5874;
    panda$core$String* switchType5877;
    panda$core$String* endLabel5887;
    panda$collections$Array* whenLabels5889;
    panda$core$String* otherwiseLabel5892;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5903;
    org$pandalanguage$pandac$IRNode* w5918;
    panda$core$String* label5922;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5924;
    panda$core$UInt64 number5940;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5968;
    org$pandalanguage$pandac$IRNode* w5983;
    org$pandalanguage$pandac$IRNode* block5985;
    panda$core$Bit $tmp5858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp5858.value);
    panda$core$Object* $tmp5860 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5861 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5860), p_out);
    valueStruct5859 = $tmp5861;
    panda$core$Object* $tmp5863 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp5864 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5863)->type);
    numberClass5862 = $tmp5864;
    panda$core$String* $tmp5866 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value5865 = $tmp5866;
    panda$core$String* $tmp5867 = panda$core$String$convert$R$panda$core$String(value5865);
    panda$core$String* $tmp5869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5867, &$s5868);
    panda$core$String* $tmp5870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5869, valueStruct5859);
    panda$core$String* $tmp5872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5870, &$s5871);
    (($fn5873) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5872);
    org$pandalanguage$pandac$Symbol* $tmp5876 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass5862->symbolTable, &$s5875);
    f5874 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5876);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f5874);
    panda$core$String* $tmp5878 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f5874->type);
    switchType5877 = $tmp5878;
    panda$core$String* $tmp5880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5879, switchType5877);
    panda$core$String* $tmp5882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5880, &$s5881);
    panda$core$String* $tmp5883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5882, value5865);
    panda$core$String* $tmp5885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5883, &$s5884);
    (($fn5886) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5885);
    panda$core$String* $tmp5888 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel5887 = $tmp5888;
    panda$collections$Array* $tmp5890 = (panda$collections$Array*) malloc(40);
    $tmp5890->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5890->refCount.value = 1;
    panda$collections$Array$init($tmp5890);
    whenLabels5889 = $tmp5890;
    panda$core$Int64 $tmp5893 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp5894 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5893, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5895 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, $tmp5894);
    panda$core$Bit $tmp5896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5895)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp5896.value) {
    {
        panda$core$String* $tmp5897 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel5892 = $tmp5897;
    }
    }
    else {
    {
        otherwiseLabel5892 = endLabel5887;
    }
    }
    panda$core$String* $tmp5899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5898, otherwiseLabel5892);
    panda$core$String* $tmp5901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5899, &$s5900);
    (($fn5902) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5901);
    panda$core$Int64 $tmp5904 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5903, ((panda$core$Int64) { 1 }), $tmp5904, ((panda$core$Bit) { false }));
    int64_t $tmp5906 = $tmp5903.min.value;
    panda$core$Int64 i5905 = { $tmp5906 };
    int64_t $tmp5908 = $tmp5903.max.value;
    bool $tmp5909 = $tmp5903.inclusive.value;
    if ($tmp5909) goto $l5916; else goto $l5917;
    $l5916:;
    if ($tmp5906 <= $tmp5908) goto $l5910; else goto $l5912;
    $l5917:;
    if ($tmp5906 < $tmp5908) goto $l5910; else goto $l5912;
    $l5910:;
    {
        panda$core$Object* $tmp5919 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5905);
        w5918 = ((org$pandalanguage$pandac$IRNode*) $tmp5919);
        panda$core$Bit $tmp5920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5918->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp5920.value) {
        {
            goto $l5913;
        }
        }
        panda$core$Bit $tmp5921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5918->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp5921.value);
        panda$core$String* $tmp5923 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label5922 = $tmp5923;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels5889, ((panda$core$Object*) label5922));
        panda$core$Int64 $tmp5925 = panda$collections$Array$get_count$R$panda$core$Int64(w5918->children);
        panda$core$Int64 $tmp5926 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5925, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5924, ((panda$core$Int64) { 0 }), $tmp5926, ((panda$core$Bit) { false }));
        int64_t $tmp5928 = $tmp5924.min.value;
        panda$core$Int64 i5927 = { $tmp5928 };
        int64_t $tmp5930 = $tmp5924.max.value;
        bool $tmp5931 = $tmp5924.inclusive.value;
        if ($tmp5931) goto $l5938; else goto $l5939;
        $l5938:;
        if ($tmp5928 <= $tmp5930) goto $l5932; else goto $l5934;
        $l5939:;
        if ($tmp5928 < $tmp5930) goto $l5932; else goto $l5934;
        $l5932:;
        {
            panda$core$Object* $tmp5941 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5918->children, i5927);
            panda$core$UInt64 $tmp5942 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5941));
            number5940 = $tmp5942;
            panda$core$String* $tmp5944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5943, switchType5877);
            panda$core$String* $tmp5946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5944, &$s5945);
            panda$core$String* $tmp5947 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5946, ((panda$core$Object*) wrap_panda$core$UInt64(number5940)));
            panda$core$String* $tmp5949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5947, &$s5948);
            panda$core$String* $tmp5950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5949, label5922);
            panda$core$String* $tmp5952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5950, &$s5951);
            (($fn5953) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5952);
        }
        $l5935:;
        int64_t $tmp5955 = $tmp5930 - i5927.value;
        if ($tmp5931) goto $l5956; else goto $l5957;
        $l5956:;
        if ($tmp5955 >= 1) goto $l5954; else goto $l5934;
        $l5957:;
        if ($tmp5955 > 1) goto $l5954; else goto $l5934;
        $l5954:;
        i5927.value += 1;
        goto $l5932;
        $l5934:;
    }
    $l5913:;
    int64_t $tmp5961 = $tmp5908 - i5905.value;
    if ($tmp5909) goto $l5962; else goto $l5963;
    $l5962:;
    if ($tmp5961 >= 1) goto $l5960; else goto $l5912;
    $l5963:;
    if ($tmp5961 > 1) goto $l5960; else goto $l5912;
    $l5960:;
    i5905.value += 1;
    goto $l5910;
    $l5912:;
    (($fn5967) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5966);
    panda$core$Int64 $tmp5969 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5968, ((panda$core$Int64) { 1 }), $tmp5969, ((panda$core$Bit) { false }));
    int64_t $tmp5971 = $tmp5968.min.value;
    panda$core$Int64 i5970 = { $tmp5971 };
    int64_t $tmp5973 = $tmp5968.max.value;
    bool $tmp5974 = $tmp5968.inclusive.value;
    if ($tmp5974) goto $l5981; else goto $l5982;
    $l5981:;
    if ($tmp5971 <= $tmp5973) goto $l5975; else goto $l5977;
    $l5982:;
    if ($tmp5971 < $tmp5973) goto $l5975; else goto $l5977;
    $l5975:;
    {
        panda$core$Object* $tmp5984 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5970);
        w5983 = ((org$pandalanguage$pandac$IRNode*) $tmp5984);
        panda$core$Int64 $tmp5986 = panda$collections$Array$get_count$R$panda$core$Int64(w5983->children);
        panda$core$Int64 $tmp5987 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5986, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp5988 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5983->children, $tmp5987);
        block5985 = ((org$pandalanguage$pandac$IRNode*) $tmp5988);
        panda$core$Int64 $tmp5989 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5970, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp5990 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels5889);
        panda$core$Bit $tmp5991 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp5989, $tmp5990);
        if ($tmp5991.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, otherwiseLabel5892, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp5992 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5970, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp5993 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels5889, $tmp5992);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ((panda$core$String*) $tmp5993), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block5985, p_out);
        panda$core$Bit $tmp5994 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block5985);
        panda$core$Bit $tmp5995 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5994);
        if ($tmp5995.value) {
        {
            panda$core$String* $tmp5997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5996, endLabel5887);
            panda$core$String* $tmp5999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5997, &$s5998);
            (($fn6000) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5999);
        }
        }
    }
    $l5978:;
    int64_t $tmp6002 = $tmp5973 - i5970.value;
    if ($tmp5974) goto $l6003; else goto $l6004;
    $l6003:;
    if ($tmp6002 >= 1) goto $l6001; else goto $l5977;
    $l6004:;
    if ($tmp6002 > 1) goto $l6001; else goto $l5977;
    $l6001:;
    i5970.value += 1;
    goto $l5975;
    $l5977:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel5887, p_out);
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
    panda$core$String* result6007;
    org$pandalanguage$pandac$Type* $tmp6008 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp6009 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6008);
    result6007 = $tmp6009;
    panda$core$Bit $tmp6011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6010 = $tmp6011.value;
    if (!$tmp6010) goto $l6012;
    panda$core$Bit $tmp6014 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6007, &$s6013);
    panda$core$Bit $tmp6015 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6014);
    $tmp6010 = $tmp6015.value;
    $l6012:;
    panda$core$Bit $tmp6016 = { $tmp6010 };
    if ($tmp6016.value) {
    {
        panda$core$String* $tmp6018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6007, &$s6017);
        return $tmp6018;
    }
    }
    return result6007;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6019;
    panda$core$Bit needsIndirection6028;
    panda$core$String* separator6040;
    panda$collections$Iterator* p$Iter6059;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6071;
    panda$core$String* $tmp6020 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6019 = $tmp6020;
    panda$core$Bit $tmp6021 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6019));
    if ($tmp6021.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6019));
    panda$core$String* $tmp6023 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6022, $tmp6023);
    panda$core$String* $tmp6026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6024, &$s6025);
    (($fn6027) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6026);
    panda$core$Bit $tmp6029 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6028 = $tmp6029;
    if (needsIndirection6028.value) {
    {
        (($fn6031) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6030);
    }
    }
    else {
    {
        panda$core$String* $tmp6032 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6033) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6032);
    }
    }
    panda$core$String* $tmp6035 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6034, $tmp6035);
    panda$core$String* $tmp6038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6036, &$s6037);
    (($fn6039) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6038);
    separator6040 = &$s6041;
    if (needsIndirection6028.value) {
    {
        panda$core$String* $tmp6042 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6043 = panda$core$String$convert$R$panda$core$String($tmp6042);
        panda$core$String* $tmp6045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6043, &$s6044);
        (($fn6046) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6045);
        separator6040 = &$s6047;
    }
    }
    panda$core$Bit $tmp6048 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6049 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6048);
    if ($tmp6049.value) {
    {
        panda$core$String* $tmp6050 = panda$core$String$convert$R$panda$core$String(separator6040);
        panda$core$String* $tmp6052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6050, &$s6051);
        panda$core$String* $tmp6053 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6052, $tmp6053);
        panda$core$String* $tmp6056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6054, &$s6055);
        (($fn6057) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6056);
        separator6040 = &$s6058;
    }
    }
    {
        ITable* $tmp6060 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6060->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6060 = $tmp6060->next;
        }
        $fn6062 $tmp6061 = $tmp6060->methods[0];
        panda$collections$Iterator* $tmp6063 = $tmp6061(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6059 = $tmp6063;
        $l6064:;
        ITable* $tmp6066 = p$Iter6059->$class->itable;
        while ($tmp6066->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6066 = $tmp6066->next;
        }
        $fn6068 $tmp6067 = $tmp6066->methods[0];
        panda$core$Bit $tmp6069 = $tmp6067(p$Iter6059);
        panda$core$Bit $tmp6070 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6069);
        if (!$tmp6070.value) goto $l6065;
        {
            ITable* $tmp6072 = p$Iter6059->$class->itable;
            while ($tmp6072->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6072 = $tmp6072->next;
            }
            $fn6074 $tmp6073 = $tmp6072->methods[1];
            panda$core$Object* $tmp6075 = $tmp6073(p$Iter6059);
            p6071 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6075);
            panda$core$String* $tmp6076 = panda$core$String$convert$R$panda$core$String(separator6040);
            panda$core$String* $tmp6078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6076, &$s6077);
            panda$core$String* $tmp6079 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6071->type);
            panda$core$String* $tmp6080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6078, $tmp6079);
            panda$core$String* $tmp6082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6080, &$s6081);
            panda$core$String* $tmp6083 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6071->name);
            panda$core$String* $tmp6084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6082, $tmp6083);
            panda$core$String* $tmp6086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6084, &$s6085);
            (($fn6087) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6086);
            separator6040 = &$s6088;
        }
        goto $l6064;
        $l6065:;
    }
    (($fn6090) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6089);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6111;
    panda$collections$Iterator* p$Iter6121;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6133;
    panda$io$MemoryOutputStream* bodyBuffer6155;
    panda$io$IndentedOutputStream* indentedBody6158;
    panda$collections$Iterator* s$Iter6161;
    org$pandalanguage$pandac$IRNode* s6173;
    panda$core$Object* $tmp6091 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6091)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6092;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    (($fn6094) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6093);
    panda$core$Bit $tmp6095 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6095.value) {
    {
        (($fn6097) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6096);
    }
    }
    panda$core$String* $tmp6098 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6099 = panda$core$String$convert$R$panda$core$String($tmp6098);
    panda$core$String* $tmp6101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6099, &$s6100);
    panda$core$String* $tmp6102 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6101, $tmp6102);
    panda$core$String* $tmp6105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6103, &$s6104);
    panda$core$String* $tmp6106 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6105, $tmp6106);
    panda$core$String* $tmp6109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6107, &$s6108);
    (($fn6110) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6109);
    separator6111 = &$s6112;
    panda$core$Bit $tmp6113 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6114 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6113);
    if ($tmp6114.value) {
    {
        panda$core$String* $tmp6115 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6116 = panda$core$String$convert$R$panda$core$String($tmp6115);
        panda$core$String* $tmp6118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6116, &$s6117);
        (($fn6119) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6118);
        separator6111 = &$s6120;
    }
    }
    {
        ITable* $tmp6122 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6122->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6122 = $tmp6122->next;
        }
        $fn6124 $tmp6123 = $tmp6122->methods[0];
        panda$collections$Iterator* $tmp6125 = $tmp6123(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6121 = $tmp6125;
        $l6126:;
        ITable* $tmp6128 = p$Iter6121->$class->itable;
        while ($tmp6128->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6128 = $tmp6128->next;
        }
        $fn6130 $tmp6129 = $tmp6128->methods[0];
        panda$core$Bit $tmp6131 = $tmp6129(p$Iter6121);
        panda$core$Bit $tmp6132 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6131);
        if (!$tmp6132.value) goto $l6127;
        {
            ITable* $tmp6134 = p$Iter6121->$class->itable;
            while ($tmp6134->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6134 = $tmp6134->next;
            }
            $fn6136 $tmp6135 = $tmp6134->methods[1];
            panda$core$Object* $tmp6137 = $tmp6135(p$Iter6121);
            p6133 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6137);
            panda$core$String* $tmp6138 = panda$core$String$convert$R$panda$core$String(separator6111);
            panda$core$String* $tmp6140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6138, &$s6139);
            panda$core$String* $tmp6141 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6133->type);
            panda$core$String* $tmp6142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6140, $tmp6141);
            panda$core$String* $tmp6144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6142, &$s6143);
            panda$core$String* $tmp6145 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6133->name);
            panda$core$String* $tmp6146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6144, $tmp6145);
            panda$core$String* $tmp6148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6146, &$s6147);
            (($fn6149) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6148);
            separator6111 = &$s6150;
        }
        goto $l6126;
        $l6127:;
    }
    (($fn6152) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6151);
    panda$core$Int64 $tmp6153 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6153;
    panda$core$Bit $tmp6154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6154.value);
    panda$io$MemoryOutputStream* $tmp6156 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6156->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6156->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6156);
    bodyBuffer6155 = $tmp6156;
    panda$io$IndentedOutputStream* $tmp6159 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp6159->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6159->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6159, ((panda$io$OutputStream*) bodyBuffer6155));
    indentedBody6158 = $tmp6159;
    {
        ITable* $tmp6162 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6162->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6162 = $tmp6162->next;
        }
        $fn6164 $tmp6163 = $tmp6162->methods[0];
        panda$collections$Iterator* $tmp6165 = $tmp6163(((panda$collections$Iterable*) p_body->children));
        s$Iter6161 = $tmp6165;
        $l6166:;
        ITable* $tmp6168 = s$Iter6161->$class->itable;
        while ($tmp6168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6168 = $tmp6168->next;
        }
        $fn6170 $tmp6169 = $tmp6168->methods[0];
        panda$core$Bit $tmp6171 = $tmp6169(s$Iter6161);
        panda$core$Bit $tmp6172 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6171);
        if (!$tmp6172.value) goto $l6167;
        {
            ITable* $tmp6174 = s$Iter6161->$class->itable;
            while ($tmp6174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6174 = $tmp6174->next;
            }
            $fn6176 $tmp6175 = $tmp6174->methods[1];
            panda$core$Object* $tmp6177 = $tmp6175(s$Iter6161);
            s6173 = ((org$pandalanguage$pandac$IRNode*) $tmp6177);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s6173, indentedBody6158);
        }
        goto $l6166;
        $l6167:;
    }
    panda$core$String* $tmp6178 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn6179) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6178);
    panda$core$String* $tmp6180 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer6155);
    (($fn6181) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6180);
    panda$core$Bit $tmp6182 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6183 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6182);
    if ($tmp6183.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6184 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6185 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6184);
        if ($tmp6185.value) {
        {
            (($fn6187) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6186);
        }
        }
        else {
        {
            (($fn6189) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6188);
        }
        }
    }
    }
    panda$core$Int64 $tmp6190 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6190;
    (($fn6192) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6191);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6193 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6193.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6194 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6194);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

