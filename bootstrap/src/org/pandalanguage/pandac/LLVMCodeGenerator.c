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
typedef void (*$fn3859)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3876)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3899)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3907)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3915)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3924)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3946)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3954)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3995)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4006)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4041)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4047)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4053)(panda$collections$Iterator*);
typedef void (*$fn4076)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4128)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4140)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4156)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4264)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4280)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4297)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4301)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4307)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4313)(panda$collections$Iterator*);
typedef void (*$fn4315)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4316)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4319)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4342)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4357)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4381)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4417)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4424)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4445)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4462)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4476)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4485)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4494)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4537)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4556)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4567)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4586)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4597)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4612)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4619)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4649)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4661)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4684)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4695)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4719)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4727)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4741)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4746)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4782)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4789)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4801)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4810)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4841)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4850)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4859)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4873)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4882)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4922)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4934)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4951)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4970)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4981)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5000)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5028)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5047)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5058)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5077)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5088)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5110)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5127)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5142)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5155)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5170)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5181)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5207)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5222)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5234)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5247)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5271)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5284)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5295)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5310)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5322)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5330)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5344)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5349)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5372)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5384)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5395)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5404)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5423)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5435)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5446)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5455)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5469)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5478)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5488)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5503)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5520)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5526)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5532)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5558)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5575)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5604)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5627)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5648)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5685)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5706)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5713)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5721)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5761)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5768)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5795)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5817)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5823)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5829)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5835)(panda$collections$Iterator*);
typedef void (*$fn5842)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5852)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5857)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5859)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5861)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5877)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5890)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5906)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5957)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5971)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6004)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6031)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6035)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6037)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6043)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6050)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6061)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6066)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6072)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6078)(panda$collections$Iterator*);
typedef void (*$fn6091)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6094)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6098)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6101)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6114)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6123)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6128)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6134)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6140)(panda$collections$Iterator*);
typedef void (*$fn6153)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6156)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6168)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6174)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6180)(panda$collections$Iterator*);
typedef void (*$fn6183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6185)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6191)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6193)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6196)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x64\x61\x74\x61\x6C\x61\x79\x6F\x75\x74\x20\x3D\x20\x22\x65\x2D\x70\x3A\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x69\x31\x3A\x38\x3A\x38\x2D\x69\x38\x3A\x38\x3A\x38\x2D\x69\x31\x36\x3A\x31\x36\x3A\x31\x36\x2D\x69\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x69\x36\x34\x3A", 72, -2136109323027823452, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34\x3A\x36\x34\x2D\x66\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x66\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x31\x32\x38\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D\x61\x30\x3A\x30\x3A\x36\x34\x2D\x73\x30\x3A\x36\x34\x3A\x36\x34\x2D\x66\x38\x30\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D", 78, 5799116395808447649, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x38\x3A\x31\x36\x3A\x33\x32\x3A\x36\x34\x2D\x53\x31\x32\x38\x22", 17, 7901878064487099872, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6C\x65\x20\x3D\x20\x22\x78\x38\x36\x5F\x36\x34\x2D\x61\x70\x70\x6C\x65\x2D\x6D\x61\x63\x6F\x73\x78\x31\x30\x2E\x38\x2E\x30\x22", 43, 3400234747603112012, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x29", 24, -2210603903278664580, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x2C\x20\x69\x36\x34\x29", 30, 3586448203758996221, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x29", 23, -7018940500590626091, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 60, -1505061774972200745, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, 13945, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 10, -1449713479277747265, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A", 3, 2107104, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D", 42, -5714228190486053526, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 18, -4598689173877776656, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 19, -8589797053445341862, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x31\x20\x7D", 6, 1527403190288, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69", 1, 206, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x31", 2, 20855, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 13473, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, -907514259111148708, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2, 13883, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 224, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, -6248805146137626796, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 5576385260267864236, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1453018, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1482468, NULL };
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
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 14375831170, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
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
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, 4666563658315683327, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, 8017085082545020976, NULL };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, -907514259111148708, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, 1496394141948660752, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 224, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, -6248805146137626796, NULL };
static panda$core$String $s1069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 5576385260267864236, NULL };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1453018, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1482468, NULL };
static panda$core$String $s1106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 14387129908788272, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 22145878250529579, NULL };
static panda$core$String $s1133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 200217461, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 786813570417990567, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, -7649133232731397023, NULL };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, 2313371919207, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, -7053567309059437070, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, -5503210093567996833, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s1283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 8410572937891831521, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 4466831713963476000, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, -899563194480661156, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1482468, NULL };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1453100120787609604, NULL };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 22145878250529579, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 200217461, NULL };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, -7053567309059437070, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, -5503210093567996833, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1453100120787609638, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 21448182697504487, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 2993525944506867831, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 8410572937891831521, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 4466831713963476000, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, 137534358, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1482468, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1453100120787609604, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 14383706580338536, NULL };
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, 1982351, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, 13918, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1405297, NULL };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1404792, NULL };
static panda$core$String $s1545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, 13904, NULL };
static panda$core$String $s1575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, 217363422, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, -2786053692556271290, NULL };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, 141821238, NULL };
static panda$core$String $s1606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, 142006571, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, 141945375, NULL };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, 141852364, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, 146203701926599, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, 141994765, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, 141975383, NULL };
static panda$core$String $s1624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, 141902866, NULL };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, 1447551143116, NULL };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, 1404587, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, 141953965, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1404792, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1405297, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, 1404777, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, 1405282, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, 1405598, NULL };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, 141832564, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, 141822248, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, 14324945814, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, 142056986, NULL };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, 14325180552, NULL };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, 141954978, NULL };
static panda$core$String $s1669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, 14325078544, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, 142005268, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, 142005274, NULL };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, 1405855, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, -8516432373732149011, NULL };
static panda$core$String $s1769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s1772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s1798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s1804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 3041965420706988039, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, -8516432373731118710, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 2215331, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 2154135, NULL };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, 223575839, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, 223718240, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 2214028, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, 205183331, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 2031008, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 21526, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 2265746, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 219725109287572, NULL };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 219725109288469, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, 22192236038186692, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, 22192236038187197, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, 22192236038186677, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, 22192236038187182, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 2215331, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 2154135, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, 225636441, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, 225778842, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 2214028, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, 216516642, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 2031008, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 21526, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 2265746, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 219725109287572, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 219725109288469, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, 22192236038207094, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, 22192236038207599, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, 22192236038207079, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, 22192236038207584, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, 210150800, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, 210336133, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, 210274937, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, 210181926, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, 21870595432513580, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, 21870595432514477, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, 21870595432513785, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, 21870595432514290, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, 21870595432513770, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, 21870595432514275, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s1934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, 212767339, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 5970309727045372754, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A", 2, 14485, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 14310819033313895, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, 14834798317007399, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, 5996012307911795392, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, 19638, NULL };
static panda$core$String $s2193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, -284792955217493296, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, 1445392722364703443, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1463219, NULL };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1463017, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, 9180175165629405233, NULL };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, 147755760, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, 1445392722364703444, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, -8647676183263851774, NULL };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, 2891297979021532403, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 20716344924, NULL };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, -68084191220774643, NULL };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, 212798144, NULL };
static panda$core$String $s2546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 229298558774239, NULL };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 141826739600592, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, 2946720541906757250, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1527403243220, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, 178709719977385382, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, 2005081535935103476, NULL };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 146543380183876, NULL };
static panda$core$String $s2726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, 22799530931, NULL };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 171978245881277, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s2924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 14324499638457470, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s2951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1450073858438092980, NULL };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1983470, NULL };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, -38380777888947646, NULL };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, -3655795335382666026, NULL };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 9041927512917235400, NULL };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, -6901405387198259419, NULL };
static panda$core$String $s3150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, -5055193716233257020, NULL };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, -38380777888947644, NULL };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s3174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s3330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 141826742558579, NULL };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1971047, NULL };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, -7594506016420023174, NULL };
static panda$core$String $s3349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 200330561, NULL };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1482414, NULL };
static panda$core$String $s3357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 2084875595949565210, NULL };
static panda$core$String $s3430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 22699766057, NULL };
static panda$core$String $s3461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 223587553, NULL };
static panda$core$String $s3462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 230799660, NULL };
static panda$core$String $s3503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 212358244529747, NULL };
static panda$core$String $s3512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, -834968264014761432, NULL };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 149724935, NULL };
static panda$core$String $s3626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s3628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s3634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, -8797060787573765364, NULL };
static panda$core$String $s3666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, -965880099298423813, NULL };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s3698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1573685088893303344, NULL };
static panda$core$String $s3706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 21489501287, NULL };
static panda$core$String $s3711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 3556234982078979695, NULL };
static panda$core$String $s3713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x69\x38\x2A\x2A\x20", 11, -1701017812076485794, NULL };
static panda$core$String $s3720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s3735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s3747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 175539598599330, NULL };
static panda$core$String $s3761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s3771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1410364661239, NULL };
static panda$core$String $s3774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, -4682671939848071135, NULL };
static panda$core$String $s3777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1365956, NULL };
static panda$core$String $s3781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 2107094, NULL };
static panda$core$String $s3805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 13526, NULL };
static panda$core$String $s3813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 17208241946, NULL };
static panda$core$String $s3815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, -4560911471279777923, NULL };
static panda$core$String $s3825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, -5873692317830133626, NULL };
static panda$core$String $s3827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s3833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 54, -4410989833928586841, NULL };
static panda$core$String $s3835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, -1652634297463438611, NULL };
static panda$core$String $s3837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s3840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, -1388553655089279848, NULL };
static panda$core$String $s3850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s3853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s3856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20\x69\x38\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 14, 8437322619071490889, NULL };
static panda$core$String $s3863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 14479861264, NULL };
static panda$core$String $s3867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s3872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, -1700716425750402941, NULL };
static panda$core$String $s3890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, 24050909224991147, NULL };
static panda$core$String $s3894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, -1449709338160382639, NULL };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, 149724671, NULL };
static panda$core$String $s3910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1151688449907454929, NULL };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s3922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 24050909225001348, NULL };
static panda$core$String $s3941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s3944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s3949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1151688449907545526, NULL };
static panda$core$String $s3952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1527409043120, NULL };
static panda$core$String $s3958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 6279508033471742827, NULL };
static panda$core$String $s3961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s3969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 22656, NULL };
static panda$core$String $s3973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 2138506394783058478, NULL };
static panda$core$String $s3975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s3990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s3993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 141826750873303, NULL };
static panda$core$String $s4001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 13886901203, NULL };
static panda$core$String $s4004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s4069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s4098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s4115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s4122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 214439158056679, NULL };
static panda$core$String $s4151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1150944396566914604, NULL };
static panda$core$String $s4154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 142412936438995, NULL };
static panda$core$String $s4157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 2149145203081189652, NULL };
static panda$core$String $s4159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s4225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 14398620611, NULL };
static panda$core$String $s4259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s4271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 20913132045, NULL };
static panda$core$String $s4287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s4337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s4431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s4449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s4452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s4463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s4489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s4510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s4517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s4520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s4525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s4534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s4547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s4577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s4604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s4628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s4656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s4679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s4702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1482426, NULL };
static panda$core$String $s4711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s4714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s4717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s4720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s4722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s4744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s4796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s4799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1527344412049, NULL };
static panda$core$String $s4814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 8124712435744769942, NULL };
static panda$core$String $s4817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 5494237899525325998, NULL };
static panda$core$String $s4828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s4830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s4839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1527345442350, NULL };
static panda$core$String $s4854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1527346472651, NULL };
static panda$core$String $s4861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 2106912, NULL };
static panda$core$String $s4865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, -8455018733144080751, NULL };
static panda$core$String $s4868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s4871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s4880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1527347502952, NULL };
static panda$core$String $s4898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s4905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s4908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s4910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 5640068998409967338, NULL };
static panda$core$String $s4917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s4923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 150, NULL };
static panda$core$String $s4924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s4948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 2142242, NULL };
static panda$core$String $s4961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s4973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s4979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s4988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 2143757, NULL };
static panda$core$String $s4991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s4997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 2091237, NULL };
static panda$core$String $s5038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 14324500264891083, NULL };
static panda$core$String $s5065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 2092752, NULL };
static panda$core$String $s5068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 141826745781388, NULL };
static panda$core$String $s5229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 137524157, NULL };
static panda$core$String $s5232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 5640068998412027940, NULL };
static panda$core$String $s5254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 5640068998412029455, NULL };
static panda$core$String $s5278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 141826727062755, NULL };
static panda$core$String $s5302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 8589258535478929300, NULL };
static panda$core$String $s5317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1369188, NULL };
static panda$core$String $s5320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1410132797063, NULL };
static panda$core$String $s5323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 138309634, NULL };
static panda$core$String $s5325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, -1449733785197172950, NULL };
static panda$core$String $s5486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, -570966721567003464, NULL };
static panda$core$String $s5590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 5661491935713932202, NULL };
static panda$core$String $s5601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, -5320169660593045991, NULL };
static panda$core$String $s5621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 138224592, NULL };
static panda$core$String $s5625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s5634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 14324500589312274, NULL };
static panda$core$String $s5638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s5661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 2282368251290, NULL };
static panda$core$String $s5680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 222556764, NULL };
static panda$core$String $s5711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s5757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s5766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 2103406931131, NULL };
static panda$core$String $s5787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s5807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, -6667479209846186158, NULL };
static panda$core$String $s5809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 13558, NULL };
static panda$core$String $s5816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20", 10, -1561809288486392881, NULL };
static panda$core$String $s5837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1112391861657830585, NULL };
static panda$core$String $s5839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, -3426205430399916046, NULL };
static panda$core$String $s5840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, -6932554582644871757, NULL };
static panda$core$String $s5843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, -418642434149121372, NULL };
static panda$core$String $s5845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, -3066853447063148068, NULL };
static panda$core$String $s5847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 3939743058867758116, NULL };
static panda$core$String $s5855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s5860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s5872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, -7415161861508000674, NULL };
static panda$core$String $s5875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1482425, NULL };
static panda$core$String $s5879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s5883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, 230550101366891, NULL };
static panda$core$String $s5885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s5902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 222887494308882, NULL };
static panda$core$String $s5904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 13524, NULL };
static panda$core$String $s5947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, 14293708514290657, NULL };
static panda$core$String $s5949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1573688730246556758, NULL };
static panda$core$String $s5955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, 13873332722, NULL };
static panda$core$String $s6000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, -2479556468824948166, NULL };
static panda$core$String $s6002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 21658185952146853, NULL };
static panda$core$String $s6029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s6038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s6096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s6097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 214437793896252, NULL };
static panda$core$String $s6100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, -2619868634461521980, NULL };
static panda$core$String $s6104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1401813127396, NULL };
static panda$core$String $s6124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 13470, NULL };
static panda$core$String $s6151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s6155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s6190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 23159346229820898, NULL };
static panda$core$String $s6192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 184878482956378755, NULL };
static panda$core$String $s6195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };

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
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
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
        panda$core$String$Index $tmp1546 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_s, current1531);
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
    panda$core$Int64 $tmp3854 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$String* $tmp3855 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3853, ((panda$core$Object*) wrap_panda$core$Int64($tmp3854)));
    panda$core$String* $tmp3857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3855, &$s3856);
    panda$core$String* $tmp3858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3852, $tmp3857);
    (($fn3859) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp3858);
    return result3812;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3860 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp3861 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3860, ((panda$core$Int64) { 0 }));
    if ($tmp3861.value) {
    {
        panda$core$Object* $tmp3862 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp3862)->selfRef;
    }
    }
    return &$s3863;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3864;
    panda$core$String* $tmp3865 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3864 = $tmp3865;
    panda$core$String* $tmp3866 = panda$core$String$convert$R$panda$core$String(result3864);
    panda$core$String* $tmp3868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3866, &$s3867);
    org$pandalanguage$pandac$Type* $tmp3869 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
    panda$core$String* $tmp3870 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3869);
    panda$core$String* $tmp3871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3868, $tmp3870);
    panda$core$String* $tmp3873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3871, &$s3872);
    panda$core$String* $tmp3874 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp3875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3873, $tmp3874);
    (($fn3876) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3875);
    return result3864;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value3880;
    org$pandalanguage$pandac$ClassDecl* cl3883;
    panda$core$String* resultValue3886;
    panda$core$String* field3891;
    panda$core$String* result3916;
    panda$core$Bit $tmp3877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp3877.value);
    panda$core$Int64 $tmp3878 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3879.value);
    panda$core$Object* $tmp3881 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3882 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3881), p_out);
    value3880 = $tmp3882;
    panda$core$Object* $tmp3884 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3885 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3884)->type);
    cl3883 = $tmp3885;
    panda$core$Bit $tmp3887 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3883);
    if ($tmp3887.value) {
    {
        panda$core$Object* $tmp3888 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3889 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3888)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3889.value) {
        {
            return &$s3890;
        }
        }
        panda$core$String* $tmp3892 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field3891 = $tmp3892;
        panda$core$String* $tmp3893 = panda$core$String$convert$R$panda$core$String(field3891);
        panda$core$String* $tmp3895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3893, &$s3894);
        panda$core$String* $tmp3896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3895, value3880);
        panda$core$String* $tmp3898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3896, &$s3897);
        (($fn3899) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3898);
        panda$core$String* $tmp3900 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3886 = $tmp3900;
        panda$core$String* $tmp3901 = panda$core$String$convert$R$panda$core$String(resultValue3886);
        panda$core$String* $tmp3903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3901, &$s3902);
        panda$core$String* $tmp3904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3903, field3891);
        panda$core$String* $tmp3906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3904, &$s3905);
        (($fn3907) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3906);
    }
    }
    else {
    {
        panda$core$String* $tmp3908 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3886 = $tmp3908;
        panda$core$String* $tmp3909 = panda$core$String$convert$R$panda$core$String(resultValue3886);
        panda$core$String* $tmp3911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3909, &$s3910);
        panda$core$String* $tmp3912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3911, value3880);
        panda$core$String* $tmp3914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3912, &$s3913);
        (($fn3915) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3914);
    }
    }
    panda$core$String* $tmp3917 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3916 = $tmp3917;
    panda$core$String* $tmp3918 = panda$core$String$convert$R$panda$core$String(result3916);
    panda$core$String* $tmp3920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3918, &$s3919);
    panda$core$String* $tmp3921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3920, resultValue3886);
    panda$core$String* $tmp3923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3921, &$s3922);
    (($fn3924) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3923);
    return result3916;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value3928;
    org$pandalanguage$pandac$ClassDecl* cl3931;
    panda$core$String* resultValue3934;
    panda$core$String* result3955;
    panda$core$Bit $tmp3925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp3925.value);
    panda$core$Int64 $tmp3926 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3926, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3927.value);
    panda$core$Object* $tmp3929 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3930 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3929), p_out);
    value3928 = $tmp3930;
    panda$core$Object* $tmp3932 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3933 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3932)->type);
    cl3931 = $tmp3933;
    panda$core$Bit $tmp3935 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3931);
    if ($tmp3935.value) {
    {
        panda$core$Object* $tmp3936 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3937 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3936)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3937.value) {
        {
            return &$s3938;
        }
        }
        panda$core$String* $tmp3939 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3934 = $tmp3939;
        panda$core$String* $tmp3940 = panda$core$String$convert$R$panda$core$String(resultValue3934);
        panda$core$String* $tmp3942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3940, &$s3941);
        panda$core$String* $tmp3943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3942, value3928);
        panda$core$String* $tmp3945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3943, &$s3944);
        (($fn3946) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3945);
    }
    }
    else {
    {
        panda$core$String* $tmp3947 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3934 = $tmp3947;
        panda$core$String* $tmp3948 = panda$core$String$convert$R$panda$core$String(resultValue3934);
        panda$core$String* $tmp3950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3948, &$s3949);
        panda$core$String* $tmp3951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3950, value3928);
        panda$core$String* $tmp3953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3951, &$s3952);
        (($fn3954) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3953);
    }
    }
    panda$core$String* $tmp3956 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3955 = $tmp3956;
    panda$core$String* $tmp3957 = panda$core$String$convert$R$panda$core$String(result3955);
    panda$core$String* $tmp3959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3957, &$s3958);
    panda$core$String* $tmp3960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3959, resultValue3934);
    panda$core$String* $tmp3962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3960, &$s3961);
    (($fn3963) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3962);
    return result3955;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3965;
    panda$core$Bit $tmp3964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp3964.value);
    panda$core$Object* $tmp3966 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3967 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp3966));
    cl3965 = $tmp3967;
    PANDA_ASSERT(((panda$core$Bit) { cl3965 != NULL }).value);
    panda$core$Bit $tmp3968 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3965);
    if ($tmp3968.value) {
    {
        panda$core$Object* $tmp3970 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3971 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3970));
        panda$core$String* $tmp3972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3969, $tmp3971);
        panda$core$String* $tmp3974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3972, &$s3973);
        return $tmp3974;
    }
    }
    else {
    {
        return &$s3975;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3979;
    panda$core$String* result3982;
    panda$core$Bit $tmp3976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp3976.value);
    panda$core$Int64 $tmp3977 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp3978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3977, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3978.value);
    panda$core$Object* $tmp3980 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3981 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3980), p_out);
    base3979 = $tmp3981;
    panda$core$String* $tmp3983 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3982 = $tmp3983;
    panda$core$Int64 $tmp3984 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp3984.value) {
        case 52:
        {
            panda$core$String* $tmp3985 = panda$core$String$convert$R$panda$core$String(result3982);
            panda$core$String* $tmp3987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3985, &$s3986);
            panda$core$String* $tmp3988 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp3989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3987, $tmp3988);
            panda$core$String* $tmp3991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3989, &$s3990);
            panda$core$String* $tmp3992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3991, base3979);
            panda$core$String* $tmp3994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3992, &$s3993);
            (($fn3995) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3994);
            return result3982;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp3996 = panda$core$String$convert$R$panda$core$String(result3982);
            panda$core$String* $tmp3998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3996, &$s3997);
            panda$core$String* $tmp3999 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3998, $tmp3999);
            panda$core$String* $tmp4002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4000, &$s4001);
            panda$core$String* $tmp4003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4002, base3979);
            panda$core$String* $tmp4005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4003, &$s4004);
            (($fn4006) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4005);
            return result3982;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4019;
    panda$core$String* result4022;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4007 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4007;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4008 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4008;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4009 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4009;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4010 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4010;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4011 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4011;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4012 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4012;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4013 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4013;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4014 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4014;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4015 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4015;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4016 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4016;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4017 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4017;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4018 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4018;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4020 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4021 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4020), p_out);
            value4019 = $tmp4021;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4019));
            return value4019;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4023 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4022 = ((panda$core$String*) $tmp4023);
            PANDA_ASSERT(((panda$core$Bit) { result4022 != NULL }).value);
            return result4022;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4024 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4024;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4025 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4025;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4026 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4026;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4027 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4027;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4028 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4029 = panda$core$String$convert$R$panda$core$String($tmp4028);
    panda$core$String* $tmp4031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4029, &$s4030);
    panda$core$String* $tmp4032 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4031, $tmp4032);
    panda$core$String* $tmp4035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4033, &$s4034);
    return $tmp4035;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4038;
    org$pandalanguage$pandac$IRNode* s4050;
    panda$core$Bit $tmp4036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4036.value);
    panda$core$Int64 $tmp4037 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4037;
    {
        ITable* $tmp4039 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4039->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4039 = $tmp4039->next;
        }
        $fn4041 $tmp4040 = $tmp4039->methods[0];
        panda$collections$Iterator* $tmp4042 = $tmp4040(((panda$collections$Iterable*) p_block->children));
        s$Iter4038 = $tmp4042;
        $l4043:;
        ITable* $tmp4045 = s$Iter4038->$class->itable;
        while ($tmp4045->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4045 = $tmp4045->next;
        }
        $fn4047 $tmp4046 = $tmp4045->methods[0];
        panda$core$Bit $tmp4048 = $tmp4046(s$Iter4038);
        panda$core$Bit $tmp4049 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4048);
        if (!$tmp4049.value) goto $l4044;
        {
            ITable* $tmp4051 = s$Iter4038->$class->itable;
            while ($tmp4051->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4051 = $tmp4051->next;
            }
            $fn4053 $tmp4052 = $tmp4051->methods[1];
            panda$core$Object* $tmp4054 = $tmp4052(s$Iter4038);
            s4050 = ((org$pandalanguage$pandac$IRNode*) $tmp4054);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4050, p_out);
        }
        goto $l4043;
        $l4044:;
    }
    panda$core$Int64 $tmp4055 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4055;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4056;
    panda$core$String* $match$1909_94057;
    panda$core$String* ptr4062;
    panda$core$String* arg4065;
    org$pandalanguage$pandac$Type* baseType4085;
    panda$core$String* base4089;
    panda$core$String* indexStruct4092;
    panda$core$String* index4095;
    panda$core$String* value4104;
    panda$core$String* ptr4108;
    panda$core$String* ptr4145;
    panda$core$String* cast4148;
    m4056 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1909_94057 = ((org$pandalanguage$pandac$Symbol*) m4056->value)->name;
        panda$core$Bit $tmp4059 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1909_94057, &$s4058);
        if ($tmp4059.value) {
        {
            panda$core$Int64 $tmp4060 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4060, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4061.value);
            panda$core$Object* $tmp4063 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4064 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4063), p_out);
            ptr4062 = $tmp4064;
            panda$core$Object* $tmp4066 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4067 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4066));
            panda$core$String* $tmp4068 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4067, p_out);
            arg4065 = $tmp4068;
            panda$core$String* $tmp4070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4069, arg4065);
            panda$core$String* $tmp4072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4070, &$s4071);
            panda$core$String* $tmp4073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4072, ptr4062);
            panda$core$String* $tmp4075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4073, &$s4074);
            (($fn4076) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4075);
        }
        }
        else {
        panda$core$Bit $tmp4078 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1909_94057, &$s4077);
        if ($tmp4078.value) {
        {
            panda$core$Int64 $tmp4079 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4079, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4080.value);
            panda$core$Object* $tmp4081 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4082 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4081));
            panda$core$Int64 $tmp4083 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4082->type->subtypes);
            panda$core$Bit $tmp4084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4083, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4084.value);
            panda$core$Object* $tmp4086 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4087 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4086));
            panda$core$Object* $tmp4088 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4087->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4085 = ((org$pandalanguage$pandac$Type*) $tmp4088);
            panda$core$Object* $tmp4090 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4091 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4090), p_out);
            base4089 = $tmp4091;
            panda$core$Object* $tmp4093 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4094 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4093), p_out);
            indexStruct4092 = $tmp4094;
            panda$core$String* $tmp4096 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4095 = $tmp4096;
            panda$core$String* $tmp4097 = panda$core$String$convert$R$panda$core$String(index4095);
            panda$core$String* $tmp4099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4097, &$s4098);
            panda$core$String* $tmp4100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4099, indexStruct4092);
            panda$core$String* $tmp4102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4100, &$s4101);
            (($fn4103) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4102);
            panda$core$Object* $tmp4105 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4106 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4105));
            panda$core$String* $tmp4107 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4106, p_out);
            value4104 = $tmp4107;
            panda$core$String* $tmp4109 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4108 = $tmp4109;
            panda$core$String* $tmp4110 = panda$core$String$convert$R$panda$core$String(ptr4108);
            panda$core$String* $tmp4112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4110, &$s4111);
            panda$core$String* $tmp4113 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4085);
            panda$core$String* $tmp4114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4112, $tmp4113);
            panda$core$String* $tmp4116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4114, &$s4115);
            panda$core$String* $tmp4117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4116, base4089);
            panda$core$String* $tmp4119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4117, &$s4118);
            panda$core$String* $tmp4121 = panda$core$String$convert$R$panda$core$String(&$s4120);
            panda$core$String* $tmp4123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4121, &$s4122);
            panda$core$String* $tmp4124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4123, index4095);
            panda$core$String* $tmp4126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4124, &$s4125);
            panda$core$String* $tmp4127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4119, $tmp4126);
            (($fn4128) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4127);
            panda$core$String* $tmp4130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4129, value4104);
            panda$core$String* $tmp4132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4130, &$s4131);
            panda$core$String* $tmp4133 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4085);
            panda$core$String* $tmp4134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4132, $tmp4133);
            panda$core$String* $tmp4136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4134, &$s4135);
            panda$core$String* $tmp4137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4136, ptr4108);
            panda$core$String* $tmp4139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4137, &$s4138);
            (($fn4140) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4139);
        }
        }
        else {
        panda$core$Bit $tmp4142 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1909_94057, &$s4141);
        if ($tmp4142.value) {
        {
            panda$core$Int64 $tmp4143 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4143, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4144.value);
            panda$core$Object* $tmp4146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4147 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4146), p_out);
            ptr4145 = $tmp4147;
            panda$core$String* $tmp4149 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4148 = $tmp4149;
            panda$core$String* $tmp4150 = panda$core$String$convert$R$panda$core$String(cast4148);
            panda$core$String* $tmp4152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4150, &$s4151);
            panda$core$String* $tmp4153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4152, ptr4145);
            panda$core$String* $tmp4155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4153, &$s4154);
            (($fn4156) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4155);
            panda$core$String* $tmp4158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4157, cast4148);
            panda$core$String* $tmp4160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4158, &$s4159);
            (($fn4161) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4160);
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
    org$pandalanguage$pandac$MethodDecl* m4163;
    org$pandalanguage$pandac$Type* actualMethodType4166;
    panda$core$String* actualResultType4167;
    panda$core$Bit isSuper4168;
    panda$collections$Array* args4188;
    panda$core$Int64 offset4191;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4196;
    panda$core$String* arg4211;
    panda$core$String* refTarget4243;
    panda$core$String* methodRef4247;
    panda$core$String* separator4249;
    panda$core$String* indirectVar4253;
    panda$core$String* resultType4256;
    panda$collections$Iterator* a$Iter4298;
    panda$core$String* a4310;
    panda$core$Bit $tmp4162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4162.value);
    m4163 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4165 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4163->owner)->name, &$s4164);
    if ($tmp4165.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4163->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4163);
    }
    }
    panda$core$Int64 $tmp4170 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4171 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4170, ((panda$core$Int64) { 1 }));
    bool $tmp4169 = $tmp4171.value;
    if (!$tmp4169) goto $l4172;
    panda$core$Object* $tmp4173 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4173)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4169 = $tmp4174.value;
    $l4172:;
    panda$core$Bit $tmp4175 = { $tmp4169 };
    isSuper4168 = $tmp4175;
    panda$core$Bit $tmp4177 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4168);
    bool $tmp4176 = $tmp4177.value;
    if (!$tmp4176) goto $l4178;
    panda$core$Bit $tmp4179 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4163);
    $tmp4176 = $tmp4179.value;
    $l4178:;
    panda$core$Bit $tmp4180 = { $tmp4176 };
    if ($tmp4180.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4181 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4163);
        actualMethodType4166 = $tmp4181;
        panda$core$Int64 $tmp4182 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4166->subtypes);
        panda$core$Int64 $tmp4183 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4182, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4184 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4166->subtypes, $tmp4183);
        panda$core$String* $tmp4185 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4184));
        actualResultType4167 = $tmp4185;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4186 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4163);
        actualMethodType4166 = $tmp4186;
        panda$core$String* $tmp4187 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4167 = $tmp4187;
    }
    }
    panda$collections$Array* $tmp4189 = (panda$collections$Array*) malloc(40);
    $tmp4189->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4189->refCount.value = 1;
    panda$collections$Array$init($tmp4189);
    args4188 = $tmp4189;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4188, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4192 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4193 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4166->subtypes);
    panda$core$Int64 $tmp4194 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4192, $tmp4193);
    panda$core$Int64 $tmp4195 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4194, ((panda$core$Int64) { 1 }));
    offset4191 = $tmp4195;
    panda$core$Int64 $tmp4197 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4196, ((panda$core$Int64) { 0 }), $tmp4197, ((panda$core$Bit) { false }));
    int64_t $tmp4199 = $tmp4196.min.value;
    panda$core$Int64 i4198 = { $tmp4199 };
    int64_t $tmp4201 = $tmp4196.max.value;
    bool $tmp4202 = $tmp4196.inclusive.value;
    if ($tmp4202) goto $l4209; else goto $l4210;
    $l4209:;
    if ($tmp4199 <= $tmp4201) goto $l4203; else goto $l4205;
    $l4210:;
    if ($tmp4199 < $tmp4201) goto $l4203; else goto $l4205;
    $l4203:;
    {
        panda$core$Object* $tmp4212 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4198);
        panda$core$String* $tmp4213 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4212), p_out);
        arg4211 = $tmp4213;
        panda$core$Bit $tmp4215 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4198, offset4191);
        bool $tmp4214 = $tmp4215.value;
        if (!$tmp4214) goto $l4216;
        panda$core$Int64 $tmp4217 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4198, offset4191);
        panda$core$Object* $tmp4218 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4166->subtypes, $tmp4217);
        panda$core$Object* $tmp4219 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4198);
        panda$core$Bit $tmp4220 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4218), ((org$pandalanguage$pandac$IRNode*) $tmp4219)->type);
        $tmp4214 = $tmp4220.value;
        $l4216:;
        panda$core$Bit $tmp4221 = { $tmp4214 };
        if ($tmp4221.value) {
        {
            panda$core$Int64 $tmp4222 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4198, offset4191);
            panda$core$Object* $tmp4223 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4166->subtypes, $tmp4222);
            panda$core$String* $tmp4224 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4223));
            panda$core$String* $tmp4226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4224, &$s4225);
            panda$core$Object* $tmp4227 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4198);
            panda$core$Int64 $tmp4228 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4198, offset4191);
            panda$core$Object* $tmp4229 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4166->subtypes, $tmp4228);
            panda$core$String* $tmp4230 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg4211, ((org$pandalanguage$pandac$IRNode*) $tmp4227)->type, ((org$pandalanguage$pandac$Type*) $tmp4229), p_out);
            panda$core$String* $tmp4231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4226, $tmp4230);
            arg4211 = $tmp4231;
        }
        }
        else {
        {
            panda$core$Object* $tmp4232 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4198);
            panda$core$String* $tmp4233 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4232)->type);
            panda$core$String* $tmp4235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4233, &$s4234);
            panda$core$String* $tmp4236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4235, arg4211);
            arg4211 = $tmp4236;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4188, ((panda$core$Object*) arg4211));
    }
    $l4206:;
    int64_t $tmp4238 = $tmp4201 - i4198.value;
    if ($tmp4202) goto $l4239; else goto $l4240;
    $l4239:;
    if ($tmp4238 >= 1) goto $l4237; else goto $l4205;
    $l4240:;
    if ($tmp4238 > 1) goto $l4237; else goto $l4205;
    $l4237:;
    i4198.value += 1;
    goto $l4203;
    $l4205:;
    panda$core$Int64 $tmp4244 = panda$collections$Array$get_count$R$panda$core$Int64(args4188);
    panda$core$Bit $tmp4245 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4244, ((panda$core$Int64) { 0 }));
    if ($tmp4245.value) {
    {
        panda$core$Object* $tmp4246 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4188, ((panda$core$Int64) { 0 }));
        refTarget4243 = ((panda$core$String*) $tmp4246);
    }
    }
    else {
    {
        refTarget4243 = NULL;
    }
    }
    panda$core$String* $tmp4248 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget4243, m4163, isSuper4168, p_out);
    methodRef4247 = $tmp4248;
    separator4249 = &$s4250;
    panda$core$Bit $tmp4251 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4163);
    if ($tmp4251.value) {
    {
        panda$core$Int64 $tmp4252 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4252;
        panda$core$String* $tmp4255 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4254, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4253 = $tmp4255;
        panda$core$String* $tmp4257 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4256 = $tmp4257;
        panda$core$String* $tmp4258 = panda$core$String$convert$R$panda$core$String(indirectVar4253);
        panda$core$String* $tmp4260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4258, &$s4259);
        panda$core$String* $tmp4261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4260, resultType4256);
        panda$core$String* $tmp4263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4261, &$s4262);
        (($fn4264) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4263);
        panda$core$String* $tmp4266 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4163);
        panda$core$String* $tmp4267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4265, $tmp4266);
        panda$core$String* $tmp4269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4267, &$s4268);
        panda$core$String* $tmp4270 = panda$core$String$convert$R$panda$core$String(methodRef4247);
        panda$core$String* $tmp4272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4270, &$s4271);
        panda$core$String* $tmp4273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4272, resultType4256);
        panda$core$String* $tmp4275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4273, &$s4274);
        panda$core$String* $tmp4276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4275, indirectVar4253);
        panda$core$String* $tmp4278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4276, &$s4277);
        panda$core$String* $tmp4279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4269, $tmp4278);
        (($fn4280) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4279);
        separator4249 = &$s4281;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4282 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4283 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4282);
        if ($tmp4283.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4285 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4163);
        panda$core$String* $tmp4286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4284, $tmp4285);
        panda$core$String* $tmp4288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4286, &$s4287);
        panda$core$String* $tmp4289 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4288, $tmp4289);
        panda$core$String* $tmp4292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4290, &$s4291);
        panda$core$String* $tmp4293 = panda$core$String$convert$R$panda$core$String(methodRef4247);
        panda$core$String* $tmp4295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4293, &$s4294);
        panda$core$String* $tmp4296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4292, $tmp4295);
        (($fn4297) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4296);
    }
    }
    {
        ITable* $tmp4299 = ((panda$collections$Iterable*) args4188)->$class->itable;
        while ($tmp4299->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4299 = $tmp4299->next;
        }
        $fn4301 $tmp4300 = $tmp4299->methods[0];
        panda$collections$Iterator* $tmp4302 = $tmp4300(((panda$collections$Iterable*) args4188));
        a$Iter4298 = $tmp4302;
        $l4303:;
        ITable* $tmp4305 = a$Iter4298->$class->itable;
        while ($tmp4305->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4305 = $tmp4305->next;
        }
        $fn4307 $tmp4306 = $tmp4305->methods[0];
        panda$core$Bit $tmp4308 = $tmp4306(a$Iter4298);
        panda$core$Bit $tmp4309 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4308);
        if (!$tmp4309.value) goto $l4304;
        {
            ITable* $tmp4311 = a$Iter4298->$class->itable;
            while ($tmp4311->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4311 = $tmp4311->next;
            }
            $fn4313 $tmp4312 = $tmp4311->methods[1];
            panda$core$Object* $tmp4314 = $tmp4312(a$Iter4298);
            a4310 = ((panda$core$String*) $tmp4314);
            (($fn4315) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator4249);
            (($fn4316) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a4310);
            separator4249 = &$s4317;
        }
        goto $l4303;
        $l4304:;
    }
    (($fn4319) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4318);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test4331;
    panda$core$String* testBit4334;
    panda$core$String* ifTrue4343;
    panda$core$String* ifFalse4345;
    panda$core$String* end4359;
    panda$core$Bit $tmp4320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4320.value);
    panda$core$Int64 $tmp4322 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4322, ((panda$core$Int64) { 2 }));
    bool $tmp4321 = $tmp4323.value;
    if ($tmp4321) goto $l4324;
    panda$core$Int64 $tmp4325 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4325, ((panda$core$Int64) { 3 }));
    $tmp4321 = $tmp4326.value;
    $l4324:;
    panda$core$Bit $tmp4327 = { $tmp4321 };
    PANDA_ASSERT($tmp4327.value);
    panda$core$Object* $tmp4328 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4329 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4330 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4328)->type, $tmp4329);
    PANDA_ASSERT($tmp4330.value);
    panda$core$Object* $tmp4332 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4333 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4332), p_out);
    test4331 = $tmp4333;
    panda$core$String* $tmp4335 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4334 = $tmp4335;
    panda$core$String* $tmp4336 = panda$core$String$convert$R$panda$core$String(testBit4334);
    panda$core$String* $tmp4338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4336, &$s4337);
    panda$core$String* $tmp4339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4338, test4331);
    panda$core$String* $tmp4341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4339, &$s4340);
    (($fn4342) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4341);
    panda$core$String* $tmp4344 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4343 = $tmp4344;
    panda$core$String* $tmp4346 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4345 = $tmp4346;
    panda$core$String* $tmp4348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4347, testBit4334);
    panda$core$String* $tmp4350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4348, &$s4349);
    panda$core$String* $tmp4351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4350, ifTrue4343);
    panda$core$String* $tmp4353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4351, &$s4352);
    panda$core$String* $tmp4354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4353, ifFalse4345);
    panda$core$String* $tmp4356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4354, &$s4355);
    (($fn4357) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4356);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue4343, p_out);
    panda$core$Object* $tmp4358 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4358), p_out);
    panda$core$Int64 $tmp4360 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4360, ((panda$core$Int64) { 3 }));
    if ($tmp4361.value) {
    {
        panda$core$String* $tmp4362 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4359 = $tmp4362;
    }
    }
    else {
    {
        end4359 = ifFalse4345;
    }
    }
    panda$core$Object* $tmp4363 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4364 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4363));
    panda$core$Bit $tmp4365 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4364);
    if ($tmp4365.value) {
    {
        panda$core$String* $tmp4367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4366, end4359);
        panda$core$String* $tmp4369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4367, &$s4368);
        (($fn4370) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4369);
    }
    }
    panda$core$Int64 $tmp4371 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4371, ((panda$core$Int64) { 3 }));
    if ($tmp4372.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse4345, p_out);
        panda$core$Object* $tmp4373 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4373), p_out);
        panda$core$Object* $tmp4374 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4375 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4374));
        panda$core$Bit $tmp4376 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4375);
        if ($tmp4376.value) {
        {
            panda$core$String* $tmp4378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4377, end4359);
            panda$core$String* $tmp4380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4378, &$s4379);
            (($fn4381) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4380);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end4359, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4385;
    panda$core$String* range4396;
    org$pandalanguage$pandac$IRNode* block4399;
    org$pandalanguage$pandac$Type* t4401;
    panda$core$String* llt4404;
    panda$core$String* indexType4406;
    org$pandalanguage$pandac$ClassDecl* cl4412;
    panda$core$String* numberType4420;
    panda$core$String* index4428;
    panda$core$String* start4437;
    panda$core$String* indexValuePtr4446;
    panda$core$String* end4477;
    panda$core$String* inclusive4486;
    panda$core$String* loopStart4495;
    panda$core$String* loopBody4497;
    panda$core$String* loopEnd4499;
    panda$core$String* loopTest4501;
    panda$core$String* forwardEntry4505;
    panda$core$String* backwardEntry4507;
    panda$core$String* signPrefix4509;
    panda$core$String* forwardEntryInclusive4521;
    panda$core$String* forwardEntryExclusive4523;
    panda$core$String* forwardEntryInclusiveTest4538;
    panda$core$String* forwardEntryExclusiveTest4568;
    panda$core$String* indexValue4598;
    panda$core$String* loopInc4620;
    panda$core$String* forwardDelta4622;
    panda$core$String* forwardInclusiveLabel4637;
    panda$core$String* forwardExclusiveLabel4639;
    panda$core$String* forwardInclusiveTest4650;
    panda$core$String* forwardExclusiveTest4673;
    panda$core$String* inc4696;
    panda$core$String* incStruct4708;
    panda$core$Bit $tmp4382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4382.value);
    panda$core$Int64 $tmp4383 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4383, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4384.value);
    panda$core$Object* $tmp4386 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4385 = ((org$pandalanguage$pandac$IRNode*) $tmp4386);
    panda$core$Object* $tmp4387 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4387)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4388.value);
    panda$core$Object* $tmp4389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4390 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4389)->type->subtypes);
    panda$core$Bit $tmp4391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4390, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4391.value);
    panda$core$Object* $tmp4392 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4393 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4392)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4395 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4393))->name, &$s4394);
    PANDA_ASSERT($tmp4395.value);
    panda$core$Object* $tmp4397 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4398 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4397), p_out);
    range4396 = $tmp4398;
    panda$core$Object* $tmp4400 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4399 = ((org$pandalanguage$pandac$IRNode*) $tmp4400);
    panda$core$Object* $tmp4402 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4403 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4402)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4401 = ((org$pandalanguage$pandac$Type*) $tmp4403);
    panda$core$String* $tmp4405 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4401);
    llt4404 = $tmp4405;
    panda$core$Bit $tmp4407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4401->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4407.value) {
    {
        panda$core$Int64 $tmp4408 = panda$collections$Array$get_count$R$panda$core$Int64(t4401->subtypes);
        panda$core$Bit $tmp4409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4408, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4409.value);
        panda$core$Object* $tmp4410 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4401->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4411 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4410));
        indexType4406 = $tmp4411;
    }
    }
    else {
    {
        indexType4406 = llt4404;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4413 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4401);
    cl4412 = $tmp4413;
    PANDA_ASSERT(((panda$core$Bit) { cl4412 != NULL }).value);
    panda$collections$ListView* $tmp4414 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4412);
    ITable* $tmp4415 = ((panda$collections$CollectionView*) $tmp4414)->$class->itable;
    while ($tmp4415->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4415 = $tmp4415->next;
    }
    $fn4417 $tmp4416 = $tmp4415->methods[0];
    panda$core$Int64 $tmp4418 = $tmp4416(((panda$collections$CollectionView*) $tmp4414));
    panda$core$Bit $tmp4419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4418, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4419.value);
    panda$collections$ListView* $tmp4421 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4412);
    ITable* $tmp4422 = $tmp4421->$class->itable;
    while ($tmp4422->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4422 = $tmp4422->next;
    }
    $fn4424 $tmp4423 = $tmp4422->methods[0];
    panda$core$Object* $tmp4425 = $tmp4423($tmp4421, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4426 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4425)->type);
    numberType4420 = $tmp4426;
    panda$core$Bit $tmp4427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4385->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4427.value);
    panda$core$String* $tmp4429 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4385->payload));
    index4428 = $tmp4429;
    panda$core$String* $tmp4430 = panda$core$String$convert$R$panda$core$String(index4428);
    panda$core$String* $tmp4432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4430, &$s4431);
    panda$core$String* $tmp4433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4432, indexType4406);
    panda$core$String* $tmp4435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4433, &$s4434);
    (($fn4436) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4435);
    panda$core$String* $tmp4438 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4437 = $tmp4438;
    panda$core$String* $tmp4439 = panda$core$String$convert$R$panda$core$String(start4437);
    panda$core$String* $tmp4441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4439, &$s4440);
    panda$core$String* $tmp4442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4441, range4396);
    panda$core$String* $tmp4444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4442, &$s4443);
    (($fn4445) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4444);
    panda$core$String* $tmp4447 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4446 = $tmp4447;
    panda$core$String* $tmp4448 = panda$core$String$convert$R$panda$core$String(indexValuePtr4446);
    panda$core$String* $tmp4450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4448, &$s4449);
    panda$core$String* $tmp4451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4450, indexType4406);
    panda$core$String* $tmp4453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4451, &$s4452);
    panda$core$String* $tmp4454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4453, indexType4406);
    panda$core$String* $tmp4456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4454, &$s4455);
    panda$core$String* $tmp4457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4456, index4428);
    panda$core$String* $tmp4459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4457, &$s4458);
    panda$core$String* $tmp4461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4459, &$s4460);
    (($fn4462) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4461);
    panda$core$String* $tmp4464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4463, numberType4420);
    panda$core$String* $tmp4466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4464, &$s4465);
    panda$core$String* $tmp4467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4466, start4437);
    panda$core$String* $tmp4469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4467, &$s4468);
    panda$core$String* $tmp4470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4469, numberType4420);
    panda$core$String* $tmp4472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4470, &$s4471);
    panda$core$String* $tmp4473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4472, indexValuePtr4446);
    panda$core$String* $tmp4475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4473, &$s4474);
    (($fn4476) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4475);
    panda$core$String* $tmp4478 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4477 = $tmp4478;
    panda$core$String* $tmp4479 = panda$core$String$convert$R$panda$core$String(end4477);
    panda$core$String* $tmp4481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4479, &$s4480);
    panda$core$String* $tmp4482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4481, range4396);
    panda$core$String* $tmp4484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4482, &$s4483);
    (($fn4485) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4484);
    panda$core$String* $tmp4487 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4486 = $tmp4487;
    panda$core$String* $tmp4488 = panda$core$String$convert$R$panda$core$String(inclusive4486);
    panda$core$String* $tmp4490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4488, &$s4489);
    panda$core$String* $tmp4491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4490, range4396);
    panda$core$String* $tmp4493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4491, &$s4492);
    (($fn4494) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4493);
    panda$core$String* $tmp4496 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4495 = $tmp4496;
    panda$core$String* $tmp4498 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4497 = $tmp4498;
    panda$core$String* $tmp4500 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4499 = $tmp4500;
    panda$core$String* $tmp4502 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4501 = $tmp4502;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4503 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4503->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4503->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4503, ((panda$core$String*) p_f->payload), loopEnd4499, loopTest4501);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4503));
    panda$core$String* $tmp4506 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4505 = $tmp4506;
    panda$core$String* $tmp4508 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4507 = $tmp4508;
    panda$core$Bit $tmp4511 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4401)->name, &$s4510);
    if ($tmp4511.value) {
    {
        signPrefix4509 = &$s4512;
    }
    }
    else {
    {
        panda$core$Bit $tmp4515 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4401)->name, &$s4514);
        bool $tmp4513 = $tmp4515.value;
        if ($tmp4513) goto $l4516;
        panda$core$Bit $tmp4518 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4401)->name, &$s4517);
        $tmp4513 = $tmp4518.value;
        $l4516:;
        panda$core$Bit $tmp4519 = { $tmp4513 };
        PANDA_ASSERT($tmp4519.value);
        signPrefix4509 = &$s4520;
    }
    }
    panda$core$String* $tmp4522 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4521 = $tmp4522;
    panda$core$String* $tmp4524 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4523 = $tmp4524;
    panda$core$String* $tmp4526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4525, inclusive4486);
    panda$core$String* $tmp4528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4526, &$s4527);
    panda$core$String* $tmp4529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4528, forwardEntryInclusive4521);
    panda$core$String* $tmp4531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4529, &$s4530);
    panda$core$String* $tmp4533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4532, forwardEntryExclusive4523);
    panda$core$String* $tmp4535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4533, &$s4534);
    panda$core$String* $tmp4536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4531, $tmp4535);
    (($fn4537) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4536);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4521, p_out);
    panda$core$String* $tmp4539 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4538 = $tmp4539;
    panda$core$String* $tmp4540 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4538);
    panda$core$String* $tmp4542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4540, &$s4541);
    panda$core$String* $tmp4543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4542, signPrefix4509);
    panda$core$String* $tmp4545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4543, &$s4544);
    panda$core$String* $tmp4546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4545, numberType4420);
    panda$core$String* $tmp4548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4546, &$s4547);
    panda$core$String* $tmp4549 = panda$core$String$convert$R$panda$core$String(start4437);
    panda$core$String* $tmp4551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4549, &$s4550);
    panda$core$String* $tmp4552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4551, end4477);
    panda$core$String* $tmp4554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4552, &$s4553);
    panda$core$String* $tmp4555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4548, $tmp4554);
    (($fn4556) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4555);
    panda$core$String* $tmp4558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4557, forwardEntryInclusiveTest4538);
    panda$core$String* $tmp4560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4558, &$s4559);
    panda$core$String* $tmp4561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4560, loopStart4495);
    panda$core$String* $tmp4563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4561, &$s4562);
    panda$core$String* $tmp4564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4563, loopEnd4499);
    panda$core$String* $tmp4566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4564, &$s4565);
    (($fn4567) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4566);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4523, p_out);
    panda$core$String* $tmp4569 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4568 = $tmp4569;
    panda$core$String* $tmp4570 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4568);
    panda$core$String* $tmp4572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4570, &$s4571);
    panda$core$String* $tmp4573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4572, signPrefix4509);
    panda$core$String* $tmp4575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4573, &$s4574);
    panda$core$String* $tmp4576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4575, numberType4420);
    panda$core$String* $tmp4578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4576, &$s4577);
    panda$core$String* $tmp4579 = panda$core$String$convert$R$panda$core$String(start4437);
    panda$core$String* $tmp4581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4579, &$s4580);
    panda$core$String* $tmp4582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4581, end4477);
    panda$core$String* $tmp4584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4582, &$s4583);
    panda$core$String* $tmp4585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4578, $tmp4584);
    (($fn4586) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4585);
    panda$core$String* $tmp4588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4587, forwardEntryExclusiveTest4568);
    panda$core$String* $tmp4590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4588, &$s4589);
    panda$core$String* $tmp4591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4590, loopStart4495);
    panda$core$String* $tmp4593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4591, &$s4592);
    panda$core$String* $tmp4594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4593, loopEnd4499);
    panda$core$String* $tmp4596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4594, &$s4595);
    (($fn4597) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4596);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4495, p_out);
    panda$core$String* $tmp4599 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4598 = $tmp4599;
    panda$core$String* $tmp4600 = panda$core$String$convert$R$panda$core$String(indexValue4598);
    panda$core$String* $tmp4602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4600, &$s4601);
    panda$core$String* $tmp4603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4602, numberType4420);
    panda$core$String* $tmp4605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4603, &$s4604);
    panda$core$String* $tmp4606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4605, numberType4420);
    panda$core$String* $tmp4608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4606, &$s4607);
    panda$core$String* $tmp4609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4608, indexValuePtr4446);
    panda$core$String* $tmp4611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4609, &$s4610);
    (($fn4612) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4611);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4399, p_out);
    panda$core$Bit $tmp4613 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4399);
    panda$core$Bit $tmp4614 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4613);
    if ($tmp4614.value) {
    {
        panda$core$String* $tmp4616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4615, loopTest4501);
        panda$core$String* $tmp4618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4616, &$s4617);
        (($fn4619) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4618);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4501, p_out);
    panda$core$String* $tmp4621 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc4620 = $tmp4621;
    panda$core$String* $tmp4623 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta4622 = $tmp4623;
    panda$core$String* $tmp4624 = panda$core$String$convert$R$panda$core$String(forwardDelta4622);
    panda$core$String* $tmp4626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4624, &$s4625);
    panda$core$String* $tmp4627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4626, numberType4420);
    panda$core$String* $tmp4629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4627, &$s4628);
    panda$core$String* $tmp4630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4629, end4477);
    panda$core$String* $tmp4632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4630, &$s4631);
    panda$core$String* $tmp4633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4632, indexValue4598);
    panda$core$String* $tmp4635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4633, &$s4634);
    (($fn4636) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4635);
    panda$core$String* $tmp4638 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel4637 = $tmp4638;
    panda$core$String* $tmp4640 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel4639 = $tmp4640;
    panda$core$String* $tmp4642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4641, inclusive4486);
    panda$core$String* $tmp4644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4642, &$s4643);
    panda$core$String* $tmp4645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4644, forwardInclusiveLabel4637);
    panda$core$String* $tmp4647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4645, &$s4646);
    panda$core$String* $tmp4648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4647, forwardExclusiveLabel4639);
    (($fn4649) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4648);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel4637, p_out);
    panda$core$String* $tmp4651 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest4650 = $tmp4651;
    panda$core$String* $tmp4652 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest4650);
    panda$core$String* $tmp4654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4652, &$s4653);
    panda$core$String* $tmp4655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4654, numberType4420);
    panda$core$String* $tmp4657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4655, &$s4656);
    panda$core$String* $tmp4658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4657, forwardDelta4622);
    panda$core$String* $tmp4660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4658, &$s4659);
    (($fn4661) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4660);
    panda$core$String* $tmp4663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4662, forwardInclusiveTest4650);
    panda$core$String* $tmp4665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4663, &$s4664);
    panda$core$String* $tmp4666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4665, loopInc4620);
    panda$core$String* $tmp4668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4666, &$s4667);
    panda$core$String* $tmp4669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4668, loopEnd4499);
    panda$core$String* $tmp4671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4669, &$s4670);
    (($fn4672) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4671);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel4639, p_out);
    panda$core$String* $tmp4674 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest4673 = $tmp4674;
    panda$core$String* $tmp4675 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest4673);
    panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4675, &$s4676);
    panda$core$String* $tmp4678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4677, numberType4420);
    panda$core$String* $tmp4680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4678, &$s4679);
    panda$core$String* $tmp4681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4680, forwardDelta4622);
    panda$core$String* $tmp4683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4681, &$s4682);
    (($fn4684) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4683);
    panda$core$String* $tmp4686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4685, forwardExclusiveTest4673);
    panda$core$String* $tmp4688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4686, &$s4687);
    panda$core$String* $tmp4689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4688, loopInc4620);
    panda$core$String* $tmp4691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4689, &$s4690);
    panda$core$String* $tmp4692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4691, loopEnd4499);
    panda$core$String* $tmp4694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4692, &$s4693);
    (($fn4695) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4694);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc4620, p_out);
    panda$core$String* $tmp4697 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc4696 = $tmp4697;
    panda$core$String* $tmp4698 = panda$core$String$convert$R$panda$core$String(inc4696);
    panda$core$String* $tmp4700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4698, &$s4699);
    panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4700, numberType4420);
    panda$core$String* $tmp4703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4701, &$s4702);
    panda$core$String* $tmp4704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4703, indexValue4598);
    panda$core$String* $tmp4706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4704, &$s4705);
    (($fn4707) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4706);
    panda$core$String* $tmp4709 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct4708 = $tmp4709;
    panda$core$String* $tmp4710 = panda$core$String$convert$R$panda$core$String(incStruct4708);
    panda$core$String* $tmp4712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4710, &$s4711);
    panda$core$String* $tmp4713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4712, indexType4406);
    panda$core$String* $tmp4715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4713, &$s4714);
    panda$core$String* $tmp4716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4715, numberType4420);
    panda$core$String* $tmp4718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4716, &$s4717);
    (($fn4719) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4718);
    panda$core$String* $tmp4721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4720, numberType4420);
    panda$core$String* $tmp4723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4721, &$s4722);
    panda$core$String* $tmp4724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4723, inc4696);
    panda$core$String* $tmp4726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4724, &$s4725);
    (($fn4727) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4726);
    panda$core$String* $tmp4729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4728, indexType4406);
    panda$core$String* $tmp4731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4729, &$s4730);
    panda$core$String* $tmp4732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4731, incStruct4708);
    panda$core$String* $tmp4734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4732, &$s4733);
    panda$core$String* $tmp4735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4734, indexType4406);
    panda$core$String* $tmp4737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4735, &$s4736);
    panda$core$String* $tmp4738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4737, index4428);
    panda$core$String* $tmp4740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4738, &$s4739);
    (($fn4741) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4740);
    panda$core$String* $tmp4743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4742, loopStart4495);
    panda$core$String* $tmp4745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4743, &$s4744);
    (($fn4746) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4745);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4499, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4750;
    panda$core$String* range4761;
    org$pandalanguage$pandac$IRNode* block4764;
    org$pandalanguage$pandac$Type* t4766;
    panda$core$String* llt4769;
    panda$core$String* indexType4771;
    org$pandalanguage$pandac$ClassDecl* cl4777;
    panda$core$String* numberType4785;
    panda$core$String* index4793;
    panda$core$String* start4802;
    panda$core$String* indexValuePtr4811;
    panda$core$String* end4842;
    panda$core$String* rawStep4851;
    panda$core$String* step4860;
    panda$core$String* inclusive4874;
    panda$core$String* loopStart4883;
    panda$core$String* loopBody4885;
    panda$core$String* loopEnd4887;
    panda$core$String* loopTest4889;
    panda$core$String* forwardEntry4893;
    panda$core$String* backwardEntry4895;
    panda$core$String* signPrefix4897;
    panda$core$String* direction4909;
    panda$core$String* forwardEntryInclusive4935;
    panda$core$String* forwardEntryExclusive4937;
    panda$core$String* forwardEntryInclusiveTest4952;
    panda$core$String* forwardEntryExclusiveTest4982;
    panda$core$String* backwardEntryInclusive5012;
    panda$core$String* backwardEntryExclusive5014;
    panda$core$String* backwardEntryInclusiveTest5029;
    panda$core$String* backwardEntryExclusiveTest5059;
    panda$core$String* indexValue5089;
    panda$core$String* loopInc5111;
    panda$core$String* forwardLabel5113;
    panda$core$String* backwardLabel5115;
    panda$core$String* forwardDelta5128;
    panda$core$String* forwardInclusiveLabel5143;
    panda$core$String* forwardExclusiveLabel5145;
    panda$core$String* forwardInclusiveTest5156;
    panda$core$String* forwardExclusiveTest5182;
    panda$core$String* backwardDelta5208;
    panda$core$String* negStep5223;
    panda$core$String* backwardInclusiveLabel5235;
    panda$core$String* backwardExclusiveLabel5237;
    panda$core$String* backwardInclusiveTest5248;
    panda$core$String* backwardExclusiveTest5272;
    panda$core$String* inc5296;
    panda$core$String* incStruct5311;
    panda$core$Bit $tmp4747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4747.value);
    panda$core$Int64 $tmp4748 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4748, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4749.value);
    panda$core$Object* $tmp4751 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4750 = ((org$pandalanguage$pandac$IRNode*) $tmp4751);
    panda$core$Object* $tmp4752 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4752)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4753.value);
    panda$core$Object* $tmp4754 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4755 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4754)->type->subtypes);
    panda$core$Bit $tmp4756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4755, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4756.value);
    panda$core$Object* $tmp4757 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4758 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4757)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4760 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4758))->name, &$s4759);
    PANDA_ASSERT($tmp4760.value);
    panda$core$Object* $tmp4762 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4763 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4762), p_out);
    range4761 = $tmp4763;
    panda$core$Object* $tmp4765 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4764 = ((org$pandalanguage$pandac$IRNode*) $tmp4765);
    panda$core$Object* $tmp4767 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4768 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4767)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4766 = ((org$pandalanguage$pandac$Type*) $tmp4768);
    panda$core$String* $tmp4770 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4766);
    llt4769 = $tmp4770;
    panda$core$Bit $tmp4772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4766->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4772.value) {
    {
        panda$core$Int64 $tmp4773 = panda$collections$Array$get_count$R$panda$core$Int64(t4766->subtypes);
        panda$core$Bit $tmp4774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4773, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4774.value);
        panda$core$Object* $tmp4775 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4766->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4776 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4775));
        indexType4771 = $tmp4776;
    }
    }
    else {
    {
        indexType4771 = llt4769;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4778 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4766);
    cl4777 = $tmp4778;
    PANDA_ASSERT(((panda$core$Bit) { cl4777 != NULL }).value);
    panda$collections$ListView* $tmp4779 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4777);
    ITable* $tmp4780 = ((panda$collections$CollectionView*) $tmp4779)->$class->itable;
    while ($tmp4780->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4780 = $tmp4780->next;
    }
    $fn4782 $tmp4781 = $tmp4780->methods[0];
    panda$core$Int64 $tmp4783 = $tmp4781(((panda$collections$CollectionView*) $tmp4779));
    panda$core$Bit $tmp4784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4783, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4784.value);
    panda$collections$ListView* $tmp4786 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4777);
    ITable* $tmp4787 = $tmp4786->$class->itable;
    while ($tmp4787->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4787 = $tmp4787->next;
    }
    $fn4789 $tmp4788 = $tmp4787->methods[0];
    panda$core$Object* $tmp4790 = $tmp4788($tmp4786, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4791 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4790)->type);
    numberType4785 = $tmp4791;
    panda$core$Bit $tmp4792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4750->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4792.value);
    panda$core$String* $tmp4794 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4750->payload));
    index4793 = $tmp4794;
    panda$core$String* $tmp4795 = panda$core$String$convert$R$panda$core$String(index4793);
    panda$core$String* $tmp4797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4795, &$s4796);
    panda$core$String* $tmp4798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4797, indexType4771);
    panda$core$String* $tmp4800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4798, &$s4799);
    (($fn4801) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4800);
    panda$core$String* $tmp4803 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4802 = $tmp4803;
    panda$core$String* $tmp4804 = panda$core$String$convert$R$panda$core$String(start4802);
    panda$core$String* $tmp4806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4804, &$s4805);
    panda$core$String* $tmp4807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4806, range4761);
    panda$core$String* $tmp4809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4807, &$s4808);
    (($fn4810) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4809);
    panda$core$String* $tmp4812 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4811 = $tmp4812;
    panda$core$String* $tmp4813 = panda$core$String$convert$R$panda$core$String(indexValuePtr4811);
    panda$core$String* $tmp4815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4813, &$s4814);
    panda$core$String* $tmp4816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4815, indexType4771);
    panda$core$String* $tmp4818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4816, &$s4817);
    panda$core$String* $tmp4819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4818, indexType4771);
    panda$core$String* $tmp4821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4819, &$s4820);
    panda$core$String* $tmp4822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4821, index4793);
    panda$core$String* $tmp4824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4822, &$s4823);
    panda$core$String* $tmp4826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4824, &$s4825);
    (($fn4827) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4826);
    panda$core$String* $tmp4829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4828, numberType4785);
    panda$core$String* $tmp4831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4829, &$s4830);
    panda$core$String* $tmp4832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4831, start4802);
    panda$core$String* $tmp4834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4832, &$s4833);
    panda$core$String* $tmp4835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4834, numberType4785);
    panda$core$String* $tmp4837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4835, &$s4836);
    panda$core$String* $tmp4838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4837, indexValuePtr4811);
    panda$core$String* $tmp4840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4838, &$s4839);
    (($fn4841) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4840);
    panda$core$String* $tmp4843 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4842 = $tmp4843;
    panda$core$String* $tmp4844 = panda$core$String$convert$R$panda$core$String(end4842);
    panda$core$String* $tmp4846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4844, &$s4845);
    panda$core$String* $tmp4847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4846, range4761);
    panda$core$String* $tmp4849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4847, &$s4848);
    (($fn4850) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4849);
    panda$core$String* $tmp4852 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep4851 = $tmp4852;
    panda$core$String* $tmp4853 = panda$core$String$convert$R$panda$core$String(rawStep4851);
    panda$core$String* $tmp4855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4853, &$s4854);
    panda$core$String* $tmp4856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4855, range4761);
    panda$core$String* $tmp4858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4856, &$s4857);
    (($fn4859) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4858);
    panda$core$Bit $tmp4862 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4785, &$s4861);
    if ($tmp4862.value) {
    {
        panda$core$String* $tmp4863 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step4860 = $tmp4863;
        panda$core$String* $tmp4864 = panda$core$String$convert$R$panda$core$String(step4860);
        panda$core$String* $tmp4866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4864, &$s4865);
        panda$core$String* $tmp4867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4866, rawStep4851);
        panda$core$String* $tmp4869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4867, &$s4868);
        panda$core$String* $tmp4870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4869, numberType4785);
        panda$core$String* $tmp4872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4870, &$s4871);
        (($fn4873) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4872);
    }
    }
    else {
    {
        step4860 = rawStep4851;
    }
    }
    panda$core$String* $tmp4875 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4874 = $tmp4875;
    panda$core$String* $tmp4876 = panda$core$String$convert$R$panda$core$String(inclusive4874);
    panda$core$String* $tmp4878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4876, &$s4877);
    panda$core$String* $tmp4879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4878, range4761);
    panda$core$String* $tmp4881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4879, &$s4880);
    (($fn4882) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4881);
    panda$core$String* $tmp4884 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4883 = $tmp4884;
    panda$core$String* $tmp4886 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4885 = $tmp4886;
    panda$core$String* $tmp4888 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4887 = $tmp4888;
    panda$core$String* $tmp4890 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4889 = $tmp4890;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4891 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4891->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4891->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4891, ((panda$core$String*) p_f->payload), loopEnd4887, loopTest4889);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4891));
    panda$core$String* $tmp4894 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4893 = $tmp4894;
    panda$core$String* $tmp4896 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4895 = $tmp4896;
    panda$core$Bit $tmp4899 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4766)->name, &$s4898);
    if ($tmp4899.value) {
    {
        signPrefix4897 = &$s4900;
    }
    }
    else {
    {
        panda$core$Bit $tmp4903 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4766)->name, &$s4902);
        bool $tmp4901 = $tmp4903.value;
        if ($tmp4901) goto $l4904;
        panda$core$Bit $tmp4906 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4766)->name, &$s4905);
        $tmp4901 = $tmp4906.value;
        $l4904:;
        panda$core$Bit $tmp4907 = { $tmp4901 };
        PANDA_ASSERT($tmp4907.value);
        signPrefix4897 = &$s4908;
    }
    }
    panda$core$Bit $tmp4911 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix4897, &$s4910);
    if ($tmp4911.value) {
    {
        panda$core$String* $tmp4912 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction4909 = $tmp4912;
        panda$core$String* $tmp4913 = panda$core$String$convert$R$panda$core$String(direction4909);
        panda$core$String* $tmp4915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4913, &$s4914);
        panda$core$String* $tmp4916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4915, numberType4785);
        panda$core$String* $tmp4918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4916, &$s4917);
        panda$core$String* $tmp4919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4918, step4860);
        panda$core$String* $tmp4921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4919, &$s4920);
        (($fn4922) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4921);
    }
    }
    else {
    {
        direction4909 = &$s4923;
    }
    }
    panda$core$String* $tmp4925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4924, direction4909);
    panda$core$String* $tmp4927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4925, &$s4926);
    panda$core$String* $tmp4928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4927, forwardEntry4893);
    panda$core$String* $tmp4930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4928, &$s4929);
    panda$core$String* $tmp4931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4930, backwardEntry4895);
    panda$core$String* $tmp4933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4931, &$s4932);
    (($fn4934) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4933);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry4893, p_out);
    panda$core$String* $tmp4936 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4935 = $tmp4936;
    panda$core$String* $tmp4938 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4937 = $tmp4938;
    panda$core$String* $tmp4940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4939, inclusive4874);
    panda$core$String* $tmp4942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4940, &$s4941);
    panda$core$String* $tmp4943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4942, forwardEntryInclusive4935);
    panda$core$String* $tmp4945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4943, &$s4944);
    panda$core$String* $tmp4947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4946, forwardEntryExclusive4937);
    panda$core$String* $tmp4949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4947, &$s4948);
    panda$core$String* $tmp4950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4945, $tmp4949);
    (($fn4951) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4950);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4935, p_out);
    panda$core$String* $tmp4953 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4952 = $tmp4953;
    panda$core$String* $tmp4954 = panda$core$String$convert$R$panda$core$String(forwardEntryInclusiveTest4952);
    panda$core$String* $tmp4956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4954, &$s4955);
    panda$core$String* $tmp4957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4956, signPrefix4897);
    panda$core$String* $tmp4959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4957, &$s4958);
    panda$core$String* $tmp4960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4959, numberType4785);
    panda$core$String* $tmp4962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4960, &$s4961);
    panda$core$String* $tmp4963 = panda$core$String$convert$R$panda$core$String(start4802);
    panda$core$String* $tmp4965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4963, &$s4964);
    panda$core$String* $tmp4966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4965, end4842);
    panda$core$String* $tmp4968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4966, &$s4967);
    panda$core$String* $tmp4969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4962, $tmp4968);
    (($fn4970) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4969);
    panda$core$String* $tmp4972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4971, forwardEntryInclusiveTest4952);
    panda$core$String* $tmp4974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4972, &$s4973);
    panda$core$String* $tmp4975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4974, loopStart4883);
    panda$core$String* $tmp4977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4975, &$s4976);
    panda$core$String* $tmp4978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4977, loopEnd4887);
    panda$core$String* $tmp4980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4978, &$s4979);
    (($fn4981) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4980);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4937, p_out);
    panda$core$String* $tmp4983 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4982 = $tmp4983;
    panda$core$String* $tmp4984 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusiveTest4982);
    panda$core$String* $tmp4986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4984, &$s4985);
    panda$core$String* $tmp4987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4986, signPrefix4897);
    panda$core$String* $tmp4989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4987, &$s4988);
    panda$core$String* $tmp4990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4989, numberType4785);
    panda$core$String* $tmp4992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4990, &$s4991);
    panda$core$String* $tmp4993 = panda$core$String$convert$R$panda$core$String(start4802);
    panda$core$String* $tmp4995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4993, &$s4994);
    panda$core$String* $tmp4996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4995, end4842);
    panda$core$String* $tmp4998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4996, &$s4997);
    panda$core$String* $tmp4999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4992, $tmp4998);
    (($fn5000) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4999);
    panda$core$String* $tmp5002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5001, forwardEntryExclusiveTest4982);
    panda$core$String* $tmp5004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5002, &$s5003);
    panda$core$String* $tmp5005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5004, loopStart4883);
    panda$core$String* $tmp5007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5005, &$s5006);
    panda$core$String* $tmp5008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5007, loopEnd4887);
    panda$core$String* $tmp5010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5008, &$s5009);
    (($fn5011) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5010);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry4895, p_out);
    panda$core$String* $tmp5013 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive5012 = $tmp5013;
    panda$core$String* $tmp5015 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive5014 = $tmp5015;
    panda$core$String* $tmp5017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5016, inclusive4874);
    panda$core$String* $tmp5019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5017, &$s5018);
    panda$core$String* $tmp5020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5019, backwardEntryInclusive5012);
    panda$core$String* $tmp5022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5020, &$s5021);
    panda$core$String* $tmp5024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5023, backwardEntryExclusive5014);
    panda$core$String* $tmp5026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5024, &$s5025);
    panda$core$String* $tmp5027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5022, $tmp5026);
    (($fn5028) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5027);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive5012, p_out);
    panda$core$String* $tmp5030 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5029 = $tmp5030;
    panda$core$String* $tmp5031 = panda$core$String$convert$R$panda$core$String(backwardEntryInclusiveTest5029);
    panda$core$String* $tmp5033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5031, &$s5032);
    panda$core$String* $tmp5034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5033, signPrefix4897);
    panda$core$String* $tmp5036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5034, &$s5035);
    panda$core$String* $tmp5037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5036, numberType4785);
    panda$core$String* $tmp5039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5037, &$s5038);
    panda$core$String* $tmp5040 = panda$core$String$convert$R$panda$core$String(start4802);
    panda$core$String* $tmp5042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5040, &$s5041);
    panda$core$String* $tmp5043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5042, end4842);
    panda$core$String* $tmp5045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5043, &$s5044);
    panda$core$String* $tmp5046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5039, $tmp5045);
    (($fn5047) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5046);
    panda$core$String* $tmp5049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5048, backwardEntryInclusiveTest5029);
    panda$core$String* $tmp5051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5049, &$s5050);
    panda$core$String* $tmp5052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5051, loopStart4883);
    panda$core$String* $tmp5054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5052, &$s5053);
    panda$core$String* $tmp5055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5054, loopEnd4887);
    panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5055, &$s5056);
    (($fn5058) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5057);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive5014, p_out);
    panda$core$String* $tmp5060 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5059 = $tmp5060;
    panda$core$String* $tmp5061 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusiveTest5059);
    panda$core$String* $tmp5063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5061, &$s5062);
    panda$core$String* $tmp5064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5063, signPrefix4897);
    panda$core$String* $tmp5066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5064, &$s5065);
    panda$core$String* $tmp5067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5066, numberType4785);
    panda$core$String* $tmp5069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5067, &$s5068);
    panda$core$String* $tmp5070 = panda$core$String$convert$R$panda$core$String(start4802);
    panda$core$String* $tmp5072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5070, &$s5071);
    panda$core$String* $tmp5073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5072, end4842);
    panda$core$String* $tmp5075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5073, &$s5074);
    panda$core$String* $tmp5076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5069, $tmp5075);
    (($fn5077) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5076);
    panda$core$String* $tmp5079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5078, backwardEntryExclusiveTest5059);
    panda$core$String* $tmp5081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5079, &$s5080);
    panda$core$String* $tmp5082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5081, loopStart4883);
    panda$core$String* $tmp5084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5082, &$s5083);
    panda$core$String* $tmp5085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5084, loopEnd4887);
    panda$core$String* $tmp5087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5085, &$s5086);
    (($fn5088) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5087);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4883, p_out);
    panda$core$String* $tmp5090 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5089 = $tmp5090;
    panda$core$String* $tmp5091 = panda$core$String$convert$R$panda$core$String(indexValue5089);
    panda$core$String* $tmp5093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5091, &$s5092);
    panda$core$String* $tmp5094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5093, numberType4785);
    panda$core$String* $tmp5096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5094, &$s5095);
    panda$core$String* $tmp5097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5096, numberType4785);
    panda$core$String* $tmp5099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5097, &$s5098);
    panda$core$String* $tmp5100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5099, indexValuePtr4811);
    panda$core$String* $tmp5102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5100, &$s5101);
    (($fn5103) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5102);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4764, p_out);
    panda$core$Bit $tmp5104 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4764);
    panda$core$Bit $tmp5105 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5104);
    if ($tmp5105.value) {
    {
        panda$core$String* $tmp5107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5106, loopTest4889);
        panda$core$String* $tmp5109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5107, &$s5108);
        (($fn5110) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5109);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4889, p_out);
    panda$core$String* $tmp5112 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5111 = $tmp5112;
    panda$core$String* $tmp5114 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5113 = $tmp5114;
    panda$core$String* $tmp5116 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5115 = $tmp5116;
    panda$core$String* $tmp5118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5117, direction4909);
    panda$core$String* $tmp5120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5118, &$s5119);
    panda$core$String* $tmp5121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5120, forwardLabel5113);
    panda$core$String* $tmp5123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5121, &$s5122);
    panda$core$String* $tmp5124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5123, backwardLabel5115);
    panda$core$String* $tmp5126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5124, &$s5125);
    (($fn5127) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5126);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel5113, p_out);
    panda$core$String* $tmp5129 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5128 = $tmp5129;
    panda$core$String* $tmp5130 = panda$core$String$convert$R$panda$core$String(forwardDelta5128);
    panda$core$String* $tmp5132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5130, &$s5131);
    panda$core$String* $tmp5133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5132, numberType4785);
    panda$core$String* $tmp5135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5133, &$s5134);
    panda$core$String* $tmp5136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5135, end4842);
    panda$core$String* $tmp5138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5136, &$s5137);
    panda$core$String* $tmp5139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5138, indexValue5089);
    panda$core$String* $tmp5141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5139, &$s5140);
    (($fn5142) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5141);
    panda$core$String* $tmp5144 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5143 = $tmp5144;
    panda$core$String* $tmp5146 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5145 = $tmp5146;
    panda$core$String* $tmp5148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5147, inclusive4874);
    panda$core$String* $tmp5150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5148, &$s5149);
    panda$core$String* $tmp5151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5150, forwardInclusiveLabel5143);
    panda$core$String* $tmp5153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5151, &$s5152);
    panda$core$String* $tmp5154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5153, forwardExclusiveLabel5145);
    (($fn5155) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5154);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel5143, p_out);
    panda$core$String* $tmp5157 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5156 = $tmp5157;
    panda$core$String* $tmp5158 = panda$core$String$convert$R$panda$core$String(forwardInclusiveTest5156);
    panda$core$String* $tmp5160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5158, &$s5159);
    panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5160, numberType4785);
    panda$core$String* $tmp5163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5161, &$s5162);
    panda$core$String* $tmp5164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5163, forwardDelta5128);
    panda$core$String* $tmp5166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5164, &$s5165);
    panda$core$String* $tmp5167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5166, step4860);
    panda$core$String* $tmp5169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5167, &$s5168);
    (($fn5170) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5169);
    panda$core$String* $tmp5172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5171, forwardInclusiveTest5156);
    panda$core$String* $tmp5174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5172, &$s5173);
    panda$core$String* $tmp5175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5174, loopInc5111);
    panda$core$String* $tmp5177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5175, &$s5176);
    panda$core$String* $tmp5178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5177, loopEnd4887);
    panda$core$String* $tmp5180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5178, &$s5179);
    (($fn5181) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5180);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel5145, p_out);
    panda$core$String* $tmp5183 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5182 = $tmp5183;
    panda$core$String* $tmp5184 = panda$core$String$convert$R$panda$core$String(forwardExclusiveTest5182);
    panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5184, &$s5185);
    panda$core$String* $tmp5187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5186, numberType4785);
    panda$core$String* $tmp5189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5187, &$s5188);
    panda$core$String* $tmp5190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5189, forwardDelta5128);
    panda$core$String* $tmp5192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5190, &$s5191);
    panda$core$String* $tmp5193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5192, step4860);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5193, &$s5194);
    (($fn5196) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5195);
    panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5197, forwardExclusiveTest5182);
    panda$core$String* $tmp5200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5198, &$s5199);
    panda$core$String* $tmp5201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5200, loopInc5111);
    panda$core$String* $tmp5203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5201, &$s5202);
    panda$core$String* $tmp5204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5203, loopEnd4887);
    panda$core$String* $tmp5206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5204, &$s5205);
    (($fn5207) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5206);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel5115, p_out);
    panda$core$String* $tmp5209 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5208 = $tmp5209;
    panda$core$String* $tmp5210 = panda$core$String$convert$R$panda$core$String(backwardDelta5208);
    panda$core$String* $tmp5212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5210, &$s5211);
    panda$core$String* $tmp5213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5212, numberType4785);
    panda$core$String* $tmp5215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5213, &$s5214);
    panda$core$String* $tmp5216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5215, indexValue5089);
    panda$core$String* $tmp5218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5216, &$s5217);
    panda$core$String* $tmp5219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5218, end4842);
    panda$core$String* $tmp5221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5219, &$s5220);
    (($fn5222) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5221);
    panda$core$String* $tmp5224 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5223 = $tmp5224;
    panda$core$String* $tmp5225 = panda$core$String$convert$R$panda$core$String(negStep5223);
    panda$core$String* $tmp5227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5225, &$s5226);
    panda$core$String* $tmp5228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5227, numberType4785);
    panda$core$String* $tmp5230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5228, &$s5229);
    panda$core$String* $tmp5231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5230, step4860);
    panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5231, &$s5232);
    (($fn5234) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5233);
    panda$core$String* $tmp5236 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5235 = $tmp5236;
    panda$core$String* $tmp5238 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5237 = $tmp5238;
    panda$core$String* $tmp5240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5239, inclusive4874);
    panda$core$String* $tmp5242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5240, &$s5241);
    panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5242, backwardInclusiveLabel5235);
    panda$core$String* $tmp5245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5243, &$s5244);
    panda$core$String* $tmp5246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5245, backwardExclusiveLabel5237);
    (($fn5247) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5246);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel5235, p_out);
    panda$core$String* $tmp5249 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5248 = $tmp5249;
    panda$core$String* $tmp5250 = panda$core$String$convert$R$panda$core$String(backwardInclusiveTest5248);
    panda$core$String* $tmp5252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5250, &$s5251);
    panda$core$String* $tmp5253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5252, numberType4785);
    panda$core$String* $tmp5255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5253, &$s5254);
    panda$core$String* $tmp5256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5255, backwardDelta5208);
    panda$core$String* $tmp5258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5256, &$s5257);
    panda$core$String* $tmp5259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5258, negStep5223);
    (($fn5260) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5259);
    panda$core$String* $tmp5262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5261, backwardInclusiveTest5248);
    panda$core$String* $tmp5264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5262, &$s5263);
    panda$core$String* $tmp5265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5264, loopInc5111);
    panda$core$String* $tmp5267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5265, &$s5266);
    panda$core$String* $tmp5268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5267, loopEnd4887);
    panda$core$String* $tmp5270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5268, &$s5269);
    (($fn5271) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5270);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel5237, p_out);
    panda$core$String* $tmp5273 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5272 = $tmp5273;
    panda$core$String* $tmp5274 = panda$core$String$convert$R$panda$core$String(backwardExclusiveTest5272);
    panda$core$String* $tmp5276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5274, &$s5275);
    panda$core$String* $tmp5277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5276, numberType4785);
    panda$core$String* $tmp5279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5277, &$s5278);
    panda$core$String* $tmp5280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5279, backwardDelta5208);
    panda$core$String* $tmp5282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5280, &$s5281);
    panda$core$String* $tmp5283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5282, negStep5223);
    (($fn5284) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5283);
    panda$core$String* $tmp5286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5285, backwardExclusiveTest5272);
    panda$core$String* $tmp5288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5286, &$s5287);
    panda$core$String* $tmp5289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5288, loopInc5111);
    panda$core$String* $tmp5291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5289, &$s5290);
    panda$core$String* $tmp5292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5291, loopEnd4887);
    panda$core$String* $tmp5294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5292, &$s5293);
    (($fn5295) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5294);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc5111, p_out);
    panda$core$String* $tmp5297 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5296 = $tmp5297;
    panda$core$String* $tmp5298 = panda$core$String$convert$R$panda$core$String(inc5296);
    panda$core$String* $tmp5300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5298, &$s5299);
    panda$core$String* $tmp5301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5300, numberType4785);
    panda$core$String* $tmp5303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5301, &$s5302);
    panda$core$String* $tmp5304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5303, indexValue5089);
    panda$core$String* $tmp5306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5304, &$s5305);
    panda$core$String* $tmp5307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5306, step4860);
    panda$core$String* $tmp5309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5307, &$s5308);
    (($fn5310) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5309);
    panda$core$String* $tmp5312 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5311 = $tmp5312;
    panda$core$String* $tmp5313 = panda$core$String$convert$R$panda$core$String(incStruct5311);
    panda$core$String* $tmp5315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5313, &$s5314);
    panda$core$String* $tmp5316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5315, indexType4771);
    panda$core$String* $tmp5318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5316, &$s5317);
    panda$core$String* $tmp5319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5318, numberType4785);
    panda$core$String* $tmp5321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5319, &$s5320);
    (($fn5322) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5321);
    panda$core$String* $tmp5324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5323, numberType4785);
    panda$core$String* $tmp5326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5324, &$s5325);
    panda$core$String* $tmp5327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5326, inc5296);
    panda$core$String* $tmp5329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5327, &$s5328);
    (($fn5330) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5329);
    panda$core$String* $tmp5332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5331, indexType4771);
    panda$core$String* $tmp5334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5332, &$s5333);
    panda$core$String* $tmp5335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5334, incStruct5311);
    panda$core$String* $tmp5337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5335, &$s5336);
    panda$core$String* $tmp5338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5337, indexType4771);
    panda$core$String* $tmp5340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5338, &$s5339);
    panda$core$String* $tmp5341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5340, index4793);
    panda$core$String* $tmp5343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5341, &$s5342);
    (($fn5344) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5343);
    panda$core$String* $tmp5346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5345, loopStart4883);
    panda$core$String* $tmp5348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5346, &$s5347);
    (($fn5349) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5348);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4887, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp5350 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5351 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5350)->type);
    if ($tmp5351.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5352 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5353 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5352)->type);
    if ($tmp5353.value) {
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
    panda$core$String* loopStart5360;
    panda$core$String* loopBody5362;
    panda$core$String* loopEnd5364;
    panda$core$String* test5373;
    panda$core$String* testBit5376;
    panda$core$Bit $tmp5354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5354.value);
    panda$core$Int64 $tmp5355 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5355, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5356.value);
    panda$core$Object* $tmp5357 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5358 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5359 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5357)->type, $tmp5358);
    PANDA_ASSERT($tmp5359.value);
    panda$core$String* $tmp5361 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5360 = $tmp5361;
    panda$core$String* $tmp5363 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5362 = $tmp5363;
    panda$core$String* $tmp5365 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5364 = $tmp5365;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5366 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5366->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5366->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5366, ((panda$core$String*) p_w->payload), loopEnd5364, loopStart5360);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5366));
    panda$core$String* $tmp5369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5368, loopStart5360);
    panda$core$String* $tmp5371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5369, &$s5370);
    (($fn5372) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5371);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5360, p_out);
    panda$core$Object* $tmp5374 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5375 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5374), p_out);
    test5373 = $tmp5375;
    panda$core$String* $tmp5377 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5376 = $tmp5377;
    panda$core$String* $tmp5378 = panda$core$String$convert$R$panda$core$String(testBit5376);
    panda$core$String* $tmp5380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5378, &$s5379);
    panda$core$String* $tmp5381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5380, test5373);
    panda$core$String* $tmp5383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5381, &$s5382);
    (($fn5384) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5383);
    panda$core$String* $tmp5386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5385, testBit5376);
    panda$core$String* $tmp5388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5386, &$s5387);
    panda$core$String* $tmp5389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5388, loopBody5362);
    panda$core$String* $tmp5391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5389, &$s5390);
    panda$core$String* $tmp5392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5391, loopEnd5364);
    panda$core$String* $tmp5394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5392, &$s5393);
    (($fn5395) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5394);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5362, p_out);
    panda$core$Object* $tmp5396 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5396), p_out);
    panda$core$Object* $tmp5397 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5398 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5397));
    panda$core$Bit $tmp5399 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5398);
    if ($tmp5399.value) {
    {
        panda$core$String* $tmp5401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5400, loopStart5360);
        panda$core$String* $tmp5403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5401, &$s5402);
        (($fn5404) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5403);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5364, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5411;
    panda$core$String* loopBody5413;
    panda$core$String* loopEnd5415;
    panda$core$String* test5424;
    panda$core$String* testBit5427;
    panda$core$Bit $tmp5405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5405.value);
    panda$core$Int64 $tmp5406 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5406, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5407.value);
    panda$core$Object* $tmp5408 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5409 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5410 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5408)->type, $tmp5409);
    PANDA_ASSERT($tmp5410.value);
    panda$core$String* $tmp5412 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5411 = $tmp5412;
    panda$core$String* $tmp5414 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5413 = $tmp5414;
    panda$core$String* $tmp5416 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5415 = $tmp5416;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5417 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5417->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5417->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5417, ((panda$core$String*) p_d->payload), loopEnd5415, loopStart5411);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5417));
    panda$core$String* $tmp5420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5419, loopBody5413);
    panda$core$String* $tmp5422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5420, &$s5421);
    (($fn5423) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5422);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5411, p_out);
    panda$core$Object* $tmp5425 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5426 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5425), p_out);
    test5424 = $tmp5426;
    panda$core$String* $tmp5428 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5427 = $tmp5428;
    panda$core$String* $tmp5429 = panda$core$String$convert$R$panda$core$String(testBit5427);
    panda$core$String* $tmp5431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5429, &$s5430);
    panda$core$String* $tmp5432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5431, test5424);
    panda$core$String* $tmp5434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5432, &$s5433);
    (($fn5435) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5434);
    panda$core$String* $tmp5437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5436, testBit5427);
    panda$core$String* $tmp5439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5437, &$s5438);
    panda$core$String* $tmp5440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5439, loopBody5413);
    panda$core$String* $tmp5442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5440, &$s5441);
    panda$core$String* $tmp5443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5442, loopEnd5415);
    panda$core$String* $tmp5445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5443, &$s5444);
    (($fn5446) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5445);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5413, p_out);
    panda$core$Object* $tmp5447 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5447), p_out);
    panda$core$Object* $tmp5448 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5449 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5448));
    panda$core$Bit $tmp5450 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5449);
    if ($tmp5450.value) {
    {
        panda$core$String* $tmp5452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5451, loopStart5411);
        panda$core$String* $tmp5454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5452, &$s5453);
        (($fn5455) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5454);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5415, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5459;
    panda$core$String* loopEnd5461;
    panda$core$Bit $tmp5456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5456.value);
    panda$core$Int64 $tmp5457 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5457, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5458.value);
    panda$core$String* $tmp5460 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5459 = $tmp5460;
    panda$core$String* $tmp5462 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5461 = $tmp5462;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5463 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5463->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5463->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5463, ((panda$core$String*) p_l->payload), loopEnd5461, loopStart5459);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5463));
    panda$core$String* $tmp5466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5465, loopStart5459);
    panda$core$String* $tmp5468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5466, &$s5467);
    (($fn5469) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5468);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5459, p_out);
    panda$core$Object* $tmp5470 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5470), p_out);
    panda$core$Object* $tmp5471 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5472 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5471));
    panda$core$Bit $tmp5473 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5472);
    if ($tmp5473.value) {
    {
        panda$core$String* $tmp5475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5474, loopStart5459);
        panda$core$String* $tmp5477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5475, &$s5476);
        (($fn5478) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5477);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5461, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5479;
    panda$core$String* ref5489;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5479 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5480 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5479);
            panda$core$String* $tmp5481 = panda$core$String$convert$R$panda$core$String($tmp5480);
            panda$core$String* $tmp5483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5481, &$s5482);
            panda$core$String* $tmp5484 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5479->type);
            panda$core$String* $tmp5485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5483, $tmp5484);
            panda$core$String* $tmp5487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5485, &$s5486);
            (($fn5488) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5487);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5490 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                ref5489 = $tmp5490;
                panda$core$String* $tmp5492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5491, ref5489);
                panda$core$String* $tmp5494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5492, &$s5493);
                panda$core$String* $tmp5495 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5479->type);
                panda$core$String* $tmp5496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5494, $tmp5495);
                panda$core$String* $tmp5498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5496, &$s5497);
                panda$core$String* $tmp5499 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5479);
                panda$core$String* $tmp5500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5498, $tmp5499);
                panda$core$String* $tmp5502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5500, &$s5501);
                (($fn5503) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5502);
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
    panda$collections$Iterator* decl$Iter5517;
    org$pandalanguage$pandac$IRNode* decl5529;
    panda$core$Bit $tmp5507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5506 = $tmp5507.value;
    if ($tmp5506) goto $l5508;
    panda$core$Bit $tmp5509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5506 = $tmp5509.value;
    $l5508:;
    panda$core$Bit $tmp5510 = { $tmp5506 };
    bool $tmp5505 = $tmp5510.value;
    if ($tmp5505) goto $l5511;
    panda$core$Bit $tmp5512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5505 = $tmp5512.value;
    $l5511:;
    panda$core$Bit $tmp5513 = { $tmp5505 };
    bool $tmp5504 = $tmp5513.value;
    if ($tmp5504) goto $l5514;
    panda$core$Bit $tmp5515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5504 = $tmp5515.value;
    $l5514:;
    panda$core$Bit $tmp5516 = { $tmp5504 };
    PANDA_ASSERT($tmp5516.value);
    {
        ITable* $tmp5518 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5518->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5518 = $tmp5518->next;
        }
        $fn5520 $tmp5519 = $tmp5518->methods[0];
        panda$collections$Iterator* $tmp5521 = $tmp5519(((panda$collections$Iterable*) p_v->children));
        decl$Iter5517 = $tmp5521;
        $l5522:;
        ITable* $tmp5524 = decl$Iter5517->$class->itable;
        while ($tmp5524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5524 = $tmp5524->next;
        }
        $fn5526 $tmp5525 = $tmp5524->methods[0];
        panda$core$Bit $tmp5527 = $tmp5525(decl$Iter5517);
        panda$core$Bit $tmp5528 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5527);
        if (!$tmp5528.value) goto $l5523;
        {
            ITable* $tmp5530 = decl$Iter5517->$class->itable;
            while ($tmp5530->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5530 = $tmp5530->next;
            }
            $fn5532 $tmp5531 = $tmp5530->methods[1];
            panda$core$Object* $tmp5533 = $tmp5531(decl$Iter5517);
            decl5529 = ((org$pandalanguage$pandac$IRNode*) $tmp5533);
            panda$core$Bit $tmp5534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5529->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5534.value);
            panda$core$Int64 $tmp5535 = panda$collections$Array$get_count$R$panda$core$Int64(decl5529->children);
            panda$core$Bit $tmp5536 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5535, ((panda$core$Int64) { 1 }));
            if ($tmp5536.value) {
            {
                panda$core$Object* $tmp5537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5529->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5538 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5529->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5537), ((org$pandalanguage$pandac$IRNode*) $tmp5538), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5529->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5539), NULL, p_out);
            }
            }
        }
        goto $l5522;
        $l5523:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base5543;
    panda$core$String* raw5546;
    org$pandalanguage$pandac$ClassDecl* cl5548;
    org$pandalanguage$pandac$FieldDecl* f5551;
    panda$collections$ListView* fields5552;
    panda$core$Int64 index5554;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5555;
    panda$core$String* result5615;
    panda$core$String* result5628;
    panda$core$String* reused5631;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5540 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5541 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp5540, p_out);
            return $tmp5541;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5542 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5542;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5544 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5545 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5544), p_out);
            base5543 = $tmp5545;
            panda$core$String* $tmp5547 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            raw5546 = $tmp5547;
            panda$core$Object* $tmp5549 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5550 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5549)->type);
            cl5548 = $tmp5550;
            PANDA_ASSERT(((panda$core$Bit) { cl5548 != NULL }).value);
            f5551 = ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload);
            panda$collections$ListView* $tmp5553 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5548);
            fields5552 = $tmp5553;
            index5554 = ((panda$core$Int64) { -1 });
            ITable* $tmp5556 = ((panda$collections$CollectionView*) fields5552)->$class->itable;
            while ($tmp5556->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5556 = $tmp5556->next;
            }
            $fn5558 $tmp5557 = $tmp5556->methods[0];
            panda$core$Int64 $tmp5559 = $tmp5557(((panda$collections$CollectionView*) fields5552));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5555, ((panda$core$Int64) { 0 }), $tmp5559, ((panda$core$Bit) { false }));
            int64_t $tmp5561 = $tmp5555.min.value;
            panda$core$Int64 i5560 = { $tmp5561 };
            int64_t $tmp5563 = $tmp5555.max.value;
            bool $tmp5564 = $tmp5555.inclusive.value;
            if ($tmp5564) goto $l5571; else goto $l5572;
            $l5571:;
            if ($tmp5561 <= $tmp5563) goto $l5565; else goto $l5567;
            $l5572:;
            if ($tmp5561 < $tmp5563) goto $l5565; else goto $l5567;
            $l5565:;
            {
                ITable* $tmp5573 = fields5552->$class->itable;
                while ($tmp5573->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5573 = $tmp5573->next;
                }
                $fn5575 $tmp5574 = $tmp5573->methods[0];
                panda$core$Object* $tmp5576 = $tmp5574(fields5552, i5560);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5576))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) f5551)->name) }).value) {
                {
                    index5554 = i5560;
                    goto $l5567;
                }
                }
            }
            $l5568:;
            int64_t $tmp5578 = $tmp5563 - i5560.value;
            if ($tmp5564) goto $l5579; else goto $l5580;
            $l5579:;
            if ($tmp5578 >= 1) goto $l5577; else goto $l5567;
            $l5580:;
            if ($tmp5578 > 1) goto $l5577; else goto $l5567;
            $l5577:;
            i5560.value += 1;
            goto $l5565;
            $l5567:;
            panda$core$Bit $tmp5583 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5554, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5583.value);
            panda$core$String* $tmp5584 = panda$core$String$convert$R$panda$core$String(raw5546);
            panda$core$String* $tmp5586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5584, &$s5585);
            org$pandalanguage$pandac$Type* $tmp5587 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5548);
            panda$core$String* $tmp5588 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5587);
            panda$core$String* $tmp5589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5586, $tmp5588);
            panda$core$String* $tmp5591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5589, &$s5590);
            org$pandalanguage$pandac$Type* $tmp5592 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5548);
            panda$core$String* $tmp5593 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5592);
            panda$core$String* $tmp5594 = panda$core$String$convert$R$panda$core$String($tmp5593);
            panda$core$String* $tmp5596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5594, &$s5595);
            panda$core$String* $tmp5597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5596, base5543);
            panda$core$String* $tmp5599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5597, &$s5598);
            panda$core$String* $tmp5600 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5599, ((panda$core$Object*) wrap_panda$core$Int64(index5554)));
            panda$core$String* $tmp5602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5600, &$s5601);
            panda$core$String* $tmp5603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5591, $tmp5602);
            (($fn5604) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5603);
            panda$core$Bit $tmp5606 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, f5551->owner);
            bool $tmp5605 = $tmp5606.value;
            if ($tmp5605) goto $l5607;
            panda$core$Bit $tmp5609 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f5551->type);
            bool $tmp5608 = $tmp5609.value;
            if (!$tmp5608) goto $l5610;
            org$pandalanguage$pandac$ClassDecl* $tmp5611 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f5551->type);
            panda$core$Bit $tmp5612 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp5611);
            $tmp5608 = $tmp5612.value;
            $l5610:;
            panda$core$Bit $tmp5613 = { $tmp5608 };
            $tmp5605 = $tmp5613.value;
            $l5607:;
            panda$core$Bit $tmp5614 = { $tmp5605 };
            if ($tmp5614.value) {
            {
                return raw5546;
            }
            }
            panda$core$String* $tmp5616 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result5615 = $tmp5616;
            panda$core$String* $tmp5617 = panda$core$String$convert$R$panda$core$String(result5615);
            panda$core$String* $tmp5619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5617, &$s5618);
            panda$core$String* $tmp5620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5619, raw5546);
            panda$core$String* $tmp5622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5620, &$s5621);
            panda$core$String* $tmp5623 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5622, $tmp5623);
            panda$core$String* $tmp5626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5624, &$s5625);
            (($fn5627) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5626);
            return result5615;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5630 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5629), p_out);
            result5628 = $tmp5630;
            panda$core$String* $tmp5632 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5631 = $tmp5632;
            panda$core$String* $tmp5633 = panda$core$String$convert$R$panda$core$String(reused5631);
            panda$core$String* $tmp5635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5633, &$s5634);
            panda$core$String* $tmp5636 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5635, $tmp5636);
            panda$core$String* $tmp5639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5637, &$s5638);
            panda$core$String* $tmp5640 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5641 = panda$core$String$convert$R$panda$core$String($tmp5640);
            panda$core$String* $tmp5643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5641, &$s5642);
            panda$core$String* $tmp5644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5643, result5628);
            panda$core$String* $tmp5646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5644, &$s5645);
            panda$core$String* $tmp5647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5639, $tmp5646);
            (($fn5648) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5647);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5631));
            return result5628;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue5652;
    panda$core$String* value5663;
    panda$core$String* t5664;
    panda$core$Int64 op5667;
    panda$core$String* right5669;
    panda$core$Bit $tmp5649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5649.value);
    panda$core$Int64 $tmp5650 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5650, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5651.value);
    panda$core$Object* $tmp5653 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5654 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5653)->type);
    panda$core$String* $tmp5655 = panda$core$String$convert$R$panda$core$String($tmp5654);
    panda$core$String* $tmp5657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5655, &$s5656);
    panda$core$Object* $tmp5658 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5659 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5658), p_out);
    panda$core$String* $tmp5660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5657, $tmp5659);
    panda$core$String* $tmp5662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5660, &$s5661);
    lvalue5652 = $tmp5662;
    panda$core$Object* $tmp5665 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5666 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5665)->type);
    t5664 = $tmp5666;
    op5667 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5667, ((panda$core$Int64) { 73 }));
    if ($tmp5668.value) {
    {
        panda$core$Object* $tmp5670 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5671 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5670), p_out);
        right5669 = $tmp5671;
        panda$core$String* $tmp5672 = panda$core$String$convert$R$panda$core$String(t5664);
        panda$core$String* $tmp5674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5672, &$s5673);
        panda$core$String* $tmp5675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5674, right5669);
        panda$core$String* $tmp5677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5675, &$s5676);
        value5663 = $tmp5677;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5678, value5663);
    panda$core$String* $tmp5681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5679, &$s5680);
    panda$core$String* $tmp5682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5681, lvalue5652);
    panda$core$String* $tmp5684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5682, &$s5683);
    (($fn5685) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5684);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5695;
    panda$core$String* result5697;
    bool $tmp5686 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp5686) goto $l5687;
    panda$core$Int64 $tmp5688 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5689 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5688, ((panda$core$Int64) { 0 }));
    $tmp5686 = $tmp5689.value;
    $l5687:;
    panda$core$Bit $tmp5690 = { $tmp5686 };
    if ($tmp5690.value) {
    {
        panda$core$Int64 $tmp5691 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5691, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp5692.value);
        panda$core$Int64 $tmp5693 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5694 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5693, ((panda$core$Int64) { 0 }));
        if ($tmp5694.value) {
        {
            panda$core$Object* $tmp5696 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5695 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5696);
            panda$core$Object* $tmp5698 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5699 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5698), p_out);
            result5697 = $tmp5699;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5700 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5700->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5700->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5700, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5697));
            panda$collections$Array$add$panda$collections$Array$T(inline5695->returns, ((panda$core$Object*) $tmp5700));
            panda$core$String* $tmp5703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5702, inline5695->exitLabel);
            panda$core$String* $tmp5705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5703, &$s5704);
            (($fn5706) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5705);
        }
        }
        else {
        {
            panda$core$Object* $tmp5708 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5709 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5708), p_out);
            panda$core$String* $tmp5710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5707, $tmp5709);
            panda$core$String* $tmp5712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5710, &$s5711);
            (($fn5713) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5712);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5714 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5715 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5714, ((panda$core$Int64) { 0 }));
        if ($tmp5715.value) {
        {
            panda$core$Object* $tmp5717 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5716, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5717)->exitLabel);
            panda$core$String* $tmp5720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5718, &$s5719);
            (($fn5721) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5720);
        }
        }
        else {
        {
            (($fn5723) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5722);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5727;
    panda$core$Int64 $tmp5724 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5725 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5724, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5725.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5726 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5726);
    }
    }
    panda$core$Int64 $tmp5728 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5727, ((panda$core$Int64) { 0 }), $tmp5728, ((panda$core$Bit) { false }));
    int64_t $tmp5730 = $tmp5727.min.value;
    panda$core$Int64 i5729 = { $tmp5730 };
    int64_t $tmp5732 = $tmp5727.max.value;
    bool $tmp5733 = $tmp5727.inclusive.value;
    if ($tmp5733) goto $l5740; else goto $l5741;
    $l5740:;
    if ($tmp5730 <= $tmp5732) goto $l5734; else goto $l5736;
    $l5741:;
    if ($tmp5730 < $tmp5732) goto $l5734; else goto $l5736;
    $l5734:;
    {
        panda$core$Object* $tmp5743 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5729);
        bool $tmp5742 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5743)->loopLabel != NULL }).value;
        if (!$tmp5742) goto $l5744;
        panda$core$Object* $tmp5745 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5729);
        panda$core$Bit $tmp5746 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5745)->loopLabel, p_name);
        $tmp5742 = $tmp5746.value;
        $l5744:;
        panda$core$Bit $tmp5747 = { $tmp5742 };
        if ($tmp5747.value) {
        {
            panda$core$Object* $tmp5748 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5729);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5748);
        }
        }
    }
    $l5737:;
    int64_t $tmp5750 = $tmp5732 - i5729.value;
    if ($tmp5733) goto $l5751; else goto $l5752;
    $l5751:;
    if ($tmp5750 >= 1) goto $l5749; else goto $l5736;
    $l5752:;
    if ($tmp5750 > 1) goto $l5749; else goto $l5736;
    $l5749:;
    i5729.value += 1;
    goto $l5734;
    $l5736:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5755;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5756 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5755 = $tmp5756;
    panda$core$String* $tmp5758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5757, desc5755->breakLabel);
    panda$core$String* $tmp5760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5758, &$s5759);
    (($fn5761) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5760);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5762;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5763 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5762 = $tmp5763;
    panda$core$String* $tmp5765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5764, desc5762->continueLabel);
    panda$core$String* $tmp5767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5765, &$s5766);
    (($fn5768) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5767);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test5778;
    panda$core$String* ifTrue5781;
    panda$core$String* ifFalse5783;
    panda$core$String* name5796;
    panda$core$String* path5797;
    panda$core$String$Index$nullable index5799;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5802;
    panda$core$String* nameRef5804;
    panda$core$String* line5806;
    panda$core$String* msg5811;
    panda$collections$Iterator* m$Iter5818;
    org$pandalanguage$pandac$MethodDecl* m5832;
    panda$core$Bit $tmp5769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5769.value);
    panda$core$Int64 $tmp5771 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5771, ((panda$core$Int64) { 1 }));
    bool $tmp5770 = $tmp5772.value;
    if ($tmp5770) goto $l5773;
    panda$core$Int64 $tmp5774 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5774, ((panda$core$Int64) { 2 }));
    $tmp5770 = $tmp5775.value;
    $l5773:;
    panda$core$Bit $tmp5776 = { $tmp5770 };
    PANDA_ASSERT($tmp5776.value);
    panda$core$Bit $tmp5777 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5777.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5779 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5780 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5779), p_out);
    test5778 = $tmp5780;
    panda$core$String* $tmp5782 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5781 = $tmp5782;
    panda$core$String* $tmp5784 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5783 = $tmp5784;
    panda$core$String* $tmp5786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5785, test5778);
    panda$core$String* $tmp5788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5786, &$s5787);
    panda$core$String* $tmp5789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5788, ifTrue5781);
    panda$core$String* $tmp5791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5789, &$s5790);
    panda$core$String* $tmp5792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5791, ifFalse5783);
    panda$core$String* $tmp5794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5792, &$s5793);
    (($fn5795) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5794);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse5783, p_out);
    panda$core$Object* $tmp5798 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path5797 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5798)->source->path;
    panda$core$String$Index$nullable $tmp5801 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path5797, &$s5800);
    index5799 = $tmp5801;
    if (((panda$core$Bit) { !index5799.nonnull }).value) {
    {
        name5796 = path5797;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp5802, index5799, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5803 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path5797, $tmp5802);
        name5796 = $tmp5803;
    }
    }
    panda$core$String* $tmp5805 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, name5796, p_out);
    nameRef5804 = $tmp5805;
    panda$core$String* $tmp5808 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5807, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp5810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5808, &$s5809);
    line5806 = $tmp5810;
    panda$core$Int64 $tmp5812 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5812, ((panda$core$Int64) { 2 }));
    if ($tmp5813.value) {
    {
        panda$core$Object* $tmp5814 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5815 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5814), p_out);
        msg5811 = $tmp5815;
    }
    }
    else {
    {
        msg5811 = NULL;
    }
    }
    (($fn5817) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5816);
    {
        org$pandalanguage$pandac$Type* $tmp5819 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp5820 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp5819);
        ITable* $tmp5821 = ((panda$collections$Iterable*) $tmp5820->methods)->$class->itable;
        while ($tmp5821->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5821 = $tmp5821->next;
        }
        $fn5823 $tmp5822 = $tmp5821->methods[0];
        panda$collections$Iterator* $tmp5824 = $tmp5822(((panda$collections$Iterable*) $tmp5820->methods));
        m$Iter5818 = $tmp5824;
        $l5825:;
        ITable* $tmp5827 = m$Iter5818->$class->itable;
        while ($tmp5827->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5827 = $tmp5827->next;
        }
        $fn5829 $tmp5828 = $tmp5827->methods[0];
        panda$core$Bit $tmp5830 = $tmp5828(m$Iter5818);
        panda$core$Bit $tmp5831 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5830);
        if (!$tmp5831.value) goto $l5826;
        {
            ITable* $tmp5833 = m$Iter5818->$class->itable;
            while ($tmp5833->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5833 = $tmp5833->next;
            }
            $fn5835 $tmp5834 = $tmp5833->methods[1];
            panda$core$Object* $tmp5836 = $tmp5834(m$Iter5818);
            m5832 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5836);
            panda$core$Bit $tmp5838 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5832)->name, &$s5837);
            if ($tmp5838.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m5832);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m5832);
            }
            }
        }
        goto $l5825;
        $l5826:;
    }
    if (((panda$core$Bit) { msg5811 != NULL }).value) {
    {
        panda$core$String* $tmp5841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5839, &$s5840);
        (($fn5842) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5841);
    }
    }
    else {
    {
        (($fn5844) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5843);
    }
    }
    panda$core$String* $tmp5846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5845, nameRef5804);
    panda$core$String* $tmp5848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5846, &$s5847);
    panda$core$String* $tmp5849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5848, line5806);
    panda$core$String* $tmp5851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5849, &$s5850);
    (($fn5852) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5851);
    if (((panda$core$Bit) { msg5811 != NULL }).value) {
    {
        panda$core$String* $tmp5854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5853, msg5811);
        panda$core$String* $tmp5856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5854, &$s5855);
        (($fn5857) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5856);
    }
    }
    (($fn5859) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5858);
    (($fn5861) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5860);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue5781, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* valueStruct5863;
    org$pandalanguage$pandac$ClassDecl* numberClass5866;
    panda$core$String* value5869;
    org$pandalanguage$pandac$FieldDecl* f5878;
    panda$core$String* switchType5881;
    panda$core$String* endLabel5891;
    panda$collections$Array* whenLabels5893;
    panda$core$String* otherwiseLabel5896;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5907;
    org$pandalanguage$pandac$IRNode* w5922;
    panda$core$String* label5926;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5928;
    panda$core$UInt64 number5944;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5972;
    org$pandalanguage$pandac$IRNode* w5987;
    org$pandalanguage$pandac$IRNode* block5989;
    panda$core$Bit $tmp5862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp5862.value);
    panda$core$Object* $tmp5864 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5865 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5864), p_out);
    valueStruct5863 = $tmp5865;
    panda$core$Object* $tmp5867 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp5868 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5867)->type);
    numberClass5866 = $tmp5868;
    panda$core$String* $tmp5870 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value5869 = $tmp5870;
    panda$core$String* $tmp5871 = panda$core$String$convert$R$panda$core$String(value5869);
    panda$core$String* $tmp5873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5871, &$s5872);
    panda$core$String* $tmp5874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5873, valueStruct5863);
    panda$core$String* $tmp5876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5874, &$s5875);
    (($fn5877) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5876);
    org$pandalanguage$pandac$Symbol* $tmp5880 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass5866->symbolTable, &$s5879);
    f5878 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5880);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f5878);
    panda$core$String* $tmp5882 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f5878->type);
    switchType5881 = $tmp5882;
    panda$core$String* $tmp5884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5883, switchType5881);
    panda$core$String* $tmp5886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5884, &$s5885);
    panda$core$String* $tmp5887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5886, value5869);
    panda$core$String* $tmp5889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5887, &$s5888);
    (($fn5890) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5889);
    panda$core$String* $tmp5892 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel5891 = $tmp5892;
    panda$collections$Array* $tmp5894 = (panda$collections$Array*) malloc(40);
    $tmp5894->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5894->refCount.value = 1;
    panda$collections$Array$init($tmp5894);
    whenLabels5893 = $tmp5894;
    panda$core$Int64 $tmp5897 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp5898 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5897, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5899 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, $tmp5898);
    panda$core$Bit $tmp5900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5899)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp5900.value) {
    {
        panda$core$String* $tmp5901 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel5896 = $tmp5901;
    }
    }
    else {
    {
        otherwiseLabel5896 = endLabel5891;
    }
    }
    panda$core$String* $tmp5903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5902, otherwiseLabel5896);
    panda$core$String* $tmp5905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5903, &$s5904);
    (($fn5906) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5905);
    panda$core$Int64 $tmp5908 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5907, ((panda$core$Int64) { 1 }), $tmp5908, ((panda$core$Bit) { false }));
    int64_t $tmp5910 = $tmp5907.min.value;
    panda$core$Int64 i5909 = { $tmp5910 };
    int64_t $tmp5912 = $tmp5907.max.value;
    bool $tmp5913 = $tmp5907.inclusive.value;
    if ($tmp5913) goto $l5920; else goto $l5921;
    $l5920:;
    if ($tmp5910 <= $tmp5912) goto $l5914; else goto $l5916;
    $l5921:;
    if ($tmp5910 < $tmp5912) goto $l5914; else goto $l5916;
    $l5914:;
    {
        panda$core$Object* $tmp5923 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5909);
        w5922 = ((org$pandalanguage$pandac$IRNode*) $tmp5923);
        panda$core$Bit $tmp5924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5922->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp5924.value) {
        {
            goto $l5917;
        }
        }
        panda$core$Bit $tmp5925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5922->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp5925.value);
        panda$core$String* $tmp5927 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label5926 = $tmp5927;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels5893, ((panda$core$Object*) label5926));
        panda$core$Int64 $tmp5929 = panda$collections$Array$get_count$R$panda$core$Int64(w5922->children);
        panda$core$Int64 $tmp5930 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5929, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5928, ((panda$core$Int64) { 0 }), $tmp5930, ((panda$core$Bit) { false }));
        int64_t $tmp5932 = $tmp5928.min.value;
        panda$core$Int64 i5931 = { $tmp5932 };
        int64_t $tmp5934 = $tmp5928.max.value;
        bool $tmp5935 = $tmp5928.inclusive.value;
        if ($tmp5935) goto $l5942; else goto $l5943;
        $l5942:;
        if ($tmp5932 <= $tmp5934) goto $l5936; else goto $l5938;
        $l5943:;
        if ($tmp5932 < $tmp5934) goto $l5936; else goto $l5938;
        $l5936:;
        {
            panda$core$Object* $tmp5945 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5922->children, i5931);
            panda$core$UInt64 $tmp5946 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5945));
            number5944 = $tmp5946;
            panda$core$String* $tmp5948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5947, switchType5881);
            panda$core$String* $tmp5950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5948, &$s5949);
            panda$core$String* $tmp5951 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5950, ((panda$core$Object*) wrap_panda$core$UInt64(number5944)));
            panda$core$String* $tmp5953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5951, &$s5952);
            panda$core$String* $tmp5954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5953, label5926);
            panda$core$String* $tmp5956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5954, &$s5955);
            (($fn5957) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5956);
        }
        $l5939:;
        int64_t $tmp5959 = $tmp5934 - i5931.value;
        if ($tmp5935) goto $l5960; else goto $l5961;
        $l5960:;
        if ($tmp5959 >= 1) goto $l5958; else goto $l5938;
        $l5961:;
        if ($tmp5959 > 1) goto $l5958; else goto $l5938;
        $l5958:;
        i5931.value += 1;
        goto $l5936;
        $l5938:;
    }
    $l5917:;
    int64_t $tmp5965 = $tmp5912 - i5909.value;
    if ($tmp5913) goto $l5966; else goto $l5967;
    $l5966:;
    if ($tmp5965 >= 1) goto $l5964; else goto $l5916;
    $l5967:;
    if ($tmp5965 > 1) goto $l5964; else goto $l5916;
    $l5964:;
    i5909.value += 1;
    goto $l5914;
    $l5916:;
    (($fn5971) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5970);
    panda$core$Int64 $tmp5973 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5972, ((panda$core$Int64) { 1 }), $tmp5973, ((panda$core$Bit) { false }));
    int64_t $tmp5975 = $tmp5972.min.value;
    panda$core$Int64 i5974 = { $tmp5975 };
    int64_t $tmp5977 = $tmp5972.max.value;
    bool $tmp5978 = $tmp5972.inclusive.value;
    if ($tmp5978) goto $l5985; else goto $l5986;
    $l5985:;
    if ($tmp5975 <= $tmp5977) goto $l5979; else goto $l5981;
    $l5986:;
    if ($tmp5975 < $tmp5977) goto $l5979; else goto $l5981;
    $l5979:;
    {
        panda$core$Object* $tmp5988 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5974);
        w5987 = ((org$pandalanguage$pandac$IRNode*) $tmp5988);
        panda$core$Int64 $tmp5990 = panda$collections$Array$get_count$R$panda$core$Int64(w5987->children);
        panda$core$Int64 $tmp5991 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5990, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp5992 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5987->children, $tmp5991);
        block5989 = ((org$pandalanguage$pandac$IRNode*) $tmp5992);
        panda$core$Int64 $tmp5993 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5974, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp5994 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels5893);
        panda$core$Bit $tmp5995 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp5993, $tmp5994);
        if ($tmp5995.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, otherwiseLabel5896, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp5996 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5974, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp5997 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels5893, $tmp5996);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ((panda$core$String*) $tmp5997), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block5989, p_out);
        panda$core$Bit $tmp5998 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block5989);
        panda$core$Bit $tmp5999 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5998);
        if ($tmp5999.value) {
        {
            panda$core$String* $tmp6001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6000, endLabel5891);
            panda$core$String* $tmp6003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6001, &$s6002);
            (($fn6004) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6003);
        }
        }
    }
    $l5982:;
    int64_t $tmp6006 = $tmp5977 - i5974.value;
    if ($tmp5978) goto $l6007; else goto $l6008;
    $l6007:;
    if ($tmp6006 >= 1) goto $l6005; else goto $l5981;
    $l6008:;
    if ($tmp6006 > 1) goto $l6005; else goto $l5981;
    $l6005:;
    i5974.value += 1;
    goto $l5979;
    $l5981:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel5891, p_out);
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
    panda$core$String* result6011;
    org$pandalanguage$pandac$Type* $tmp6012 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp6013 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6012);
    result6011 = $tmp6013;
    panda$core$Bit $tmp6015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6014 = $tmp6015.value;
    if (!$tmp6014) goto $l6016;
    panda$core$Bit $tmp6018 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6011, &$s6017);
    panda$core$Bit $tmp6019 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6018);
    $tmp6014 = $tmp6019.value;
    $l6016:;
    panda$core$Bit $tmp6020 = { $tmp6014 };
    if ($tmp6020.value) {
    {
        panda$core$String* $tmp6022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6011, &$s6021);
        return $tmp6022;
    }
    }
    return result6011;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6023;
    panda$core$Bit needsIndirection6032;
    panda$core$String* separator6044;
    panda$collections$Iterator* p$Iter6063;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6075;
    panda$core$String* $tmp6024 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6023 = $tmp6024;
    panda$core$Bit $tmp6025 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6023));
    if ($tmp6025.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6023));
    panda$core$String* $tmp6027 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6026, $tmp6027);
    panda$core$String* $tmp6030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6028, &$s6029);
    (($fn6031) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6030);
    panda$core$Bit $tmp6033 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6032 = $tmp6033;
    if (needsIndirection6032.value) {
    {
        (($fn6035) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6034);
    }
    }
    else {
    {
        panda$core$String* $tmp6036 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6037) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6036);
    }
    }
    panda$core$String* $tmp6039 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6038, $tmp6039);
    panda$core$String* $tmp6042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6040, &$s6041);
    (($fn6043) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6042);
    separator6044 = &$s6045;
    if (needsIndirection6032.value) {
    {
        panda$core$String* $tmp6046 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6047 = panda$core$String$convert$R$panda$core$String($tmp6046);
        panda$core$String* $tmp6049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6047, &$s6048);
        (($fn6050) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6049);
        separator6044 = &$s6051;
    }
    }
    panda$core$Bit $tmp6052 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6053 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6052);
    if ($tmp6053.value) {
    {
        panda$core$String* $tmp6054 = panda$core$String$convert$R$panda$core$String(separator6044);
        panda$core$String* $tmp6056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6054, &$s6055);
        panda$core$String* $tmp6057 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6056, $tmp6057);
        panda$core$String* $tmp6060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6058, &$s6059);
        (($fn6061) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6060);
        separator6044 = &$s6062;
    }
    }
    {
        ITable* $tmp6064 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6064->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6064 = $tmp6064->next;
        }
        $fn6066 $tmp6065 = $tmp6064->methods[0];
        panda$collections$Iterator* $tmp6067 = $tmp6065(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6063 = $tmp6067;
        $l6068:;
        ITable* $tmp6070 = p$Iter6063->$class->itable;
        while ($tmp6070->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6070 = $tmp6070->next;
        }
        $fn6072 $tmp6071 = $tmp6070->methods[0];
        panda$core$Bit $tmp6073 = $tmp6071(p$Iter6063);
        panda$core$Bit $tmp6074 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6073);
        if (!$tmp6074.value) goto $l6069;
        {
            ITable* $tmp6076 = p$Iter6063->$class->itable;
            while ($tmp6076->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6076 = $tmp6076->next;
            }
            $fn6078 $tmp6077 = $tmp6076->methods[1];
            panda$core$Object* $tmp6079 = $tmp6077(p$Iter6063);
            p6075 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6079);
            panda$core$String* $tmp6080 = panda$core$String$convert$R$panda$core$String(separator6044);
            panda$core$String* $tmp6082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6080, &$s6081);
            panda$core$String* $tmp6083 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6075->type);
            panda$core$String* $tmp6084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6082, $tmp6083);
            panda$core$String* $tmp6086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6084, &$s6085);
            panda$core$String* $tmp6087 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6075->name);
            panda$core$String* $tmp6088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6086, $tmp6087);
            panda$core$String* $tmp6090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6088, &$s6089);
            (($fn6091) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6090);
            separator6044 = &$s6092;
        }
        goto $l6068;
        $l6069:;
    }
    (($fn6094) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6093);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6115;
    panda$collections$Iterator* p$Iter6125;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6137;
    panda$io$MemoryOutputStream* bodyBuffer6159;
    panda$io$IndentedOutputStream* indentedBody6162;
    panda$collections$Iterator* s$Iter6165;
    org$pandalanguage$pandac$IRNode* s6177;
    panda$core$Object* $tmp6095 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6095)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6096;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    (($fn6098) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6097);
    panda$core$Bit $tmp6099 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6099.value) {
    {
        (($fn6101) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6100);
    }
    }
    panda$core$String* $tmp6102 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6103 = panda$core$String$convert$R$panda$core$String($tmp6102);
    panda$core$String* $tmp6105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6103, &$s6104);
    panda$core$String* $tmp6106 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6105, $tmp6106);
    panda$core$String* $tmp6109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6107, &$s6108);
    panda$core$String* $tmp6110 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6109, $tmp6110);
    panda$core$String* $tmp6113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6111, &$s6112);
    (($fn6114) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6113);
    separator6115 = &$s6116;
    panda$core$Bit $tmp6117 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6118 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6117);
    if ($tmp6118.value) {
    {
        panda$core$String* $tmp6119 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6120 = panda$core$String$convert$R$panda$core$String($tmp6119);
        panda$core$String* $tmp6122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6120, &$s6121);
        (($fn6123) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6122);
        separator6115 = &$s6124;
    }
    }
    {
        ITable* $tmp6126 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6126->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6126 = $tmp6126->next;
        }
        $fn6128 $tmp6127 = $tmp6126->methods[0];
        panda$collections$Iterator* $tmp6129 = $tmp6127(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6125 = $tmp6129;
        $l6130:;
        ITable* $tmp6132 = p$Iter6125->$class->itable;
        while ($tmp6132->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6132 = $tmp6132->next;
        }
        $fn6134 $tmp6133 = $tmp6132->methods[0];
        panda$core$Bit $tmp6135 = $tmp6133(p$Iter6125);
        panda$core$Bit $tmp6136 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6135);
        if (!$tmp6136.value) goto $l6131;
        {
            ITable* $tmp6138 = p$Iter6125->$class->itable;
            while ($tmp6138->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6138 = $tmp6138->next;
            }
            $fn6140 $tmp6139 = $tmp6138->methods[1];
            panda$core$Object* $tmp6141 = $tmp6139(p$Iter6125);
            p6137 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6141);
            panda$core$String* $tmp6142 = panda$core$String$convert$R$panda$core$String(separator6115);
            panda$core$String* $tmp6144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6142, &$s6143);
            panda$core$String* $tmp6145 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6137->type);
            panda$core$String* $tmp6146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6144, $tmp6145);
            panda$core$String* $tmp6148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6146, &$s6147);
            panda$core$String* $tmp6149 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6137->name);
            panda$core$String* $tmp6150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6148, $tmp6149);
            panda$core$String* $tmp6152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6150, &$s6151);
            (($fn6153) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6152);
            separator6115 = &$s6154;
        }
        goto $l6130;
        $l6131:;
    }
    (($fn6156) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6155);
    panda$core$Int64 $tmp6157 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6157;
    panda$core$Bit $tmp6158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6158.value);
    panda$io$MemoryOutputStream* $tmp6160 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6160->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6160->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6160);
    bodyBuffer6159 = $tmp6160;
    panda$io$IndentedOutputStream* $tmp6163 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp6163->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6163->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6163, ((panda$io$OutputStream*) bodyBuffer6159));
    indentedBody6162 = $tmp6163;
    {
        ITable* $tmp6166 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6166->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6166 = $tmp6166->next;
        }
        $fn6168 $tmp6167 = $tmp6166->methods[0];
        panda$collections$Iterator* $tmp6169 = $tmp6167(((panda$collections$Iterable*) p_body->children));
        s$Iter6165 = $tmp6169;
        $l6170:;
        ITable* $tmp6172 = s$Iter6165->$class->itable;
        while ($tmp6172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6172 = $tmp6172->next;
        }
        $fn6174 $tmp6173 = $tmp6172->methods[0];
        panda$core$Bit $tmp6175 = $tmp6173(s$Iter6165);
        panda$core$Bit $tmp6176 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6175);
        if (!$tmp6176.value) goto $l6171;
        {
            ITable* $tmp6178 = s$Iter6165->$class->itable;
            while ($tmp6178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6178 = $tmp6178->next;
            }
            $fn6180 $tmp6179 = $tmp6178->methods[1];
            panda$core$Object* $tmp6181 = $tmp6179(s$Iter6165);
            s6177 = ((org$pandalanguage$pandac$IRNode*) $tmp6181);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s6177, indentedBody6162);
        }
        goto $l6170;
        $l6171:;
    }
    panda$core$String* $tmp6182 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn6183) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6182);
    panda$core$String* $tmp6184 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer6159);
    (($fn6185) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6184);
    panda$core$Bit $tmp6186 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6187 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6186);
    if ($tmp6187.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6188 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6189 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6188);
        if ($tmp6189.value) {
        {
            (($fn6191) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6190);
        }
        }
        else {
        {
            (($fn6193) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6192);
        }
        }
    }
    }
    panda$core$Int64 $tmp6194 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6194;
    (($fn6196) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6195);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6197 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6197.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6198 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6198);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

