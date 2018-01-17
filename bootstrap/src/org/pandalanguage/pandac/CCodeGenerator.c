#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
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
#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Key.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Compiler.h"
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
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef void (*$fn67)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn122)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn140)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn167)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn173)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn179)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn214)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn220)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn226)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn317)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn323)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn329)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn358)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn381)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn387)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn393)(panda$collections$Iterator*);
typedef void (*$fn401)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn440)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn446)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn483)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn528)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn533)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn554)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn562)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn571)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn574)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn580)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn604)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn634)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn642)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn682)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn687)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn708)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn716)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn719)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn729)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn735)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn741)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn770)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn798)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn804)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn810)(panda$collections$Iterator*);
typedef void (*$fn818)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn902)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn908)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn914)(panda$collections$Iterator*);
typedef void (*$fn922)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn942)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn998)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1016)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1037)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1078)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1091)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1101)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1104)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1116)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1122)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1135)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1145)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1148)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1160)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1211)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1224)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1250)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1252)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1268)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn1279)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1296)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1330)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1338)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1346)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1349)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1356)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1373)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1386)(panda$collections$CollectionView*);
typedef void (*$fn1408)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1559)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1579)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1637)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1642)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1679)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1690)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1694)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1700)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1706)(panda$collections$Iterator*);
typedef void (*$fn1714)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1717)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1750)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1756)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1772)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1782)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1786)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1793)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1797)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1804)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1807)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1820)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1966)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2017)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2039)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2056)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2060)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2100)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2105)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2111)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2117)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2125)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn2132)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2137)(panda$collections$CollectionView*);
typedef void (*$fn2148)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2163)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2168)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2187)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2192)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2243)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2245)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2258)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2267)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2278)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2286)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2291)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2299)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2304)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2429)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2434)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2440)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2446)(panda$collections$Iterator*);
typedef void (*$fn2450)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2470)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2477)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2500)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2511)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2570)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2575)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2608)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2618)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2623)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2627)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2633)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2639)(panda$collections$Iterator*);
typedef void (*$fn2641)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2642)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2645)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2652)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2654)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2656)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2658)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2659)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2662)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2666)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2674)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2690)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2697)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2718)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2732)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2744)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2754)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2813)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2860)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2875)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2892)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2898)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2903)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2904)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2907)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2911)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2919)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2923)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2939)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2946)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2967)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2981)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2993)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3001)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3008)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3020)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3030)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3073)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3085)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3101)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3115)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3129)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3145)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3159)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3175)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3192)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3207)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3261)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3276)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3292)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3311)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3330)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3344)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3345)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3348)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3351)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3369)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3374)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3375)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3393)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3401)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3403)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3416)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3425)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3435)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3439)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3445)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3451)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn3502)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3512)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3521)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3536)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3549)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3555)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3557)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3595)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3608)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3614)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3619)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3625)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3631)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3642)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3648)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3654)(panda$collections$Iterator*);
typedef void (*$fn3662)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3664)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3666)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3669)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3779)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3788)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3793)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3799)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3805)(panda$collections$Iterator*);
typedef void (*$fn3818)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3821)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3834)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3840)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3846)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3864)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3870)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3876)(panda$collections$Iterator*);
typedef void (*$fn3879)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3881)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3884)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3896)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3898)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3900)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3902)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3904)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3905)(panda$io$OutputStream*);

static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x28", 2, 14382, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x73\x65\x6c\x66", 5, 14792042467, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6d", 12, -5595348649711353309, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2a", 9, 1496394141948660748, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x73\x65\x6c\x66\x2d\x3e\x76\x61\x6c\x75\x65", 12, 3684417363826496863, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x31\x2c\x20", 5, 15122232102, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x31\x2c\x20", 5, 15122232102, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1061 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s1180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s1194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20", 4, 137658487, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20", 4, 137372859, NULL };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s1317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s1323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s1421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 14, 9153752889249827899, NULL };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d", 7, 157293860332681, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, 2191018519584705024, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s1759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 12, -1785576568693804538, NULL };
static panda$core$String $s1769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x63\x6c\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 27, 7283889564528102738, NULL };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x20\x3d\x20\x31\x3b", 15, -7616502316629902533, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s1802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 14, 9153752889249827899, NULL };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 32, -2435628749655888173, NULL };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x2e\x76\x61\x6c\x75\x65\x20\x3d\x20\x31\x3b", 21, 5666803292027080506, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -5089590097621792313, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 2848555729212071077, NULL };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x73\x65\x6c\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d\x20\x3d\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x46\x72\x65\x65\x28", 10, -5790438204225352665, NULL };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x69\x6e\x2e\x76\x61\x6c\x75\x65\x3b", 11, -3956212002962864875, NULL };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x61\x78\x2e\x76\x61\x6c\x75\x65\x3b", 11, -4041768404061004273, NULL };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20\x31\x3b", 12, -4476855678279854640, NULL };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x61\x72\x74\x2e\x76\x61\x6c\x75\x65\x3b", 13, 3588086193908855763, NULL };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x65\x6e\x64\x2e\x76\x61\x6c\x75\x65\x3b", 11, 5794120589201096528, NULL };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x65\x70\x2e\x76\x61\x6c\x75\x65\x3b", 12, -1565217378717073995, NULL };
static panda$core$String $s3023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s3025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s3054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x30\x3b", 5, 13904243334, NULL };
static panda$core$String $s3074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s3107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2d\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s3274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x2d", 5, 13904537533, NULL };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x2d", 4, 137665772, NULL };
static panda$core$String $s3320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7b", 14, 1197661341919403142, NULL };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x6d\x73\x65\x74\x28\x26", 8, 22623213602606430, NULL };
static panda$core$String $s3429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x30\x2c\x20\x73\x69\x7a\x65\x6f\x66\x28", 12, 4086987682289124441, NULL };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s3516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s3519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s3525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20", 3, 1462916, NULL };
static panda$core$String $s3527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x63\x68\x61\x72\x2a\x29\x20", 9, 1531222690101128410, NULL };
static panda$core$String $s3529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s3533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s3591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x41\x4e\x44\x41\x5f\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s3656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s3663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x3b", 6, 2103477946177, NULL };
static panda$core$String $s3665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6c\x74\x3a", 8, 21658216358330300, NULL };
static panda$core$String $s3668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s3789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s3816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s3883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$File* p_outDir) {
    self->compiler = NULL;
    self->currentClass = NULL;
    self->extraEffects = NULL;
    self->currentBlock = NULL;
    self->currentMethod = NULL;
    panda$io$MemoryOutputStream* $tmp1 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp1->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp1->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp1);
    self->strings = $tmp1;
    panda$collections$Set* $tmp3 = (panda$collections$Set*) pandaZAlloc(24);
    $tmp3->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp3->refCount.value = 1;
    panda$collections$Set$init($tmp3);
    self->imports = $tmp3;
    self->currentClass = NULL;
    panda$collections$Array* $tmp5 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5->refCount.value = 1;
    panda$collections$Array$init($tmp5);
    self->extraEffects = $tmp5;
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp7->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp7->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp7);
    self->declarations = $tmp7;
    panda$io$MemoryOutputStream* $tmp9 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp9->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp9);
    self->types = $tmp9;
    panda$io$MemoryOutputStream* $tmp11 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp11->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp11);
    self->methodsBuffer = $tmp11;
    panda$io$IndentedOutputStream* $tmp13 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp13->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp13->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp13, ((panda$io$OutputStream*) self->methodsBuffer));
    self->methods = $tmp13;
    panda$io$MemoryOutputStream* $tmp15 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp15->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp15->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp15);
    self->methodHeaderBuffer = $tmp15;
    panda$io$IndentedOutputStream* $tmp17 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp17->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp17->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp17, ((panda$io$OutputStream*) self->methodHeaderBuffer));
    self->methodHeader = $tmp17;
    panda$io$MemoryOutputStream* $tmp19 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp19->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp19->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp19);
    self->wrapperShimsBuffer = $tmp19;
    panda$io$IndentedOutputStream* $tmp21 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp21->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp21->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp21, ((panda$io$OutputStream*) self->wrapperShimsBuffer));
    self->wrapperShims = $tmp21;
    panda$io$MemoryOutputStream* $tmp23 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp23->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp23->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp23);
    self->shimsBuffer = $tmp23;
    panda$io$IndentedOutputStream* $tmp25 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp25->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp25->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp25, ((panda$io$OutputStream*) self->shimsBuffer));
    self->shims = $tmp25;
    panda$collections$Set* $tmp27 = (panda$collections$Set*) pandaZAlloc(24);
    $tmp27->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp27->refCount.value = 1;
    panda$collections$Set$init($tmp27);
    self->declared = $tmp27;
    panda$collections$Set* $tmp29 = (panda$collections$Set*) pandaZAlloc(24);
    $tmp29->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp29->refCount.value = 1;
    panda$collections$Set$init($tmp29);
    self->writtenTypes = $tmp29;
    panda$collections$Set* $tmp31 = (panda$collections$Set*) pandaZAlloc(24);
    $tmp31->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp31->refCount.value = 1;
    panda$collections$Set$init($tmp31);
    self->writtenWrappers = $tmp31;
    panda$collections$HashMap* $tmp33 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp33->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp33->refCount.value = 1;
    panda$collections$HashMap$init($tmp33);
    self->classConstants = $tmp33;
    panda$collections$IdentityMap* $tmp35 = (panda$collections$IdentityMap*) pandaZAlloc(56);
    $tmp35->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp35->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp35);
    self->variableNames = $tmp35;
    panda$collections$Stack* $tmp37 = (panda$collections$Stack*) pandaZAlloc(24);
    $tmp37->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp37->refCount.value = 1;
    panda$collections$Stack$init($tmp37);
    self->loopDescriptors = $tmp37;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap* $tmp39 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp39->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp39->refCount.value = 1;
    panda$collections$HashMap$init($tmp39);
    self->reusedValues = $tmp39;
    panda$collections$IdentityMap* $tmp41 = (panda$collections$IdentityMap*) pandaZAlloc(56);
    $tmp41->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp41->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp41);
    self->methodShims = $tmp41;
    panda$collections$Stack* $tmp43 = (panda$collections$Stack*) pandaZAlloc(24);
    $tmp43->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp43->refCount.value = 1;
    panda$collections$Stack$init($tmp43);
    self->inlineContext = $tmp43;
    panda$collections$IdentityMap* $tmp45 = (panda$collections$IdentityMap*) pandaZAlloc(56);
    $tmp45->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp45->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp45);
    self->currentlyInlining = $tmp45;
    {
        self->outDir = p_outDir;
    }
    {
        panda$io$IndentedOutputStream* $tmp47 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
        $tmp47->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
        $tmp47->refCount.value = 1;
        panda$io$MemoryOutputStream* $tmp49 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
        $tmp49->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
        $tmp49->refCount.value = 1;
        panda$io$MemoryOutputStream$init($tmp49);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp47, ((panda$io$OutputStream*) $tmp49));
        self->out = $tmp47;
    }
    {
        org$pandalanguage$pandac$HCodeGenerator* $tmp51 = (org$pandalanguage$pandac$HCodeGenerator*) pandaZAlloc(129);
        $tmp51->$class = (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class;
        $tmp51->refCount.value = 1;
        org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp51, p_outDir);
        self->hCodeGen = $tmp51;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp53 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->hCodeGen, p_s);
    return $tmp53;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $tmp54 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->hCodeGen, p_m);
    return $tmp54;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp55 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->hCodeGen, p_t);
    return $tmp55;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    return ((panda$core$Bit) { ((panda$core$Object*) p_cl) != ((panda$core$Object*) self->currentClass) });
}
void org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* includePath58;
    panda$core$Bit $tmp57 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s56);
    if ($tmp57.value) {
    {
        return;
    }
    }
    panda$core$String* $tmp60 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self->hCodeGen, p_cl, &$s59);
    includePath58 = $tmp60;
    panda$core$Bit $tmp61 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath58));
    panda$core$Bit $tmp62 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp61);
    if ($tmp62.value) {
    {
        panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s63, includePath58);
        panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s65);
        (($fn67) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp66);
        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath58));
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath58));
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl69;
    panda$core$String* result77;
    panda$core$MutableString* code83;
    panda$core$String* separator93;
    panda$core$Range$LTpanda$core$Int64$GT $tmp95;
    panda$core$String* tmp1123;
    panda$core$Bit $tmp68 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    if ($tmp68.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp70 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
        cl69 = $tmp70;
        PANDA_ASSERT(((panda$core$Bit) { cl69 != NULL }).value);
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl69);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl69));
    }
    }
    panda$core$Bit $tmp72 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp71 = $tmp72.value;
    if ($tmp71) goto $l73;
    panda$core$Bit $tmp74 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 24 }));
    $tmp71 = $tmp74.value;
    $l73:;
    panda$core$Bit $tmp75 = { $tmp71 };
    if ($tmp75.value) {
    {
        panda$core$Int64 $tmp76 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp76;
        panda$core$Int64$wrapper* $tmp79;
        $tmp79 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp79->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp79->refCount = 1;
        $tmp79->value = self->varCount;
        panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s78, ((panda$core$Object*) $tmp79));
        panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp80, &$s81);
        result77 = $tmp82;
        panda$core$MutableString* $tmp84 = (panda$core$MutableString*) pandaZAlloc(48);
        $tmp84->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp84->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp84, &$s86);
        code83 = $tmp84;
        panda$core$Int64 $tmp87 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp88 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp87, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp89 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp88);
        panda$core$String* $tmp90 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp89));
        panda$core$MutableString$append$panda$core$String(code83, $tmp90);
        panda$core$MutableString$append$panda$core$String(code83, &$s91);
        panda$core$MutableString$append$panda$core$String(code83, result77);
        panda$core$MutableString$append$panda$core$String(code83, &$s92);
        separator93 = &$s94;
        panda$core$Int64 $tmp96 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp97 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp96, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp95, ((panda$core$Int64) { 0 }), $tmp97, ((panda$core$Bit) { false }));
        int64_t $tmp99 = $tmp95.min.value;
        panda$core$Int64 i98 = { $tmp99 };
        int64_t $tmp101 = $tmp95.max.value;
        bool $tmp102 = $tmp95.inclusive.value;
        if ($tmp102) goto $l109; else goto $l110;
        $l109:;
        if ($tmp99 <= $tmp101) goto $l103; else goto $l105;
        $l110:;
        if ($tmp99 < $tmp101) goto $l103; else goto $l105;
        $l103:;
        {
            panda$core$MutableString$append$panda$core$String(code83, separator93);
            panda$core$Object* $tmp111 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i98);
            panda$core$String* $tmp112 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp111));
            panda$core$MutableString$append$panda$core$String(code83, $tmp112);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator93));
                separator93 = &$s113;
            }
        }
        $l106:;
        int64_t $tmp115 = $tmp101 - i98.value;
        if ($tmp102) goto $l116; else goto $l117;
        $l116:;
        if ((uint64_t) $tmp115 >= 1) goto $l114; else goto $l105;
        $l117:;
        if ((uint64_t) $tmp115 > 1) goto $l114; else goto $l105;
        $l114:;
        i98.value += 1;
        goto $l103;
        $l105:;
        panda$core$MutableString$append$panda$core$String(code83, &$s120);
        panda$core$String* $tmp121 = panda$core$MutableString$finish$R$panda$core$String(code83);
        (($fn122) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp121);
        {
            tmp1123 = result77;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator93));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result77));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code83));
            }
            return tmp1123;
        }
    }
    }
    panda$core$String* $tmp124 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    return $tmp124;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    {
        self->compiler = p_compiler;
    }
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp125 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp125;
    panda$core$Int64$wrapper* $tmp127;
    $tmp127 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp127->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp127->refCount = 1;
    $tmp127->value = self->varCount;
    panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s126, ((panda$core$Object*) $tmp127));
    panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, &$s129);
    return $tmp130;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp131 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp131;
    panda$core$Int64$wrapper* $tmp133;
    $tmp133 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp133->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp133->refCount = 1;
    $tmp133->value = self->varCount;
    panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s132, ((panda$core$Object*) $tmp133));
    panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s135);
    return $tmp136;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp137 = panda$core$String$convert$R$panda$core$String(p_label);
    panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp137, &$s138);
    (($fn140) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp139);
    {
        self->currentBlock = p_label;
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl152;
    panda$core$Int64 tmp2161;
    panda$core$Int64 result162;
    panda$collections$Iterator* f$Iter163;
    org$pandalanguage$pandac$FieldDecl* f176;
    panda$core$Int64 size186;
    panda$core$Int64 align188;
    panda$core$Int64 tmp3198;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp141 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp141.value) {
    {
        panda$core$Bit $tmp143 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s142);
        if ($tmp143.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp145 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s144);
        if ($tmp145.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp147 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s146);
        if ($tmp147.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp149 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s148);
        PANDA_ASSERT($tmp149.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp150 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp151 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp150);
    if ($tmp151.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp153 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl152 = $tmp153;
    PANDA_ASSERT(((panda$core$Bit) { cl152 != NULL }).value);
    panda$core$Bit $tmp155 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl152);
    panda$core$Bit $tmp156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp155);
    bool $tmp154 = $tmp156.value;
    if ($tmp154) goto $l157;
    panda$core$Bit $tmp159 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl152)->name, &$s158);
    $tmp154 = $tmp159.value;
    $l157:;
    panda$core$Bit $tmp160 = { $tmp154 };
    if ($tmp160.value) {
    {
        {
            tmp2161 = ((panda$core$Int64) { 8 });
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl152));
            return tmp2161;
        }
    }
    }
    result162 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp164 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl152);
        ITable* $tmp165 = ((panda$collections$Iterable*) $tmp164)->$class->itable;
        while ($tmp165->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp165 = $tmp165->next;
        }
        $fn167 $tmp166 = $tmp165->methods[0];
        panda$collections$Iterator* $tmp168 = $tmp166(((panda$collections$Iterable*) $tmp164));
        f$Iter163 = $tmp168;
        $l169:;
        ITable* $tmp171 = f$Iter163->$class->itable;
        while ($tmp171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp171 = $tmp171->next;
        }
        $fn173 $tmp172 = $tmp171->methods[0];
        panda$core$Bit $tmp174 = $tmp172(f$Iter163);
        panda$core$Bit $tmp175 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp174);
        if (!$tmp175.value) goto $l170;
        {
            ITable* $tmp177 = f$Iter163->$class->itable;
            while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp177 = $tmp177->next;
            }
            $fn179 $tmp178 = $tmp177->methods[1];
            panda$core$Object* $tmp180 = $tmp178(f$Iter163);
            f176 = ((org$pandalanguage$pandac$FieldDecl*) $tmp180);
            panda$core$Bit $tmp181 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f176->annotations);
            if ($tmp181.value) {
            {
                goto $l169;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f176);
            org$pandalanguage$pandac$Type* $tmp182 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp183 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f176->type, $tmp182);
            if ($tmp183.value) {
            {
                panda$core$Int64 $tmp184 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl152);
                panda$core$Int64 $tmp185 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result162, $tmp184);
                result162 = $tmp185;
            }
            }
            else {
            {
                panda$core$Int64 $tmp187 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f176->type);
                size186 = $tmp187;
                panda$core$Int64 $tmp189 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result162, size186);
                align188 = $tmp189;
                panda$core$Bit $tmp190 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align188, ((panda$core$Int64) { 0 }));
                if ($tmp190.value) {
                {
                    panda$core$Int64 $tmp191 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size186, align188);
                    panda$core$Int64 $tmp192 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result162, $tmp191);
                    result162 = $tmp192;
                }
                }
                panda$core$Int64 $tmp193 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result162, size186);
                panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp193, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp194.value);
                panda$core$Int64 $tmp195 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result162, size186);
                result162 = $tmp195;
            }
            }
        }
        goto $l169;
        $l170:;
    }
    panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp196.value) {
    {
        panda$core$Int64 $tmp197 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result162, ((panda$core$Int64) { 1 }));
        result162 = $tmp197;
    }
    }
    {
        tmp3198 = result162;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl152));
        return tmp3198;
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp199 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp200 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp199, ((panda$core$Int64) { 8 }));
    return $tmp200;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl201;
    panda$core$Int64 result207;
    panda$collections$Iterator* f$Iter210;
    org$pandalanguage$pandac$FieldDecl* f223;
    panda$core$Int64 size232;
    panda$core$Int64 align234;
    panda$core$Int64 tmp4244;
    org$pandalanguage$pandac$ClassDecl* $tmp202 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl201 = $tmp202;
    bool $tmp203 = ((panda$core$Bit) { cl201 != NULL }).value;
    if (!$tmp203) goto $l204;
    panda$core$Bit $tmp205 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl201);
    $tmp203 = $tmp205.value;
    $l204:;
    panda$core$Bit $tmp206 = { $tmp203 };
    PANDA_ASSERT($tmp206.value);
    org$pandalanguage$pandac$Type* $tmp208 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp209 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp208);
    result207 = $tmp209;
    {
        panda$collections$ListView* $tmp211 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl201);
        ITable* $tmp212 = ((panda$collections$Iterable*) $tmp211)->$class->itable;
        while ($tmp212->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp212 = $tmp212->next;
        }
        $fn214 $tmp213 = $tmp212->methods[0];
        panda$collections$Iterator* $tmp215 = $tmp213(((panda$collections$Iterable*) $tmp211));
        f$Iter210 = $tmp215;
        $l216:;
        ITable* $tmp218 = f$Iter210->$class->itable;
        while ($tmp218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp218 = $tmp218->next;
        }
        $fn220 $tmp219 = $tmp218->methods[0];
        panda$core$Bit $tmp221 = $tmp219(f$Iter210);
        panda$core$Bit $tmp222 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp221);
        if (!$tmp222.value) goto $l217;
        {
            ITable* $tmp224 = f$Iter210->$class->itable;
            while ($tmp224->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp224 = $tmp224->next;
            }
            $fn226 $tmp225 = $tmp224->methods[1];
            panda$core$Object* $tmp227 = $tmp225(f$Iter210);
            f223 = ((org$pandalanguage$pandac$FieldDecl*) $tmp227);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f223);
            org$pandalanguage$pandac$Type* $tmp228 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp229 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f223->type, $tmp228);
            if ($tmp229.value) {
            {
                panda$core$Int64 $tmp230 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl201);
                panda$core$Int64 $tmp231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result207, $tmp230);
                result207 = $tmp231;
            }
            }
            else {
            {
                panda$core$Int64 $tmp233 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f223->type);
                size232 = $tmp233;
                panda$core$Int64 $tmp235 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result207, size232);
                align234 = $tmp235;
                panda$core$Bit $tmp236 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align234, ((panda$core$Int64) { 0 }));
                if ($tmp236.value) {
                {
                    panda$core$Int64 $tmp237 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size232, align234);
                    panda$core$Int64 $tmp238 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result207, $tmp237);
                    result207 = $tmp238;
                }
                }
                panda$core$Int64 $tmp239 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result207, size232);
                panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp239, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp240.value);
                panda$core$Int64 $tmp241 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result207, size232);
                result207 = $tmp241;
            }
            }
        }
        goto $l216;
        $l217:;
    }
    panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp242.value) {
    {
        panda$core$Int64 $tmp243 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result207, ((panda$core$Int64) { 1 }));
        result207 = $tmp243;
    }
    }
    {
        tmp4244 = result207;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl201));
        return tmp4244;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp245 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp245.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp246 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp246;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp247.value) {
    {
        panda$core$Object* $tmp248 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp249 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp248));
        return $tmp249;
    }
    }
    panda$core$String* $tmp250 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp251 = panda$core$String$convert$R$panda$core$String($tmp250);
    panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp251, &$s252);
    return $tmp253;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp254 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp254, &$s255);
    return $tmp256;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType257;
    panda$core$MutableString* result259;
    panda$core$Char8 $tmp266;
    panda$core$Char8 $tmp274;
    panda$core$Range$LTpanda$core$Int64$GT $tmp275;
    panda$core$String* tmp5301;
    org$pandalanguage$pandac$Type* $tmp258 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType257 = $tmp258;
    panda$core$MutableString* $tmp260 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp260->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp260->refCount.value = 1;
    panda$core$MutableString$init($tmp260);
    result259 = $tmp260;
    panda$core$Int64 $tmp262 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType257->subtypes);
    panda$core$Int64 $tmp263 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp262, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp264 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType257->subtypes, $tmp263);
    panda$core$String* $tmp265 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp264));
    panda$core$MutableString$append$panda$core$String(result259, $tmp265);
    panda$core$Char8$init$panda$core$UInt8(&$tmp266, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(result259, $tmp266);
    panda$core$Bit $tmp267 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp267.value);
    panda$core$String* $tmp268 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp269 = panda$core$String$convert$R$panda$core$String($tmp268);
    panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp269, &$s270);
    panda$core$MutableString$append$panda$core$String(result259, $tmp271);
    panda$core$Bit $tmp272 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp272.value) {
    {
        panda$core$MutableString$append$panda$core$String(result259, &$s273);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp274, ((panda$core$UInt8) { 42 }));
    panda$core$MutableString$append$panda$core$Char8(result259, $tmp274);
    panda$core$Int64 $tmp276 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType257->subtypes);
    panda$core$Int64 $tmp277 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp276, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp275, ((panda$core$Int64) { 0 }), $tmp277, ((panda$core$Bit) { false }));
    int64_t $tmp279 = $tmp275.min.value;
    panda$core$Int64 i278 = { $tmp279 };
    int64_t $tmp281 = $tmp275.max.value;
    bool $tmp282 = $tmp275.inclusive.value;
    if ($tmp282) goto $l289; else goto $l290;
    $l289:;
    if ($tmp279 <= $tmp281) goto $l283; else goto $l285;
    $l290:;
    if ($tmp279 < $tmp281) goto $l283; else goto $l285;
    $l283:;
    {
        panda$core$MutableString$append$panda$core$String(result259, &$s291);
        panda$core$Object* $tmp292 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType257->subtypes, i278);
        panda$core$String* $tmp293 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp292));
        panda$core$MutableString$append$panda$core$String(result259, $tmp293);
    }
    $l286:;
    int64_t $tmp295 = $tmp281 - i278.value;
    if ($tmp282) goto $l296; else goto $l297;
    $l296:;
    if ((uint64_t) $tmp295 >= 1) goto $l294; else goto $l285;
    $l297:;
    if ((uint64_t) $tmp295 > 1) goto $l294; else goto $l285;
    $l294:;
    i278.value += 1;
    goto $l283;
    $l285:;
    panda$core$MutableString$append$panda$core$String(result259, &$s300);
    {
        panda$core$String* $tmp302 = panda$core$MutableString$finish$R$panda$core$String(result259);
        tmp5301 = $tmp302;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result259));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inheritedType257));
        }
        return tmp5301;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp303.value);
    panda$core$Object* $tmp304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp305 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp304));
    panda$core$String* $tmp306 = panda$core$String$convert$R$panda$core$String($tmp305);
    panda$core$String* $tmp308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp306, &$s307);
    return $tmp308;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces309;
    panda$core$String* previous312;
    panda$collections$Iterator* intfType$Iter314;
    org$pandalanguage$pandac$Type* intfType326;
    org$pandalanguage$pandac$ClassDecl* intf331;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC333;
    panda$collections$ListView* methods335;
    panda$core$String* name337;
    panda$core$MutableString* result346;
    panda$core$String* separator376;
    panda$collections$Iterator* m$Iter378;
    org$pandalanguage$pandac$MethodDecl* m390;
    panda$core$String* tmp6406;
    org$pandalanguage$pandac$Type* $tmp310 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp311 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp310);
    interfaces309 = $tmp311;
    previous312 = &$s313;
    {
        ITable* $tmp315 = ((panda$collections$Iterable*) interfaces309)->$class->itable;
        while ($tmp315->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp315 = $tmp315->next;
        }
        $fn317 $tmp316 = $tmp315->methods[0];
        panda$collections$Iterator* $tmp318 = $tmp316(((panda$collections$Iterable*) interfaces309));
        intfType$Iter314 = $tmp318;
        $l319:;
        ITable* $tmp321 = intfType$Iter314->$class->itable;
        while ($tmp321->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp321 = $tmp321->next;
        }
        $fn323 $tmp322 = $tmp321->methods[0];
        panda$core$Bit $tmp324 = $tmp322(intfType$Iter314);
        panda$core$Bit $tmp325 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp324);
        if (!$tmp325.value) goto $l320;
        {
            ITable* $tmp327 = intfType$Iter314->$class->itable;
            while ($tmp327->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp327 = $tmp327->next;
            }
            $fn329 $tmp328 = $tmp327->methods[1];
            panda$core$Object* $tmp330 = $tmp328(intfType$Iter314);
            intfType326 = ((org$pandalanguage$pandac$Type*) $tmp330);
            org$pandalanguage$pandac$ClassDecl* $tmp332 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType326);
            intf331 = $tmp332;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp334 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf331);
            intfCC333 = $tmp334;
            panda$collections$ListView* $tmp336 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType326);
            methods335 = $tmp336;
            panda$core$String* $tmp338 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp339 = panda$core$String$convert$R$panda$core$String($tmp338);
            panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp339, &$s340);
            panda$core$String* $tmp342 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf331)->name);
            panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp341, $tmp342);
            panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, &$s344);
            name337 = $tmp345;
            panda$core$MutableString* $tmp347 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp347->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp347->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp350 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp351 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp350);
            panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s349, $tmp351);
            panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp352, &$s353);
            ITable* $tmp356 = ((panda$collections$CollectionView*) methods335)->$class->itable;
            while ($tmp356->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp356 = $tmp356->next;
            }
            $fn358 $tmp357 = $tmp356->methods[0];
            panda$core$Int64 $tmp359 = $tmp357(((panda$collections$CollectionView*) methods335));
            panda$core$Int64$wrapper* $tmp360;
            $tmp360 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp360->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp360->refCount = 1;
            $tmp360->value = $tmp359;
            panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s355, ((panda$core$Object*) $tmp360));
            panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, &$s362);
            panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp363, name337);
            panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s365);
            panda$core$String* $tmp367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, $tmp366);
            panda$core$String* $tmp369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s368, intfCC333->name);
            panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp369, &$s370);
            panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp371, previous312);
            panda$core$String* $tmp374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp372, &$s373);
            panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp367, $tmp374);
            panda$core$MutableString$init$panda$core$String($tmp347, $tmp375);
            result346 = $tmp347;
            separator376 = &$s377;
            {
                ITable* $tmp379 = ((panda$collections$Iterable*) methods335)->$class->itable;
                while ($tmp379->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp379 = $tmp379->next;
                }
                $fn381 $tmp380 = $tmp379->methods[0];
                panda$collections$Iterator* $tmp382 = $tmp380(((panda$collections$Iterable*) methods335));
                m$Iter378 = $tmp382;
                $l383:;
                ITable* $tmp385 = m$Iter378->$class->itable;
                while ($tmp385->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp385 = $tmp385->next;
                }
                $fn387 $tmp386 = $tmp385->methods[0];
                panda$core$Bit $tmp388 = $tmp386(m$Iter378);
                panda$core$Bit $tmp389 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp388);
                if (!$tmp389.value) goto $l384;
                {
                    ITable* $tmp391 = m$Iter378->$class->itable;
                    while ($tmp391->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp391 = $tmp391->next;
                    }
                    $fn393 $tmp392 = $tmp391->methods[1];
                    panda$core$Object* $tmp394 = $tmp392(m$Iter378);
                    m390 = ((org$pandalanguage$pandac$MethodDecl*) $tmp394);
                    panda$core$MutableString$append$panda$core$String(result346, separator376);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator376));
                        separator376 = &$s395;
                    }
                    panda$core$Bit $tmp396 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m390->annotations);
                    if ($tmp396.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result346, &$s397);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp398 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m390);
                        panda$core$MutableString$append$panda$core$String(result346, $tmp398);
                    }
                    }
                }
                goto $l383;
                $l384:;
            }
            panda$core$MutableString$append$panda$core$String(result346, &$s399);
            panda$core$String* $tmp400 = panda$core$MutableString$finish$R$panda$core$String(result346);
            (($fn401) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp400);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous312));
                panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s402, name337);
                panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp403, &$s404);
                previous312 = $tmp405;
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator376));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods335));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result346));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf331));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name337));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfCC333));
            }
        }
        goto $l319;
        $l320:;
    }
    {
        tmp6406 = previous312;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) interfaces309));
        }
        return tmp6406;
    }
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer407;
    panda$io$IndentedOutputStream* out410;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found413;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* tmp7415;
    org$pandalanguage$pandac$Type* effectiveReturnType422;
    panda$core$String* resultName426;
    panda$core$MutableString* resultType430;
    panda$core$String* self_t441;
    panda$core$Char8 $tmp447;
    panda$core$Range$LTpanda$core$Int64$GT $tmp448;
    panda$core$String* pType463;
    panda$collections$Array* casts486;
    panda$core$Range$LTpanda$core$Int64$GT $tmp489;
    panda$core$String* p504;
    panda$core$Range$LTpanda$core$Int64$GT $tmp534;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result575;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* tmp8581;
    panda$io$MemoryOutputStream* $tmp408 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp408->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp408->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp408);
    outBuffer407 = $tmp408;
    panda$io$IndentedOutputStream* $tmp411 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp411->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp411->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp411, ((panda$io$OutputStream*) outBuffer407));
    out410 = $tmp411;
    panda$core$Object* $tmp414 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found413 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp414);
    if (((panda$core$Bit) { found413 != NULL }).value) {
    {
        {
            tmp7415 = found413;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) out410));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outBuffer407));
            }
            return tmp7415;
        }
    }
    }
    panda$core$Bit $tmp416 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp416.value);
    panda$core$Int64 $tmp417 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp418 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp419 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp418, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp417, $tmp419);
    PANDA_ASSERT($tmp420.value);
    panda$core$Bit $tmp421 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp421.value);
    panda$core$Int64 $tmp423 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp424 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp423, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp425 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp424);
    effectiveReturnType422 = ((org$pandalanguage$pandac$Type*) $tmp425);
    panda$core$String* $tmp427 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp427, &$s428);
    resultName426 = $tmp429;
    panda$core$MutableString* $tmp431 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp431->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp431->refCount.value = 1;
    panda$core$String* $tmp433 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType422);
    panda$core$MutableString$init$panda$core$String($tmp431, $tmp433);
    resultType430 = $tmp431;
    panda$core$String* $tmp434 = panda$core$MutableString$convert$R$panda$core$String(resultType430);
    panda$core$String* $tmp436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp434, &$s435);
    panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp436, resultName426);
    panda$core$String* $tmp439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp437, &$s438);
    (($fn440) ((panda$io$OutputStream*) out410)->$class->vtable[16])(((panda$io$OutputStream*) out410), $tmp439);
    panda$core$String* $tmp442 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t441 = $tmp442;
    panda$core$String* $tmp443 = panda$core$String$convert$R$panda$core$String(self_t441);
    panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s444);
    (($fn446) ((panda$io$OutputStream*) out410)->$class->vtable[16])(((panda$io$OutputStream*) out410), $tmp445);
    panda$core$Char8$init$panda$core$UInt8(&$tmp447, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(resultType430, $tmp447);
    panda$core$MutableString$append$panda$core$String(resultType430, self_t441);
    panda$core$Int64 $tmp449 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp448, ((panda$core$Int64) { 0 }), $tmp449, ((panda$core$Bit) { false }));
    int64_t $tmp451 = $tmp448.min.value;
    panda$core$Int64 i450 = { $tmp451 };
    int64_t $tmp453 = $tmp448.max.value;
    bool $tmp454 = $tmp448.inclusive.value;
    if ($tmp454) goto $l461; else goto $l462;
    $l461:;
    if ($tmp451 <= $tmp453) goto $l455; else goto $l457;
    $l462:;
    if ($tmp451 < $tmp453) goto $l455; else goto $l457;
    $l455:;
    {
        panda$core$Object* $tmp464 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i450);
        panda$core$String* $tmp465 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp464));
        pType463 = $tmp465;
        panda$core$MutableString$append$panda$core$String(resultType430, &$s466);
        panda$core$MutableString$append$panda$core$String(resultType430, pType463);
        panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s467, pType463);
        panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp468, &$s469);
        panda$core$Int64$wrapper* $tmp471;
        $tmp471 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp471->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp471->refCount = 1;
        $tmp471->value = i450;
        panda$core$String* $tmp472 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp470, ((panda$core$Object*) $tmp471));
        panda$core$String* $tmp474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp472, &$s473);
        (($fn475) ((panda$io$OutputStream*) out410)->$class->vtable[16])(((panda$io$OutputStream*) out410), $tmp474);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pType463));
    }
    $l458:;
    int64_t $tmp477 = $tmp453 - i450.value;
    if ($tmp454) goto $l478; else goto $l479;
    $l478:;
    if ((uint64_t) $tmp477 >= 1) goto $l476; else goto $l457;
    $l479:;
    if ((uint64_t) $tmp477 > 1) goto $l476; else goto $l457;
    $l476:;
    i450.value += 1;
    goto $l455;
    $l457:;
    (($fn483) ((panda$io$OutputStream*) out410)->$class->vtable[19])(((panda$io$OutputStream*) out410), &$s482);
    panda$core$Int64 $tmp484 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out410->level, ((panda$core$Int64) { 1 }));
    out410->level = $tmp484;
    panda$core$MutableString$append$panda$core$String(resultType430, &$s485);
    panda$collections$Array* $tmp487 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp487->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp487->refCount.value = 1;
    panda$collections$Array$init($tmp487);
    casts486 = $tmp487;
    panda$core$Int64 $tmp490 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp489, ((panda$core$Int64) { 0 }), $tmp490, ((panda$core$Bit) { false }));
    int64_t $tmp492 = $tmp489.min.value;
    panda$core$Int64 i491 = { $tmp492 };
    int64_t $tmp494 = $tmp489.max.value;
    bool $tmp495 = $tmp489.inclusive.value;
    if ($tmp495) goto $l502; else goto $l503;
    $l502:;
    if ($tmp492 <= $tmp494) goto $l496; else goto $l498;
    $l503:;
    if ($tmp492 < $tmp494) goto $l496; else goto $l498;
    $l496:;
    {
        panda$core$Int64$wrapper* $tmp506;
        $tmp506 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp506->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp506->refCount = 1;
        $tmp506->value = i491;
        panda$core$String* $tmp507 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s505, ((panda$core$Object*) $tmp506));
        panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp507, &$s508);
        p504 = $tmp509;
        panda$core$Object* $tmp510 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i491);
        panda$core$Object* $tmp511 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i491);
        panda$core$Bit $tmp512 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp510)->type, ((org$pandalanguage$pandac$Type*) $tmp511));
        if ($tmp512.value) {
        {
            panda$core$Object* $tmp513 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i491);
            panda$core$Object* $tmp514 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i491);
            panda$core$String* $tmp515 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p504, ((org$pandalanguage$pandac$Type*) $tmp513), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp514)->type, out410);
            panda$collections$Array$add$panda$collections$Array$T(casts486, ((panda$core$Object*) $tmp515));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts486, ((panda$core$Object*) p504));
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p504));
    }
    $l499:;
    int64_t $tmp517 = $tmp494 - i491.value;
    if ($tmp495) goto $l518; else goto $l519;
    $l518:;
    if ((uint64_t) $tmp517 >= 1) goto $l516; else goto $l498;
    $l519:;
    if ((uint64_t) $tmp517 > 1) goto $l516; else goto $l498;
    $l516:;
    i491.value += 1;
    goto $l496;
    $l498:;
    org$pandalanguage$pandac$Type* $tmp522 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp523 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp522);
    if ($tmp523.value) {
    {
        panda$core$String* $tmp524 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp525 = panda$core$String$convert$R$panda$core$String($tmp524);
        panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp525, &$s526);
        (($fn528) ((panda$io$OutputStream*) out410)->$class->vtable[16])(((panda$io$OutputStream*) out410), $tmp527);
    }
    }
    panda$core$String* $tmp529 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp530 = panda$core$String$convert$R$panda$core$String($tmp529);
    panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp530, &$s531);
    (($fn533) ((panda$io$OutputStream*) out410)->$class->vtable[16])(((panda$io$OutputStream*) out410), $tmp532);
    panda$core$Int64 $tmp535 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp534, ((panda$core$Int64) { 0 }), $tmp535, ((panda$core$Bit) { false }));
    int64_t $tmp537 = $tmp534.min.value;
    panda$core$Int64 i536 = { $tmp537 };
    int64_t $tmp539 = $tmp534.max.value;
    bool $tmp540 = $tmp534.inclusive.value;
    if ($tmp540) goto $l547; else goto $l548;
    $l547:;
    if ($tmp537 <= $tmp539) goto $l541; else goto $l543;
    $l548:;
    if ($tmp537 < $tmp539) goto $l541; else goto $l543;
    $l541:;
    {
        panda$core$Object* $tmp550 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts486, i536);
        panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s549, ((panda$core$String*) $tmp550));
        panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, &$s552);
        (($fn554) ((panda$io$OutputStream*) out410)->$class->vtable[16])(((panda$io$OutputStream*) out410), $tmp553);
    }
    $l544:;
    int64_t $tmp556 = $tmp539 - i536.value;
    if ($tmp540) goto $l557; else goto $l558;
    $l557:;
    if ((uint64_t) $tmp556 >= 1) goto $l555; else goto $l543;
    $l558:;
    if ((uint64_t) $tmp556 > 1) goto $l555; else goto $l543;
    $l555:;
    i536.value += 1;
    goto $l541;
    $l543:;
    (($fn562) ((panda$io$OutputStream*) out410)->$class->vtable[19])(((panda$io$OutputStream*) out410), &$s561);
    org$pandalanguage$pandac$Type* $tmp563 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp564 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp563);
    if ($tmp564.value) {
    {
        panda$core$String* $tmp567 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s566, p_raw->returnType, effectiveReturnType422, out410);
        panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s565, $tmp567);
        panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, &$s569);
        (($fn571) ((panda$io$OutputStream*) out410)->$class->vtable[19])(((panda$io$OutputStream*) out410), $tmp570);
    }
    }
    panda$core$Int64 $tmp572 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out410->level, ((panda$core$Int64) { 1 }));
    out410->level = $tmp572;
    (($fn574) ((panda$io$OutputStream*) out410)->$class->vtable[19])(((panda$io$OutputStream*) out410), &$s573);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp576 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) pandaZAlloc(32);
    $tmp576->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp576->refCount.value = 1;
    panda$core$String* $tmp578 = panda$core$MutableString$finish$R$panda$core$String(resultType430);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp576, resultName426, $tmp578);
    result575 = $tmp576;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result575));
    panda$core$String* $tmp579 = panda$io$MemoryOutputStream$finish$R$panda$core$String(outBuffer407);
    (($fn580) p_rawOut->$class->vtable[16])(p_rawOut, $tmp579);
    {
        tmp8581 = result575;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found413));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) casts486));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result575));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultName426));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self_t441));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) out410));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) effectiveReturnType422));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outBuffer407));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultType430));
        }
        return tmp8581;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod583;
    panda$core$String* result584;
    panda$core$String* selfType589;
    org$pandalanguage$pandac$Type* actualMethodType605;
    org$pandalanguage$pandac$Type* inheritedMethodType607;
    panda$core$Range$LTpanda$core$Int64$GT $tmp609;
    panda$collections$Array* parameters644;
    panda$core$Range$LTpanda$core$Int64$GT $tmp647;
    panda$collections$Array* children672;
    org$pandalanguage$pandac$Position $tmp677;
    panda$core$Range$LTpanda$core$Int64$GT $tmp688;
    panda$core$String* tmp9720;
    panda$core$Bit $tmp582 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp582.value);
    oldMethod583 = self->currentMethod;
    {
        self->currentMethod = p_m;
    }
    panda$core$String* $tmp585 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp586 = panda$core$String$convert$R$panda$core$String($tmp585);
    panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp586, &$s587);
    result584 = $tmp588;
    panda$core$String* $tmp590 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp591 = panda$core$String$convert$R$panda$core$String($tmp590);
    panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp591, &$s592);
    selfType589 = $tmp593;
    panda$core$String* $tmp594 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp595 = panda$core$String$convert$R$panda$core$String($tmp594);
    panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp595, &$s596);
    panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp597, result584);
    panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, &$s599);
    panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp600, selfType589);
    panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp601, &$s602);
    (($fn604) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp603);
    org$pandalanguage$pandac$Type* $tmp606 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType605 = $tmp606;
    org$pandalanguage$pandac$Type* $tmp608 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType607 = $tmp608;
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
        panda$core$Object* $tmp625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType607->subtypes, i611);
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
    panda$collections$Array* $tmp645 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp645->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp645->refCount.value = 1;
    panda$collections$Array$init($tmp645);
    parameters644 = $tmp645;
    panda$core$Int64 $tmp648 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp647, ((panda$core$Int64) { 0 }), $tmp648, ((panda$core$Bit) { false }));
    int64_t $tmp650 = $tmp647.min.value;
    panda$core$Int64 i649 = { $tmp650 };
    int64_t $tmp652 = $tmp647.max.value;
    bool $tmp653 = $tmp647.inclusive.value;
    if ($tmp653) goto $l660; else goto $l661;
    $l660:;
    if ($tmp650 <= $tmp652) goto $l654; else goto $l656;
    $l661:;
    if ($tmp650 < $tmp652) goto $l654; else goto $l656;
    $l654:;
    {
        panda$core$Object* $tmp662 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i649);
        panda$core$Object* $tmp663 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType607->subtypes, i649);
        panda$core$Object* $tmp664 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType605->subtypes, i649);
        panda$core$String* $tmp665 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp662)->name, ((org$pandalanguage$pandac$Type*) $tmp663), ((org$pandalanguage$pandac$Type*) $tmp664), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters644, ((panda$core$Object*) $tmp665));
    }
    $l657:;
    int64_t $tmp667 = $tmp652 - i649.value;
    if ($tmp653) goto $l668; else goto $l669;
    $l668:;
    if ((uint64_t) $tmp667 >= 1) goto $l666; else goto $l656;
    $l669:;
    if ((uint64_t) $tmp667 > 1) goto $l666; else goto $l656;
    $l666:;
    i649.value += 1;
    goto $l654;
    $l656:;
    panda$collections$Array* $tmp673 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp673->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp673->refCount.value = 1;
    panda$collections$Array$init($tmp673);
    children672 = $tmp673;
    org$pandalanguage$pandac$IRNode* $tmp675 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
    $tmp675->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp675->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp677);
    org$pandalanguage$pandac$Type* $tmp678 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp675, ((panda$core$Int64) { 31 }), $tmp677, $tmp678);
    panda$collections$Array$add$panda$collections$Array$T(children672, ((panda$core$Object*) $tmp675));
    org$pandalanguage$pandac$Type* $tmp679 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp680 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp679);
    if ($tmp680.value) {
    {
        (($fn682) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s681);
    }
    }
    panda$core$String* $tmp683 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp684 = panda$core$String$convert$R$panda$core$String($tmp683);
    panda$core$String* $tmp686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp684, &$s685);
    (($fn687) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp686);
    panda$core$Int64 $tmp689 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp688, ((panda$core$Int64) { 0 }), $tmp689, ((panda$core$Bit) { false }));
    int64_t $tmp691 = $tmp688.min.value;
    panda$core$Int64 i690 = { $tmp691 };
    int64_t $tmp693 = $tmp688.max.value;
    bool $tmp694 = $tmp688.inclusive.value;
    if ($tmp694) goto $l701; else goto $l702;
    $l701:;
    if ($tmp691 <= $tmp693) goto $l695; else goto $l697;
    $l702:;
    if ($tmp691 < $tmp693) goto $l695; else goto $l697;
    $l695:;
    {
        panda$core$Object* $tmp704 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters644, i690);
        panda$core$String* $tmp705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s703, ((panda$core$String*) $tmp704));
        panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp705, &$s706);
        (($fn708) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp707);
    }
    $l698:;
    int64_t $tmp710 = $tmp693 - i690.value;
    if ($tmp694) goto $l711; else goto $l712;
    $l711:;
    if ((uint64_t) $tmp710 >= 1) goto $l709; else goto $l697;
    $l712:;
    if ((uint64_t) $tmp710 > 1) goto $l709; else goto $l697;
    $l709:;
    i690.value += 1;
    goto $l695;
    $l697:;
    (($fn716) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s715);
    panda$core$Int64 $tmp717 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp717;
    (($fn719) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s718);
    {
        self->currentMethod = oldMethod583;
    }
    {
        tmp9720 = result584;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inheritedMethodType607));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) selfType589));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result584));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters644));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldMethod583));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children672));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType605));
        }
        return tmp9720;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces721;
    panda$core$String* previous724;
    panda$collections$Iterator* intfType$Iter726;
    org$pandalanguage$pandac$Type* intfType738;
    org$pandalanguage$pandac$ClassDecl* intf743;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC745;
    panda$collections$ListView* methods747;
    panda$core$String* name749;
    panda$core$MutableString* result758;
    panda$core$String* separator793;
    panda$collections$Iterator* m$Iter795;
    org$pandalanguage$pandac$MethodDecl* m807;
    panda$core$String* tmp10823;
    org$pandalanguage$pandac$Type* $tmp722 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp723 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp722);
    interfaces721 = $tmp723;
    previous724 = &$s725;
    {
        ITable* $tmp727 = ((panda$collections$Iterable*) interfaces721)->$class->itable;
        while ($tmp727->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp727 = $tmp727->next;
        }
        $fn729 $tmp728 = $tmp727->methods[0];
        panda$collections$Iterator* $tmp730 = $tmp728(((panda$collections$Iterable*) interfaces721));
        intfType$Iter726 = $tmp730;
        $l731:;
        ITable* $tmp733 = intfType$Iter726->$class->itable;
        while ($tmp733->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp733 = $tmp733->next;
        }
        $fn735 $tmp734 = $tmp733->methods[0];
        panda$core$Bit $tmp736 = $tmp734(intfType$Iter726);
        panda$core$Bit $tmp737 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp736);
        if (!$tmp737.value) goto $l732;
        {
            ITable* $tmp739 = intfType$Iter726->$class->itable;
            while ($tmp739->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp739 = $tmp739->next;
            }
            $fn741 $tmp740 = $tmp739->methods[1];
            panda$core$Object* $tmp742 = $tmp740(intfType$Iter726);
            intfType738 = ((org$pandalanguage$pandac$Type*) $tmp742);
            org$pandalanguage$pandac$ClassDecl* $tmp744 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType738);
            intf743 = $tmp744;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp746 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf743);
            intfCC745 = $tmp746;
            panda$collections$ListView* $tmp748 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType738);
            methods747 = $tmp748;
            panda$core$String* $tmp750 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp751 = panda$core$String$convert$R$panda$core$String($tmp750);
            panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp751, &$s752);
            panda$core$String* $tmp754 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf743)->name);
            panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp753, $tmp754);
            panda$core$String* $tmp757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp755, &$s756);
            name749 = $tmp757;
            panda$core$MutableString* $tmp759 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp759->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp759->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp762 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp763 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp762);
            panda$core$String* $tmp764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s761, $tmp763);
            panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp764, &$s765);
            ITable* $tmp768 = ((panda$collections$CollectionView*) methods747)->$class->itable;
            while ($tmp768->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp768 = $tmp768->next;
            }
            $fn770 $tmp769 = $tmp768->methods[0];
            panda$core$Int64 $tmp771 = $tmp769(((panda$collections$CollectionView*) methods747));
            panda$core$Int64$wrapper* $tmp772;
            $tmp772 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp772->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp772->refCount = 1;
            $tmp772->value = $tmp771;
            panda$core$String* $tmp773 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s767, ((panda$core$Object*) $tmp772));
            panda$core$String* $tmp775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp773, &$s774);
            panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp775, name749);
            panda$core$String* $tmp778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp776, &$s777);
            panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, $tmp778);
            org$pandalanguage$pandac$Type* $tmp781 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp782 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp781);
            panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s780, $tmp782);
            panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp783, &$s784);
            panda$core$String* $tmp786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp785, intfCC745->name);
            panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp786, &$s787);
            panda$core$String* $tmp789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp788, previous724);
            panda$core$String* $tmp791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp789, &$s790);
            panda$core$String* $tmp792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp779, $tmp791);
            panda$core$MutableString$init$panda$core$String($tmp759, $tmp792);
            result758 = $tmp759;
            separator793 = &$s794;
            {
                ITable* $tmp796 = ((panda$collections$Iterable*) methods747)->$class->itable;
                while ($tmp796->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp796 = $tmp796->next;
                }
                $fn798 $tmp797 = $tmp796->methods[0];
                panda$collections$Iterator* $tmp799 = $tmp797(((panda$collections$Iterable*) methods747));
                m$Iter795 = $tmp799;
                $l800:;
                ITable* $tmp802 = m$Iter795->$class->itable;
                while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp802 = $tmp802->next;
                }
                $fn804 $tmp803 = $tmp802->methods[0];
                panda$core$Bit $tmp805 = $tmp803(m$Iter795);
                panda$core$Bit $tmp806 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp805);
                if (!$tmp806.value) goto $l801;
                {
                    ITable* $tmp808 = m$Iter795->$class->itable;
                    while ($tmp808->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp808 = $tmp808->next;
                    }
                    $fn810 $tmp809 = $tmp808->methods[1];
                    panda$core$Object* $tmp811 = $tmp809(m$Iter795);
                    m807 = ((org$pandalanguage$pandac$MethodDecl*) $tmp811);
                    panda$core$MutableString$append$panda$core$String(result758, separator793);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator793));
                        separator793 = &$s812;
                    }
                    panda$core$Bit $tmp813 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m807->annotations);
                    if ($tmp813.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result758, &$s814);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp815 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m807, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result758, $tmp815);
                    }
                    }
                }
                goto $l800;
                $l801:;
            }
            panda$core$MutableString$append$panda$core$String(result758, &$s816);
            panda$core$String* $tmp817 = panda$core$MutableString$finish$R$panda$core$String(result758);
            (($fn818) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp817);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous724));
                panda$core$String* $tmp820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s819, name749);
                panda$core$String* $tmp822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp820, &$s821);
                previous724 = $tmp822;
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator793));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods747));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result758));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf743));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name749));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfCC745));
            }
        }
        goto $l731;
        $l732:;
    }
    {
        tmp10823 = previous724;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous724));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) interfaces721));
        }
        return tmp10823;
    }
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp824 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp824;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result826;
    org$pandalanguage$pandac$Type* declared827;
    org$pandalanguage$pandac$Type* inherited830;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim833;
    panda$core$String* tmp11837;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp825 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp825.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    memset(&result826, 0, sizeof(result826));
    org$pandalanguage$pandac$Type* $tmp828 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp829 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp828);
    declared827 = $tmp829;
    org$pandalanguage$pandac$Type* $tmp831 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited830 = $tmp831;
    panda$core$Bit $tmp832 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared827, inherited830);
    if ($tmp832.value) {
    {
        org$pandalanguage$pandac$Type* $tmp834 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp835 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp834, ((panda$io$OutputStream*) self->shims));
        shim833 = $tmp835;
        {
            result826 = shim833->name;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) shim833));
    }
    }
    else {
    {
        {
            panda$core$String* $tmp836 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            result826 = $tmp836;
        }
    }
    }
    {
        tmp11837 = result826;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inherited830));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result826));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declared827));
        }
        return tmp11837;
    }
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result838;
    panda$core$String* type840;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp12850;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp13852;
    panda$collections$ListView* vtable853;
    panda$core$String* superPtr863;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC864;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant872;
    panda$core$MutableString* code876;
    panda$core$String* separator897;
    panda$collections$Iterator* m$Iter899;
    org$pandalanguage$pandac$MethodDecl* m911;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp14923;
    panda$core$Object* $tmp839 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result838 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp839);
    if (((panda$core$Bit) { result838 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        memset(&type840, 0, sizeof(type840));
        panda$core$Bit $tmp841 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp841.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result838));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp842 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaZAlloc(32);
                $tmp842->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
                $tmp842->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp844 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                panda$core$String* $tmp845 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp844)->name);
                panda$core$String* $tmp846 = panda$core$String$convert$R$panda$core$String($tmp845);
                panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, &$s847);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp842, $tmp848, &$s849);
                result838 = $tmp842;
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result838));
            {
                panda$core$Object* $tmp851 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
                tmp12850 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp851);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type840));
                {
                    tmp13852 = tmp12850;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result838));
                    return tmp13852;
                }
            }
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp854 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable853 = $tmp854;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result838));
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp855 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaZAlloc(32);
            $tmp855->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp855->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp857 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp858 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp857)->name);
            panda$core$String* $tmp859 = panda$core$String$convert$R$panda$core$String($tmp858);
            panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp859, &$s860);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp855, $tmp861, &$s862);
            result838 = $tmp855;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result838));
        memset(&superPtr863, 0, sizeof(superPtr863));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp865 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp866 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp865);
            superCC864 = $tmp866;
            {
                panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s867, superCC864->name);
                panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp868, &$s869);
                superPtr863 = $tmp870;
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCC864));
        }
        }
        else {
        {
            {
                superPtr863 = &$s871;
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp873 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp874 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp873);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp875 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp874);
        clConstant872 = $tmp875;
        panda$core$MutableString* $tmp877 = (panda$core$MutableString*) pandaZAlloc(48);
        $tmp877->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp877->refCount.value = 1;
        panda$core$String* $tmp879 = panda$core$String$convert$R$panda$core$String(result838->name);
        panda$core$String* $tmp881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp879, &$s880);
        panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp881, result838->name);
        panda$core$String* $tmp884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp882, &$s883);
        panda$core$String* $tmp886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s885, clConstant872->name);
        panda$core$String* $tmp888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp886, &$s887);
        panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp888, superPtr863);
        panda$core$String* $tmp891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp889, &$s890);
        panda$core$String* $tmp892 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp891, $tmp892);
        panda$core$String* $tmp895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp893, &$s894);
        panda$core$String* $tmp896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp884, $tmp895);
        panda$core$MutableString$init$panda$core$String($tmp877, $tmp896);
        code876 = $tmp877;
        separator897 = &$s898;
        {
            ITable* $tmp900 = ((panda$collections$Iterable*) vtable853)->$class->itable;
            while ($tmp900->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp900 = $tmp900->next;
            }
            $fn902 $tmp901 = $tmp900->methods[0];
            panda$collections$Iterator* $tmp903 = $tmp901(((panda$collections$Iterable*) vtable853));
            m$Iter899 = $tmp903;
            $l904:;
            ITable* $tmp906 = m$Iter899->$class->itable;
            while ($tmp906->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp906 = $tmp906->next;
            }
            $fn908 $tmp907 = $tmp906->methods[0];
            panda$core$Bit $tmp909 = $tmp907(m$Iter899);
            panda$core$Bit $tmp910 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp909);
            if (!$tmp910.value) goto $l905;
            {
                ITable* $tmp912 = m$Iter899->$class->itable;
                while ($tmp912->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp912 = $tmp912->next;
                }
                $fn914 $tmp913 = $tmp912->methods[1];
                panda$core$Object* $tmp915 = $tmp913(m$Iter899);
                m911 = ((org$pandalanguage$pandac$MethodDecl*) $tmp915);
                panda$core$MutableString$append$panda$core$String(code876, separator897);
                panda$core$Bit $tmp916 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m911->annotations);
                if ($tmp916.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code876, &$s917);
                }
                }
                else {
                {
                    panda$core$String* $tmp918 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m911);
                    panda$core$MutableString$append$panda$core$String(code876, $tmp918);
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator897));
                    separator897 = &$s919;
                }
            }
            goto $l904;
            $l905:;
        }
        panda$core$MutableString$append$panda$core$String(code876, &$s920);
        panda$core$String* $tmp921 = panda$core$MutableString$finish$R$panda$core$String(code876);
        (($fn922) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp921);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator897));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable853));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type840));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superPtr863));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code876));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) clConstant872));
        }
    }
    }
    {
        tmp14923 = result838;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result838));
        return tmp14923;
    }
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name924;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result929;
    panda$core$String* type934;
    org$pandalanguage$pandac$ClassDecl* value945;
    panda$collections$ListView* valueVTable948;
    panda$collections$ListView* vtable957;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC959;
    panda$core$String* superCast962;
    panda$core$String* itable967;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant969;
    panda$core$MutableString* code973;
    panda$core$String* separator993;
    panda$core$Range$LTpanda$core$Int64$GT $tmp995;
    org$pandalanguage$pandac$MethodDecl* m1013;
    panda$core$String* methodName1018;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp151038;
    panda$core$String* $tmp925 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp926 = panda$core$String$convert$R$panda$core$String($tmp925);
    panda$core$String* $tmp928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp926, &$s927);
    name924 = $tmp928;
    panda$core$Object* $tmp930 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name924));
    result929 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp930);
    if (((panda$core$Bit) { result929 == NULL }).value) {
    {
        panda$core$Bit $tmp931 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp931.value) {
        {
            org$pandalanguage$pandac$Type* $tmp932 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp933 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp932);
            type934 = &$s935;
            panda$core$String* $tmp936 = panda$core$String$convert$R$panda$core$String(name924);
            panda$core$String* $tmp938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp936, &$s937);
            panda$core$String* $tmp939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp938, type934);
            panda$core$String* $tmp941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp939, &$s940);
            (($fn942) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp941);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result929));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp943 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaZAlloc(32);
                $tmp943->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
                $tmp943->refCount.value = 1;
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp943, name924, type934);
                result929 = $tmp943;
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type934));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp946 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp947 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp946);
            value945 = $tmp947;
            panda$collections$ListView* $tmp949 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value945);
            valueVTable948 = $tmp949;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result929));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp950 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaZAlloc(32);
                $tmp950->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
                $tmp950->refCount.value = 1;
                panda$core$String* $tmp952 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$String* $tmp953 = panda$core$String$convert$R$panda$core$String($tmp952);
                panda$core$String* $tmp955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp953, &$s954);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp950, $tmp955, &$s956);
                result929 = $tmp950;
            }
            panda$collections$ListView* $tmp958 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable957 = $tmp958;
            org$pandalanguage$pandac$ClassDecl* $tmp960 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp961 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp960);
            superCC959 = $tmp961;
            panda$core$String* $tmp964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s963, superCC959->name);
            panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp964, &$s965);
            superCast962 = $tmp966;
            panda$core$String* $tmp968 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable967 = $tmp968;
            org$pandalanguage$pandac$Type* $tmp970 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp971 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp970);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp972 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp971);
            clConstant969 = $tmp972;
            panda$core$MutableString* $tmp974 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp974->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp974->refCount.value = 1;
            panda$core$String* $tmp976 = panda$core$String$convert$R$panda$core$String(result929->name);
            panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp976, &$s977);
            panda$core$String* $tmp979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp978, result929->name);
            panda$core$String* $tmp981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp979, &$s980);
            panda$core$String* $tmp983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s982, clConstant969->name);
            panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp983, &$s984);
            panda$core$String* $tmp986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp985, superCast962);
            panda$core$String* $tmp988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp986, &$s987);
            panda$core$String* $tmp989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp988, itable967);
            panda$core$String* $tmp991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp989, &$s990);
            panda$core$String* $tmp992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp981, $tmp991);
            panda$core$MutableString$init$panda$core$String($tmp974, $tmp992);
            code973 = $tmp974;
            separator993 = &$s994;
            ITable* $tmp996 = ((panda$collections$CollectionView*) valueVTable948)->$class->itable;
            while ($tmp996->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp996 = $tmp996->next;
            }
            $fn998 $tmp997 = $tmp996->methods[0];
            panda$core$Int64 $tmp999 = $tmp997(((panda$collections$CollectionView*) valueVTable948));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp995, ((panda$core$Int64) { 0 }), $tmp999, ((panda$core$Bit) { false }));
            int64_t $tmp1001 = $tmp995.min.value;
            panda$core$Int64 i1000 = { $tmp1001 };
            int64_t $tmp1003 = $tmp995.max.value;
            bool $tmp1004 = $tmp995.inclusive.value;
            if ($tmp1004) goto $l1011; else goto $l1012;
            $l1011:;
            if ($tmp1001 <= $tmp1003) goto $l1005; else goto $l1007;
            $l1012:;
            if ($tmp1001 < $tmp1003) goto $l1005; else goto $l1007;
            $l1005:;
            {
                ITable* $tmp1014 = vtable957->$class->itable;
                while ($tmp1014->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1014 = $tmp1014->next;
                }
                $fn1016 $tmp1015 = $tmp1014->methods[0];
                panda$core$Object* $tmp1017 = $tmp1015(vtable957, i1000);
                m1013 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1017);
                memset(&methodName1018, 0, sizeof(methodName1018));
                if (((panda$core$Bit) { ((panda$core$Object*) m1013->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    {
                        panda$core$String* $tmp1019 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1013, self->wrapperShims);
                        methodName1018 = $tmp1019;
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp1020 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1013);
                        methodName1018 = $tmp1020;
                    }
                    panda$core$Bit $tmp1021 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1013->owner);
                    if ($tmp1021.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1013);
                    }
                    }
                }
                }
                panda$core$String* $tmp1022 = panda$core$String$convert$R$panda$core$String(separator993);
                panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1022, &$s1023);
                panda$core$String* $tmp1025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1024, methodName1018);
                panda$core$String* $tmp1027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1025, &$s1026);
                panda$core$MutableString$append$panda$core$String(code973, $tmp1027);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator993));
                    separator993 = &$s1028;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodName1018));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1013));
                }
            }
            $l1008:;
            int64_t $tmp1030 = $tmp1003 - i1000.value;
            if ($tmp1004) goto $l1031; else goto $l1032;
            $l1031:;
            if ((uint64_t) $tmp1030 >= 1) goto $l1029; else goto $l1007;
            $l1032:;
            if ((uint64_t) $tmp1030 > 1) goto $l1029; else goto $l1007;
            $l1029:;
            i1000.value += 1;
            goto $l1005;
            $l1007:;
            panda$core$MutableString$append$panda$core$String(code973, &$s1035);
            panda$core$String* $tmp1036 = panda$core$MutableString$finish$R$panda$core$String(code973);
            (($fn1037) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1036);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator993));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCast962));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable957));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable967));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCC959));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value945));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable948));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code973));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) clConstant969));
            }
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name924), ((panda$core$Object*) result929));
    }
    }
    {
        tmp151038 = result929;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result929));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name924));
        }
        return tmp151038;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1044;
    panda$core$String* tmp161054;
    panda$core$Bit $tmp1039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp1039.value) {
    {
        panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1040, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1041, &$s1042);
        return $tmp1043;
    }
    }
    panda$core$Object* $tmp1045 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1044 = ((panda$core$String*) $tmp1045);
    if (((panda$core$Bit) { result1044 == NULL }).value) {
    {
        panda$core$Int64 $tmp1046 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1046;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1044));
            panda$core$String* $tmp1047 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_v)->name);
            panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, &$s1048);
            panda$core$Int64$wrapper* $tmp1050;
            $tmp1050 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1050->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1050->refCount = 1;
            $tmp1050->value = self->varCount;
            panda$core$String* $tmp1051 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1049, ((panda$core$Object*) $tmp1050));
            panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1051, &$s1052);
            result1044 = $tmp1053;
        }
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1044));
    }
    }
    {
        tmp161054 = result1044;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1044));
        return tmp161054;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1055 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1055.value);
    panda$core$String* $tmp1056 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1057 = panda$core$String$convert$R$panda$core$String($tmp1056);
    panda$core$String* $tmp1059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1057, &$s1058);
    panda$core$String* $tmp1060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1059, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1060, &$s1061);
    return $tmp1062;
}
org$pandalanguage$pandac$CCodeGenerator$OpClass org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$660_131063;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1065;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1071;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1073;
    {
        $match$660_131063 = p_t->typeKind;
        panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$660_131063, ((panda$core$Int64) { 12 }));
        if ($tmp1064.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1065, ((panda$core$Int64) { 0 }));
            return $tmp1065;
        }
        }
        else {
        panda$core$Bit $tmp1067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$660_131063, ((panda$core$Int64) { 13 }));
        bool $tmp1066 = $tmp1067.value;
        if ($tmp1066) goto $l1068;
        panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$660_131063, ((panda$core$Int64) { 19 }));
        $tmp1066 = $tmp1069.value;
        $l1068:;
        panda$core$Bit $tmp1070 = { $tmp1066 };
        if ($tmp1070.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1071, ((panda$core$Int64) { 1 }));
            return $tmp1071;
        }
        }
        else {
        panda$core$Bit $tmp1072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$660_131063, ((panda$core$Int64) { 20 }));
        if ($tmp1072.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1073, ((panda$core$Int64) { 2 }));
            return $tmp1073;
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
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1074;
    panda$core$String* leftRef1076;
    panda$core$String* falseLabel1092;
    panda$core$String* rightRef1102;
    panda$core$String* tmp171117;
    panda$core$String* $tmp1075 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1074 = $tmp1075;
    panda$core$String* $tmp1077 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1076 = $tmp1077;
    org$pandalanguage$pandac$Type* $tmp1079 = (($fn1078) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1080 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1081 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1079, $tmp1080);
    if ($tmp1081.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1076));
            panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1076, &$s1082);
            leftRef1076 = $tmp1083;
        }
    }
    }
    panda$core$String* $tmp1085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1084, result1074);
    panda$core$String* $tmp1087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1085, &$s1086);
    panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1087, leftRef1076);
    panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1088, &$s1089);
    (($fn1091) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1090);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp1093 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1092 = $tmp1093;
    panda$core$String* $tmp1095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1094, result1074);
    panda$core$String* $tmp1097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1095, &$s1096);
    panda$core$String* $tmp1098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1097, falseLabel1092);
    panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, &$s1099);
    (($fn1101) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1100);
    panda$core$String* $tmp1103 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1102 = $tmp1103;
    org$pandalanguage$pandac$Type* $tmp1105 = (($fn1104) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1106 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1107 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1105, $tmp1106);
    if ($tmp1107.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1102));
            panda$core$String* $tmp1109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1102, &$s1108);
            rightRef1102 = $tmp1109;
        }
    }
    }
    panda$core$String* $tmp1110 = panda$core$String$convert$R$panda$core$String(result1074);
    panda$core$String* $tmp1112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1110, &$s1111);
    panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1112, rightRef1102);
    panda$core$String* $tmp1115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1113, &$s1114);
    (($fn1116) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1115);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1092, p_out);
    {
        tmp171117 = result1074;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1074));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1102));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel1092));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1076));
        }
        return tmp171117;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1118;
    panda$core$String* leftRef1120;
    panda$core$String* trueLabel1136;
    panda$core$String* rightRef1146;
    panda$core$String* tmp181161;
    panda$core$String* $tmp1119 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1118 = $tmp1119;
    panda$core$String* $tmp1121 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1120 = $tmp1121;
    org$pandalanguage$pandac$Type* $tmp1123 = (($fn1122) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1124 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1125 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1123, $tmp1124);
    if ($tmp1125.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1120));
            panda$core$String* $tmp1127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1120, &$s1126);
            leftRef1120 = $tmp1127;
        }
    }
    }
    panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1128, result1118);
    panda$core$String* $tmp1131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1129, &$s1130);
    panda$core$String* $tmp1132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1131, leftRef1120);
    panda$core$String* $tmp1134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1132, &$s1133);
    (($fn1135) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1134);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp1137 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1136 = $tmp1137;
    panda$core$String* $tmp1139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1138, result1118);
    panda$core$String* $tmp1141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1139, &$s1140);
    panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1141, trueLabel1136);
    panda$core$String* $tmp1144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1142, &$s1143);
    (($fn1145) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1144);
    panda$core$String* $tmp1147 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1146 = $tmp1147;
    org$pandalanguage$pandac$Type* $tmp1149 = (($fn1148) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1150 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1151 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1149, $tmp1150);
    if ($tmp1151.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1146));
            panda$core$String* $tmp1153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1146, &$s1152);
            rightRef1146 = $tmp1153;
        }
    }
    }
    panda$core$String* $tmp1154 = panda$core$String$convert$R$panda$core$String(result1118);
    panda$core$String* $tmp1156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1154, &$s1155);
    panda$core$String* $tmp1157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1156, rightRef1146);
    panda$core$String* $tmp1159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1157, &$s1158);
    (($fn1160) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1159);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1136, p_out);
    {
        tmp181161 = result1118;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1118));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1146));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel1136));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1120));
        }
        return tmp181161;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, org$pandalanguage$pandac$parser$Token$Kind p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1162;
    panda$core$Bit logical1163;
    org$pandalanguage$pandac$parser$Token$Kind $match$715_91164;
    panda$core$String* result1203;
    panda$core$String* tmp191225;
    memset(&cOp1162, 0, sizeof(cOp1162));
    logical1163 = ((panda$core$Bit) { false });
    {
        $match$715_91164 = p_op;
        panda$core$Bit $tmp1165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp1165.value) {
        {
            {
                cOp1162 = &$s1166;
            }
        }
        }
        else {
        panda$core$Bit $tmp1167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp1167.value) {
        {
            {
                cOp1162 = &$s1168;
            }
        }
        }
        else {
        panda$core$Bit $tmp1169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp1169.value) {
        {
            {
                cOp1162 = &$s1170;
            }
        }
        }
        else {
        panda$core$Bit $tmp1171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp1171.value) {
        {
            {
                cOp1162 = &$s1172;
            }
        }
        }
        else {
        panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp1173.value) {
        {
            {
                cOp1162 = &$s1174;
            }
        }
        }
        else {
        panda$core$Bit $tmp1175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp1175.value) {
        {
            {
                cOp1162 = &$s1176;
            }
        }
        }
        else {
        panda$core$Bit $tmp1177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp1177.value) {
        {
            {
                cOp1162 = &$s1178;
            }
        }
        }
        else {
        panda$core$Bit $tmp1179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1179.value) {
        {
            {
                cOp1162 = &$s1180;
            }
        }
        }
        else {
        panda$core$Bit $tmp1181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp1181.value) {
        {
            {
                cOp1162 = &$s1182;
            }
        }
        }
        else {
        panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp1183.value) {
        {
            {
                cOp1162 = &$s1184;
            }
        }
        }
        else {
        panda$core$Bit $tmp1186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 70 }));
        bool $tmp1185 = $tmp1186.value;
        if ($tmp1185) goto $l1187;
        panda$core$Bit $tmp1188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1185 = $tmp1188.value;
        $l1187:;
        panda$core$Bit $tmp1189 = { $tmp1185 };
        if ($tmp1189.value) {
        {
            {
                cOp1162 = &$s1190;
            }
        }
        }
        else {
        panda$core$Bit $tmp1191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1191.value) {
        {
            {
                cOp1162 = &$s1192;
            }
            logical1163 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp1193.value) {
        {
            {
                cOp1162 = &$s1194;
            }
            logical1163 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1195.value) {
        {
            {
                cOp1162 = &$s1196;
            }
            logical1163 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1197.value) {
        {
            {
                cOp1162 = &$s1198;
            }
            logical1163 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp1199.value) {
        {
            {
                cOp1162 = &$s1200;
            }
            logical1163 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91164.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp1201.value) {
        {
            logical1163 = ((panda$core$Bit) { true });
            {
                cOp1162 = &$s1202;
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
    panda$core$String* $tmp1204 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1203 = $tmp1204;
    if (logical1163.value) {
    {
        (($fn1206) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1205);
    }
    }
    else {
    {
        panda$core$String* $tmp1207 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1208 = panda$core$String$convert$R$panda$core$String($tmp1207);
        panda$core$String* $tmp1210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1208, &$s1209);
        (($fn1211) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1210);
    }
    }
    panda$core$String* $tmp1212 = panda$core$String$convert$R$panda$core$String(result1203);
    panda$core$String* $tmp1214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1212, &$s1213);
    panda$core$String* $tmp1215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1214, p_leftRef);
    panda$core$String* $tmp1217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1215, &$s1216);
    panda$core$String* $tmp1218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1217, cOp1162);
    panda$core$String* $tmp1220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1218, &$s1219);
    panda$core$String* $tmp1221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1220, p_rightRef);
    panda$core$String* $tmp1223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1221, &$s1222);
    (($fn1224) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1223);
    {
        tmp191225 = result1203;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1203));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1162));
        }
        return tmp191225;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1226;
    panda$core$String* rightRef1228;
    panda$core$String* tmp201230;
    panda$core$String* $tmp1227 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1226 = $tmp1227;
    panda$core$String* $tmp1229 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1228 = $tmp1229;
    {
        panda$core$String* $tmp1232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1231, leftRef1226);
        panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1232, &$s1233);
        panda$core$String* $tmp1235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1234, rightRef1228);
        panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1235, &$s1236);
        tmp201230 = $tmp1237;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1228));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1226));
        }
        return tmp201230;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1238;
    panda$core$String* rightRef1240;
    panda$core$String* tmp211242;
    panda$core$String* $tmp1239 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1238 = $tmp1239;
    panda$core$String* $tmp1241 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1240 = $tmp1241;
    {
        panda$core$String* $tmp1244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1243, leftRef1238);
        panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1244, &$s1245);
        panda$core$String* $tmp1247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1246, rightRef1240);
        panda$core$String* $tmp1249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1247, &$s1248);
        tmp211242 = $tmp1249;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1240));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1238));
        }
        return tmp211242;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$parser$Token$Kind $match$785_91255;
    panda$core$String* leftRef1264;
    panda$core$String* rightRef1266;
    org$pandalanguage$pandac$Type* $tmp1251 = (($fn1250) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1253 = (($fn1252) p_right->$class->vtable[2])(p_right);
    panda$core$Bit $tmp1254 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1251, $tmp1253);
    PANDA_ASSERT($tmp1254.value);
    {
        $match$785_91255 = p_op;
        panda$core$Bit $tmp1256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$785_91255.$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp1256.value) {
        {
            panda$core$String* $tmp1257 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1257;
        }
        }
        else {
        panda$core$Bit $tmp1258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$785_91255.$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp1258.value) {
        {
            panda$core$String* $tmp1259 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1259;
        }
        }
        else {
        panda$core$Bit $tmp1260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$785_91255.$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp1260.value) {
        {
            panda$core$String* $tmp1261 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1261;
        }
        }
        else {
        panda$core$Bit $tmp1262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$785_91255.$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp1262.value) {
        {
            panda$core$String* $tmp1263 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1263;
        }
        }
        else {
        {
            panda$core$String* $tmp1265 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1264 = $tmp1265;
            panda$core$String* $tmp1267 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1266 = $tmp1267;
            org$pandalanguage$pandac$Type* $tmp1269 = (($fn1268) p_left->$class->vtable[2])(p_left);
            panda$core$String* $tmp1270 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1269, leftRef1264, p_op, rightRef1266, p_out);
            return $tmp1270;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1271;
    panda$core$Int64 index1273;
    panda$collections$ListView* vtable1274;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1276;
    panda$core$String* tmp221305;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1272 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1271 = $tmp1272;
    index1273 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1275 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1274 = $tmp1275;
    ITable* $tmp1277 = ((panda$collections$CollectionView*) vtable1274)->$class->itable;
    while ($tmp1277->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1277 = $tmp1277->next;
    }
    $fn1279 $tmp1278 = $tmp1277->methods[0];
    panda$core$Int64 $tmp1280 = $tmp1278(((panda$collections$CollectionView*) vtable1274));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1276, ((panda$core$Int64) { 0 }), $tmp1280, ((panda$core$Bit) { false }));
    int64_t $tmp1282 = $tmp1276.min.value;
    panda$core$Int64 i1281 = { $tmp1282 };
    int64_t $tmp1284 = $tmp1276.max.value;
    bool $tmp1285 = $tmp1276.inclusive.value;
    if ($tmp1285) goto $l1292; else goto $l1293;
    $l1292:;
    if ($tmp1282 <= $tmp1284) goto $l1286; else goto $l1288;
    $l1293:;
    if ($tmp1282 < $tmp1284) goto $l1286; else goto $l1288;
    $l1286:;
    {
        ITable* $tmp1294 = vtable1274->$class->itable;
        while ($tmp1294->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1294 = $tmp1294->next;
        }
        $fn1296 $tmp1295 = $tmp1294->methods[0];
        panda$core$Object* $tmp1297 = $tmp1295(vtable1274, i1281);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1297)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1273 = i1281;
            goto $l1288;
        }
        }
    }
    $l1289:;
    int64_t $tmp1299 = $tmp1284 - i1281.value;
    if ($tmp1285) goto $l1300; else goto $l1301;
    $l1300:;
    if ((uint64_t) $tmp1299 >= 1) goto $l1298; else goto $l1288;
    $l1301:;
    if ((uint64_t) $tmp1299 > 1) goto $l1298; else goto $l1288;
    $l1298:;
    i1281.value += 1;
    goto $l1286;
    $l1288:;
    panda$core$Bit $tmp1304 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1273, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1304.value);
    {
        org$pandalanguage$pandac$Type* $tmp1307 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        panda$core$String* $tmp1308 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1307);
        panda$core$String* $tmp1309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1306, $tmp1308);
        panda$core$String* $tmp1311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1309, &$s1310);
        panda$core$String* $tmp1312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1311, p_target);
        panda$core$String* $tmp1314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1312, &$s1313);
        panda$core$Int64$wrapper* $tmp1315;
        $tmp1315 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp1315->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp1315->refCount = 1;
        $tmp1315->value = index1273;
        panda$core$String* $tmp1316 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1314, ((panda$core$Object*) $tmp1315));
        panda$core$String* $tmp1318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1316, &$s1317);
        tmp221305 = $tmp1318;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1274));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1271));
        }
        return tmp221305;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1319;
    panda$core$String* itable1321;
    panda$core$Int64 index1350;
    panda$collections$ListView* vtable1351;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1353;
    panda$core$String* result1390;
    panda$core$String* methodType1392;
    panda$core$String* tmp231409;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1320 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1319 = $tmp1320;
    panda$core$String* $tmp1322 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1321 = $tmp1322;
    panda$core$String* $tmp1324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1323, itable1321);
    panda$core$String* $tmp1326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1324, &$s1325);
    panda$core$String* $tmp1327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1326, p_target);
    panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1327, &$s1328);
    (($fn1330) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1329);
    panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1331, itable1321);
    panda$core$String* $tmp1334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1332, &$s1333);
    panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1334, cc1319->name);
    panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1335, &$s1336);
    (($fn1338) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1337);
    panda$core$Int64 $tmp1339 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1339;
    panda$core$String* $tmp1340 = panda$core$String$convert$R$panda$core$String(itable1321);
    panda$core$String* $tmp1342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1340, &$s1341);
    panda$core$String* $tmp1343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1342, itable1321);
    panda$core$String* $tmp1345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1343, &$s1344);
    (($fn1346) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1345);
    panda$core$Int64 $tmp1347 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1347;
    (($fn1349) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1348);
    index1350 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1352 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1351 = $tmp1352;
    ITable* $tmp1354 = ((panda$collections$CollectionView*) vtable1351)->$class->itable;
    while ($tmp1354->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1354 = $tmp1354->next;
    }
    $fn1356 $tmp1355 = $tmp1354->methods[0];
    panda$core$Int64 $tmp1357 = $tmp1355(((panda$collections$CollectionView*) vtable1351));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1353, ((panda$core$Int64) { 0 }), $tmp1357, ((panda$core$Bit) { false }));
    int64_t $tmp1359 = $tmp1353.min.value;
    panda$core$Int64 i1358 = { $tmp1359 };
    int64_t $tmp1361 = $tmp1353.max.value;
    bool $tmp1362 = $tmp1353.inclusive.value;
    if ($tmp1362) goto $l1369; else goto $l1370;
    $l1369:;
    if ($tmp1359 <= $tmp1361) goto $l1363; else goto $l1365;
    $l1370:;
    if ($tmp1359 < $tmp1361) goto $l1363; else goto $l1365;
    $l1363:;
    {
        ITable* $tmp1371 = vtable1351->$class->itable;
        while ($tmp1371->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1371 = $tmp1371->next;
        }
        $fn1373 $tmp1372 = $tmp1371->methods[0];
        panda$core$Object* $tmp1374 = $tmp1372(vtable1351, i1358);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1374)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1350 = i1358;
            goto $l1365;
        }
        }
    }
    $l1366:;
    int64_t $tmp1376 = $tmp1361 - i1358.value;
    if ($tmp1362) goto $l1377; else goto $l1378;
    $l1377:;
    if ((uint64_t) $tmp1376 >= 1) goto $l1375; else goto $l1365;
    $l1378:;
    if ((uint64_t) $tmp1376 > 1) goto $l1375; else goto $l1365;
    $l1375:;
    i1358.value += 1;
    goto $l1363;
    $l1365:;
    org$pandalanguage$pandac$Type* $tmp1381 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1382 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1381);
    panda$collections$ListView* $tmp1383 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1382);
    ITable* $tmp1384 = ((panda$collections$CollectionView*) $tmp1383)->$class->itable;
    while ($tmp1384->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1384 = $tmp1384->next;
    }
    $fn1386 $tmp1385 = $tmp1384->methods[0];
    panda$core$Int64 $tmp1387 = $tmp1385(((panda$collections$CollectionView*) $tmp1383));
    panda$core$Int64 $tmp1388 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1350, $tmp1387);
    index1350 = $tmp1388;
    panda$core$Bit $tmp1389 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1350, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1389.value);
    panda$core$String* $tmp1391 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1390 = $tmp1391;
    org$pandalanguage$pandac$Type* $tmp1393 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1394 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1393);
    methodType1392 = $tmp1394;
    panda$core$String* $tmp1395 = panda$core$String$convert$R$panda$core$String(methodType1392);
    panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1395, &$s1396);
    panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1397, result1390);
    panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1398, &$s1399);
    panda$core$String* $tmp1401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1400, itable1321);
    panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1401, &$s1402);
    panda$core$Int64$wrapper* $tmp1404;
    $tmp1404 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp1404->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1404->refCount = 1;
    $tmp1404->value = index1350;
    panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1403, ((panda$core$Object*) $tmp1404));
    panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1405, &$s1406);
    (($fn1408) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1407);
    {
        tmp231409 = result1390;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1390));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1351));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1319));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable1321));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodType1392));
        }
        return tmp231409;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1411 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1410 = $tmp1411.value;
    if (!$tmp1410) goto $l1412;
    panda$core$Bit $tmp1413 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1410 = $tmp1413.value;
    $l1412:;
    panda$core$Bit $tmp1414 = { $tmp1410 };
    if ($tmp1414.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1415.value) {
        {
            panda$core$String* $tmp1416 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1416;
        }
        }
        else {
        {
            panda$core$String* $tmp1417 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1417;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1418 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1418.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1419 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1419;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$858_91420;
    panda$core$String* count1425;
    panda$core$Int64 elementSize1431;
    panda$core$String* ptr1451;
    panda$core$String* ptr1462;
    panda$core$String* index1465;
    panda$core$String* ptr1478;
    panda$core$String* oldCount1481;
    panda$core$String* newCount1484;
    panda$core$Int64 elementSize1490;
    panda$core$String* ptr1521;
    panda$core$String* offset1524;
    {
        $match$858_91420 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp1422 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$858_91420, &$s1421);
        if ($tmp1422.value) {
        {
            panda$core$Int64 $tmp1423 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1423, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1424.value);
            panda$core$Object* $tmp1426 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1427 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1426), p_out);
            count1425 = $tmp1427;
            org$pandalanguage$pandac$Type* $tmp1428 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1429 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1428->subtypes);
            panda$core$Bit $tmp1430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1429, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1430.value);
            org$pandalanguage$pandac$Type* $tmp1432 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1433 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1432->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1434 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1433));
            elementSize1431 = $tmp1434;
            panda$core$String* $tmp1436 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1435, $tmp1436);
            panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1437, &$s1438);
            panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1439, count1425);
            panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1440, &$s1441);
            panda$core$Int64$wrapper* $tmp1443;
            $tmp1443 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1443->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1443->refCount = 1;
            $tmp1443->value = elementSize1431;
            panda$core$String* $tmp1444 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1442, ((panda$core$Object*) $tmp1443));
            panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1444, &$s1445);
            return $tmp1446;
        }
        }
        else {
        panda$core$Bit $tmp1448 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$858_91420, &$s1447);
        if ($tmp1448.value) {
        {
            panda$core$Int64 $tmp1449 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1449, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1450.value);
            panda$core$Object* $tmp1452 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1453 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1452), p_out);
            ptr1451 = $tmp1453;
            panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1454, ptr1451);
            panda$core$String* $tmp1457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1455, &$s1456);
            return $tmp1457;
        }
        }
        else {
        panda$core$Bit $tmp1459 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$858_91420, &$s1458);
        if ($tmp1459.value) {
        {
            panda$core$Int64 $tmp1460 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1460, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1461.value);
            panda$core$Object* $tmp1463 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1464 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1463), p_out);
            ptr1462 = $tmp1464;
            panda$core$Object* $tmp1466 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1467 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1466), p_out);
            index1465 = $tmp1467;
            panda$core$String* $tmp1468 = panda$core$String$convert$R$panda$core$String(ptr1462);
            panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, &$s1469);
            panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1470, index1465);
            panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1471, &$s1472);
            return $tmp1473;
        }
        }
        else {
        panda$core$Bit $tmp1475 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$858_91420, &$s1474);
        if ($tmp1475.value) {
        {
            panda$core$Int64 $tmp1476 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1476, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1477.value);
            panda$core$Object* $tmp1479 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1480 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1479), p_out);
            ptr1478 = $tmp1480;
            panda$core$Object* $tmp1482 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1483 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1482), p_out);
            oldCount1481 = $tmp1483;
            panda$core$Object* $tmp1485 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp1486 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1485), p_out);
            newCount1484 = $tmp1486;
            org$pandalanguage$pandac$Type* $tmp1487 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1488 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1487->subtypes);
            panda$core$Bit $tmp1489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1488, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1489.value);
            org$pandalanguage$pandac$Type* $tmp1491 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1492 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1491->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1493 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1492));
            elementSize1490 = $tmp1493;
            panda$core$String* $tmp1495 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp1496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1494, $tmp1495);
            panda$core$String* $tmp1498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1496, &$s1497);
            panda$core$String* $tmp1499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1498, ptr1478);
            panda$core$String* $tmp1501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1499, &$s1500);
            panda$core$String* $tmp1502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1501, oldCount1481);
            panda$core$String* $tmp1504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1502, &$s1503);
            panda$core$Int64$wrapper* $tmp1505;
            $tmp1505 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1505->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1505->refCount = 1;
            $tmp1505->value = elementSize1490;
            panda$core$String* $tmp1506 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1504, ((panda$core$Object*) $tmp1505));
            panda$core$String* $tmp1508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1506, &$s1507);
            panda$core$String* $tmp1509 = panda$core$String$convert$R$panda$core$String(newCount1484);
            panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1509, &$s1510);
            panda$core$Int64$wrapper* $tmp1512;
            $tmp1512 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1512->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1512->refCount = 1;
            $tmp1512->value = elementSize1490;
            panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1511, ((panda$core$Object*) $tmp1512));
            panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1513, &$s1514);
            panda$core$String* $tmp1516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1508, $tmp1515);
            return $tmp1516;
        }
        }
        else {
        panda$core$Bit $tmp1518 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$858_91420, &$s1517);
        if ($tmp1518.value) {
        {
            panda$core$Int64 $tmp1519 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1519, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1520.value);
            panda$core$Object* $tmp1522 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1523 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1522), p_out);
            ptr1521 = $tmp1523;
            panda$core$Object* $tmp1525 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1526 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1525), p_out);
            offset1524 = $tmp1526;
            panda$core$String* $tmp1528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1527, ptr1521);
            panda$core$String* $tmp1530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1528, &$s1529);
            panda$core$String* $tmp1531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1530, offset1524);
            panda$core$String* $tmp1533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1531, &$s1532);
            return $tmp1533;
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
    org$pandalanguage$pandac$MethodDecl* m1534;
    panda$core$String* tmp241537;
    panda$core$String* bit1546;
    panda$core$String* result1550;
    panda$core$String* tmp251560;
    panda$core$String* tmp271561;
    panda$core$String* bit1566;
    panda$core$String* result1570;
    panda$core$String* tmp261580;
    panda$core$String* tmp281581;
    panda$collections$Array* argRefs1582;
    org$pandalanguage$pandac$Type* actualMethodType1586;
    panda$core$String* actualResultType1587;
    panda$core$Bit isSuper1588;
    panda$core$Int64 offset1608;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1613;
    panda$core$String* arg1628;
    panda$core$String* target1653;
    panda$core$String* methodRef1657;
    panda$core$Bit indirect1659;
    panda$core$String* result1661;
    panda$core$String* separator1663;
    panda$core$String* indirectVar1665;
    panda$collections$Iterator* arg$Iter1691;
    panda$core$String* arg1703;
    panda$core$String* tmp291720;
    panda$core$String* tmp301725;
    m1534 = p_mref->value;
    panda$core$Bit $tmp1536 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1534->owner)->name, &$s1535);
    if ($tmp1536.value) {
    {
        {
            panda$core$String* $tmp1538 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, p_t, p_mref, p_args, p_out);
            tmp241537 = $tmp1538;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1534));
            return tmp241537;
        }
    }
    }
    panda$core$Bit $tmp1539 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1534->owner);
    if ($tmp1539.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1534);
    }
    }
    panda$core$Bit $tmp1541 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1534->owner)->name, &$s1540);
    if ($tmp1541.value) {
    {
        panda$core$Bit $tmp1543 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1534)->name, &$s1542);
        if ($tmp1543.value) {
        {
            panda$core$Int64 $tmp1544 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1544, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1545.value);
            panda$core$Object* $tmp1547 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1548 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1549 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1547), ((org$pandalanguage$pandac$IRNode*) $tmp1548), p_out);
            bit1546 = $tmp1549;
            panda$core$String* $tmp1551 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1550 = $tmp1551;
            panda$core$String* $tmp1553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1552, result1550);
            panda$core$String* $tmp1555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1553, &$s1554);
            panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1555, bit1546);
            panda$core$String* $tmp1558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1556, &$s1557);
            (($fn1559) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1558);
            {
                tmp251560 = result1550;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1550));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit1546));
                }
                {
                    tmp271561 = tmp251560;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1534));
                    return tmp271561;
                }
            }
        }
        }
        panda$core$Bit $tmp1563 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1534)->name, &$s1562);
        if ($tmp1563.value) {
        {
            panda$core$Int64 $tmp1564 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1564, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1565.value);
            panda$core$Object* $tmp1567 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1568 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1569 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1567), ((org$pandalanguage$pandac$IRNode*) $tmp1568), p_out);
            bit1566 = $tmp1569;
            panda$core$String* $tmp1571 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1570 = $tmp1571;
            panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1572, result1570);
            panda$core$String* $tmp1575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1573, &$s1574);
            panda$core$String* $tmp1576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1575, bit1566);
            panda$core$String* $tmp1578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1576, &$s1577);
            (($fn1579) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1578);
            {
                tmp261580 = result1570;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1570));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit1566));
                }
                {
                    tmp281581 = tmp261580;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1534));
                    return tmp281581;
                }
            }
        }
        }
    }
    }
    panda$collections$Array* $tmp1583 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1583->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1583->refCount.value = 1;
    panda$core$Int64 $tmp1585 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$collections$Array$init$panda$core$Int64($tmp1583, $tmp1585);
    argRefs1582 = $tmp1583;
    memset(&actualMethodType1586, 0, sizeof(actualMethodType1586));
    memset(&actualResultType1587, 0, sizeof(actualResultType1587));
    panda$core$Int64 $tmp1590 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp1591 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1590, ((panda$core$Int64) { 1 }));
    bool $tmp1589 = $tmp1591.value;
    if (!$tmp1589) goto $l1592;
    panda$core$Object* $tmp1593 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1593)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp1589 = $tmp1594.value;
    $l1592:;
    panda$core$Bit $tmp1595 = { $tmp1589 };
    isSuper1588 = $tmp1595;
    panda$core$Bit $tmp1597 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1588);
    bool $tmp1596 = $tmp1597.value;
    if (!$tmp1596) goto $l1598;
    panda$core$Bit $tmp1599 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1534);
    $tmp1596 = $tmp1599.value;
    $l1598:;
    panda$core$Bit $tmp1600 = { $tmp1596 };
    if ($tmp1600.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp1601 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1534);
            actualMethodType1586 = $tmp1601;
        }
        {
            panda$core$Int64 $tmp1602 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1586->subtypes);
            panda$core$Int64 $tmp1603 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1602, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp1604 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1586->subtypes, $tmp1603);
            panda$core$String* $tmp1605 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1604));
            actualResultType1587 = $tmp1605;
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp1606 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1534);
            actualMethodType1586 = $tmp1606;
        }
        {
            panda$core$String* $tmp1607 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            actualResultType1587 = $tmp1607;
        }
    }
    }
    panda$core$Int64 $tmp1609 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp1610 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1586->subtypes);
    panda$core$Int64 $tmp1611 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1609, $tmp1610);
    panda$core$Int64 $tmp1612 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1611, ((panda$core$Int64) { 1 }));
    offset1608 = $tmp1612;
    panda$core$Int64 $tmp1614 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1613, ((panda$core$Int64) { 0 }), $tmp1614, ((panda$core$Bit) { false }));
    int64_t $tmp1616 = $tmp1613.min.value;
    panda$core$Int64 i1615 = { $tmp1616 };
    int64_t $tmp1618 = $tmp1613.max.value;
    bool $tmp1619 = $tmp1613.inclusive.value;
    if ($tmp1619) goto $l1626; else goto $l1627;
    $l1626:;
    if ($tmp1616 <= $tmp1618) goto $l1620; else goto $l1622;
    $l1627:;
    if ($tmp1616 < $tmp1618) goto $l1620; else goto $l1622;
    $l1620:;
    {
        panda$core$Object* $tmp1629 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1615);
        panda$core$String* $tmp1630 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1629), p_out);
        arg1628 = $tmp1630;
        panda$core$Bit $tmp1632 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1615, offset1608);
        bool $tmp1631 = $tmp1632.value;
        if (!$tmp1631) goto $l1633;
        panda$core$Int64 $tmp1634 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1615, offset1608);
        panda$core$Object* $tmp1635 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1586->subtypes, $tmp1634);
        panda$core$Object* $tmp1636 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1615);
        org$pandalanguage$pandac$Type* $tmp1638 = (($fn1637) ((org$pandalanguage$pandac$IRNode*) $tmp1636)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1636));
        panda$core$Bit $tmp1639 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1635), $tmp1638);
        $tmp1631 = $tmp1639.value;
        $l1633:;
        panda$core$Bit $tmp1640 = { $tmp1631 };
        if ($tmp1640.value) {
        {
            {
                panda$core$Object* $tmp1641 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1615);
                org$pandalanguage$pandac$Type* $tmp1643 = (($fn1642) ((org$pandalanguage$pandac$IRNode*) $tmp1641)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1641));
                panda$core$Int64 $tmp1644 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1615, offset1608);
                panda$core$Object* $tmp1645 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1586->subtypes, $tmp1644);
                panda$core$String* $tmp1646 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1628, $tmp1643, ((org$pandalanguage$pandac$Type*) $tmp1645), p_out);
                arg1628 = $tmp1646;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs1582, ((panda$core$Object*) arg1628));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1628));
    }
    $l1623:;
    int64_t $tmp1648 = $tmp1618 - i1615.value;
    if ($tmp1619) goto $l1649; else goto $l1650;
    $l1649:;
    if ((uint64_t) $tmp1648 >= 1) goto $l1647; else goto $l1622;
    $l1650:;
    if ((uint64_t) $tmp1648 > 1) goto $l1647; else goto $l1622;
    $l1647:;
    i1615.value += 1;
    goto $l1620;
    $l1622:;
    memset(&target1653, 0, sizeof(target1653));
    panda$core$Int64 $tmp1654 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs1582);
    panda$core$Bit $tmp1655 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1654, ((panda$core$Int64) { 0 }));
    if ($tmp1655.value) {
    {
        {
            panda$core$Object* $tmp1656 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs1582, ((panda$core$Int64) { 0 }));
            target1653 = ((panda$core$String*) $tmp1656);
        }
    }
    }
    else {
    {
        {
            target1653 = NULL;
        }
    }
    }
    panda$core$String* $tmp1658 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1653, m1534, isSuper1588, p_out);
    methodRef1657 = $tmp1658;
    panda$core$Bit $tmp1660 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1534);
    indirect1659 = $tmp1660;
    panda$core$String* $tmp1662 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1661 = $tmp1662;
    separator1663 = &$s1664;
    memset(&indirectVar1665, 0, sizeof(indirectVar1665));
    if (indirect1659.value) {
    {
        panda$core$String* $tmp1666 = panda$core$String$convert$R$panda$core$String(actualResultType1587);
        panda$core$String* $tmp1668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1666, &$s1667);
        panda$core$String* $tmp1669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1668, result1661);
        panda$core$String* $tmp1671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1669, &$s1670);
        (($fn1672) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1671);
        panda$core$String* $tmp1673 = panda$core$String$convert$R$panda$core$String(methodRef1657);
        panda$core$String* $tmp1675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1673, &$s1674);
        panda$core$String* $tmp1676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1675, result1661);
        panda$core$String* $tmp1678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, &$s1677);
        (($fn1679) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1678);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1663));
            separator1663 = &$s1680;
        }
    }
    }
    else {
    {
        panda$core$String* $tmp1681 = panda$core$String$convert$R$panda$core$String(actualResultType1587);
        panda$core$String* $tmp1683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1681, &$s1682);
        panda$core$String* $tmp1684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1683, result1661);
        panda$core$String* $tmp1686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1684, &$s1685);
        panda$core$String* $tmp1687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1686, methodRef1657);
        panda$core$String* $tmp1689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1687, &$s1688);
        (($fn1690) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1689);
    }
    }
    {
        ITable* $tmp1692 = ((panda$collections$Iterable*) argRefs1582)->$class->itable;
        while ($tmp1692->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1692 = $tmp1692->next;
        }
        $fn1694 $tmp1693 = $tmp1692->methods[0];
        panda$collections$Iterator* $tmp1695 = $tmp1693(((panda$collections$Iterable*) argRefs1582));
        arg$Iter1691 = $tmp1695;
        $l1696:;
        ITable* $tmp1698 = arg$Iter1691->$class->itable;
        while ($tmp1698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1698 = $tmp1698->next;
        }
        $fn1700 $tmp1699 = $tmp1698->methods[0];
        panda$core$Bit $tmp1701 = $tmp1699(arg$Iter1691);
        panda$core$Bit $tmp1702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1701);
        if (!$tmp1702.value) goto $l1697;
        {
            ITable* $tmp1704 = arg$Iter1691->$class->itable;
            while ($tmp1704->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1704 = $tmp1704->next;
            }
            $fn1706 $tmp1705 = $tmp1704->methods[1];
            panda$core$Object* $tmp1707 = $tmp1705(arg$Iter1691);
            arg1703 = ((panda$core$String*) $tmp1707);
            panda$core$String* $tmp1708 = panda$core$String$convert$R$panda$core$String(separator1663);
            panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, &$s1709);
            panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1710, arg1703);
            panda$core$String* $tmp1713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1711, &$s1712);
            (($fn1714) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1713);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1663));
                separator1663 = &$s1715;
            }
        }
        goto $l1696;
        $l1697:;
    }
    (($fn1717) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1716);
    panda$core$String* $tmp1718 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$Bit $tmp1719 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1718, actualResultType1587);
    if ($tmp1719.value) {
    {
        {
            panda$core$Int64 $tmp1721 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1586->subtypes);
            panda$core$Int64 $tmp1722 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1721, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp1723 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1586->subtypes, $tmp1722);
            panda$core$String* $tmp1724 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1661, ((org$pandalanguage$pandac$Type*) $tmp1723), p_t, p_out);
            tmp291720 = $tmp1724;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs1582));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1663));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1661));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1587));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar1665));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1586));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef1657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1534));
            }
            return tmp291720;
        }
    }
    }
    {
        tmp301725 = result1661;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs1582));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1663));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1661));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1587));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar1665));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1586));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef1657));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1653));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1534));
        }
        return tmp301725;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1727;
    panda$core$String* nonNullValue1730;
    panda$core$String* tmp311733;
    panda$core$String* wrapped1741;
    panda$core$String* tmp321808;
    panda$core$Bit $tmp1726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1726.value) {
    {
        panda$core$Object* $tmp1728 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1729 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1728), p_out);
        unwrapped1727 = $tmp1729;
        panda$core$Object* $tmp1731 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1732 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1727, ((org$pandalanguage$pandac$Type*) $tmp1731), p_dstType, p_out);
        nonNullValue1730 = $tmp1732;
        {
            panda$core$String* $tmp1735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1734, p_value);
            panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1735, &$s1736);
            panda$core$String* $tmp1738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1737, nonNullValue1730);
            panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1738, &$s1739);
            tmp311733 = $tmp1740;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unwrapped1727));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue1730));
            }
            return tmp311733;
        }
    }
    }
    panda$core$String* $tmp1742 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    wrapped1741 = $tmp1742;
    panda$core$String* $tmp1743 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1744 = panda$core$String$convert$R$panda$core$String($tmp1743);
    panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1744, &$s1745);
    panda$core$String* $tmp1747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1746, wrapped1741);
    panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1747, &$s1748);
    (($fn1750) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1749);
    panda$core$Bit $tmp1751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1751.value) {
    {
        panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1752, p_value);
        panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, &$s1754);
        (($fn1756) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1755);
        panda$core$Int64 $tmp1757 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1757;
    }
    }
    panda$core$String* $tmp1758 = panda$core$String$convert$R$panda$core$String(wrapped1741);
    panda$core$String* $tmp1760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1758, &$s1759);
    panda$core$String* $tmp1761 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1760, $tmp1761);
    panda$core$String* $tmp1764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1762, &$s1763);
    panda$core$Int64 $tmp1766 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_srcType);
    panda$core$Int64$wrapper* $tmp1767;
    $tmp1767 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp1767->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1767->refCount = 1;
    $tmp1767->value = $tmp1766;
    panda$core$String* $tmp1768 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1765, ((panda$core$Object*) $tmp1767));
    panda$core$String* $tmp1770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1768, &$s1769);
    panda$core$String* $tmp1771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1764, $tmp1770);
    (($fn1772) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1771);
    panda$core$String* $tmp1773 = panda$core$String$convert$R$panda$core$String(wrapped1741);
    panda$core$String* $tmp1775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1773, &$s1774);
    panda$core$String* $tmp1777 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_srcType)->name);
    panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1776, $tmp1777);
    panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1778, &$s1779);
    panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1775, $tmp1780);
    (($fn1782) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1781);
    panda$core$String* $tmp1783 = panda$core$String$convert$R$panda$core$String(wrapped1741);
    panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1783, &$s1784);
    (($fn1786) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1785);
    panda$core$String* $tmp1787 = panda$core$String$convert$R$panda$core$String(wrapped1741);
    panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1787, &$s1788);
    panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1789, p_value);
    panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1790, &$s1791);
    (($fn1793) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1792);
    panda$core$Bit $tmp1794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1794.value) {
    {
        panda$core$Int64 $tmp1795 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1795;
        (($fn1797) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1796);
        (($fn1799) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1798);
        panda$core$Int64 $tmp1800 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1800;
        panda$core$String* $tmp1801 = panda$core$String$convert$R$panda$core$String(wrapped1741);
        panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1801, &$s1802);
        (($fn1804) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1803);
        panda$core$Int64 $tmp1805 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1805;
        (($fn1807) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1806);
    }
    }
    {
        panda$core$String* $tmp1810 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1809, $tmp1810);
        panda$core$String* $tmp1813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1811, &$s1812);
        panda$core$String* $tmp1814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1813, wrapped1741);
        panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1814, &$s1815);
        tmp321808 = $tmp1816;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped1741));
        return tmp321808;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$FieldDecl* p_field, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1819;
    panda$core$String* baseRef1823;
    panda$core$String* tmp331826;
    panda$core$String* tmp341834;
    panda$core$Bit $tmp1817 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_field->annotations);
    if ($tmp1817.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_field->value != NULL }).value);
        panda$core$String* $tmp1818 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_field->value, p_out);
        return $tmp1818;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1821 = (($fn1820) p_base->$class->vtable[2])(p_base);
    org$pandalanguage$pandac$ClassDecl* $tmp1822 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1821);
    cl1819 = $tmp1822;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1819);
    panda$core$String* $tmp1824 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef1823 = $tmp1824;
    PANDA_ASSERT(((panda$core$Bit) { cl1819 != NULL }).value);
    panda$core$Bit $tmp1825 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1819);
    if ($tmp1825.value) {
    {
        {
            panda$core$String* $tmp1827 = panda$core$String$convert$R$panda$core$String(baseRef1823);
            panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1827, &$s1828);
            panda$core$String* $tmp1830 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
            panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, $tmp1830);
            panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1831, &$s1832);
            tmp331826 = $tmp1833;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1823));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1819));
            }
            return tmp331826;
        }
    }
    }
    {
        panda$core$String* $tmp1835 = panda$core$String$convert$R$panda$core$String(baseRef1823);
        panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1835, &$s1836);
        panda$core$String* $tmp1838 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
        panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1837, $tmp1838);
        panda$core$String* $tmp1841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1839, &$s1840);
        tmp341834 = $tmp1841;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1823));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1819));
        }
        return tmp341834;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1842;
    panda$core$String* wrapped1852;
    panda$core$String* nonNullValue1855;
    panda$core$String* tmp351858;
    panda$core$String* tmp361870;
    panda$core$String* tmp371871;
    panda$core$String* $tmp1844 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1843, $tmp1844);
    panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1845, &$s1846);
    panda$core$String* $tmp1848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1847, p_value);
    panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1848, &$s1849);
    result1842 = $tmp1850;
    panda$core$Bit $tmp1851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1851.value) {
    {
        panda$core$Object* $tmp1853 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1854 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1853), p_out);
        wrapped1852 = $tmp1854;
        panda$core$Object* $tmp1856 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1857 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1852, ((org$pandalanguage$pandac$Type*) $tmp1856), p_dstType, p_out);
        nonNullValue1855 = $tmp1857;
        {
            panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1859, p_value);
            panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, &$s1861);
            panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1862, nonNullValue1855);
            panda$core$String* $tmp1865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1863, &$s1864);
            panda$core$String* $tmp1866 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
            panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1865, $tmp1866);
            panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1867, &$s1868);
            tmp351858 = $tmp1869;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue1855));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped1852));
            }
            {
                tmp361870 = tmp351858;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1842));
                return tmp361870;
            }
        }
    }
    }
    {
        tmp371871 = result1842;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1842));
        return tmp371871;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1873 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1872, $tmp1873);
    panda$core$String* $tmp1876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1874, &$s1875);
    panda$core$String* $tmp1877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1876, p_value);
    panda$core$String* $tmp1879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1877, &$s1878);
    return $tmp1879;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1881 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1880, $tmp1881);
    panda$core$String* $tmp1884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1882, &$s1883);
    panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1884, p_value);
    panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1885, &$s1886);
    return $tmp1887;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1888;
    panda$core$String* tmp421891;
    org$pandalanguage$pandac$ClassDecl* srcClass1900;
    org$pandalanguage$pandac$ClassDecl* targetClass1902;
    panda$core$String* tmp381910;
    panda$core$String* tmp431912;
    panda$core$String* tmp391919;
    panda$core$String* tmp441921;
    panda$core$String* tmp401932;
    panda$core$String* tmp451934;
    panda$core$String* tmp411945;
    panda$core$String* tmp461947;
    panda$core$String* srcType1949;
    panda$core$String* dstType1951;
    panda$core$String* tmp471954;
    panda$core$String* tmp481955;
    memset(&op1888, 0, sizeof(op1888));
    panda$core$Bit $tmp1889 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1889.value) {
    {
        panda$core$Bit $tmp1890 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1890.value);
        {
            panda$core$String* $tmp1893 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            panda$core$String* $tmp1894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1892, $tmp1893);
            panda$core$String* $tmp1896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1894, &$s1895);
            panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1896, p_value);
            panda$core$String* $tmp1899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1897, &$s1898);
            tmp421891 = $tmp1899;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1888));
            return tmp421891;
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1901 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1900 = $tmp1901;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1900 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1903 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1902 = $tmp1903;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1902 != NULL }).value);
        panda$core$Bit $tmp1905 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1900);
        bool $tmp1904 = $tmp1905.value;
        if (!$tmp1904) goto $l1906;
        panda$core$Bit $tmp1907 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1902);
        panda$core$Bit $tmp1908 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1907);
        $tmp1904 = $tmp1908.value;
        $l1906:;
        panda$core$Bit $tmp1909 = { $tmp1904 };
        if ($tmp1909.value) {
        {
            {
                panda$core$String* $tmp1911 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp381910 = $tmp1911;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1902));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1900));
                }
                {
                    tmp431912 = tmp381910;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1888));
                    return tmp431912;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1914 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1900);
        panda$core$Bit $tmp1915 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1914);
        bool $tmp1913 = $tmp1915.value;
        if (!$tmp1913) goto $l1916;
        panda$core$Bit $tmp1917 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1902);
        $tmp1913 = $tmp1917.value;
        $l1916:;
        panda$core$Bit $tmp1918 = { $tmp1913 };
        if ($tmp1918.value) {
        {
            {
                panda$core$String* $tmp1920 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp391919 = $tmp1920;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1902));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1900));
                }
                {
                    tmp441921 = tmp391919;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1888));
                    return tmp441921;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1924 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1900);
        bool $tmp1923 = $tmp1924.value;
        if (!$tmp1923) goto $l1925;
        panda$core$Bit $tmp1926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1923 = $tmp1926.value;
        $l1925:;
        panda$core$Bit $tmp1927 = { $tmp1923 };
        bool $tmp1922 = $tmp1927.value;
        if (!$tmp1922) goto $l1928;
        panda$core$Object* $tmp1929 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1930 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1929), p_src);
        $tmp1922 = $tmp1930.value;
        $l1928:;
        panda$core$Bit $tmp1931 = { $tmp1922 };
        if ($tmp1931.value) {
        {
            {
                panda$core$String* $tmp1933 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp401932 = $tmp1933;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1902));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1900));
                }
                {
                    tmp451934 = tmp401932;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1888));
                    return tmp451934;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1937 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1902);
        bool $tmp1936 = $tmp1937.value;
        if (!$tmp1936) goto $l1938;
        panda$core$Bit $tmp1939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1936 = $tmp1939.value;
        $l1938:;
        panda$core$Bit $tmp1940 = { $tmp1936 };
        bool $tmp1935 = $tmp1940.value;
        if (!$tmp1935) goto $l1941;
        panda$core$Object* $tmp1942 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1943 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1942), p_target);
        $tmp1935 = $tmp1943.value;
        $l1941:;
        panda$core$Bit $tmp1944 = { $tmp1935 };
        if ($tmp1944.value) {
        {
            {
                panda$core$String* $tmp1946 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp411945 = $tmp1946;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1902));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1900));
                }
                {
                    tmp461947 = tmp411945;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1888));
                    return tmp461947;
                }
            }
        }
        }
        }
        }
        }
        {
            op1888 = &$s1948;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1902));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1900));
        }
    }
    }
    panda$core$String* $tmp1950 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1949 = $tmp1950;
    panda$core$String* $tmp1952 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1951 = $tmp1952;
    panda$core$Bit $tmp1953 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1949, dstType1951);
    if ($tmp1953.value) {
    {
        {
            tmp471954 = p_value;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType1951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType1949));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1888));
            }
            return tmp471954;
        }
    }
    }
    {
        panda$core$String* $tmp1957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1956, dstType1951);
        panda$core$String* $tmp1959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1957, &$s1958);
        panda$core$String* $tmp1960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1959, p_value);
        panda$core$String* $tmp1962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1960, &$s1961);
        tmp481955 = $tmp1962;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType1951));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType1949));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1888));
        }
        return tmp481955;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef1963;
    panda$core$String* tmp491965;
    panda$core$String* $tmp1964 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef1963 = $tmp1964;
    {
        org$pandalanguage$pandac$Type* $tmp1967 = (($fn1966) p_base->$class->vtable[2])(p_base);
        panda$core$String* $tmp1968 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, baseRef1963, $tmp1967, p_t, p_out);
        tmp491965 = $tmp1968;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1963));
        return tmp491965;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_target, org$pandalanguage$pandac$IRNode* p_initCall, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1084_91969;
    org$pandalanguage$pandac$Type* initType1971;
    org$pandalanguage$pandac$MethodRef* initMref1973;
    panda$collections$ImmutableArray* initArgs1975;
    org$pandalanguage$pandac$ClassDecl* cl1977;
    panda$core$String* t1979;
    org$pandalanguage$pandac$IRNode* $match$1090_211987;
    panda$collections$ImmutableArray* args1989;
    panda$core$String* value1993;
    panda$core$String* tmp2005;
    panda$core$String* tmp502022;
    panda$core$String* result2023;
    panda$core$String* classPtr2040;
    panda$core$String* className2042;
    {
        $match$1084_91969 = p_initCall;
        panda$core$Bit $tmp1970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1084_91969->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1970.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1972 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1084_91969->$data + 16));
            initType1971 = *$tmp1972;
            org$pandalanguage$pandac$MethodRef** $tmp1974 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1084_91969->$data + 24));
            initMref1973 = *$tmp1974;
            panda$collections$ImmutableArray** $tmp1976 = ((panda$collections$ImmutableArray**) ((char*) $match$1084_91969->$data + 32));
            initArgs1975 = *$tmp1976;
            org$pandalanguage$pandac$ClassDecl* $tmp1978 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
            cl1977 = $tmp1978;
            PANDA_ASSERT(((panda$core$Bit) { cl1977 != NULL }).value);
            panda$core$String* $tmp1980 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            t1979 = $tmp1980;
            panda$core$Bit $tmp1982 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            bool $tmp1981 = $tmp1982.value;
            if ($tmp1981) goto $l1983;
            org$pandalanguage$pandac$Type* $tmp1984 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1985 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1984);
            $tmp1981 = $tmp1985.value;
            $l1983:;
            panda$core$Bit $tmp1986 = { $tmp1981 };
            if ($tmp1986.value) {
            {
                {
                    $match$1090_211987 = p_initCall;
                    panda$core$Bit $tmp1988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1090_211987->$rawValue, ((panda$core$Int64) { 5 }));
                    if ($tmp1988.value) {
                    {
                        panda$collections$ImmutableArray** $tmp1990 = ((panda$collections$ImmutableArray**) ((char*) $match$1090_211987->$data + 32));
                        args1989 = *$tmp1990;
                        panda$core$Int64 $tmp1991 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args1989);
                        panda$core$Bit $tmp1992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1991, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1992.value);
                        panda$core$Object* $tmp1994 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args1989, ((panda$core$Int64) { 0 }));
                        panda$core$String* $tmp1995 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1994), p_out);
                        value1993 = $tmp1995;
                        panda$core$String* $tmp1997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1996, t1979);
                        panda$core$String* $tmp1999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1997, &$s1998);
                        panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1999, value1993);
                        panda$core$String* $tmp2002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2000, &$s2001);
                        return $tmp2002;
                    }
                    }
                }
            }
            }
            panda$core$Bit $tmp2003 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1977);
            if ($tmp2003.value) {
            {
                panda$core$Int64 $tmp2004 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
                self->varCount = $tmp2004;
                panda$core$Int64$wrapper* $tmp2007;
                $tmp2007 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
                $tmp2007->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2007->refCount = 1;
                $tmp2007->value = self->varCount;
                panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2006, ((panda$core$Object*) $tmp2007));
                panda$core$String* $tmp2010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2008, &$s2009);
                tmp2005 = $tmp2010;
                panda$core$String* $tmp2011 = panda$core$String$convert$R$panda$core$String(t1979);
                panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2011, &$s2012);
                panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, tmp2005);
                panda$core$String* $tmp2016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, &$s2015);
                (($fn2017) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2016);
                panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2018, tmp2005);
                panda$core$String* $tmp2021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2019, &$s2020);
                org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType1971, initMref1973, initArgs1975, $tmp2021, p_out);
                {
                    tmp502022 = tmp2005;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tmp2005));
                    return tmp502022;
                }
            }
            }
            panda$core$String* $tmp2024 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result2023 = $tmp2024;
            panda$core$String* $tmp2025 = panda$core$String$convert$R$panda$core$String(t1979);
            panda$core$String* $tmp2027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2025, &$s2026);
            panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2027, result2023);
            panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2028, &$s2029);
            panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2030, t1979);
            panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2031, &$s2032);
            panda$core$Int64 $tmp2034 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
            panda$core$Int64$wrapper* $tmp2035;
            $tmp2035 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp2035->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2035->refCount = 1;
            $tmp2035->value = $tmp2034;
            panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2033, ((panda$core$Object*) $tmp2035));
            panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2036, &$s2037);
            (($fn2039) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2038);
            panda$core$String* $tmp2041 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            classPtr2040 = $tmp2041;
            memset(&className2042, 0, sizeof(className2042));
            panda$core$Bit $tmp2043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp2043.value) {
            {
                {
                    panda$core$Object* $tmp2044 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
                    panda$core$String* $tmp2045 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2044));
                    className2042 = $tmp2045;
                }
            }
            }
            else {
            {
                {
                    panda$core$String* $tmp2046 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
                    className2042 = $tmp2046;
                }
            }
            }
            panda$core$String* $tmp2047 = panda$core$String$convert$R$panda$core$String(result2023);
            panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, &$s2048);
            panda$core$String* $tmp2050 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1977)->name);
            panda$core$String* $tmp2051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2049, $tmp2050);
            panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2051, &$s2052);
            panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2053, &$s2054);
            (($fn2056) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2055);
            panda$core$String* $tmp2057 = panda$core$String$convert$R$panda$core$String(result2023);
            panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2057, &$s2058);
            (($fn2060) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2059);
            panda$core$String* $tmp2061 = panda$core$String$convert$R$panda$core$String(result2023);
            panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2061, &$s2062);
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType1971, initMref1973, initArgs1975, $tmp2063, p_out);
            return result2023;
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
    panda$core$String* $tmp2064 = panda$core$UInt64$convert$R$panda$core$String(p_int);
    return $tmp2064;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$UInt64 p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$UInt64$wrapper* $tmp2066;
    $tmp2066 = (panda$core$UInt64$wrapper*) pandaZAlloc(24);
    $tmp2066->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp2066->refCount = 1;
    $tmp2066->value = p_int;
    panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2065, ((panda$core$Object*) $tmp2066));
    return $tmp2067;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Real64 p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result2068;
    panda$core$Char8 $tmp2070;
    panda$core$String* tmp512072;
    panda$core$String* tmp522073;
    panda$core$String* $tmp2069 = panda$core$Real64$convert$R$panda$core$String(p_real);
    result2068 = $tmp2069;
    panda$core$Char8$init$panda$core$UInt8(&$tmp2070, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp2071 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result2068, $tmp2070);
    if ($tmp2071.value) {
    {
        {
            tmp512072 = result2068;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2068));
            return tmp512072;
        }
    }
    }
    {
        panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result2068, &$s2074);
        tmp522073 = $tmp2075;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2068));
        return tmp522073;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_bit, panda$io$IndentedOutputStream* p_out) {
    if (p_bit.value) {
    {
        return &$s2076;
    }
    }
    return &$s2077;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2078 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2078;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2080;
    panda$collections$Iterator* c$Iter2101;
    panda$core$Char8 c2114;
    panda$core$String* tmp532149;
    panda$core$Int64 $tmp2079 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2079;
    panda$core$Int64$wrapper* $tmp2082;
    $tmp2082 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp2082->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2082->refCount = 1;
    $tmp2082->value = self->varCount;
    panda$core$String* $tmp2083 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2081, ((panda$core$Object*) $tmp2082));
    panda$core$String* $tmp2085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2083, &$s2084);
    result2080 = $tmp2085;
    org$pandalanguage$pandac$Type* $tmp2086 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2087 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2086);
    panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2088, result2080);
    panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2089, &$s2090);
    panda$core$Int64$wrapper* $tmp2093;
    $tmp2093 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp2093->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2093->refCount = 1;
    $tmp2093->value = ((panda$core$Int64) { -999 });
    panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2092, ((panda$core$Object*) $tmp2093));
    panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2094, &$s2095);
    panda$core$String* $tmp2097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, $tmp2096);
    panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2097, &$s2098);
    (($fn2100) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2099);
    {
        panda$collections$ListView* $tmp2102 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2103 = ((panda$collections$Iterable*) $tmp2102)->$class->itable;
        while ($tmp2103->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2103 = $tmp2103->next;
        }
        $fn2105 $tmp2104 = $tmp2103->methods[0];
        panda$collections$Iterator* $tmp2106 = $tmp2104(((panda$collections$Iterable*) $tmp2102));
        c$Iter2101 = $tmp2106;
        $l2107:;
        ITable* $tmp2109 = c$Iter2101->$class->itable;
        while ($tmp2109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2109 = $tmp2109->next;
        }
        $fn2111 $tmp2110 = $tmp2109->methods[0];
        panda$core$Bit $tmp2112 = $tmp2110(c$Iter2101);
        panda$core$Bit $tmp2113 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2112);
        if (!$tmp2113.value) goto $l2108;
        {
            ITable* $tmp2115 = c$Iter2101->$class->itable;
            while ($tmp2115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2115 = $tmp2115->next;
            }
            $fn2117 $tmp2116 = $tmp2115->methods[1];
            panda$core$Object* $tmp2118 = $tmp2116(c$Iter2101);
            c2114 = ((panda$core$Char8$wrapper*) $tmp2118)->value;
            panda$core$UInt8 $tmp2120 = panda$core$Char8$convert$R$panda$core$UInt8(c2114);
            panda$core$UInt8$wrapper* $tmp2121;
            $tmp2121 = (panda$core$UInt8$wrapper*) pandaZAlloc(13);
            $tmp2121->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
            $tmp2121->refCount = 1;
            $tmp2121->value = $tmp2120;
            ITable* $tmp2123 = ((panda$core$Formattable*) $tmp2121)->$class->itable;
            while ($tmp2123->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2123 = $tmp2123->next;
            }
            $fn2125 $tmp2124 = $tmp2123->methods[0];
            panda$core$String* $tmp2126 = $tmp2124(((panda$core$Formattable*) $tmp2121), &$s2122);
            panda$core$String* $tmp2128 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp2126, &$s2127);
            panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2119, $tmp2128);
            panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2129, &$s2130);
            (($fn2132) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2131);
        }
        goto $l2107;
        $l2108:;
    }
    panda$collections$ListView* $tmp2134 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2135 = ((panda$collections$CollectionView*) $tmp2134)->$class->itable;
    while ($tmp2135->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2135 = $tmp2135->next;
    }
    $fn2137 $tmp2136 = $tmp2135->methods[0];
    panda$core$Int64 $tmp2138 = $tmp2136(((panda$collections$CollectionView*) $tmp2134));
    panda$core$Int64$wrapper* $tmp2139;
    $tmp2139 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp2139->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2139->refCount = 1;
    $tmp2139->value = $tmp2138;
    panda$core$String* $tmp2140 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2133, ((panda$core$Object*) $tmp2139));
    panda$core$String* $tmp2142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, &$s2141);
    panda$core$Int64 $tmp2143 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$Int64$wrapper* $tmp2144;
    $tmp2144 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp2144->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2144->refCount = 1;
    $tmp2144->value = $tmp2143;
    panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2142, ((panda$core$Object*) $tmp2144));
    panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2145, &$s2146);
    (($fn2148) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2147);
    {
        panda$core$String* $tmp2151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2150, result2080);
        panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2151, &$s2152);
        tmp532149 = $tmp2153;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2080));
        return tmp532149;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    return &$s2154;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2156 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2155, $tmp2156);
    panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, &$s2158);
    return $tmp2159;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2160;
    org$pandalanguage$pandac$ClassDecl* cl2162;
    panda$core$String* bit2166;
    panda$core$String* tmp542179;
    panda$core$String* $tmp2161 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2160 = $tmp2161;
    org$pandalanguage$pandac$Type* $tmp2164 = (($fn2163) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2165 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2164);
    cl2162 = $tmp2165;
    memset(&bit2166, 0, sizeof(bit2166));
    panda$core$Bit $tmp2167 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2162);
    if ($tmp2167.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2169 = (($fn2168) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2170 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2169->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2170.value) {
        {
            {
                bit2166 = &$s2171;
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2172, ref2160);
                panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2174);
                bit2166 = $tmp2175;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2176 = panda$core$String$convert$R$panda$core$String(ref2160);
            panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, &$s2177);
            bit2166 = $tmp2178;
        }
    }
    }
    {
        panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2180, bit2166);
        panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2181, &$s2182);
        tmp542179 = $tmp2183;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2162));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref2160));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2166));
        }
        return tmp542179;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2184;
    org$pandalanguage$pandac$ClassDecl* cl2186;
    panda$core$String* bit2190;
    panda$core$String* tmp552202;
    panda$core$String* $tmp2185 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2184 = $tmp2185;
    org$pandalanguage$pandac$Type* $tmp2188 = (($fn2187) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2189 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2188);
    cl2186 = $tmp2189;
    memset(&bit2190, 0, sizeof(bit2190));
    panda$core$Bit $tmp2191 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2186);
    if ($tmp2191.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2193 = (($fn2192) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2194 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2193->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2194.value) {
        {
            {
                bit2190 = &$s2195;
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2196 = panda$core$String$convert$R$panda$core$String(ref2184);
                panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2196, &$s2197);
                bit2190 = $tmp2198;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2199 = panda$core$String$convert$R$panda$core$String(ref2184);
            panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2199, &$s2200);
            bit2190 = $tmp2201;
        }
    }
    }
    {
        panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2203, bit2190);
        panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2204, &$s2205);
        tmp552202 = $tmp2206;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2186));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref2184));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2190));
        }
        return tmp552202;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2208;
    panda$core$String* tmp562212;
    panda$core$String* tmp572218;
    panda$core$Bit $tmp2207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2207.value);
    panda$core$Object* $tmp2209 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2210 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2209));
    cl2208 = $tmp2210;
    PANDA_ASSERT(((panda$core$Bit) { cl2208 != NULL }).value);
    panda$core$Bit $tmp2211 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2208);
    if ($tmp2211.value) {
    {
        {
            panda$core$String* $tmp2214 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp2215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2213, $tmp2214);
            panda$core$String* $tmp2217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2215, &$s2216);
            tmp562212 = $tmp2217;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2208));
            return tmp562212;
        }
    }
    }
    else {
    {
        {
            tmp572218 = &$s2219;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2208));
            return tmp572218;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2208));
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_base, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef2220;
    panda$core$String* result2222;
    org$pandalanguage$pandac$parser$Token$Kind $match$1224_92224;
    panda$core$String* tmp582226;
    panda$core$String* tmp592232;
    panda$core$String* tmp602238;
    panda$core$String* $tmp2221 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef2220 = $tmp2221;
    panda$core$String* $tmp2223 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2222 = $tmp2223;
    {
        $match$1224_92224 = p_op;
        panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1224_92224.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp2225.value) {
        {
            {
                panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2227, baseRef2220);
                panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2228, &$s2229);
                tmp582226 = $tmp2230;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2222));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2220));
                }
                return tmp582226;
            }
        }
        }
        else {
        panda$core$Bit $tmp2231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1224_92224.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp2231.value) {
        {
            {
                panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2233, baseRef2220);
                panda$core$String* $tmp2236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2234, &$s2235);
                tmp592232 = $tmp2236;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2222));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2220));
                }
                return tmp592232;
            }
        }
        }
        else {
        panda$core$Bit $tmp2237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1224_92224.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp2237.value) {
        {
            {
                panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2239, baseRef2220);
                panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2240, &$s2241);
                tmp602238 = $tmp2242;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2222));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2220));
                }
                return tmp602238;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2222));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2220));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2248;
    panda$core$String* trueLabel2250;
    panda$core$String* falseLabel2252;
    panda$core$String* merge2254;
    panda$core$String* result2256;
    panda$core$String* tmp612305;
    org$pandalanguage$pandac$Type* $tmp2244 = (($fn2243) p_ifTrue->$class->vtable[2])(p_ifTrue);
    org$pandalanguage$pandac$Type* $tmp2246 = (($fn2245) p_ifFalse->$class->vtable[2])(p_ifFalse);
    panda$core$Bit $tmp2247 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2244, $tmp2246);
    PANDA_ASSERT($tmp2247.value);
    panda$core$String* $tmp2249 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2248 = $tmp2249;
    panda$core$String* $tmp2251 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2250 = $tmp2251;
    panda$core$String* $tmp2253 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2252 = $tmp2253;
    panda$core$String* $tmp2255 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2254 = $tmp2255;
    panda$core$String* $tmp2257 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2256 = $tmp2257;
    org$pandalanguage$pandac$Type* $tmp2259 = (($fn2258) p_ifTrue->$class->vtable[2])(p_ifTrue);
    panda$core$String* $tmp2260 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2259);
    panda$core$String* $tmp2261 = panda$core$String$convert$R$panda$core$String($tmp2260);
    panda$core$String* $tmp2263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2261, &$s2262);
    panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2263, result2256);
    panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, &$s2265);
    (($fn2267) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2266);
    panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2268, testRef2248);
    panda$core$String* $tmp2271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, &$s2270);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2271, trueLabel2250);
    panda$core$String* $tmp2274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, &$s2273);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2274, falseLabel2252);
    panda$core$String* $tmp2277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2275, &$s2276);
    (($fn2278) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2277);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2250, p_out);
    panda$core$String* $tmp2279 = panda$core$String$convert$R$panda$core$String(result2256);
    panda$core$String* $tmp2281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2279, &$s2280);
    panda$core$String* $tmp2282 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifTrue, p_out);
    panda$core$String* $tmp2283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2281, $tmp2282);
    panda$core$String* $tmp2285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2283, &$s2284);
    (($fn2286) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2285);
    panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2287, merge2254);
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, &$s2289);
    (($fn2291) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2290);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2252, p_out);
    panda$core$String* $tmp2292 = panda$core$String$convert$R$panda$core$String(result2256);
    panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, &$s2293);
    panda$core$String* $tmp2295 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifFalse, p_out);
    panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2294, $tmp2295);
    panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2296, &$s2297);
    (($fn2299) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2298);
    panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2300, merge2254);
    panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2301, &$s2302);
    (($fn2304) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2303);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2254, p_out);
    {
        tmp612305 = result2256;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef2248));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2256));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) merge2254));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel2252));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel2250));
        }
        return tmp612305;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2306 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2306;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2307;
    panda$core$String* tmp622309;
    panda$core$String* $tmp2308 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    result2307 = $tmp2308;
    panda$collections$Array$add$panda$collections$Array$T(self->extraEffects, ((panda$core$Object*) p_stmt));
    {
        tmp622309 = result2307;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2307));
        return tmp622309;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1268_92310;
    org$pandalanguage$pandac$IRNode* left2312;
    org$pandalanguage$pandac$parser$Token$Kind op2314;
    org$pandalanguage$pandac$IRNode* right2316;
    org$pandalanguage$pandac$Type* type2320;
    org$pandalanguage$pandac$MethodRef* target2322;
    panda$collections$ImmutableArray* args2324;
    org$pandalanguage$pandac$IRNode* base2328;
    org$pandalanguage$pandac$Type* type2330;
    panda$core$Bit explicit2332;
    panda$core$UInt64 value2336;
    panda$core$UInt64 value2340;
    panda$core$Real64 value2344;
    panda$core$Bit value2348;
    org$pandalanguage$pandac$Type* type2352;
    org$pandalanguage$pandac$IRNode* initCall2354;
    org$pandalanguage$pandac$Variable* variable2358;
    org$pandalanguage$pandac$IRNode* base2362;
    org$pandalanguage$pandac$FieldDecl* field2364;
    panda$core$String* str2368;
    org$pandalanguage$pandac$Type* t2374;
    org$pandalanguage$pandac$IRNode* base2378;
    panda$core$Int64 id2380;
    panda$core$String* value2382;
    panda$core$Int64 id2386;
    panda$core$String* result2388;
    org$pandalanguage$pandac$Position pos2392;
    org$pandalanguage$pandac$Type* type2394;
    org$pandalanguage$pandac$IRNode* value2398;
    org$pandalanguage$pandac$IRNode* value2402;
    org$pandalanguage$pandac$parser$Token$Kind op2406;
    org$pandalanguage$pandac$IRNode* base2408;
    org$pandalanguage$pandac$IRNode* test2412;
    org$pandalanguage$pandac$IRNode* ifTrue2414;
    org$pandalanguage$pandac$IRNode* ifFalse2416;
    org$pandalanguage$pandac$IRNode* base2422;
    org$pandalanguage$pandac$IRNode* stmt2424;
    {
        $match$1268_92310 = p_expr;
        panda$core$Bit $tmp2311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp2311.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2313 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 24));
            left2312 = *$tmp2313;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2315 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1268_92310->$data + 32));
            op2314 = *$tmp2315;
            org$pandalanguage$pandac$IRNode** $tmp2317 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 40));
            right2316 = *$tmp2317;
            panda$core$String* $tmp2318 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, left2312, op2314, right2316, p_out);
            return $tmp2318;
        }
        }
        else {
        panda$core$Bit $tmp2319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp2319.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2321 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1268_92310->$data + 16));
            type2320 = *$tmp2321;
            org$pandalanguage$pandac$MethodRef** $tmp2323 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1268_92310->$data + 24));
            target2322 = *$tmp2323;
            panda$collections$ImmutableArray** $tmp2325 = ((panda$collections$ImmutableArray**) ((char*) $match$1268_92310->$data + 32));
            args2324 = *$tmp2325;
            panda$core$String* $tmp2326 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, type2320, target2322, args2324, p_out);
            return $tmp2326;
        }
        }
        else {
        panda$core$Bit $tmp2327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp2327.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2329 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 16));
            base2328 = *$tmp2329;
            org$pandalanguage$pandac$Type** $tmp2331 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1268_92310->$data + 24));
            type2330 = *$tmp2331;
            panda$core$Bit* $tmp2333 = ((panda$core$Bit*) ((char*) $match$1268_92310->$data + 32));
            explicit2332 = *$tmp2333;
            panda$core$String* $tmp2334 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base2328, type2330, p_out);
            return $tmp2334;
        }
        }
        else {
        panda$core$Bit $tmp2335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2335.value) {
        {
            panda$core$UInt64* $tmp2337 = ((panda$core$UInt64*) ((char*) $match$1268_92310->$data + 24));
            value2336 = *$tmp2337;
            panda$core$String* $tmp2338 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2336, p_out);
            return $tmp2338;
        }
        }
        else {
        panda$core$Bit $tmp2339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp2339.value) {
        {
            panda$core$UInt64* $tmp2341 = ((panda$core$UInt64*) ((char*) $match$1268_92310->$data + 24));
            value2340 = *$tmp2341;
            panda$core$String* $tmp2342 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2340, p_out);
            return $tmp2342;
        }
        }
        else {
        panda$core$Bit $tmp2343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2343.value) {
        {
            panda$core$Real64* $tmp2345 = ((panda$core$Real64*) ((char*) $match$1268_92310->$data + 24));
            value2344 = *$tmp2345;
            panda$core$String* $tmp2346 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(self, value2344, ((panda$io$OutputStream*) p_out));
            return $tmp2346;
        }
        }
        else {
        panda$core$Bit $tmp2347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp2347.value) {
        {
            panda$core$Bit* $tmp2349 = ((panda$core$Bit*) ((char*) $match$1268_92310->$data + 24));
            value2348 = *$tmp2349;
            panda$core$String* $tmp2350 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, value2348, p_out);
            return $tmp2350;
        }
        }
        else {
        panda$core$Bit $tmp2351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp2351.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2353 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1268_92310->$data + 16));
            type2352 = *$tmp2353;
            org$pandalanguage$pandac$IRNode** $tmp2355 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 24));
            initCall2354 = *$tmp2355;
            panda$core$String* $tmp2356 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, type2352, initCall2354, p_out);
            return $tmp2356;
        }
        }
        else {
        panda$core$Bit $tmp2357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2357.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2359 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1268_92310->$data + 16));
            variable2358 = *$tmp2359;
            panda$core$String* $tmp2360 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, variable2358, p_out);
            return $tmp2360;
        }
        }
        else {
        panda$core$Bit $tmp2361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2361.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2363 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 24));
            base2362 = *$tmp2363;
            org$pandalanguage$pandac$FieldDecl** $tmp2365 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1268_92310->$data + 32));
            field2364 = *$tmp2365;
            panda$core$String* $tmp2366 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, base2362, field2364, p_out);
            return $tmp2366;
        }
        }
        else {
        panda$core$Bit $tmp2367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2367.value) {
        {
            panda$core$String** $tmp2369 = ((panda$core$String**) ((char*) $match$1268_92310->$data + 16));
            str2368 = *$tmp2369;
            panda$core$String* $tmp2370 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, str2368, p_out);
            return $tmp2370;
        }
        }
        else {
        panda$core$Bit $tmp2371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2371.value) {
        {
            panda$core$String* $tmp2372 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(self, p_out);
            return $tmp2372;
        }
        }
        else {
        panda$core$Bit $tmp2373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2373.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2375 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1268_92310->$data + 16));
            t2374 = *$tmp2375;
            panda$core$String* $tmp2376 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, t2374, p_out);
            return $tmp2376;
        }
        }
        else {
        panda$core$Bit $tmp2377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2377.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2379 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 0));
            base2378 = *$tmp2379;
            panda$core$Int64* $tmp2381 = ((panda$core$Int64*) ((char*) $match$1268_92310->$data + 8));
            id2380 = *$tmp2381;
            panda$core$String* $tmp2383 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2378, p_out);
            value2382 = $tmp2383;
            panda$core$Int64$wrapper* $tmp2384;
            $tmp2384 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp2384->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2384->refCount = 1;
            $tmp2384->value = id2380;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp2384), ((panda$core$Object*) value2382));
            return value2382;
        }
        }
        else {
        panda$core$Bit $tmp2385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2385.value) {
        {
            panda$core$Int64* $tmp2387 = ((panda$core$Int64*) ((char*) $match$1268_92310->$data + 24));
            id2386 = *$tmp2387;
            panda$core$Int64$wrapper* $tmp2389;
            $tmp2389 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp2389->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2389->refCount = 1;
            $tmp2389->value = id2386;
            panda$core$Object* $tmp2390 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) $tmp2389));
            result2388 = ((panda$core$String*) $tmp2390);
            PANDA_ASSERT(((panda$core$Bit) { result2388 != NULL }).value);
            return result2388;
        }
        }
        else {
        panda$core$Bit $tmp2391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2391.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2393 = ((org$pandalanguage$pandac$Position*) ((char*) $match$1268_92310->$data + 0));
            pos2392 = *$tmp2393;
            org$pandalanguage$pandac$Type** $tmp2395 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1268_92310->$data + 16));
            type2394 = *$tmp2395;
            panda$core$String* $tmp2396 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, type2394, p_out);
            return $tmp2396;
        }
        }
        else {
        panda$core$Bit $tmp2397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2397.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2399 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 16));
            value2398 = *$tmp2399;
            panda$core$String* $tmp2400 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2398, p_out);
            return $tmp2400;
        }
        }
        else {
        panda$core$Bit $tmp2401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2401.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2403 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 16));
            value2402 = *$tmp2403;
            panda$core$String* $tmp2404 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2402, p_out);
            return $tmp2404;
        }
        }
        else {
        panda$core$Bit $tmp2405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2405.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2407 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1268_92310->$data + 16));
            op2406 = *$tmp2407;
            org$pandalanguage$pandac$IRNode** $tmp2409 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 24));
            base2408 = *$tmp2409;
            panda$core$String* $tmp2410 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, op2406, base2408, p_out);
            return $tmp2410;
        }
        }
        else {
        panda$core$Bit $tmp2411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2411.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2413 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 16));
            test2412 = *$tmp2413;
            org$pandalanguage$pandac$IRNode** $tmp2415 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 24));
            ifTrue2414 = *$tmp2415;
            org$pandalanguage$pandac$IRNode** $tmp2417 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 32));
            ifFalse2416 = *$tmp2417;
            panda$core$String* $tmp2418 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, test2412, ifTrue2414, ifFalse2416, p_out);
            return $tmp2418;
        }
        }
        else {
        panda$core$Bit $tmp2419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp2419.value) {
        {
            panda$core$String* $tmp2420 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2420;
        }
        }
        else {
        panda$core$Bit $tmp2421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92310->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2421.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2423 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 0));
            base2422 = *$tmp2423;
            org$pandalanguage$pandac$IRNode** $tmp2425 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92310->$data + 8));
            stmt2424 = *$tmp2425;
            panda$core$String* $tmp2426 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2422, stmt2424, p_out);
            return $tmp2426;
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
    panda$core$String* $tmp2427 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2427;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2431;
    org$pandalanguage$pandac$IRNode* s2443;
    (($fn2429) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2428);
    panda$core$Int64 $tmp2430 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2430;
    {
        ITable* $tmp2432 = ((panda$collections$Iterable*) p_statements)->$class->itable;
        while ($tmp2432->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2432 = $tmp2432->next;
        }
        $fn2434 $tmp2433 = $tmp2432->methods[0];
        panda$collections$Iterator* $tmp2435 = $tmp2433(((panda$collections$Iterable*) p_statements));
        s$Iter2431 = $tmp2435;
        $l2436:;
        ITable* $tmp2438 = s$Iter2431->$class->itable;
        while ($tmp2438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2438 = $tmp2438->next;
        }
        $fn2440 $tmp2439 = $tmp2438->methods[0];
        panda$core$Bit $tmp2441 = $tmp2439(s$Iter2431);
        panda$core$Bit $tmp2442 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2441);
        if (!$tmp2442.value) goto $l2437;
        {
            ITable* $tmp2444 = s$Iter2431->$class->itable;
            while ($tmp2444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2444 = $tmp2444->next;
            }
            $fn2446 $tmp2445 = $tmp2444->methods[1];
            panda$core$Object* $tmp2447 = $tmp2445(s$Iter2431);
            s2443 = ((org$pandalanguage$pandac$IRNode*) $tmp2447);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2443, p_out);
        }
        goto $l2436;
        $l2437:;
    }
    panda$core$Int64 $tmp2448 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2448;
    (($fn2450) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2449);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$1337_92451;
    panda$core$String* ptr2456;
    panda$core$String* arg2459;
    panda$core$String* base2481;
    panda$core$String* index2484;
    panda$core$String* value2487;
    {
        $match$1337_92451 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp2453 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1337_92451, &$s2452);
        if ($tmp2453.value) {
        {
            panda$core$Int64 $tmp2454 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2454, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2455.value);
            panda$core$Object* $tmp2457 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2458 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2457), p_out);
            ptr2456 = $tmp2458;
            panda$core$Object* $tmp2460 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2461 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2460));
            panda$core$String* $tmp2462 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2461, p_out);
            arg2459 = $tmp2462;
            panda$core$String* $tmp2464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2463, arg2459);
            panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2464, &$s2465);
            panda$core$String* $tmp2467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, ptr2456);
            panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, &$s2468);
            (($fn2470) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2469);
        }
        }
        else {
        panda$core$Bit $tmp2472 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1337_92451, &$s2471);
        if ($tmp2472.value) {
        {
            panda$core$Int64 $tmp2473 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2473, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2474.value);
            panda$core$Object* $tmp2475 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2476 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2475));
            org$pandalanguage$pandac$Type* $tmp2478 = (($fn2477) $tmp2476->$class->vtable[2])($tmp2476);
            panda$core$Int64 $tmp2479 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2478->subtypes);
            panda$core$Bit $tmp2480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2479, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2480.value);
            panda$core$Object* $tmp2482 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2483 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2482), p_out);
            base2481 = $tmp2483;
            panda$core$Object* $tmp2485 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2486 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2485), p_out);
            index2484 = $tmp2486;
            panda$core$Object* $tmp2488 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2489 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2488));
            panda$core$String* $tmp2490 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2489, p_out);
            value2487 = $tmp2490;
            panda$core$String* $tmp2491 = panda$core$String$convert$R$panda$core$String(base2481);
            panda$core$String* $tmp2493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2491, &$s2492);
            panda$core$String* $tmp2494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2493, index2484);
            panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2494, &$s2495);
            panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2496, value2487);
            panda$core$String* $tmp2499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2497, &$s2498);
            (($fn2500) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2499);
        }
        }
        else {
        panda$core$Bit $tmp2502 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1337_92451, &$s2501);
        if ($tmp2502.value) {
        {
            panda$core$Int64 $tmp2503 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2503, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2504.value);
            panda$core$Object* $tmp2506 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2507 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2506), p_out);
            panda$core$String* $tmp2508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2505, $tmp2507);
            panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2508, &$s2509);
            (($fn2511) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2510);
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
    org$pandalanguage$pandac$MethodDecl* m2512;
    org$pandalanguage$pandac$Type* actualMethodType2516;
    panda$core$String* actualResultType2517;
    panda$core$Bit isSuper2518;
    panda$collections$Array* argRefs2538;
    panda$core$Int64 offset2541;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2546;
    panda$core$String* arg2561;
    panda$core$String* targetRef2586;
    panda$core$String* methodRef2590;
    panda$core$String* separator2592;
    panda$core$String* indirectVar2596;
    panda$core$String* resultType2600;
    panda$collections$Iterator* a$Iter2624;
    panda$core$String* a2636;
    m2512 = p_mref->value;
    panda$core$Bit $tmp2514 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2512->owner)->name, &$s2513);
    if ($tmp2514.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_mref, p_args, p_out);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2512));
            return;
        }
    }
    }
    panda$core$Bit $tmp2515 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2512->owner);
    if ($tmp2515.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2512);
    }
    }
    memset(&actualMethodType2516, 0, sizeof(actualMethodType2516));
    memset(&actualResultType2517, 0, sizeof(actualResultType2517));
    panda$core$Int64 $tmp2520 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp2521 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2520, ((panda$core$Int64) { 1 }));
    bool $tmp2519 = $tmp2521.value;
    if (!$tmp2519) goto $l2522;
    panda$core$Object* $tmp2523 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2523)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp2519 = $tmp2524.value;
    $l2522:;
    panda$core$Bit $tmp2525 = { $tmp2519 };
    isSuper2518 = $tmp2525;
    panda$core$Bit $tmp2527 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2518);
    bool $tmp2526 = $tmp2527.value;
    if (!$tmp2526) goto $l2528;
    panda$core$Bit $tmp2529 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2512);
    $tmp2526 = $tmp2529.value;
    $l2528:;
    panda$core$Bit $tmp2530 = { $tmp2526 };
    if ($tmp2530.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2531 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2512);
            actualMethodType2516 = $tmp2531;
        }
        {
            panda$core$Int64 $tmp2532 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2516->subtypes);
            panda$core$Int64 $tmp2533 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2532, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2534 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2516->subtypes, $tmp2533);
            panda$core$String* $tmp2535 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2534));
            actualResultType2517 = $tmp2535;
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2536 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2512);
            actualMethodType2516 = $tmp2536;
        }
        {
            panda$core$String* $tmp2537 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            actualResultType2517 = $tmp2537;
        }
    }
    }
    panda$collections$Array* $tmp2539 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2539->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2539->refCount.value = 1;
    panda$collections$Array$init($tmp2539);
    argRefs2538 = $tmp2539;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(argRefs2538, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2542 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp2543 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2516->subtypes);
    panda$core$Int64 $tmp2544 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2542, $tmp2543);
    panda$core$Int64 $tmp2545 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2544, ((panda$core$Int64) { 1 }));
    offset2541 = $tmp2545;
    panda$core$Int64 $tmp2547 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2546, ((panda$core$Int64) { 0 }), $tmp2547, ((panda$core$Bit) { false }));
    int64_t $tmp2549 = $tmp2546.min.value;
    panda$core$Int64 i2548 = { $tmp2549 };
    int64_t $tmp2551 = $tmp2546.max.value;
    bool $tmp2552 = $tmp2546.inclusive.value;
    if ($tmp2552) goto $l2559; else goto $l2560;
    $l2559:;
    if ($tmp2549 <= $tmp2551) goto $l2553; else goto $l2555;
    $l2560:;
    if ($tmp2549 < $tmp2551) goto $l2553; else goto $l2555;
    $l2553:;
    {
        panda$core$Object* $tmp2562 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2548);
        panda$core$String* $tmp2563 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2562), p_out);
        arg2561 = $tmp2563;
        panda$core$Bit $tmp2565 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2548, offset2541);
        bool $tmp2564 = $tmp2565.value;
        if (!$tmp2564) goto $l2566;
        panda$core$Int64 $tmp2567 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2548, offset2541);
        panda$core$Object* $tmp2568 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2516->subtypes, $tmp2567);
        panda$core$Object* $tmp2569 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2548);
        org$pandalanguage$pandac$Type* $tmp2571 = (($fn2570) ((org$pandalanguage$pandac$IRNode*) $tmp2569)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2569));
        panda$core$Bit $tmp2572 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2568), $tmp2571);
        $tmp2564 = $tmp2572.value;
        $l2566:;
        panda$core$Bit $tmp2573 = { $tmp2564 };
        if ($tmp2573.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2561));
                panda$core$Object* $tmp2574 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2548);
                org$pandalanguage$pandac$Type* $tmp2576 = (($fn2575) ((org$pandalanguage$pandac$IRNode*) $tmp2574)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2574));
                panda$core$Int64 $tmp2577 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2548, offset2541);
                panda$core$Object* $tmp2578 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2516->subtypes, $tmp2577);
                panda$core$String* $tmp2579 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2561, $tmp2576, ((org$pandalanguage$pandac$Type*) $tmp2578), p_out);
                arg2561 = $tmp2579;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs2538, ((panda$core$Object*) arg2561));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2561));
    }
    $l2556:;
    int64_t $tmp2581 = $tmp2551 - i2548.value;
    if ($tmp2552) goto $l2582; else goto $l2583;
    $l2582:;
    if ((uint64_t) $tmp2581 >= 1) goto $l2580; else goto $l2555;
    $l2583:;
    if ((uint64_t) $tmp2581 > 1) goto $l2580; else goto $l2555;
    $l2580:;
    i2548.value += 1;
    goto $l2553;
    $l2555:;
    memset(&targetRef2586, 0, sizeof(targetRef2586));
    panda$core$Int64 $tmp2587 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs2538);
    panda$core$Bit $tmp2588 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2587, ((panda$core$Int64) { 0 }));
    if ($tmp2588.value) {
    {
        {
            panda$core$Object* $tmp2589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs2538, ((panda$core$Int64) { 0 }));
            targetRef2586 = ((panda$core$String*) $tmp2589);
        }
    }
    }
    else {
    {
        {
            targetRef2586 = NULL;
        }
    }
    }
    panda$core$String* $tmp2591 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, targetRef2586, m2512, isSuper2518, p_out);
    methodRef2590 = $tmp2591;
    separator2592 = &$s2593;
    panda$core$Bit $tmp2594 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2512);
    if ($tmp2594.value) {
    {
        panda$core$Int64 $tmp2595 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2595;
        panda$core$Int64$wrapper* $tmp2598;
        $tmp2598 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp2598->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2598->refCount = 1;
        $tmp2598->value = self->varCount;
        panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2597, ((panda$core$Object*) $tmp2598));
        indirectVar2596 = $tmp2599;
        panda$core$String* $tmp2601 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        resultType2600 = $tmp2601;
        panda$core$String* $tmp2602 = panda$core$String$convert$R$panda$core$String(resultType2600);
        panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2602, &$s2603);
        panda$core$String* $tmp2605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, indirectVar2596);
        panda$core$String* $tmp2607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2605, &$s2606);
        (($fn2608) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2607);
        panda$core$String* $tmp2609 = panda$core$String$convert$R$panda$core$String(methodRef2590);
        panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, &$s2610);
        panda$core$String* $tmp2612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, resultType2600);
        panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2612, &$s2613);
        panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2614, indirectVar2596);
        panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2615, &$s2616);
        (($fn2618) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2617);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2592));
            separator2592 = &$s2619;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultType2600));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar2596));
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2620 = panda$core$String$convert$R$panda$core$String(methodRef2590);
        panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2620, &$s2621);
        (($fn2623) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2622);
    }
    }
    {
        ITable* $tmp2625 = ((panda$collections$Iterable*) argRefs2538)->$class->itable;
        while ($tmp2625->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2625 = $tmp2625->next;
        }
        $fn2627 $tmp2626 = $tmp2625->methods[0];
        panda$collections$Iterator* $tmp2628 = $tmp2626(((panda$collections$Iterable*) argRefs2538));
        a$Iter2624 = $tmp2628;
        $l2629:;
        ITable* $tmp2631 = a$Iter2624->$class->itable;
        while ($tmp2631->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2631 = $tmp2631->next;
        }
        $fn2633 $tmp2632 = $tmp2631->methods[0];
        panda$core$Bit $tmp2634 = $tmp2632(a$Iter2624);
        panda$core$Bit $tmp2635 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2634);
        if (!$tmp2635.value) goto $l2630;
        {
            ITable* $tmp2637 = a$Iter2624->$class->itable;
            while ($tmp2637->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2637 = $tmp2637->next;
            }
            $fn2639 $tmp2638 = $tmp2637->methods[1];
            panda$core$Object* $tmp2640 = $tmp2638(a$Iter2624);
            a2636 = ((panda$core$String*) $tmp2640);
            (($fn2641) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2592);
            (($fn2642) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2636);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2592));
                separator2592 = &$s2643;
            }
        }
        goto $l2629;
        $l2630:;
    }
    (($fn2645) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2644);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2592));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs2538));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef2590));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType2517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2512));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetRef2586));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType2516));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$collections$ImmutableArray* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2646;
    panda$core$String* $tmp2647 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2646 = $tmp2647;
    panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2648, testRef2646);
    panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2650);
    (($fn2652) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2651);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { false }), p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_ifTrue, p_out);
    (($fn2654) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2653);
    if (((panda$core$Bit) { p_ifFalse != NULL }).value) {
    {
        (($fn2656) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2655);
        org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { false }), p_out);
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_ifFalse, p_out);
        (($fn2658) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2657);
    }
    }
    panda$collections$Array$clear(self->extraEffects);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef2646));
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2671;
    org$pandalanguage$pandac$Type* t2673;
    panda$core$String* llt2677;
    panda$core$String* indexType2679;
    org$pandalanguage$pandac$ClassDecl* cl2685;
    org$pandalanguage$pandac$FieldDecl* field2693;
    panda$core$String* numberType2699;
    panda$core$String* index2701;
    org$pandalanguage$pandac$IRNode* $match$1468_92702;
    org$pandalanguage$pandac$Variable* variable2704;
    panda$core$String* start2707;
    panda$core$String* indexValuePtr2719;
    panda$core$String* end2733;
    panda$core$String* inclusive2745;
    panda$core$String* loopStart2755;
    panda$core$String* loopBody2757;
    panda$core$String* loopEnd2759;
    panda$core$String* loopTest2761;
    panda$core$String* forwardEntry2765;
    panda$core$String* backwardEntry2767;
    panda$core$String* signPrefix2769;
    panda$core$String* unsigned2770;
    panda$core$String* forwardEntryInclusive2784;
    panda$core$String* forwardEntryExclusive2786;
    panda$core$String* loopInc2828;
    panda$core$String* forwardDelta2830;
    panda$core$String* forwardInclusiveLabel2845;
    panda$core$String* forwardExclusiveLabel2847;
    panda$core$String* forwardExclusiveTest2876;
    panda$core$String* inc2893;
    org$pandalanguage$pandac$Type* $tmp2660 = (($fn2659) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2660->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2661.value);
    org$pandalanguage$pandac$Type* $tmp2663 = (($fn2662) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2664 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2663->subtypes);
    panda$core$Bit $tmp2665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2664, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2665.value);
    org$pandalanguage$pandac$Type* $tmp2667 = (($fn2666) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2668 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2667->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2670 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2668))->name, &$s2669);
    PANDA_ASSERT($tmp2670.value);
    panda$core$String* $tmp2672 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range2671 = $tmp2672;
    org$pandalanguage$pandac$Type* $tmp2675 = (($fn2674) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2676 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2675->subtypes, ((panda$core$Int64) { 1 }));
    t2673 = ((org$pandalanguage$pandac$Type*) $tmp2676);
    panda$core$String* $tmp2678 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2673);
    llt2677 = $tmp2678;
    memset(&indexType2679, 0, sizeof(indexType2679));
    panda$core$Bit $tmp2680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2673->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2680.value) {
    {
        panda$core$Int64 $tmp2681 = panda$collections$Array$get_count$R$panda$core$Int64(t2673->subtypes);
        panda$core$Bit $tmp2682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2681, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2682.value);
        {
            panda$core$Object* $tmp2683 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2673->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2684 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2683));
            indexType2679 = $tmp2684;
        }
    }
    }
    else {
    {
        {
            indexType2679 = llt2677;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2686 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2673);
    cl2685 = $tmp2686;
    PANDA_ASSERT(((panda$core$Bit) { cl2685 != NULL }).value);
    panda$collections$ListView* $tmp2687 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2685);
    ITable* $tmp2688 = ((panda$collections$CollectionView*) $tmp2687)->$class->itable;
    while ($tmp2688->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2688 = $tmp2688->next;
    }
    $fn2690 $tmp2689 = $tmp2688->methods[0];
    panda$core$Int64 $tmp2691 = $tmp2689(((panda$collections$CollectionView*) $tmp2687));
    panda$core$Bit $tmp2692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2691, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2692.value);
    panda$collections$ListView* $tmp2694 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2685);
    ITable* $tmp2695 = $tmp2694->$class->itable;
    while ($tmp2695->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2695 = $tmp2695->next;
    }
    $fn2697 $tmp2696 = $tmp2695->methods[0];
    panda$core$Object* $tmp2698 = $tmp2696($tmp2694, ((panda$core$Int64) { 0 }));
    field2693 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2698);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2693);
    panda$core$String* $tmp2700 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2693->type);
    numberType2699 = $tmp2700;
    memset(&index2701, 0, sizeof(index2701));
    {
        $match$1468_92702 = p_target;
        panda$core$Bit $tmp2703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1468_92702->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2703.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2705 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1468_92702->$data + 16));
            variable2704 = *$tmp2705;
            {
                panda$core$String* $tmp2706 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2704);
                index2701 = $tmp2706;
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2708 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2707 = $tmp2708;
    panda$core$String* $tmp2709 = panda$core$String$convert$R$panda$core$String(numberType2699);
    panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2709, &$s2710);
    panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, start2707);
    panda$core$String* $tmp2714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2712, &$s2713);
    panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2714, range2671);
    panda$core$String* $tmp2717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, &$s2716);
    (($fn2718) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2717);
    panda$core$String* $tmp2720 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2719 = $tmp2720;
    org$pandalanguage$pandac$Type* $tmp2721 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2685);
    panda$core$String* $tmp2722 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2721);
    panda$core$String* $tmp2723 = panda$core$String$convert$R$panda$core$String($tmp2722);
    panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, &$s2724);
    panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2725, index2701);
    panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, &$s2727);
    panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2728, start2707);
    panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, &$s2730);
    (($fn2732) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2731);
    panda$core$String* $tmp2734 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2733 = $tmp2734;
    panda$core$String* $tmp2735 = panda$core$String$convert$R$panda$core$String(numberType2699);
    panda$core$String* $tmp2737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2735, &$s2736);
    panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2737, end2733);
    panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, &$s2739);
    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2740, range2671);
    panda$core$String* $tmp2743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2741, &$s2742);
    (($fn2744) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2743);
    panda$core$String* $tmp2746 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2745 = $tmp2746;
    panda$core$String* $tmp2748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2747, inclusive2745);
    panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2748, &$s2749);
    panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2750, range2671);
    panda$core$String* $tmp2753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, &$s2752);
    (($fn2754) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2753);
    panda$core$String* $tmp2756 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2755 = $tmp2756;
    panda$core$String* $tmp2758 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2757 = $tmp2758;
    panda$core$String* $tmp2760 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2759 = $tmp2760;
    panda$core$String* $tmp2762 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2761 = $tmp2762;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2763 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp2763->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2763->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2763, p_label, loopEnd2759, loopTest2761);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2763));
    panda$core$String* $tmp2766 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2765 = $tmp2766;
    panda$core$String* $tmp2768 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2767 = $tmp2768;
    memset(&signPrefix2769, 0, sizeof(signPrefix2769));
    memset(&unsigned2770, 0, sizeof(unsigned2770));
    panda$core$Bit $tmp2772 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2673)->name, &$s2771);
    if ($tmp2772.value) {
    {
        {
            signPrefix2769 = &$s2773;
        }
        {
            panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2774, numberType2699);
            unsigned2770 = $tmp2775;
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp2778 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2673)->name, &$s2777);
        bool $tmp2776 = $tmp2778.value;
        if ($tmp2776) goto $l2779;
        panda$core$Bit $tmp2781 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2673)->name, &$s2780);
        $tmp2776 = $tmp2781.value;
        $l2779:;
        panda$core$Bit $tmp2782 = { $tmp2776 };
        PANDA_ASSERT($tmp2782.value);
        {
            signPrefix2769 = &$s2783;
        }
        {
            unsigned2770 = numberType2699;
        }
    }
    }
    panda$core$String* $tmp2785 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2784 = $tmp2785;
    panda$core$String* $tmp2787 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2786 = $tmp2787;
    panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2788, inclusive2745);
    panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, &$s2790);
    panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, forwardEntryInclusive2784);
    panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, &$s2793);
    panda$core$String* $tmp2795 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2786);
    panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, &$s2796);
    panda$core$String* $tmp2798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2794, $tmp2797);
    (($fn2799) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2798);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2784, p_out);
    panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2800, start2707);
    panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2801, &$s2802);
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2803, end2733);
    panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, &$s2805);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, loopStart2755);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, &$s2808);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, loopEnd2759);
    panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, &$s2811);
    (($fn2813) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2812);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2786, p_out);
    panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2814, start2707);
    panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, &$s2816);
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, end2733);
    panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, &$s2819);
    panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, loopStart2755);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
    panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, loopEnd2759);
    panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
    (($fn2827) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2826);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2755, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2761, p_out);
    panda$core$String* $tmp2829 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2828 = $tmp2829;
    panda$core$String* $tmp2831 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2830 = $tmp2831;
    panda$core$String* $tmp2832 = panda$core$String$convert$R$panda$core$String(numberType2699);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, &$s2833);
    panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, forwardDelta2830);
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, &$s2836);
    panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, end2733);
    panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, &$s2839);
    panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, index2701);
    panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, &$s2842);
    (($fn2844) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2843);
    panda$core$String* $tmp2846 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2845 = $tmp2846;
    panda$core$String* $tmp2848 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2847 = $tmp2848;
    panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2849, inclusive2745);
    panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, &$s2851);
    panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2852, forwardInclusiveLabel2845);
    panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, &$s2854);
    panda$core$String* $tmp2856 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2847);
    panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, &$s2857);
    panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, $tmp2858);
    (($fn2860) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2859);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2845, p_out);
    panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2861, unsigned2770);
    panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, &$s2863);
    panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, forwardDelta2830);
    panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, &$s2866);
    panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, loopInc2828);
    panda$core$String* $tmp2870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2868, &$s2869);
    panda$core$String* $tmp2871 = panda$core$String$convert$R$panda$core$String(loopEnd2759);
    panda$core$String* $tmp2873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2871, &$s2872);
    panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2870, $tmp2873);
    (($fn2875) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2874);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2847, p_out);
    panda$core$String* $tmp2877 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2876 = $tmp2877;
    panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2878, unsigned2770);
    panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, &$s2880);
    panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2881, forwardDelta2830);
    panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2882, &$s2883);
    panda$core$String* $tmp2885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, loopInc2828);
    panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2885, &$s2886);
    panda$core$String* $tmp2888 = panda$core$String$convert$R$panda$core$String(loopEnd2759);
    panda$core$String* $tmp2890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2888, &$s2889);
    panda$core$String* $tmp2891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, $tmp2890);
    (($fn2892) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2891);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2828, p_out);
    panda$core$String* $tmp2894 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2893 = $tmp2894;
    panda$core$String* $tmp2895 = panda$core$String$convert$R$panda$core$String(index2701);
    panda$core$String* $tmp2897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2895, &$s2896);
    (($fn2898) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2897);
    panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2899, loopStart2755);
    panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2900, &$s2901);
    (($fn2903) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2902);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2759, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix2769));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel2847));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive2745));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned2770));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2707));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody2757));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest2761));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive2784));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2673));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel2845));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end2733));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc2893));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart2755));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry2767));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr2719));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1468_92702));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd2759));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc2828));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2679));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt2677));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest2876));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType2699));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry2765));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2701));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive2786));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2693));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta2830));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2685));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range2671));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2916;
    org$pandalanguage$pandac$Type* t2918;
    org$pandalanguage$pandac$Type* stepType2922;
    panda$core$String* llt2926;
    panda$core$String* indexType2928;
    org$pandalanguage$pandac$ClassDecl* cl2934;
    org$pandalanguage$pandac$FieldDecl* field2942;
    panda$core$String* numberType2948;
    panda$core$String* index2950;
    org$pandalanguage$pandac$IRNode* $match$1580_92951;
    org$pandalanguage$pandac$Variable* variable2953;
    panda$core$String* start2956;
    panda$core$String* indexValuePtr2968;
    panda$core$String* end2982;
    panda$core$String* step2994;
    org$pandalanguage$pandac$ClassDecl* stepCl2996;
    org$pandalanguage$pandac$FieldDecl* stepField3004;
    panda$core$String* inclusive3021;
    panda$core$String* loopStart3031;
    panda$core$String* loopBody3033;
    panda$core$String* loopEnd3035;
    panda$core$String* loopTest3037;
    panda$core$String* forwardEntry3041;
    panda$core$String* backwardEntry3043;
    panda$core$String* unsigned3045;
    panda$core$String* signPrefix3046;
    panda$core$String* direction3062;
    panda$core$String* forwardEntryInclusive3086;
    panda$core$String* forwardEntryExclusive3088;
    panda$core$String* backwardEntryInclusive3130;
    panda$core$String* backwardEntryExclusive3132;
    panda$core$String* backwardEntryExclusiveTest3160;
    panda$core$String* loopInc3176;
    panda$core$String* forwardLabel3178;
    panda$core$String* backwardLabel3180;
    panda$core$String* forwardDelta3193;
    panda$core$String* forwardInclusiveLabel3208;
    panda$core$String* forwardExclusiveLabel3210;
    panda$core$String* forwardExclusiveTest3242;
    panda$core$String* backwardDelta3262;
    panda$core$String* backwardInclusiveLabel3277;
    panda$core$String* backwardExclusiveLabel3279;
    panda$core$String* inc3331;
    org$pandalanguage$pandac$Type* $tmp2905 = (($fn2904) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2905->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2906.value);
    org$pandalanguage$pandac$Type* $tmp2908 = (($fn2907) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2909 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2908->subtypes);
    panda$core$Bit $tmp2910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2909, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2910.value);
    org$pandalanguage$pandac$Type* $tmp2912 = (($fn2911) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2913 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2912->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2915 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2913))->name, &$s2914);
    PANDA_ASSERT($tmp2915.value);
    panda$core$String* $tmp2917 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range2916 = $tmp2917;
    org$pandalanguage$pandac$Type* $tmp2920 = (($fn2919) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2921 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2920->subtypes, ((panda$core$Int64) { 1 }));
    t2918 = ((org$pandalanguage$pandac$Type*) $tmp2921);
    org$pandalanguage$pandac$Type* $tmp2924 = (($fn2923) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2925 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2924->subtypes, ((panda$core$Int64) { 2 }));
    stepType2922 = ((org$pandalanguage$pandac$Type*) $tmp2925);
    panda$core$String* $tmp2927 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2918);
    llt2926 = $tmp2927;
    memset(&indexType2928, 0, sizeof(indexType2928));
    panda$core$Bit $tmp2929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2918->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2929.value) {
    {
        panda$core$Int64 $tmp2930 = panda$collections$Array$get_count$R$panda$core$Int64(t2918->subtypes);
        panda$core$Bit $tmp2931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2930, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2931.value);
        {
            panda$core$Object* $tmp2932 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2918->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2933 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2932));
            indexType2928 = $tmp2933;
        }
    }
    }
    else {
    {
        {
            indexType2928 = llt2926;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2935 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2918);
    cl2934 = $tmp2935;
    PANDA_ASSERT(((panda$core$Bit) { cl2934 != NULL }).value);
    panda$collections$ListView* $tmp2936 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2934);
    ITable* $tmp2937 = ((panda$collections$CollectionView*) $tmp2936)->$class->itable;
    while ($tmp2937->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2937 = $tmp2937->next;
    }
    $fn2939 $tmp2938 = $tmp2937->methods[0];
    panda$core$Int64 $tmp2940 = $tmp2938(((panda$collections$CollectionView*) $tmp2936));
    panda$core$Bit $tmp2941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2940, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2941.value);
    panda$collections$ListView* $tmp2943 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2934);
    ITable* $tmp2944 = $tmp2943->$class->itable;
    while ($tmp2944->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2944 = $tmp2944->next;
    }
    $fn2946 $tmp2945 = $tmp2944->methods[0];
    panda$core$Object* $tmp2947 = $tmp2945($tmp2943, ((panda$core$Int64) { 0 }));
    field2942 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2947);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2942);
    panda$core$String* $tmp2949 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2942->type);
    numberType2948 = $tmp2949;
    memset(&index2950, 0, sizeof(index2950));
    {
        $match$1580_92951 = p_target;
        panda$core$Bit $tmp2952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1580_92951->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2952.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2954 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1580_92951->$data + 16));
            variable2953 = *$tmp2954;
            {
                panda$core$String* $tmp2955 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2953);
                index2950 = $tmp2955;
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2957 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2956 = $tmp2957;
    panda$core$String* $tmp2958 = panda$core$String$convert$R$panda$core$String(numberType2948);
    panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2958, &$s2959);
    panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, start2956);
    panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2961, &$s2962);
    panda$core$String* $tmp2964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, range2916);
    panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2964, &$s2965);
    (($fn2967) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2966);
    panda$core$String* $tmp2969 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2968 = $tmp2969;
    org$pandalanguage$pandac$Type* $tmp2970 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2934);
    panda$core$String* $tmp2971 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2970);
    panda$core$String* $tmp2972 = panda$core$String$convert$R$panda$core$String($tmp2971);
    panda$core$String* $tmp2974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2972, &$s2973);
    panda$core$String* $tmp2975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2974, index2950);
    panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2975, &$s2976);
    panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2977, start2956);
    panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, &$s2979);
    (($fn2981) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2980);
    panda$core$String* $tmp2983 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2982 = $tmp2983;
    panda$core$String* $tmp2984 = panda$core$String$convert$R$panda$core$String(numberType2948);
    panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, &$s2985);
    panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2986, end2982);
    panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2987, &$s2988);
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2989, range2916);
    panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, &$s2991);
    (($fn2993) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2992);
    panda$core$String* $tmp2995 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2994 = $tmp2995;
    org$pandalanguage$pandac$ClassDecl* $tmp2997 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, stepType2922);
    stepCl2996 = $tmp2997;
    PANDA_ASSERT(((panda$core$Bit) { stepCl2996 != NULL }).value);
    panda$collections$ListView* $tmp2998 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2996);
    ITable* $tmp2999 = ((panda$collections$CollectionView*) $tmp2998)->$class->itable;
    while ($tmp2999->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2999 = $tmp2999->next;
    }
    $fn3001 $tmp3000 = $tmp2999->methods[0];
    panda$core$Int64 $tmp3002 = $tmp3000(((panda$collections$CollectionView*) $tmp2998));
    panda$core$Bit $tmp3003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3002, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3003.value);
    panda$collections$ListView* $tmp3005 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2996);
    ITable* $tmp3006 = $tmp3005->$class->itable;
    while ($tmp3006->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp3006 = $tmp3006->next;
    }
    $fn3008 $tmp3007 = $tmp3006->methods[0];
    panda$core$Object* $tmp3009 = $tmp3007($tmp3005, ((panda$core$Int64) { 0 }));
    stepField3004 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3009);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, stepField3004);
    panda$core$String* $tmp3010 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, stepField3004->type);
    panda$core$String* $tmp3011 = panda$core$String$convert$R$panda$core$String($tmp3010);
    panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3011, &$s3012);
    panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, step2994);
    panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3014, &$s3015);
    panda$core$String* $tmp3017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, range2916);
    panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3017, &$s3018);
    (($fn3020) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3019);
    panda$core$String* $tmp3022 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive3021 = $tmp3022;
    panda$core$String* $tmp3024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3023, inclusive3021);
    panda$core$String* $tmp3026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3024, &$s3025);
    panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3026, range2916);
    panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3027, &$s3028);
    (($fn3030) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3029);
    panda$core$String* $tmp3032 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3031 = $tmp3032;
    panda$core$String* $tmp3034 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody3033 = $tmp3034;
    panda$core$String* $tmp3036 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3035 = $tmp3036;
    panda$core$String* $tmp3038 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest3037 = $tmp3038;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3039 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp3039->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3039->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3039, p_label, loopEnd3035, loopTest3037);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3039));
    panda$core$String* $tmp3042 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry3041 = $tmp3042;
    panda$core$String* $tmp3044 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry3043 = $tmp3044;
    memset(&unsigned3045, 0, sizeof(unsigned3045));
    memset(&signPrefix3046, 0, sizeof(signPrefix3046));
    panda$core$Bit $tmp3048 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2922)->name, &$s3047);
    if ($tmp3048.value) {
    {
        {
            signPrefix3046 = &$s3049;
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp3052 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2922)->name, &$s3051);
        bool $tmp3050 = $tmp3052.value;
        if ($tmp3050) goto $l3053;
        panda$core$Bit $tmp3055 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2922)->name, &$s3054);
        $tmp3050 = $tmp3055.value;
        $l3053:;
        panda$core$Bit $tmp3056 = { $tmp3050 };
        PANDA_ASSERT($tmp3056.value);
        {
            signPrefix3046 = &$s3057;
        }
    }
    }
    panda$core$Bit $tmp3059 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(numberType2948, &$s3058);
    if ($tmp3059.value) {
    {
        {
            unsigned3045 = numberType2948;
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3060, numberType2948);
            unsigned3045 = $tmp3061;
        }
    }
    }
    memset(&direction3062, 0, sizeof(direction3062));
    panda$core$Bit $tmp3064 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix3046, &$s3063);
    if ($tmp3064.value) {
    {
        {
            panda$core$String* $tmp3065 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            direction3062 = $tmp3065;
        }
        panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3066, direction3062);
        panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3067, &$s3068);
        panda$core$String* $tmp3070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, step2994);
        panda$core$String* $tmp3072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3070, &$s3071);
        (($fn3073) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3072);
    }
    }
    else {
    {
        {
            direction3062 = &$s3074;
        }
    }
    }
    panda$core$String* $tmp3076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3075, direction3062);
    panda$core$String* $tmp3078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3076, &$s3077);
    panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3078, forwardEntry3041);
    panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3079, &$s3080);
    panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, backwardEntry3043);
    panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3082, &$s3083);
    (($fn3085) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3084);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry3041, p_out);
    panda$core$String* $tmp3087 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive3086 = $tmp3087;
    panda$core$String* $tmp3089 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive3088 = $tmp3089;
    panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3090, inclusive3021);
    panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3091, &$s3092);
    panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, forwardEntryInclusive3086);
    panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, &$s3095);
    panda$core$String* $tmp3097 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive3088);
    panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, &$s3098);
    panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, $tmp3099);
    (($fn3101) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3100);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive3086, p_out);
    panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3102, start2956);
    panda$core$String* $tmp3105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3103, &$s3104);
    panda$core$String* $tmp3106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3105, end2982);
    panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3106, &$s3107);
    panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3108, loopStart3031);
    panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, &$s3110);
    panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, loopEnd3035);
    panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, &$s3113);
    (($fn3115) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3114);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive3088, p_out);
    panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3116, start2956);
    panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, &$s3118);
    panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, end2982);
    panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3120, &$s3121);
    panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, loopStart3031);
    panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3123, &$s3124);
    panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3125, loopEnd3035);
    panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3126, &$s3127);
    (($fn3129) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3128);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry3043, p_out);
    panda$core$String* $tmp3131 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive3130 = $tmp3131;
    panda$core$String* $tmp3133 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive3132 = $tmp3133;
    panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3134, inclusive3021);
    panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, &$s3136);
    panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, backwardEntryInclusive3130);
    panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3138, &$s3139);
    panda$core$String* $tmp3141 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive3132);
    panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, &$s3142);
    panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3140, $tmp3143);
    (($fn3145) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3144);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive3130, p_out);
    panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3146, start2956);
    panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, &$s3148);
    panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3149, end2982);
    panda$core$String* $tmp3152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3150, &$s3151);
    panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3152, loopStart3031);
    panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3153, &$s3154);
    panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, loopEnd3035);
    panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3156, &$s3157);
    (($fn3159) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3158);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive3132, p_out);
    panda$core$String* $tmp3161 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest3160 = $tmp3161;
    panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3162, start2956);
    panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, &$s3164);
    panda$core$String* $tmp3166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, end2982);
    panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3166, &$s3167);
    panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3168, loopStart3031);
    panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, &$s3170);
    panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, loopEnd3035);
    panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3172, &$s3173);
    (($fn3175) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3174);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3031, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest3037, p_out);
    panda$core$String* $tmp3177 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc3176 = $tmp3177;
    panda$core$String* $tmp3179 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel3178 = $tmp3179;
    panda$core$String* $tmp3181 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel3180 = $tmp3181;
    panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3182, direction3062);
    panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3183, &$s3184);
    panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3185, forwardLabel3178);
    panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3186, &$s3187);
    panda$core$String* $tmp3189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3188, backwardLabel3180);
    panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3189, &$s3190);
    (($fn3192) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3191);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel3178, p_out);
    panda$core$String* $tmp3194 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta3193 = $tmp3194;
    panda$core$String* $tmp3195 = panda$core$String$convert$R$panda$core$String(numberType2948);
    panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, &$s3196);
    panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, forwardDelta3193);
    panda$core$String* $tmp3200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3198, &$s3199);
    panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3200, end2982);
    panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3201, &$s3202);
    panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3203, index2950);
    panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, &$s3205);
    (($fn3207) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3206);
    panda$core$String* $tmp3209 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel3208 = $tmp3209;
    panda$core$String* $tmp3211 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel3210 = $tmp3211;
    panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3212, inclusive3021);
    panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3213, &$s3214);
    panda$core$String* $tmp3216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3215, forwardInclusiveLabel3208);
    panda$core$String* $tmp3218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3216, &$s3217);
    panda$core$String* $tmp3219 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel3210);
    panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3219, &$s3220);
    panda$core$String* $tmp3222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3218, $tmp3221);
    (($fn3223) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3222);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel3208, p_out);
    panda$core$String* $tmp3225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3224, unsigned3045);
    panda$core$String* $tmp3227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3225, &$s3226);
    panda$core$String* $tmp3228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3227, forwardDelta3193);
    panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3228, &$s3229);
    panda$core$String* $tmp3231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3230, step2994);
    panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3231, &$s3232);
    panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3233, loopInc3176);
    panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3234, &$s3235);
    panda$core$String* $tmp3237 = panda$core$String$convert$R$panda$core$String(loopEnd3035);
    panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3237, &$s3238);
    panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3236, $tmp3239);
    (($fn3241) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3240);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel3210, p_out);
    panda$core$String* $tmp3243 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest3242 = $tmp3243;
    panda$core$String* $tmp3245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3244, unsigned3045);
    panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3245, &$s3246);
    panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3247, forwardDelta3193);
    panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3248, &$s3249);
    panda$core$String* $tmp3251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3250, step2994);
    panda$core$String* $tmp3253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3251, &$s3252);
    panda$core$String* $tmp3254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3253, loopInc3176);
    panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3254, &$s3255);
    panda$core$String* $tmp3257 = panda$core$String$convert$R$panda$core$String(loopEnd3035);
    panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3257, &$s3258);
    panda$core$String* $tmp3260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, $tmp3259);
    (($fn3261) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3260);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel3180, p_out);
    panda$core$String* $tmp3263 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta3262 = $tmp3263;
    panda$core$String* $tmp3264 = panda$core$String$convert$R$panda$core$String(numberType2948);
    panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3264, &$s3265);
    panda$core$String* $tmp3267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3266, backwardDelta3262);
    panda$core$String* $tmp3269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3267, &$s3268);
    panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3269, index2950);
    panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3270, &$s3271);
    panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3272, end2982);
    panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3273, &$s3274);
    (($fn3276) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3275);
    panda$core$String* $tmp3278 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel3277 = $tmp3278;
    panda$core$String* $tmp3280 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel3279 = $tmp3280;
    panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3281, inclusive3021);
    panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, &$s3283);
    panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3284, backwardInclusiveLabel3277);
    panda$core$String* $tmp3287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3285, &$s3286);
    panda$core$String* $tmp3288 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel3279);
    panda$core$String* $tmp3290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3288, &$s3289);
    panda$core$String* $tmp3291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3287, $tmp3290);
    (($fn3292) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3291);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel3277, p_out);
    panda$core$String* $tmp3294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3293, unsigned3045);
    panda$core$String* $tmp3296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3294, &$s3295);
    panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, backwardDelta3262);
    panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3297, &$s3298);
    panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3299, step2994);
    panda$core$String* $tmp3302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3300, &$s3301);
    panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3302, loopInc3176);
    panda$core$String* $tmp3305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, &$s3304);
    panda$core$String* $tmp3307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3306, loopEnd3035);
    panda$core$String* $tmp3309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3307, &$s3308);
    panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3305, $tmp3309);
    (($fn3311) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3310);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel3279, p_out);
    panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3312, unsigned3045);
    panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3313, &$s3314);
    panda$core$String* $tmp3316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3315, backwardDelta3262);
    panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3316, &$s3317);
    panda$core$String* $tmp3319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3318, step2994);
    panda$core$String* $tmp3321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3319, &$s3320);
    panda$core$String* $tmp3322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3321, loopInc3176);
    panda$core$String* $tmp3324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3322, &$s3323);
    panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3325, loopEnd3035);
    panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, &$s3327);
    panda$core$String* $tmp3329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3324, $tmp3328);
    (($fn3330) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3329);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc3176, p_out);
    panda$core$String* $tmp3332 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3331 = $tmp3332;
    panda$core$String* $tmp3333 = panda$core$String$convert$R$panda$core$String(index2950);
    panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3333, &$s3334);
    panda$core$String* $tmp3336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, step2994);
    panda$core$String* $tmp3338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3336, &$s3337);
    (($fn3339) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3338);
    panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3340, loopStart3031);
    panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
    (($fn3344) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3343);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3035, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardInclusiveLabel3277));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix3046));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel3210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive3021));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned3045));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardLabel3180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusiveTest3160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2956));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody3033));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardLabel3178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest3037));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusive3132));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive3086));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardExclusiveLabel3279));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2918));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel3208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end2982));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepCl2996));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc3331));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2994));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3031));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry3043));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr2968));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc3176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepType2922));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3035));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepField3004));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2928));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt2926));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardDelta3262));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest3242));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType2948));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry3041));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2950));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive3088));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) direction3062));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2942));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta3193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1580_92951));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2934));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryInclusive3130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range2916));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Type* $tmp3346 = (($fn3345) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3347 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit($tmp3346);
    if ($tmp3347.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_label, p_target, p_list, p_statements, p_out);
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp3349 = (($fn3348) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3350 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit($tmp3349);
    if ($tmp3350.value) {
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
    panda$core$String* loopStart3355;
    panda$core$String* loopEnd3357;
    org$pandalanguage$pandac$Type* $tmp3352 = (($fn3351) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3353 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3354 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3352, $tmp3353);
    PANDA_ASSERT($tmp3354.value);
    panda$core$String* $tmp3356 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3355 = $tmp3356;
    panda$core$String* $tmp3358 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3357 = $tmp3358;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3359 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp3359->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3359->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3359, p_label, loopEnd3357, loopStart3355);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3359));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3355, p_out);
    panda$core$String* $tmp3362 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3361, $tmp3362);
    panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, &$s3364);
    panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, loopEnd3357);
    panda$core$String* $tmp3368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3366, &$s3367);
    (($fn3369) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3368);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3370, loopStart3355);
    panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3371, &$s3372);
    (($fn3374) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3373);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3357, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3357));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3355));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3379;
    panda$core$String* loopEnd3381;
    org$pandalanguage$pandac$Type* $tmp3376 = (($fn3375) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3377 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3378 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3376, $tmp3377);
    PANDA_ASSERT($tmp3378.value);
    panda$core$String* $tmp3380 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3379 = $tmp3380;
    panda$core$String* $tmp3382 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3381 = $tmp3382;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3383 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp3383->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3383->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3383, p_label, loopEnd3381, loopStart3379);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3383));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3379, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3386 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3385, $tmp3386);
    panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, &$s3388);
    panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3389, loopStart3379);
    panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, &$s3391);
    (($fn3393) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3392);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3381, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3381));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3379));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3394;
    panda$core$String* loopEnd3396;
    panda$core$String* $tmp3395 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3394 = $tmp3395;
    panda$core$String* $tmp3397 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3396 = $tmp3397;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3398 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp3398->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3398->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3398, p_label, loopEnd3396, loopStart3394);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3398));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3394, p_out);
    (($fn3401) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3400);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    (($fn3403) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3402);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3396, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3396));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3394));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1782_93404;
    org$pandalanguage$pandac$Variable* v3406;
    {
        $match$1782_93404 = p_target;
        panda$core$Bit $tmp3405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1782_93404->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3405.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3407 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1782_93404->$data + 16));
            v3406 = *$tmp3407;
            panda$core$String* $tmp3408 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3406->type);
            panda$core$String* $tmp3409 = panda$core$String$convert$R$panda$core$String($tmp3408);
            panda$core$String* $tmp3411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3409, &$s3410);
            panda$core$String* $tmp3412 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3406);
            panda$core$String* $tmp3413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3411, $tmp3412);
            panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, &$s3414);
            (($fn3416) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3415);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3417 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3406);
                panda$core$String* $tmp3418 = panda$core$String$convert$R$panda$core$String($tmp3417);
                panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3418, &$s3419);
                panda$core$String* $tmp3421 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3420, $tmp3421);
                panda$core$String* $tmp3424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3422, &$s3423);
                (($fn3425) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3424);
            }
            }
            else {
            {
                panda$core$String* $tmp3427 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3406);
                panda$core$String* $tmp3428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3426, $tmp3427);
                panda$core$String* $tmp3430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3428, &$s3429);
                panda$core$String* $tmp3431 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3406);
                panda$core$String* $tmp3432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3430, $tmp3431);
                panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3432, &$s3433);
                (($fn3435) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3434);
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
    panda$collections$Iterator* decl$Iter3436;
    org$pandalanguage$pandac$IRNode* decl3448;
    org$pandalanguage$pandac$IRNode* $match$1798_133453;
    org$pandalanguage$pandac$IRNode* target3455;
    org$pandalanguage$pandac$IRNode* value3457;
    {
        ITable* $tmp3437 = ((panda$collections$Iterable*) p_decls)->$class->itable;
        while ($tmp3437->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3437 = $tmp3437->next;
        }
        $fn3439 $tmp3438 = $tmp3437->methods[0];
        panda$collections$Iterator* $tmp3440 = $tmp3438(((panda$collections$Iterable*) p_decls));
        decl$Iter3436 = $tmp3440;
        $l3441:;
        ITable* $tmp3443 = decl$Iter3436->$class->itable;
        while ($tmp3443->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3443 = $tmp3443->next;
        }
        $fn3445 $tmp3444 = $tmp3443->methods[0];
        panda$core$Bit $tmp3446 = $tmp3444(decl$Iter3436);
        panda$core$Bit $tmp3447 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3446);
        if (!$tmp3447.value) goto $l3442;
        {
            ITable* $tmp3449 = decl$Iter3436->$class->itable;
            while ($tmp3449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3449 = $tmp3449->next;
            }
            $fn3451 $tmp3450 = $tmp3449->methods[1];
            panda$core$Object* $tmp3452 = $tmp3450(decl$Iter3436);
            decl3448 = ((org$pandalanguage$pandac$IRNode*) $tmp3452);
            {
                $match$1798_133453 = decl3448;
                panda$core$Bit $tmp3454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1798_133453->$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp3454.value) {
                {
                    org$pandalanguage$pandac$IRNode** $tmp3456 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1798_133453->$data + 0));
                    target3455 = *$tmp3456;
                    org$pandalanguage$pandac$IRNode** $tmp3458 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1798_133453->$data + 8));
                    value3457 = *$tmp3458;
                    org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, target3455, value3457, p_out);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l3441;
        $l3442:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1808_93459;
    org$pandalanguage$pandac$Variable* v3464;
    org$pandalanguage$pandac$IRNode* base3468;
    org$pandalanguage$pandac$FieldDecl* field3470;
    panda$core$String* baseRef3472;
    org$pandalanguage$pandac$IRNode* value3481;
    panda$core$Int64 id3483;
    panda$core$String* result3485;
    org$pandalanguage$pandac$IRNode* value3489;
    org$pandalanguage$pandac$ChoiceEntry* ce3491;
    panda$core$Int64 field3493;
    org$pandalanguage$pandac$FieldDecl* data3495;
    org$pandalanguage$pandac$IRNode* fieldRef3499;
    panda$core$String* base3504;
    panda$core$Int64 size3506;
    panda$core$Int64 offset3508;
    panda$core$String* result3510;
    {
        $match$1808_93459 = p_lvalue;
        panda$core$Bit $tmp3460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1808_93459->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp3460.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3461 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3462 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3461, p_out);
            return $tmp3462;
        }
        }
        else {
        panda$core$Bit $tmp3463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1808_93459->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3463.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3465 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1808_93459->$data + 16));
            v3464 = *$tmp3465;
            panda$core$String* $tmp3466 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3464);
            return $tmp3466;
        }
        }
        else {
        panda$core$Bit $tmp3467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1808_93459->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp3467.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3469 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1808_93459->$data + 24));
            base3468 = *$tmp3469;
            org$pandalanguage$pandac$FieldDecl** $tmp3471 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1808_93459->$data + 32));
            field3470 = *$tmp3471;
            panda$core$String* $tmp3473 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3468, p_out);
            baseRef3472 = $tmp3473;
            panda$core$String* $tmp3474 = panda$core$String$convert$R$panda$core$String(baseRef3472);
            panda$core$String* $tmp3476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3474, &$s3475);
            panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3476, ((org$pandalanguage$pandac$Symbol*) field3470)->name);
            panda$core$String* $tmp3479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3477, &$s3478);
            return $tmp3479;
        }
        }
        else {
        panda$core$Bit $tmp3480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1808_93459->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3480.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3482 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1808_93459->$data + 0));
            value3481 = *$tmp3482;
            panda$core$Int64* $tmp3484 = ((panda$core$Int64*) ((char*) $match$1808_93459->$data + 8));
            id3483 = *$tmp3484;
            panda$core$String* $tmp3486 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value3481, p_out);
            result3485 = $tmp3486;
            panda$core$Int64$wrapper* $tmp3487;
            $tmp3487 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp3487->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3487->refCount = 1;
            $tmp3487->value = id3483;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp3487), ((panda$core$Object*) result3485));
            return result3485;
        }
        }
        else {
        panda$core$Bit $tmp3488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1808_93459->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp3488.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3490 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1808_93459->$data + 16));
            value3489 = *$tmp3490;
            org$pandalanguage$pandac$ChoiceEntry** $tmp3492 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1808_93459->$data + 24));
            ce3491 = *$tmp3492;
            panda$core$Int64* $tmp3494 = ((panda$core$Int64*) ((char*) $match$1808_93459->$data + 32));
            field3493 = *$tmp3494;
            panda$core$Object* $tmp3496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce3491->owner->fields, ((panda$core$Int64) { 1 }));
            data3495 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3496);
            panda$core$Bit $tmp3498 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) data3495)->name, &$s3497);
            PANDA_ASSERT($tmp3498.value);
            org$pandalanguage$pandac$IRNode* $tmp3500 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
            $tmp3500->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3500->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp3503 = (($fn3502) p_lvalue->$class->vtable[3])(p_lvalue);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp3500, ((panda$core$Int64) { 15 }), $tmp3503, data3495->type, value3489, data3495);
            fieldRef3499 = $tmp3500;
            panda$core$String* $tmp3505 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, fieldRef3499, p_out);
            base3504 = $tmp3505;
            panda$core$Int64 $tmp3507 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3491->owner);
            size3506 = $tmp3507;
            panda$core$Int64 $tmp3509 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3491, field3493);
            offset3508 = $tmp3509;
            panda$core$String* $tmp3511 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result3510 = $tmp3511;
            org$pandalanguage$pandac$Type* $tmp3513 = (($fn3512) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3514 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3513);
            panda$core$String* $tmp3515 = panda$core$String$convert$R$panda$core$String($tmp3514);
            panda$core$String* $tmp3517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3515, &$s3516);
            panda$core$String* $tmp3518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3517, result3510);
            panda$core$String* $tmp3520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3518, &$s3519);
            org$pandalanguage$pandac$Type* $tmp3522 = (($fn3521) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3523 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3522);
            panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3520, $tmp3523);
            panda$core$String* $tmp3526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3524, &$s3525);
            panda$core$String* $tmp3528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3527, base3504);
            panda$core$String* $tmp3530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3528, &$s3529);
            panda$core$Int64$wrapper* $tmp3531;
            $tmp3531 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp3531->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3531->refCount = 1;
            $tmp3531->value = offset3508;
            panda$core$String* $tmp3532 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3530, ((panda$core$Object*) $tmp3531));
            panda$core$String* $tmp3534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3532, &$s3533);
            panda$core$String* $tmp3535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3526, $tmp3534);
            (($fn3536) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3535);
            panda$core$String* $tmp3538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3537, result3510);
            panda$core$String* $tmp3540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3538, &$s3539);
            return $tmp3540;
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
    panda$core$String* $tmp3541 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$String* $tmp3542 = panda$core$String$convert$R$panda$core$String($tmp3541);
    panda$core$String* $tmp3544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3542, &$s3543);
    panda$core$String* $tmp3545 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$String* $tmp3546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3544, $tmp3545);
    panda$core$String* $tmp3548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3546, &$s3547);
    (($fn3549) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3548);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit) { p_value != NULL }).value) {
    {
        panda$core$String* $tmp3551 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
        panda$core$String* $tmp3552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3550, $tmp3551);
        panda$core$String* $tmp3554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3552, &$s3553);
        (($fn3555) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3554);
    }
    }
    else {
    {
        (($fn3557) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3556);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3561;
    panda$core$Int64 $tmp3558 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3559 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3558, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3559.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3560 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3560);
    }
    }
    panda$core$Int64 $tmp3562 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3561, ((panda$core$Int64) { 0 }), $tmp3562, ((panda$core$Bit) { false }));
    int64_t $tmp3564 = $tmp3561.min.value;
    panda$core$Int64 i3563 = { $tmp3564 };
    int64_t $tmp3566 = $tmp3561.max.value;
    bool $tmp3567 = $tmp3561.inclusive.value;
    if ($tmp3567) goto $l3574; else goto $l3575;
    $l3574:;
    if ($tmp3564 <= $tmp3566) goto $l3568; else goto $l3570;
    $l3575:;
    if ($tmp3564 < $tmp3566) goto $l3568; else goto $l3570;
    $l3568:;
    {
        panda$core$Object* $tmp3576 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3563);
        panda$core$Bit $tmp3580;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3576)->loopLabel != NULL }).value) goto $l3577; else goto $l3578;
        $l3577:;
        panda$core$Bit $tmp3581 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3576)->loopLabel, p_name);
        $tmp3580 = $tmp3581;
        goto $l3579;
        $l3578:;
        $tmp3580 = ((panda$core$Bit) { false });
        goto $l3579;
        $l3579:;
        if ($tmp3580.value) {
        {
            panda$core$Object* $tmp3582 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3563);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3582);
        }
        }
    }
    $l3571:;
    int64_t $tmp3584 = $tmp3566 - i3563.value;
    if ($tmp3567) goto $l3585; else goto $l3586;
    $l3585:;
    if ((uint64_t) $tmp3584 >= 1) goto $l3583; else goto $l3570;
    $l3586:;
    if ((uint64_t) $tmp3584 > 1) goto $l3583; else goto $l3570;
    $l3583:;
    i3563.value += 1;
    goto $l3568;
    $l3570:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3589;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3590 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3589 = $tmp3590;
    panda$core$String* $tmp3592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3591, desc3589->breakLabel);
    panda$core$String* $tmp3594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3592, &$s3593);
    (($fn3595) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3594);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc3589));
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3596;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3597 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3596 = $tmp3597;
    panda$core$String* $tmp3599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3598, desc3596->continueLabel);
    panda$core$String* $tmp3601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3599, &$s3600);
    (($fn3602) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3601);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc3596));
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_message, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3604 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3603, $tmp3604);
    panda$core$String* $tmp3607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3605, &$s3606);
    (($fn3608) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3607);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* w$Iter3616;
    org$pandalanguage$pandac$IRNode* w3628;
    org$pandalanguage$pandac$IRNode* $match$1882_133633;
    panda$collections$ImmutableArray* tests3635;
    panda$collections$ImmutableArray* statements3637;
    panda$collections$Iterator* test$Iter3639;
    org$pandalanguage$pandac$IRNode* test3651;
    panda$core$String* $tmp3610 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3609, $tmp3610);
    panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3611, &$s3612);
    (($fn3614) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3613);
    panda$core$Int64 $tmp3615 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3615;
    {
        ITable* $tmp3617 = ((panda$collections$Iterable*) p_whens)->$class->itable;
        while ($tmp3617->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3617 = $tmp3617->next;
        }
        $fn3619 $tmp3618 = $tmp3617->methods[0];
        panda$collections$Iterator* $tmp3620 = $tmp3618(((panda$collections$Iterable*) p_whens));
        w$Iter3616 = $tmp3620;
        $l3621:;
        ITable* $tmp3623 = w$Iter3616->$class->itable;
        while ($tmp3623->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3623 = $tmp3623->next;
        }
        $fn3625 $tmp3624 = $tmp3623->methods[0];
        panda$core$Bit $tmp3626 = $tmp3624(w$Iter3616);
        panda$core$Bit $tmp3627 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3626);
        if (!$tmp3627.value) goto $l3622;
        {
            ITable* $tmp3629 = w$Iter3616->$class->itable;
            while ($tmp3629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3629 = $tmp3629->next;
            }
            $fn3631 $tmp3630 = $tmp3629->methods[1];
            panda$core$Object* $tmp3632 = $tmp3630(w$Iter3616);
            w3628 = ((org$pandalanguage$pandac$IRNode*) $tmp3632);
            {
                $match$1882_133633 = w3628;
                panda$core$Bit $tmp3634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1882_133633->$rawValue, ((panda$core$Int64) { 43 }));
                if ($tmp3634.value) {
                {
                    panda$collections$ImmutableArray** $tmp3636 = ((panda$collections$ImmutableArray**) ((char*) $match$1882_133633->$data + 16));
                    tests3635 = *$tmp3636;
                    panda$collections$ImmutableArray** $tmp3638 = ((panda$collections$ImmutableArray**) ((char*) $match$1882_133633->$data + 24));
                    statements3637 = *$tmp3638;
                    {
                        ITable* $tmp3640 = ((panda$collections$Iterable*) tests3635)->$class->itable;
                        while ($tmp3640->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3640 = $tmp3640->next;
                        }
                        $fn3642 $tmp3641 = $tmp3640->methods[0];
                        panda$collections$Iterator* $tmp3643 = $tmp3641(((panda$collections$Iterable*) tests3635));
                        test$Iter3639 = $tmp3643;
                        $l3644:;
                        ITable* $tmp3646 = test$Iter3639->$class->itable;
                        while ($tmp3646->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3646 = $tmp3646->next;
                        }
                        $fn3648 $tmp3647 = $tmp3646->methods[0];
                        panda$core$Bit $tmp3649 = $tmp3647(test$Iter3639);
                        panda$core$Bit $tmp3650 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3649);
                        if (!$tmp3650.value) goto $l3645;
                        {
                            ITable* $tmp3652 = test$Iter3639->$class->itable;
                            while ($tmp3652->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3652 = $tmp3652->next;
                            }
                            $fn3654 $tmp3653 = $tmp3652->methods[1];
                            panda$core$Object* $tmp3655 = $tmp3653(test$Iter3639);
                            test3651 = ((org$pandalanguage$pandac$IRNode*) $tmp3655);
                            panda$core$UInt64 $tmp3657 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, test3651);
                            panda$core$UInt64$wrapper* $tmp3658;
                            $tmp3658 = (panda$core$UInt64$wrapper*) pandaZAlloc(24);
                            $tmp3658->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
                            $tmp3658->refCount = 1;
                            $tmp3658->value = $tmp3657;
                            panda$core$String* $tmp3659 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3656, ((panda$core$Object*) $tmp3658));
                            panda$core$String* $tmp3661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3659, &$s3660);
                            (($fn3662) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3661);
                        }
                        goto $l3644;
                        $l3645:;
                    }
                    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3637, p_out);
                    (($fn3664) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3663);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l3621;
        $l3622:;
    }
    if (((panda$core$Bit) { p_other != NULL }).value) {
    {
        (($fn3666) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3665);
        org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_other, p_out);
    }
    }
    panda$core$Int64 $tmp3667 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3667;
    (($fn3669) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3668);
}
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_clear, panda$io$IndentedOutputStream* p_out) {
}
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { true }), p_out);
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1918_93670;
    org$pandalanguage$pandac$IRNode* left3672;
    org$pandalanguage$pandac$parser$Token$Kind op3674;
    org$pandalanguage$pandac$IRNode* right3676;
    panda$collections$ImmutableArray* statements3679;
    org$pandalanguage$pandac$Type* target3682;
    org$pandalanguage$pandac$MethodRef* mref3684;
    panda$collections$ImmutableArray* args3686;
    org$pandalanguage$pandac$IRNode* base3689;
    org$pandalanguage$pandac$IRNode* stmt3691;
    org$pandalanguage$pandac$IRNode* test3695;
    panda$collections$ImmutableArray* ifTrue3697;
    org$pandalanguage$pandac$IRNode* ifFalse3699;
    panda$core$String* label3702;
    org$pandalanguage$pandac$IRNode* target3704;
    org$pandalanguage$pandac$IRNode* list3706;
    panda$collections$ImmutableArray* statements3708;
    panda$core$String* label3711;
    org$pandalanguage$pandac$IRNode* test3713;
    panda$collections$ImmutableArray* statements3715;
    panda$core$String* label3718;
    panda$collections$ImmutableArray* statements3720;
    org$pandalanguage$pandac$IRNode* test3722;
    panda$core$String* label3725;
    panda$collections$ImmutableArray* statements3727;
    org$pandalanguage$pandac$Variable$Kind kind3730;
    panda$collections$ImmutableArray* decls3732;
    org$pandalanguage$pandac$IRNode* value3735;
    panda$core$String* label3738;
    panda$core$String* label3741;
    org$pandalanguage$pandac$IRNode* test3744;
    org$pandalanguage$pandac$IRNode* msg3746;
    org$pandalanguage$pandac$IRNode* value3749;
    panda$collections$ImmutableArray* whens3751;
    panda$collections$ImmutableArray* other3753;
    {
        $match$1918_93670 = p_stmt;
        panda$core$Bit $tmp3671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp3671.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3673 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 24));
            left3672 = *$tmp3673;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3675 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1918_93670->$data + 32));
            op3674 = *$tmp3675;
            org$pandalanguage$pandac$IRNode** $tmp3677 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 40));
            right3676 = *$tmp3677;
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, left3672, right3676, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp3678.value) {
        {
            panda$collections$ImmutableArray** $tmp3680 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93670->$data + 16));
            statements3679 = *$tmp3680;
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3679, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp3681.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3683 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1918_93670->$data + 16));
            target3682 = *$tmp3683;
            org$pandalanguage$pandac$MethodRef** $tmp3685 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1918_93670->$data + 24));
            mref3684 = *$tmp3685;
            panda$collections$ImmutableArray** $tmp3687 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93670->$data + 32));
            args3686 = *$tmp3687;
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, target3682, mref3684, args3686, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp3688.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3690 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 0));
            base3689 = *$tmp3690;
            org$pandalanguage$pandac$IRNode** $tmp3692 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 8));
            stmt3691 = *$tmp3692;
            panda$core$String* $tmp3693 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3689, stmt3691, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp3694.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3696 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 16));
            test3695 = *$tmp3696;
            panda$collections$ImmutableArray** $tmp3698 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93670->$data + 24));
            ifTrue3697 = *$tmp3698;
            org$pandalanguage$pandac$IRNode** $tmp3700 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 32));
            ifFalse3699 = *$tmp3700;
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3695, ifTrue3697, ifFalse3699, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp3701.value) {
        {
            panda$core$String** $tmp3703 = ((panda$core$String**) ((char*) $match$1918_93670->$data + 16));
            label3702 = *$tmp3703;
            org$pandalanguage$pandac$IRNode** $tmp3705 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 24));
            target3704 = *$tmp3705;
            org$pandalanguage$pandac$IRNode** $tmp3707 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 32));
            list3706 = *$tmp3707;
            panda$collections$ImmutableArray** $tmp3709 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93670->$data + 40));
            statements3708 = *$tmp3709;
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3702, target3704, list3706, statements3708, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp3710.value) {
        {
            panda$core$String** $tmp3712 = ((panda$core$String**) ((char*) $match$1918_93670->$data + 16));
            label3711 = *$tmp3712;
            org$pandalanguage$pandac$IRNode** $tmp3714 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 24));
            test3713 = *$tmp3714;
            panda$collections$ImmutableArray** $tmp3716 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93670->$data + 32));
            statements3715 = *$tmp3716;
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3711, test3713, statements3715, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp3717.value) {
        {
            panda$core$String** $tmp3719 = ((panda$core$String**) ((char*) $match$1918_93670->$data + 16));
            label3718 = *$tmp3719;
            panda$collections$ImmutableArray** $tmp3721 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93670->$data + 24));
            statements3720 = *$tmp3721;
            org$pandalanguage$pandac$IRNode** $tmp3723 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 32));
            test3722 = *$tmp3723;
            org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, label3718, statements3720, test3722, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp3724.value) {
        {
            panda$core$String** $tmp3726 = ((panda$core$String**) ((char*) $match$1918_93670->$data + 16));
            label3725 = *$tmp3726;
            panda$collections$ImmutableArray** $tmp3728 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93670->$data + 24));
            statements3727 = *$tmp3728;
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3725, statements3727, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp3729.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp3731 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$1918_93670->$data + 16));
            kind3730 = *$tmp3731;
            panda$collections$ImmutableArray** $tmp3733 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93670->$data + 24));
            decls3732 = *$tmp3733;
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, kind3730, decls3732, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp3734.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3736 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 16));
            value3735 = *$tmp3736;
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, value3735, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp3737.value) {
        {
            panda$core$String** $tmp3739 = ((panda$core$String**) ((char*) $match$1918_93670->$data + 16));
            label3738 = *$tmp3739;
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3738, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3740.value) {
        {
            panda$core$String** $tmp3742 = ((panda$core$String**) ((char*) $match$1918_93670->$data + 16));
            label3741 = *$tmp3742;
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3741, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp3743.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3745 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 16));
            test3744 = *$tmp3745;
            org$pandalanguage$pandac$IRNode** $tmp3747 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 24));
            msg3746 = *$tmp3747;
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3744, msg3746, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93670->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp3748.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3750 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93670->$data + 16));
            value3749 = *$tmp3750;
            panda$collections$ImmutableArray** $tmp3752 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93670->$data + 24));
            whens3751 = *$tmp3752;
            panda$collections$ImmutableArray** $tmp3754 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93670->$data + 32));
            other3753 = *$tmp3754;
            org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(self, value3749, whens3751, other3753, p_out);
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
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result3755;
    panda$core$String* tmp633765;
    panda$core$String* tmp643768;
    org$pandalanguage$pandac$Type* $tmp3756 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3757 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3756);
    result3755 = $tmp3757;
    panda$core$Bit $tmp3759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp3758 = $tmp3759.value;
    if (!$tmp3758) goto $l3760;
    panda$core$Bit $tmp3762 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3755, &$s3761);
    panda$core$Bit $tmp3763 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3762);
    $tmp3758 = $tmp3763.value;
    $l3760:;
    panda$core$Bit $tmp3764 = { $tmp3758 };
    if ($tmp3764.value) {
    {
        {
            panda$core$String* $tmp3767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3755, &$s3766);
            tmp633765 = $tmp3767;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3755));
            return tmp633765;
        }
    }
    }
    {
        tmp643768 = result3755;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3755));
        return tmp643768;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    panda$core$String* separator3780;
    panda$collections$Iterator* p$Iter3790;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3802;
    panda$io$MemoryOutputStream* bodyBuffer3823;
    panda$io$IndentedOutputStream* indentedBody3826;
    panda$collections$Iterator* f$Iter3830;
    org$pandalanguage$pandac$FieldDecl* f3843;
    panda$collections$Iterator* s$Iter3861;
    org$pandalanguage$pandac$IRNode* s3873;
    panda$core$Object* $tmp3769 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3769)) == ((panda$core$Object*) p_m->owner) }).value);
    {
        self->currentMethod = p_m;
    }
    {
        self->currentBlock = &$s3770;
    }
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3771 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3772 = panda$core$String$convert$R$panda$core$String($tmp3771);
    panda$core$String* $tmp3774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3772, &$s3773);
    panda$core$String* $tmp3775 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3774, $tmp3775);
    panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3776, &$s3777);
    (($fn3779) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3778);
    separator3780 = &$s3781;
    panda$core$Bit $tmp3782 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3783 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3782);
    if ($tmp3783.value) {
    {
        panda$core$String* $tmp3784 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3785 = panda$core$String$convert$R$panda$core$String($tmp3784);
        panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3785, &$s3786);
        (($fn3788) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3787);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3780));
            separator3780 = &$s3789;
        }
    }
    }
    {
        ITable* $tmp3791 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3791->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3791 = $tmp3791->next;
        }
        $fn3793 $tmp3792 = $tmp3791->methods[0];
        panda$collections$Iterator* $tmp3794 = $tmp3792(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3790 = $tmp3794;
        $l3795:;
        ITable* $tmp3797 = p$Iter3790->$class->itable;
        while ($tmp3797->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3797 = $tmp3797->next;
        }
        $fn3799 $tmp3798 = $tmp3797->methods[0];
        panda$core$Bit $tmp3800 = $tmp3798(p$Iter3790);
        panda$core$Bit $tmp3801 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3800);
        if (!$tmp3801.value) goto $l3796;
        {
            ITable* $tmp3803 = p$Iter3790->$class->itable;
            while ($tmp3803->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3803 = $tmp3803->next;
            }
            $fn3805 $tmp3804 = $tmp3803->methods[1];
            panda$core$Object* $tmp3806 = $tmp3804(p$Iter3790);
            p3802 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3806);
            panda$core$String* $tmp3807 = panda$core$String$convert$R$panda$core$String(separator3780);
            panda$core$String* $tmp3809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3807, &$s3808);
            panda$core$String* $tmp3810 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3802->type);
            panda$core$String* $tmp3811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3809, $tmp3810);
            panda$core$String* $tmp3813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3811, &$s3812);
            panda$core$String* $tmp3814 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3802->name);
            panda$core$String* $tmp3815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3813, $tmp3814);
            panda$core$String* $tmp3817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3815, &$s3816);
            (($fn3818) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3817);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3780));
                separator3780 = &$s3819;
            }
        }
        goto $l3795;
        $l3796:;
    }
    (($fn3821) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3820);
    panda$core$Int64 $tmp3822 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3822;
    panda$io$MemoryOutputStream* $tmp3824 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp3824->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3824->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3824);
    bodyBuffer3823 = $tmp3824;
    panda$io$IndentedOutputStream* $tmp3827 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp3827->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3827->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3827, ((panda$io$OutputStream*) bodyBuffer3823));
    indentedBody3826 = $tmp3827;
    panda$core$Bit $tmp3829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp3829.value) {
    {
        {
            panda$collections$ListView* $tmp3831 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, p_m->owner);
            ITable* $tmp3832 = ((panda$collections$Iterable*) $tmp3831)->$class->itable;
            while ($tmp3832->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3832 = $tmp3832->next;
            }
            $fn3834 $tmp3833 = $tmp3832->methods[0];
            panda$collections$Iterator* $tmp3835 = $tmp3833(((panda$collections$Iterable*) $tmp3831));
            f$Iter3830 = $tmp3835;
            $l3836:;
            ITable* $tmp3838 = f$Iter3830->$class->itable;
            while ($tmp3838->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3838 = $tmp3838->next;
            }
            $fn3840 $tmp3839 = $tmp3838->methods[0];
            panda$core$Bit $tmp3841 = $tmp3839(f$Iter3830);
            panda$core$Bit $tmp3842 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3841);
            if (!$tmp3842.value) goto $l3837;
            {
                ITable* $tmp3844 = f$Iter3830->$class->itable;
                while ($tmp3844->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3844 = $tmp3844->next;
                }
                $fn3846 $tmp3845 = $tmp3844->methods[1];
                panda$core$Object* $tmp3847 = $tmp3845(f$Iter3830);
                f3843 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3847);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f3843);
                panda$core$Bit $tmp3849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f3843->fieldKind.$rawValue, ((panda$core$Int64) { 0 }));
                bool $tmp3848 = $tmp3849.value;
                if (!$tmp3848) goto $l3850;
                panda$core$Bit $tmp3851 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->compiler, f3843->type);
                $tmp3848 = $tmp3851.value;
                $l3850:;
                panda$core$Bit $tmp3852 = { $tmp3848 };
                if ($tmp3852.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3853 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
                    $tmp3853->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3853->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode* $tmp3855 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
                    $tmp3855->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3855->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3857 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3855, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp3857);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp3853, ((panda$core$Int64) { 15 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f3843->type, $tmp3855, f3843);
                    org$pandalanguage$pandac$IRNode* $tmp3858 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
                    $tmp3858->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3858->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3860 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(f3843->type);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3858, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp3860);
                    org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, $tmp3853, $tmp3858, indentedBody3826);
                }
                }
            }
            goto $l3836;
            $l3837:;
        }
    }
    }
    {
        ITable* $tmp3862 = ((panda$collections$Iterable*) p_body)->$class->itable;
        while ($tmp3862->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3862 = $tmp3862->next;
        }
        $fn3864 $tmp3863 = $tmp3862->methods[0];
        panda$collections$Iterator* $tmp3865 = $tmp3863(((panda$collections$Iterable*) p_body));
        s$Iter3861 = $tmp3865;
        $l3866:;
        ITable* $tmp3868 = s$Iter3861->$class->itable;
        while ($tmp3868->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3868 = $tmp3868->next;
        }
        $fn3870 $tmp3869 = $tmp3868->methods[0];
        panda$core$Bit $tmp3871 = $tmp3869(s$Iter3861);
        panda$core$Bit $tmp3872 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3871);
        if (!$tmp3872.value) goto $l3867;
        {
            ITable* $tmp3874 = s$Iter3861->$class->itable;
            while ($tmp3874->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3874 = $tmp3874->next;
            }
            $fn3876 $tmp3875 = $tmp3874->methods[1];
            panda$core$Object* $tmp3877 = $tmp3875(s$Iter3861);
            s3873 = ((org$pandalanguage$pandac$IRNode*) $tmp3877);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3873, indentedBody3826);
        }
        goto $l3866;
        $l3867:;
    }
    panda$core$String* $tmp3878 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3879) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3878);
    panda$core$String* $tmp3880 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3823);
    (($fn3881) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3880);
    panda$core$Int64 $tmp3882 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3882;
    (($fn3884) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3883);
    {
        self->currentMethod = NULL;
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indentedBody3826));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3780));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bodyBuffer3823));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3885;
    PANDA_ASSERT(((panda$core$Bit) { self->currentClass == NULL }).value);
    {
        self->currentClass = p_cl;
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
    panda$io$File* $tmp3887 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3886);
    path3885 = $tmp3887;
    panda$io$File* $tmp3888 = panda$io$File$parent$R$panda$io$File$Q(path3885);
    panda$io$File$createDirectories($tmp3888);
    {
        panda$io$IndentedOutputStream* $tmp3889 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
        $tmp3889->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
        $tmp3889->refCount.value = 1;
        panda$io$OutputStream* $tmp3891 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3885);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3889, $tmp3891);
        self->out = $tmp3889;
    }
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp3892 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3893 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3893.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp3894 = org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path3885));
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    {
        self->currentClass = NULL;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp3895 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3896) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3895);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3897 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3898) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3897);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3899 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3900) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3899);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3901 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3902) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3901);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3903 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3904) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3903);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3905) self->out->out->$class->vtable[1])(self->out->out);
}
void org$pandalanguage$pandac$CCodeGenerator$cleanup(org$pandalanguage$pandac$CCodeGenerator* self) {
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

