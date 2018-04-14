#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/collections/Set.h"
#include "panda/collections/Array.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/IdentityMap.h"
#include "panda/collections/Stack.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Weak.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/CCodeGenerator/ClassConstant.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/CCodeGenerator/MethodShim.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "org/pandalanguage/pandac/CCodeGenerator/OpClass.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "panda/core/Formattable.h"
#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef void (*$fn42)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn45)(panda$core$Weak*);
typedef void (*$fn98)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn117)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn130)(panda$core$Weak*);
typedef panda$core$Object* (*$fn134)(panda$core$Weak*);
typedef panda$core$Object* (*$fn145)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn150)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn156)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn162)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn165)(panda$core$Weak*);
typedef panda$core$Object* (*$fn187)(panda$core$Weak*);
typedef panda$core$Object* (*$fn192)(panda$core$Weak*);
typedef panda$core$Object* (*$fn200)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn205)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn211)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn217)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn219)(panda$core$Weak*);
typedef panda$core$Object* (*$fn251)(panda$core$Weak*);
typedef panda$core$Object* (*$fn266)(panda$core$Weak*);
typedef panda$core$Object* (*$fn306)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn315)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn321)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn327)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn330)(panda$core$Weak*);
typedef panda$core$Object* (*$fn336)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn359)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn382)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn388)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn394)(panda$collections$Iterator*);
typedef void (*$fn402)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn444)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn473)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn481)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn525)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn530)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn551)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn559)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn568)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn571)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn576)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn600)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn602)(panda$core$Weak*);
typedef panda$core$Object* (*$fn606)(panda$core$Weak*);
typedef void (*$fn634)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn642)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn679)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn684)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn705)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn713)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn716)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn719)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn728)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn734)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn740)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn743)(panda$core$Weak*);
typedef panda$core$Object* (*$fn749)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn772)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn800)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn806)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn812)(panda$collections$Iterator*);
typedef void (*$fn820)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn827)(panda$core$Weak*);
typedef panda$core$Object* (*$fn832)(panda$core$Weak*);
typedef panda$core$Object* (*$fn837)(panda$core$Weak*);
typedef panda$core$Object* (*$fn842)(panda$core$Weak*);
typedef panda$core$Object* (*$fn850)(panda$core$Weak*);
typedef panda$core$Object* (*$fn864)(panda$core$Weak*);
typedef panda$core$Object* (*$fn867)(panda$core$Weak*);
typedef panda$core$Object* (*$fn879)(panda$core$Weak*);
typedef panda$core$Object* (*$fn889)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn938)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn944)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn950)(panda$collections$Iterator*);
typedef void (*$fn958)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn959)(panda$core$Weak*);
typedef void (*$fn981)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn984)(panda$core$Weak*);
typedef panda$core$Object* (*$fn989)(panda$core$Weak*);
typedef panda$core$Object* (*$fn999)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1003)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1015)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn1063)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1081)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1102)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1135)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1148)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1158)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1161)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1173)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1179)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1192)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1202)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1205)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1217)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1263)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1268)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1281)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1307)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1309)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1326)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn1333)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn1339)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1356)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1367)(panda$core$Weak*);
typedef void (*$fn1392)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1400)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1408)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1411)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1414)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn1420)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1437)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1445)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1447)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn1454)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1461)(panda$core$Weak*);
typedef void (*$fn1478)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1634)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1654)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1675)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1682)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn1715)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1720)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1750)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1757)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1768)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1772)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1778)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1784)(panda$collections$Iterator*);
typedef void (*$fn1792)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1795)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1828)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1834)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1856)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1863)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1867)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1869)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1877)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1890)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn1892)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn1897)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1975)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1979)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1983)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1987)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1996)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2001)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2010)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2025)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn2056)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn2068)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2097)(panda$core$Weak*);
typedef void (*$fn2113)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2142)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2183)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2188)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2194)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2200)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2208)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn2215)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2220)(panda$collections$CollectionView*);
typedef void (*$fn2231)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2246)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn2248)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn2252)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn2255)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn2274)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn2276)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn2280)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn2283)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn2300)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2304)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn2338)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2340)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2353)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2362)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2373)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2381)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2386)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2394)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2399)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2526)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2531)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2537)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2543)(panda$collections$Iterator*);
typedef void (*$fn2547)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2557)(panda$core$Weak*);
typedef void (*$fn2569)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2574)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn2578)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn2589)(panda$core$Weak*);
typedef void (*$fn2603)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2614)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2634)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2641)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn2676)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2681)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2714)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2724)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2729)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2733)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2739)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2745)(panda$collections$Iterator*);
typedef void (*$fn2747)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2748)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2751)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2758)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2760)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2762)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2764)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2765)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2768)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2772)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2780)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn2792)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2795)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn2800)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2804)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2809)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2811)(panda$core$Weak*);
typedef void (*$fn2832)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2846)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2858)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2868)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2912)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2926)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2940)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2957)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2973)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3005)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3016)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3018)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3021)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3025)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3033)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3037)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn3049)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3052)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn3057)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3061)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3066)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn3068)(panda$core$Weak*);
typedef void (*$fn3089)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3115)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3119)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3122)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn3127)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3131)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3136)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn3138)(panda$core$Weak*);
typedef void (*$fn3150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3160)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3230)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3244)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3258)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3274)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3288)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3304)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3321)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3336)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3352)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3390)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3405)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3421)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3440)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3468)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3473)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3475)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3478)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3481)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3498)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3503)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3505)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3522)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3530)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3532)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3546)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3555)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3565)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3569)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3575)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3581)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3591)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Position (*$fn3635)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3645)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3654)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3669)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3683)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3689)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3691)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3729)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3736)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3748)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3753)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3759)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3765)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3776)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3782)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3788)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3791)(panda$core$Weak*);
typedef void (*$fn3798)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3800)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3802)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3805)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3912)(panda$core$Weak*);
typedef void (*$fn3924)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3933)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3938)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3944)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3950)(panda$collections$Iterator*);
typedef void (*$fn3963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3966)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3974)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn3979)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3985)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3991)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3993)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3996)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn4011)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4017)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4023)(panda$collections$Iterator*);
typedef void (*$fn4026)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4028)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4031)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn4039)(panda$core$Weak*);
typedef void (*$fn4044)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4046)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4048)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4050)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4052)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4053)(panda$io$OutputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, -2051020738728542693, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x28", 2, 14382, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x73\x65\x6c\x66", 5, 14792042467, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6d", 12, -5595348649711353309, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2a", 9, 1496394141948660748, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x73\x65\x6c\x66\x2d\x3e\x76\x61\x6c\x75\x65", 12, 3684417363826496863, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s1237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20", 4, 137658487, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20", 4, 137372859, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s1476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s1491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 14, 9153752889249827899, NULL };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d", 7, 157293860332681, NULL };
static panda$core$String $s1547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, 2191018519584705024, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s1607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 3278627383872437575, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -5027409806946055905, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s2094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, -1805496395169551456, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x29\x3b", 8, 14794490123150471, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -5089590097621792313, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 2848555729212071077, NULL };
static panda$core$String $s2202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s2224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x73\x65\x6c\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s2546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d\x20\x3d\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s2608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x46\x72\x65\x65\x28", 10, -5790438204225352665, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x69\x6e\x2e\x76\x61\x6c\x75\x65\x3b", 11, -3956212002962864875, NULL };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x61\x78\x2e\x76\x61\x6c\x75\x65\x3b", 11, -4041768404061004273, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s2955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s2962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20\x31\x3b", 12, -4476855678279854640, NULL };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s3081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x61\x72\x74\x2e\x76\x61\x6c\x75\x65\x3b", 13, 3588086193908855763, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s3107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x65\x6e\x64\x2e\x76\x61\x6c\x75\x65\x3b", 11, 5794120589201096528, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x65\x70\x2e\x76\x61\x6c\x75\x65\x3b", 12, -1565217378717073995, NULL };
static panda$core$String $s3153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s3155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s3176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s3197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x30\x3b", 5, 13904243334, NULL };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s3250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s3341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2d\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x2d", 5, 13904537533, NULL };
static panda$core$String $s3430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x2d", 4, 137665772, NULL };
static panda$core$String $s3449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7b", 14, 1197661341919403142, NULL };
static panda$core$String $s3531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x6d\x73\x65\x74\x28\x26", 8, 22623213602606430, NULL };
static panda$core$String $s3559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x30\x2c\x20\x73\x69\x7a\x65\x6f\x66\x28", 12, 4086987682289124441, NULL };
static panda$core$String $s3563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s3649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s3652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s3658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20", 3, 1462916, NULL };
static panda$core$String $s3660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x63\x68\x61\x72\x2a\x29\x20", 9, 1531222690101128410, NULL };
static panda$core$String $s3662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s3666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s3725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x41\x4e\x44\x41\x5f\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s3743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s3790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s3799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x3b", 6, 2103477946177, NULL };
static panda$core$String $s3801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6c\x74\x3a", 8, 21658216358330300, NULL };
static panda$core$String $s3804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s3934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s3961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s4030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s4033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$File* p_outDir) {
    self->compiler = NULL;
    self->outDir = NULL;
    self->out = NULL;
    self->strings = NULL;
    self->imports = NULL;
    self->hCodeGen = NULL;
    self->currentClass = NULL;
    self->extraEffects = NULL;
    self->declarations = NULL;
    self->types = NULL;
    self->methodsBuffer = NULL;
    self->methods = NULL;
    self->methodHeaderBuffer = NULL;
    self->methodHeader = NULL;
    self->wrapperShimsBuffer = NULL;
    self->wrapperShims = NULL;
    self->shimsBuffer = NULL;
    self->shims = NULL;
    self->declared = NULL;
    self->writtenTypes = NULL;
    self->writtenWrappers = NULL;
    self->classConstants = NULL;
    self->variableNames = NULL;
    self->currentBlock = NULL;
    self->currentMethod = NULL;
    self->loopDescriptors = NULL;
    self->reusedValues = NULL;
    self->methodShims = NULL;
    self->inlineContext = NULL;
    self->currentlyInlining = NULL;
    panda$io$MemoryOutputStream* $tmp2 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp2);
    self->strings = $tmp2;
    panda$collections$Set* $tmp3 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp3);
    self->imports = $tmp3;
    self->currentClass = NULL;
    panda$collections$Array* $tmp4 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp4);
    self->extraEffects = $tmp4;
    panda$io$MemoryOutputStream* $tmp5 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp5);
    self->declarations = $tmp5;
    panda$io$MemoryOutputStream* $tmp6 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp6);
    self->types = $tmp6;
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp7);
    self->methodsBuffer = $tmp7;
    panda$io$IndentedOutputStream* $tmp8 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp8, ((panda$io$OutputStream*) self->methodsBuffer));
    self->methods = $tmp8;
    panda$io$MemoryOutputStream* $tmp9 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp9);
    self->methodHeaderBuffer = $tmp9;
    panda$io$IndentedOutputStream* $tmp10 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp10, ((panda$io$OutputStream*) self->methodHeaderBuffer));
    self->methodHeader = $tmp10;
    panda$io$MemoryOutputStream* $tmp11 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp11);
    self->wrapperShimsBuffer = $tmp11;
    panda$io$IndentedOutputStream* $tmp12 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp12, ((panda$io$OutputStream*) self->wrapperShimsBuffer));
    self->wrapperShims = $tmp12;
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp13);
    self->shimsBuffer = $tmp13;
    panda$io$IndentedOutputStream* $tmp14 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp14, ((panda$io$OutputStream*) self->shimsBuffer));
    self->shims = $tmp14;
    panda$collections$Set* $tmp15 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp15);
    self->declared = $tmp15;
    panda$collections$Set* $tmp16 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp16);
    self->writtenTypes = $tmp16;
    panda$collections$Set* $tmp17 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp17);
    self->writtenWrappers = $tmp17;
    panda$collections$HashMap* $tmp18 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp18);
    self->classConstants = $tmp18;
    panda$collections$IdentityMap* $tmp19 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
    panda$collections$IdentityMap$init($tmp19);
    self->variableNames = $tmp19;
    panda$collections$Stack* $tmp20 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp20);
    self->loopDescriptors = $tmp20;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap* $tmp21 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp21);
    self->reusedValues = $tmp21;
    panda$collections$IdentityMap* $tmp22 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
    panda$collections$IdentityMap$init($tmp22);
    self->methodShims = $tmp22;
    panda$collections$Stack* $tmp23 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp23);
    self->inlineContext = $tmp23;
    panda$collections$IdentityMap* $tmp24 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
    panda$collections$IdentityMap$init($tmp24);
    self->currentlyInlining = $tmp24;
    {
        self->outDir = p_outDir;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->outDir));
    }
    {
        panda$io$IndentedOutputStream* $tmp25 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp26 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp26);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp25, ((panda$io$OutputStream*) $tmp26));
        self->out = $tmp25;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
    }
    {
        org$pandalanguage$pandac$HCodeGenerator* $tmp27 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
        org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp27, p_outDir);
        self->hCodeGen = $tmp27;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->hCodeGen));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp28 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->hCodeGen, p_s);
    return $tmp28;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $tmp29 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->hCodeGen, p_m);
    return $tmp29;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp30 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->hCodeGen, p_t);
    return $tmp30;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    return ((panda$core$Bit) { ((panda$core$Object*) p_cl) != ((panda$core$Object*) self->currentClass) });
}
void org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* includePath33;
    panda$core$Bit $tmp32 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s31);
    if ($tmp32.value) {
    {
        return;
    }
    }
    panda$core$String* $tmp35 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self->hCodeGen, p_cl, &$s34);
    includePath33 = $tmp35;
    panda$core$Bit $tmp36 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath33));
    panda$core$Bit $tmp37 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp36);
    if ($tmp37.value) {
    {
        panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s38, includePath33);
        panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp39, &$s40);
        (($fn42) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp41);
        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath33));
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath33));
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl44;
    panda$core$String* result54;
    panda$core$MutableString* code60;
    panda$core$String* separator69;
    panda$core$Range$LTpanda$core$Int64$GT $tmp71;
    panda$core$String* tmp199;
    panda$core$Bit $tmp43 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    if ($tmp43.value) {
    {
        panda$core$Object* $tmp46 = (($fn45) self->compiler->$class->vtable[2])(self->compiler);
        org$pandalanguage$pandac$ClassDecl* $tmp47 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp46), p_t);
        cl44 = $tmp47;
        PANDA_ASSERT(((panda$core$Bit) { cl44 != NULL }).value);
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl44);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl44));
    }
    }
    panda$core$Bit $tmp49 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp48 = $tmp49.value;
    if ($tmp48) goto $l50;
    panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 24 }));
    $tmp48 = $tmp51.value;
    $l50:;
    panda$core$Bit $tmp52 = { $tmp48 };
    if ($tmp52.value) {
    {
        panda$core$Int64 $tmp53 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp53;
        panda$core$Int64$wrapper* $tmp56;
        $tmp56 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp56->value = self->varCount;
        panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s55, ((panda$core$Object*) $tmp56));
        panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s58);
        result54 = $tmp59;
        panda$core$MutableString* $tmp61 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp61, &$s62);
        code60 = $tmp61;
        panda$core$Int64 $tmp63 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp64 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp63, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp65 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp64);
        panda$core$String* $tmp66 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp65));
        panda$core$MutableString$append$panda$core$String(code60, $tmp66);
        panda$core$MutableString$append$panda$core$String(code60, &$s67);
        panda$core$MutableString$append$panda$core$String(code60, result54);
        panda$core$MutableString$append$panda$core$String(code60, &$s68);
        separator69 = &$s70;
        panda$core$Int64 $tmp72 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp73 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp72, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp71, ((panda$core$Int64) { 0 }), $tmp73, ((panda$core$Bit) { false }));
        int64_t $tmp75 = $tmp71.min.value;
        panda$core$Int64 i74 = { $tmp75 };
        int64_t $tmp77 = $tmp71.max.value;
        bool $tmp78 = $tmp71.inclusive.value;
        if ($tmp78) goto $l85; else goto $l86;
        $l85:;
        if ($tmp75 <= $tmp77) goto $l79; else goto $l81;
        $l86:;
        if ($tmp75 < $tmp77) goto $l79; else goto $l81;
        $l79:;
        {
            panda$core$MutableString$append$panda$core$String(code60, separator69);
            panda$core$Object* $tmp87 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i74);
            panda$core$String* $tmp88 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp87));
            panda$core$MutableString$append$panda$core$String(code60, $tmp88);
            {
                separator69 = &$s89;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator69));
            }
        }
        $l82:;
        int64_t $tmp91 = $tmp77 - i74.value;
        if ($tmp78) goto $l92; else goto $l93;
        $l92:;
        if ((uint64_t) $tmp91 >= 1) goto $l90; else goto $l81;
        $l93:;
        if ((uint64_t) $tmp91 > 1) goto $l90; else goto $l81;
        $l90:;
        i74.value += 1;
        goto $l79;
        $l81:;
        panda$core$MutableString$append$panda$core$String(code60, &$s96);
        panda$core$String* $tmp97 = panda$core$MutableString$finish$R$panda$core$String(code60);
        (($fn98) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp97);
        {
            tmp199 = result54;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator69));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result54));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code60));
            }
            return tmp199;
        }
    }
    }
    panda$core$String* $tmp100 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    return $tmp100;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    {
        panda$core$Weak* $tmp101 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp101, ((panda$core$Object*) p_compiler));
        self->compiler = $tmp101;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    }
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp102 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp102;
    panda$core$Int64$wrapper* $tmp104;
    $tmp104 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp104->value = self->varCount;
    panda$core$String* $tmp105 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s103, ((panda$core$Object*) $tmp104));
    panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp105, &$s106);
    return $tmp107;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp108 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp108;
    panda$core$Int64$wrapper* $tmp110;
    $tmp110 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp110->value = self->varCount;
    panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s109, ((panda$core$Object*) $tmp110));
    panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp111, &$s112);
    return $tmp113;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp114 = panda$core$String$convert$R$panda$core$String(p_label);
    panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp114, &$s115);
    (($fn117) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp116);
    {
        self->currentBlock = p_label;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentBlock));
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl129;
    panda$core$Int64 tmp2142;
    panda$core$Int64 result143;
    panda$collections$Iterator* Iter$272$9144;
    org$pandalanguage$pandac$FieldDecl* f159;
    panda$core$Int64 size171;
    panda$core$Int64 align173;
    panda$core$Int64 tmp3183;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp118 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp118.value) {
    {
        panda$core$Bit $tmp120 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s119);
        if ($tmp120.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp122 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s121);
        if ($tmp122.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp124 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s123);
        if ($tmp124.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp126 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s125);
        PANDA_ASSERT($tmp126.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp127 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp128 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp127);
    if ($tmp128.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    panda$core$Object* $tmp131 = (($fn130) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$ClassDecl* $tmp132 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp131), p_t);
    cl129 = $tmp132;
    PANDA_ASSERT(((panda$core$Bit) { cl129 != NULL }).value);
    panda$core$Object* $tmp135 = (($fn134) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Bit $tmp136 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp135), cl129);
    panda$core$Bit $tmp137 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp136);
    bool $tmp133 = $tmp137.value;
    if ($tmp133) goto $l138;
    panda$core$Bit $tmp140 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl129)->name, &$s139);
    $tmp133 = $tmp140.value;
    $l138:;
    panda$core$Bit $tmp141 = { $tmp133 };
    if ($tmp141.value) {
    {
        {
            tmp2142 = ((panda$core$Int64) { 8 });
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl129));
            return tmp2142;
        }
    }
    }
    result143 = ((panda$core$Int64) { 0 });
    {
        panda$core$Object* $tmp146 = (($fn145) self->compiler->$class->vtable[2])(self->compiler);
        panda$collections$ListView* $tmp147 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp146), cl129);
        ITable* $tmp148 = ((panda$collections$Iterable*) $tmp147)->$class->itable;
        while ($tmp148->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp148 = $tmp148->next;
        }
        $fn150 $tmp149 = $tmp148->methods[0];
        panda$collections$Iterator* $tmp151 = $tmp149(((panda$collections$Iterable*) $tmp147));
        Iter$272$9144 = $tmp151;
        $l152:;
        ITable* $tmp154 = Iter$272$9144->$class->itable;
        while ($tmp154->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp154 = $tmp154->next;
        }
        $fn156 $tmp155 = $tmp154->methods[0];
        panda$core$Bit $tmp157 = $tmp155(Iter$272$9144);
        panda$core$Bit $tmp158 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp157);
        if (!$tmp158.value) goto $l153;
        {
            ITable* $tmp160 = Iter$272$9144->$class->itable;
            while ($tmp160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp160 = $tmp160->next;
            }
            $fn162 $tmp161 = $tmp160->methods[1];
            panda$core$Object* $tmp163 = $tmp161(Iter$272$9144);
            f159 = ((org$pandalanguage$pandac$FieldDecl*) $tmp163);
            panda$core$Bit $tmp164 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f159->annotations);
            if ($tmp164.value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f159));
                    goto $l152;
                }
            }
            }
            panda$core$Object* $tmp166 = (($fn165) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp166), f159);
            org$pandalanguage$pandac$Type* $tmp167 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp168 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f159->type, $tmp167);
            if ($tmp168.value) {
            {
                panda$core$Int64 $tmp169 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl129);
                panda$core$Int64 $tmp170 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result143, $tmp169);
                result143 = $tmp170;
            }
            }
            else {
            {
                panda$core$Int64 $tmp172 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f159->type);
                size171 = $tmp172;
                panda$core$Int64 $tmp174 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result143, size171);
                align173 = $tmp174;
                panda$core$Bit $tmp175 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align173, ((panda$core$Int64) { 0 }));
                if ($tmp175.value) {
                {
                    panda$core$Int64 $tmp176 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size171, align173);
                    panda$core$Int64 $tmp177 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result143, $tmp176);
                    result143 = $tmp177;
                }
                }
                panda$core$Int64 $tmp178 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result143, size171);
                panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp178, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp179.value);
                panda$core$Int64 $tmp180 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result143, size171);
                result143 = $tmp180;
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f159));
        }
        goto $l152;
        $l153:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$272$9144));
    }
    panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp181.value) {
    {
        panda$core$Int64 $tmp182 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result143, ((panda$core$Int64) { 1 }));
        result143 = $tmp182;
    }
    }
    {
        tmp3183 = result143;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl129));
        return tmp3183;
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp184 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp185 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp184, ((panda$core$Int64) { 8 }));
    return $tmp185;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl186;
    panda$core$Int64 result196;
    panda$collections$Iterator* Iter$305$9199;
    org$pandalanguage$pandac$FieldDecl* f214;
    panda$core$Int64 size225;
    panda$core$Int64 align227;
    panda$core$Int64 tmp4237;
    panda$core$Object* $tmp188 = (($fn187) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$ClassDecl* $tmp189 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp188), p_t);
    cl186 = $tmp189;
    bool $tmp190 = ((panda$core$Bit) { cl186 != NULL }).value;
    if (!$tmp190) goto $l191;
    panda$core$Object* $tmp193 = (($fn192) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Bit $tmp194 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp193), cl186);
    $tmp190 = $tmp194.value;
    $l191:;
    panda$core$Bit $tmp195 = { $tmp190 };
    PANDA_ASSERT($tmp195.value);
    org$pandalanguage$pandac$Type* $tmp197 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp198 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp197);
    result196 = $tmp198;
    {
        panda$core$Object* $tmp201 = (($fn200) self->compiler->$class->vtable[2])(self->compiler);
        panda$collections$ListView* $tmp202 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp201), cl186);
        ITable* $tmp203 = ((panda$collections$Iterable*) $tmp202)->$class->itable;
        while ($tmp203->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp203 = $tmp203->next;
        }
        $fn205 $tmp204 = $tmp203->methods[0];
        panda$collections$Iterator* $tmp206 = $tmp204(((panda$collections$Iterable*) $tmp202));
        Iter$305$9199 = $tmp206;
        $l207:;
        ITable* $tmp209 = Iter$305$9199->$class->itable;
        while ($tmp209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp209 = $tmp209->next;
        }
        $fn211 $tmp210 = $tmp209->methods[0];
        panda$core$Bit $tmp212 = $tmp210(Iter$305$9199);
        panda$core$Bit $tmp213 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp212);
        if (!$tmp213.value) goto $l208;
        {
            ITable* $tmp215 = Iter$305$9199->$class->itable;
            while ($tmp215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp215 = $tmp215->next;
            }
            $fn217 $tmp216 = $tmp215->methods[1];
            panda$core$Object* $tmp218 = $tmp216(Iter$305$9199);
            f214 = ((org$pandalanguage$pandac$FieldDecl*) $tmp218);
            panda$core$Object* $tmp220 = (($fn219) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp220), f214);
            org$pandalanguage$pandac$Type* $tmp221 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp222 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f214->type, $tmp221);
            if ($tmp222.value) {
            {
                panda$core$Int64 $tmp223 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl186);
                panda$core$Int64 $tmp224 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result196, $tmp223);
                result196 = $tmp224;
            }
            }
            else {
            {
                panda$core$Int64 $tmp226 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f214->type);
                size225 = $tmp226;
                panda$core$Int64 $tmp228 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result196, size225);
                align227 = $tmp228;
                panda$core$Bit $tmp229 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align227, ((panda$core$Int64) { 0 }));
                if ($tmp229.value) {
                {
                    panda$core$Int64 $tmp230 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size225, align227);
                    panda$core$Int64 $tmp231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result196, $tmp230);
                    result196 = $tmp231;
                }
                }
                panda$core$Int64 $tmp232 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result196, size225);
                panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp232, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp233.value);
                panda$core$Int64 $tmp234 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result196, size225);
                result196 = $tmp234;
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f214));
        }
        goto $l207;
        $l208:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$305$9199));
    }
    panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp235.value) {
    {
        panda$core$Int64 $tmp236 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result196, ((panda$core$Int64) { 1 }));
        result196 = $tmp236;
    }
    }
    {
        tmp4237 = result196;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl186));
        return tmp4237;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp238 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp238.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp239 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp239;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp240.value) {
    {
        panda$core$Object* $tmp241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp242 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp241));
        return $tmp242;
    }
    }
    panda$core$String* $tmp243 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp244 = panda$core$String$convert$R$panda$core$String($tmp243);
    panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s245);
    return $tmp246;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp247 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, &$s248);
    return $tmp249;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType250;
    panda$core$MutableString* result254;
    panda$core$Char8 $tmp260;
    panda$core$Char8 $tmp270;
    panda$core$Range$LTpanda$core$Int64$GT $tmp271;
    panda$core$String* tmp5297;
    panda$core$Object* $tmp252 = (($fn251) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Type* $tmp253 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp252), p_m);
    inheritedType250 = $tmp253;
    panda$core$MutableString* $tmp255 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp255);
    result254 = $tmp255;
    panda$core$Int64 $tmp256 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType250->subtypes);
    panda$core$Int64 $tmp257 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp256, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp258 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType250->subtypes, $tmp257);
    panda$core$String* $tmp259 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp258));
    panda$core$MutableString$append$panda$core$String(result254, $tmp259);
    panda$core$Char8$init$panda$core$UInt8(&$tmp260, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(result254, $tmp260);
    panda$core$Bit $tmp261 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp261.value);
    panda$core$String* $tmp262 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp263 = panda$core$String$convert$R$panda$core$String($tmp262);
    panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp263, &$s264);
    panda$core$MutableString$append$panda$core$String(result254, $tmp265);
    panda$core$Object* $tmp267 = (($fn266) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Bit $tmp268 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp267), p_m->owner);
    if ($tmp268.value) {
    {
        panda$core$MutableString$append$panda$core$String(result254, &$s269);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp270, ((panda$core$UInt8) { 42 }));
    panda$core$MutableString$append$panda$core$Char8(result254, $tmp270);
    panda$core$Int64 $tmp272 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType250->subtypes);
    panda$core$Int64 $tmp273 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp272, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp271, ((panda$core$Int64) { 0 }), $tmp273, ((panda$core$Bit) { false }));
    int64_t $tmp275 = $tmp271.min.value;
    panda$core$Int64 i274 = { $tmp275 };
    int64_t $tmp277 = $tmp271.max.value;
    bool $tmp278 = $tmp271.inclusive.value;
    if ($tmp278) goto $l285; else goto $l286;
    $l285:;
    if ($tmp275 <= $tmp277) goto $l279; else goto $l281;
    $l286:;
    if ($tmp275 < $tmp277) goto $l279; else goto $l281;
    $l279:;
    {
        panda$core$MutableString$append$panda$core$String(result254, &$s287);
        panda$core$Object* $tmp288 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType250->subtypes, i274);
        panda$core$String* $tmp289 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp288));
        panda$core$MutableString$append$panda$core$String(result254, $tmp289);
    }
    $l282:;
    int64_t $tmp291 = $tmp277 - i274.value;
    if ($tmp278) goto $l292; else goto $l293;
    $l292:;
    if ((uint64_t) $tmp291 >= 1) goto $l290; else goto $l281;
    $l293:;
    if ((uint64_t) $tmp291 > 1) goto $l290; else goto $l281;
    $l290:;
    i274.value += 1;
    goto $l279;
    $l281:;
    panda$core$MutableString$append$panda$core$String(result254, &$s296);
    {
        panda$core$String* $tmp298 = panda$core$MutableString$finish$R$panda$core$String(result254);
        tmp5297 = $tmp298;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result254));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inheritedType250));
        }
        return tmp5297;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp299.value);
    panda$core$Object* $tmp300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp301 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp300));
    panda$core$String* $tmp302 = panda$core$String$convert$R$panda$core$String($tmp301);
    panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp302, &$s303);
    return $tmp304;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces305;
    panda$core$String* previous310;
    panda$collections$Iterator* Iter$375$9312;
    org$pandalanguage$pandac$Type* intfType324;
    org$pandalanguage$pandac$ClassDecl* intf329;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC333;
    panda$collections$ListView* methods335;
    panda$core$String* name339;
    panda$core$MutableString* result348;
    panda$core$String* separator377;
    panda$collections$Iterator* Iter$384$13379;
    org$pandalanguage$pandac$MethodDecl* m391;
    panda$core$String* tmp6407;
    panda$core$Object* $tmp307 = (($fn306) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Type* $tmp308 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp309 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(((org$pandalanguage$pandac$Compiler*) $tmp307), $tmp308);
    interfaces305 = $tmp309;
    previous310 = &$s311;
    {
        ITable* $tmp313 = ((panda$collections$Iterable*) interfaces305)->$class->itable;
        while ($tmp313->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp313 = $tmp313->next;
        }
        $fn315 $tmp314 = $tmp313->methods[0];
        panda$collections$Iterator* $tmp316 = $tmp314(((panda$collections$Iterable*) interfaces305));
        Iter$375$9312 = $tmp316;
        $l317:;
        ITable* $tmp319 = Iter$375$9312->$class->itable;
        while ($tmp319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp319 = $tmp319->next;
        }
        $fn321 $tmp320 = $tmp319->methods[0];
        panda$core$Bit $tmp322 = $tmp320(Iter$375$9312);
        panda$core$Bit $tmp323 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp322);
        if (!$tmp323.value) goto $l318;
        {
            ITable* $tmp325 = Iter$375$9312->$class->itable;
            while ($tmp325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp325 = $tmp325->next;
            }
            $fn327 $tmp326 = $tmp325->methods[1];
            panda$core$Object* $tmp328 = $tmp326(Iter$375$9312);
            intfType324 = ((org$pandalanguage$pandac$Type*) $tmp328);
            panda$core$Object* $tmp331 = (($fn330) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$ClassDecl* $tmp332 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp331), intfType324);
            intf329 = $tmp332;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp334 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf329);
            intfCC333 = $tmp334;
            panda$core$Object* $tmp337 = (($fn336) self->compiler->$class->vtable[2])(self->compiler);
            panda$collections$ListView* $tmp338 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp337), p_cl, intfType324);
            methods335 = $tmp338;
            panda$core$String* $tmp340 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp341 = panda$core$String$convert$R$panda$core$String($tmp340);
            panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp341, &$s342);
            panda$core$String* $tmp344 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf329)->name);
            panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, $tmp344);
            panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp345, &$s346);
            name339 = $tmp347;
            panda$core$MutableString* $tmp349 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            org$pandalanguage$pandac$Type* $tmp351 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp352 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp351);
            panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s350, $tmp352);
            panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp353, &$s354);
            ITable* $tmp357 = ((panda$collections$CollectionView*) methods335)->$class->itable;
            while ($tmp357->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp357 = $tmp357->next;
            }
            $fn359 $tmp358 = $tmp357->methods[0];
            panda$core$Int64 $tmp360 = $tmp358(((panda$collections$CollectionView*) methods335));
            panda$core$Int64$wrapper* $tmp361;
            $tmp361 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp361->value = $tmp360;
            panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s356, ((panda$core$Object*) $tmp361));
            panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp362, &$s363);
            panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, name339);
            panda$core$String* $tmp367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp365, &$s366);
            panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, $tmp367);
            panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s369, intfCC333->name);
            panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s371);
            panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp372, previous310);
            panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp373, &$s374);
            panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp368, $tmp375);
            panda$core$MutableString$init$panda$core$String($tmp349, $tmp376);
            result348 = $tmp349;
            separator377 = &$s378;
            {
                ITable* $tmp380 = ((panda$collections$Iterable*) methods335)->$class->itable;
                while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp380 = $tmp380->next;
                }
                $fn382 $tmp381 = $tmp380->methods[0];
                panda$collections$Iterator* $tmp383 = $tmp381(((panda$collections$Iterable*) methods335));
                Iter$384$13379 = $tmp383;
                $l384:;
                ITable* $tmp386 = Iter$384$13379->$class->itable;
                while ($tmp386->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp386 = $tmp386->next;
                }
                $fn388 $tmp387 = $tmp386->methods[0];
                panda$core$Bit $tmp389 = $tmp387(Iter$384$13379);
                panda$core$Bit $tmp390 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp389);
                if (!$tmp390.value) goto $l385;
                {
                    ITable* $tmp392 = Iter$384$13379->$class->itable;
                    while ($tmp392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp392 = $tmp392->next;
                    }
                    $fn394 $tmp393 = $tmp392->methods[1];
                    panda$core$Object* $tmp395 = $tmp393(Iter$384$13379);
                    m391 = ((org$pandalanguage$pandac$MethodDecl*) $tmp395);
                    panda$core$MutableString$append$panda$core$String(result348, separator377);
                    {
                        separator377 = &$s396;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator377));
                    }
                    panda$core$Bit $tmp397 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m391->annotations);
                    if ($tmp397.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result348, &$s398);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp399 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m391);
                        panda$core$MutableString$append$panda$core$String(result348, $tmp399);
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m391));
                }
                goto $l384;
                $l385:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$384$13379));
            }
            panda$core$MutableString$append$panda$core$String(result348, &$s400);
            panda$core$String* $tmp401 = panda$core$MutableString$finish$R$panda$core$String(result348);
            (($fn402) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp401);
            {
                panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s403, name339);
                panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, &$s405);
                previous310 = $tmp406;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous310));
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator377));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods335));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result348));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf329));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfType324));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name339));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfCC333));
            }
        }
        goto $l317;
        $l318:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$375$9312));
    }
    {
        tmp6407 = previous310;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous310));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) interfaces305));
        }
        return tmp6407;
    }
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer408;
    panda$io$IndentedOutputStream* out410;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found412;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* tmp7414;
    org$pandalanguage$pandac$Type* effectiveReturnType421;
    panda$core$String* resultName425;
    panda$core$MutableString* resultType429;
    panda$core$String* self_t439;
    panda$core$Char8 $tmp445;
    panda$core$Range$LTpanda$core$Int64$GT $tmp446;
    panda$core$String* pType461;
    panda$collections$Array* casts484;
    panda$core$Range$LTpanda$core$Int64$GT $tmp486;
    panda$core$String* p501;
    panda$core$Range$LTpanda$core$Int64$GT $tmp531;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result572;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* tmp8577;
    panda$io$MemoryOutputStream* $tmp409 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp409);
    outBuffer408 = $tmp409;
    panda$io$IndentedOutputStream* $tmp411 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp411, ((panda$io$OutputStream*) outBuffer408));
    out410 = $tmp411;
    panda$core$Object* $tmp413 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found412 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp413);
    if (((panda$core$Bit) { found412 != NULL }).value) {
    {
        {
            tmp7414 = found412;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found412));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) out410));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outBuffer408));
            }
            return tmp7414;
        }
    }
    }
    panda$core$Bit $tmp415 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp415.value);
    panda$core$Int64 $tmp416 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp417 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp418 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp417, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp416, $tmp418);
    PANDA_ASSERT($tmp419.value);
    panda$core$Bit $tmp420 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp420.value);
    panda$core$Int64 $tmp422 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp423 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp422, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp424 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp423);
    effectiveReturnType421 = ((org$pandalanguage$pandac$Type*) $tmp424);
    panda$core$String* $tmp426 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp426, &$s427);
    resultName425 = $tmp428;
    panda$core$MutableString* $tmp430 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp431 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType421);
    panda$core$MutableString$init$panda$core$String($tmp430, $tmp431);
    resultType429 = $tmp430;
    panda$core$String* $tmp432 = panda$core$MutableString$convert$R$panda$core$String(resultType429);
    panda$core$String* $tmp434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp432, &$s433);
    panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp434, resultName425);
    panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp435, &$s436);
    (($fn438) ((panda$io$OutputStream*) out410)->$class->vtable[16])(((panda$io$OutputStream*) out410), $tmp437);
    panda$core$String* $tmp440 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t439 = $tmp440;
    panda$core$String* $tmp441 = panda$core$String$convert$R$panda$core$String(self_t439);
    panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp441, &$s442);
    (($fn444) ((panda$io$OutputStream*) out410)->$class->vtable[16])(((panda$io$OutputStream*) out410), $tmp443);
    panda$core$Char8$init$panda$core$UInt8(&$tmp445, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(resultType429, $tmp445);
    panda$core$MutableString$append$panda$core$String(resultType429, self_t439);
    panda$core$Int64 $tmp447 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp446, ((panda$core$Int64) { 0 }), $tmp447, ((panda$core$Bit) { false }));
    int64_t $tmp449 = $tmp446.min.value;
    panda$core$Int64 i448 = { $tmp449 };
    int64_t $tmp451 = $tmp446.max.value;
    bool $tmp452 = $tmp446.inclusive.value;
    if ($tmp452) goto $l459; else goto $l460;
    $l459:;
    if ($tmp449 <= $tmp451) goto $l453; else goto $l455;
    $l460:;
    if ($tmp449 < $tmp451) goto $l453; else goto $l455;
    $l453:;
    {
        panda$core$Object* $tmp462 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i448);
        panda$core$String* $tmp463 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp462));
        pType461 = $tmp463;
        panda$core$MutableString$append$panda$core$String(resultType429, &$s464);
        panda$core$MutableString$append$panda$core$String(resultType429, pType461);
        panda$core$String* $tmp466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s465, pType461);
        panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp466, &$s467);
        panda$core$Int64$wrapper* $tmp469;
        $tmp469 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp469->value = i448;
        panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp468, ((panda$core$Object*) $tmp469));
        panda$core$String* $tmp472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp470, &$s471);
        (($fn473) ((panda$io$OutputStream*) out410)->$class->vtable[16])(((panda$io$OutputStream*) out410), $tmp472);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pType461));
    }
    $l456:;
    int64_t $tmp475 = $tmp451 - i448.value;
    if ($tmp452) goto $l476; else goto $l477;
    $l476:;
    if ((uint64_t) $tmp475 >= 1) goto $l474; else goto $l455;
    $l477:;
    if ((uint64_t) $tmp475 > 1) goto $l474; else goto $l455;
    $l474:;
    i448.value += 1;
    goto $l453;
    $l455:;
    (($fn481) ((panda$io$OutputStream*) out410)->$class->vtable[19])(((panda$io$OutputStream*) out410), &$s480);
    panda$core$Int64 $tmp482 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out410->level, ((panda$core$Int64) { 1 }));
    out410->level = $tmp482;
    panda$core$MutableString$append$panda$core$String(resultType429, &$s483);
    panda$collections$Array* $tmp485 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp485);
    casts484 = $tmp485;
    panda$core$Int64 $tmp487 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp486, ((panda$core$Int64) { 0 }), $tmp487, ((panda$core$Bit) { false }));
    int64_t $tmp489 = $tmp486.min.value;
    panda$core$Int64 i488 = { $tmp489 };
    int64_t $tmp491 = $tmp486.max.value;
    bool $tmp492 = $tmp486.inclusive.value;
    if ($tmp492) goto $l499; else goto $l500;
    $l499:;
    if ($tmp489 <= $tmp491) goto $l493; else goto $l495;
    $l500:;
    if ($tmp489 < $tmp491) goto $l493; else goto $l495;
    $l493:;
    {
        panda$core$Int64$wrapper* $tmp503;
        $tmp503 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp503->value = i488;
        panda$core$String* $tmp504 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s502, ((panda$core$Object*) $tmp503));
        panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp504, &$s505);
        p501 = $tmp506;
        panda$core$Object* $tmp507 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i488);
        panda$core$Object* $tmp508 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i488);
        panda$core$Bit $tmp509 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp507)->type, ((org$pandalanguage$pandac$Type*) $tmp508));
        if ($tmp509.value) {
        {
            panda$core$Object* $tmp510 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i488);
            panda$core$Object* $tmp511 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i488);
            panda$core$String* $tmp512 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p501, ((org$pandalanguage$pandac$Type*) $tmp510), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp511)->type, out410);
            panda$collections$Array$add$panda$collections$Array$T(casts484, ((panda$core$Object*) $tmp512));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts484, ((panda$core$Object*) p501));
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p501));
    }
    $l496:;
    int64_t $tmp514 = $tmp491 - i488.value;
    if ($tmp492) goto $l515; else goto $l516;
    $l515:;
    if ((uint64_t) $tmp514 >= 1) goto $l513; else goto $l495;
    $l516:;
    if ((uint64_t) $tmp514 > 1) goto $l513; else goto $l495;
    $l513:;
    i488.value += 1;
    goto $l493;
    $l495:;
    org$pandalanguage$pandac$Type* $tmp519 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp520 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp519);
    if ($tmp520.value) {
    {
        panda$core$String* $tmp521 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp522 = panda$core$String$convert$R$panda$core$String($tmp521);
        panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp522, &$s523);
        (($fn525) ((panda$io$OutputStream*) out410)->$class->vtable[16])(((panda$io$OutputStream*) out410), $tmp524);
    }
    }
    panda$core$String* $tmp526 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp527 = panda$core$String$convert$R$panda$core$String($tmp526);
    panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp527, &$s528);
    (($fn530) ((panda$io$OutputStream*) out410)->$class->vtable[16])(((panda$io$OutputStream*) out410), $tmp529);
    panda$core$Int64 $tmp532 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp531, ((panda$core$Int64) { 0 }), $tmp532, ((panda$core$Bit) { false }));
    int64_t $tmp534 = $tmp531.min.value;
    panda$core$Int64 i533 = { $tmp534 };
    int64_t $tmp536 = $tmp531.max.value;
    bool $tmp537 = $tmp531.inclusive.value;
    if ($tmp537) goto $l544; else goto $l545;
    $l544:;
    if ($tmp534 <= $tmp536) goto $l538; else goto $l540;
    $l545:;
    if ($tmp534 < $tmp536) goto $l538; else goto $l540;
    $l538:;
    {
        panda$core$Object* $tmp547 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts484, i533);
        panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s546, ((panda$core$String*) $tmp547));
        panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s549);
        (($fn551) ((panda$io$OutputStream*) out410)->$class->vtable[16])(((panda$io$OutputStream*) out410), $tmp550);
    }
    $l541:;
    int64_t $tmp553 = $tmp536 - i533.value;
    if ($tmp537) goto $l554; else goto $l555;
    $l554:;
    if ((uint64_t) $tmp553 >= 1) goto $l552; else goto $l540;
    $l555:;
    if ((uint64_t) $tmp553 > 1) goto $l552; else goto $l540;
    $l552:;
    i533.value += 1;
    goto $l538;
    $l540:;
    (($fn559) ((panda$io$OutputStream*) out410)->$class->vtable[19])(((panda$io$OutputStream*) out410), &$s558);
    org$pandalanguage$pandac$Type* $tmp560 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp561 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp560);
    if ($tmp561.value) {
    {
        panda$core$String* $tmp564 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s563, p_raw->returnType, effectiveReturnType421, out410);
        panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s562, $tmp564);
        panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp565, &$s566);
        (($fn568) ((panda$io$OutputStream*) out410)->$class->vtable[19])(((panda$io$OutputStream*) out410), $tmp567);
    }
    }
    panda$core$Int64 $tmp569 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out410->level, ((panda$core$Int64) { 1 }));
    out410->level = $tmp569;
    (($fn571) ((panda$io$OutputStream*) out410)->$class->vtable[19])(((panda$io$OutputStream*) out410), &$s570);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp573 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class);
    panda$core$String* $tmp574 = panda$core$MutableString$finish$R$panda$core$String(resultType429);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp573, resultName425, $tmp574);
    result572 = $tmp573;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result572));
    panda$core$String* $tmp575 = panda$io$MemoryOutputStream$finish$R$panda$core$String(outBuffer408);
    (($fn576) p_rawOut->$class->vtable[16])(p_rawOut, $tmp575);
    {
        tmp8577 = result572;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found412));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) casts484));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result572));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultName425));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self_t439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) out410));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) effectiveReturnType421));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outBuffer408));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultType429));
        }
        return tmp8577;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod579;
    panda$core$String* result580;
    panda$core$String* selfType585;
    org$pandalanguage$pandac$Type* actualMethodType601;
    org$pandalanguage$pandac$Type* inheritedMethodType605;
    panda$core$Range$LTpanda$core$Int64$GT $tmp609;
    panda$collections$Array* parameters644;
    panda$core$Range$LTpanda$core$Int64$GT $tmp646;
    panda$collections$Array* children671;
    org$pandalanguage$pandac$Position $tmp674;
    panda$core$Range$LTpanda$core$Int64$GT $tmp685;
    panda$core$String* tmp9717;
    panda$core$Bit $tmp578 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp578.value);
    oldMethod579 = self->currentMethod;
    {
        self->currentMethod = p_m;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentMethod));
    }
    panda$core$String* $tmp581 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp582 = panda$core$String$convert$R$panda$core$String($tmp581);
    panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s583);
    result580 = $tmp584;
    panda$core$String* $tmp586 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp587 = panda$core$String$convert$R$panda$core$String($tmp586);
    panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp587, &$s588);
    selfType585 = $tmp589;
    panda$core$String* $tmp590 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp591 = panda$core$String$convert$R$panda$core$String($tmp590);
    panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp591, &$s592);
    panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp593, result580);
    panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp594, &$s595);
    panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, selfType585);
    panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp597, &$s598);
    (($fn600) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp599);
    panda$core$Object* $tmp603 = (($fn602) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Type* $tmp604 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp603), p_m);
    actualMethodType601 = $tmp604;
    panda$core$Object* $tmp607 = (($fn606) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Type* $tmp608 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp607), p_m);
    inheritedMethodType605 = $tmp608;
    panda$core$Int64 $tmp610 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp609, ((panda$core$Int64) { 0 }), $tmp610, ((panda$core$Bit) { false }));
    int64_t $tmp612 = $tmp609.min.value;
    panda$core$Int64 i611 = { $tmp612 };
    int64_t $tmp614 = $tmp609.max.value;
    bool $tmp615 = $tmp609.inclusive.value;
    if ($tmp615) goto $l622; else goto $l623;
    $l622:;
    if ($tmp612 <= $tmp614) goto $l616; else goto $l618;
    $l623:;
    if ($tmp612 < $tmp614) goto $l616; else goto $l618;
    $l616:;
    {
        panda$core$Object* $tmp625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType605->subtypes, i611);
        panda$core$String* $tmp626 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp625));
        panda$core$String* $tmp627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s624, $tmp626);
        panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp627, &$s628);
        panda$core$Object* $tmp630 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i611);
        panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp629, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp630)->name);
        panda$core$String* $tmp633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp631, &$s632);
        (($fn634) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp633);
    }
    $l619:;
    int64_t $tmp636 = $tmp614 - i611.value;
    if ($tmp615) goto $l637; else goto $l638;
    $l637:;
    if ((uint64_t) $tmp636 >= 1) goto $l635; else goto $l618;
    $l638:;
    if ((uint64_t) $tmp636 > 1) goto $l635; else goto $l618;
    $l635:;
    i611.value += 1;
    goto $l616;
    $l618:;
    (($fn642) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s641);
    panda$core$Int64 $tmp643 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp643;
    panda$collections$Array* $tmp645 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp645);
    parameters644 = $tmp645;
    panda$core$Int64 $tmp647 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp646, ((panda$core$Int64) { 0 }), $tmp647, ((panda$core$Bit) { false }));
    int64_t $tmp649 = $tmp646.min.value;
    panda$core$Int64 i648 = { $tmp649 };
    int64_t $tmp651 = $tmp646.max.value;
    bool $tmp652 = $tmp646.inclusive.value;
    if ($tmp652) goto $l659; else goto $l660;
    $l659:;
    if ($tmp649 <= $tmp651) goto $l653; else goto $l655;
    $l660:;
    if ($tmp649 < $tmp651) goto $l653; else goto $l655;
    $l653:;
    {
        panda$core$Object* $tmp661 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i648);
        panda$core$Object* $tmp662 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType605->subtypes, i648);
        panda$core$Object* $tmp663 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType601->subtypes, i648);
        panda$core$String* $tmp664 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp661)->name, ((org$pandalanguage$pandac$Type*) $tmp662), ((org$pandalanguage$pandac$Type*) $tmp663), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters644, ((panda$core$Object*) $tmp664));
    }
    $l656:;
    int64_t $tmp666 = $tmp651 - i648.value;
    if ($tmp652) goto $l667; else goto $l668;
    $l667:;
    if ((uint64_t) $tmp666 >= 1) goto $l665; else goto $l655;
    $l668:;
    if ((uint64_t) $tmp666 > 1) goto $l665; else goto $l655;
    $l665:;
    i648.value += 1;
    goto $l653;
    $l655:;
    panda$collections$Array* $tmp672 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp672);
    children671 = $tmp672;
    org$pandalanguage$pandac$IRNode* $tmp673 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
    org$pandalanguage$pandac$Position$init(&$tmp674);
    org$pandalanguage$pandac$Type* $tmp675 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp673, ((panda$core$Int64) { 31 }), $tmp674, $tmp675);
    panda$collections$Array$add$panda$collections$Array$T(children671, ((panda$core$Object*) $tmp673));
    org$pandalanguage$pandac$Type* $tmp676 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp677 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp676);
    if ($tmp677.value) {
    {
        (($fn679) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s678);
    }
    }
    panda$core$String* $tmp680 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp681 = panda$core$String$convert$R$panda$core$String($tmp680);
    panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp681, &$s682);
    (($fn684) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp683);
    panda$core$Int64 $tmp686 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp685, ((panda$core$Int64) { 0 }), $tmp686, ((panda$core$Bit) { false }));
    int64_t $tmp688 = $tmp685.min.value;
    panda$core$Int64 i687 = { $tmp688 };
    int64_t $tmp690 = $tmp685.max.value;
    bool $tmp691 = $tmp685.inclusive.value;
    if ($tmp691) goto $l698; else goto $l699;
    $l698:;
    if ($tmp688 <= $tmp690) goto $l692; else goto $l694;
    $l699:;
    if ($tmp688 < $tmp690) goto $l692; else goto $l694;
    $l692:;
    {
        panda$core$Object* $tmp701 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters644, i687);
        panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s700, ((panda$core$String*) $tmp701));
        panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, &$s703);
        (($fn705) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp704);
    }
    $l695:;
    int64_t $tmp707 = $tmp690 - i687.value;
    if ($tmp691) goto $l708; else goto $l709;
    $l708:;
    if ((uint64_t) $tmp707 >= 1) goto $l706; else goto $l694;
    $l709:;
    if ((uint64_t) $tmp707 > 1) goto $l706; else goto $l694;
    $l706:;
    i687.value += 1;
    goto $l692;
    $l694:;
    (($fn713) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s712);
    panda$core$Int64 $tmp714 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp714;
    (($fn716) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s715);
    {
        self->currentMethod = oldMethod579;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentMethod));
    }
    {
        tmp9717 = result580;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inheritedMethodType605));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) selfType585));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result580));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters644));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldMethod579));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children671));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType601));
        }
        return tmp9717;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces718;
    panda$core$String* previous723;
    panda$collections$Iterator* Iter$497$9725;
    org$pandalanguage$pandac$Type* intfType737;
    org$pandalanguage$pandac$ClassDecl* intf742;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC746;
    panda$collections$ListView* methods748;
    panda$core$String* name752;
    panda$core$MutableString* result761;
    panda$core$String* separator795;
    panda$collections$Iterator* Iter$506$13797;
    org$pandalanguage$pandac$MethodDecl* m809;
    panda$core$String* tmp10825;
    panda$core$Object* $tmp720 = (($fn719) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Type* $tmp721 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp722 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(((org$pandalanguage$pandac$Compiler*) $tmp720), $tmp721);
    interfaces718 = $tmp722;
    previous723 = &$s724;
    {
        ITable* $tmp726 = ((panda$collections$Iterable*) interfaces718)->$class->itable;
        while ($tmp726->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp726 = $tmp726->next;
        }
        $fn728 $tmp727 = $tmp726->methods[0];
        panda$collections$Iterator* $tmp729 = $tmp727(((panda$collections$Iterable*) interfaces718));
        Iter$497$9725 = $tmp729;
        $l730:;
        ITable* $tmp732 = Iter$497$9725->$class->itable;
        while ($tmp732->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp732 = $tmp732->next;
        }
        $fn734 $tmp733 = $tmp732->methods[0];
        panda$core$Bit $tmp735 = $tmp733(Iter$497$9725);
        panda$core$Bit $tmp736 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp735);
        if (!$tmp736.value) goto $l731;
        {
            ITable* $tmp738 = Iter$497$9725->$class->itable;
            while ($tmp738->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp738 = $tmp738->next;
            }
            $fn740 $tmp739 = $tmp738->methods[1];
            panda$core$Object* $tmp741 = $tmp739(Iter$497$9725);
            intfType737 = ((org$pandalanguage$pandac$Type*) $tmp741);
            panda$core$Object* $tmp744 = (($fn743) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$ClassDecl* $tmp745 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp744), intfType737);
            intf742 = $tmp745;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp747 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf742);
            intfCC746 = $tmp747;
            panda$core$Object* $tmp750 = (($fn749) self->compiler->$class->vtable[2])(self->compiler);
            panda$collections$ListView* $tmp751 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp750), p_cl, intfType737);
            methods748 = $tmp751;
            panda$core$String* $tmp753 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp754 = panda$core$String$convert$R$panda$core$String($tmp753);
            panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp754, &$s755);
            panda$core$String* $tmp757 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf742)->name);
            panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp756, $tmp757);
            panda$core$String* $tmp760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp758, &$s759);
            name752 = $tmp760;
            panda$core$MutableString* $tmp762 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            org$pandalanguage$pandac$Type* $tmp764 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp765 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp764);
            panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s763, $tmp765);
            panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, &$s767);
            ITable* $tmp770 = ((panda$collections$CollectionView*) methods748)->$class->itable;
            while ($tmp770->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp770 = $tmp770->next;
            }
            $fn772 $tmp771 = $tmp770->methods[0];
            panda$core$Int64 $tmp773 = $tmp771(((panda$collections$CollectionView*) methods748));
            panda$core$Int64$wrapper* $tmp774;
            $tmp774 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp774->value = $tmp773;
            panda$core$String* $tmp775 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s769, ((panda$core$Object*) $tmp774));
            panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp775, &$s776);
            panda$core$String* $tmp778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp777, name752);
            panda$core$String* $tmp780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp778, &$s779);
            panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp768, $tmp780);
            org$pandalanguage$pandac$Type* $tmp783 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp784 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp783);
            panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s782, $tmp784);
            panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp785, &$s786);
            panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp787, intfCC746->name);
            panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp788, &$s789);
            panda$core$String* $tmp791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp790, previous723);
            panda$core$String* $tmp793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp791, &$s792);
            panda$core$String* $tmp794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp781, $tmp793);
            panda$core$MutableString$init$panda$core$String($tmp762, $tmp794);
            result761 = $tmp762;
            separator795 = &$s796;
            {
                ITable* $tmp798 = ((panda$collections$Iterable*) methods748)->$class->itable;
                while ($tmp798->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp798 = $tmp798->next;
                }
                $fn800 $tmp799 = $tmp798->methods[0];
                panda$collections$Iterator* $tmp801 = $tmp799(((panda$collections$Iterable*) methods748));
                Iter$506$13797 = $tmp801;
                $l802:;
                ITable* $tmp804 = Iter$506$13797->$class->itable;
                while ($tmp804->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp804 = $tmp804->next;
                }
                $fn806 $tmp805 = $tmp804->methods[0];
                panda$core$Bit $tmp807 = $tmp805(Iter$506$13797);
                panda$core$Bit $tmp808 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp807);
                if (!$tmp808.value) goto $l803;
                {
                    ITable* $tmp810 = Iter$506$13797->$class->itable;
                    while ($tmp810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp810 = $tmp810->next;
                    }
                    $fn812 $tmp811 = $tmp810->methods[1];
                    panda$core$Object* $tmp813 = $tmp811(Iter$506$13797);
                    m809 = ((org$pandalanguage$pandac$MethodDecl*) $tmp813);
                    panda$core$MutableString$append$panda$core$String(result761, separator795);
                    {
                        separator795 = &$s814;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator795));
                    }
                    panda$core$Bit $tmp815 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m809->annotations);
                    if ($tmp815.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result761, &$s816);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp817 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m809, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result761, $tmp817);
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m809));
                }
                goto $l802;
                $l803:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$506$13797));
            }
            panda$core$MutableString$append$panda$core$String(result761, &$s818);
            panda$core$String* $tmp819 = panda$core$MutableString$finish$R$panda$core$String(result761);
            (($fn820) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp819);
            {
                panda$core$String* $tmp822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s821, name752);
                panda$core$String* $tmp824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp822, &$s823);
                previous723 = $tmp824;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous723));
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator795));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods748));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result761));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf742));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfType737));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name752));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfCC746));
            }
        }
        goto $l730;
        $l731:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$497$9725));
    }
    {
        tmp10825 = previous723;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous723));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) interfaces718));
        }
        return tmp10825;
    }
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp826 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp826;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result830;
    org$pandalanguage$pandac$Type* declared831;
    org$pandalanguage$pandac$Type* inherited836;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim841;
    panda$core$String* tmp11847;
    panda$core$Object* $tmp828 = (($fn827) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(((org$pandalanguage$pandac$Compiler*) $tmp828), p_m);
    panda$core$Bit $tmp829 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp829.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    memset(&result830, 0, sizeof(result830));
    panda$core$Object* $tmp833 = (($fn832) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Type* $tmp834 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp835 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp833), p_m, $tmp834);
    declared831 = $tmp835;
    panda$core$Object* $tmp838 = (($fn837) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Type* $tmp839 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp838), p_m);
    inherited836 = $tmp839;
    panda$core$Bit $tmp840 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared831, inherited836);
    if ($tmp840.value) {
    {
        panda$core$Object* $tmp843 = (($fn842) self->compiler->$class->vtable[2])(self->compiler);
        org$pandalanguage$pandac$Type* $tmp844 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp843), p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp845 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp844, ((panda$io$OutputStream*) self->shims));
        shim841 = $tmp845;
        {
            result830 = shim841->name;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result830));
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) shim841));
    }
    }
    else {
    {
        {
            panda$core$String* $tmp846 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            result830 = $tmp846;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result830));
        }
    }
    }
    {
        tmp11847 = result830;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inherited836));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result830));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declared831));
        }
        return tmp11847;
    }
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result848;
    panda$core$String* type852;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp12861;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp13863;
    panda$collections$ListView* vtable866;
    panda$core$String* superPtr877;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC878;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant888;
    panda$core$String* name894;
    panda$core$MutableString* code898;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp901;
    panda$core$String* separator933;
    panda$collections$Iterator* Iter$577$13935;
    org$pandalanguage$pandac$MethodDecl* m947;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp14962;
    panda$core$Object* $tmp849 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result848 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp849);
    if (((panda$core$Bit) { result848 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$core$Object* $tmp851 = (($fn850) self->compiler->$class->vtable[2])(self->compiler);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(((org$pandalanguage$pandac$Compiler*) $tmp851), p_cl);
        memset(&type852, 0, sizeof(type852));
        panda$core$Bit $tmp853 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp853.value) {
        {
            {
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp854 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
                org$pandalanguage$pandac$Type* $tmp855 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                panda$core$String* $tmp856 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp855)->name);
                panda$core$String* $tmp857 = panda$core$String$convert$R$panda$core$String($tmp856);
                panda$core$String* $tmp859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp857, &$s858);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp854, $tmp859, &$s860);
                result848 = $tmp854;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result848));
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result848));
            {
                panda$core$Object* $tmp862 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
                tmp12861 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp862);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type852));
                {
                    tmp13863 = tmp12861;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result848));
                    return tmp13863;
                }
            }
        }
        }
        panda$core$Object* $tmp865 = (($fn864) self->compiler->$class->vtable[2])(self->compiler);
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp865)->currentClass, ((panda$core$Object*) p_cl));
        panda$core$Object* $tmp868 = (($fn867) self->compiler->$class->vtable[2])(self->compiler);
        panda$collections$ListView* $tmp869 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp868), p_cl);
        vtable866 = $tmp869;
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp870 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
            org$pandalanguage$pandac$Type* $tmp871 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp872 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp871)->name);
            panda$core$String* $tmp873 = panda$core$String$convert$R$panda$core$String($tmp872);
            panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp873, &$s874);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp870, $tmp875, &$s876);
            result848 = $tmp870;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result848));
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result848));
        memset(&superPtr877, 0, sizeof(superPtr877));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            panda$core$Object* $tmp880 = (($fn879) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$ClassDecl* $tmp881 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp880), p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp882 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp881);
            superCC878 = $tmp882;
            {
                panda$core$String* $tmp884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s883, superCC878->name);
                panda$core$String* $tmp886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp884, &$s885);
                superPtr877 = $tmp886;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superPtr877));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCC878));
        }
        }
        else {
        {
            {
                superPtr877 = &$s887;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superPtr877));
            }
        }
        }
        panda$core$Object* $tmp890 = (($fn889) self->compiler->$class->vtable[2])(self->compiler);
        org$pandalanguage$pandac$Type* $tmp891 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp892 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp890), $tmp891);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp893 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp892);
        clConstant888 = $tmp893;
        panda$core$String* $tmp895 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        name894 = $tmp895;
        panda$core$Bit $tmp897 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(name894, &$s896);
        PANDA_ASSERT($tmp897.value);
        panda$core$MutableString* $tmp899 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp901, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp902 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(name894, $tmp901);
        panda$core$String* $tmp903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s900, $tmp902);
        panda$core$String* $tmp905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp903, &$s904);
        panda$core$String* $tmp906 = panda$core$String$convert$R$panda$core$String(result848->name);
        panda$core$String* $tmp908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp906, &$s907);
        panda$core$String* $tmp909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp908, result848->name);
        panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp909, &$s910);
        panda$core$String* $tmp912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp905, $tmp911);
        panda$core$String* $tmp914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s913, clConstant888->name);
        panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp914, &$s915);
        panda$core$Int64$wrapper* $tmp917;
        $tmp917 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp917->value = ((panda$core$Int64) { -999 });
        panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp916, ((panda$core$Object*) $tmp917));
        panda$core$String* $tmp920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp918, &$s919);
        panda$core$String* $tmp921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp912, $tmp920);
        panda$core$String* $tmp922 = panda$core$String$convert$R$panda$core$String(name894);
        panda$core$String* $tmp924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp922, &$s923);
        panda$core$String* $tmp925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp924, superPtr877);
        panda$core$String* $tmp927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp925, &$s926);
        panda$core$String* $tmp928 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp927, $tmp928);
        panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp929, &$s930);
        panda$core$String* $tmp932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp921, $tmp931);
        panda$core$MutableString$init$panda$core$String($tmp899, $tmp932);
        code898 = $tmp899;
        separator933 = &$s934;
        {
            ITable* $tmp936 = ((panda$collections$Iterable*) vtable866)->$class->itable;
            while ($tmp936->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp936 = $tmp936->next;
            }
            $fn938 $tmp937 = $tmp936->methods[0];
            panda$collections$Iterator* $tmp939 = $tmp937(((panda$collections$Iterable*) vtable866));
            Iter$577$13935 = $tmp939;
            $l940:;
            ITable* $tmp942 = Iter$577$13935->$class->itable;
            while ($tmp942->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp942 = $tmp942->next;
            }
            $fn944 $tmp943 = $tmp942->methods[0];
            panda$core$Bit $tmp945 = $tmp943(Iter$577$13935);
            panda$core$Bit $tmp946 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp945);
            if (!$tmp946.value) goto $l941;
            {
                ITable* $tmp948 = Iter$577$13935->$class->itable;
                while ($tmp948->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp948 = $tmp948->next;
                }
                $fn950 $tmp949 = $tmp948->methods[1];
                panda$core$Object* $tmp951 = $tmp949(Iter$577$13935);
                m947 = ((org$pandalanguage$pandac$MethodDecl*) $tmp951);
                panda$core$MutableString$append$panda$core$String(code898, separator933);
                panda$core$Bit $tmp952 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m947->annotations);
                if ($tmp952.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code898, &$s953);
                }
                }
                else {
                {
                    panda$core$String* $tmp954 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m947);
                    panda$core$MutableString$append$panda$core$String(code898, $tmp954);
                }
                }
                {
                    separator933 = &$s955;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator933));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m947));
            }
            goto $l940;
            $l941:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$577$13935));
        }
        panda$core$MutableString$append$panda$core$String(code898, &$s956);
        panda$core$String* $tmp957 = panda$core$MutableString$finish$R$panda$core$String(code898);
        (($fn958) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp957);
        panda$core$Object* $tmp960 = (($fn959) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp961 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp960)->currentClass);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator933));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable866));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type852));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superPtr877));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name894));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code898));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) clConstant888));
        }
    }
    }
    {
        tmp14962 = result848;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result848));
        return tmp14962;
    }
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name963;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result968;
    panda$core$String* type973;
    org$pandalanguage$pandac$ClassDecl* value983;
    panda$collections$ListView* valueVTable988;
    panda$collections$ListView* vtable998;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC1002;
    panda$core$String* superCast1007;
    panda$core$String* itable1012;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant1014;
    panda$core$String* name1020;
    panda$core$MutableString* code1024;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1027;
    panda$core$String* separator1058;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1060;
    org$pandalanguage$pandac$MethodDecl* m1078;
    panda$core$String* methodName1083;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp151103;
    panda$core$String* $tmp964 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp965 = panda$core$String$convert$R$panda$core$String($tmp964);
    panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp965, &$s966);
    name963 = $tmp967;
    panda$core$Object* $tmp969 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name963));
    result968 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp969);
    if (((panda$core$Bit) { result968 == NULL }).value) {
    {
        panda$core$Bit $tmp970 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp970.value) {
        {
            org$pandalanguage$pandac$Type* $tmp971 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp972 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp971);
            type973 = &$s974;
            panda$core$String* $tmp975 = panda$core$String$convert$R$panda$core$String(name963);
            panda$core$String* $tmp977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp975, &$s976);
            panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp977, type973);
            panda$core$String* $tmp980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp978, &$s979);
            (($fn981) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp980);
            {
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp982 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp982, name963, type973);
                result968 = $tmp982;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result968));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type973));
        }
        }
        else {
        {
            panda$core$Object* $tmp985 = (($fn984) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$Type* $tmp986 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp987 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp985), $tmp986);
            value983 = $tmp987;
            panda$core$Object* $tmp990 = (($fn989) self->compiler->$class->vtable[2])(self->compiler);
            panda$collections$ListView* $tmp991 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp990), value983);
            valueVTable988 = $tmp991;
            {
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp992 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
                panda$core$String* $tmp993 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$String* $tmp994 = panda$core$String$convert$R$panda$core$String($tmp993);
                panda$core$String* $tmp996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp994, &$s995);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp992, $tmp996, &$s997);
                result968 = $tmp992;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result968));
            }
            panda$core$Object* $tmp1000 = (($fn999) self->compiler->$class->vtable[2])(self->compiler);
            panda$collections$ListView* $tmp1001 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1000), p_cl);
            vtable998 = $tmp1001;
            panda$core$Object* $tmp1004 = (($fn1003) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$ClassDecl* $tmp1005 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1004), p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1006 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1005);
            superCC1002 = $tmp1006;
            panda$core$String* $tmp1009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1008, superCC1002->name);
            panda$core$String* $tmp1011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1009, &$s1010);
            superCast1007 = $tmp1011;
            panda$core$String* $tmp1013 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1012 = $tmp1013;
            panda$core$Object* $tmp1016 = (($fn1015) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$Type* $tmp1017 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1018 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1016), $tmp1017);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1019 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1018);
            clConstant1014 = $tmp1019;
            panda$core$String* $tmp1021 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            name1020 = $tmp1021;
            panda$core$Bit $tmp1023 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(name1020, &$s1022);
            PANDA_ASSERT($tmp1023.value);
            panda$core$MutableString* $tmp1025 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1027, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1028 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(name1020, $tmp1027);
            panda$core$String* $tmp1029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1026, $tmp1028);
            panda$core$String* $tmp1031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1029, &$s1030);
            panda$core$String* $tmp1032 = panda$core$String$convert$R$panda$core$String(result968->name);
            panda$core$String* $tmp1034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1032, &$s1033);
            panda$core$String* $tmp1035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1034, result968->name);
            panda$core$String* $tmp1037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1035, &$s1036);
            panda$core$String* $tmp1038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1031, $tmp1037);
            panda$core$String* $tmp1040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1039, clConstant1014->name);
            panda$core$String* $tmp1042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1040, &$s1041);
            panda$core$Int64$wrapper* $tmp1043;
            $tmp1043 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1043->value = ((panda$core$Int64) { -999 });
            panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1042, ((panda$core$Object*) $tmp1043));
            panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1044, &$s1045);
            panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1038, $tmp1046);
            panda$core$String* $tmp1048 = panda$core$String$convert$R$panda$core$String(name1020);
            panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, &$s1049);
            panda$core$String* $tmp1051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, superCast1007);
            panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1051, &$s1052);
            panda$core$String* $tmp1054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1053, itable1012);
            panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1054, &$s1055);
            panda$core$String* $tmp1057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, $tmp1056);
            panda$core$MutableString$init$panda$core$String($tmp1025, $tmp1057);
            code1024 = $tmp1025;
            separator1058 = &$s1059;
            ITable* $tmp1061 = ((panda$collections$CollectionView*) valueVTable988)->$class->itable;
            while ($tmp1061->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1061 = $tmp1061->next;
            }
            $fn1063 $tmp1062 = $tmp1061->methods[0];
            panda$core$Int64 $tmp1064 = $tmp1062(((panda$collections$CollectionView*) valueVTable988));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1060, ((panda$core$Int64) { 0 }), $tmp1064, ((panda$core$Bit) { false }));
            int64_t $tmp1066 = $tmp1060.min.value;
            panda$core$Int64 i1065 = { $tmp1066 };
            int64_t $tmp1068 = $tmp1060.max.value;
            bool $tmp1069 = $tmp1060.inclusive.value;
            if ($tmp1069) goto $l1076; else goto $l1077;
            $l1076:;
            if ($tmp1066 <= $tmp1068) goto $l1070; else goto $l1072;
            $l1077:;
            if ($tmp1066 < $tmp1068) goto $l1070; else goto $l1072;
            $l1070:;
            {
                ITable* $tmp1079 = vtable998->$class->itable;
                while ($tmp1079->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1079 = $tmp1079->next;
                }
                $fn1081 $tmp1080 = $tmp1079->methods[0];
                panda$core$Object* $tmp1082 = $tmp1080(vtable998, i1065);
                m1078 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1082);
                memset(&methodName1083, 0, sizeof(methodName1083));
                if (((panda$core$Bit) { ((panda$core$Object*) m1078->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    {
                        panda$core$String* $tmp1084 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1078, self->wrapperShims);
                        methodName1083 = $tmp1084;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodName1083));
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp1085 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1078);
                        methodName1083 = $tmp1085;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodName1083));
                    }
                    panda$core$Bit $tmp1086 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1078->owner);
                    if ($tmp1086.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1078);
                    }
                    }
                }
                }
                panda$core$String* $tmp1087 = panda$core$String$convert$R$panda$core$String(separator1058);
                panda$core$String* $tmp1089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1087, &$s1088);
                panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1089, methodName1083);
                panda$core$String* $tmp1092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1090, &$s1091);
                panda$core$MutableString$append$panda$core$String(code1024, $tmp1092);
                {
                    separator1058 = &$s1093;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1058));
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodName1083));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1078));
                }
            }
            $l1073:;
            int64_t $tmp1095 = $tmp1068 - i1065.value;
            if ($tmp1069) goto $l1096; else goto $l1097;
            $l1096:;
            if ((uint64_t) $tmp1095 >= 1) goto $l1094; else goto $l1072;
            $l1097:;
            if ((uint64_t) $tmp1095 > 1) goto $l1094; else goto $l1072;
            $l1094:;
            i1065.value += 1;
            goto $l1070;
            $l1072:;
            panda$core$MutableString$append$panda$core$String(code1024, &$s1100);
            panda$core$String* $tmp1101 = panda$core$MutableString$finish$R$panda$core$String(code1024);
            (($fn1102) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1101);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1058));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCast1007));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable998));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable1012));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCC1002));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value983));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable988));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1020));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code1024));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) clConstant1014));
            }
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name963), ((panda$core$Object*) result968));
    }
    }
    {
        tmp151103 = result968;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result968));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name963));
        }
        return tmp151103;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1109;
    panda$core$String* tmp161119;
    panda$core$Bit $tmp1104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp1104.value) {
    {
        panda$core$String* $tmp1106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1105, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1106, &$s1107);
        return $tmp1108;
    }
    }
    panda$core$Object* $tmp1110 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1109 = ((panda$core$String*) $tmp1110);
    if (((panda$core$Bit) { result1109 == NULL }).value) {
    {
        panda$core$Int64 $tmp1111 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1111;
        {
            panda$core$String* $tmp1112 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_v)->name);
            panda$core$String* $tmp1114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1112, &$s1113);
            panda$core$Int64$wrapper* $tmp1115;
            $tmp1115 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1115->value = self->varCount;
            panda$core$String* $tmp1116 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1114, ((panda$core$Object*) $tmp1115));
            panda$core$String* $tmp1118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1116, &$s1117);
            result1109 = $tmp1118;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1109));
        }
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1109));
    }
    }
    {
        tmp161119 = result1109;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1109));
        return tmp161119;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1120 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1120.value);
    panda$core$String* $tmp1121 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1122 = panda$core$String$convert$R$panda$core$String($tmp1121);
    panda$core$String* $tmp1124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1122, &$s1123);
    panda$core$String* $tmp1125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1124, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1125, &$s1126);
    return $tmp1127;
}
org$pandalanguage$pandac$CCodeGenerator$OpClass org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1128;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1129;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1130;
    switch (p_t->typeKind.value) {
        case 12:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1128, ((panda$core$Int64) { 0 }));
            return $tmp1128;
        }
        break;
        case 13:
        case 19:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1129, ((panda$core$Int64) { 1 }));
            return $tmp1129;
        }
        break;
        case 20:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1130, ((panda$core$Int64) { 2 }));
            return $tmp1130;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1131;
    panda$core$String* leftRef1133;
    panda$core$String* falseLabel1149;
    panda$core$String* rightRef1159;
    panda$core$String* tmp171174;
    panda$core$String* $tmp1132 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1131 = $tmp1132;
    panda$core$String* $tmp1134 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1133 = $tmp1134;
    org$pandalanguage$pandac$Type* $tmp1136 = (($fn1135) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1137 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1138 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1136, $tmp1137);
    if ($tmp1138.value) {
    {
        {
            panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1133, &$s1139);
            leftRef1133 = $tmp1140;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1133));
        }
    }
    }
    panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1141, result1131);
    panda$core$String* $tmp1144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1142, &$s1143);
    panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1144, leftRef1133);
    panda$core$String* $tmp1147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1145, &$s1146);
    (($fn1148) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1147);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp1150 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1149 = $tmp1150;
    panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1151, result1131);
    panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, &$s1153);
    panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1154, falseLabel1149);
    panda$core$String* $tmp1157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1155, &$s1156);
    (($fn1158) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1157);
    panda$core$String* $tmp1160 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1159 = $tmp1160;
    org$pandalanguage$pandac$Type* $tmp1162 = (($fn1161) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1163 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1164 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1162, $tmp1163);
    if ($tmp1164.value) {
    {
        {
            panda$core$String* $tmp1166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1159, &$s1165);
            rightRef1159 = $tmp1166;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1159));
        }
    }
    }
    panda$core$String* $tmp1167 = panda$core$String$convert$R$panda$core$String(result1131);
    panda$core$String* $tmp1169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1167, &$s1168);
    panda$core$String* $tmp1170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1169, rightRef1159);
    panda$core$String* $tmp1172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1170, &$s1171);
    (($fn1173) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1172);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1149, p_out);
    {
        tmp171174 = result1131;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1131));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1159));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel1149));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1133));
        }
        return tmp171174;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1175;
    panda$core$String* leftRef1177;
    panda$core$String* trueLabel1193;
    panda$core$String* rightRef1203;
    panda$core$String* tmp181218;
    panda$core$String* $tmp1176 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1175 = $tmp1176;
    panda$core$String* $tmp1178 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1177 = $tmp1178;
    org$pandalanguage$pandac$Type* $tmp1180 = (($fn1179) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1181 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1182 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1180, $tmp1181);
    if ($tmp1182.value) {
    {
        {
            panda$core$String* $tmp1184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1177, &$s1183);
            leftRef1177 = $tmp1184;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1177));
        }
    }
    }
    panda$core$String* $tmp1186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1185, result1175);
    panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1186, &$s1187);
    panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1188, leftRef1177);
    panda$core$String* $tmp1191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1189, &$s1190);
    (($fn1192) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1191);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp1194 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1193 = $tmp1194;
    panda$core$String* $tmp1196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1195, result1175);
    panda$core$String* $tmp1198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1196, &$s1197);
    panda$core$String* $tmp1199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1198, trueLabel1193);
    panda$core$String* $tmp1201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1199, &$s1200);
    (($fn1202) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1201);
    panda$core$String* $tmp1204 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1203 = $tmp1204;
    org$pandalanguage$pandac$Type* $tmp1206 = (($fn1205) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1207 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1208 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1206, $tmp1207);
    if ($tmp1208.value) {
    {
        {
            panda$core$String* $tmp1210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1203, &$s1209);
            rightRef1203 = $tmp1210;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1203));
        }
    }
    }
    panda$core$String* $tmp1211 = panda$core$String$convert$R$panda$core$String(result1175);
    panda$core$String* $tmp1213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1211, &$s1212);
    panda$core$String* $tmp1214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1213, rightRef1203);
    panda$core$String* $tmp1216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1214, &$s1215);
    (($fn1217) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1216);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1193, p_out);
    {
        tmp181218 = result1175;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1175));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1203));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel1193));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1177));
        }
        return tmp181218;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, org$pandalanguage$pandac$parser$Token$Kind p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1219;
    panda$core$Bit logical1220;
    org$pandalanguage$pandac$parser$Token$Kind $match$724_91221;
    panda$core$String* result1260;
    panda$core$String* tmp191282;
    memset(&cOp1219, 0, sizeof(cOp1219));
    logical1220 = ((panda$core$Bit) { false });
    {
        $match$724_91221 = p_op;
        panda$core$Bit $tmp1222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp1222.value) {
        {
            {
                cOp1219 = &$s1223;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
        }
        }
        else {
        panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp1224.value) {
        {
            {
                cOp1219 = &$s1225;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
        }
        }
        else {
        panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp1226.value) {
        {
            {
                cOp1219 = &$s1227;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
        }
        }
        else {
        panda$core$Bit $tmp1228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp1228.value) {
        {
            {
                cOp1219 = &$s1229;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
        }
        }
        else {
        panda$core$Bit $tmp1230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp1230.value) {
        {
            {
                cOp1219 = &$s1231;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
        }
        }
        else {
        panda$core$Bit $tmp1232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp1232.value) {
        {
            {
                cOp1219 = &$s1233;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
        }
        }
        else {
        panda$core$Bit $tmp1234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp1234.value) {
        {
            {
                cOp1219 = &$s1235;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
        }
        }
        else {
        panda$core$Bit $tmp1236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1236.value) {
        {
            {
                cOp1219 = &$s1237;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
        }
        }
        else {
        panda$core$Bit $tmp1238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp1238.value) {
        {
            {
                cOp1219 = &$s1239;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
        }
        }
        else {
        panda$core$Bit $tmp1240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp1240.value) {
        {
            {
                cOp1219 = &$s1241;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
        }
        }
        else {
        panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 70 }));
        bool $tmp1242 = $tmp1243.value;
        if ($tmp1242) goto $l1244;
        panda$core$Bit $tmp1245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1242 = $tmp1245.value;
        $l1244:;
        panda$core$Bit $tmp1246 = { $tmp1242 };
        if ($tmp1246.value) {
        {
            {
                cOp1219 = &$s1247;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
        }
        }
        else {
        panda$core$Bit $tmp1248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1248.value) {
        {
            {
                cOp1219 = &$s1249;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
            logical1220 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp1250.value) {
        {
            {
                cOp1219 = &$s1251;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
            logical1220 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1252.value) {
        {
            {
                cOp1219 = &$s1253;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
            logical1220 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1254.value) {
        {
            {
                cOp1219 = &$s1255;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
            logical1220 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp1256.value) {
        {
            {
                cOp1219 = &$s1257;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
            logical1220 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$724_91221.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp1258.value) {
        {
            logical1220 = ((panda$core$Bit) { true });
            {
                cOp1219 = &$s1259;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
            }
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
    panda$core$String* $tmp1261 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1260 = $tmp1261;
    if (logical1220.value) {
    {
        (($fn1263) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1262);
    }
    }
    else {
    {
        panda$core$String* $tmp1264 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1265 = panda$core$String$convert$R$panda$core$String($tmp1264);
        panda$core$String* $tmp1267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1265, &$s1266);
        (($fn1268) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1267);
    }
    }
    panda$core$String* $tmp1269 = panda$core$String$convert$R$panda$core$String(result1260);
    panda$core$String* $tmp1271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1269, &$s1270);
    panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1271, p_leftRef);
    panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1272, &$s1273);
    panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1274, cOp1219);
    panda$core$String* $tmp1277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1275, &$s1276);
    panda$core$String* $tmp1278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1277, p_rightRef);
    panda$core$String* $tmp1280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1278, &$s1279);
    (($fn1281) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1280);
    {
        tmp191282 = result1260;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1260));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1219));
        }
        return tmp191282;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1283;
    panda$core$String* rightRef1285;
    panda$core$String* tmp201287;
    panda$core$String* $tmp1284 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1283 = $tmp1284;
    panda$core$String* $tmp1286 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1285 = $tmp1286;
    {
        panda$core$String* $tmp1289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1288, leftRef1283);
        panda$core$String* $tmp1291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1289, &$s1290);
        panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1291, rightRef1285);
        panda$core$String* $tmp1294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1292, &$s1293);
        tmp201287 = $tmp1294;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1285));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1283));
        }
        return tmp201287;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1295;
    panda$core$String* rightRef1297;
    panda$core$String* tmp211299;
    panda$core$String* $tmp1296 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1295 = $tmp1296;
    panda$core$String* $tmp1298 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1297 = $tmp1298;
    {
        panda$core$String* $tmp1301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1300, leftRef1295);
        panda$core$String* $tmp1303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1301, &$s1302);
        panda$core$String* $tmp1304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1303, rightRef1297);
        panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1304, &$s1305);
        tmp211299 = $tmp1306;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1297));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1295));
        }
        return tmp211299;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$parser$Token$Kind $match$794_91312;
    panda$core$String* leftRef1321;
    panda$core$String* rightRef1323;
    panda$core$String* tmp221325;
    org$pandalanguage$pandac$Type* $tmp1308 = (($fn1307) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1310 = (($fn1309) p_right->$class->vtable[2])(p_right);
    panda$core$Bit $tmp1311 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1308, $tmp1310);
    PANDA_ASSERT($tmp1311.value);
    {
        $match$794_91312 = p_op;
        panda$core$Bit $tmp1313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$794_91312.$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp1313.value) {
        {
            panda$core$String* $tmp1314 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1314;
        }
        }
        else {
        panda$core$Bit $tmp1315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$794_91312.$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp1315.value) {
        {
            panda$core$String* $tmp1316 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1316;
        }
        }
        else {
        panda$core$Bit $tmp1317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$794_91312.$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp1317.value) {
        {
            panda$core$String* $tmp1318 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1318;
        }
        }
        else {
        panda$core$Bit $tmp1319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$794_91312.$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp1319.value) {
        {
            panda$core$String* $tmp1320 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1320;
        }
        }
        else {
        {
            panda$core$String* $tmp1322 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1321 = $tmp1322;
            panda$core$String* $tmp1324 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1323 = $tmp1324;
            {
                org$pandalanguage$pandac$Type* $tmp1327 = (($fn1326) p_left->$class->vtable[2])(p_left);
                panda$core$String* $tmp1328 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1327, leftRef1321, p_op, rightRef1323, p_out);
                tmp221325 = $tmp1328;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1323));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1321));
                }
                return tmp221325;
            }
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1329;
    panda$core$Int64 index1331;
    panda$collections$ListView* vtable1332;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1336;
    panda$core$String* tmp231365;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1330 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1329 = $tmp1330;
    index1331 = ((panda$core$Int64) { -1 });
    panda$core$Object* $tmp1334 = (($fn1333) self->compiler->$class->vtable[2])(self->compiler);
    panda$collections$ListView* $tmp1335 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1334), p_m->owner);
    vtable1332 = $tmp1335;
    ITable* $tmp1337 = ((panda$collections$CollectionView*) vtable1332)->$class->itable;
    while ($tmp1337->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1337 = $tmp1337->next;
    }
    $fn1339 $tmp1338 = $tmp1337->methods[0];
    panda$core$Int64 $tmp1340 = $tmp1338(((panda$collections$CollectionView*) vtable1332));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1336, ((panda$core$Int64) { 0 }), $tmp1340, ((panda$core$Bit) { false }));
    int64_t $tmp1342 = $tmp1336.min.value;
    panda$core$Int64 i1341 = { $tmp1342 };
    int64_t $tmp1344 = $tmp1336.max.value;
    bool $tmp1345 = $tmp1336.inclusive.value;
    if ($tmp1345) goto $l1352; else goto $l1353;
    $l1352:;
    if ($tmp1342 <= $tmp1344) goto $l1346; else goto $l1348;
    $l1353:;
    if ($tmp1342 < $tmp1344) goto $l1346; else goto $l1348;
    $l1346:;
    {
        ITable* $tmp1354 = vtable1332->$class->itable;
        while ($tmp1354->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1354 = $tmp1354->next;
        }
        $fn1356 $tmp1355 = $tmp1354->methods[0];
        panda$core$Object* $tmp1357 = $tmp1355(vtable1332, i1341);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1357)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1331 = i1341;
            goto $l1348;
        }
        }
    }
    $l1349:;
    int64_t $tmp1359 = $tmp1344 - i1341.value;
    if ($tmp1345) goto $l1360; else goto $l1361;
    $l1360:;
    if ((uint64_t) $tmp1359 >= 1) goto $l1358; else goto $l1348;
    $l1361:;
    if ((uint64_t) $tmp1359 > 1) goto $l1358; else goto $l1348;
    $l1358:;
    i1341.value += 1;
    goto $l1346;
    $l1348:;
    panda$core$Bit $tmp1364 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1331, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1364.value);
    {
        panda$core$Object* $tmp1368 = (($fn1367) self->compiler->$class->vtable[2])(self->compiler);
        org$pandalanguage$pandac$Type* $tmp1369 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp1368), p_m);
        panda$core$String* $tmp1370 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1369);
        panda$core$String* $tmp1371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1366, $tmp1370);
        panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1371, &$s1372);
        panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1373, p_target);
        panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1374, &$s1375);
        panda$core$Int64$wrapper* $tmp1377;
        $tmp1377 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp1377->value = index1331;
        panda$core$String* $tmp1378 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1376, ((panda$core$Object*) $tmp1377));
        panda$core$String* $tmp1380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1378, &$s1379);
        tmp231365 = $tmp1380;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1332));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1329));
        }
        return tmp231365;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1381;
    panda$core$String* itable1383;
    panda$core$Int64 index1412;
    panda$collections$ListView* vtable1413;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1417;
    panda$core$String* result1458;
    panda$core$String* methodType1460;
    panda$core$String* tmp241479;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1382 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1381 = $tmp1382;
    panda$core$String* $tmp1384 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1383 = $tmp1384;
    panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1385, itable1383);
    panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1386, &$s1387);
    panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1388, p_target);
    panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, &$s1390);
    (($fn1392) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1391);
    panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1393, itable1383);
    panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, &$s1395);
    panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1396, cc1381->name);
    panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1397, &$s1398);
    (($fn1400) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1399);
    panda$core$Int64 $tmp1401 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1401;
    panda$core$String* $tmp1402 = panda$core$String$convert$R$panda$core$String(itable1383);
    panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, &$s1403);
    panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1404, itable1383);
    panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1405, &$s1406);
    (($fn1408) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1407);
    panda$core$Int64 $tmp1409 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1409;
    (($fn1411) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1410);
    index1412 = ((panda$core$Int64) { -1 });
    panda$core$Object* $tmp1415 = (($fn1414) self->compiler->$class->vtable[2])(self->compiler);
    panda$collections$ListView* $tmp1416 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1415), p_m->owner);
    vtable1413 = $tmp1416;
    ITable* $tmp1418 = ((panda$collections$CollectionView*) vtable1413)->$class->itable;
    while ($tmp1418->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1418 = $tmp1418->next;
    }
    $fn1420 $tmp1419 = $tmp1418->methods[0];
    panda$core$Int64 $tmp1421 = $tmp1419(((panda$collections$CollectionView*) vtable1413));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1417, ((panda$core$Int64) { 0 }), $tmp1421, ((panda$core$Bit) { false }));
    int64_t $tmp1423 = $tmp1417.min.value;
    panda$core$Int64 i1422 = { $tmp1423 };
    int64_t $tmp1425 = $tmp1417.max.value;
    bool $tmp1426 = $tmp1417.inclusive.value;
    if ($tmp1426) goto $l1433; else goto $l1434;
    $l1433:;
    if ($tmp1423 <= $tmp1425) goto $l1427; else goto $l1429;
    $l1434:;
    if ($tmp1423 < $tmp1425) goto $l1427; else goto $l1429;
    $l1427:;
    {
        ITable* $tmp1435 = vtable1413->$class->itable;
        while ($tmp1435->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1435 = $tmp1435->next;
        }
        $fn1437 $tmp1436 = $tmp1435->methods[0];
        panda$core$Object* $tmp1438 = $tmp1436(vtable1413, i1422);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1438)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1412 = i1422;
            goto $l1429;
        }
        }
    }
    $l1430:;
    int64_t $tmp1440 = $tmp1425 - i1422.value;
    if ($tmp1426) goto $l1441; else goto $l1442;
    $l1441:;
    if ((uint64_t) $tmp1440 >= 1) goto $l1439; else goto $l1429;
    $l1442:;
    if ((uint64_t) $tmp1440 > 1) goto $l1439; else goto $l1429;
    $l1439:;
    i1422.value += 1;
    goto $l1427;
    $l1429:;
    panda$core$Object* $tmp1446 = (($fn1445) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp1448 = (($fn1447) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Type* $tmp1449 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1450 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1448), $tmp1449);
    panda$collections$ListView* $tmp1451 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1446), $tmp1450);
    ITable* $tmp1452 = ((panda$collections$CollectionView*) $tmp1451)->$class->itable;
    while ($tmp1452->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1452 = $tmp1452->next;
    }
    $fn1454 $tmp1453 = $tmp1452->methods[0];
    panda$core$Int64 $tmp1455 = $tmp1453(((panda$collections$CollectionView*) $tmp1451));
    panda$core$Int64 $tmp1456 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1412, $tmp1455);
    index1412 = $tmp1456;
    panda$core$Bit $tmp1457 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1412, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1457.value);
    panda$core$String* $tmp1459 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1458 = $tmp1459;
    panda$core$Object* $tmp1462 = (($fn1461) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Type* $tmp1463 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp1462), p_m);
    panda$core$String* $tmp1464 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1463);
    methodType1460 = $tmp1464;
    panda$core$String* $tmp1465 = panda$core$String$convert$R$panda$core$String(methodType1460);
    panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1465, &$s1466);
    panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, result1458);
    panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, &$s1469);
    panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1470, itable1383);
    panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1471, &$s1472);
    panda$core$Int64$wrapper* $tmp1474;
    $tmp1474 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp1474->value = index1412;
    panda$core$String* $tmp1475 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1473, ((panda$core$Object*) $tmp1474));
    panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1475, &$s1476);
    (($fn1478) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1477);
    {
        tmp241479 = result1458;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1458));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1413));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1381));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable1383));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodType1460));
        }
        return tmp241479;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1481 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1480 = $tmp1481.value;
    if (!$tmp1480) goto $l1482;
    panda$core$Bit $tmp1483 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1480 = $tmp1483.value;
    $l1482:;
    panda$core$Bit $tmp1484 = { $tmp1480 };
    if ($tmp1484.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1485.value) {
        {
            panda$core$String* $tmp1486 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1486;
        }
        }
        else {
        {
            panda$core$String* $tmp1487 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1487;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1488 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1488.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1489 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1489;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$867_91490;
    panda$core$String* count1495;
    panda$core$Int64 elementSize1501;
    panda$core$String* tmp251505;
    panda$core$String* ptr1522;
    panda$core$String* tmp261525;
    panda$core$String* ptr1534;
    panda$core$String* index1537;
    panda$core$String* tmp271540;
    panda$core$String* ptr1551;
    panda$core$String* oldCount1554;
    panda$core$String* newCount1557;
    panda$core$Int64 elementSize1563;
    panda$core$String* tmp281567;
    panda$core$String* ptr1595;
    panda$core$String* offset1598;
    panda$core$String* tmp291601;
    {
        $match$867_91490 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp1492 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$867_91490, &$s1491);
        if ($tmp1492.value) {
        {
            panda$core$Int64 $tmp1493 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1493, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1494.value);
            panda$core$Object* $tmp1496 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1497 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1496), p_out);
            count1495 = $tmp1497;
            org$pandalanguage$pandac$Type* $tmp1498 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1499 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1498->subtypes);
            panda$core$Bit $tmp1500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1499, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1500.value);
            org$pandalanguage$pandac$Type* $tmp1502 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1502->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1504 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1503));
            elementSize1501 = $tmp1504;
            {
                panda$core$String* $tmp1507 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                panda$core$String* $tmp1508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1506, $tmp1507);
                panda$core$String* $tmp1510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1508, &$s1509);
                panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1510, count1495);
                panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1511, &$s1512);
                panda$core$Int64$wrapper* $tmp1514;
                $tmp1514 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp1514->value = elementSize1501;
                panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1513, ((panda$core$Object*) $tmp1514));
                panda$core$String* $tmp1517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1515, &$s1516);
                tmp251505 = $tmp1517;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) count1495));
                return tmp251505;
            }
        }
        }
        else {
        panda$core$Bit $tmp1519 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$867_91490, &$s1518);
        if ($tmp1519.value) {
        {
            panda$core$Int64 $tmp1520 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1520, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1521.value);
            panda$core$Object* $tmp1523 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1524 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1523), p_out);
            ptr1522 = $tmp1524;
            {
                panda$core$String* $tmp1527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1526, ptr1522);
                panda$core$String* $tmp1529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1527, &$s1528);
                tmp261525 = $tmp1529;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr1522));
                return tmp261525;
            }
        }
        }
        else {
        panda$core$Bit $tmp1531 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$867_91490, &$s1530);
        if ($tmp1531.value) {
        {
            panda$core$Int64 $tmp1532 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1532, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1533.value);
            panda$core$Object* $tmp1535 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1536 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1535), p_out);
            ptr1534 = $tmp1536;
            panda$core$Object* $tmp1538 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1539 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1538), p_out);
            index1537 = $tmp1539;
            {
                panda$core$String* $tmp1541 = panda$core$String$convert$R$panda$core$String(ptr1534);
                panda$core$String* $tmp1543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1541, &$s1542);
                panda$core$String* $tmp1544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1543, index1537);
                panda$core$String* $tmp1546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1544, &$s1545);
                tmp271540 = $tmp1546;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr1534));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index1537));
                }
                return tmp271540;
            }
        }
        }
        else {
        panda$core$Bit $tmp1548 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$867_91490, &$s1547);
        if ($tmp1548.value) {
        {
            panda$core$Int64 $tmp1549 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1549, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1550.value);
            panda$core$Object* $tmp1552 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1553 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1552), p_out);
            ptr1551 = $tmp1553;
            panda$core$Object* $tmp1555 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1556 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1555), p_out);
            oldCount1554 = $tmp1556;
            panda$core$Object* $tmp1558 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp1559 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1558), p_out);
            newCount1557 = $tmp1559;
            org$pandalanguage$pandac$Type* $tmp1560 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1561 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1560->subtypes);
            panda$core$Bit $tmp1562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1561, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1562.value);
            org$pandalanguage$pandac$Type* $tmp1564 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1565 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1564->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1566 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1565));
            elementSize1563 = $tmp1566;
            {
                panda$core$String* $tmp1569 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                panda$core$String* $tmp1570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1568, $tmp1569);
                panda$core$String* $tmp1572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1570, &$s1571);
                panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1572, ptr1551);
                panda$core$String* $tmp1575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1573, &$s1574);
                panda$core$String* $tmp1576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1575, oldCount1554);
                panda$core$String* $tmp1578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1576, &$s1577);
                panda$core$Int64$wrapper* $tmp1579;
                $tmp1579 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp1579->value = elementSize1563;
                panda$core$String* $tmp1580 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1578, ((panda$core$Object*) $tmp1579));
                panda$core$String* $tmp1582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1580, &$s1581);
                panda$core$String* $tmp1583 = panda$core$String$convert$R$panda$core$String(newCount1557);
                panda$core$String* $tmp1585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1583, &$s1584);
                panda$core$Int64$wrapper* $tmp1586;
                $tmp1586 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp1586->value = elementSize1563;
                panda$core$String* $tmp1587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1585, ((panda$core$Object*) $tmp1586));
                panda$core$String* $tmp1589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1587, &$s1588);
                panda$core$String* $tmp1590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1582, $tmp1589);
                tmp281567 = $tmp1590;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldCount1554));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr1551));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newCount1557));
                }
                return tmp281567;
            }
        }
        }
        else {
        panda$core$Bit $tmp1592 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$867_91490, &$s1591);
        if ($tmp1592.value) {
        {
            panda$core$Int64 $tmp1593 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1593, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1594.value);
            panda$core$Object* $tmp1596 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1597 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1596), p_out);
            ptr1595 = $tmp1597;
            panda$core$Object* $tmp1599 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1600 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1599), p_out);
            offset1598 = $tmp1600;
            {
                panda$core$String* $tmp1603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1602, ptr1595);
                panda$core$String* $tmp1605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1603, &$s1604);
                panda$core$String* $tmp1606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1605, offset1598);
                panda$core$String* $tmp1608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1606, &$s1607);
                tmp291601 = $tmp1608;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr1595));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) offset1598));
                }
                return tmp291601;
            }
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
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_mref, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m1609;
    panda$core$String* tmp301612;
    panda$core$String* bit1621;
    panda$core$String* result1625;
    panda$core$String* tmp311635;
    panda$core$String* tmp331636;
    panda$core$String* bit1641;
    panda$core$String* result1645;
    panda$core$String* tmp321655;
    panda$core$String* tmp341656;
    panda$collections$Array* argRefs1657;
    org$pandalanguage$pandac$Type* actualMethodType1660;
    panda$core$String* actualResultType1661;
    panda$core$Bit isSuper1662;
    panda$core$Int64 offset1686;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1691;
    panda$core$String* arg1706;
    panda$core$String* target1731;
    panda$core$String* methodRef1735;
    panda$core$Bit indirect1737;
    panda$core$String* result1739;
    panda$core$String* separator1741;
    panda$core$String* indirectVar1743;
    panda$collections$Iterator* Iter$971$91769;
    panda$core$String* arg1781;
    panda$core$String* tmp351798;
    panda$core$String* tmp361803;
    m1609 = p_mref->value;
    panda$core$Bit $tmp1611 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1609->owner)->name, &$s1610);
    if ($tmp1611.value) {
    {
        {
            panda$core$String* $tmp1613 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, p_t, p_mref, p_args, p_out);
            tmp301612 = $tmp1613;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1609));
            return tmp301612;
        }
    }
    }
    panda$core$Bit $tmp1614 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1609->owner);
    if ($tmp1614.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1609);
    }
    }
    panda$core$Bit $tmp1616 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1609->owner)->name, &$s1615);
    if ($tmp1616.value) {
    {
        panda$core$Bit $tmp1618 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1609)->name, &$s1617);
        if ($tmp1618.value) {
        {
            panda$core$Int64 $tmp1619 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1619, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1620.value);
            panda$core$Object* $tmp1622 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1623 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1624 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1622), ((org$pandalanguage$pandac$IRNode*) $tmp1623), p_out);
            bit1621 = $tmp1624;
            panda$core$String* $tmp1626 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1625 = $tmp1626;
            panda$core$String* $tmp1628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1627, result1625);
            panda$core$String* $tmp1630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1628, &$s1629);
            panda$core$String* $tmp1631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1630, bit1621);
            panda$core$String* $tmp1633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1631, &$s1632);
            (($fn1634) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1633);
            {
                tmp311635 = result1625;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1625));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit1621));
                }
                {
                    tmp331636 = tmp311635;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1609));
                    return tmp331636;
                }
            }
        }
        }
        panda$core$Bit $tmp1638 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1609)->name, &$s1637);
        if ($tmp1638.value) {
        {
            panda$core$Int64 $tmp1639 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1639, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1640.value);
            panda$core$Object* $tmp1642 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1643 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1644 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1642), ((org$pandalanguage$pandac$IRNode*) $tmp1643), p_out);
            bit1641 = $tmp1644;
            panda$core$String* $tmp1646 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1645 = $tmp1646;
            panda$core$String* $tmp1648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1647, result1645);
            panda$core$String* $tmp1650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1648, &$s1649);
            panda$core$String* $tmp1651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1650, bit1641);
            panda$core$String* $tmp1653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1651, &$s1652);
            (($fn1654) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1653);
            {
                tmp321655 = result1645;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1645));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit1641));
                }
                {
                    tmp341656 = tmp321655;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1609));
                    return tmp341656;
                }
            }
        }
        }
    }
    }
    panda$collections$Array* $tmp1658 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$core$Int64 $tmp1659 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$collections$Array$init$panda$core$Int64($tmp1658, $tmp1659);
    argRefs1657 = $tmp1658;
    memset(&actualMethodType1660, 0, sizeof(actualMethodType1660));
    memset(&actualResultType1661, 0, sizeof(actualResultType1661));
    panda$core$Int64 $tmp1664 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp1665 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1664, ((panda$core$Int64) { 1 }));
    bool $tmp1663 = $tmp1665.value;
    if (!$tmp1663) goto $l1666;
    panda$core$Object* $tmp1667 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1667)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp1663 = $tmp1668.value;
    $l1666:;
    panda$core$Bit $tmp1669 = { $tmp1663 };
    isSuper1662 = $tmp1669;
    panda$core$Bit $tmp1671 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1662);
    bool $tmp1670 = $tmp1671.value;
    if (!$tmp1670) goto $l1672;
    panda$core$Bit $tmp1673 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1609);
    $tmp1670 = $tmp1673.value;
    $l1672:;
    panda$core$Bit $tmp1674 = { $tmp1670 };
    if ($tmp1674.value) {
    {
        {
            panda$core$Object* $tmp1676 = (($fn1675) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$Type* $tmp1677 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp1676), m1609);
            actualMethodType1660 = $tmp1677;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1660));
        }
        {
            panda$core$Int64 $tmp1678 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1660->subtypes);
            panda$core$Int64 $tmp1679 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1678, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp1680 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1660->subtypes, $tmp1679);
            panda$core$String* $tmp1681 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1680));
            actualResultType1661 = $tmp1681;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1661));
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp1683 = (($fn1682) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$Type* $tmp1684 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp1683), m1609);
            actualMethodType1660 = $tmp1684;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1660));
        }
        {
            panda$core$String* $tmp1685 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            actualResultType1661 = $tmp1685;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1661));
        }
    }
    }
    panda$core$Int64 $tmp1687 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp1688 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1660->subtypes);
    panda$core$Int64 $tmp1689 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1687, $tmp1688);
    panda$core$Int64 $tmp1690 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1689, ((panda$core$Int64) { 1 }));
    offset1686 = $tmp1690;
    panda$core$Int64 $tmp1692 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1691, ((panda$core$Int64) { 0 }), $tmp1692, ((panda$core$Bit) { false }));
    int64_t $tmp1694 = $tmp1691.min.value;
    panda$core$Int64 i1693 = { $tmp1694 };
    int64_t $tmp1696 = $tmp1691.max.value;
    bool $tmp1697 = $tmp1691.inclusive.value;
    if ($tmp1697) goto $l1704; else goto $l1705;
    $l1704:;
    if ($tmp1694 <= $tmp1696) goto $l1698; else goto $l1700;
    $l1705:;
    if ($tmp1694 < $tmp1696) goto $l1698; else goto $l1700;
    $l1698:;
    {
        panda$core$Object* $tmp1707 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1693);
        panda$core$String* $tmp1708 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1707), p_out);
        arg1706 = $tmp1708;
        panda$core$Bit $tmp1710 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1693, offset1686);
        bool $tmp1709 = $tmp1710.value;
        if (!$tmp1709) goto $l1711;
        panda$core$Int64 $tmp1712 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1693, offset1686);
        panda$core$Object* $tmp1713 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1660->subtypes, $tmp1712);
        panda$core$Object* $tmp1714 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1693);
        org$pandalanguage$pandac$Type* $tmp1716 = (($fn1715) ((org$pandalanguage$pandac$IRNode*) $tmp1714)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1714));
        panda$core$Bit $tmp1717 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1713), $tmp1716);
        $tmp1709 = $tmp1717.value;
        $l1711:;
        panda$core$Bit $tmp1718 = { $tmp1709 };
        if ($tmp1718.value) {
        {
            {
                panda$core$Object* $tmp1719 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1693);
                org$pandalanguage$pandac$Type* $tmp1721 = (($fn1720) ((org$pandalanguage$pandac$IRNode*) $tmp1719)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1719));
                panda$core$Int64 $tmp1722 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1693, offset1686);
                panda$core$Object* $tmp1723 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1660->subtypes, $tmp1722);
                panda$core$String* $tmp1724 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1706, $tmp1721, ((org$pandalanguage$pandac$Type*) $tmp1723), p_out);
                arg1706 = $tmp1724;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1706));
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs1657, ((panda$core$Object*) arg1706));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1706));
    }
    $l1701:;
    int64_t $tmp1726 = $tmp1696 - i1693.value;
    if ($tmp1697) goto $l1727; else goto $l1728;
    $l1727:;
    if ((uint64_t) $tmp1726 >= 1) goto $l1725; else goto $l1700;
    $l1728:;
    if ((uint64_t) $tmp1726 > 1) goto $l1725; else goto $l1700;
    $l1725:;
    i1693.value += 1;
    goto $l1698;
    $l1700:;
    memset(&target1731, 0, sizeof(target1731));
    panda$core$Int64 $tmp1732 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs1657);
    panda$core$Bit $tmp1733 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1732, ((panda$core$Int64) { 0 }));
    if ($tmp1733.value) {
    {
        {
            panda$core$Object* $tmp1734 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs1657, ((panda$core$Int64) { 0 }));
            target1731 = ((panda$core$String*) $tmp1734);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1731));
        }
    }
    }
    else {
    {
        {
            target1731 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1731));
        }
    }
    }
    panda$core$String* $tmp1736 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1731, m1609, isSuper1662, p_out);
    methodRef1735 = $tmp1736;
    panda$core$Bit $tmp1738 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1609);
    indirect1737 = $tmp1738;
    panda$core$String* $tmp1740 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1739 = $tmp1740;
    separator1741 = &$s1742;
    memset(&indirectVar1743, 0, sizeof(indirectVar1743));
    if (indirect1737.value) {
    {
        panda$core$String* $tmp1744 = panda$core$String$convert$R$panda$core$String(actualResultType1661);
        panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1744, &$s1745);
        panda$core$String* $tmp1747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1746, result1739);
        panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1747, &$s1748);
        (($fn1750) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1749);
        panda$core$String* $tmp1751 = panda$core$String$convert$R$panda$core$String(methodRef1735);
        panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1751, &$s1752);
        panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, result1739);
        panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1754, &$s1755);
        (($fn1757) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1756);
        {
            separator1741 = &$s1758;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1741));
        }
    }
    }
    else {
    {
        panda$core$String* $tmp1759 = panda$core$String$convert$R$panda$core$String(actualResultType1661);
        panda$core$String* $tmp1761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1759, &$s1760);
        panda$core$String* $tmp1762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1761, result1739);
        panda$core$String* $tmp1764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1762, &$s1763);
        panda$core$String* $tmp1765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1764, methodRef1735);
        panda$core$String* $tmp1767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1765, &$s1766);
        (($fn1768) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1767);
    }
    }
    {
        ITable* $tmp1770 = ((panda$collections$Iterable*) argRefs1657)->$class->itable;
        while ($tmp1770->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1770 = $tmp1770->next;
        }
        $fn1772 $tmp1771 = $tmp1770->methods[0];
        panda$collections$Iterator* $tmp1773 = $tmp1771(((panda$collections$Iterable*) argRefs1657));
        Iter$971$91769 = $tmp1773;
        $l1774:;
        ITable* $tmp1776 = Iter$971$91769->$class->itable;
        while ($tmp1776->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1776 = $tmp1776->next;
        }
        $fn1778 $tmp1777 = $tmp1776->methods[0];
        panda$core$Bit $tmp1779 = $tmp1777(Iter$971$91769);
        panda$core$Bit $tmp1780 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1779);
        if (!$tmp1780.value) goto $l1775;
        {
            ITable* $tmp1782 = Iter$971$91769->$class->itable;
            while ($tmp1782->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1782 = $tmp1782->next;
            }
            $fn1784 $tmp1783 = $tmp1782->methods[1];
            panda$core$Object* $tmp1785 = $tmp1783(Iter$971$91769);
            arg1781 = ((panda$core$String*) $tmp1785);
            panda$core$String* $tmp1786 = panda$core$String$convert$R$panda$core$String(separator1741);
            panda$core$String* $tmp1788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1786, &$s1787);
            panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1788, arg1781);
            panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1789, &$s1790);
            (($fn1792) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1791);
            {
                separator1741 = &$s1793;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1741));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1781));
        }
        goto $l1774;
        $l1775:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$971$91769));
    }
    (($fn1795) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1794);
    panda$core$String* $tmp1796 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$Bit $tmp1797 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1796, actualResultType1661);
    if ($tmp1797.value) {
    {
        {
            panda$core$Int64 $tmp1799 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1660->subtypes);
            panda$core$Int64 $tmp1800 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1799, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp1801 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1660->subtypes, $tmp1800);
            panda$core$String* $tmp1802 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1739, ((org$pandalanguage$pandac$Type*) $tmp1801), p_t, p_out);
            tmp351798 = $tmp1802;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs1657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1741));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1739));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1661));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar1743));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1660));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef1735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1731));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1609));
            }
            return tmp351798;
        }
    }
    }
    {
        tmp361803 = result1739;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs1657));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1741));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1739));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1661));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar1743));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1660));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef1735));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1731));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1609));
        }
        return tmp361803;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1805;
    panda$core$String* nonNullValue1808;
    panda$core$String* tmp371811;
    panda$core$String* wrapped1819;
    panda$core$String* tmp381878;
    panda$core$Bit $tmp1804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1804.value) {
    {
        panda$core$Object* $tmp1806 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1807 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1806), p_out);
        unwrapped1805 = $tmp1807;
        panda$core$Object* $tmp1809 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1810 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1805, ((org$pandalanguage$pandac$Type*) $tmp1809), p_dstType, p_out);
        nonNullValue1808 = $tmp1810;
        {
            panda$core$String* $tmp1813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1812, p_value);
            panda$core$String* $tmp1815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1813, &$s1814);
            panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1815, nonNullValue1808);
            panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1816, &$s1817);
            tmp371811 = $tmp1818;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unwrapped1805));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue1808));
            }
            return tmp371811;
        }
    }
    }
    panda$core$String* $tmp1820 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    wrapped1819 = $tmp1820;
    panda$core$String* $tmp1821 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1822 = panda$core$String$convert$R$panda$core$String($tmp1821);
    panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1823);
    panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1824, wrapped1819);
    panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1825, &$s1826);
    (($fn1828) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1827);
    panda$core$Bit $tmp1829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1829.value) {
    {
        panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1830, p_value);
        panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1831, &$s1832);
        (($fn1834) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1833);
        panda$core$Int64 $tmp1835 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1835;
    }
    }
    panda$core$String* $tmp1836 = panda$core$String$convert$R$panda$core$String(wrapped1819);
    panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1836, &$s1837);
    panda$core$String* $tmp1839 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1838, $tmp1839);
    panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1840, &$s1841);
    panda$core$Int64 $tmp1844 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_srcType);
    panda$core$Int64$wrapper* $tmp1845;
    $tmp1845 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp1845->value = $tmp1844;
    panda$core$String* $tmp1846 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1843, ((panda$core$Object*) $tmp1845));
    panda$core$String* $tmp1848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1846, &$s1847);
    panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1842, $tmp1848);
    panda$core$String* $tmp1851 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_srcType)->name);
    panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1850, $tmp1851);
    panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1852, &$s1853);
    panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, $tmp1854);
    (($fn1856) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1855);
    panda$core$String* $tmp1857 = panda$core$String$convert$R$panda$core$String(wrapped1819);
    panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1857, &$s1858);
    panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, p_value);
    panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, &$s1861);
    (($fn1863) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1862);
    panda$core$Bit $tmp1864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1864.value) {
    {
        panda$core$Int64 $tmp1865 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1865;
        (($fn1867) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1866);
        (($fn1869) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1868);
        panda$core$Int64 $tmp1870 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1870;
        panda$core$String* $tmp1871 = panda$core$String$convert$R$panda$core$String(wrapped1819);
        panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1871, &$s1872);
        (($fn1874) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1873);
        panda$core$Int64 $tmp1875 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1875;
        (($fn1877) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1876);
    }
    }
    {
        panda$core$String* $tmp1880 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1879, $tmp1880);
        panda$core$String* $tmp1883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1881, &$s1882);
        panda$core$String* $tmp1884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1883, wrapped1819);
        panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1884, &$s1885);
        tmp381878 = $tmp1886;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped1819));
        return tmp381878;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$FieldDecl* p_field, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1889;
    panda$core$String* baseRef1895;
    panda$core$String* tmp391900;
    panda$core$String* tmp401908;
    panda$core$Bit $tmp1887 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_field->annotations);
    if ($tmp1887.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_field->value != NULL }).value);
        panda$core$String* $tmp1888 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_field->value, p_out);
        return $tmp1888;
    }
    }
    panda$core$Object* $tmp1891 = (($fn1890) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Type* $tmp1893 = (($fn1892) p_base->$class->vtable[2])(p_base);
    org$pandalanguage$pandac$ClassDecl* $tmp1894 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1891), $tmp1893);
    cl1889 = $tmp1894;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1889);
    panda$core$String* $tmp1896 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef1895 = $tmp1896;
    PANDA_ASSERT(((panda$core$Bit) { cl1889 != NULL }).value);
    panda$core$Object* $tmp1898 = (($fn1897) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Bit $tmp1899 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1898), cl1889);
    if ($tmp1899.value) {
    {
        {
            panda$core$String* $tmp1901 = panda$core$String$convert$R$panda$core$String(baseRef1895);
            panda$core$String* $tmp1903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1901, &$s1902);
            panda$core$String* $tmp1904 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
            panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1903, $tmp1904);
            panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1905, &$s1906);
            tmp391900 = $tmp1907;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1895));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1889));
            }
            return tmp391900;
        }
    }
    }
    {
        panda$core$String* $tmp1909 = panda$core$String$convert$R$panda$core$String(baseRef1895);
        panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1909, &$s1910);
        panda$core$String* $tmp1912 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
        panda$core$String* $tmp1913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1911, $tmp1912);
        panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1913, &$s1914);
        tmp401908 = $tmp1915;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1895));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1889));
        }
        return tmp401908;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1916;
    panda$core$String* wrapped1926;
    panda$core$String* nonNullValue1929;
    panda$core$String* tmp411932;
    panda$core$String* tmp421944;
    panda$core$String* tmp431945;
    panda$core$String* $tmp1918 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1917, $tmp1918);
    panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1919, &$s1920);
    panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1921, p_value);
    panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1922, &$s1923);
    result1916 = $tmp1924;
    panda$core$Bit $tmp1925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1925.value) {
    {
        panda$core$Object* $tmp1927 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1928 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1927), p_out);
        wrapped1926 = $tmp1928;
        panda$core$Object* $tmp1930 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1931 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1926, ((org$pandalanguage$pandac$Type*) $tmp1930), p_dstType, p_out);
        nonNullValue1929 = $tmp1931;
        {
            panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1933, p_value);
            panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1934, &$s1935);
            panda$core$String* $tmp1937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1936, nonNullValue1929);
            panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1937, &$s1938);
            panda$core$String* $tmp1940 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
            panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1939, $tmp1940);
            panda$core$String* $tmp1943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1941, &$s1942);
            tmp411932 = $tmp1943;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue1929));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped1926));
            }
            {
                tmp421944 = tmp411932;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1916));
                return tmp421944;
            }
        }
    }
    }
    {
        tmp431945 = result1916;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1916));
        return tmp431945;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1947 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1946, $tmp1947);
    panda$core$String* $tmp1950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1948, &$s1949);
    panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1950, p_value);
    panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1951, &$s1952);
    return $tmp1953;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1955 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1954, $tmp1955);
    panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, &$s1957);
    panda$core$String* $tmp1959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1958, p_value);
    panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1959, &$s1960);
    return $tmp1961;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1962;
    panda$core$String* tmp481965;
    org$pandalanguage$pandac$ClassDecl* srcClass1974;
    org$pandalanguage$pandac$ClassDecl* targetClass1978;
    panda$core$String* tmp441992;
    panda$core$String* tmp491994;
    panda$core$String* tmp452005;
    panda$core$String* tmp502007;
    panda$core$String* tmp462020;
    panda$core$String* tmp512022;
    panda$core$String* tmp472035;
    panda$core$String* tmp522037;
    panda$core$String* srcType2039;
    panda$core$String* dstType2041;
    panda$core$String* tmp532044;
    panda$core$String* tmp542045;
    memset(&op1962, 0, sizeof(op1962));
    panda$core$Bit $tmp1963 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1963.value) {
    {
        panda$core$Bit $tmp1964 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1964.value);
        {
            panda$core$String* $tmp1967 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1966, $tmp1967);
            panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1968, &$s1969);
            panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1970, p_value);
            panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1971, &$s1972);
            tmp481965 = $tmp1973;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1962));
            return tmp481965;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp1976 = (($fn1975) self->compiler->$class->vtable[2])(self->compiler);
        org$pandalanguage$pandac$ClassDecl* $tmp1977 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1976), p_src);
        srcClass1974 = $tmp1977;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1974 != NULL }).value);
        panda$core$Object* $tmp1980 = (($fn1979) self->compiler->$class->vtable[2])(self->compiler);
        org$pandalanguage$pandac$ClassDecl* $tmp1981 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1980), p_target);
        targetClass1978 = $tmp1981;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1978 != NULL }).value);
        panda$core$Object* $tmp1984 = (($fn1983) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Bit $tmp1985 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1984), srcClass1974);
        bool $tmp1982 = $tmp1985.value;
        if (!$tmp1982) goto $l1986;
        panda$core$Object* $tmp1988 = (($fn1987) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Bit $tmp1989 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1988), targetClass1978);
        panda$core$Bit $tmp1990 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1989);
        $tmp1982 = $tmp1990.value;
        $l1986:;
        panda$core$Bit $tmp1991 = { $tmp1982 };
        if ($tmp1991.value) {
        {
            {
                panda$core$String* $tmp1993 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp441992 = $tmp1993;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1978));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1974));
                }
                {
                    tmp491994 = tmp441992;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1962));
                    return tmp491994;
                }
            }
        }
        }
        else {
        panda$core$Object* $tmp1997 = (($fn1996) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Bit $tmp1998 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1997), srcClass1974);
        panda$core$Bit $tmp1999 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1998);
        bool $tmp1995 = $tmp1999.value;
        if (!$tmp1995) goto $l2000;
        panda$core$Object* $tmp2002 = (($fn2001) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Bit $tmp2003 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp2002), targetClass1978);
        $tmp1995 = $tmp2003.value;
        $l2000:;
        panda$core$Bit $tmp2004 = { $tmp1995 };
        if ($tmp2004.value) {
        {
            {
                panda$core$String* $tmp2006 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp452005 = $tmp2006;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1978));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1974));
                }
                {
                    tmp502007 = tmp452005;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1962));
                    return tmp502007;
                }
            }
        }
        }
        else {
        panda$core$Object* $tmp2011 = (($fn2010) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Bit $tmp2012 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp2011), srcClass1974);
        bool $tmp2009 = $tmp2012.value;
        if (!$tmp2009) goto $l2013;
        panda$core$Bit $tmp2014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp2009 = $tmp2014.value;
        $l2013:;
        panda$core$Bit $tmp2015 = { $tmp2009 };
        bool $tmp2008 = $tmp2015.value;
        if (!$tmp2008) goto $l2016;
        panda$core$Object* $tmp2017 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2018 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2017), p_src);
        $tmp2008 = $tmp2018.value;
        $l2016:;
        panda$core$Bit $tmp2019 = { $tmp2008 };
        if ($tmp2019.value) {
        {
            {
                panda$core$String* $tmp2021 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp462020 = $tmp2021;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1978));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1974));
                }
                {
                    tmp512022 = tmp462020;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1962));
                    return tmp512022;
                }
            }
        }
        }
        else {
        panda$core$Object* $tmp2026 = (($fn2025) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Bit $tmp2027 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp2026), targetClass1978);
        bool $tmp2024 = $tmp2027.value;
        if (!$tmp2024) goto $l2028;
        panda$core$Bit $tmp2029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp2024 = $tmp2029.value;
        $l2028:;
        panda$core$Bit $tmp2030 = { $tmp2024 };
        bool $tmp2023 = $tmp2030.value;
        if (!$tmp2023) goto $l2031;
        panda$core$Object* $tmp2032 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2033 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2032), p_target);
        $tmp2023 = $tmp2033.value;
        $l2031:;
        panda$core$Bit $tmp2034 = { $tmp2023 };
        if ($tmp2034.value) {
        {
            {
                panda$core$String* $tmp2036 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp472035 = $tmp2036;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1978));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1974));
                }
                {
                    tmp522037 = tmp472035;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1962));
                    return tmp522037;
                }
            }
        }
        }
        }
        }
        }
        {
            op1962 = &$s2038;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1962));
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1978));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1974));
        }
    }
    }
    panda$core$String* $tmp2040 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType2039 = $tmp2040;
    panda$core$String* $tmp2042 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType2041 = $tmp2042;
    panda$core$Bit $tmp2043 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType2039, dstType2041);
    if ($tmp2043.value) {
    {
        {
            tmp532044 = p_value;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType2041));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType2039));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1962));
            }
            return tmp532044;
        }
    }
    }
    {
        panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2046, dstType2041);
        panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, &$s2048);
        panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2049, p_value);
        panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2050, &$s2051);
        tmp542045 = $tmp2052;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType2041));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType2039));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1962));
        }
        return tmp542045;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef2053;
    panda$core$String* tmp552055;
    panda$core$String* $tmp2054 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef2053 = $tmp2054;
    {
        org$pandalanguage$pandac$Type* $tmp2057 = (($fn2056) p_base->$class->vtable[2])(p_base);
        panda$core$String* $tmp2058 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, baseRef2053, $tmp2057, p_t, p_out);
        tmp552055 = $tmp2058;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2053));
        return tmp552055;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_target, org$pandalanguage$pandac$IRNode* p_initCall, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1091_92059;
    org$pandalanguage$pandac$Type* initType2061;
    org$pandalanguage$pandac$MethodRef* initMref2063;
    panda$collections$ImmutableArray* initArgs2065;
    org$pandalanguage$pandac$ClassDecl* cl2067;
    panda$core$String* t2071;
    org$pandalanguage$pandac$IRNode* $match$1097_212079;
    panda$collections$ImmutableArray* args2081;
    panda$core$String* value2085;
    panda$core$String* tmp562088;
    panda$core$String* tmp572096;
    panda$core$String* tmp2101;
    panda$core$String* tmp582118;
    panda$core$String* tmp592119;
    panda$core$String* result2120;
    panda$core$String* tmp602146;
    {
        $match$1091_92059 = p_initCall;
        panda$core$Bit $tmp2060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1091_92059->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp2060.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2062 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1091_92059->$data + 16));
            initType2061 = *$tmp2062;
            org$pandalanguage$pandac$MethodRef** $tmp2064 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1091_92059->$data + 24));
            initMref2063 = *$tmp2064;
            panda$collections$ImmutableArray** $tmp2066 = ((panda$collections$ImmutableArray**) ((char*) $match$1091_92059->$data + 32));
            initArgs2065 = *$tmp2066;
            panda$core$Object* $tmp2069 = (($fn2068) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$ClassDecl* $tmp2070 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2069), p_target);
            cl2067 = $tmp2070;
            PANDA_ASSERT(((panda$core$Bit) { cl2067 != NULL }).value);
            panda$core$String* $tmp2072 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            t2071 = $tmp2072;
            panda$core$Bit $tmp2074 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            bool $tmp2073 = $tmp2074.value;
            if ($tmp2073) goto $l2075;
            org$pandalanguage$pandac$Type* $tmp2076 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp2077 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2076);
            $tmp2073 = $tmp2077.value;
            $l2075:;
            panda$core$Bit $tmp2078 = { $tmp2073 };
            if ($tmp2078.value) {
            {
                {
                    $match$1097_212079 = p_initCall;
                    panda$core$Bit $tmp2080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1097_212079->$rawValue, ((panda$core$Int64) { 5 }));
                    if ($tmp2080.value) {
                    {
                        panda$collections$ImmutableArray** $tmp2082 = ((panda$collections$ImmutableArray**) ((char*) $match$1097_212079->$data + 32));
                        args2081 = *$tmp2082;
                        panda$core$Int64 $tmp2083 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args2081);
                        panda$core$Bit $tmp2084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2083, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp2084.value);
                        panda$core$Object* $tmp2086 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args2081, ((panda$core$Int64) { 0 }));
                        panda$core$String* $tmp2087 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2086), p_out);
                        value2085 = $tmp2087;
                        {
                            panda$core$String* $tmp2090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2089, t2071);
                            panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2090, &$s2091);
                            panda$core$String* $tmp2093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2092, value2085);
                            panda$core$String* $tmp2095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2093, &$s2094);
                            tmp562088 = $tmp2095;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2085));
                            {
                                tmp572096 = tmp562088;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2071));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2067));
                                }
                                return tmp572096;
                            }
                        }
                    }
                    }
                }
            }
            }
            panda$core$Object* $tmp2098 = (($fn2097) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Bit $tmp2099 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp2098), cl2067);
            if ($tmp2099.value) {
            {
                panda$core$Int64 $tmp2100 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
                self->varCount = $tmp2100;
                panda$core$Int64$wrapper* $tmp2103;
                $tmp2103 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp2103->value = self->varCount;
                panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2102, ((panda$core$Object*) $tmp2103));
                panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2104, &$s2105);
                tmp2101 = $tmp2106;
                panda$core$String* $tmp2107 = panda$core$String$convert$R$panda$core$String(t2071);
                panda$core$String* $tmp2109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2107, &$s2108);
                panda$core$String* $tmp2110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2109, tmp2101);
                panda$core$String* $tmp2112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2110, &$s2111);
                (($fn2113) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2112);
                panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2114, tmp2101);
                panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, &$s2116);
                org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType2061, initMref2063, initArgs2065, $tmp2117, p_out);
                {
                    tmp582118 = tmp2101;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tmp2101));
                    {
                        tmp592119 = tmp582118;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2071));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2067));
                        }
                        return tmp592119;
                    }
                }
            }
            }
            panda$core$String* $tmp2121 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result2120 = $tmp2121;
            panda$core$String* $tmp2122 = panda$core$String$convert$R$panda$core$String(t2071);
            panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2123);
            panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2124, result2120);
            panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2125, &$s2126);
            panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2127, t2071);
            panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2128, &$s2129);
            panda$core$Int64 $tmp2131 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
            panda$core$Int64$wrapper* $tmp2132;
            $tmp2132 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2132->value = $tmp2131;
            panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2130, ((panda$core$Object*) $tmp2132));
            panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2134);
            panda$core$String* $tmp2137 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl2067)->name);
            panda$core$String* $tmp2138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2136, $tmp2137);
            panda$core$String* $tmp2140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2138, &$s2139);
            panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2135, $tmp2140);
            (($fn2142) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2141);
            panda$core$String* $tmp2143 = panda$core$String$convert$R$panda$core$String(result2120);
            panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, &$s2144);
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType2061, initMref2063, initArgs2065, $tmp2145, p_out);
            {
                tmp602146 = result2120;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2120));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2071));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2067));
                }
                return tmp602146;
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$UInt64 p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2147 = panda$core$UInt64$convert$R$panda$core$String(p_int);
    return $tmp2147;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$UInt64 p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$UInt64$wrapper* $tmp2149;
    $tmp2149 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
    $tmp2149->value = p_int;
    panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2148, ((panda$core$Object*) $tmp2149));
    return $tmp2150;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Real64 p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result2151;
    panda$core$Char8 $tmp2153;
    panda$core$String* tmp612155;
    panda$core$String* tmp622156;
    panda$core$String* $tmp2152 = panda$core$Real64$convert$R$panda$core$String(p_real);
    result2151 = $tmp2152;
    panda$core$Char8$init$panda$core$UInt8(&$tmp2153, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp2154 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result2151, $tmp2153);
    if ($tmp2154.value) {
    {
        {
            tmp612155 = result2151;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2151));
            return tmp612155;
        }
    }
    }
    {
        panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result2151, &$s2157);
        tmp622156 = $tmp2158;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2151));
        return tmp622156;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_bit, panda$io$IndentedOutputStream* p_out) {
    if (p_bit.value) {
    {
        return &$s2159;
    }
    }
    return &$s2160;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2161 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2161;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* result2163;
    panda$collections$Iterator* Iter$1155$92184;
    panda$core$Char8 c2197;
    panda$core$String* tmp632232;
    panda$core$Int64 $tmp2162 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2162;
    panda$core$Int64$wrapper* $tmp2165;
    $tmp2165 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2165->value = self->varCount;
    panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2164, ((panda$core$Object*) $tmp2165));
    panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, &$s2167);
    result2163 = $tmp2168;
    org$pandalanguage$pandac$Type* $tmp2169 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2170 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2169);
    panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2171, result2163);
    panda$core$String* $tmp2174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2172, &$s2173);
    panda$core$Int64$wrapper* $tmp2176;
    $tmp2176 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2176->value = ((panda$core$Int64) { -999 });
    panda$core$String* $tmp2177 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2175, ((panda$core$Object*) $tmp2176));
    panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2177, &$s2178);
    panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2174, $tmp2179);
    panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, &$s2181);
    (($fn2183) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2182);
    {
        panda$collections$ListView* $tmp2185 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2186 = ((panda$collections$Iterable*) $tmp2185)->$class->itable;
        while ($tmp2186->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2186 = $tmp2186->next;
        }
        $fn2188 $tmp2187 = $tmp2186->methods[0];
        panda$collections$Iterator* $tmp2189 = $tmp2187(((panda$collections$Iterable*) $tmp2185));
        Iter$1155$92184 = $tmp2189;
        $l2190:;
        ITable* $tmp2192 = Iter$1155$92184->$class->itable;
        while ($tmp2192->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2192 = $tmp2192->next;
        }
        $fn2194 $tmp2193 = $tmp2192->methods[0];
        panda$core$Bit $tmp2195 = $tmp2193(Iter$1155$92184);
        panda$core$Bit $tmp2196 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2195);
        if (!$tmp2196.value) goto $l2191;
        {
            ITable* $tmp2198 = Iter$1155$92184->$class->itable;
            while ($tmp2198->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2198 = $tmp2198->next;
            }
            $fn2200 $tmp2199 = $tmp2198->methods[1];
            panda$core$Object* $tmp2201 = $tmp2199(Iter$1155$92184);
            c2197 = ((panda$core$Char8$wrapper*) $tmp2201)->value;
            panda$core$UInt8 $tmp2203 = panda$core$Char8$convert$R$panda$core$UInt8(c2197);
            panda$core$UInt8$wrapper* $tmp2204;
            $tmp2204 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
            $tmp2204->value = $tmp2203;
            ITable* $tmp2206 = ((panda$core$Formattable*) $tmp2204)->$class->itable;
            while ($tmp2206->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2206 = $tmp2206->next;
            }
            $fn2208 $tmp2207 = $tmp2206->methods[0];
            panda$core$String* $tmp2209 = $tmp2207(((panda$core$Formattable*) $tmp2204), &$s2205);
            panda$core$String* $tmp2211 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp2209, &$s2210);
            panda$core$String* $tmp2212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2202, $tmp2211);
            panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2212, &$s2213);
            (($fn2215) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2214);
        }
        goto $l2190;
        $l2191:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1155$92184));
    }
    panda$collections$ListView* $tmp2217 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2218 = ((panda$collections$CollectionView*) $tmp2217)->$class->itable;
    while ($tmp2218->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2218 = $tmp2218->next;
    }
    $fn2220 $tmp2219 = $tmp2218->methods[0];
    panda$core$Int64 $tmp2221 = $tmp2219(((panda$collections$CollectionView*) $tmp2217));
    panda$core$Int64$wrapper* $tmp2222;
    $tmp2222 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2222->value = $tmp2221;
    panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2216, ((panda$core$Object*) $tmp2222));
    panda$core$String* $tmp2225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2223, &$s2224);
    panda$core$Int64 $tmp2226 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$Int64$wrapper* $tmp2227;
    $tmp2227 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2227->value = $tmp2226;
    panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2225, ((panda$core$Object*) $tmp2227));
    panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2228, &$s2229);
    (($fn2231) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2230);
    {
        panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2233, result2163);
        panda$core$String* $tmp2236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2234, &$s2235);
        tmp632232 = $tmp2236;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2163));
        return tmp632232;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    return &$s2237;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2239 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2238, $tmp2239);
    panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2240, &$s2241);
    return $tmp2242;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2243;
    org$pandalanguage$pandac$ClassDecl* cl2245;
    panda$core$String* bit2251;
    panda$core$String* tmp642266;
    panda$core$String* $tmp2244 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2243 = $tmp2244;
    panda$core$Object* $tmp2247 = (($fn2246) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Type* $tmp2249 = (($fn2248) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2250 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2247), $tmp2249);
    cl2245 = $tmp2250;
    memset(&bit2251, 0, sizeof(bit2251));
    panda$core$Object* $tmp2253 = (($fn2252) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Bit $tmp2254 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp2253), cl2245);
    if ($tmp2254.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2256 = (($fn2255) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2257 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2256->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2257.value) {
        {
            {
                bit2251 = &$s2258;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2251));
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2259, ref2243);
                panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2260, &$s2261);
                bit2251 = $tmp2262;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2251));
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2263 = panda$core$String$convert$R$panda$core$String(ref2243);
            panda$core$String* $tmp2265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2263, &$s2264);
            bit2251 = $tmp2265;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2251));
        }
    }
    }
    {
        panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2267, bit2251);
        panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2268, &$s2269);
        tmp642266 = $tmp2270;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2245));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref2243));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2251));
        }
        return tmp642266;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2271;
    org$pandalanguage$pandac$ClassDecl* cl2273;
    panda$core$String* bit2279;
    panda$core$String* tmp652293;
    panda$core$String* $tmp2272 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2271 = $tmp2272;
    panda$core$Object* $tmp2275 = (($fn2274) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Type* $tmp2277 = (($fn2276) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2278 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2275), $tmp2277);
    cl2273 = $tmp2278;
    memset(&bit2279, 0, sizeof(bit2279));
    panda$core$Object* $tmp2281 = (($fn2280) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Bit $tmp2282 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp2281), cl2273);
    if ($tmp2282.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2284 = (($fn2283) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2285 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2284->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2285.value) {
        {
            {
                bit2279 = &$s2286;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2279));
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2287 = panda$core$String$convert$R$panda$core$String(ref2271);
                panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, &$s2288);
                bit2279 = $tmp2289;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2279));
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2290 = panda$core$String$convert$R$panda$core$String(ref2271);
            panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, &$s2291);
            bit2279 = $tmp2292;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2279));
        }
    }
    }
    {
        panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2294, bit2279);
        panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2295, &$s2296);
        tmp652293 = $tmp2297;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2273));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref2271));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2279));
        }
        return tmp652293;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2299;
    panda$core$String* tmp662307;
    panda$core$String* tmp672313;
    panda$core$Bit $tmp2298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2298.value);
    panda$core$Object* $tmp2301 = (($fn2300) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp2302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2303 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2301), ((org$pandalanguage$pandac$Type*) $tmp2302));
    cl2299 = $tmp2303;
    PANDA_ASSERT(((panda$core$Bit) { cl2299 != NULL }).value);
    panda$core$Object* $tmp2305 = (($fn2304) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Bit $tmp2306 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp2305), cl2299);
    if ($tmp2306.value) {
    {
        {
            panda$core$String* $tmp2309 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp2310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2308, $tmp2309);
            panda$core$String* $tmp2312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2310, &$s2311);
            tmp662307 = $tmp2312;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2299));
            return tmp662307;
        }
    }
    }
    else {
    {
        {
            tmp672313 = &$s2314;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2299));
            return tmp672313;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2299));
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_base, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef2315;
    panda$core$String* result2317;
    org$pandalanguage$pandac$parser$Token$Kind $match$1221_92319;
    panda$core$String* tmp682321;
    panda$core$String* tmp692327;
    panda$core$String* tmp702333;
    panda$core$String* $tmp2316 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef2315 = $tmp2316;
    panda$core$String* $tmp2318 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2317 = $tmp2318;
    {
        $match$1221_92319 = p_op;
        panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1221_92319.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp2320.value) {
        {
            {
                panda$core$String* $tmp2323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2322, baseRef2315);
                panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2323, &$s2324);
                tmp682321 = $tmp2325;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2317));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2315));
                }
                return tmp682321;
            }
        }
        }
        else {
        panda$core$Bit $tmp2326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1221_92319.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp2326.value) {
        {
            {
                panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2328, baseRef2315);
                panda$core$String* $tmp2331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2329, &$s2330);
                tmp692327 = $tmp2331;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2317));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2315));
                }
                return tmp692327;
            }
        }
        }
        else {
        panda$core$Bit $tmp2332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1221_92319.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp2332.value) {
        {
            {
                panda$core$String* $tmp2335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2334, baseRef2315);
                panda$core$String* $tmp2337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2335, &$s2336);
                tmp702333 = $tmp2337;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2317));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2315));
                }
                return tmp702333;
            }
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
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2317));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2315));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2343;
    panda$core$String* trueLabel2345;
    panda$core$String* falseLabel2347;
    panda$core$String* merge2349;
    panda$core$String* result2351;
    panda$core$String* tmp712400;
    org$pandalanguage$pandac$Type* $tmp2339 = (($fn2338) p_ifTrue->$class->vtable[2])(p_ifTrue);
    org$pandalanguage$pandac$Type* $tmp2341 = (($fn2340) p_ifFalse->$class->vtable[2])(p_ifFalse);
    panda$core$Bit $tmp2342 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2339, $tmp2341);
    PANDA_ASSERT($tmp2342.value);
    panda$core$String* $tmp2344 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2343 = $tmp2344;
    panda$core$String* $tmp2346 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2345 = $tmp2346;
    panda$core$String* $tmp2348 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2347 = $tmp2348;
    panda$core$String* $tmp2350 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2349 = $tmp2350;
    panda$core$String* $tmp2352 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2351 = $tmp2352;
    org$pandalanguage$pandac$Type* $tmp2354 = (($fn2353) p_ifTrue->$class->vtable[2])(p_ifTrue);
    panda$core$String* $tmp2355 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2354);
    panda$core$String* $tmp2356 = panda$core$String$convert$R$panda$core$String($tmp2355);
    panda$core$String* $tmp2358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2356, &$s2357);
    panda$core$String* $tmp2359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2358, result2351);
    panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2359, &$s2360);
    (($fn2362) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2361);
    panda$core$String* $tmp2364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2363, testRef2343);
    panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2364, &$s2365);
    panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2366, trueLabel2345);
    panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2367, &$s2368);
    panda$core$String* $tmp2370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2369, falseLabel2347);
    panda$core$String* $tmp2372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2370, &$s2371);
    (($fn2373) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2372);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2345, p_out);
    panda$core$String* $tmp2374 = panda$core$String$convert$R$panda$core$String(result2351);
    panda$core$String* $tmp2376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2374, &$s2375);
    panda$core$String* $tmp2377 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifTrue, p_out);
    panda$core$String* $tmp2378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2376, $tmp2377);
    panda$core$String* $tmp2380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2378, &$s2379);
    (($fn2381) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2380);
    panda$core$String* $tmp2383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2382, merge2349);
    panda$core$String* $tmp2385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2383, &$s2384);
    (($fn2386) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2385);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2347, p_out);
    panda$core$String* $tmp2387 = panda$core$String$convert$R$panda$core$String(result2351);
    panda$core$String* $tmp2389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2387, &$s2388);
    panda$core$String* $tmp2390 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifFalse, p_out);
    panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2389, $tmp2390);
    panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2391, &$s2392);
    (($fn2394) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2393);
    panda$core$String* $tmp2396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2395, merge2349);
    panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2396, &$s2397);
    (($fn2399) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2398);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2349, p_out);
    {
        tmp712400 = result2351;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef2343));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2351));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) merge2349));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel2347));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel2345));
        }
        return tmp712400;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2401 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2401;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2402;
    panda$core$String* tmp722404;
    panda$core$String* $tmp2403 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    result2402 = $tmp2403;
    panda$collections$Array$add$panda$collections$Array$T(self->extraEffects, ((panda$core$Object*) p_stmt));
    {
        tmp722404 = result2402;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2402));
        return tmp722404;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1265_92405;
    org$pandalanguage$pandac$IRNode* left2407;
    org$pandalanguage$pandac$parser$Token$Kind op2409;
    org$pandalanguage$pandac$IRNode* right2411;
    org$pandalanguage$pandac$Type* type2415;
    org$pandalanguage$pandac$MethodRef* target2417;
    panda$collections$ImmutableArray* args2419;
    org$pandalanguage$pandac$IRNode* base2423;
    org$pandalanguage$pandac$Type* type2425;
    panda$core$Bit explicit2427;
    panda$core$UInt64 value2431;
    panda$core$UInt64 value2435;
    panda$core$Real64 value2439;
    panda$core$Bit value2443;
    org$pandalanguage$pandac$Type* type2447;
    org$pandalanguage$pandac$IRNode* initCall2449;
    org$pandalanguage$pandac$Variable* variable2453;
    org$pandalanguage$pandac$IRNode* base2457;
    org$pandalanguage$pandac$FieldDecl* field2459;
    panda$core$String* str2463;
    org$pandalanguage$pandac$Type* t2469;
    org$pandalanguage$pandac$IRNode* base2473;
    panda$core$Int64 id2475;
    panda$core$String* value2477;
    panda$core$String* tmp732480;
    panda$core$Int64 id2482;
    panda$core$String* result2484;
    panda$core$String* tmp742487;
    org$pandalanguage$pandac$Position pos2489;
    org$pandalanguage$pandac$Type* type2491;
    org$pandalanguage$pandac$IRNode* value2495;
    org$pandalanguage$pandac$IRNode* value2499;
    org$pandalanguage$pandac$parser$Token$Kind op2503;
    org$pandalanguage$pandac$IRNode* base2505;
    org$pandalanguage$pandac$IRNode* test2509;
    org$pandalanguage$pandac$IRNode* ifTrue2511;
    org$pandalanguage$pandac$IRNode* ifFalse2513;
    org$pandalanguage$pandac$IRNode* base2519;
    org$pandalanguage$pandac$IRNode* stmt2521;
    {
        $match$1265_92405 = p_expr;
        panda$core$Bit $tmp2406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp2406.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2408 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 24));
            left2407 = *$tmp2408;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2410 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1265_92405->$data + 32));
            op2409 = *$tmp2410;
            org$pandalanguage$pandac$IRNode** $tmp2412 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 40));
            right2411 = *$tmp2412;
            panda$core$String* $tmp2413 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, left2407, op2409, right2411, p_out);
            return $tmp2413;
        }
        }
        else {
        panda$core$Bit $tmp2414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp2414.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2416 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1265_92405->$data + 16));
            type2415 = *$tmp2416;
            org$pandalanguage$pandac$MethodRef** $tmp2418 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1265_92405->$data + 24));
            target2417 = *$tmp2418;
            panda$collections$ImmutableArray** $tmp2420 = ((panda$collections$ImmutableArray**) ((char*) $match$1265_92405->$data + 32));
            args2419 = *$tmp2420;
            panda$core$String* $tmp2421 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, type2415, target2417, args2419, p_out);
            return $tmp2421;
        }
        }
        else {
        panda$core$Bit $tmp2422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp2422.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2424 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 16));
            base2423 = *$tmp2424;
            org$pandalanguage$pandac$Type** $tmp2426 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1265_92405->$data + 24));
            type2425 = *$tmp2426;
            panda$core$Bit* $tmp2428 = ((panda$core$Bit*) ((char*) $match$1265_92405->$data + 32));
            explicit2427 = *$tmp2428;
            panda$core$String* $tmp2429 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base2423, type2425, p_out);
            return $tmp2429;
        }
        }
        else {
        panda$core$Bit $tmp2430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2430.value) {
        {
            panda$core$UInt64* $tmp2432 = ((panda$core$UInt64*) ((char*) $match$1265_92405->$data + 24));
            value2431 = *$tmp2432;
            panda$core$String* $tmp2433 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2431, p_out);
            return $tmp2433;
        }
        }
        else {
        panda$core$Bit $tmp2434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp2434.value) {
        {
            panda$core$UInt64* $tmp2436 = ((panda$core$UInt64*) ((char*) $match$1265_92405->$data + 24));
            value2435 = *$tmp2436;
            panda$core$String* $tmp2437 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2435, p_out);
            return $tmp2437;
        }
        }
        else {
        panda$core$Bit $tmp2438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2438.value) {
        {
            panda$core$Real64* $tmp2440 = ((panda$core$Real64*) ((char*) $match$1265_92405->$data + 24));
            value2439 = *$tmp2440;
            panda$core$String* $tmp2441 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(self, value2439, ((panda$io$OutputStream*) p_out));
            return $tmp2441;
        }
        }
        else {
        panda$core$Bit $tmp2442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp2442.value) {
        {
            panda$core$Bit* $tmp2444 = ((panda$core$Bit*) ((char*) $match$1265_92405->$data + 24));
            value2443 = *$tmp2444;
            panda$core$String* $tmp2445 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, value2443, p_out);
            return $tmp2445;
        }
        }
        else {
        panda$core$Bit $tmp2446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp2446.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2448 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1265_92405->$data + 16));
            type2447 = *$tmp2448;
            org$pandalanguage$pandac$IRNode** $tmp2450 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 24));
            initCall2449 = *$tmp2450;
            panda$core$String* $tmp2451 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, type2447, initCall2449, p_out);
            return $tmp2451;
        }
        }
        else {
        panda$core$Bit $tmp2452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2452.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2454 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1265_92405->$data + 16));
            variable2453 = *$tmp2454;
            panda$core$String* $tmp2455 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, variable2453, p_out);
            return $tmp2455;
        }
        }
        else {
        panda$core$Bit $tmp2456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2456.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2458 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 24));
            base2457 = *$tmp2458;
            org$pandalanguage$pandac$FieldDecl** $tmp2460 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1265_92405->$data + 32));
            field2459 = *$tmp2460;
            panda$core$String* $tmp2461 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, base2457, field2459, p_out);
            return $tmp2461;
        }
        }
        else {
        panda$core$Bit $tmp2462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2462.value) {
        {
            panda$core$String** $tmp2464 = ((panda$core$String**) ((char*) $match$1265_92405->$data + 16));
            str2463 = *$tmp2464;
            panda$core$String* $tmp2465 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(self, str2463);
            return $tmp2465;
        }
        }
        else {
        panda$core$Bit $tmp2466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2466.value) {
        {
            panda$core$String* $tmp2467 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(self, p_out);
            return $tmp2467;
        }
        }
        else {
        panda$core$Bit $tmp2468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2468.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2470 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1265_92405->$data + 16));
            t2469 = *$tmp2470;
            panda$core$String* $tmp2471 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, t2469, p_out);
            return $tmp2471;
        }
        }
        else {
        panda$core$Bit $tmp2472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2472.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2474 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 0));
            base2473 = *$tmp2474;
            panda$core$Int64* $tmp2476 = ((panda$core$Int64*) ((char*) $match$1265_92405->$data + 8));
            id2475 = *$tmp2476;
            panda$core$String* $tmp2478 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2473, p_out);
            value2477 = $tmp2478;
            panda$core$Int64$wrapper* $tmp2479;
            $tmp2479 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2479->value = id2475;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp2479), ((panda$core$Object*) value2477));
            {
                tmp732480 = value2477;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2477));
                return tmp732480;
            }
        }
        }
        else {
        panda$core$Bit $tmp2481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2481.value) {
        {
            panda$core$Int64* $tmp2483 = ((panda$core$Int64*) ((char*) $match$1265_92405->$data + 24));
            id2482 = *$tmp2483;
            panda$core$Int64$wrapper* $tmp2485;
            $tmp2485 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2485->value = id2482;
            panda$core$Object* $tmp2486 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) $tmp2485));
            result2484 = ((panda$core$String*) $tmp2486);
            PANDA_ASSERT(((panda$core$Bit) { result2484 != NULL }).value);
            {
                tmp742487 = result2484;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2484));
                return tmp742487;
            }
        }
        }
        else {
        panda$core$Bit $tmp2488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2488.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2490 = ((org$pandalanguage$pandac$Position*) ((char*) $match$1265_92405->$data + 0));
            pos2489 = *$tmp2490;
            org$pandalanguage$pandac$Type** $tmp2492 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1265_92405->$data + 16));
            type2491 = *$tmp2492;
            panda$core$String* $tmp2493 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, type2491, p_out);
            return $tmp2493;
        }
        }
        else {
        panda$core$Bit $tmp2494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2494.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2496 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 16));
            value2495 = *$tmp2496;
            panda$core$String* $tmp2497 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2495, p_out);
            return $tmp2497;
        }
        }
        else {
        panda$core$Bit $tmp2498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2498.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2500 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 16));
            value2499 = *$tmp2500;
            panda$core$String* $tmp2501 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2499, p_out);
            return $tmp2501;
        }
        }
        else {
        panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2502.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2504 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1265_92405->$data + 16));
            op2503 = *$tmp2504;
            org$pandalanguage$pandac$IRNode** $tmp2506 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 24));
            base2505 = *$tmp2506;
            panda$core$String* $tmp2507 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, op2503, base2505, p_out);
            return $tmp2507;
        }
        }
        else {
        panda$core$Bit $tmp2508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2508.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2510 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 16));
            test2509 = *$tmp2510;
            org$pandalanguage$pandac$IRNode** $tmp2512 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 24));
            ifTrue2511 = *$tmp2512;
            org$pandalanguage$pandac$IRNode** $tmp2514 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 32));
            ifFalse2513 = *$tmp2514;
            panda$core$String* $tmp2515 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, test2509, ifTrue2511, ifFalse2513, p_out);
            return $tmp2515;
        }
        }
        else {
        panda$core$Bit $tmp2516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp2516.value) {
        {
            panda$core$String* $tmp2517 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2517;
        }
        }
        else {
        panda$core$Bit $tmp2518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1265_92405->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2518.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2520 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 0));
            base2519 = *$tmp2520;
            org$pandalanguage$pandac$IRNode** $tmp2522 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1265_92405->$data + 8));
            stmt2521 = *$tmp2522;
            panda$core$String* $tmp2523 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2519, stmt2521, p_out);
            return $tmp2523;
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
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2524 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2524;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* Iter$1326$92528;
    org$pandalanguage$pandac$IRNode* s2540;
    (($fn2526) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2525);
    panda$core$Int64 $tmp2527 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2527;
    {
        ITable* $tmp2529 = ((panda$collections$Iterable*) p_statements)->$class->itable;
        while ($tmp2529->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2529 = $tmp2529->next;
        }
        $fn2531 $tmp2530 = $tmp2529->methods[0];
        panda$collections$Iterator* $tmp2532 = $tmp2530(((panda$collections$Iterable*) p_statements));
        Iter$1326$92528 = $tmp2532;
        $l2533:;
        ITable* $tmp2535 = Iter$1326$92528->$class->itable;
        while ($tmp2535->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2535 = $tmp2535->next;
        }
        $fn2537 $tmp2536 = $tmp2535->methods[0];
        panda$core$Bit $tmp2538 = $tmp2536(Iter$1326$92528);
        panda$core$Bit $tmp2539 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2538);
        if (!$tmp2539.value) goto $l2534;
        {
            ITable* $tmp2541 = Iter$1326$92528->$class->itable;
            while ($tmp2541->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2541 = $tmp2541->next;
            }
            $fn2543 $tmp2542 = $tmp2541->methods[1];
            panda$core$Object* $tmp2544 = $tmp2542(Iter$1326$92528);
            s2540 = ((org$pandalanguage$pandac$IRNode*) $tmp2544);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2540, p_out);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2540));
        }
        goto $l2533;
        $l2534:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1326$92528));
    }
    panda$core$Int64 $tmp2545 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2545;
    (($fn2547) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2546);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$1334_92548;
    panda$core$String* ptr2553;
    panda$core$String* arg2556;
    panda$core$String* base2582;
    panda$core$String* index2585;
    panda$core$String* value2588;
    {
        $match$1334_92548 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp2550 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1334_92548, &$s2549);
        if ($tmp2550.value) {
        {
            panda$core$Int64 $tmp2551 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2551, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2552.value);
            panda$core$Object* $tmp2554 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2555 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2554), p_out);
            ptr2553 = $tmp2555;
            panda$core$Object* $tmp2558 = (($fn2557) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp2559 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2560 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(((org$pandalanguage$pandac$Compiler*) $tmp2558), ((org$pandalanguage$pandac$IRNode*) $tmp2559));
            panda$core$String* $tmp2561 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2560, p_out);
            arg2556 = $tmp2561;
            panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2562, arg2556);
            panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, &$s2564);
            panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, ptr2553);
            panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2566, &$s2567);
            (($fn2569) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2568);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr2553));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2556));
            }
        }
        }
        else {
        panda$core$Bit $tmp2571 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1334_92548, &$s2570);
        if ($tmp2571.value) {
        {
            panda$core$Int64 $tmp2572 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2572, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2573.value);
            panda$core$Object* $tmp2575 = (($fn2574) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp2576 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2577 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(((org$pandalanguage$pandac$Compiler*) $tmp2575), ((org$pandalanguage$pandac$IRNode*) $tmp2576));
            org$pandalanguage$pandac$Type* $tmp2579 = (($fn2578) $tmp2577->$class->vtable[2])($tmp2577);
            panda$core$Int64 $tmp2580 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2579->subtypes);
            panda$core$Bit $tmp2581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2580, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2581.value);
            panda$core$Object* $tmp2583 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2584 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2583), p_out);
            base2582 = $tmp2584;
            panda$core$Object* $tmp2586 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2587 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2586), p_out);
            index2585 = $tmp2587;
            panda$core$Object* $tmp2590 = (($fn2589) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp2591 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2592 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(((org$pandalanguage$pandac$Compiler*) $tmp2590), ((org$pandalanguage$pandac$IRNode*) $tmp2591));
            panda$core$String* $tmp2593 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2592, p_out);
            value2588 = $tmp2593;
            panda$core$String* $tmp2594 = panda$core$String$convert$R$panda$core$String(base2582);
            panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, &$s2595);
            panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, index2585);
            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2598);
            panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, value2588);
            panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2600, &$s2601);
            (($fn2603) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2602);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base2582));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2588));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2585));
            }
        }
        }
        else {
        panda$core$Bit $tmp2605 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1334_92548, &$s2604);
        if ($tmp2605.value) {
        {
            panda$core$Int64 $tmp2606 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2606, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2607.value);
            panda$core$Object* $tmp2609 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2610 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2609), p_out);
            panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2608, $tmp2610);
            panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, &$s2612);
            (($fn2614) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2613);
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
void org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_mref, panda$collections$ImmutableArray* p_args, panda$core$String* p_target, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2615;
    org$pandalanguage$pandac$Type* actualMethodType2619;
    panda$core$String* actualResultType2620;
    panda$core$Bit isSuper2621;
    panda$collections$Array* argRefs2645;
    panda$core$Int64 offset2647;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2652;
    panda$core$String* arg2667;
    panda$core$String* targetRef2692;
    panda$core$String* methodRef2696;
    panda$core$String* separator2698;
    panda$core$String* indirectVar2702;
    panda$core$String* resultType2706;
    panda$collections$Iterator* Iter$1414$92730;
    panda$core$String* a2742;
    m2615 = p_mref->value;
    panda$core$Bit $tmp2617 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2615->owner)->name, &$s2616);
    if ($tmp2617.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_mref, p_args, p_out);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2615));
            return;
        }
    }
    }
    panda$core$Bit $tmp2618 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2615->owner);
    if ($tmp2618.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2615);
    }
    }
    memset(&actualMethodType2619, 0, sizeof(actualMethodType2619));
    memset(&actualResultType2620, 0, sizeof(actualResultType2620));
    panda$core$Int64 $tmp2623 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp2624 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2623, ((panda$core$Int64) { 1 }));
    bool $tmp2622 = $tmp2624.value;
    if (!$tmp2622) goto $l2625;
    panda$core$Object* $tmp2626 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2626)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp2622 = $tmp2627.value;
    $l2625:;
    panda$core$Bit $tmp2628 = { $tmp2622 };
    isSuper2621 = $tmp2628;
    panda$core$Bit $tmp2630 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2621);
    bool $tmp2629 = $tmp2630.value;
    if (!$tmp2629) goto $l2631;
    panda$core$Bit $tmp2632 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2615);
    $tmp2629 = $tmp2632.value;
    $l2631:;
    panda$core$Bit $tmp2633 = { $tmp2629 };
    if ($tmp2633.value) {
    {
        {
            panda$core$Object* $tmp2635 = (($fn2634) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$Type* $tmp2636 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2635), m2615);
            actualMethodType2619 = $tmp2636;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType2619));
        }
        {
            panda$core$Int64 $tmp2637 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2619->subtypes);
            panda$core$Int64 $tmp2638 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2637, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2639 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2619->subtypes, $tmp2638);
            panda$core$String* $tmp2640 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2639));
            actualResultType2620 = $tmp2640;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType2620));
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp2642 = (($fn2641) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$Type* $tmp2643 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2642), m2615);
            actualMethodType2619 = $tmp2643;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType2619));
        }
        {
            panda$core$String* $tmp2644 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            actualResultType2620 = $tmp2644;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType2620));
        }
    }
    }
    panda$collections$Array* $tmp2646 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2646);
    argRefs2645 = $tmp2646;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(argRefs2645, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2648 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp2649 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2619->subtypes);
    panda$core$Int64 $tmp2650 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2648, $tmp2649);
    panda$core$Int64 $tmp2651 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2650, ((panda$core$Int64) { 1 }));
    offset2647 = $tmp2651;
    panda$core$Int64 $tmp2653 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2652, ((panda$core$Int64) { 0 }), $tmp2653, ((panda$core$Bit) { false }));
    int64_t $tmp2655 = $tmp2652.min.value;
    panda$core$Int64 i2654 = { $tmp2655 };
    int64_t $tmp2657 = $tmp2652.max.value;
    bool $tmp2658 = $tmp2652.inclusive.value;
    if ($tmp2658) goto $l2665; else goto $l2666;
    $l2665:;
    if ($tmp2655 <= $tmp2657) goto $l2659; else goto $l2661;
    $l2666:;
    if ($tmp2655 < $tmp2657) goto $l2659; else goto $l2661;
    $l2659:;
    {
        panda$core$Object* $tmp2668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2654);
        panda$core$String* $tmp2669 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2668), p_out);
        arg2667 = $tmp2669;
        panda$core$Bit $tmp2671 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2654, offset2647);
        bool $tmp2670 = $tmp2671.value;
        if (!$tmp2670) goto $l2672;
        panda$core$Int64 $tmp2673 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2654, offset2647);
        panda$core$Object* $tmp2674 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2619->subtypes, $tmp2673);
        panda$core$Object* $tmp2675 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2654);
        org$pandalanguage$pandac$Type* $tmp2677 = (($fn2676) ((org$pandalanguage$pandac$IRNode*) $tmp2675)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2675));
        panda$core$Bit $tmp2678 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2674), $tmp2677);
        $tmp2670 = $tmp2678.value;
        $l2672:;
        panda$core$Bit $tmp2679 = { $tmp2670 };
        if ($tmp2679.value) {
        {
            {
                panda$core$Object* $tmp2680 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2654);
                org$pandalanguage$pandac$Type* $tmp2682 = (($fn2681) ((org$pandalanguage$pandac$IRNode*) $tmp2680)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2680));
                panda$core$Int64 $tmp2683 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2654, offset2647);
                panda$core$Object* $tmp2684 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2619->subtypes, $tmp2683);
                panda$core$String* $tmp2685 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2667, $tmp2682, ((org$pandalanguage$pandac$Type*) $tmp2684), p_out);
                arg2667 = $tmp2685;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2667));
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs2645, ((panda$core$Object*) arg2667));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2667));
    }
    $l2662:;
    int64_t $tmp2687 = $tmp2657 - i2654.value;
    if ($tmp2658) goto $l2688; else goto $l2689;
    $l2688:;
    if ((uint64_t) $tmp2687 >= 1) goto $l2686; else goto $l2661;
    $l2689:;
    if ((uint64_t) $tmp2687 > 1) goto $l2686; else goto $l2661;
    $l2686:;
    i2654.value += 1;
    goto $l2659;
    $l2661:;
    memset(&targetRef2692, 0, sizeof(targetRef2692));
    panda$core$Int64 $tmp2693 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs2645);
    panda$core$Bit $tmp2694 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2693, ((panda$core$Int64) { 0 }));
    if ($tmp2694.value) {
    {
        {
            panda$core$Object* $tmp2695 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs2645, ((panda$core$Int64) { 0 }));
            targetRef2692 = ((panda$core$String*) $tmp2695);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetRef2692));
        }
    }
    }
    else {
    {
        {
            targetRef2692 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetRef2692));
        }
    }
    }
    panda$core$String* $tmp2697 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, targetRef2692, m2615, isSuper2621, p_out);
    methodRef2696 = $tmp2697;
    separator2698 = &$s2699;
    panda$core$Bit $tmp2700 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2615);
    if ($tmp2700.value) {
    {
        panda$core$Int64 $tmp2701 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2701;
        panda$core$Int64$wrapper* $tmp2704;
        $tmp2704 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp2704->value = self->varCount;
        panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2703, ((panda$core$Object*) $tmp2704));
        indirectVar2702 = $tmp2705;
        panda$core$String* $tmp2707 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        resultType2706 = $tmp2707;
        panda$core$String* $tmp2708 = panda$core$String$convert$R$panda$core$String(resultType2706);
        panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, &$s2709);
        panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, indirectVar2702);
        panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, &$s2712);
        (($fn2714) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2713);
        panda$core$String* $tmp2715 = panda$core$String$convert$R$panda$core$String(methodRef2696);
        panda$core$String* $tmp2717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, &$s2716);
        panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2717, resultType2706);
        panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
        panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, indirectVar2702);
        panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, &$s2722);
        (($fn2724) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2723);
        {
            separator2698 = &$s2725;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2698));
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultType2706));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar2702));
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2726 = panda$core$String$convert$R$panda$core$String(methodRef2696);
        panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, &$s2727);
        (($fn2729) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2728);
    }
    }
    {
        ITable* $tmp2731 = ((panda$collections$Iterable*) argRefs2645)->$class->itable;
        while ($tmp2731->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2731 = $tmp2731->next;
        }
        $fn2733 $tmp2732 = $tmp2731->methods[0];
        panda$collections$Iterator* $tmp2734 = $tmp2732(((panda$collections$Iterable*) argRefs2645));
        Iter$1414$92730 = $tmp2734;
        $l2735:;
        ITable* $tmp2737 = Iter$1414$92730->$class->itable;
        while ($tmp2737->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2737 = $tmp2737->next;
        }
        $fn2739 $tmp2738 = $tmp2737->methods[0];
        panda$core$Bit $tmp2740 = $tmp2738(Iter$1414$92730);
        panda$core$Bit $tmp2741 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2740);
        if (!$tmp2741.value) goto $l2736;
        {
            ITable* $tmp2743 = Iter$1414$92730->$class->itable;
            while ($tmp2743->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2743 = $tmp2743->next;
            }
            $fn2745 $tmp2744 = $tmp2743->methods[1];
            panda$core$Object* $tmp2746 = $tmp2744(Iter$1414$92730);
            a2742 = ((panda$core$String*) $tmp2746);
            (($fn2747) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2698);
            (($fn2748) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2742);
            {
                separator2698 = &$s2749;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2698));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2742));
        }
        goto $l2735;
        $l2736:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1414$92730));
    }
    (($fn2751) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2750);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2698));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs2645));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef2696));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType2620));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2615));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetRef2692));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType2619));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$collections$ImmutableArray* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2752;
    panda$core$String* $tmp2753 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2752 = $tmp2753;
    panda$core$String* $tmp2755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2754, testRef2752);
    panda$core$String* $tmp2757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2755, &$s2756);
    (($fn2758) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2757);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { false }), p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_ifTrue, p_out);
    (($fn2760) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2759);
    if (((panda$core$Bit) { p_ifFalse != NULL }).value) {
    {
        (($fn2762) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2761);
        org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { false }), p_out);
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_ifFalse, p_out);
        (($fn2764) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2763);
    }
    }
    panda$collections$Array$clear(self->extraEffects);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef2752));
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2777;
    org$pandalanguage$pandac$Type* t2779;
    panda$core$String* llt2783;
    panda$core$String* indexType2785;
    org$pandalanguage$pandac$ClassDecl* cl2791;
    org$pandalanguage$pandac$FieldDecl* field2803;
    panda$core$String* numberType2813;
    panda$core$String* index2815;
    org$pandalanguage$pandac$IRNode* $match$1465_92816;
    org$pandalanguage$pandac$Variable* variable2818;
    panda$core$String* start2821;
    panda$core$String* indexValuePtr2833;
    panda$core$String* end2847;
    panda$core$String* inclusive2859;
    panda$core$String* loopStart2869;
    panda$core$String* loopBody2871;
    panda$core$String* loopEnd2873;
    panda$core$String* loopTest2875;
    panda$core$String* forwardEntry2878;
    panda$core$String* backwardEntry2880;
    panda$core$String* signPrefix2882;
    panda$core$String* unsigned2883;
    panda$core$String* forwardEntryInclusive2897;
    panda$core$String* forwardEntryExclusive2899;
    panda$core$String* loopInc2941;
    panda$core$String* forwardDelta2943;
    panda$core$String* forwardInclusiveLabel2958;
    panda$core$String* forwardExclusiveLabel2960;
    panda$core$String* forwardExclusiveTest2989;
    panda$core$String* inc3006;
    org$pandalanguage$pandac$Type* $tmp2766 = (($fn2765) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2766->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2767.value);
    org$pandalanguage$pandac$Type* $tmp2769 = (($fn2768) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2770 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2769->subtypes);
    panda$core$Bit $tmp2771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2770, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2771.value);
    org$pandalanguage$pandac$Type* $tmp2773 = (($fn2772) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2774 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2773->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2776 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2774))->name, &$s2775);
    PANDA_ASSERT($tmp2776.value);
    panda$core$String* $tmp2778 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range2777 = $tmp2778;
    org$pandalanguage$pandac$Type* $tmp2781 = (($fn2780) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2782 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2781->subtypes, ((panda$core$Int64) { 1 }));
    t2779 = ((org$pandalanguage$pandac$Type*) $tmp2782);
    panda$core$String* $tmp2784 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2779);
    llt2783 = $tmp2784;
    memset(&indexType2785, 0, sizeof(indexType2785));
    panda$core$Bit $tmp2786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2779->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2786.value) {
    {
        panda$core$Int64 $tmp2787 = panda$collections$Array$get_count$R$panda$core$Int64(t2779->subtypes);
        panda$core$Bit $tmp2788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2787, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2788.value);
        {
            panda$core$Object* $tmp2789 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2779->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2790 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2789));
            indexType2785 = $tmp2790;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2785));
        }
    }
    }
    else {
    {
        {
            indexType2785 = llt2783;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2785));
        }
    }
    }
    panda$core$Object* $tmp2793 = (($fn2792) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$ClassDecl* $tmp2794 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2793), t2779);
    cl2791 = $tmp2794;
    PANDA_ASSERT(((panda$core$Bit) { cl2791 != NULL }).value);
    panda$core$Object* $tmp2796 = (($fn2795) self->compiler->$class->vtable[2])(self->compiler);
    panda$collections$ListView* $tmp2797 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2796), cl2791);
    ITable* $tmp2798 = ((panda$collections$CollectionView*) $tmp2797)->$class->itable;
    while ($tmp2798->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2798 = $tmp2798->next;
    }
    $fn2800 $tmp2799 = $tmp2798->methods[0];
    panda$core$Int64 $tmp2801 = $tmp2799(((panda$collections$CollectionView*) $tmp2797));
    panda$core$Bit $tmp2802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2801, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2802.value);
    panda$core$Object* $tmp2805 = (($fn2804) self->compiler->$class->vtable[2])(self->compiler);
    panda$collections$ListView* $tmp2806 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2805), cl2791);
    ITable* $tmp2807 = $tmp2806->$class->itable;
    while ($tmp2807->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2807 = $tmp2807->next;
    }
    $fn2809 $tmp2808 = $tmp2807->methods[0];
    panda$core$Object* $tmp2810 = $tmp2808($tmp2806, ((panda$core$Int64) { 0 }));
    field2803 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2810);
    panda$core$Object* $tmp2812 = (($fn2811) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp2812), field2803);
    panda$core$String* $tmp2814 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2803->type);
    numberType2813 = $tmp2814;
    memset(&index2815, 0, sizeof(index2815));
    {
        $match$1465_92816 = p_target;
        panda$core$Bit $tmp2817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1465_92816->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2817.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2819 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1465_92816->$data + 16));
            variable2818 = *$tmp2819;
            {
                panda$core$String* $tmp2820 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2818);
                index2815 = $tmp2820;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2815));
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2822 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2821 = $tmp2822;
    panda$core$String* $tmp2823 = panda$core$String$convert$R$panda$core$String(numberType2813);
    panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, &$s2824);
    panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2825, start2821);
    panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2826, &$s2827);
    panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2828, range2777);
    panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, &$s2830);
    (($fn2832) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2831);
    panda$core$String* $tmp2834 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2833 = $tmp2834;
    org$pandalanguage$pandac$Type* $tmp2835 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2791);
    panda$core$String* $tmp2836 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2835);
    panda$core$String* $tmp2837 = panda$core$String$convert$R$panda$core$String($tmp2836);
    panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, &$s2838);
    panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, index2815);
    panda$core$String* $tmp2842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, &$s2841);
    panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2842, start2821);
    panda$core$String* $tmp2845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2843, &$s2844);
    (($fn2846) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2845);
    panda$core$String* $tmp2848 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2847 = $tmp2848;
    panda$core$String* $tmp2849 = panda$core$String$convert$R$panda$core$String(numberType2813);
    panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2849, &$s2850);
    panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, end2847);
    panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2852, &$s2853);
    panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, range2777);
    panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, &$s2856);
    (($fn2858) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2857);
    panda$core$String* $tmp2860 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2859 = $tmp2860;
    panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2861, inclusive2859);
    panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, &$s2863);
    panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, range2777);
    panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, &$s2866);
    (($fn2868) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2867);
    panda$core$String* $tmp2870 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2869 = $tmp2870;
    panda$core$String* $tmp2872 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2871 = $tmp2872;
    panda$core$String* $tmp2874 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2873 = $tmp2874;
    panda$core$String* $tmp2876 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2875 = $tmp2876;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2877 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2877, p_label, loopEnd2873, loopTest2875);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2877));
    panda$core$String* $tmp2879 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2878 = $tmp2879;
    panda$core$String* $tmp2881 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2880 = $tmp2881;
    memset(&signPrefix2882, 0, sizeof(signPrefix2882));
    memset(&unsigned2883, 0, sizeof(unsigned2883));
    panda$core$Bit $tmp2885 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2779)->name, &$s2884);
    if ($tmp2885.value) {
    {
        {
            signPrefix2882 = &$s2886;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix2882));
        }
        {
            panda$core$String* $tmp2888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2887, numberType2813);
            unsigned2883 = $tmp2888;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned2883));
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp2891 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2779)->name, &$s2890);
        bool $tmp2889 = $tmp2891.value;
        if ($tmp2889) goto $l2892;
        panda$core$Bit $tmp2894 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2779)->name, &$s2893);
        $tmp2889 = $tmp2894.value;
        $l2892:;
        panda$core$Bit $tmp2895 = { $tmp2889 };
        PANDA_ASSERT($tmp2895.value);
        {
            signPrefix2882 = &$s2896;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix2882));
        }
        {
            unsigned2883 = numberType2813;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned2883));
        }
    }
    }
    panda$core$String* $tmp2898 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2897 = $tmp2898;
    panda$core$String* $tmp2900 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2899 = $tmp2900;
    panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2901, inclusive2859);
    panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, &$s2903);
    panda$core$String* $tmp2905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2904, forwardEntryInclusive2897);
    panda$core$String* $tmp2907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2905, &$s2906);
    panda$core$String* $tmp2908 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2899);
    panda$core$String* $tmp2910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2908, &$s2909);
    panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2907, $tmp2910);
    (($fn2912) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2911);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2897, p_out);
    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2913, start2821);
    panda$core$String* $tmp2916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, &$s2915);
    panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2916, end2847);
    panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, &$s2918);
    panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, loopStart2869);
    panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2920, &$s2921);
    panda$core$String* $tmp2923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, loopEnd2873);
    panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2923, &$s2924);
    (($fn2926) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2925);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2899, p_out);
    panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2927, start2821);
    panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2928, &$s2929);
    panda$core$String* $tmp2931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, end2847);
    panda$core$String* $tmp2933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2931, &$s2932);
    panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2933, loopStart2869);
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, &$s2935);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2936, loopEnd2873);
    panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2937, &$s2938);
    (($fn2940) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2939);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2869, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2875, p_out);
    panda$core$String* $tmp2942 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2941 = $tmp2942;
    panda$core$String* $tmp2944 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2943 = $tmp2944;
    panda$core$String* $tmp2945 = panda$core$String$convert$R$panda$core$String(numberType2813);
    panda$core$String* $tmp2947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2945, &$s2946);
    panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2947, forwardDelta2943);
    panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, &$s2949);
    panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, end2847);
    panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2951, &$s2952);
    panda$core$String* $tmp2954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, index2815);
    panda$core$String* $tmp2956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2954, &$s2955);
    (($fn2957) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2956);
    panda$core$String* $tmp2959 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2958 = $tmp2959;
    panda$core$String* $tmp2961 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2960 = $tmp2961;
    panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2962, inclusive2859);
    panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, &$s2964);
    panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, forwardInclusiveLabel2958);
    panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, &$s2967);
    panda$core$String* $tmp2969 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2960);
    panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2969, &$s2970);
    panda$core$String* $tmp2972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2968, $tmp2971);
    (($fn2973) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2972);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2958, p_out);
    panda$core$String* $tmp2975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2974, unsigned2883);
    panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2975, &$s2976);
    panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2977, forwardDelta2943);
    panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, &$s2979);
    panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, loopInc2941);
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
    panda$core$String* $tmp2984 = panda$core$String$convert$R$panda$core$String(loopEnd2873);
    panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, &$s2985);
    panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, $tmp2986);
    (($fn2988) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2987);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2960, p_out);
    panda$core$String* $tmp2990 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2989 = $tmp2990;
    panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2991, unsigned2883);
    panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2992, &$s2993);
    panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2994, forwardDelta2943);
    panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, &$s2996);
    panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, loopInc2941);
    panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, &$s2999);
    panda$core$String* $tmp3001 = panda$core$String$convert$R$panda$core$String(loopEnd2873);
    panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, &$s3002);
    panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3000, $tmp3003);
    (($fn3005) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3004);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2941, p_out);
    panda$core$String* $tmp3007 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3006 = $tmp3007;
    panda$core$String* $tmp3008 = panda$core$String$convert$R$panda$core$String(index2815);
    panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3008, &$s3009);
    (($fn3011) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3010);
    panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3012, loopStart2869);
    panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, &$s3014);
    (($fn3016) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3015);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2873, p_out);
    panda$core$Object* $tmp3017 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix2882));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel2960));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive2859));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned2883));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2821));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody2871));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest2875));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive2897));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2779));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel2958));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end2847));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc3006));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart2869));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry2880));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr2833));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd2873));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc2941));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2785));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt2783));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest2989));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType2813));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry2878));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2815));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive2899));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2803));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta2943));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2791));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range2777));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1465_92816));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range3030;
    org$pandalanguage$pandac$Type* t3032;
    org$pandalanguage$pandac$Type* stepType3036;
    panda$core$String* llt3040;
    panda$core$String* indexType3042;
    org$pandalanguage$pandac$ClassDecl* cl3048;
    org$pandalanguage$pandac$FieldDecl* field3060;
    panda$core$String* numberType3070;
    panda$core$String* index3072;
    org$pandalanguage$pandac$IRNode* $match$1577_93073;
    org$pandalanguage$pandac$Variable* variable3075;
    panda$core$String* start3078;
    panda$core$String* indexValuePtr3090;
    panda$core$String* end3104;
    panda$core$String* step3116;
    org$pandalanguage$pandac$ClassDecl* stepCl3118;
    org$pandalanguage$pandac$FieldDecl* stepField3130;
    panda$core$String* inclusive3151;
    panda$core$String* loopStart3161;
    panda$core$String* loopBody3163;
    panda$core$String* loopEnd3165;
    panda$core$String* loopTest3167;
    panda$core$String* forwardEntry3170;
    panda$core$String* backwardEntry3172;
    panda$core$String* unsigned3174;
    panda$core$String* signPrefix3175;
    panda$core$String* direction3191;
    panda$core$String* forwardEntryInclusive3215;
    panda$core$String* forwardEntryExclusive3217;
    panda$core$String* backwardEntryInclusive3259;
    panda$core$String* backwardEntryExclusive3261;
    panda$core$String* backwardEntryExclusiveTest3289;
    panda$core$String* loopInc3305;
    panda$core$String* forwardLabel3307;
    panda$core$String* backwardLabel3309;
    panda$core$String* forwardDelta3322;
    panda$core$String* forwardInclusiveLabel3337;
    panda$core$String* forwardExclusiveLabel3339;
    panda$core$String* forwardExclusiveTest3371;
    panda$core$String* backwardDelta3391;
    panda$core$String* backwardInclusiveLabel3406;
    panda$core$String* backwardExclusiveLabel3408;
    panda$core$String* inc3460;
    org$pandalanguage$pandac$Type* $tmp3019 = (($fn3018) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3019->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp3020.value);
    org$pandalanguage$pandac$Type* $tmp3022 = (($fn3021) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp3023 = panda$collections$Array$get_count$R$panda$core$Int64($tmp3022->subtypes);
    panda$core$Bit $tmp3024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3023, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3024.value);
    org$pandalanguage$pandac$Type* $tmp3026 = (($fn3025) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp3027 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3026->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3029 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp3027))->name, &$s3028);
    PANDA_ASSERT($tmp3029.value);
    panda$core$String* $tmp3031 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range3030 = $tmp3031;
    org$pandalanguage$pandac$Type* $tmp3034 = (($fn3033) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp3035 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3034->subtypes, ((panda$core$Int64) { 1 }));
    t3032 = ((org$pandalanguage$pandac$Type*) $tmp3035);
    org$pandalanguage$pandac$Type* $tmp3038 = (($fn3037) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp3039 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3038->subtypes, ((panda$core$Int64) { 2 }));
    stepType3036 = ((org$pandalanguage$pandac$Type*) $tmp3039);
    panda$core$String* $tmp3041 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t3032);
    llt3040 = $tmp3041;
    memset(&indexType3042, 0, sizeof(indexType3042));
    panda$core$Bit $tmp3043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t3032->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3043.value) {
    {
        panda$core$Int64 $tmp3044 = panda$collections$Array$get_count$R$panda$core$Int64(t3032->subtypes);
        panda$core$Bit $tmp3045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3044, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3045.value);
        {
            panda$core$Object* $tmp3046 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t3032->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3047 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3046));
            indexType3042 = $tmp3047;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType3042));
        }
    }
    }
    else {
    {
        {
            indexType3042 = llt3040;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType3042));
        }
    }
    }
    panda$core$Object* $tmp3050 = (($fn3049) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$ClassDecl* $tmp3051 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3050), t3032);
    cl3048 = $tmp3051;
    PANDA_ASSERT(((panda$core$Bit) { cl3048 != NULL }).value);
    panda$core$Object* $tmp3053 = (($fn3052) self->compiler->$class->vtable[2])(self->compiler);
    panda$collections$ListView* $tmp3054 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp3053), cl3048);
    ITable* $tmp3055 = ((panda$collections$CollectionView*) $tmp3054)->$class->itable;
    while ($tmp3055->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3055 = $tmp3055->next;
    }
    $fn3057 $tmp3056 = $tmp3055->methods[0];
    panda$core$Int64 $tmp3058 = $tmp3056(((panda$collections$CollectionView*) $tmp3054));
    panda$core$Bit $tmp3059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3058, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3059.value);
    panda$core$Object* $tmp3062 = (($fn3061) self->compiler->$class->vtable[2])(self->compiler);
    panda$collections$ListView* $tmp3063 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp3062), cl3048);
    ITable* $tmp3064 = $tmp3063->$class->itable;
    while ($tmp3064->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp3064 = $tmp3064->next;
    }
    $fn3066 $tmp3065 = $tmp3064->methods[0];
    panda$core$Object* $tmp3067 = $tmp3065($tmp3063, ((panda$core$Int64) { 0 }));
    field3060 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3067);
    panda$core$Object* $tmp3069 = (($fn3068) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp3069), field3060);
    panda$core$String* $tmp3071 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3060->type);
    numberType3070 = $tmp3071;
    memset(&index3072, 0, sizeof(index3072));
    {
        $match$1577_93073 = p_target;
        panda$core$Bit $tmp3074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1577_93073->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3074.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3076 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1577_93073->$data + 16));
            variable3075 = *$tmp3076;
            {
                panda$core$String* $tmp3077 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable3075);
                index3072 = $tmp3077;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index3072));
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp3079 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start3078 = $tmp3079;
    panda$core$String* $tmp3080 = panda$core$String$convert$R$panda$core$String(numberType3070);
    panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3080, &$s3081);
    panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3082, start3078);
    panda$core$String* $tmp3085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, &$s3084);
    panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3085, range3030);
    panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3086, &$s3087);
    (($fn3089) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3088);
    panda$core$String* $tmp3091 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr3090 = $tmp3091;
    org$pandalanguage$pandac$Type* $tmp3092 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3048);
    panda$core$String* $tmp3093 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3092);
    panda$core$String* $tmp3094 = panda$core$String$convert$R$panda$core$String($tmp3093);
    panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, &$s3095);
    panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, index3072);
    panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, &$s3098);
    panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, start3078);
    panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3100, &$s3101);
    (($fn3103) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3102);
    panda$core$String* $tmp3105 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end3104 = $tmp3105;
    panda$core$String* $tmp3106 = panda$core$String$convert$R$panda$core$String(numberType3070);
    panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3106, &$s3107);
    panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3108, end3104);
    panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, &$s3110);
    panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, range3030);
    panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, &$s3113);
    (($fn3115) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3114);
    panda$core$String* $tmp3117 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step3116 = $tmp3117;
    panda$core$Object* $tmp3120 = (($fn3119) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$ClassDecl* $tmp3121 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3120), stepType3036);
    stepCl3118 = $tmp3121;
    PANDA_ASSERT(((panda$core$Bit) { stepCl3118 != NULL }).value);
    panda$core$Object* $tmp3123 = (($fn3122) self->compiler->$class->vtable[2])(self->compiler);
    panda$collections$ListView* $tmp3124 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp3123), stepCl3118);
    ITable* $tmp3125 = ((panda$collections$CollectionView*) $tmp3124)->$class->itable;
    while ($tmp3125->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3125 = $tmp3125->next;
    }
    $fn3127 $tmp3126 = $tmp3125->methods[0];
    panda$core$Int64 $tmp3128 = $tmp3126(((panda$collections$CollectionView*) $tmp3124));
    panda$core$Bit $tmp3129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3128, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3129.value);
    panda$core$Object* $tmp3132 = (($fn3131) self->compiler->$class->vtable[2])(self->compiler);
    panda$collections$ListView* $tmp3133 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp3132), stepCl3118);
    ITable* $tmp3134 = $tmp3133->$class->itable;
    while ($tmp3134->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp3134 = $tmp3134->next;
    }
    $fn3136 $tmp3135 = $tmp3134->methods[0];
    panda$core$Object* $tmp3137 = $tmp3135($tmp3133, ((panda$core$Int64) { 0 }));
    stepField3130 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3137);
    panda$core$Object* $tmp3139 = (($fn3138) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp3139), stepField3130);
    panda$core$String* $tmp3140 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, stepField3130->type);
    panda$core$String* $tmp3141 = panda$core$String$convert$R$panda$core$String($tmp3140);
    panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, &$s3142);
    panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, step3116);
    panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3144, &$s3145);
    panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3146, range3030);
    panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, &$s3148);
    (($fn3150) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3149);
    panda$core$String* $tmp3152 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive3151 = $tmp3152;
    panda$core$String* $tmp3154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3153, inclusive3151);
    panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3154, &$s3155);
    panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3156, range3030);
    panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3157, &$s3158);
    (($fn3160) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3159);
    panda$core$String* $tmp3162 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3161 = $tmp3162;
    panda$core$String* $tmp3164 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody3163 = $tmp3164;
    panda$core$String* $tmp3166 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3165 = $tmp3166;
    panda$core$String* $tmp3168 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest3167 = $tmp3168;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3169 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3169, p_label, loopEnd3165, loopTest3167);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3169));
    panda$core$String* $tmp3171 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry3170 = $tmp3171;
    panda$core$String* $tmp3173 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry3172 = $tmp3173;
    memset(&unsigned3174, 0, sizeof(unsigned3174));
    memset(&signPrefix3175, 0, sizeof(signPrefix3175));
    panda$core$Bit $tmp3177 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType3036)->name, &$s3176);
    if ($tmp3177.value) {
    {
        {
            signPrefix3175 = &$s3178;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix3175));
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp3181 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType3036)->name, &$s3180);
        bool $tmp3179 = $tmp3181.value;
        if ($tmp3179) goto $l3182;
        panda$core$Bit $tmp3184 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType3036)->name, &$s3183);
        $tmp3179 = $tmp3184.value;
        $l3182:;
        panda$core$Bit $tmp3185 = { $tmp3179 };
        PANDA_ASSERT($tmp3185.value);
        {
            signPrefix3175 = &$s3186;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix3175));
        }
    }
    }
    panda$core$Bit $tmp3188 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(numberType3070, &$s3187);
    if ($tmp3188.value) {
    {
        {
            unsigned3174 = numberType3070;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned3174));
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3189, numberType3070);
            unsigned3174 = $tmp3190;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned3174));
        }
    }
    }
    memset(&direction3191, 0, sizeof(direction3191));
    panda$core$Bit $tmp3193 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix3175, &$s3192);
    if ($tmp3193.value) {
    {
        {
            panda$core$String* $tmp3194 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            direction3191 = $tmp3194;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) direction3191));
        }
        panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3195, direction3191);
        panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, &$s3197);
        panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3198, step3116);
        panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3199, &$s3200);
        (($fn3202) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3201);
    }
    }
    else {
    {
        {
            direction3191 = &$s3203;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) direction3191));
        }
    }
    }
    panda$core$String* $tmp3205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3204, direction3191);
    panda$core$String* $tmp3207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3205, &$s3206);
    panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, forwardEntry3170);
    panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, &$s3209);
    panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3210, backwardEntry3172);
    panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3211, &$s3212);
    (($fn3214) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3213);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry3170, p_out);
    panda$core$String* $tmp3216 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive3215 = $tmp3216;
    panda$core$String* $tmp3218 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive3217 = $tmp3218;
    panda$core$String* $tmp3220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3219, inclusive3151);
    panda$core$String* $tmp3222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3220, &$s3221);
    panda$core$String* $tmp3223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3222, forwardEntryInclusive3215);
    panda$core$String* $tmp3225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3223, &$s3224);
    panda$core$String* $tmp3226 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive3217);
    panda$core$String* $tmp3228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3226, &$s3227);
    panda$core$String* $tmp3229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3225, $tmp3228);
    (($fn3230) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3229);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive3215, p_out);
    panda$core$String* $tmp3232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3231, start3078);
    panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3232, &$s3233);
    panda$core$String* $tmp3235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3234, end3104);
    panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3235, &$s3236);
    panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3237, loopStart3161);
    panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, &$s3239);
    panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3240, loopEnd3165);
    panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, &$s3242);
    (($fn3244) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3243);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive3217, p_out);
    panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3245, start3078);
    panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, &$s3247);
    panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3248, end3104);
    panda$core$String* $tmp3251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, &$s3250);
    panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3251, loopStart3161);
    panda$core$String* $tmp3254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3252, &$s3253);
    panda$core$String* $tmp3255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3254, loopEnd3165);
    panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3255, &$s3256);
    (($fn3258) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3257);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry3172, p_out);
    panda$core$String* $tmp3260 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive3259 = $tmp3260;
    panda$core$String* $tmp3262 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive3261 = $tmp3262;
    panda$core$String* $tmp3264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3263, inclusive3151);
    panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3264, &$s3265);
    panda$core$String* $tmp3267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3266, backwardEntryInclusive3259);
    panda$core$String* $tmp3269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3267, &$s3268);
    panda$core$String* $tmp3270 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive3261);
    panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3270, &$s3271);
    panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3269, $tmp3272);
    (($fn3274) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3273);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive3259, p_out);
    panda$core$String* $tmp3276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3275, start3078);
    panda$core$String* $tmp3278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3276, &$s3277);
    panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3278, end3104);
    panda$core$String* $tmp3281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3279, &$s3280);
    panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3281, loopStart3161);
    panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, &$s3283);
    panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3284, loopEnd3165);
    panda$core$String* $tmp3287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3285, &$s3286);
    (($fn3288) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3287);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive3261, p_out);
    panda$core$String* $tmp3290 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest3289 = $tmp3290;
    panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3291, start3078);
    panda$core$String* $tmp3294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3292, &$s3293);
    panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3294, end3104);
    panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3295, &$s3296);
    panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3297, loopStart3161);
    panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3298, &$s3299);
    panda$core$String* $tmp3301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3300, loopEnd3165);
    panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3301, &$s3302);
    (($fn3304) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3303);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3161, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest3167, p_out);
    panda$core$String* $tmp3306 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc3305 = $tmp3306;
    panda$core$String* $tmp3308 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel3307 = $tmp3308;
    panda$core$String* $tmp3310 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel3309 = $tmp3310;
    panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3311, direction3191);
    panda$core$String* $tmp3314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3312, &$s3313);
    panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3314, forwardLabel3307);
    panda$core$String* $tmp3317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3315, &$s3316);
    panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3317, backwardLabel3309);
    panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3318, &$s3319);
    (($fn3321) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3320);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel3307, p_out);
    panda$core$String* $tmp3323 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta3322 = $tmp3323;
    panda$core$String* $tmp3324 = panda$core$String$convert$R$panda$core$String(numberType3070);
    panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3324, &$s3325);
    panda$core$String* $tmp3327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, forwardDelta3322);
    panda$core$String* $tmp3329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3327, &$s3328);
    panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3329, end3104);
    panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, &$s3331);
    panda$core$String* $tmp3333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3332, index3072);
    panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3333, &$s3334);
    (($fn3336) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3335);
    panda$core$String* $tmp3338 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel3337 = $tmp3338;
    panda$core$String* $tmp3340 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel3339 = $tmp3340;
    panda$core$String* $tmp3342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3341, inclusive3151);
    panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3342, &$s3343);
    panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3344, forwardInclusiveLabel3337);
    panda$core$String* $tmp3347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3345, &$s3346);
    panda$core$String* $tmp3348 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel3339);
    panda$core$String* $tmp3350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3348, &$s3349);
    panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3347, $tmp3350);
    (($fn3352) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3351);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel3337, p_out);
    panda$core$String* $tmp3354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3353, unsigned3174);
    panda$core$String* $tmp3356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3354, &$s3355);
    panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3356, forwardDelta3322);
    panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3357, &$s3358);
    panda$core$String* $tmp3360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, step3116);
    panda$core$String* $tmp3362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3360, &$s3361);
    panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3362, loopInc3305);
    panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, &$s3364);
    panda$core$String* $tmp3366 = panda$core$String$convert$R$panda$core$String(loopEnd3165);
    panda$core$String* $tmp3368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3366, &$s3367);
    panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, $tmp3368);
    (($fn3370) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3369);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel3339, p_out);
    panda$core$String* $tmp3372 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest3371 = $tmp3372;
    panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3373, unsigned3174);
    panda$core$String* $tmp3376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3374, &$s3375);
    panda$core$String* $tmp3377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3376, forwardDelta3322);
    panda$core$String* $tmp3379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3377, &$s3378);
    panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3379, step3116);
    panda$core$String* $tmp3382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3380, &$s3381);
    panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3382, loopInc3305);
    panda$core$String* $tmp3385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3383, &$s3384);
    panda$core$String* $tmp3386 = panda$core$String$convert$R$panda$core$String(loopEnd3165);
    panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, &$s3387);
    panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3385, $tmp3388);
    (($fn3390) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3389);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel3309, p_out);
    panda$core$String* $tmp3392 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta3391 = $tmp3392;
    panda$core$String* $tmp3393 = panda$core$String$convert$R$panda$core$String(numberType3070);
    panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3393, &$s3394);
    panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3395, backwardDelta3391);
    panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3396, &$s3397);
    panda$core$String* $tmp3399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3398, index3072);
    panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3399, &$s3400);
    panda$core$String* $tmp3402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3401, end3104);
    panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3402, &$s3403);
    (($fn3405) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3404);
    panda$core$String* $tmp3407 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel3406 = $tmp3407;
    panda$core$String* $tmp3409 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel3408 = $tmp3409;
    panda$core$String* $tmp3411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3410, inclusive3151);
    panda$core$String* $tmp3413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3411, &$s3412);
    panda$core$String* $tmp3414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, backwardInclusiveLabel3406);
    panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3414, &$s3415);
    panda$core$String* $tmp3417 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel3408);
    panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3417, &$s3418);
    panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3416, $tmp3419);
    (($fn3421) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3420);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel3406, p_out);
    panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3422, unsigned3174);
    panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, &$s3424);
    panda$core$String* $tmp3426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3425, backwardDelta3391);
    panda$core$String* $tmp3428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3426, &$s3427);
    panda$core$String* $tmp3429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3428, step3116);
    panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3429, &$s3430);
    panda$core$String* $tmp3432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3431, loopInc3305);
    panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3432, &$s3433);
    panda$core$String* $tmp3436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3435, loopEnd3165);
    panda$core$String* $tmp3438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3436, &$s3437);
    panda$core$String* $tmp3439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3434, $tmp3438);
    (($fn3440) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3439);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel3408, p_out);
    panda$core$String* $tmp3442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3441, unsigned3174);
    panda$core$String* $tmp3444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3442, &$s3443);
    panda$core$String* $tmp3445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3444, backwardDelta3391);
    panda$core$String* $tmp3447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3445, &$s3446);
    panda$core$String* $tmp3448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3447, step3116);
    panda$core$String* $tmp3450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3448, &$s3449);
    panda$core$String* $tmp3451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3450, loopInc3305);
    panda$core$String* $tmp3453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3451, &$s3452);
    panda$core$String* $tmp3455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3454, loopEnd3165);
    panda$core$String* $tmp3457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3455, &$s3456);
    panda$core$String* $tmp3458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3453, $tmp3457);
    (($fn3459) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3458);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc3305, p_out);
    panda$core$String* $tmp3461 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3460 = $tmp3461;
    panda$core$String* $tmp3462 = panda$core$String$convert$R$panda$core$String(index3072);
    panda$core$String* $tmp3464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3462, &$s3463);
    panda$core$String* $tmp3465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3464, step3116);
    panda$core$String* $tmp3467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3465, &$s3466);
    (($fn3468) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3467);
    panda$core$String* $tmp3470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3469, loopStart3161);
    panda$core$String* $tmp3472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3470, &$s3471);
    (($fn3473) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3472);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3165, p_out);
    panda$core$Object* $tmp3474 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardInclusiveLabel3406));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix3175));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel3339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive3151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned3174));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardLabel3309));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusiveTest3289));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start3078));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody3163));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardLabel3307));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest3167));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusive3261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive3215));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardExclusiveLabel3408));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3032));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel3337));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end3104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepCl3118));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc3460));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step3116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3161));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry3172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr3090));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc3305));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepType3036));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3165));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepField3130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType3042));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt3040));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardDelta3391));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest3371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType3070));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry3170));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1577_93073));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index3072));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive3217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) direction3191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field3060));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta3322));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl3048));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryInclusive3259));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range3030));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Type* $tmp3476 = (($fn3475) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3477 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit($tmp3476);
    if ($tmp3477.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_label, p_target, p_list, p_statements, p_out);
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp3479 = (($fn3478) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3480 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit($tmp3479);
    if ($tmp3480.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_label, p_target, p_list, p_statements, p_out);
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_test, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3485;
    panda$core$String* loopEnd3487;
    org$pandalanguage$pandac$Type* $tmp3482 = (($fn3481) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3483 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3484 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3482, $tmp3483);
    PANDA_ASSERT($tmp3484.value);
    panda$core$String* $tmp3486 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3485 = $tmp3486;
    panda$core$String* $tmp3488 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3487 = $tmp3488;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3489 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3489, p_label, loopEnd3487, loopStart3485);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3489));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3485, p_out);
    panda$core$String* $tmp3491 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3490, $tmp3491);
    panda$core$String* $tmp3494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3492, &$s3493);
    panda$core$String* $tmp3495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3494, loopEnd3487);
    panda$core$String* $tmp3497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3495, &$s3496);
    (($fn3498) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3497);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3499, loopStart3485);
    panda$core$String* $tmp3502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3500, &$s3501);
    (($fn3503) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3502);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3487, p_out);
    panda$core$Object* $tmp3504 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3487));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3485));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3509;
    panda$core$String* loopEnd3511;
    org$pandalanguage$pandac$Type* $tmp3506 = (($fn3505) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3507 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3508 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3506, $tmp3507);
    PANDA_ASSERT($tmp3508.value);
    panda$core$String* $tmp3510 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3509 = $tmp3510;
    panda$core$String* $tmp3512 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3511 = $tmp3512;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3513 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3513, p_label, loopEnd3511, loopStart3509);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3513));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3509, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3515 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3514, $tmp3515);
    panda$core$String* $tmp3518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3516, &$s3517);
    panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3518, loopStart3509);
    panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, &$s3520);
    (($fn3522) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3521);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3511, p_out);
    panda$core$Object* $tmp3523 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3509));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3524;
    panda$core$String* loopEnd3526;
    panda$core$String* $tmp3525 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3524 = $tmp3525;
    panda$core$String* $tmp3527 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3526 = $tmp3527;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3528 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3528, p_label, loopEnd3526, loopStart3524);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3528));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3524, p_out);
    (($fn3530) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3529);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    (($fn3532) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3531);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3526, p_out);
    panda$core$Object* $tmp3533 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3526));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3524));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1779_93534;
    org$pandalanguage$pandac$Variable* v3536;
    {
        $match$1779_93534 = p_target;
        panda$core$Bit $tmp3535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1779_93534->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3535.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3537 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1779_93534->$data + 16));
            v3536 = *$tmp3537;
            panda$core$String* $tmp3538 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3536->type);
            panda$core$String* $tmp3539 = panda$core$String$convert$R$panda$core$String($tmp3538);
            panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3539, &$s3540);
            panda$core$String* $tmp3542 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3536);
            panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3541, $tmp3542);
            panda$core$String* $tmp3545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3543, &$s3544);
            (($fn3546) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3545);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3547 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3536);
                panda$core$String* $tmp3548 = panda$core$String$convert$R$panda$core$String($tmp3547);
                panda$core$String* $tmp3550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3548, &$s3549);
                panda$core$String* $tmp3551 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3550, $tmp3551);
                panda$core$String* $tmp3554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3552, &$s3553);
                (($fn3555) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3554);
            }
            }
            else {
            {
                panda$core$String* $tmp3557 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3536);
                panda$core$String* $tmp3558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3556, $tmp3557);
                panda$core$String* $tmp3560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3558, &$s3559);
                panda$core$String* $tmp3561 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3536);
                panda$core$String* $tmp3562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3560, $tmp3561);
                panda$core$String* $tmp3564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3562, &$s3563);
                (($fn3565) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3564);
            }
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable$Kind p_kind, panda$collections$ImmutableArray* p_decls, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* Iter$1794$93566;
    org$pandalanguage$pandac$IRNode* decl3578;
    org$pandalanguage$pandac$IRNode* $match$1795_133583;
    org$pandalanguage$pandac$IRNode* target3585;
    org$pandalanguage$pandac$IRNode* value3587;
    {
        ITable* $tmp3567 = ((panda$collections$Iterable*) p_decls)->$class->itable;
        while ($tmp3567->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3567 = $tmp3567->next;
        }
        $fn3569 $tmp3568 = $tmp3567->methods[0];
        panda$collections$Iterator* $tmp3570 = $tmp3568(((panda$collections$Iterable*) p_decls));
        Iter$1794$93566 = $tmp3570;
        $l3571:;
        ITable* $tmp3573 = Iter$1794$93566->$class->itable;
        while ($tmp3573->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3573 = $tmp3573->next;
        }
        $fn3575 $tmp3574 = $tmp3573->methods[0];
        panda$core$Bit $tmp3576 = $tmp3574(Iter$1794$93566);
        panda$core$Bit $tmp3577 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3576);
        if (!$tmp3577.value) goto $l3572;
        {
            ITable* $tmp3579 = Iter$1794$93566->$class->itable;
            while ($tmp3579->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3579 = $tmp3579->next;
            }
            $fn3581 $tmp3580 = $tmp3579->methods[1];
            panda$core$Object* $tmp3582 = $tmp3580(Iter$1794$93566);
            decl3578 = ((org$pandalanguage$pandac$IRNode*) $tmp3582);
            {
                $match$1795_133583 = decl3578;
                panda$core$Bit $tmp3584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1795_133583->$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp3584.value) {
                {
                    org$pandalanguage$pandac$IRNode** $tmp3586 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1795_133583->$data + 0));
                    target3585 = *$tmp3586;
                    org$pandalanguage$pandac$IRNode** $tmp3588 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1795_133583->$data + 8));
                    value3587 = *$tmp3588;
                    org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, target3585, value3587, p_out);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3578));
        }
        goto $l3571;
        $l3572:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1794$93566));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1805_93589;
    org$pandalanguage$pandac$Variable* v3596;
    org$pandalanguage$pandac$IRNode* base3600;
    org$pandalanguage$pandac$FieldDecl* field3602;
    panda$core$String* baseRef3604;
    panda$core$String* tmp753606;
    org$pandalanguage$pandac$IRNode* value3614;
    panda$core$Int64 id3616;
    panda$core$String* result3618;
    panda$core$String* tmp763621;
    org$pandalanguage$pandac$IRNode* value3623;
    org$pandalanguage$pandac$ChoiceEntry* ce3625;
    panda$core$Int64 field3627;
    org$pandalanguage$pandac$FieldDecl* data3629;
    org$pandalanguage$pandac$IRNode* fieldRef3633;
    panda$core$String* base3637;
    panda$core$Int64 size3639;
    panda$core$Int64 offset3641;
    panda$core$String* result3643;
    panda$core$String* tmp773670;
    {
        $match$1805_93589 = p_lvalue;
        panda$core$Bit $tmp3590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1805_93589->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp3590.value) {
        {
            panda$core$Object* $tmp3592 = (($fn3591) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$IRNode* $tmp3593 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(((org$pandalanguage$pandac$Compiler*) $tmp3592), p_lvalue);
            panda$core$String* $tmp3594 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3593, p_out);
            return $tmp3594;
        }
        }
        else {
        panda$core$Bit $tmp3595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1805_93589->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3595.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3597 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1805_93589->$data + 16));
            v3596 = *$tmp3597;
            panda$core$String* $tmp3598 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3596);
            return $tmp3598;
        }
        }
        else {
        panda$core$Bit $tmp3599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1805_93589->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp3599.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3601 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1805_93589->$data + 24));
            base3600 = *$tmp3601;
            org$pandalanguage$pandac$FieldDecl** $tmp3603 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1805_93589->$data + 32));
            field3602 = *$tmp3603;
            panda$core$String* $tmp3605 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3600, p_out);
            baseRef3604 = $tmp3605;
            {
                panda$core$String* $tmp3607 = panda$core$String$convert$R$panda$core$String(baseRef3604);
                panda$core$String* $tmp3609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3607, &$s3608);
                panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3609, ((org$pandalanguage$pandac$Symbol*) field3602)->name);
                panda$core$String* $tmp3612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3610, &$s3611);
                tmp753606 = $tmp3612;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef3604));
                return tmp753606;
            }
        }
        }
        else {
        panda$core$Bit $tmp3613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1805_93589->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3613.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3615 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1805_93589->$data + 0));
            value3614 = *$tmp3615;
            panda$core$Int64* $tmp3617 = ((panda$core$Int64*) ((char*) $match$1805_93589->$data + 8));
            id3616 = *$tmp3617;
            panda$core$String* $tmp3619 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value3614, p_out);
            result3618 = $tmp3619;
            panda$core$Int64$wrapper* $tmp3620;
            $tmp3620 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3620->value = id3616;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp3620), ((panda$core$Object*) result3618));
            {
                tmp763621 = result3618;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3618));
                return tmp763621;
            }
        }
        }
        else {
        panda$core$Bit $tmp3622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1805_93589->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp3622.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3624 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1805_93589->$data + 16));
            value3623 = *$tmp3624;
            org$pandalanguage$pandac$ChoiceEntry** $tmp3626 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1805_93589->$data + 24));
            ce3625 = *$tmp3626;
            panda$core$Int64* $tmp3628 = ((panda$core$Int64*) ((char*) $match$1805_93589->$data + 32));
            field3627 = *$tmp3628;
            panda$core$Object* $tmp3630 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce3625->owner->fields, ((panda$core$Int64) { 1 }));
            data3629 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3630);
            panda$core$Bit $tmp3632 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) data3629)->name, &$s3631);
            PANDA_ASSERT($tmp3632.value);
            org$pandalanguage$pandac$IRNode* $tmp3634 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
            org$pandalanguage$pandac$Position $tmp3636 = (($fn3635) p_lvalue->$class->vtable[3])(p_lvalue);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp3634, ((panda$core$Int64) { 15 }), $tmp3636, data3629->type, value3623, data3629);
            fieldRef3633 = $tmp3634;
            panda$core$String* $tmp3638 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, fieldRef3633, p_out);
            base3637 = $tmp3638;
            panda$core$Int64 $tmp3640 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3625->owner);
            size3639 = $tmp3640;
            panda$core$Int64 $tmp3642 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3625, field3627);
            offset3641 = $tmp3642;
            panda$core$String* $tmp3644 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result3643 = $tmp3644;
            org$pandalanguage$pandac$Type* $tmp3646 = (($fn3645) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3647 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3646);
            panda$core$String* $tmp3648 = panda$core$String$convert$R$panda$core$String($tmp3647);
            panda$core$String* $tmp3650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3648, &$s3649);
            panda$core$String* $tmp3651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3650, result3643);
            panda$core$String* $tmp3653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3651, &$s3652);
            org$pandalanguage$pandac$Type* $tmp3655 = (($fn3654) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3656 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3655);
            panda$core$String* $tmp3657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3653, $tmp3656);
            panda$core$String* $tmp3659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3657, &$s3658);
            panda$core$String* $tmp3661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3660, base3637);
            panda$core$String* $tmp3663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3661, &$s3662);
            panda$core$Int64$wrapper* $tmp3664;
            $tmp3664 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3664->value = offset3641;
            panda$core$String* $tmp3665 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3663, ((panda$core$Object*) $tmp3664));
            panda$core$String* $tmp3667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3665, &$s3666);
            panda$core$String* $tmp3668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3659, $tmp3667);
            (($fn3669) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3668);
            {
                panda$core$String* $tmp3672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3671, result3643);
                panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3672, &$s3673);
                tmp773670 = $tmp3674;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base3637));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fieldRef3633));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3643));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data3629));
                }
                return tmp773670;
            }
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
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3675 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$String* $tmp3676 = panda$core$String$convert$R$panda$core$String($tmp3675);
    panda$core$String* $tmp3678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3676, &$s3677);
    panda$core$String* $tmp3679 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$String* $tmp3680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3678, $tmp3679);
    panda$core$String* $tmp3682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3680, &$s3681);
    (($fn3683) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3682);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit) { p_value != NULL }).value) {
    {
        panda$core$String* $tmp3685 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
        panda$core$String* $tmp3686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3684, $tmp3685);
        panda$core$String* $tmp3688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3686, &$s3687);
        (($fn3689) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3688);
    }
    }
    else {
    {
        (($fn3691) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3690);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3695;
    panda$core$Int64 $tmp3692 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3693 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3692, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3693.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3694 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3694);
    }
    }
    panda$core$Int64 $tmp3696 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3695, ((panda$core$Int64) { 0 }), $tmp3696, ((panda$core$Bit) { false }));
    int64_t $tmp3698 = $tmp3695.min.value;
    panda$core$Int64 i3697 = { $tmp3698 };
    int64_t $tmp3700 = $tmp3695.max.value;
    bool $tmp3701 = $tmp3695.inclusive.value;
    if ($tmp3701) goto $l3708; else goto $l3709;
    $l3708:;
    if ($tmp3698 <= $tmp3700) goto $l3702; else goto $l3704;
    $l3709:;
    if ($tmp3698 < $tmp3700) goto $l3702; else goto $l3704;
    $l3702:;
    {
        panda$core$Object* $tmp3710 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3697);
        panda$core$Bit $tmp3714;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3710)->loopLabel != NULL }).value) goto $l3711; else goto $l3712;
        $l3711:;
        panda$core$Bit $tmp3715 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3710)->loopLabel, p_name);
        $tmp3714 = $tmp3715;
        goto $l3713;
        $l3712:;
        $tmp3714 = ((panda$core$Bit) { false });
        goto $l3713;
        $l3713:;
        if ($tmp3714.value) {
        {
            panda$core$Object* $tmp3716 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3697);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3716);
        }
        }
    }
    $l3705:;
    int64_t $tmp3718 = $tmp3700 - i3697.value;
    if ($tmp3701) goto $l3719; else goto $l3720;
    $l3719:;
    if ((uint64_t) $tmp3718 >= 1) goto $l3717; else goto $l3704;
    $l3720:;
    if ((uint64_t) $tmp3718 > 1) goto $l3717; else goto $l3704;
    $l3717:;
    i3697.value += 1;
    goto $l3702;
    $l3704:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3723;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3724 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3723 = $tmp3724;
    panda$core$String* $tmp3726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3725, desc3723->breakLabel);
    panda$core$String* $tmp3728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3726, &$s3727);
    (($fn3729) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3728);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc3723));
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3730;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3731 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3730 = $tmp3731;
    panda$core$String* $tmp3733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3732, desc3730->continueLabel);
    panda$core$String* $tmp3735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3733, &$s3734);
    (($fn3736) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3735);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc3730));
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_message, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3738 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3737, $tmp3738);
    panda$core$String* $tmp3741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3739, &$s3740);
    (($fn3742) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3741);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* Iter$1878$93750;
    org$pandalanguage$pandac$IRNode* w3762;
    org$pandalanguage$pandac$IRNode* $match$1879_133767;
    panda$collections$ImmutableArray* tests3769;
    panda$collections$ImmutableArray* statements3771;
    panda$collections$Iterator* Iter$1881$213773;
    org$pandalanguage$pandac$IRNode* test3785;
    panda$core$String* $tmp3744 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    panda$core$String* $tmp3745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3743, $tmp3744);
    panda$core$String* $tmp3747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3745, &$s3746);
    (($fn3748) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3747);
    panda$core$Int64 $tmp3749 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3749;
    {
        ITable* $tmp3751 = ((panda$collections$Iterable*) p_whens)->$class->itable;
        while ($tmp3751->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3751 = $tmp3751->next;
        }
        $fn3753 $tmp3752 = $tmp3751->methods[0];
        panda$collections$Iterator* $tmp3754 = $tmp3752(((panda$collections$Iterable*) p_whens));
        Iter$1878$93750 = $tmp3754;
        $l3755:;
        ITable* $tmp3757 = Iter$1878$93750->$class->itable;
        while ($tmp3757->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3757 = $tmp3757->next;
        }
        $fn3759 $tmp3758 = $tmp3757->methods[0];
        panda$core$Bit $tmp3760 = $tmp3758(Iter$1878$93750);
        panda$core$Bit $tmp3761 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3760);
        if (!$tmp3761.value) goto $l3756;
        {
            ITable* $tmp3763 = Iter$1878$93750->$class->itable;
            while ($tmp3763->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3763 = $tmp3763->next;
            }
            $fn3765 $tmp3764 = $tmp3763->methods[1];
            panda$core$Object* $tmp3766 = $tmp3764(Iter$1878$93750);
            w3762 = ((org$pandalanguage$pandac$IRNode*) $tmp3766);
            {
                $match$1879_133767 = w3762;
                panda$core$Bit $tmp3768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1879_133767->$rawValue, ((panda$core$Int64) { 43 }));
                if ($tmp3768.value) {
                {
                    panda$collections$ImmutableArray** $tmp3770 = ((panda$collections$ImmutableArray**) ((char*) $match$1879_133767->$data + 16));
                    tests3769 = *$tmp3770;
                    panda$collections$ImmutableArray** $tmp3772 = ((panda$collections$ImmutableArray**) ((char*) $match$1879_133767->$data + 24));
                    statements3771 = *$tmp3772;
                    {
                        ITable* $tmp3774 = ((panda$collections$Iterable*) tests3769)->$class->itable;
                        while ($tmp3774->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3774 = $tmp3774->next;
                        }
                        $fn3776 $tmp3775 = $tmp3774->methods[0];
                        panda$collections$Iterator* $tmp3777 = $tmp3775(((panda$collections$Iterable*) tests3769));
                        Iter$1881$213773 = $tmp3777;
                        $l3778:;
                        ITable* $tmp3780 = Iter$1881$213773->$class->itable;
                        while ($tmp3780->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3780 = $tmp3780->next;
                        }
                        $fn3782 $tmp3781 = $tmp3780->methods[0];
                        panda$core$Bit $tmp3783 = $tmp3781(Iter$1881$213773);
                        panda$core$Bit $tmp3784 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3783);
                        if (!$tmp3784.value) goto $l3779;
                        {
                            ITable* $tmp3786 = Iter$1881$213773->$class->itable;
                            while ($tmp3786->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3786 = $tmp3786->next;
                            }
                            $fn3788 $tmp3787 = $tmp3786->methods[1];
                            panda$core$Object* $tmp3789 = $tmp3787(Iter$1881$213773);
                            test3785 = ((org$pandalanguage$pandac$IRNode*) $tmp3789);
                            panda$core$Object* $tmp3792 = (($fn3791) self->compiler->$class->vtable[2])(self->compiler);
                            panda$core$UInt64 $tmp3793 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(((org$pandalanguage$pandac$Compiler*) $tmp3792), test3785);
                            panda$core$UInt64$wrapper* $tmp3794;
                            $tmp3794 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
                            $tmp3794->value = $tmp3793;
                            panda$core$String* $tmp3795 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3790, ((panda$core$Object*) $tmp3794));
                            panda$core$String* $tmp3797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3795, &$s3796);
                            (($fn3798) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3797);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test3785));
                        }
                        goto $l3778;
                        $l3779:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1881$213773));
                    }
                    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3771, p_out);
                    (($fn3800) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3799);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3762));
        }
        goto $l3755;
        $l3756:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1878$93750));
    }
    if (((panda$core$Bit) { p_other != NULL }).value) {
    {
        (($fn3802) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3801);
        org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_other, p_out);
    }
    }
    panda$core$Int64 $tmp3803 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3803;
    (($fn3805) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3804);
}
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_clear, panda$io$IndentedOutputStream* p_out) {
}
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { true }), p_out);
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1915_93806;
    org$pandalanguage$pandac$IRNode* left3808;
    org$pandalanguage$pandac$parser$Token$Kind op3810;
    org$pandalanguage$pandac$IRNode* right3812;
    panda$collections$ImmutableArray* statements3815;
    org$pandalanguage$pandac$Type* target3818;
    org$pandalanguage$pandac$MethodRef* mref3820;
    panda$collections$ImmutableArray* args3822;
    org$pandalanguage$pandac$IRNode* base3825;
    org$pandalanguage$pandac$IRNode* stmt3827;
    org$pandalanguage$pandac$IRNode* test3831;
    panda$collections$ImmutableArray* ifTrue3833;
    org$pandalanguage$pandac$IRNode* ifFalse3835;
    panda$core$String* label3838;
    org$pandalanguage$pandac$IRNode* target3840;
    org$pandalanguage$pandac$IRNode* list3842;
    panda$collections$ImmutableArray* statements3844;
    panda$core$String* label3847;
    org$pandalanguage$pandac$IRNode* test3849;
    panda$collections$ImmutableArray* statements3851;
    panda$core$String* label3854;
    panda$collections$ImmutableArray* statements3856;
    org$pandalanguage$pandac$IRNode* test3858;
    panda$core$String* label3861;
    panda$collections$ImmutableArray* statements3863;
    org$pandalanguage$pandac$Variable$Kind kind3866;
    panda$collections$ImmutableArray* decls3868;
    org$pandalanguage$pandac$IRNode* value3871;
    panda$core$String* label3874;
    panda$core$String* label3877;
    org$pandalanguage$pandac$IRNode* test3880;
    org$pandalanguage$pandac$IRNode* msg3882;
    org$pandalanguage$pandac$IRNode* value3885;
    panda$collections$ImmutableArray* whens3887;
    panda$collections$ImmutableArray* other3889;
    org$pandalanguage$pandac$IRNode* base3892;
    panda$core$Int64 id3894;
    {
        $match$1915_93806 = p_stmt;
        panda$core$Bit $tmp3807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp3807.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3809 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 24));
            left3808 = *$tmp3809;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3811 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1915_93806->$data + 32));
            op3810 = *$tmp3811;
            org$pandalanguage$pandac$IRNode** $tmp3813 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 40));
            right3812 = *$tmp3813;
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, left3808, right3812, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp3814.value) {
        {
            panda$collections$ImmutableArray** $tmp3816 = ((panda$collections$ImmutableArray**) ((char*) $match$1915_93806->$data + 16));
            statements3815 = *$tmp3816;
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3815, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp3817.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3819 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1915_93806->$data + 16));
            target3818 = *$tmp3819;
            org$pandalanguage$pandac$MethodRef** $tmp3821 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1915_93806->$data + 24));
            mref3820 = *$tmp3821;
            panda$collections$ImmutableArray** $tmp3823 = ((panda$collections$ImmutableArray**) ((char*) $match$1915_93806->$data + 32));
            args3822 = *$tmp3823;
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, target3818, mref3820, args3822, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp3824.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3826 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 0));
            base3825 = *$tmp3826;
            org$pandalanguage$pandac$IRNode** $tmp3828 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 8));
            stmt3827 = *$tmp3828;
            panda$core$String* $tmp3829 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3825, stmt3827, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp3830.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3832 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 16));
            test3831 = *$tmp3832;
            panda$collections$ImmutableArray** $tmp3834 = ((panda$collections$ImmutableArray**) ((char*) $match$1915_93806->$data + 24));
            ifTrue3833 = *$tmp3834;
            org$pandalanguage$pandac$IRNode** $tmp3836 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 32));
            ifFalse3835 = *$tmp3836;
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3831, ifTrue3833, ifFalse3835, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp3837.value) {
        {
            panda$core$String** $tmp3839 = ((panda$core$String**) ((char*) $match$1915_93806->$data + 16));
            label3838 = *$tmp3839;
            org$pandalanguage$pandac$IRNode** $tmp3841 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 24));
            target3840 = *$tmp3841;
            org$pandalanguage$pandac$IRNode** $tmp3843 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 32));
            list3842 = *$tmp3843;
            panda$collections$ImmutableArray** $tmp3845 = ((panda$collections$ImmutableArray**) ((char*) $match$1915_93806->$data + 40));
            statements3844 = *$tmp3845;
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3838, target3840, list3842, statements3844, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp3846.value) {
        {
            panda$core$String** $tmp3848 = ((panda$core$String**) ((char*) $match$1915_93806->$data + 16));
            label3847 = *$tmp3848;
            org$pandalanguage$pandac$IRNode** $tmp3850 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 24));
            test3849 = *$tmp3850;
            panda$collections$ImmutableArray** $tmp3852 = ((panda$collections$ImmutableArray**) ((char*) $match$1915_93806->$data + 32));
            statements3851 = *$tmp3852;
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3847, test3849, statements3851, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp3853.value) {
        {
            panda$core$String** $tmp3855 = ((panda$core$String**) ((char*) $match$1915_93806->$data + 16));
            label3854 = *$tmp3855;
            panda$collections$ImmutableArray** $tmp3857 = ((panda$collections$ImmutableArray**) ((char*) $match$1915_93806->$data + 24));
            statements3856 = *$tmp3857;
            org$pandalanguage$pandac$IRNode** $tmp3859 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 32));
            test3858 = *$tmp3859;
            org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, label3854, statements3856, test3858, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp3860.value) {
        {
            panda$core$String** $tmp3862 = ((panda$core$String**) ((char*) $match$1915_93806->$data + 16));
            label3861 = *$tmp3862;
            panda$collections$ImmutableArray** $tmp3864 = ((panda$collections$ImmutableArray**) ((char*) $match$1915_93806->$data + 24));
            statements3863 = *$tmp3864;
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3861, statements3863, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp3865.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp3867 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$1915_93806->$data + 16));
            kind3866 = *$tmp3867;
            panda$collections$ImmutableArray** $tmp3869 = ((panda$collections$ImmutableArray**) ((char*) $match$1915_93806->$data + 24));
            decls3868 = *$tmp3869;
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, kind3866, decls3868, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp3870.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3872 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 16));
            value3871 = *$tmp3872;
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, value3871, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp3873.value) {
        {
            panda$core$String** $tmp3875 = ((panda$core$String**) ((char*) $match$1915_93806->$data + 16));
            label3874 = *$tmp3875;
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3874, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3876.value) {
        {
            panda$core$String** $tmp3878 = ((panda$core$String**) ((char*) $match$1915_93806->$data + 16));
            label3877 = *$tmp3878;
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3877, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp3879.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3881 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 16));
            test3880 = *$tmp3881;
            org$pandalanguage$pandac$IRNode** $tmp3883 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 24));
            msg3882 = *$tmp3883;
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3880, msg3882, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp3884.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3886 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 16));
            value3885 = *$tmp3886;
            panda$collections$ImmutableArray** $tmp3888 = ((panda$collections$ImmutableArray**) ((char*) $match$1915_93806->$data + 24));
            whens3887 = *$tmp3888;
            panda$collections$ImmutableArray** $tmp3890 = ((panda$collections$ImmutableArray**) ((char*) $match$1915_93806->$data + 32));
            other3889 = *$tmp3890;
            org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(self, value3885, whens3887, other3889, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1915_93806->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3891.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3893 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1915_93806->$data + 0));
            base3892 = *$tmp3893;
            panda$core$Int64* $tmp3895 = ((panda$core$Int64*) ((char*) $match$1915_93806->$data + 8));
            id3894 = *$tmp3895;
            panda$core$Int64$wrapper* $tmp3896;
            $tmp3896 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3896->value = id3894;
            panda$core$String* $tmp3897 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3892, p_out);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp3896), ((panda$core$Object*) $tmp3897));
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
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result3898;
    panda$core$String* tmp783908;
    panda$core$String* tmp793911;
    org$pandalanguage$pandac$Type* $tmp3899 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3900 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3899);
    result3898 = $tmp3900;
    panda$core$Bit $tmp3902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp3901 = $tmp3902.value;
    if (!$tmp3901) goto $l3903;
    panda$core$Bit $tmp3905 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3898, &$s3904);
    panda$core$Bit $tmp3906 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3905);
    $tmp3901 = $tmp3906.value;
    $l3903:;
    panda$core$Bit $tmp3907 = { $tmp3901 };
    if ($tmp3907.value) {
    {
        {
            panda$core$String* $tmp3910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3898, &$s3909);
            tmp783908 = $tmp3910;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3898));
            return tmp783908;
        }
    }
    }
    {
        tmp793911 = result3898;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3898));
        return tmp793911;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    panda$core$String* separator3925;
    panda$collections$Iterator* Iter$1979$93935;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3947;
    panda$io$MemoryOutputStream* bodyBuffer3968;
    panda$io$IndentedOutputStream* indentedBody3970;
    panda$collections$Iterator* Iter$1988$133973;
    org$pandalanguage$pandac$FieldDecl* f3988;
    panda$collections$Iterator* Iter$1997$94008;
    org$pandalanguage$pandac$IRNode* s4020;
    panda$core$Object* $tmp3913 = (($fn3912) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp3914 = panda$collections$Stack$peek$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp3913)->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3914)) == ((panda$core$Object*) p_m->owner) }).value);
    {
        self->currentMethod = p_m;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentMethod));
    }
    {
        self->currentBlock = &$s3915;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentBlock));
    }
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3916 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3917 = panda$core$String$convert$R$panda$core$String($tmp3916);
    panda$core$String* $tmp3919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3917, &$s3918);
    panda$core$String* $tmp3920 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3919, $tmp3920);
    panda$core$String* $tmp3923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3921, &$s3922);
    (($fn3924) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3923);
    separator3925 = &$s3926;
    panda$core$Bit $tmp3927 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3928 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3927);
    if ($tmp3928.value) {
    {
        panda$core$String* $tmp3929 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3930 = panda$core$String$convert$R$panda$core$String($tmp3929);
        panda$core$String* $tmp3932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3930, &$s3931);
        (($fn3933) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3932);
        {
            separator3925 = &$s3934;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3925));
        }
    }
    }
    {
        ITable* $tmp3936 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3936->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3936 = $tmp3936->next;
        }
        $fn3938 $tmp3937 = $tmp3936->methods[0];
        panda$collections$Iterator* $tmp3939 = $tmp3937(((panda$collections$Iterable*) p_m->parameters));
        Iter$1979$93935 = $tmp3939;
        $l3940:;
        ITable* $tmp3942 = Iter$1979$93935->$class->itable;
        while ($tmp3942->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3942 = $tmp3942->next;
        }
        $fn3944 $tmp3943 = $tmp3942->methods[0];
        panda$core$Bit $tmp3945 = $tmp3943(Iter$1979$93935);
        panda$core$Bit $tmp3946 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3945);
        if (!$tmp3946.value) goto $l3941;
        {
            ITable* $tmp3948 = Iter$1979$93935->$class->itable;
            while ($tmp3948->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3948 = $tmp3948->next;
            }
            $fn3950 $tmp3949 = $tmp3948->methods[1];
            panda$core$Object* $tmp3951 = $tmp3949(Iter$1979$93935);
            p3947 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3951);
            panda$core$String* $tmp3952 = panda$core$String$convert$R$panda$core$String(separator3925);
            panda$core$String* $tmp3954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3952, &$s3953);
            panda$core$String* $tmp3955 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3947->type);
            panda$core$String* $tmp3956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3954, $tmp3955);
            panda$core$String* $tmp3958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3956, &$s3957);
            panda$core$String* $tmp3959 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3947->name);
            panda$core$String* $tmp3960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3958, $tmp3959);
            panda$core$String* $tmp3962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3960, &$s3961);
            (($fn3963) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3962);
            {
                separator3925 = &$s3964;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3925));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p3947));
        }
        goto $l3940;
        $l3941:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1979$93935));
    }
    (($fn3966) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3965);
    panda$core$Int64 $tmp3967 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3967;
    panda$io$MemoryOutputStream* $tmp3969 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp3969);
    bodyBuffer3968 = $tmp3969;
    panda$io$IndentedOutputStream* $tmp3971 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3971, ((panda$io$OutputStream*) bodyBuffer3968));
    indentedBody3970 = $tmp3971;
    panda$core$Bit $tmp3972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp3972.value) {
    {
        {
            panda$core$Object* $tmp3975 = (($fn3974) self->compiler->$class->vtable[2])(self->compiler);
            panda$collections$ListView* $tmp3976 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp3975), p_m->owner);
            ITable* $tmp3977 = ((panda$collections$Iterable*) $tmp3976)->$class->itable;
            while ($tmp3977->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3977 = $tmp3977->next;
            }
            $fn3979 $tmp3978 = $tmp3977->methods[0];
            panda$collections$Iterator* $tmp3980 = $tmp3978(((panda$collections$Iterable*) $tmp3976));
            Iter$1988$133973 = $tmp3980;
            $l3981:;
            ITable* $tmp3983 = Iter$1988$133973->$class->itable;
            while ($tmp3983->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3983 = $tmp3983->next;
            }
            $fn3985 $tmp3984 = $tmp3983->methods[0];
            panda$core$Bit $tmp3986 = $tmp3984(Iter$1988$133973);
            panda$core$Bit $tmp3987 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3986);
            if (!$tmp3987.value) goto $l3982;
            {
                ITable* $tmp3989 = Iter$1988$133973->$class->itable;
                while ($tmp3989->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3989 = $tmp3989->next;
                }
                $fn3991 $tmp3990 = $tmp3989->methods[1];
                panda$core$Object* $tmp3992 = $tmp3990(Iter$1988$133973);
                f3988 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3992);
                panda$core$Object* $tmp3994 = (($fn3993) self->compiler->$class->vtable[2])(self->compiler);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp3994), f3988);
                panda$core$Object* $tmp3997 = (($fn3996) self->compiler->$class->vtable[2])(self->compiler);
                panda$core$Bit $tmp3998 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3997), f3988->type);
                bool $tmp3995 = $tmp3998.value;
                if (!$tmp3995) goto $l3999;
                panda$core$Bit $tmp4001 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) f3988)->name, &$s4000);
                $tmp3995 = $tmp4001.value;
                $l3999:;
                panda$core$Bit $tmp4002 = { $tmp3995 };
                if ($tmp4002.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4003 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                    org$pandalanguage$pandac$IRNode* $tmp4004 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                    org$pandalanguage$pandac$Type* $tmp4005 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4004, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4005);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp4003, ((panda$core$Int64) { 15 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f3988->type, $tmp4004, f3988);
                    org$pandalanguage$pandac$IRNode* $tmp4006 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                    org$pandalanguage$pandac$Type* $tmp4007 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(f3988->type);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4006, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4007);
                    org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, $tmp4003, $tmp4006, indentedBody3970);
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f3988));
            }
            goto $l3981;
            $l3982:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1988$133973));
        }
    }
    }
    {
        ITable* $tmp4009 = ((panda$collections$Iterable*) p_body)->$class->itable;
        while ($tmp4009->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4009 = $tmp4009->next;
        }
        $fn4011 $tmp4010 = $tmp4009->methods[0];
        panda$collections$Iterator* $tmp4012 = $tmp4010(((panda$collections$Iterable*) p_body));
        Iter$1997$94008 = $tmp4012;
        $l4013:;
        ITable* $tmp4015 = Iter$1997$94008->$class->itable;
        while ($tmp4015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4015 = $tmp4015->next;
        }
        $fn4017 $tmp4016 = $tmp4015->methods[0];
        panda$core$Bit $tmp4018 = $tmp4016(Iter$1997$94008);
        panda$core$Bit $tmp4019 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4018);
        if (!$tmp4019.value) goto $l4014;
        {
            ITable* $tmp4021 = Iter$1997$94008->$class->itable;
            while ($tmp4021->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4021 = $tmp4021->next;
            }
            $fn4023 $tmp4022 = $tmp4021->methods[1];
            panda$core$Object* $tmp4024 = $tmp4022(Iter$1997$94008);
            s4020 = ((org$pandalanguage$pandac$IRNode*) $tmp4024);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4020, indentedBody3970);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s4020));
        }
        goto $l4013;
        $l4014:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1997$94008));
    }
    panda$core$String* $tmp4025 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn4026) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp4025);
    panda$core$String* $tmp4027 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3968);
    (($fn4028) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp4027);
    panda$core$Int64 $tmp4029 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp4029;
    (($fn4031) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s4030);
    {
        self->currentMethod = NULL;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentMethod));
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indentedBody3970));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3925));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bodyBuffer3968));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path4032;
    PANDA_ASSERT(((panda$core$Bit) { self->currentClass == NULL }).value);
    {
        self->currentClass = p_cl;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentClass));
    }
    panda$collections$Set$clear(self->imports);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$io$MemoryOutputStream$clear(self->declarations);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$collections$Set$clear(self->declared);
    panda$collections$Set$clear(self->writtenTypes);
    panda$collections$Set$clear(self->writtenWrappers);
    panda$collections$HashMap$clear(self->classConstants);
    panda$collections$IdentityMap$clear(self->variableNames);
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$clear(self->reusedValues);
    panda$collections$IdentityMap$clear(self->methodShims);
    panda$io$File* $tmp4034 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s4033);
    path4032 = $tmp4034;
    panda$io$File* $tmp4035 = panda$io$File$parent$R$panda$io$File$Q(path4032);
    panda$io$File$createDirectories($tmp4035);
    {
        panda$io$IndentedOutputStream* $tmp4036 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$OutputStream* $tmp4037 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path4032);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp4036, $tmp4037);
        self->out = $tmp4036;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
    }
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4038 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Object* $tmp4040 = (($fn4039) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Bit $tmp4041 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp4040), p_cl);
    if ($tmp4041.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4042 = org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path4032));
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    {
        self->currentClass = NULL;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentClass));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp4043 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn4044) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp4043);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp4045 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn4046) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp4045);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp4047 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn4048) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp4047);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp4049 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn4050) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp4049);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp4051 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn4052) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp4051);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn4053) self->out->out->$class->vtable[1])(self->out->out);
}
void org$pandalanguage$pandac$CCodeGenerator$cleanup(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->outDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->strings));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->imports));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->hCodeGen));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentClass));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->extraEffects));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->declarations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->types));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->methodsBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->methods));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->methodHeaderBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->methodHeader));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->wrapperShimsBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->wrapperShims));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->shimsBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->shims));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->declared));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->writtenTypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->writtenWrappers));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->classConstants));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->variableNames));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentBlock));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentMethod));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->loopDescriptors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->reusedValues));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->methodShims));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->inlineContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentlyInlining));
}

