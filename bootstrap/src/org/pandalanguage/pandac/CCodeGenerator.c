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
typedef void (*$fn943)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn999)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1017)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1038)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1079)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1092)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1102)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1105)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1117)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1123)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1136)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1146)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1149)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1207)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1212)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1225)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1251)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1253)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1269)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn1280)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1297)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1331)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1347)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1350)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1357)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1374)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1387)(panda$collections$CollectionView*);
typedef void (*$fn1409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1560)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1580)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1638)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1643)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1673)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1680)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1691)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1695)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1701)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1707)(panda$collections$Iterator*);
typedef void (*$fn1715)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1718)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1751)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1757)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1773)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1783)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1787)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1794)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1798)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1800)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1805)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1808)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1821)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1967)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2018)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2040)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2057)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2061)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2101)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2106)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2112)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2118)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2126)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn2133)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2138)(panda$collections$CollectionView*);
typedef void (*$fn2149)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2164)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2169)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2188)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2193)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2244)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2246)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2259)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2268)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2287)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2292)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2300)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2305)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2430)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2435)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2441)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2447)(panda$collections$Iterator*);
typedef void (*$fn2451)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2471)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2478)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2501)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2512)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2571)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2576)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2609)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2619)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2624)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2628)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2634)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2640)(panda$collections$Iterator*);
typedef void (*$fn2642)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2646)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2653)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2655)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2657)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2659)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2660)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2663)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2667)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2675)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2691)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2698)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2719)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2733)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2745)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2755)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2800)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2814)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2828)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2845)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2861)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2876)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2893)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2899)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2904)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2906)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2909)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2913)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2921)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2925)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2941)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2948)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2969)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2983)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2995)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3003)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3010)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3022)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3032)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3075)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3087)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3117)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3131)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3177)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3194)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3209)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3225)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3243)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3263)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3278)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3294)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3313)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3332)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3341)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3346)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3348)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3351)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3354)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3372)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3377)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3379)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3406)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3408)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3422)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3431)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3441)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3445)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3451)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3457)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn3508)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3518)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3527)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3542)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3555)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3561)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3601)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3608)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3614)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3620)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3625)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3631)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3637)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3648)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3654)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3660)(panda$collections$Iterator*);
typedef void (*$fn3668)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3670)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3675)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3785)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3794)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3799)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3805)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3811)(panda$collections$Iterator*);
typedef void (*$fn3824)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3827)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3840)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3846)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3852)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3870)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3876)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3882)(panda$collections$Iterator*);
typedef void (*$fn3885)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3887)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3890)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3902)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3904)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3906)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3908)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3910)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3911)(panda$io$OutputStream*);

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
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x31\x2c\x20", 5, 15122232102, NULL };
static panda$core$String $s988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s1195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s1197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s1206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20", 4, 137658487, NULL };
static panda$core$String $s1237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20", 4, 137372859, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 14, 9153752889249827899, NULL };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d", 7, 157293860332681, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, 2191018519584705024, NULL };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 12, -1785576568693804538, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x63\x6c\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 27, 7283889564528102738, NULL };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x20\x3d\x20\x31\x3b", 15, -7616502316629902533, NULL };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s1803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s1807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 14, 9153752889249827899, NULL };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 32, -2435628749655888173, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x2e\x76\x61\x6c\x75\x65\x20\x3d\x20\x31\x3b", 21, 5666803292027080506, NULL };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -5089590097621792313, NULL };
static panda$core$String $s2096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 2848555729212071077, NULL };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x73\x65\x6c\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s2204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s2450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d\x20\x3d\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s2506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x46\x72\x65\x65\x28", 10, -5790438204225352665, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s2654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x69\x6e\x2e\x76\x61\x6c\x75\x65\x3b", 11, -3956212002962864875, NULL };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x61\x78\x2e\x76\x61\x6c\x75\x65\x3b", 11, -4041768404061004273, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20\x31\x3b", 12, -4476855678279854640, NULL };
static panda$core$String $s2900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x61\x72\x74\x2e\x76\x61\x6c\x75\x65\x3b", 13, 3588086193908855763, NULL };
static panda$core$String $s2975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x65\x6e\x64\x2e\x76\x61\x6c\x75\x65\x3b", 11, 5794120589201096528, NULL };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x65\x70\x2e\x76\x61\x6c\x75\x65\x3b", 12, -1565217378717073995, NULL };
static panda$core$String $s3025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s3049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s3059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x30\x3b", 5, 13904243334, NULL };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s3207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s3214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2d\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s3276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x2d", 5, 13904537533, NULL };
static panda$core$String $s3303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x2d", 4, 137665772, NULL };
static panda$core$String $s3322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7b", 14, 1197661341919403142, NULL };
static panda$core$String $s3407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x6d\x73\x65\x74\x28\x26", 8, 22623213602606430, NULL };
static panda$core$String $s3435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x30\x2c\x20\x73\x69\x7a\x65\x6f\x66\x28", 12, 4086987682289124441, NULL };
static panda$core$String $s3439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s3522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s3525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s3531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20", 3, 1462916, NULL };
static panda$core$String $s3533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x63\x68\x61\x72\x2a\x29\x20", 9, 1531222690101128410, NULL };
static panda$core$String $s3535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s3539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s3597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x41\x4e\x44\x41\x5f\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s3615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s3662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s3669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x3b", 6, 2103477946177, NULL };
static panda$core$String $s3671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6c\x74\x3a", 8, 21658216358330300, NULL };
static panda$core$String $s3674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s3795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s3822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s3889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

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
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl152));
                    goto $l169;
                }
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
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp14924;
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
        panda$core$Object* $tmp923 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
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
        tmp14924 = result838;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result838));
        return tmp14924;
    }
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name925;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result930;
    panda$core$String* type935;
    org$pandalanguage$pandac$ClassDecl* value946;
    panda$collections$ListView* valueVTable949;
    panda$collections$ListView* vtable958;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC960;
    panda$core$String* superCast963;
    panda$core$String* itable968;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant970;
    panda$core$MutableString* code974;
    panda$core$String* separator994;
    panda$core$Range$LTpanda$core$Int64$GT $tmp996;
    org$pandalanguage$pandac$MethodDecl* m1014;
    panda$core$String* methodName1019;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp151039;
    panda$core$String* $tmp926 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp927 = panda$core$String$convert$R$panda$core$String($tmp926);
    panda$core$String* $tmp929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp927, &$s928);
    name925 = $tmp929;
    panda$core$Object* $tmp931 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name925));
    result930 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp931);
    if (((panda$core$Bit) { result930 == NULL }).value) {
    {
        panda$core$Bit $tmp932 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp932.value) {
        {
            org$pandalanguage$pandac$Type* $tmp933 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp934 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp933);
            type935 = &$s936;
            panda$core$String* $tmp937 = panda$core$String$convert$R$panda$core$String(name925);
            panda$core$String* $tmp939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp937, &$s938);
            panda$core$String* $tmp940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp939, type935);
            panda$core$String* $tmp942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp940, &$s941);
            (($fn943) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp942);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result930));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp944 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaZAlloc(32);
                $tmp944->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
                $tmp944->refCount.value = 1;
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp944, name925, type935);
                result930 = $tmp944;
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type935));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp947 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp948 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp947);
            value946 = $tmp948;
            panda$collections$ListView* $tmp950 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value946);
            valueVTable949 = $tmp950;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result930));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp951 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaZAlloc(32);
                $tmp951->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
                $tmp951->refCount.value = 1;
                panda$core$String* $tmp953 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$String* $tmp954 = panda$core$String$convert$R$panda$core$String($tmp953);
                panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, &$s955);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp951, $tmp956, &$s957);
                result930 = $tmp951;
            }
            panda$collections$ListView* $tmp959 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable958 = $tmp959;
            org$pandalanguage$pandac$ClassDecl* $tmp961 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp962 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp961);
            superCC960 = $tmp962;
            panda$core$String* $tmp965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s964, superCC960->name);
            panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp965, &$s966);
            superCast963 = $tmp967;
            panda$core$String* $tmp969 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable968 = $tmp969;
            org$pandalanguage$pandac$Type* $tmp971 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp972 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp971);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp973 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp972);
            clConstant970 = $tmp973;
            panda$core$MutableString* $tmp975 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp975->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp975->refCount.value = 1;
            panda$core$String* $tmp977 = panda$core$String$convert$R$panda$core$String(result930->name);
            panda$core$String* $tmp979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp977, &$s978);
            panda$core$String* $tmp980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp979, result930->name);
            panda$core$String* $tmp982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp980, &$s981);
            panda$core$String* $tmp984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s983, clConstant970->name);
            panda$core$String* $tmp986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp984, &$s985);
            panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp986, superCast963);
            panda$core$String* $tmp989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp987, &$s988);
            panda$core$String* $tmp990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp989, itable968);
            panda$core$String* $tmp992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp990, &$s991);
            panda$core$String* $tmp993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp982, $tmp992);
            panda$core$MutableString$init$panda$core$String($tmp975, $tmp993);
            code974 = $tmp975;
            separator994 = &$s995;
            ITable* $tmp997 = ((panda$collections$CollectionView*) valueVTable949)->$class->itable;
            while ($tmp997->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp997 = $tmp997->next;
            }
            $fn999 $tmp998 = $tmp997->methods[0];
            panda$core$Int64 $tmp1000 = $tmp998(((panda$collections$CollectionView*) valueVTable949));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp996, ((panda$core$Int64) { 0 }), $tmp1000, ((panda$core$Bit) { false }));
            int64_t $tmp1002 = $tmp996.min.value;
            panda$core$Int64 i1001 = { $tmp1002 };
            int64_t $tmp1004 = $tmp996.max.value;
            bool $tmp1005 = $tmp996.inclusive.value;
            if ($tmp1005) goto $l1012; else goto $l1013;
            $l1012:;
            if ($tmp1002 <= $tmp1004) goto $l1006; else goto $l1008;
            $l1013:;
            if ($tmp1002 < $tmp1004) goto $l1006; else goto $l1008;
            $l1006:;
            {
                ITable* $tmp1015 = vtable958->$class->itable;
                while ($tmp1015->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1015 = $tmp1015->next;
                }
                $fn1017 $tmp1016 = $tmp1015->methods[0];
                panda$core$Object* $tmp1018 = $tmp1016(vtable958, i1001);
                m1014 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1018);
                memset(&methodName1019, 0, sizeof(methodName1019));
                if (((panda$core$Bit) { ((panda$core$Object*) m1014->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    {
                        panda$core$String* $tmp1020 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1014, self->wrapperShims);
                        methodName1019 = $tmp1020;
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp1021 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1014);
                        methodName1019 = $tmp1021;
                    }
                    panda$core$Bit $tmp1022 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1014->owner);
                    if ($tmp1022.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1014);
                    }
                    }
                }
                }
                panda$core$String* $tmp1023 = panda$core$String$convert$R$panda$core$String(separator994);
                panda$core$String* $tmp1025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1023, &$s1024);
                panda$core$String* $tmp1026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1025, methodName1019);
                panda$core$String* $tmp1028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1026, &$s1027);
                panda$core$MutableString$append$panda$core$String(code974, $tmp1028);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator994));
                    separator994 = &$s1029;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodName1019));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1014));
                }
            }
            $l1009:;
            int64_t $tmp1031 = $tmp1004 - i1001.value;
            if ($tmp1005) goto $l1032; else goto $l1033;
            $l1032:;
            if ((uint64_t) $tmp1031 >= 1) goto $l1030; else goto $l1008;
            $l1033:;
            if ((uint64_t) $tmp1031 > 1) goto $l1030; else goto $l1008;
            $l1030:;
            i1001.value += 1;
            goto $l1006;
            $l1008:;
            panda$core$MutableString$append$panda$core$String(code974, &$s1036);
            panda$core$String* $tmp1037 = panda$core$MutableString$finish$R$panda$core$String(code974);
            (($fn1038) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1037);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator994));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCast963));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable958));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable968));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCC960));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value946));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable949));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code974));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) clConstant970));
            }
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name925), ((panda$core$Object*) result930));
    }
    }
    {
        tmp151039 = result930;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result930));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name925));
        }
        return tmp151039;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1045;
    panda$core$String* tmp161055;
    panda$core$Bit $tmp1040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp1040.value) {
    {
        panda$core$String* $tmp1042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1041, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1042, &$s1043);
        return $tmp1044;
    }
    }
    panda$core$Object* $tmp1046 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1045 = ((panda$core$String*) $tmp1046);
    if (((panda$core$Bit) { result1045 == NULL }).value) {
    {
        panda$core$Int64 $tmp1047 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1047;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1045));
            panda$core$String* $tmp1048 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_v)->name);
            panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, &$s1049);
            panda$core$Int64$wrapper* $tmp1051;
            $tmp1051 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1051->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1051->refCount = 1;
            $tmp1051->value = self->varCount;
            panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1050, ((panda$core$Object*) $tmp1051));
            panda$core$String* $tmp1054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1052, &$s1053);
            result1045 = $tmp1054;
        }
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1045));
    }
    }
    {
        tmp161055 = result1045;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1045));
        return tmp161055;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1056 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1056.value);
    panda$core$String* $tmp1057 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1058 = panda$core$String$convert$R$panda$core$String($tmp1057);
    panda$core$String* $tmp1060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1058, &$s1059);
    panda$core$String* $tmp1061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1060, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1061, &$s1062);
    return $tmp1063;
}
org$pandalanguage$pandac$CCodeGenerator$OpClass org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$660_131064;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1066;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1072;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1074;
    {
        $match$660_131064 = p_t->typeKind;
        panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$660_131064, ((panda$core$Int64) { 12 }));
        if ($tmp1065.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1066, ((panda$core$Int64) { 0 }));
            return $tmp1066;
        }
        }
        else {
        panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$660_131064, ((panda$core$Int64) { 13 }));
        bool $tmp1067 = $tmp1068.value;
        if ($tmp1067) goto $l1069;
        panda$core$Bit $tmp1070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$660_131064, ((panda$core$Int64) { 19 }));
        $tmp1067 = $tmp1070.value;
        $l1069:;
        panda$core$Bit $tmp1071 = { $tmp1067 };
        if ($tmp1071.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1072, ((panda$core$Int64) { 1 }));
            return $tmp1072;
        }
        }
        else {
        panda$core$Bit $tmp1073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$660_131064, ((panda$core$Int64) { 20 }));
        if ($tmp1073.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1074, ((panda$core$Int64) { 2 }));
            return $tmp1074;
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
    panda$core$String* result1075;
    panda$core$String* leftRef1077;
    panda$core$String* falseLabel1093;
    panda$core$String* rightRef1103;
    panda$core$String* tmp171118;
    panda$core$String* $tmp1076 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1075 = $tmp1076;
    panda$core$String* $tmp1078 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1077 = $tmp1078;
    org$pandalanguage$pandac$Type* $tmp1080 = (($fn1079) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1081 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1082 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1080, $tmp1081);
    if ($tmp1082.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1077));
            panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1077, &$s1083);
            leftRef1077 = $tmp1084;
        }
    }
    }
    panda$core$String* $tmp1086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1085, result1075);
    panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1086, &$s1087);
    panda$core$String* $tmp1089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1088, leftRef1077);
    panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1089, &$s1090);
    (($fn1092) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1091);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp1094 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1093 = $tmp1094;
    panda$core$String* $tmp1096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1095, result1075);
    panda$core$String* $tmp1098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1096, &$s1097);
    panda$core$String* $tmp1099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, falseLabel1093);
    panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1099, &$s1100);
    (($fn1102) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1101);
    panda$core$String* $tmp1104 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1103 = $tmp1104;
    org$pandalanguage$pandac$Type* $tmp1106 = (($fn1105) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1107 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1108 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1106, $tmp1107);
    if ($tmp1108.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1103));
            panda$core$String* $tmp1110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1103, &$s1109);
            rightRef1103 = $tmp1110;
        }
    }
    }
    panda$core$String* $tmp1111 = panda$core$String$convert$R$panda$core$String(result1075);
    panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1111, &$s1112);
    panda$core$String* $tmp1114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1113, rightRef1103);
    panda$core$String* $tmp1116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1114, &$s1115);
    (($fn1117) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1116);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1093, p_out);
    {
        tmp171118 = result1075;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1075));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel1093));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1077));
        }
        return tmp171118;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1119;
    panda$core$String* leftRef1121;
    panda$core$String* trueLabel1137;
    panda$core$String* rightRef1147;
    panda$core$String* tmp181162;
    panda$core$String* $tmp1120 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1119 = $tmp1120;
    panda$core$String* $tmp1122 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1121 = $tmp1122;
    org$pandalanguage$pandac$Type* $tmp1124 = (($fn1123) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1125 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1126 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1124, $tmp1125);
    if ($tmp1126.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1121));
            panda$core$String* $tmp1128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1121, &$s1127);
            leftRef1121 = $tmp1128;
        }
    }
    }
    panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1129, result1119);
    panda$core$String* $tmp1132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1130, &$s1131);
    panda$core$String* $tmp1133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1132, leftRef1121);
    panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1133, &$s1134);
    (($fn1136) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1135);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp1138 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1137 = $tmp1138;
    panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1139, result1119);
    panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1140, &$s1141);
    panda$core$String* $tmp1143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1142, trueLabel1137);
    panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1143, &$s1144);
    (($fn1146) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1145);
    panda$core$String* $tmp1148 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1147 = $tmp1148;
    org$pandalanguage$pandac$Type* $tmp1150 = (($fn1149) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1151 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1152 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1150, $tmp1151);
    if ($tmp1152.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1147));
            panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1147, &$s1153);
            rightRef1147 = $tmp1154;
        }
    }
    }
    panda$core$String* $tmp1155 = panda$core$String$convert$R$panda$core$String(result1119);
    panda$core$String* $tmp1157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1155, &$s1156);
    panda$core$String* $tmp1158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1157, rightRef1147);
    panda$core$String* $tmp1160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1158, &$s1159);
    (($fn1161) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1160);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1137, p_out);
    {
        tmp181162 = result1119;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1119));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1147));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel1137));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1121));
        }
        return tmp181162;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, org$pandalanguage$pandac$parser$Token$Kind p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1163;
    panda$core$Bit logical1164;
    org$pandalanguage$pandac$parser$Token$Kind $match$715_91165;
    panda$core$String* result1204;
    panda$core$String* tmp191226;
    memset(&cOp1163, 0, sizeof(cOp1163));
    logical1164 = ((panda$core$Bit) { false });
    {
        $match$715_91165 = p_op;
        panda$core$Bit $tmp1166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp1166.value) {
        {
            {
                cOp1163 = &$s1167;
            }
        }
        }
        else {
        panda$core$Bit $tmp1168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp1168.value) {
        {
            {
                cOp1163 = &$s1169;
            }
        }
        }
        else {
        panda$core$Bit $tmp1170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp1170.value) {
        {
            {
                cOp1163 = &$s1171;
            }
        }
        }
        else {
        panda$core$Bit $tmp1172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp1172.value) {
        {
            {
                cOp1163 = &$s1173;
            }
        }
        }
        else {
        panda$core$Bit $tmp1174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp1174.value) {
        {
            {
                cOp1163 = &$s1175;
            }
        }
        }
        else {
        panda$core$Bit $tmp1176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp1176.value) {
        {
            {
                cOp1163 = &$s1177;
            }
        }
        }
        else {
        panda$core$Bit $tmp1178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp1178.value) {
        {
            {
                cOp1163 = &$s1179;
            }
        }
        }
        else {
        panda$core$Bit $tmp1180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1180.value) {
        {
            {
                cOp1163 = &$s1181;
            }
        }
        }
        else {
        panda$core$Bit $tmp1182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp1182.value) {
        {
            {
                cOp1163 = &$s1183;
            }
        }
        }
        else {
        panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp1184.value) {
        {
            {
                cOp1163 = &$s1185;
            }
        }
        }
        else {
        panda$core$Bit $tmp1187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 70 }));
        bool $tmp1186 = $tmp1187.value;
        if ($tmp1186) goto $l1188;
        panda$core$Bit $tmp1189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1186 = $tmp1189.value;
        $l1188:;
        panda$core$Bit $tmp1190 = { $tmp1186 };
        if ($tmp1190.value) {
        {
            {
                cOp1163 = &$s1191;
            }
        }
        }
        else {
        panda$core$Bit $tmp1192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1192.value) {
        {
            {
                cOp1163 = &$s1193;
            }
            logical1164 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp1194.value) {
        {
            {
                cOp1163 = &$s1195;
            }
            logical1164 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1196.value) {
        {
            {
                cOp1163 = &$s1197;
            }
            logical1164 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1198.value) {
        {
            {
                cOp1163 = &$s1199;
            }
            logical1164 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp1200.value) {
        {
            {
                cOp1163 = &$s1201;
            }
            logical1164 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$715_91165.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp1202.value) {
        {
            logical1164 = ((panda$core$Bit) { true });
            {
                cOp1163 = &$s1203;
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
    panda$core$String* $tmp1205 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1204 = $tmp1205;
    if (logical1164.value) {
    {
        (($fn1207) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1206);
    }
    }
    else {
    {
        panda$core$String* $tmp1208 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1209 = panda$core$String$convert$R$panda$core$String($tmp1208);
        panda$core$String* $tmp1211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1209, &$s1210);
        (($fn1212) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1211);
    }
    }
    panda$core$String* $tmp1213 = panda$core$String$convert$R$panda$core$String(result1204);
    panda$core$String* $tmp1215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1213, &$s1214);
    panda$core$String* $tmp1216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1215, p_leftRef);
    panda$core$String* $tmp1218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1216, &$s1217);
    panda$core$String* $tmp1219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1218, cOp1163);
    panda$core$String* $tmp1221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1219, &$s1220);
    panda$core$String* $tmp1222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1221, p_rightRef);
    panda$core$String* $tmp1224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1222, &$s1223);
    (($fn1225) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1224);
    {
        tmp191226 = result1204;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1204));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1163));
        }
        return tmp191226;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1227;
    panda$core$String* rightRef1229;
    panda$core$String* tmp201231;
    panda$core$String* $tmp1228 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1227 = $tmp1228;
    panda$core$String* $tmp1230 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1229 = $tmp1230;
    {
        panda$core$String* $tmp1233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1232, leftRef1227);
        panda$core$String* $tmp1235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1233, &$s1234);
        panda$core$String* $tmp1236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1235, rightRef1229);
        panda$core$String* $tmp1238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1236, &$s1237);
        tmp201231 = $tmp1238;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1229));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1227));
        }
        return tmp201231;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1239;
    panda$core$String* rightRef1241;
    panda$core$String* tmp211243;
    panda$core$String* $tmp1240 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1239 = $tmp1240;
    panda$core$String* $tmp1242 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1241 = $tmp1242;
    {
        panda$core$String* $tmp1245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1244, leftRef1239);
        panda$core$String* $tmp1247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1245, &$s1246);
        panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1247, rightRef1241);
        panda$core$String* $tmp1250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1248, &$s1249);
        tmp211243 = $tmp1250;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1241));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1239));
        }
        return tmp211243;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$parser$Token$Kind $match$785_91256;
    panda$core$String* leftRef1265;
    panda$core$String* rightRef1267;
    org$pandalanguage$pandac$Type* $tmp1252 = (($fn1251) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1254 = (($fn1253) p_right->$class->vtable[2])(p_right);
    panda$core$Bit $tmp1255 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1252, $tmp1254);
    PANDA_ASSERT($tmp1255.value);
    {
        $match$785_91256 = p_op;
        panda$core$Bit $tmp1257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$785_91256.$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp1257.value) {
        {
            panda$core$String* $tmp1258 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1258;
        }
        }
        else {
        panda$core$Bit $tmp1259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$785_91256.$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp1259.value) {
        {
            panda$core$String* $tmp1260 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1260;
        }
        }
        else {
        panda$core$Bit $tmp1261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$785_91256.$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp1261.value) {
        {
            panda$core$String* $tmp1262 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1262;
        }
        }
        else {
        panda$core$Bit $tmp1263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$785_91256.$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp1263.value) {
        {
            panda$core$String* $tmp1264 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1264;
        }
        }
        else {
        {
            panda$core$String* $tmp1266 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1265 = $tmp1266;
            panda$core$String* $tmp1268 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1267 = $tmp1268;
            org$pandalanguage$pandac$Type* $tmp1270 = (($fn1269) p_left->$class->vtable[2])(p_left);
            panda$core$String* $tmp1271 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1270, leftRef1265, p_op, rightRef1267, p_out);
            return $tmp1271;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1272;
    panda$core$Int64 index1274;
    panda$collections$ListView* vtable1275;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1277;
    panda$core$String* tmp221306;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1273 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1272 = $tmp1273;
    index1274 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1276 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1275 = $tmp1276;
    ITable* $tmp1278 = ((panda$collections$CollectionView*) vtable1275)->$class->itable;
    while ($tmp1278->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1278 = $tmp1278->next;
    }
    $fn1280 $tmp1279 = $tmp1278->methods[0];
    panda$core$Int64 $tmp1281 = $tmp1279(((panda$collections$CollectionView*) vtable1275));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1277, ((panda$core$Int64) { 0 }), $tmp1281, ((panda$core$Bit) { false }));
    int64_t $tmp1283 = $tmp1277.min.value;
    panda$core$Int64 i1282 = { $tmp1283 };
    int64_t $tmp1285 = $tmp1277.max.value;
    bool $tmp1286 = $tmp1277.inclusive.value;
    if ($tmp1286) goto $l1293; else goto $l1294;
    $l1293:;
    if ($tmp1283 <= $tmp1285) goto $l1287; else goto $l1289;
    $l1294:;
    if ($tmp1283 < $tmp1285) goto $l1287; else goto $l1289;
    $l1287:;
    {
        ITable* $tmp1295 = vtable1275->$class->itable;
        while ($tmp1295->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1295 = $tmp1295->next;
        }
        $fn1297 $tmp1296 = $tmp1295->methods[0];
        panda$core$Object* $tmp1298 = $tmp1296(vtable1275, i1282);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1298)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1274 = i1282;
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1275));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1272));
                }
                goto $l1289;
            }
        }
        }
    }
    $l1290:;
    int64_t $tmp1300 = $tmp1285 - i1282.value;
    if ($tmp1286) goto $l1301; else goto $l1302;
    $l1301:;
    if ((uint64_t) $tmp1300 >= 1) goto $l1299; else goto $l1289;
    $l1302:;
    if ((uint64_t) $tmp1300 > 1) goto $l1299; else goto $l1289;
    $l1299:;
    i1282.value += 1;
    goto $l1287;
    $l1289:;
    panda$core$Bit $tmp1305 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1274, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1305.value);
    {
        org$pandalanguage$pandac$Type* $tmp1308 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        panda$core$String* $tmp1309 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1308);
        panda$core$String* $tmp1310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1307, $tmp1309);
        panda$core$String* $tmp1312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1310, &$s1311);
        panda$core$String* $tmp1313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1312, p_target);
        panda$core$String* $tmp1315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1313, &$s1314);
        panda$core$Int64$wrapper* $tmp1316;
        $tmp1316 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp1316->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp1316->refCount = 1;
        $tmp1316->value = index1274;
        panda$core$String* $tmp1317 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1315, ((panda$core$Object*) $tmp1316));
        panda$core$String* $tmp1319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1317, &$s1318);
        tmp221306 = $tmp1319;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1275));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1272));
        }
        return tmp221306;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1320;
    panda$core$String* itable1322;
    panda$core$Int64 index1351;
    panda$collections$ListView* vtable1352;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1354;
    panda$core$String* result1391;
    panda$core$String* methodType1393;
    panda$core$String* tmp231410;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1321 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1320 = $tmp1321;
    panda$core$String* $tmp1323 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1322 = $tmp1323;
    panda$core$String* $tmp1325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1324, itable1322);
    panda$core$String* $tmp1327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1325, &$s1326);
    panda$core$String* $tmp1328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1327, p_target);
    panda$core$String* $tmp1330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1328, &$s1329);
    (($fn1331) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1330);
    panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1332, itable1322);
    panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1333, &$s1334);
    panda$core$String* $tmp1336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1335, cc1320->name);
    panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1336, &$s1337);
    (($fn1339) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1338);
    panda$core$Int64 $tmp1340 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1340;
    panda$core$String* $tmp1341 = panda$core$String$convert$R$panda$core$String(itable1322);
    panda$core$String* $tmp1343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1341, &$s1342);
    panda$core$String* $tmp1344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1343, itable1322);
    panda$core$String* $tmp1346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1344, &$s1345);
    (($fn1347) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1346);
    panda$core$Int64 $tmp1348 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1348;
    (($fn1350) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1349);
    index1351 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1353 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1352 = $tmp1353;
    ITable* $tmp1355 = ((panda$collections$CollectionView*) vtable1352)->$class->itable;
    while ($tmp1355->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1355 = $tmp1355->next;
    }
    $fn1357 $tmp1356 = $tmp1355->methods[0];
    panda$core$Int64 $tmp1358 = $tmp1356(((panda$collections$CollectionView*) vtable1352));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1354, ((panda$core$Int64) { 0 }), $tmp1358, ((panda$core$Bit) { false }));
    int64_t $tmp1360 = $tmp1354.min.value;
    panda$core$Int64 i1359 = { $tmp1360 };
    int64_t $tmp1362 = $tmp1354.max.value;
    bool $tmp1363 = $tmp1354.inclusive.value;
    if ($tmp1363) goto $l1370; else goto $l1371;
    $l1370:;
    if ($tmp1360 <= $tmp1362) goto $l1364; else goto $l1366;
    $l1371:;
    if ($tmp1360 < $tmp1362) goto $l1364; else goto $l1366;
    $l1364:;
    {
        ITable* $tmp1372 = vtable1352->$class->itable;
        while ($tmp1372->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1372 = $tmp1372->next;
        }
        $fn1374 $tmp1373 = $tmp1372->methods[0];
        panda$core$Object* $tmp1375 = $tmp1373(vtable1352, i1359);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1375)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1351 = i1359;
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1352));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1320));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable1322));
                }
                goto $l1366;
            }
        }
        }
    }
    $l1367:;
    int64_t $tmp1377 = $tmp1362 - i1359.value;
    if ($tmp1363) goto $l1378; else goto $l1379;
    $l1378:;
    if ((uint64_t) $tmp1377 >= 1) goto $l1376; else goto $l1366;
    $l1379:;
    if ((uint64_t) $tmp1377 > 1) goto $l1376; else goto $l1366;
    $l1376:;
    i1359.value += 1;
    goto $l1364;
    $l1366:;
    org$pandalanguage$pandac$Type* $tmp1382 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1383 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1382);
    panda$collections$ListView* $tmp1384 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1383);
    ITable* $tmp1385 = ((panda$collections$CollectionView*) $tmp1384)->$class->itable;
    while ($tmp1385->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1385 = $tmp1385->next;
    }
    $fn1387 $tmp1386 = $tmp1385->methods[0];
    panda$core$Int64 $tmp1388 = $tmp1386(((panda$collections$CollectionView*) $tmp1384));
    panda$core$Int64 $tmp1389 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1351, $tmp1388);
    index1351 = $tmp1389;
    panda$core$Bit $tmp1390 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1351, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1390.value);
    panda$core$String* $tmp1392 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1391 = $tmp1392;
    org$pandalanguage$pandac$Type* $tmp1394 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1395 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1394);
    methodType1393 = $tmp1395;
    panda$core$String* $tmp1396 = panda$core$String$convert$R$panda$core$String(methodType1393);
    panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1396, &$s1397);
    panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1398, result1391);
    panda$core$String* $tmp1401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1399, &$s1400);
    panda$core$String* $tmp1402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1401, itable1322);
    panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, &$s1403);
    panda$core$Int64$wrapper* $tmp1405;
    $tmp1405 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp1405->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1405->refCount = 1;
    $tmp1405->value = index1351;
    panda$core$String* $tmp1406 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1404, ((panda$core$Object*) $tmp1405));
    panda$core$String* $tmp1408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1406, &$s1407);
    (($fn1409) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1408);
    {
        tmp231410 = result1391;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1391));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1352));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1320));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable1322));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodType1393));
        }
        return tmp231410;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1412 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1411 = $tmp1412.value;
    if (!$tmp1411) goto $l1413;
    panda$core$Bit $tmp1414 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1411 = $tmp1414.value;
    $l1413:;
    panda$core$Bit $tmp1415 = { $tmp1411 };
    if ($tmp1415.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1416.value) {
        {
            panda$core$String* $tmp1417 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1417;
        }
        }
        else {
        {
            panda$core$String* $tmp1418 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1418;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1419 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1419.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1420 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1420;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$858_91421;
    panda$core$String* count1426;
    panda$core$Int64 elementSize1432;
    panda$core$String* ptr1452;
    panda$core$String* ptr1463;
    panda$core$String* index1466;
    panda$core$String* ptr1479;
    panda$core$String* oldCount1482;
    panda$core$String* newCount1485;
    panda$core$Int64 elementSize1491;
    panda$core$String* ptr1522;
    panda$core$String* offset1525;
    {
        $match$858_91421 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp1423 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$858_91421, &$s1422);
        if ($tmp1423.value) {
        {
            panda$core$Int64 $tmp1424 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1424, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1425.value);
            panda$core$Object* $tmp1427 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1428 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1427), p_out);
            count1426 = $tmp1428;
            org$pandalanguage$pandac$Type* $tmp1429 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1430 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1429->subtypes);
            panda$core$Bit $tmp1431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1430, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1431.value);
            org$pandalanguage$pandac$Type* $tmp1433 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1434 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1433->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1435 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1434));
            elementSize1432 = $tmp1435;
            panda$core$String* $tmp1437 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1436, $tmp1437);
            panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1438, &$s1439);
            panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1440, count1426);
            panda$core$String* $tmp1443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1441, &$s1442);
            panda$core$Int64$wrapper* $tmp1444;
            $tmp1444 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1444->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1444->refCount = 1;
            $tmp1444->value = elementSize1432;
            panda$core$String* $tmp1445 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1443, ((panda$core$Object*) $tmp1444));
            panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1445, &$s1446);
            return $tmp1447;
        }
        }
        else {
        panda$core$Bit $tmp1449 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$858_91421, &$s1448);
        if ($tmp1449.value) {
        {
            panda$core$Int64 $tmp1450 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1450, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1451.value);
            panda$core$Object* $tmp1453 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1454 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1453), p_out);
            ptr1452 = $tmp1454;
            panda$core$String* $tmp1456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1455, ptr1452);
            panda$core$String* $tmp1458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1456, &$s1457);
            return $tmp1458;
        }
        }
        else {
        panda$core$Bit $tmp1460 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$858_91421, &$s1459);
        if ($tmp1460.value) {
        {
            panda$core$Int64 $tmp1461 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1461, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1462.value);
            panda$core$Object* $tmp1464 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1465 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1464), p_out);
            ptr1463 = $tmp1465;
            panda$core$Object* $tmp1467 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1468 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1467), p_out);
            index1466 = $tmp1468;
            panda$core$String* $tmp1469 = panda$core$String$convert$R$panda$core$String(ptr1463);
            panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1469, &$s1470);
            panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1471, index1466);
            panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1472, &$s1473);
            return $tmp1474;
        }
        }
        else {
        panda$core$Bit $tmp1476 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$858_91421, &$s1475);
        if ($tmp1476.value) {
        {
            panda$core$Int64 $tmp1477 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1477, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1478.value);
            panda$core$Object* $tmp1480 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1481 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1480), p_out);
            ptr1479 = $tmp1481;
            panda$core$Object* $tmp1483 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1484 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1483), p_out);
            oldCount1482 = $tmp1484;
            panda$core$Object* $tmp1486 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp1487 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1486), p_out);
            newCount1485 = $tmp1487;
            org$pandalanguage$pandac$Type* $tmp1488 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1489 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1488->subtypes);
            panda$core$Bit $tmp1490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1489, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1490.value);
            org$pandalanguage$pandac$Type* $tmp1492 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1493 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1492->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1494 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1493));
            elementSize1491 = $tmp1494;
            panda$core$String* $tmp1496 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1495, $tmp1496);
            panda$core$String* $tmp1499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1497, &$s1498);
            panda$core$String* $tmp1500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1499, ptr1479);
            panda$core$String* $tmp1502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1500, &$s1501);
            panda$core$String* $tmp1503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1502, oldCount1482);
            panda$core$String* $tmp1505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1503, &$s1504);
            panda$core$Int64$wrapper* $tmp1506;
            $tmp1506 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1506->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1506->refCount = 1;
            $tmp1506->value = elementSize1491;
            panda$core$String* $tmp1507 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1505, ((panda$core$Object*) $tmp1506));
            panda$core$String* $tmp1509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1507, &$s1508);
            panda$core$String* $tmp1510 = panda$core$String$convert$R$panda$core$String(newCount1485);
            panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1510, &$s1511);
            panda$core$Int64$wrapper* $tmp1513;
            $tmp1513 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1513->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1513->refCount = 1;
            $tmp1513->value = elementSize1491;
            panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1512, ((panda$core$Object*) $tmp1513));
            panda$core$String* $tmp1516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1514, &$s1515);
            panda$core$String* $tmp1517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1509, $tmp1516);
            return $tmp1517;
        }
        }
        else {
        panda$core$Bit $tmp1519 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$858_91421, &$s1518);
        if ($tmp1519.value) {
        {
            panda$core$Int64 $tmp1520 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1520, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1521.value);
            panda$core$Object* $tmp1523 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1524 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1523), p_out);
            ptr1522 = $tmp1524;
            panda$core$Object* $tmp1526 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1527 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1526), p_out);
            offset1525 = $tmp1527;
            panda$core$String* $tmp1529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1528, ptr1522);
            panda$core$String* $tmp1531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1529, &$s1530);
            panda$core$String* $tmp1532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1531, offset1525);
            panda$core$String* $tmp1534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1532, &$s1533);
            return $tmp1534;
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
    org$pandalanguage$pandac$MethodDecl* m1535;
    panda$core$String* tmp241538;
    panda$core$String* bit1547;
    panda$core$String* result1551;
    panda$core$String* tmp251561;
    panda$core$String* tmp271562;
    panda$core$String* bit1567;
    panda$core$String* result1571;
    panda$core$String* tmp261581;
    panda$core$String* tmp281582;
    panda$collections$Array* argRefs1583;
    org$pandalanguage$pandac$Type* actualMethodType1587;
    panda$core$String* actualResultType1588;
    panda$core$Bit isSuper1589;
    panda$core$Int64 offset1609;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1614;
    panda$core$String* arg1629;
    panda$core$String* target1654;
    panda$core$String* methodRef1658;
    panda$core$Bit indirect1660;
    panda$core$String* result1662;
    panda$core$String* separator1664;
    panda$core$String* indirectVar1666;
    panda$collections$Iterator* arg$Iter1692;
    panda$core$String* arg1704;
    panda$core$String* tmp291721;
    panda$core$String* tmp301726;
    m1535 = p_mref->value;
    panda$core$Bit $tmp1537 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1535->owner)->name, &$s1536);
    if ($tmp1537.value) {
    {
        {
            panda$core$String* $tmp1539 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, p_t, p_mref, p_args, p_out);
            tmp241538 = $tmp1539;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1535));
            return tmp241538;
        }
    }
    }
    panda$core$Bit $tmp1540 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1535->owner);
    if ($tmp1540.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1535);
    }
    }
    panda$core$Bit $tmp1542 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1535->owner)->name, &$s1541);
    if ($tmp1542.value) {
    {
        panda$core$Bit $tmp1544 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1535)->name, &$s1543);
        if ($tmp1544.value) {
        {
            panda$core$Int64 $tmp1545 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1545, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1546.value);
            panda$core$Object* $tmp1548 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1549 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1550 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1548), ((org$pandalanguage$pandac$IRNode*) $tmp1549), p_out);
            bit1547 = $tmp1550;
            panda$core$String* $tmp1552 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1551 = $tmp1552;
            panda$core$String* $tmp1554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1553, result1551);
            panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1554, &$s1555);
            panda$core$String* $tmp1557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1556, bit1547);
            panda$core$String* $tmp1559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1557, &$s1558);
            (($fn1560) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1559);
            {
                tmp251561 = result1551;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1551));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit1547));
                }
                {
                    tmp271562 = tmp251561;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1535));
                    return tmp271562;
                }
            }
        }
        }
        panda$core$Bit $tmp1564 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1535)->name, &$s1563);
        if ($tmp1564.value) {
        {
            panda$core$Int64 $tmp1565 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1565, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1566.value);
            panda$core$Object* $tmp1568 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1569 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1570 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1568), ((org$pandalanguage$pandac$IRNode*) $tmp1569), p_out);
            bit1567 = $tmp1570;
            panda$core$String* $tmp1572 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1571 = $tmp1572;
            panda$core$String* $tmp1574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1573, result1571);
            panda$core$String* $tmp1576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1574, &$s1575);
            panda$core$String* $tmp1577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1576, bit1567);
            panda$core$String* $tmp1579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1577, &$s1578);
            (($fn1580) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1579);
            {
                tmp261581 = result1571;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1571));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit1567));
                }
                {
                    tmp281582 = tmp261581;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1535));
                    return tmp281582;
                }
            }
        }
        }
    }
    }
    panda$collections$Array* $tmp1584 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1584->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1584->refCount.value = 1;
    panda$core$Int64 $tmp1586 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$collections$Array$init$panda$core$Int64($tmp1584, $tmp1586);
    argRefs1583 = $tmp1584;
    memset(&actualMethodType1587, 0, sizeof(actualMethodType1587));
    memset(&actualResultType1588, 0, sizeof(actualResultType1588));
    panda$core$Int64 $tmp1591 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp1592 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1591, ((panda$core$Int64) { 1 }));
    bool $tmp1590 = $tmp1592.value;
    if (!$tmp1590) goto $l1593;
    panda$core$Object* $tmp1594 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1594)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp1590 = $tmp1595.value;
    $l1593:;
    panda$core$Bit $tmp1596 = { $tmp1590 };
    isSuper1589 = $tmp1596;
    panda$core$Bit $tmp1598 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1589);
    bool $tmp1597 = $tmp1598.value;
    if (!$tmp1597) goto $l1599;
    panda$core$Bit $tmp1600 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1535);
    $tmp1597 = $tmp1600.value;
    $l1599:;
    panda$core$Bit $tmp1601 = { $tmp1597 };
    if ($tmp1601.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp1602 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1535);
            actualMethodType1587 = $tmp1602;
        }
        {
            panda$core$Int64 $tmp1603 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1587->subtypes);
            panda$core$Int64 $tmp1604 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1603, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp1605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1587->subtypes, $tmp1604);
            panda$core$String* $tmp1606 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1605));
            actualResultType1588 = $tmp1606;
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp1607 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1535);
            actualMethodType1587 = $tmp1607;
        }
        {
            panda$core$String* $tmp1608 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            actualResultType1588 = $tmp1608;
        }
    }
    }
    panda$core$Int64 $tmp1610 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp1611 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1587->subtypes);
    panda$core$Int64 $tmp1612 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1610, $tmp1611);
    panda$core$Int64 $tmp1613 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1612, ((panda$core$Int64) { 1 }));
    offset1609 = $tmp1613;
    panda$core$Int64 $tmp1615 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1614, ((panda$core$Int64) { 0 }), $tmp1615, ((panda$core$Bit) { false }));
    int64_t $tmp1617 = $tmp1614.min.value;
    panda$core$Int64 i1616 = { $tmp1617 };
    int64_t $tmp1619 = $tmp1614.max.value;
    bool $tmp1620 = $tmp1614.inclusive.value;
    if ($tmp1620) goto $l1627; else goto $l1628;
    $l1627:;
    if ($tmp1617 <= $tmp1619) goto $l1621; else goto $l1623;
    $l1628:;
    if ($tmp1617 < $tmp1619) goto $l1621; else goto $l1623;
    $l1621:;
    {
        panda$core$Object* $tmp1630 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1616);
        panda$core$String* $tmp1631 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1630), p_out);
        arg1629 = $tmp1631;
        panda$core$Bit $tmp1633 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1616, offset1609);
        bool $tmp1632 = $tmp1633.value;
        if (!$tmp1632) goto $l1634;
        panda$core$Int64 $tmp1635 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1616, offset1609);
        panda$core$Object* $tmp1636 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1587->subtypes, $tmp1635);
        panda$core$Object* $tmp1637 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1616);
        org$pandalanguage$pandac$Type* $tmp1639 = (($fn1638) ((org$pandalanguage$pandac$IRNode*) $tmp1637)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1637));
        panda$core$Bit $tmp1640 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1636), $tmp1639);
        $tmp1632 = $tmp1640.value;
        $l1634:;
        panda$core$Bit $tmp1641 = { $tmp1632 };
        if ($tmp1641.value) {
        {
            {
                panda$core$Object* $tmp1642 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1616);
                org$pandalanguage$pandac$Type* $tmp1644 = (($fn1643) ((org$pandalanguage$pandac$IRNode*) $tmp1642)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1642));
                panda$core$Int64 $tmp1645 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1616, offset1609);
                panda$core$Object* $tmp1646 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1587->subtypes, $tmp1645);
                panda$core$String* $tmp1647 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1629, $tmp1644, ((org$pandalanguage$pandac$Type*) $tmp1646), p_out);
                arg1629 = $tmp1647;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs1583, ((panda$core$Object*) arg1629));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1629));
    }
    $l1624:;
    int64_t $tmp1649 = $tmp1619 - i1616.value;
    if ($tmp1620) goto $l1650; else goto $l1651;
    $l1650:;
    if ((uint64_t) $tmp1649 >= 1) goto $l1648; else goto $l1623;
    $l1651:;
    if ((uint64_t) $tmp1649 > 1) goto $l1648; else goto $l1623;
    $l1648:;
    i1616.value += 1;
    goto $l1621;
    $l1623:;
    memset(&target1654, 0, sizeof(target1654));
    panda$core$Int64 $tmp1655 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs1583);
    panda$core$Bit $tmp1656 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1655, ((panda$core$Int64) { 0 }));
    if ($tmp1656.value) {
    {
        {
            panda$core$Object* $tmp1657 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs1583, ((panda$core$Int64) { 0 }));
            target1654 = ((panda$core$String*) $tmp1657);
        }
    }
    }
    else {
    {
        {
            target1654 = NULL;
        }
    }
    }
    panda$core$String* $tmp1659 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1654, m1535, isSuper1589, p_out);
    methodRef1658 = $tmp1659;
    panda$core$Bit $tmp1661 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1535);
    indirect1660 = $tmp1661;
    panda$core$String* $tmp1663 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1662 = $tmp1663;
    separator1664 = &$s1665;
    memset(&indirectVar1666, 0, sizeof(indirectVar1666));
    if (indirect1660.value) {
    {
        panda$core$String* $tmp1667 = panda$core$String$convert$R$panda$core$String(actualResultType1588);
        panda$core$String* $tmp1669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1667, &$s1668);
        panda$core$String* $tmp1670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1669, result1662);
        panda$core$String* $tmp1672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1670, &$s1671);
        (($fn1673) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1672);
        panda$core$String* $tmp1674 = panda$core$String$convert$R$panda$core$String(methodRef1658);
        panda$core$String* $tmp1676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1674, &$s1675);
        panda$core$String* $tmp1677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, result1662);
        panda$core$String* $tmp1679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1677, &$s1678);
        (($fn1680) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1679);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1664));
            separator1664 = &$s1681;
        }
    }
    }
    else {
    {
        panda$core$String* $tmp1682 = panda$core$String$convert$R$panda$core$String(actualResultType1588);
        panda$core$String* $tmp1684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1682, &$s1683);
        panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1684, result1662);
        panda$core$String* $tmp1687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1685, &$s1686);
        panda$core$String* $tmp1688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1687, methodRef1658);
        panda$core$String* $tmp1690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1688, &$s1689);
        (($fn1691) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1690);
    }
    }
    {
        ITable* $tmp1693 = ((panda$collections$Iterable*) argRefs1583)->$class->itable;
        while ($tmp1693->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1693 = $tmp1693->next;
        }
        $fn1695 $tmp1694 = $tmp1693->methods[0];
        panda$collections$Iterator* $tmp1696 = $tmp1694(((panda$collections$Iterable*) argRefs1583));
        arg$Iter1692 = $tmp1696;
        $l1697:;
        ITable* $tmp1699 = arg$Iter1692->$class->itable;
        while ($tmp1699->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1699 = $tmp1699->next;
        }
        $fn1701 $tmp1700 = $tmp1699->methods[0];
        panda$core$Bit $tmp1702 = $tmp1700(arg$Iter1692);
        panda$core$Bit $tmp1703 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1702);
        if (!$tmp1703.value) goto $l1698;
        {
            ITable* $tmp1705 = arg$Iter1692->$class->itable;
            while ($tmp1705->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1705 = $tmp1705->next;
            }
            $fn1707 $tmp1706 = $tmp1705->methods[1];
            panda$core$Object* $tmp1708 = $tmp1706(arg$Iter1692);
            arg1704 = ((panda$core$String*) $tmp1708);
            panda$core$String* $tmp1709 = panda$core$String$convert$R$panda$core$String(separator1664);
            panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1709, &$s1710);
            panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1711, arg1704);
            panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1712, &$s1713);
            (($fn1715) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1714);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1664));
                separator1664 = &$s1716;
            }
        }
        goto $l1697;
        $l1698:;
    }
    (($fn1718) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1717);
    panda$core$String* $tmp1719 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$Bit $tmp1720 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1719, actualResultType1588);
    if ($tmp1720.value) {
    {
        {
            panda$core$Int64 $tmp1722 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1587->subtypes);
            panda$core$Int64 $tmp1723 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1722, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp1724 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1587->subtypes, $tmp1723);
            panda$core$String* $tmp1725 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1662, ((org$pandalanguage$pandac$Type*) $tmp1724), p_t, p_out);
            tmp291721 = $tmp1725;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs1583));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1664));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1662));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1588));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar1666));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1587));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef1658));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1654));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1535));
            }
            return tmp291721;
        }
    }
    }
    {
        tmp301726 = result1662;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs1583));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1664));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1662));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1588));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar1666));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1587));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef1658));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1654));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1535));
        }
        return tmp301726;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1728;
    panda$core$String* nonNullValue1731;
    panda$core$String* tmp311734;
    panda$core$String* wrapped1742;
    panda$core$String* tmp321809;
    panda$core$Bit $tmp1727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1727.value) {
    {
        panda$core$Object* $tmp1729 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1730 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1729), p_out);
        unwrapped1728 = $tmp1730;
        panda$core$Object* $tmp1732 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1733 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1728, ((org$pandalanguage$pandac$Type*) $tmp1732), p_dstType, p_out);
        nonNullValue1731 = $tmp1733;
        {
            panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1735, p_value);
            panda$core$String* $tmp1738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1736, &$s1737);
            panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1738, nonNullValue1731);
            panda$core$String* $tmp1741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, &$s1740);
            tmp311734 = $tmp1741;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unwrapped1728));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue1731));
            }
            return tmp311734;
        }
    }
    }
    panda$core$String* $tmp1743 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    wrapped1742 = $tmp1743;
    panda$core$String* $tmp1744 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1745 = panda$core$String$convert$R$panda$core$String($tmp1744);
    panda$core$String* $tmp1747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1745, &$s1746);
    panda$core$String* $tmp1748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1747, wrapped1742);
    panda$core$String* $tmp1750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1748, &$s1749);
    (($fn1751) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1750);
    panda$core$Bit $tmp1752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1752.value) {
    {
        panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1753, p_value);
        panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1754, &$s1755);
        (($fn1757) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1756);
        panda$core$Int64 $tmp1758 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1758;
    }
    }
    panda$core$String* $tmp1759 = panda$core$String$convert$R$panda$core$String(wrapped1742);
    panda$core$String* $tmp1761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1759, &$s1760);
    panda$core$String* $tmp1762 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1761, $tmp1762);
    panda$core$String* $tmp1765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1763, &$s1764);
    panda$core$Int64 $tmp1767 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_srcType);
    panda$core$Int64$wrapper* $tmp1768;
    $tmp1768 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp1768->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1768->refCount = 1;
    $tmp1768->value = $tmp1767;
    panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1766, ((panda$core$Object*) $tmp1768));
    panda$core$String* $tmp1771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1769, &$s1770);
    panda$core$String* $tmp1772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1765, $tmp1771);
    (($fn1773) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1772);
    panda$core$String* $tmp1774 = panda$core$String$convert$R$panda$core$String(wrapped1742);
    panda$core$String* $tmp1776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1774, &$s1775);
    panda$core$String* $tmp1778 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_srcType)->name);
    panda$core$String* $tmp1779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1777, $tmp1778);
    panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1779, &$s1780);
    panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1776, $tmp1781);
    (($fn1783) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1782);
    panda$core$String* $tmp1784 = panda$core$String$convert$R$panda$core$String(wrapped1742);
    panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, &$s1785);
    (($fn1787) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1786);
    panda$core$String* $tmp1788 = panda$core$String$convert$R$panda$core$String(wrapped1742);
    panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1788, &$s1789);
    panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1790, p_value);
    panda$core$String* $tmp1793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1791, &$s1792);
    (($fn1794) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1793);
    panda$core$Bit $tmp1795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1795.value) {
    {
        panda$core$Int64 $tmp1796 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1796;
        (($fn1798) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1797);
        (($fn1800) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1799);
        panda$core$Int64 $tmp1801 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1801;
        panda$core$String* $tmp1802 = panda$core$String$convert$R$panda$core$String(wrapped1742);
        panda$core$String* $tmp1804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1802, &$s1803);
        (($fn1805) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1804);
        panda$core$Int64 $tmp1806 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1806;
        (($fn1808) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1807);
    }
    }
    {
        panda$core$String* $tmp1811 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1810, $tmp1811);
        panda$core$String* $tmp1814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1812, &$s1813);
        panda$core$String* $tmp1815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1814, wrapped1742);
        panda$core$String* $tmp1817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1815, &$s1816);
        tmp321809 = $tmp1817;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped1742));
        return tmp321809;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$FieldDecl* p_field, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1820;
    panda$core$String* baseRef1824;
    panda$core$String* tmp331827;
    panda$core$String* tmp341835;
    panda$core$Bit $tmp1818 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_field->annotations);
    if ($tmp1818.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_field->value != NULL }).value);
        panda$core$String* $tmp1819 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_field->value, p_out);
        return $tmp1819;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1822 = (($fn1821) p_base->$class->vtable[2])(p_base);
    org$pandalanguage$pandac$ClassDecl* $tmp1823 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1822);
    cl1820 = $tmp1823;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1820);
    panda$core$String* $tmp1825 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef1824 = $tmp1825;
    PANDA_ASSERT(((panda$core$Bit) { cl1820 != NULL }).value);
    panda$core$Bit $tmp1826 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1820);
    if ($tmp1826.value) {
    {
        {
            panda$core$String* $tmp1828 = panda$core$String$convert$R$panda$core$String(baseRef1824);
            panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1828, &$s1829);
            panda$core$String* $tmp1831 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
            panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, $tmp1831);
            panda$core$String* $tmp1834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1832, &$s1833);
            tmp331827 = $tmp1834;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1824));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1820));
            }
            return tmp331827;
        }
    }
    }
    {
        panda$core$String* $tmp1836 = panda$core$String$convert$R$panda$core$String(baseRef1824);
        panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1836, &$s1837);
        panda$core$String* $tmp1839 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
        panda$core$String* $tmp1840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1838, $tmp1839);
        panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1840, &$s1841);
        tmp341835 = $tmp1842;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1824));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1820));
        }
        return tmp341835;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1843;
    panda$core$String* wrapped1853;
    panda$core$String* nonNullValue1856;
    panda$core$String* tmp351859;
    panda$core$String* tmp361871;
    panda$core$String* tmp371872;
    panda$core$String* $tmp1845 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1844, $tmp1845);
    panda$core$String* $tmp1848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1846, &$s1847);
    panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1848, p_value);
    panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, &$s1850);
    result1843 = $tmp1851;
    panda$core$Bit $tmp1852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1852.value) {
    {
        panda$core$Object* $tmp1854 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1855 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1854), p_out);
        wrapped1853 = $tmp1855;
        panda$core$Object* $tmp1857 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1858 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1853, ((org$pandalanguage$pandac$Type*) $tmp1857), p_dstType, p_out);
        nonNullValue1856 = $tmp1858;
        {
            panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1860, p_value);
            panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, &$s1862);
            panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1863, nonNullValue1856);
            panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, &$s1865);
            panda$core$String* $tmp1867 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
            panda$core$String* $tmp1868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1866, $tmp1867);
            panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1868, &$s1869);
            tmp351859 = $tmp1870;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue1856));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped1853));
            }
            {
                tmp361871 = tmp351859;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1843));
                return tmp361871;
            }
        }
    }
    }
    {
        tmp371872 = result1843;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1843));
        return tmp371872;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1874 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1873, $tmp1874);
    panda$core$String* $tmp1877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1875, &$s1876);
    panda$core$String* $tmp1878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1877, p_value);
    panda$core$String* $tmp1880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1878, &$s1879);
    return $tmp1880;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1882 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1881, $tmp1882);
    panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1883, &$s1884);
    panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1885, p_value);
    panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1886, &$s1887);
    return $tmp1888;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1889;
    panda$core$String* tmp421892;
    org$pandalanguage$pandac$ClassDecl* srcClass1901;
    org$pandalanguage$pandac$ClassDecl* targetClass1903;
    panda$core$String* tmp381911;
    panda$core$String* tmp431913;
    panda$core$String* tmp391920;
    panda$core$String* tmp441922;
    panda$core$String* tmp401933;
    panda$core$String* tmp451935;
    panda$core$String* tmp411946;
    panda$core$String* tmp461948;
    panda$core$String* srcType1950;
    panda$core$String* dstType1952;
    panda$core$String* tmp471955;
    panda$core$String* tmp481956;
    memset(&op1889, 0, sizeof(op1889));
    panda$core$Bit $tmp1890 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1890.value) {
    {
        panda$core$Bit $tmp1891 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1891.value);
        {
            panda$core$String* $tmp1894 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1893, $tmp1894);
            panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1895, &$s1896);
            panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1897, p_value);
            panda$core$String* $tmp1900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1898, &$s1899);
            tmp421892 = $tmp1900;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1889));
            return tmp421892;
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1902 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1901 = $tmp1902;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1901 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1904 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1903 = $tmp1904;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1903 != NULL }).value);
        panda$core$Bit $tmp1906 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1901);
        bool $tmp1905 = $tmp1906.value;
        if (!$tmp1905) goto $l1907;
        panda$core$Bit $tmp1908 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1903);
        panda$core$Bit $tmp1909 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1908);
        $tmp1905 = $tmp1909.value;
        $l1907:;
        panda$core$Bit $tmp1910 = { $tmp1905 };
        if ($tmp1910.value) {
        {
            {
                panda$core$String* $tmp1912 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp381911 = $tmp1912;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1903));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1901));
                }
                {
                    tmp431913 = tmp381911;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1889));
                    return tmp431913;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1915 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1901);
        panda$core$Bit $tmp1916 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1915);
        bool $tmp1914 = $tmp1916.value;
        if (!$tmp1914) goto $l1917;
        panda$core$Bit $tmp1918 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1903);
        $tmp1914 = $tmp1918.value;
        $l1917:;
        panda$core$Bit $tmp1919 = { $tmp1914 };
        if ($tmp1919.value) {
        {
            {
                panda$core$String* $tmp1921 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp391920 = $tmp1921;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1903));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1901));
                }
                {
                    tmp441922 = tmp391920;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1889));
                    return tmp441922;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1925 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1901);
        bool $tmp1924 = $tmp1925.value;
        if (!$tmp1924) goto $l1926;
        panda$core$Bit $tmp1927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1924 = $tmp1927.value;
        $l1926:;
        panda$core$Bit $tmp1928 = { $tmp1924 };
        bool $tmp1923 = $tmp1928.value;
        if (!$tmp1923) goto $l1929;
        panda$core$Object* $tmp1930 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1931 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1930), p_src);
        $tmp1923 = $tmp1931.value;
        $l1929:;
        panda$core$Bit $tmp1932 = { $tmp1923 };
        if ($tmp1932.value) {
        {
            {
                panda$core$String* $tmp1934 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp401933 = $tmp1934;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1903));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1901));
                }
                {
                    tmp451935 = tmp401933;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1889));
                    return tmp451935;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1938 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1903);
        bool $tmp1937 = $tmp1938.value;
        if (!$tmp1937) goto $l1939;
        panda$core$Bit $tmp1940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1937 = $tmp1940.value;
        $l1939:;
        panda$core$Bit $tmp1941 = { $tmp1937 };
        bool $tmp1936 = $tmp1941.value;
        if (!$tmp1936) goto $l1942;
        panda$core$Object* $tmp1943 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1944 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1943), p_target);
        $tmp1936 = $tmp1944.value;
        $l1942:;
        panda$core$Bit $tmp1945 = { $tmp1936 };
        if ($tmp1945.value) {
        {
            {
                panda$core$String* $tmp1947 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp411946 = $tmp1947;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1903));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1901));
                }
                {
                    tmp461948 = tmp411946;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1889));
                    return tmp461948;
                }
            }
        }
        }
        }
        }
        }
        {
            op1889 = &$s1949;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1903));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1901));
        }
    }
    }
    panda$core$String* $tmp1951 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1950 = $tmp1951;
    panda$core$String* $tmp1953 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1952 = $tmp1953;
    panda$core$Bit $tmp1954 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1950, dstType1952);
    if ($tmp1954.value) {
    {
        {
            tmp471955 = p_value;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType1952));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType1950));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1889));
            }
            return tmp471955;
        }
    }
    }
    {
        panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1957, dstType1952);
        panda$core$String* $tmp1960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1958, &$s1959);
        panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1960, p_value);
        panda$core$String* $tmp1963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1961, &$s1962);
        tmp481956 = $tmp1963;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType1952));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType1950));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1889));
        }
        return tmp481956;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef1964;
    panda$core$String* tmp491966;
    panda$core$String* $tmp1965 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef1964 = $tmp1965;
    {
        org$pandalanguage$pandac$Type* $tmp1968 = (($fn1967) p_base->$class->vtable[2])(p_base);
        panda$core$String* $tmp1969 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, baseRef1964, $tmp1968, p_t, p_out);
        tmp491966 = $tmp1969;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1964));
        return tmp491966;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_target, org$pandalanguage$pandac$IRNode* p_initCall, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1084_91970;
    org$pandalanguage$pandac$Type* initType1972;
    org$pandalanguage$pandac$MethodRef* initMref1974;
    panda$collections$ImmutableArray* initArgs1976;
    org$pandalanguage$pandac$ClassDecl* cl1978;
    panda$core$String* t1980;
    org$pandalanguage$pandac$IRNode* $match$1090_211988;
    panda$collections$ImmutableArray* args1990;
    panda$core$String* value1994;
    panda$core$String* tmp2006;
    panda$core$String* tmp502023;
    panda$core$String* result2024;
    panda$core$String* classPtr2041;
    panda$core$String* className2043;
    {
        $match$1084_91970 = p_initCall;
        panda$core$Bit $tmp1971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1084_91970->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1971.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1973 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1084_91970->$data + 16));
            initType1972 = *$tmp1973;
            org$pandalanguage$pandac$MethodRef** $tmp1975 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1084_91970->$data + 24));
            initMref1974 = *$tmp1975;
            panda$collections$ImmutableArray** $tmp1977 = ((panda$collections$ImmutableArray**) ((char*) $match$1084_91970->$data + 32));
            initArgs1976 = *$tmp1977;
            org$pandalanguage$pandac$ClassDecl* $tmp1979 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
            cl1978 = $tmp1979;
            PANDA_ASSERT(((panda$core$Bit) { cl1978 != NULL }).value);
            panda$core$String* $tmp1981 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            t1980 = $tmp1981;
            panda$core$Bit $tmp1983 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            bool $tmp1982 = $tmp1983.value;
            if ($tmp1982) goto $l1984;
            org$pandalanguage$pandac$Type* $tmp1985 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1986 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1985);
            $tmp1982 = $tmp1986.value;
            $l1984:;
            panda$core$Bit $tmp1987 = { $tmp1982 };
            if ($tmp1987.value) {
            {
                {
                    $match$1090_211988 = p_initCall;
                    panda$core$Bit $tmp1989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1090_211988->$rawValue, ((panda$core$Int64) { 5 }));
                    if ($tmp1989.value) {
                    {
                        panda$collections$ImmutableArray** $tmp1991 = ((panda$collections$ImmutableArray**) ((char*) $match$1090_211988->$data + 32));
                        args1990 = *$tmp1991;
                        panda$core$Int64 $tmp1992 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args1990);
                        panda$core$Bit $tmp1993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1992, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1993.value);
                        panda$core$Object* $tmp1995 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args1990, ((panda$core$Int64) { 0 }));
                        panda$core$String* $tmp1996 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1995), p_out);
                        value1994 = $tmp1996;
                        panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1997, t1980);
                        panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1998, &$s1999);
                        panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2000, value1994);
                        panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2001, &$s2002);
                        return $tmp2003;
                    }
                    }
                }
            }
            }
            panda$core$Bit $tmp2004 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1978);
            if ($tmp2004.value) {
            {
                panda$core$Int64 $tmp2005 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
                self->varCount = $tmp2005;
                panda$core$Int64$wrapper* $tmp2008;
                $tmp2008 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
                $tmp2008->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2008->refCount = 1;
                $tmp2008->value = self->varCount;
                panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2007, ((panda$core$Object*) $tmp2008));
                panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2009, &$s2010);
                tmp2006 = $tmp2011;
                panda$core$String* $tmp2012 = panda$core$String$convert$R$panda$core$String(t1980);
                panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2012, &$s2013);
                panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, tmp2006);
                panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, &$s2016);
                (($fn2018) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2017);
                panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2019, tmp2006);
                panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, &$s2021);
                org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType1972, initMref1974, initArgs1976, $tmp2022, p_out);
                {
                    tmp502023 = tmp2006;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tmp2006));
                    return tmp502023;
                }
            }
            }
            panda$core$String* $tmp2025 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result2024 = $tmp2025;
            panda$core$String* $tmp2026 = panda$core$String$convert$R$panda$core$String(t1980);
            panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2026, &$s2027);
            panda$core$String* $tmp2029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2028, result2024);
            panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2029, &$s2030);
            panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2031, t1980);
            panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2032, &$s2033);
            panda$core$Int64 $tmp2035 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
            panda$core$Int64$wrapper* $tmp2036;
            $tmp2036 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp2036->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2036->refCount = 1;
            $tmp2036->value = $tmp2035;
            panda$core$String* $tmp2037 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2034, ((panda$core$Object*) $tmp2036));
            panda$core$String* $tmp2039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2037, &$s2038);
            (($fn2040) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2039);
            panda$core$String* $tmp2042 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            classPtr2041 = $tmp2042;
            memset(&className2043, 0, sizeof(className2043));
            panda$core$Bit $tmp2044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp2044.value) {
            {
                {
                    panda$core$Object* $tmp2045 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
                    panda$core$String* $tmp2046 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2045));
                    className2043 = $tmp2046;
                }
            }
            }
            else {
            {
                {
                    panda$core$String* $tmp2047 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
                    className2043 = $tmp2047;
                }
            }
            }
            panda$core$String* $tmp2048 = panda$core$String$convert$R$panda$core$String(result2024);
            panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2048, &$s2049);
            panda$core$String* $tmp2051 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1978)->name);
            panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2050, $tmp2051);
            panda$core$String* $tmp2054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, &$s2053);
            panda$core$String* $tmp2056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2054, &$s2055);
            (($fn2057) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2056);
            panda$core$String* $tmp2058 = panda$core$String$convert$R$panda$core$String(result2024);
            panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, &$s2059);
            (($fn2061) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2060);
            panda$core$String* $tmp2062 = panda$core$String$convert$R$panda$core$String(result2024);
            panda$core$String* $tmp2064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2062, &$s2063);
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType1972, initMref1974, initArgs1976, $tmp2064, p_out);
            return result2024;
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
    panda$core$String* $tmp2065 = panda$core$UInt64$convert$R$panda$core$String(p_int);
    return $tmp2065;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$UInt64 p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$UInt64$wrapper* $tmp2067;
    $tmp2067 = (panda$core$UInt64$wrapper*) pandaZAlloc(24);
    $tmp2067->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp2067->refCount = 1;
    $tmp2067->value = p_int;
    panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2066, ((panda$core$Object*) $tmp2067));
    return $tmp2068;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Real64 p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result2069;
    panda$core$Char8 $tmp2071;
    panda$core$String* tmp512073;
    panda$core$String* tmp522074;
    panda$core$String* $tmp2070 = panda$core$Real64$convert$R$panda$core$String(p_real);
    result2069 = $tmp2070;
    panda$core$Char8$init$panda$core$UInt8(&$tmp2071, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp2072 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result2069, $tmp2071);
    if ($tmp2072.value) {
    {
        {
            tmp512073 = result2069;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2069));
            return tmp512073;
        }
    }
    }
    {
        panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result2069, &$s2075);
        tmp522074 = $tmp2076;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2069));
        return tmp522074;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_bit, panda$io$IndentedOutputStream* p_out) {
    if (p_bit.value) {
    {
        return &$s2077;
    }
    }
    return &$s2078;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2079 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2079;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2081;
    panda$collections$Iterator* c$Iter2102;
    panda$core$Char8 c2115;
    panda$core$String* tmp532150;
    panda$core$Int64 $tmp2080 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2080;
    panda$core$Int64$wrapper* $tmp2083;
    $tmp2083 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp2083->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2083->refCount = 1;
    $tmp2083->value = self->varCount;
    panda$core$String* $tmp2084 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2082, ((panda$core$Object*) $tmp2083));
    panda$core$String* $tmp2086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2084, &$s2085);
    result2081 = $tmp2086;
    org$pandalanguage$pandac$Type* $tmp2087 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2088 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2087);
    panda$core$String* $tmp2090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2089, result2081);
    panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2090, &$s2091);
    panda$core$Int64$wrapper* $tmp2094;
    $tmp2094 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp2094->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2094->refCount = 1;
    $tmp2094->value = ((panda$core$Int64) { -999 });
    panda$core$String* $tmp2095 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2093, ((panda$core$Object*) $tmp2094));
    panda$core$String* $tmp2097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2095, &$s2096);
    panda$core$String* $tmp2098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2092, $tmp2097);
    panda$core$String* $tmp2100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2098, &$s2099);
    (($fn2101) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2100);
    {
        panda$collections$ListView* $tmp2103 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2104 = ((panda$collections$Iterable*) $tmp2103)->$class->itable;
        while ($tmp2104->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2104 = $tmp2104->next;
        }
        $fn2106 $tmp2105 = $tmp2104->methods[0];
        panda$collections$Iterator* $tmp2107 = $tmp2105(((panda$collections$Iterable*) $tmp2103));
        c$Iter2102 = $tmp2107;
        $l2108:;
        ITable* $tmp2110 = c$Iter2102->$class->itable;
        while ($tmp2110->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2110 = $tmp2110->next;
        }
        $fn2112 $tmp2111 = $tmp2110->methods[0];
        panda$core$Bit $tmp2113 = $tmp2111(c$Iter2102);
        panda$core$Bit $tmp2114 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2113);
        if (!$tmp2114.value) goto $l2109;
        {
            ITable* $tmp2116 = c$Iter2102->$class->itable;
            while ($tmp2116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2116 = $tmp2116->next;
            }
            $fn2118 $tmp2117 = $tmp2116->methods[1];
            panda$core$Object* $tmp2119 = $tmp2117(c$Iter2102);
            c2115 = ((panda$core$Char8$wrapper*) $tmp2119)->value;
            panda$core$UInt8 $tmp2121 = panda$core$Char8$convert$R$panda$core$UInt8(c2115);
            panda$core$UInt8$wrapper* $tmp2122;
            $tmp2122 = (panda$core$UInt8$wrapper*) pandaZAlloc(13);
            $tmp2122->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
            $tmp2122->refCount = 1;
            $tmp2122->value = $tmp2121;
            ITable* $tmp2124 = ((panda$core$Formattable*) $tmp2122)->$class->itable;
            while ($tmp2124->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2124 = $tmp2124->next;
            }
            $fn2126 $tmp2125 = $tmp2124->methods[0];
            panda$core$String* $tmp2127 = $tmp2125(((panda$core$Formattable*) $tmp2122), &$s2123);
            panda$core$String* $tmp2129 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp2127, &$s2128);
            panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2120, $tmp2129);
            panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2131);
            (($fn2133) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2132);
        }
        goto $l2108;
        $l2109:;
    }
    panda$collections$ListView* $tmp2135 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2136 = ((panda$collections$CollectionView*) $tmp2135)->$class->itable;
    while ($tmp2136->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2136 = $tmp2136->next;
    }
    $fn2138 $tmp2137 = $tmp2136->methods[0];
    panda$core$Int64 $tmp2139 = $tmp2137(((panda$collections$CollectionView*) $tmp2135));
    panda$core$Int64$wrapper* $tmp2140;
    $tmp2140 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp2140->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2140->refCount = 1;
    $tmp2140->value = $tmp2139;
    panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2134, ((panda$core$Object*) $tmp2140));
    panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2141, &$s2142);
    panda$core$Int64 $tmp2144 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$Int64$wrapper* $tmp2145;
    $tmp2145 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp2145->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2145->refCount = 1;
    $tmp2145->value = $tmp2144;
    panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2143, ((panda$core$Object*) $tmp2145));
    panda$core$String* $tmp2148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2146, &$s2147);
    (($fn2149) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2148);
    {
        panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2151, result2081);
        panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, &$s2153);
        tmp532150 = $tmp2154;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2081));
        return tmp532150;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    return &$s2155;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2157 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2156, $tmp2157);
    panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2158, &$s2159);
    return $tmp2160;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2161;
    org$pandalanguage$pandac$ClassDecl* cl2163;
    panda$core$String* bit2167;
    panda$core$String* tmp542180;
    panda$core$String* $tmp2162 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2161 = $tmp2162;
    org$pandalanguage$pandac$Type* $tmp2165 = (($fn2164) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2166 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2165);
    cl2163 = $tmp2166;
    memset(&bit2167, 0, sizeof(bit2167));
    panda$core$Bit $tmp2168 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2163);
    if ($tmp2168.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2170 = (($fn2169) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2171 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2170->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2171.value) {
        {
            {
                bit2167 = &$s2172;
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2173, ref2161);
                panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2174, &$s2175);
                bit2167 = $tmp2176;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2177 = panda$core$String$convert$R$panda$core$String(ref2161);
            panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2177, &$s2178);
            bit2167 = $tmp2179;
        }
    }
    }
    {
        panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2181, bit2167);
        panda$core$String* $tmp2184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2182, &$s2183);
        tmp542180 = $tmp2184;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref2161));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2167));
        }
        return tmp542180;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2185;
    org$pandalanguage$pandac$ClassDecl* cl2187;
    panda$core$String* bit2191;
    panda$core$String* tmp552203;
    panda$core$String* $tmp2186 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2185 = $tmp2186;
    org$pandalanguage$pandac$Type* $tmp2189 = (($fn2188) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2190 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2189);
    cl2187 = $tmp2190;
    memset(&bit2191, 0, sizeof(bit2191));
    panda$core$Bit $tmp2192 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2187);
    if ($tmp2192.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2194 = (($fn2193) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2195 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2194->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2195.value) {
        {
            {
                bit2191 = &$s2196;
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2197 = panda$core$String$convert$R$panda$core$String(ref2185);
                panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2197, &$s2198);
                bit2191 = $tmp2199;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2200 = panda$core$String$convert$R$panda$core$String(ref2185);
            panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2200, &$s2201);
            bit2191 = $tmp2202;
        }
    }
    }
    {
        panda$core$String* $tmp2205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2204, bit2191);
        panda$core$String* $tmp2207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2205, &$s2206);
        tmp552203 = $tmp2207;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2187));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref2185));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2191));
        }
        return tmp552203;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2209;
    panda$core$String* tmp562213;
    panda$core$String* tmp572219;
    panda$core$Bit $tmp2208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2208.value);
    panda$core$Object* $tmp2210 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2211 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2210));
    cl2209 = $tmp2211;
    PANDA_ASSERT(((panda$core$Bit) { cl2209 != NULL }).value);
    panda$core$Bit $tmp2212 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2209);
    if ($tmp2212.value) {
    {
        {
            panda$core$String* $tmp2215 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2214, $tmp2215);
            panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, &$s2217);
            tmp562213 = $tmp2218;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2209));
            return tmp562213;
        }
    }
    }
    else {
    {
        {
            tmp572219 = &$s2220;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2209));
            return tmp572219;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2209));
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_base, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef2221;
    panda$core$String* result2223;
    org$pandalanguage$pandac$parser$Token$Kind $match$1224_92225;
    panda$core$String* tmp582227;
    panda$core$String* tmp592233;
    panda$core$String* tmp602239;
    panda$core$String* $tmp2222 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef2221 = $tmp2222;
    panda$core$String* $tmp2224 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2223 = $tmp2224;
    {
        $match$1224_92225 = p_op;
        panda$core$Bit $tmp2226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1224_92225.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp2226.value) {
        {
            {
                panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2228, baseRef2221);
                panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2229, &$s2230);
                tmp582227 = $tmp2231;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2223));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2221));
                }
                return tmp582227;
            }
        }
        }
        else {
        panda$core$Bit $tmp2232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1224_92225.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp2232.value) {
        {
            {
                panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2234, baseRef2221);
                panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, &$s2236);
                tmp592233 = $tmp2237;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2223));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2221));
                }
                return tmp592233;
            }
        }
        }
        else {
        panda$core$Bit $tmp2238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1224_92225.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp2238.value) {
        {
            {
                panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2240, baseRef2221);
                panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2241, &$s2242);
                tmp602239 = $tmp2243;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2223));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2221));
                }
                return tmp602239;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2221));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2249;
    panda$core$String* trueLabel2251;
    panda$core$String* falseLabel2253;
    panda$core$String* merge2255;
    panda$core$String* result2257;
    panda$core$String* tmp612306;
    org$pandalanguage$pandac$Type* $tmp2245 = (($fn2244) p_ifTrue->$class->vtable[2])(p_ifTrue);
    org$pandalanguage$pandac$Type* $tmp2247 = (($fn2246) p_ifFalse->$class->vtable[2])(p_ifFalse);
    panda$core$Bit $tmp2248 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2245, $tmp2247);
    PANDA_ASSERT($tmp2248.value);
    panda$core$String* $tmp2250 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2249 = $tmp2250;
    panda$core$String* $tmp2252 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2251 = $tmp2252;
    panda$core$String* $tmp2254 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2253 = $tmp2254;
    panda$core$String* $tmp2256 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2255 = $tmp2256;
    panda$core$String* $tmp2258 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2257 = $tmp2258;
    org$pandalanguage$pandac$Type* $tmp2260 = (($fn2259) p_ifTrue->$class->vtable[2])(p_ifTrue);
    panda$core$String* $tmp2261 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2260);
    panda$core$String* $tmp2262 = panda$core$String$convert$R$panda$core$String($tmp2261);
    panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2262, &$s2263);
    panda$core$String* $tmp2265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, result2257);
    panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2265, &$s2266);
    (($fn2268) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2267);
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2269, testRef2249);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, &$s2271);
    panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, trueLabel2251);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2273, &$s2274);
    panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2275, falseLabel2253);
    panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2276, &$s2277);
    (($fn2279) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2278);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2251, p_out);
    panda$core$String* $tmp2280 = panda$core$String$convert$R$panda$core$String(result2257);
    panda$core$String* $tmp2282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2280, &$s2281);
    panda$core$String* $tmp2283 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifTrue, p_out);
    panda$core$String* $tmp2284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2282, $tmp2283);
    panda$core$String* $tmp2286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2284, &$s2285);
    (($fn2287) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2286);
    panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2288, merge2255);
    panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2289, &$s2290);
    (($fn2292) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2291);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2253, p_out);
    panda$core$String* $tmp2293 = panda$core$String$convert$R$panda$core$String(result2257);
    panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, &$s2294);
    panda$core$String* $tmp2296 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifFalse, p_out);
    panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2295, $tmp2296);
    panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2297, &$s2298);
    (($fn2300) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2299);
    panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2301, merge2255);
    panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2302, &$s2303);
    (($fn2305) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2304);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2255, p_out);
    {
        tmp612306 = result2257;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef2249));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2257));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) merge2255));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel2253));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel2251));
        }
        return tmp612306;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2307 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2307;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2308;
    panda$core$String* tmp622310;
    panda$core$String* $tmp2309 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    result2308 = $tmp2309;
    panda$collections$Array$add$panda$collections$Array$T(self->extraEffects, ((panda$core$Object*) p_stmt));
    {
        tmp622310 = result2308;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2308));
        return tmp622310;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1268_92311;
    org$pandalanguage$pandac$IRNode* left2313;
    org$pandalanguage$pandac$parser$Token$Kind op2315;
    org$pandalanguage$pandac$IRNode* right2317;
    org$pandalanguage$pandac$Type* type2321;
    org$pandalanguage$pandac$MethodRef* target2323;
    panda$collections$ImmutableArray* args2325;
    org$pandalanguage$pandac$IRNode* base2329;
    org$pandalanguage$pandac$Type* type2331;
    panda$core$Bit explicit2333;
    panda$core$UInt64 value2337;
    panda$core$UInt64 value2341;
    panda$core$Real64 value2345;
    panda$core$Bit value2349;
    org$pandalanguage$pandac$Type* type2353;
    org$pandalanguage$pandac$IRNode* initCall2355;
    org$pandalanguage$pandac$Variable* variable2359;
    org$pandalanguage$pandac$IRNode* base2363;
    org$pandalanguage$pandac$FieldDecl* field2365;
    panda$core$String* str2369;
    org$pandalanguage$pandac$Type* t2375;
    org$pandalanguage$pandac$IRNode* base2379;
    panda$core$Int64 id2381;
    panda$core$String* value2383;
    panda$core$Int64 id2387;
    panda$core$String* result2389;
    org$pandalanguage$pandac$Position pos2393;
    org$pandalanguage$pandac$Type* type2395;
    org$pandalanguage$pandac$IRNode* value2399;
    org$pandalanguage$pandac$IRNode* value2403;
    org$pandalanguage$pandac$parser$Token$Kind op2407;
    org$pandalanguage$pandac$IRNode* base2409;
    org$pandalanguage$pandac$IRNode* test2413;
    org$pandalanguage$pandac$IRNode* ifTrue2415;
    org$pandalanguage$pandac$IRNode* ifFalse2417;
    org$pandalanguage$pandac$IRNode* base2423;
    org$pandalanguage$pandac$IRNode* stmt2425;
    {
        $match$1268_92311 = p_expr;
        panda$core$Bit $tmp2312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp2312.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2314 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 24));
            left2313 = *$tmp2314;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2316 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1268_92311->$data + 32));
            op2315 = *$tmp2316;
            org$pandalanguage$pandac$IRNode** $tmp2318 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 40));
            right2317 = *$tmp2318;
            panda$core$String* $tmp2319 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, left2313, op2315, right2317, p_out);
            return $tmp2319;
        }
        }
        else {
        panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp2320.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2322 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1268_92311->$data + 16));
            type2321 = *$tmp2322;
            org$pandalanguage$pandac$MethodRef** $tmp2324 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1268_92311->$data + 24));
            target2323 = *$tmp2324;
            panda$collections$ImmutableArray** $tmp2326 = ((panda$collections$ImmutableArray**) ((char*) $match$1268_92311->$data + 32));
            args2325 = *$tmp2326;
            panda$core$String* $tmp2327 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, type2321, target2323, args2325, p_out);
            return $tmp2327;
        }
        }
        else {
        panda$core$Bit $tmp2328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp2328.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2330 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 16));
            base2329 = *$tmp2330;
            org$pandalanguage$pandac$Type** $tmp2332 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1268_92311->$data + 24));
            type2331 = *$tmp2332;
            panda$core$Bit* $tmp2334 = ((panda$core$Bit*) ((char*) $match$1268_92311->$data + 32));
            explicit2333 = *$tmp2334;
            panda$core$String* $tmp2335 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base2329, type2331, p_out);
            return $tmp2335;
        }
        }
        else {
        panda$core$Bit $tmp2336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2336.value) {
        {
            panda$core$UInt64* $tmp2338 = ((panda$core$UInt64*) ((char*) $match$1268_92311->$data + 24));
            value2337 = *$tmp2338;
            panda$core$String* $tmp2339 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2337, p_out);
            return $tmp2339;
        }
        }
        else {
        panda$core$Bit $tmp2340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp2340.value) {
        {
            panda$core$UInt64* $tmp2342 = ((panda$core$UInt64*) ((char*) $match$1268_92311->$data + 24));
            value2341 = *$tmp2342;
            panda$core$String* $tmp2343 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2341, p_out);
            return $tmp2343;
        }
        }
        else {
        panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2344.value) {
        {
            panda$core$Real64* $tmp2346 = ((panda$core$Real64*) ((char*) $match$1268_92311->$data + 24));
            value2345 = *$tmp2346;
            panda$core$String* $tmp2347 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(self, value2345, ((panda$io$OutputStream*) p_out));
            return $tmp2347;
        }
        }
        else {
        panda$core$Bit $tmp2348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp2348.value) {
        {
            panda$core$Bit* $tmp2350 = ((panda$core$Bit*) ((char*) $match$1268_92311->$data + 24));
            value2349 = *$tmp2350;
            panda$core$String* $tmp2351 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, value2349, p_out);
            return $tmp2351;
        }
        }
        else {
        panda$core$Bit $tmp2352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp2352.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2354 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1268_92311->$data + 16));
            type2353 = *$tmp2354;
            org$pandalanguage$pandac$IRNode** $tmp2356 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 24));
            initCall2355 = *$tmp2356;
            panda$core$String* $tmp2357 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, type2353, initCall2355, p_out);
            return $tmp2357;
        }
        }
        else {
        panda$core$Bit $tmp2358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2358.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2360 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1268_92311->$data + 16));
            variable2359 = *$tmp2360;
            panda$core$String* $tmp2361 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, variable2359, p_out);
            return $tmp2361;
        }
        }
        else {
        panda$core$Bit $tmp2362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2362.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2364 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 24));
            base2363 = *$tmp2364;
            org$pandalanguage$pandac$FieldDecl** $tmp2366 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1268_92311->$data + 32));
            field2365 = *$tmp2366;
            panda$core$String* $tmp2367 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, base2363, field2365, p_out);
            return $tmp2367;
        }
        }
        else {
        panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2368.value) {
        {
            panda$core$String** $tmp2370 = ((panda$core$String**) ((char*) $match$1268_92311->$data + 16));
            str2369 = *$tmp2370;
            panda$core$String* $tmp2371 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, str2369, p_out);
            return $tmp2371;
        }
        }
        else {
        panda$core$Bit $tmp2372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2372.value) {
        {
            panda$core$String* $tmp2373 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(self, p_out);
            return $tmp2373;
        }
        }
        else {
        panda$core$Bit $tmp2374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2374.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2376 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1268_92311->$data + 16));
            t2375 = *$tmp2376;
            panda$core$String* $tmp2377 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, t2375, p_out);
            return $tmp2377;
        }
        }
        else {
        panda$core$Bit $tmp2378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2378.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2380 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 0));
            base2379 = *$tmp2380;
            panda$core$Int64* $tmp2382 = ((panda$core$Int64*) ((char*) $match$1268_92311->$data + 8));
            id2381 = *$tmp2382;
            panda$core$String* $tmp2384 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2379, p_out);
            value2383 = $tmp2384;
            panda$core$Int64$wrapper* $tmp2385;
            $tmp2385 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp2385->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2385->refCount = 1;
            $tmp2385->value = id2381;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp2385), ((panda$core$Object*) value2383));
            return value2383;
        }
        }
        else {
        panda$core$Bit $tmp2386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2386.value) {
        {
            panda$core$Int64* $tmp2388 = ((panda$core$Int64*) ((char*) $match$1268_92311->$data + 24));
            id2387 = *$tmp2388;
            panda$core$Int64$wrapper* $tmp2390;
            $tmp2390 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp2390->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2390->refCount = 1;
            $tmp2390->value = id2387;
            panda$core$Object* $tmp2391 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) $tmp2390));
            result2389 = ((panda$core$String*) $tmp2391);
            PANDA_ASSERT(((panda$core$Bit) { result2389 != NULL }).value);
            return result2389;
        }
        }
        else {
        panda$core$Bit $tmp2392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2392.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2394 = ((org$pandalanguage$pandac$Position*) ((char*) $match$1268_92311->$data + 0));
            pos2393 = *$tmp2394;
            org$pandalanguage$pandac$Type** $tmp2396 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1268_92311->$data + 16));
            type2395 = *$tmp2396;
            panda$core$String* $tmp2397 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, type2395, p_out);
            return $tmp2397;
        }
        }
        else {
        panda$core$Bit $tmp2398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2398.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2400 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 16));
            value2399 = *$tmp2400;
            panda$core$String* $tmp2401 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2399, p_out);
            return $tmp2401;
        }
        }
        else {
        panda$core$Bit $tmp2402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2402.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2404 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 16));
            value2403 = *$tmp2404;
            panda$core$String* $tmp2405 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2403, p_out);
            return $tmp2405;
        }
        }
        else {
        panda$core$Bit $tmp2406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2406.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2408 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1268_92311->$data + 16));
            op2407 = *$tmp2408;
            org$pandalanguage$pandac$IRNode** $tmp2410 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 24));
            base2409 = *$tmp2410;
            panda$core$String* $tmp2411 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, op2407, base2409, p_out);
            return $tmp2411;
        }
        }
        else {
        panda$core$Bit $tmp2412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2412.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2414 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 16));
            test2413 = *$tmp2414;
            org$pandalanguage$pandac$IRNode** $tmp2416 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 24));
            ifTrue2415 = *$tmp2416;
            org$pandalanguage$pandac$IRNode** $tmp2418 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 32));
            ifFalse2417 = *$tmp2418;
            panda$core$String* $tmp2419 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, test2413, ifTrue2415, ifFalse2417, p_out);
            return $tmp2419;
        }
        }
        else {
        panda$core$Bit $tmp2420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp2420.value) {
        {
            panda$core$String* $tmp2421 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2421;
        }
        }
        else {
        panda$core$Bit $tmp2422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1268_92311->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2422.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2424 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 0));
            base2423 = *$tmp2424;
            org$pandalanguage$pandac$IRNode** $tmp2426 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1268_92311->$data + 8));
            stmt2425 = *$tmp2426;
            panda$core$String* $tmp2427 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2423, stmt2425, p_out);
            return $tmp2427;
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
    panda$core$String* $tmp2428 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2428;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2432;
    org$pandalanguage$pandac$IRNode* s2444;
    (($fn2430) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2429);
    panda$core$Int64 $tmp2431 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2431;
    {
        ITable* $tmp2433 = ((panda$collections$Iterable*) p_statements)->$class->itable;
        while ($tmp2433->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2433 = $tmp2433->next;
        }
        $fn2435 $tmp2434 = $tmp2433->methods[0];
        panda$collections$Iterator* $tmp2436 = $tmp2434(((panda$collections$Iterable*) p_statements));
        s$Iter2432 = $tmp2436;
        $l2437:;
        ITable* $tmp2439 = s$Iter2432->$class->itable;
        while ($tmp2439->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2439 = $tmp2439->next;
        }
        $fn2441 $tmp2440 = $tmp2439->methods[0];
        panda$core$Bit $tmp2442 = $tmp2440(s$Iter2432);
        panda$core$Bit $tmp2443 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2442);
        if (!$tmp2443.value) goto $l2438;
        {
            ITable* $tmp2445 = s$Iter2432->$class->itable;
            while ($tmp2445->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2445 = $tmp2445->next;
            }
            $fn2447 $tmp2446 = $tmp2445->methods[1];
            panda$core$Object* $tmp2448 = $tmp2446(s$Iter2432);
            s2444 = ((org$pandalanguage$pandac$IRNode*) $tmp2448);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2444, p_out);
        }
        goto $l2437;
        $l2438:;
    }
    panda$core$Int64 $tmp2449 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2449;
    (($fn2451) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2450);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$1337_92452;
    panda$core$String* ptr2457;
    panda$core$String* arg2460;
    panda$core$String* base2482;
    panda$core$String* index2485;
    panda$core$String* value2488;
    {
        $match$1337_92452 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp2454 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1337_92452, &$s2453);
        if ($tmp2454.value) {
        {
            panda$core$Int64 $tmp2455 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2455, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2456.value);
            panda$core$Object* $tmp2458 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2459 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2458), p_out);
            ptr2457 = $tmp2459;
            panda$core$Object* $tmp2461 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2462 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2461));
            panda$core$String* $tmp2463 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2462, p_out);
            arg2460 = $tmp2463;
            panda$core$String* $tmp2465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2464, arg2460);
            panda$core$String* $tmp2467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2465, &$s2466);
            panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, ptr2457);
            panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2468, &$s2469);
            (($fn2471) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2470);
        }
        }
        else {
        panda$core$Bit $tmp2473 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1337_92452, &$s2472);
        if ($tmp2473.value) {
        {
            panda$core$Int64 $tmp2474 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2474, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2475.value);
            panda$core$Object* $tmp2476 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2477 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2476));
            org$pandalanguage$pandac$Type* $tmp2479 = (($fn2478) $tmp2477->$class->vtable[2])($tmp2477);
            panda$core$Int64 $tmp2480 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2479->subtypes);
            panda$core$Bit $tmp2481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2480, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2481.value);
            panda$core$Object* $tmp2483 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2484 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2483), p_out);
            base2482 = $tmp2484;
            panda$core$Object* $tmp2486 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2487 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2486), p_out);
            index2485 = $tmp2487;
            panda$core$Object* $tmp2489 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2490 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2489));
            panda$core$String* $tmp2491 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2490, p_out);
            value2488 = $tmp2491;
            panda$core$String* $tmp2492 = panda$core$String$convert$R$panda$core$String(base2482);
            panda$core$String* $tmp2494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2492, &$s2493);
            panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2494, index2485);
            panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2495, &$s2496);
            panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2497, value2488);
            panda$core$String* $tmp2500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, &$s2499);
            (($fn2501) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2500);
        }
        }
        else {
        panda$core$Bit $tmp2503 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1337_92452, &$s2502);
        if ($tmp2503.value) {
        {
            panda$core$Int64 $tmp2504 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2504, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2505.value);
            panda$core$Object* $tmp2507 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2508 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2507), p_out);
            panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2506, $tmp2508);
            panda$core$String* $tmp2511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2509, &$s2510);
            (($fn2512) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2511);
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
    org$pandalanguage$pandac$MethodDecl* m2513;
    org$pandalanguage$pandac$Type* actualMethodType2517;
    panda$core$String* actualResultType2518;
    panda$core$Bit isSuper2519;
    panda$collections$Array* argRefs2539;
    panda$core$Int64 offset2542;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2547;
    panda$core$String* arg2562;
    panda$core$String* targetRef2587;
    panda$core$String* methodRef2591;
    panda$core$String* separator2593;
    panda$core$String* indirectVar2597;
    panda$core$String* resultType2601;
    panda$collections$Iterator* a$Iter2625;
    panda$core$String* a2637;
    m2513 = p_mref->value;
    panda$core$Bit $tmp2515 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2513->owner)->name, &$s2514);
    if ($tmp2515.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_mref, p_args, p_out);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2513));
            return;
        }
    }
    }
    panda$core$Bit $tmp2516 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2513->owner);
    if ($tmp2516.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2513);
    }
    }
    memset(&actualMethodType2517, 0, sizeof(actualMethodType2517));
    memset(&actualResultType2518, 0, sizeof(actualResultType2518));
    panda$core$Int64 $tmp2521 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp2522 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2521, ((panda$core$Int64) { 1 }));
    bool $tmp2520 = $tmp2522.value;
    if (!$tmp2520) goto $l2523;
    panda$core$Object* $tmp2524 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2524)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp2520 = $tmp2525.value;
    $l2523:;
    panda$core$Bit $tmp2526 = { $tmp2520 };
    isSuper2519 = $tmp2526;
    panda$core$Bit $tmp2528 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2519);
    bool $tmp2527 = $tmp2528.value;
    if (!$tmp2527) goto $l2529;
    panda$core$Bit $tmp2530 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2513);
    $tmp2527 = $tmp2530.value;
    $l2529:;
    panda$core$Bit $tmp2531 = { $tmp2527 };
    if ($tmp2531.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2532 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2513);
            actualMethodType2517 = $tmp2532;
        }
        {
            panda$core$Int64 $tmp2533 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2517->subtypes);
            panda$core$Int64 $tmp2534 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2533, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2535 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2517->subtypes, $tmp2534);
            panda$core$String* $tmp2536 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2535));
            actualResultType2518 = $tmp2536;
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2537 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2513);
            actualMethodType2517 = $tmp2537;
        }
        {
            panda$core$String* $tmp2538 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            actualResultType2518 = $tmp2538;
        }
    }
    }
    panda$collections$Array* $tmp2540 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2540->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2540->refCount.value = 1;
    panda$collections$Array$init($tmp2540);
    argRefs2539 = $tmp2540;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(argRefs2539, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2543 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp2544 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2517->subtypes);
    panda$core$Int64 $tmp2545 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2543, $tmp2544);
    panda$core$Int64 $tmp2546 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2545, ((panda$core$Int64) { 1 }));
    offset2542 = $tmp2546;
    panda$core$Int64 $tmp2548 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2547, ((panda$core$Int64) { 0 }), $tmp2548, ((panda$core$Bit) { false }));
    int64_t $tmp2550 = $tmp2547.min.value;
    panda$core$Int64 i2549 = { $tmp2550 };
    int64_t $tmp2552 = $tmp2547.max.value;
    bool $tmp2553 = $tmp2547.inclusive.value;
    if ($tmp2553) goto $l2560; else goto $l2561;
    $l2560:;
    if ($tmp2550 <= $tmp2552) goto $l2554; else goto $l2556;
    $l2561:;
    if ($tmp2550 < $tmp2552) goto $l2554; else goto $l2556;
    $l2554:;
    {
        panda$core$Object* $tmp2563 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2549);
        panda$core$String* $tmp2564 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2563), p_out);
        arg2562 = $tmp2564;
        panda$core$Bit $tmp2566 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2549, offset2542);
        bool $tmp2565 = $tmp2566.value;
        if (!$tmp2565) goto $l2567;
        panda$core$Int64 $tmp2568 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2549, offset2542);
        panda$core$Object* $tmp2569 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2517->subtypes, $tmp2568);
        panda$core$Object* $tmp2570 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2549);
        org$pandalanguage$pandac$Type* $tmp2572 = (($fn2571) ((org$pandalanguage$pandac$IRNode*) $tmp2570)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2570));
        panda$core$Bit $tmp2573 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2569), $tmp2572);
        $tmp2565 = $tmp2573.value;
        $l2567:;
        panda$core$Bit $tmp2574 = { $tmp2565 };
        if ($tmp2574.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2562));
                panda$core$Object* $tmp2575 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2549);
                org$pandalanguage$pandac$Type* $tmp2577 = (($fn2576) ((org$pandalanguage$pandac$IRNode*) $tmp2575)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2575));
                panda$core$Int64 $tmp2578 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2549, offset2542);
                panda$core$Object* $tmp2579 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2517->subtypes, $tmp2578);
                panda$core$String* $tmp2580 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2562, $tmp2577, ((org$pandalanguage$pandac$Type*) $tmp2579), p_out);
                arg2562 = $tmp2580;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs2539, ((panda$core$Object*) arg2562));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2562));
    }
    $l2557:;
    int64_t $tmp2582 = $tmp2552 - i2549.value;
    if ($tmp2553) goto $l2583; else goto $l2584;
    $l2583:;
    if ((uint64_t) $tmp2582 >= 1) goto $l2581; else goto $l2556;
    $l2584:;
    if ((uint64_t) $tmp2582 > 1) goto $l2581; else goto $l2556;
    $l2581:;
    i2549.value += 1;
    goto $l2554;
    $l2556:;
    memset(&targetRef2587, 0, sizeof(targetRef2587));
    panda$core$Int64 $tmp2588 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs2539);
    panda$core$Bit $tmp2589 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2588, ((panda$core$Int64) { 0 }));
    if ($tmp2589.value) {
    {
        {
            panda$core$Object* $tmp2590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs2539, ((panda$core$Int64) { 0 }));
            targetRef2587 = ((panda$core$String*) $tmp2590);
        }
    }
    }
    else {
    {
        {
            targetRef2587 = NULL;
        }
    }
    }
    panda$core$String* $tmp2592 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, targetRef2587, m2513, isSuper2519, p_out);
    methodRef2591 = $tmp2592;
    separator2593 = &$s2594;
    panda$core$Bit $tmp2595 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2513);
    if ($tmp2595.value) {
    {
        panda$core$Int64 $tmp2596 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2596;
        panda$core$Int64$wrapper* $tmp2599;
        $tmp2599 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp2599->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2599->refCount = 1;
        $tmp2599->value = self->varCount;
        panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2598, ((panda$core$Object*) $tmp2599));
        indirectVar2597 = $tmp2600;
        panda$core$String* $tmp2602 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        resultType2601 = $tmp2602;
        panda$core$String* $tmp2603 = panda$core$String$convert$R$panda$core$String(resultType2601);
        panda$core$String* $tmp2605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2603, &$s2604);
        panda$core$String* $tmp2606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2605, indirectVar2597);
        panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, &$s2607);
        (($fn2609) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2608);
        panda$core$String* $tmp2610 = panda$core$String$convert$R$panda$core$String(methodRef2591);
        panda$core$String* $tmp2612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2610, &$s2611);
        panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2612, resultType2601);
        panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, &$s2614);
        panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2615, indirectVar2597);
        panda$core$String* $tmp2618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2616, &$s2617);
        (($fn2619) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2618);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2593));
            separator2593 = &$s2620;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultType2601));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar2597));
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2621 = panda$core$String$convert$R$panda$core$String(methodRef2591);
        panda$core$String* $tmp2623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2621, &$s2622);
        (($fn2624) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2623);
    }
    }
    {
        ITable* $tmp2626 = ((panda$collections$Iterable*) argRefs2539)->$class->itable;
        while ($tmp2626->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2626 = $tmp2626->next;
        }
        $fn2628 $tmp2627 = $tmp2626->methods[0];
        panda$collections$Iterator* $tmp2629 = $tmp2627(((panda$collections$Iterable*) argRefs2539));
        a$Iter2625 = $tmp2629;
        $l2630:;
        ITable* $tmp2632 = a$Iter2625->$class->itable;
        while ($tmp2632->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2632 = $tmp2632->next;
        }
        $fn2634 $tmp2633 = $tmp2632->methods[0];
        panda$core$Bit $tmp2635 = $tmp2633(a$Iter2625);
        panda$core$Bit $tmp2636 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2635);
        if (!$tmp2636.value) goto $l2631;
        {
            ITable* $tmp2638 = a$Iter2625->$class->itable;
            while ($tmp2638->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2638 = $tmp2638->next;
            }
            $fn2640 $tmp2639 = $tmp2638->methods[1];
            panda$core$Object* $tmp2641 = $tmp2639(a$Iter2625);
            a2637 = ((panda$core$String*) $tmp2641);
            (($fn2642) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2593);
            (($fn2643) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2637);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2593));
                separator2593 = &$s2644;
            }
        }
        goto $l2630;
        $l2631:;
    }
    (($fn2646) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2645);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2593));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs2539));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef2591));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType2518));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetRef2587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType2517));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$collections$ImmutableArray* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2647;
    panda$core$String* $tmp2648 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2647 = $tmp2648;
    panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2649, testRef2647);
    panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2650, &$s2651);
    (($fn2653) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2652);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { false }), p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_ifTrue, p_out);
    (($fn2655) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2654);
    if (((panda$core$Bit) { p_ifFalse != NULL }).value) {
    {
        (($fn2657) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2656);
        org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { false }), p_out);
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_ifFalse, p_out);
        (($fn2659) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2658);
    }
    }
    panda$collections$Array$clear(self->extraEffects);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef2647));
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2672;
    org$pandalanguage$pandac$Type* t2674;
    panda$core$String* llt2678;
    panda$core$String* indexType2680;
    org$pandalanguage$pandac$ClassDecl* cl2686;
    org$pandalanguage$pandac$FieldDecl* field2694;
    panda$core$String* numberType2700;
    panda$core$String* index2702;
    org$pandalanguage$pandac$IRNode* $match$1468_92703;
    org$pandalanguage$pandac$Variable* variable2705;
    panda$core$String* start2708;
    panda$core$String* indexValuePtr2720;
    panda$core$String* end2734;
    panda$core$String* inclusive2746;
    panda$core$String* loopStart2756;
    panda$core$String* loopBody2758;
    panda$core$String* loopEnd2760;
    panda$core$String* loopTest2762;
    panda$core$String* forwardEntry2766;
    panda$core$String* backwardEntry2768;
    panda$core$String* signPrefix2770;
    panda$core$String* unsigned2771;
    panda$core$String* forwardEntryInclusive2785;
    panda$core$String* forwardEntryExclusive2787;
    panda$core$String* loopInc2829;
    panda$core$String* forwardDelta2831;
    panda$core$String* forwardInclusiveLabel2846;
    panda$core$String* forwardExclusiveLabel2848;
    panda$core$String* forwardExclusiveTest2877;
    panda$core$String* inc2894;
    org$pandalanguage$pandac$Type* $tmp2661 = (($fn2660) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2661->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2662.value);
    org$pandalanguage$pandac$Type* $tmp2664 = (($fn2663) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2665 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2664->subtypes);
    panda$core$Bit $tmp2666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2665, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2666.value);
    org$pandalanguage$pandac$Type* $tmp2668 = (($fn2667) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2669 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2668->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2671 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2669))->name, &$s2670);
    PANDA_ASSERT($tmp2671.value);
    panda$core$String* $tmp2673 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range2672 = $tmp2673;
    org$pandalanguage$pandac$Type* $tmp2676 = (($fn2675) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2677 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2676->subtypes, ((panda$core$Int64) { 1 }));
    t2674 = ((org$pandalanguage$pandac$Type*) $tmp2677);
    panda$core$String* $tmp2679 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2674);
    llt2678 = $tmp2679;
    memset(&indexType2680, 0, sizeof(indexType2680));
    panda$core$Bit $tmp2681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2674->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2681.value) {
    {
        panda$core$Int64 $tmp2682 = panda$collections$Array$get_count$R$panda$core$Int64(t2674->subtypes);
        panda$core$Bit $tmp2683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2682, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2683.value);
        {
            panda$core$Object* $tmp2684 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2674->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2685 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2684));
            indexType2680 = $tmp2685;
        }
    }
    }
    else {
    {
        {
            indexType2680 = llt2678;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2687 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2674);
    cl2686 = $tmp2687;
    PANDA_ASSERT(((panda$core$Bit) { cl2686 != NULL }).value);
    panda$collections$ListView* $tmp2688 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2686);
    ITable* $tmp2689 = ((panda$collections$CollectionView*) $tmp2688)->$class->itable;
    while ($tmp2689->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2689 = $tmp2689->next;
    }
    $fn2691 $tmp2690 = $tmp2689->methods[0];
    panda$core$Int64 $tmp2692 = $tmp2690(((panda$collections$CollectionView*) $tmp2688));
    panda$core$Bit $tmp2693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2692, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2693.value);
    panda$collections$ListView* $tmp2695 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2686);
    ITable* $tmp2696 = $tmp2695->$class->itable;
    while ($tmp2696->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2696 = $tmp2696->next;
    }
    $fn2698 $tmp2697 = $tmp2696->methods[0];
    panda$core$Object* $tmp2699 = $tmp2697($tmp2695, ((panda$core$Int64) { 0 }));
    field2694 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2699);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2694);
    panda$core$String* $tmp2701 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2694->type);
    numberType2700 = $tmp2701;
    memset(&index2702, 0, sizeof(index2702));
    {
        $match$1468_92703 = p_target;
        panda$core$Bit $tmp2704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1468_92703->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2704.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2706 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1468_92703->$data + 16));
            variable2705 = *$tmp2706;
            {
                panda$core$String* $tmp2707 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2705);
                index2702 = $tmp2707;
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2709 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2708 = $tmp2709;
    panda$core$String* $tmp2710 = panda$core$String$convert$R$panda$core$String(numberType2700);
    panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, &$s2711);
    panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2712, start2708);
    panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2714);
    panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, range2672);
    panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, &$s2717);
    (($fn2719) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2718);
    panda$core$String* $tmp2721 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2720 = $tmp2721;
    org$pandalanguage$pandac$Type* $tmp2722 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2686);
    panda$core$String* $tmp2723 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2722);
    panda$core$String* $tmp2724 = panda$core$String$convert$R$panda$core$String($tmp2723);
    panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2724, &$s2725);
    panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, index2702);
    panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2727, &$s2728);
    panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, start2708);
    panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2730, &$s2731);
    (($fn2733) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2732);
    panda$core$String* $tmp2735 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2734 = $tmp2735;
    panda$core$String* $tmp2736 = panda$core$String$convert$R$panda$core$String(numberType2700);
    panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, &$s2737);
    panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, end2734);
    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, &$s2740);
    panda$core$String* $tmp2742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2741, range2672);
    panda$core$String* $tmp2744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2742, &$s2743);
    (($fn2745) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2744);
    panda$core$String* $tmp2747 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2746 = $tmp2747;
    panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2748, inclusive2746);
    panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, &$s2750);
    panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, range2672);
    panda$core$String* $tmp2754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2752, &$s2753);
    (($fn2755) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2754);
    panda$core$String* $tmp2757 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2756 = $tmp2757;
    panda$core$String* $tmp2759 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2758 = $tmp2759;
    panda$core$String* $tmp2761 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2760 = $tmp2761;
    panda$core$String* $tmp2763 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2762 = $tmp2763;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2764 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp2764->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2764->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2764, p_label, loopEnd2760, loopTest2762);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2764));
    panda$core$String* $tmp2767 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2766 = $tmp2767;
    panda$core$String* $tmp2769 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2768 = $tmp2769;
    memset(&signPrefix2770, 0, sizeof(signPrefix2770));
    memset(&unsigned2771, 0, sizeof(unsigned2771));
    panda$core$Bit $tmp2773 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2674)->name, &$s2772);
    if ($tmp2773.value) {
    {
        {
            signPrefix2770 = &$s2774;
        }
        {
            panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2775, numberType2700);
            unsigned2771 = $tmp2776;
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp2779 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2674)->name, &$s2778);
        bool $tmp2777 = $tmp2779.value;
        if ($tmp2777) goto $l2780;
        panda$core$Bit $tmp2782 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2674)->name, &$s2781);
        $tmp2777 = $tmp2782.value;
        $l2780:;
        panda$core$Bit $tmp2783 = { $tmp2777 };
        PANDA_ASSERT($tmp2783.value);
        {
            signPrefix2770 = &$s2784;
        }
        {
            unsigned2771 = numberType2700;
        }
    }
    }
    panda$core$String* $tmp2786 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2785 = $tmp2786;
    panda$core$String* $tmp2788 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2787 = $tmp2788;
    panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2789, inclusive2746);
    panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, &$s2791);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, forwardEntryInclusive2785);
    panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, &$s2794);
    panda$core$String* $tmp2796 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2787);
    panda$core$String* $tmp2798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2796, &$s2797);
    panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, $tmp2798);
    (($fn2800) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2799);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2785, p_out);
    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2801, start2708);
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2802, &$s2803);
    panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, end2734);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, &$s2806);
    panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, loopStart2756);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, &$s2809);
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, loopEnd2760);
    panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2811, &$s2812);
    (($fn2814) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2813);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2787, p_out);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2815, start2708);
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, &$s2817);
    panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, end2734);
    panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2819, &$s2820);
    panda$core$String* $tmp2822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, loopStart2756);
    panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2822, &$s2823);
    panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, loopEnd2760);
    panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2825, &$s2826);
    (($fn2828) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2827);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2756, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2762, p_out);
    panda$core$String* $tmp2830 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2829 = $tmp2830;
    panda$core$String* $tmp2832 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2831 = $tmp2832;
    panda$core$String* $tmp2833 = panda$core$String$convert$R$panda$core$String(numberType2700);
    panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2833, &$s2834);
    panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, forwardDelta2831);
    panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, &$s2837);
    panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, end2734);
    panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, &$s2840);
    panda$core$String* $tmp2842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, index2702);
    panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2842, &$s2843);
    (($fn2845) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2844);
    panda$core$String* $tmp2847 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2846 = $tmp2847;
    panda$core$String* $tmp2849 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2848 = $tmp2849;
    panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2850, inclusive2746);
    panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, &$s2852);
    panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, forwardInclusiveLabel2846);
    panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, &$s2855);
    panda$core$String* $tmp2857 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2848);
    panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2857, &$s2858);
    panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, $tmp2859);
    (($fn2861) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2860);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2846, p_out);
    panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2862, unsigned2771);
    panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, &$s2864);
    panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, forwardDelta2831);
    panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2866, &$s2867);
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2868, loopInc2829);
    panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2869, &$s2870);
    panda$core$String* $tmp2872 = panda$core$String$convert$R$panda$core$String(loopEnd2760);
    panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2872, &$s2873);
    panda$core$String* $tmp2875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2871, $tmp2874);
    (($fn2876) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2875);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2848, p_out);
    panda$core$String* $tmp2878 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2877 = $tmp2878;
    panda$core$String* $tmp2880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2879, unsigned2771);
    panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2880, &$s2881);
    panda$core$String* $tmp2883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2882, forwardDelta2831);
    panda$core$String* $tmp2885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2883, &$s2884);
    panda$core$String* $tmp2886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2885, loopInc2829);
    panda$core$String* $tmp2888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2886, &$s2887);
    panda$core$String* $tmp2889 = panda$core$String$convert$R$panda$core$String(loopEnd2760);
    panda$core$String* $tmp2891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, &$s2890);
    panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2888, $tmp2891);
    (($fn2893) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2892);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2829, p_out);
    panda$core$String* $tmp2895 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2894 = $tmp2895;
    panda$core$String* $tmp2896 = panda$core$String$convert$R$panda$core$String(index2702);
    panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, &$s2897);
    (($fn2899) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2898);
    panda$core$String* $tmp2901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2900, loopStart2756);
    panda$core$String* $tmp2903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2901, &$s2902);
    (($fn2904) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2903);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2760, p_out);
    panda$core$Object* $tmp2905 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix2770));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel2848));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive2746));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned2771));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2708));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody2758));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest2762));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive2785));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2674));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel2846));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end2734));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc2894));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart2756));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry2768));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr2720));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1468_92703));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd2760));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc2829));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2680));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt2678));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest2877));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType2700));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry2766));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2702));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive2787));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2694));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta2831));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2686));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range2672));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2918;
    org$pandalanguage$pandac$Type* t2920;
    org$pandalanguage$pandac$Type* stepType2924;
    panda$core$String* llt2928;
    panda$core$String* indexType2930;
    org$pandalanguage$pandac$ClassDecl* cl2936;
    org$pandalanguage$pandac$FieldDecl* field2944;
    panda$core$String* numberType2950;
    panda$core$String* index2952;
    org$pandalanguage$pandac$IRNode* $match$1580_92953;
    org$pandalanguage$pandac$Variable* variable2955;
    panda$core$String* start2958;
    panda$core$String* indexValuePtr2970;
    panda$core$String* end2984;
    panda$core$String* step2996;
    org$pandalanguage$pandac$ClassDecl* stepCl2998;
    org$pandalanguage$pandac$FieldDecl* stepField3006;
    panda$core$String* inclusive3023;
    panda$core$String* loopStart3033;
    panda$core$String* loopBody3035;
    panda$core$String* loopEnd3037;
    panda$core$String* loopTest3039;
    panda$core$String* forwardEntry3043;
    panda$core$String* backwardEntry3045;
    panda$core$String* unsigned3047;
    panda$core$String* signPrefix3048;
    panda$core$String* direction3064;
    panda$core$String* forwardEntryInclusive3088;
    panda$core$String* forwardEntryExclusive3090;
    panda$core$String* backwardEntryInclusive3132;
    panda$core$String* backwardEntryExclusive3134;
    panda$core$String* backwardEntryExclusiveTest3162;
    panda$core$String* loopInc3178;
    panda$core$String* forwardLabel3180;
    panda$core$String* backwardLabel3182;
    panda$core$String* forwardDelta3195;
    panda$core$String* forwardInclusiveLabel3210;
    panda$core$String* forwardExclusiveLabel3212;
    panda$core$String* forwardExclusiveTest3244;
    panda$core$String* backwardDelta3264;
    panda$core$String* backwardInclusiveLabel3279;
    panda$core$String* backwardExclusiveLabel3281;
    panda$core$String* inc3333;
    org$pandalanguage$pandac$Type* $tmp2907 = (($fn2906) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2907->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2908.value);
    org$pandalanguage$pandac$Type* $tmp2910 = (($fn2909) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2911 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2910->subtypes);
    panda$core$Bit $tmp2912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2911, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2912.value);
    org$pandalanguage$pandac$Type* $tmp2914 = (($fn2913) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2915 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2914->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2917 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2915))->name, &$s2916);
    PANDA_ASSERT($tmp2917.value);
    panda$core$String* $tmp2919 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range2918 = $tmp2919;
    org$pandalanguage$pandac$Type* $tmp2922 = (($fn2921) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2923 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2922->subtypes, ((panda$core$Int64) { 1 }));
    t2920 = ((org$pandalanguage$pandac$Type*) $tmp2923);
    org$pandalanguage$pandac$Type* $tmp2926 = (($fn2925) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2927 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2926->subtypes, ((panda$core$Int64) { 2 }));
    stepType2924 = ((org$pandalanguage$pandac$Type*) $tmp2927);
    panda$core$String* $tmp2929 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2920);
    llt2928 = $tmp2929;
    memset(&indexType2930, 0, sizeof(indexType2930));
    panda$core$Bit $tmp2931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2920->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2931.value) {
    {
        panda$core$Int64 $tmp2932 = panda$collections$Array$get_count$R$panda$core$Int64(t2920->subtypes);
        panda$core$Bit $tmp2933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2932, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2933.value);
        {
            panda$core$Object* $tmp2934 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2920->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2935 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2934));
            indexType2930 = $tmp2935;
        }
    }
    }
    else {
    {
        {
            indexType2930 = llt2928;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2937 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2920);
    cl2936 = $tmp2937;
    PANDA_ASSERT(((panda$core$Bit) { cl2936 != NULL }).value);
    panda$collections$ListView* $tmp2938 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2936);
    ITable* $tmp2939 = ((panda$collections$CollectionView*) $tmp2938)->$class->itable;
    while ($tmp2939->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2939 = $tmp2939->next;
    }
    $fn2941 $tmp2940 = $tmp2939->methods[0];
    panda$core$Int64 $tmp2942 = $tmp2940(((panda$collections$CollectionView*) $tmp2938));
    panda$core$Bit $tmp2943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2942, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2943.value);
    panda$collections$ListView* $tmp2945 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2936);
    ITable* $tmp2946 = $tmp2945->$class->itable;
    while ($tmp2946->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2946 = $tmp2946->next;
    }
    $fn2948 $tmp2947 = $tmp2946->methods[0];
    panda$core$Object* $tmp2949 = $tmp2947($tmp2945, ((panda$core$Int64) { 0 }));
    field2944 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2949);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2944);
    panda$core$String* $tmp2951 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2944->type);
    numberType2950 = $tmp2951;
    memset(&index2952, 0, sizeof(index2952));
    {
        $match$1580_92953 = p_target;
        panda$core$Bit $tmp2954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1580_92953->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2954.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2956 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1580_92953->$data + 16));
            variable2955 = *$tmp2956;
            {
                panda$core$String* $tmp2957 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2955);
                index2952 = $tmp2957;
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2959 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2958 = $tmp2959;
    panda$core$String* $tmp2960 = panda$core$String$convert$R$panda$core$String(numberType2950);
    panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2961);
    panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, start2958);
    panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, &$s2964);
    panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, range2918);
    panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, &$s2967);
    (($fn2969) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2968);
    panda$core$String* $tmp2971 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2970 = $tmp2971;
    org$pandalanguage$pandac$Type* $tmp2972 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2936);
    panda$core$String* $tmp2973 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2972);
    panda$core$String* $tmp2974 = panda$core$String$convert$R$panda$core$String($tmp2973);
    panda$core$String* $tmp2976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2974, &$s2975);
    panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2976, index2952);
    panda$core$String* $tmp2979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2977, &$s2978);
    panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2979, start2958);
    panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, &$s2981);
    (($fn2983) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2982);
    panda$core$String* $tmp2985 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2984 = $tmp2985;
    panda$core$String* $tmp2986 = panda$core$String$convert$R$panda$core$String(numberType2950);
    panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2986, &$s2987);
    panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2988, end2984);
    panda$core$String* $tmp2991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2989, &$s2990);
    panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2991, range2918);
    panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2992, &$s2993);
    (($fn2995) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2994);
    panda$core$String* $tmp2997 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2996 = $tmp2997;
    org$pandalanguage$pandac$ClassDecl* $tmp2999 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, stepType2924);
    stepCl2998 = $tmp2999;
    PANDA_ASSERT(((panda$core$Bit) { stepCl2998 != NULL }).value);
    panda$collections$ListView* $tmp3000 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2998);
    ITable* $tmp3001 = ((panda$collections$CollectionView*) $tmp3000)->$class->itable;
    while ($tmp3001->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3001 = $tmp3001->next;
    }
    $fn3003 $tmp3002 = $tmp3001->methods[0];
    panda$core$Int64 $tmp3004 = $tmp3002(((panda$collections$CollectionView*) $tmp3000));
    panda$core$Bit $tmp3005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3004, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3005.value);
    panda$collections$ListView* $tmp3007 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2998);
    ITable* $tmp3008 = $tmp3007->$class->itable;
    while ($tmp3008->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp3008 = $tmp3008->next;
    }
    $fn3010 $tmp3009 = $tmp3008->methods[0];
    panda$core$Object* $tmp3011 = $tmp3009($tmp3007, ((panda$core$Int64) { 0 }));
    stepField3006 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3011);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, stepField3006);
    panda$core$String* $tmp3012 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, stepField3006->type);
    panda$core$String* $tmp3013 = panda$core$String$convert$R$panda$core$String($tmp3012);
    panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, &$s3014);
    panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3015, step2996);
    panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3017);
    panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, range2918);
    panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, &$s3020);
    (($fn3022) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3021);
    panda$core$String* $tmp3024 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive3023 = $tmp3024;
    panda$core$String* $tmp3026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3025, inclusive3023);
    panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3026, &$s3027);
    panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3028, range2918);
    panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3029, &$s3030);
    (($fn3032) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3031);
    panda$core$String* $tmp3034 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3033 = $tmp3034;
    panda$core$String* $tmp3036 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody3035 = $tmp3036;
    panda$core$String* $tmp3038 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3037 = $tmp3038;
    panda$core$String* $tmp3040 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest3039 = $tmp3040;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3041 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp3041->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3041->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3041, p_label, loopEnd3037, loopTest3039);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3041));
    panda$core$String* $tmp3044 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry3043 = $tmp3044;
    panda$core$String* $tmp3046 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry3045 = $tmp3046;
    memset(&unsigned3047, 0, sizeof(unsigned3047));
    memset(&signPrefix3048, 0, sizeof(signPrefix3048));
    panda$core$Bit $tmp3050 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2924)->name, &$s3049);
    if ($tmp3050.value) {
    {
        {
            signPrefix3048 = &$s3051;
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp3054 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2924)->name, &$s3053);
        bool $tmp3052 = $tmp3054.value;
        if ($tmp3052) goto $l3055;
        panda$core$Bit $tmp3057 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2924)->name, &$s3056);
        $tmp3052 = $tmp3057.value;
        $l3055:;
        panda$core$Bit $tmp3058 = { $tmp3052 };
        PANDA_ASSERT($tmp3058.value);
        {
            signPrefix3048 = &$s3059;
        }
    }
    }
    panda$core$Bit $tmp3061 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(numberType2950, &$s3060);
    if ($tmp3061.value) {
    {
        {
            unsigned3047 = numberType2950;
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp3063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3062, numberType2950);
            unsigned3047 = $tmp3063;
        }
    }
    }
    memset(&direction3064, 0, sizeof(direction3064));
    panda$core$Bit $tmp3066 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix3048, &$s3065);
    if ($tmp3066.value) {
    {
        {
            panda$core$String* $tmp3067 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            direction3064 = $tmp3067;
        }
        panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3068, direction3064);
        panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, &$s3070);
        panda$core$String* $tmp3072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3071, step2996);
        panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3072, &$s3073);
        (($fn3075) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3074);
    }
    }
    else {
    {
        {
            direction3064 = &$s3076;
        }
    }
    }
    panda$core$String* $tmp3078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3077, direction3064);
    panda$core$String* $tmp3080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3078, &$s3079);
    panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3080, forwardEntry3043);
    panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, &$s3082);
    panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, backwardEntry3045);
    panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3084, &$s3085);
    (($fn3087) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3086);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry3043, p_out);
    panda$core$String* $tmp3089 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive3088 = $tmp3089;
    panda$core$String* $tmp3091 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive3090 = $tmp3091;
    panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3092, inclusive3023);
    panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, &$s3094);
    panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, forwardEntryInclusive3088);
    panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
    panda$core$String* $tmp3099 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive3090);
    panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, &$s3100);
    panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3098, $tmp3101);
    (($fn3103) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3102);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive3088, p_out);
    panda$core$String* $tmp3105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3104, start2958);
    panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3105, &$s3106);
    panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, end2984);
    panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3108, &$s3109);
    panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, loopStart3033);
    panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, &$s3112);
    panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3113, loopEnd3037);
    panda$core$String* $tmp3116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3114, &$s3115);
    (($fn3117) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3116);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive3090, p_out);
    panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3118, start2958);
    panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, &$s3120);
    panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, end2984);
    panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, &$s3123);
    panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, loopStart3033);
    panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3125, &$s3126);
    panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3127, loopEnd3037);
    panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3128, &$s3129);
    (($fn3131) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3130);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry3045, p_out);
    panda$core$String* $tmp3133 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive3132 = $tmp3133;
    panda$core$String* $tmp3135 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive3134 = $tmp3135;
    panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3136, inclusive3023);
    panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, &$s3138);
    panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, backwardEntryInclusive3132);
    panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3140, &$s3141);
    panda$core$String* $tmp3143 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive3134);
    panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, &$s3144);
    panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, $tmp3145);
    (($fn3147) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3146);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive3132, p_out);
    panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3148, start2958);
    panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3149, &$s3150);
    panda$core$String* $tmp3152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, end2984);
    panda$core$String* $tmp3154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3152, &$s3153);
    panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3154, loopStart3033);
    panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, &$s3156);
    panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3157, loopEnd3037);
    panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, &$s3159);
    (($fn3161) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3160);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive3134, p_out);
    panda$core$String* $tmp3163 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest3162 = $tmp3163;
    panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3164, start2958);
    panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, &$s3166);
    panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, end2984);
    panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3168, &$s3169);
    panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, loopStart3033);
    panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, &$s3172);
    panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, loopEnd3037);
    panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, &$s3175);
    (($fn3177) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3176);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3033, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest3039, p_out);
    panda$core$String* $tmp3179 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc3178 = $tmp3179;
    panda$core$String* $tmp3181 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel3180 = $tmp3181;
    panda$core$String* $tmp3183 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel3182 = $tmp3183;
    panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3184, direction3064);
    panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3185, &$s3186);
    panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3187, forwardLabel3180);
    panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3188, &$s3189);
    panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3190, backwardLabel3182);
    panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, &$s3192);
    (($fn3194) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3193);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel3180, p_out);
    panda$core$String* $tmp3196 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta3195 = $tmp3196;
    panda$core$String* $tmp3197 = panda$core$String$convert$R$panda$core$String(numberType2950);
    panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, &$s3198);
    panda$core$String* $tmp3200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3199, forwardDelta3195);
    panda$core$String* $tmp3202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3200, &$s3201);
    panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3202, end2984);
    panda$core$String* $tmp3205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3203, &$s3204);
    panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3205, index2952);
    panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, &$s3207);
    (($fn3209) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3208);
    panda$core$String* $tmp3211 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel3210 = $tmp3211;
    panda$core$String* $tmp3213 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel3212 = $tmp3213;
    panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3214, inclusive3023);
    panda$core$String* $tmp3217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3215, &$s3216);
    panda$core$String* $tmp3218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3217, forwardInclusiveLabel3210);
    panda$core$String* $tmp3220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3218, &$s3219);
    panda$core$String* $tmp3221 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel3212);
    panda$core$String* $tmp3223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3221, &$s3222);
    panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3220, $tmp3223);
    (($fn3225) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3224);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel3210, p_out);
    panda$core$String* $tmp3227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3226, unsigned3047);
    panda$core$String* $tmp3229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3227, &$s3228);
    panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3229, forwardDelta3195);
    panda$core$String* $tmp3232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3230, &$s3231);
    panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3232, step2996);
    panda$core$String* $tmp3235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3233, &$s3234);
    panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3235, loopInc3178);
    panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3236, &$s3237);
    panda$core$String* $tmp3239 = panda$core$String$convert$R$panda$core$String(loopEnd3037);
    panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, &$s3240);
    panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, $tmp3241);
    (($fn3243) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3242);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel3212, p_out);
    panda$core$String* $tmp3245 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest3244 = $tmp3245;
    panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3246, unsigned3047);
    panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3247, &$s3248);
    panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, forwardDelta3195);
    panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3250, &$s3251);
    panda$core$String* $tmp3253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3252, step2996);
    panda$core$String* $tmp3255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3253, &$s3254);
    panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3255, loopInc3178);
    panda$core$String* $tmp3258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, &$s3257);
    panda$core$String* $tmp3259 = panda$core$String$convert$R$panda$core$String(loopEnd3037);
    panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3259, &$s3260);
    panda$core$String* $tmp3262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3258, $tmp3261);
    (($fn3263) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3262);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel3182, p_out);
    panda$core$String* $tmp3265 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta3264 = $tmp3265;
    panda$core$String* $tmp3266 = panda$core$String$convert$R$panda$core$String(numberType2950);
    panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3266, &$s3267);
    panda$core$String* $tmp3269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3268, backwardDelta3264);
    panda$core$String* $tmp3271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3269, &$s3270);
    panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3271, index2952);
    panda$core$String* $tmp3274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3272, &$s3273);
    panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3274, end2984);
    panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3275, &$s3276);
    (($fn3278) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3277);
    panda$core$String* $tmp3280 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel3279 = $tmp3280;
    panda$core$String* $tmp3282 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel3281 = $tmp3282;
    panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3283, inclusive3023);
    panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3284, &$s3285);
    panda$core$String* $tmp3287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3286, backwardInclusiveLabel3279);
    panda$core$String* $tmp3289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3287, &$s3288);
    panda$core$String* $tmp3290 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel3281);
    panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3290, &$s3291);
    panda$core$String* $tmp3293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3289, $tmp3292);
    (($fn3294) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3293);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel3279, p_out);
    panda$core$String* $tmp3296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3295, unsigned3047);
    panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, &$s3297);
    panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3298, backwardDelta3264);
    panda$core$String* $tmp3301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3299, &$s3300);
    panda$core$String* $tmp3302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3301, step2996);
    panda$core$String* $tmp3304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3302, &$s3303);
    panda$core$String* $tmp3305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3304, loopInc3178);
    panda$core$String* $tmp3307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3305, &$s3306);
    panda$core$String* $tmp3309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3308, loopEnd3037);
    panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3309, &$s3310);
    panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3307, $tmp3311);
    (($fn3313) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3312);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel3281, p_out);
    panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3314, unsigned3047);
    panda$core$String* $tmp3317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3315, &$s3316);
    panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3317, backwardDelta3264);
    panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3318, &$s3319);
    panda$core$String* $tmp3321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3320, step2996);
    panda$core$String* $tmp3323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3321, &$s3322);
    panda$core$String* $tmp3324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3323, loopInc3178);
    panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3324, &$s3325);
    panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3327, loopEnd3037);
    panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, &$s3329);
    panda$core$String* $tmp3331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, $tmp3330);
    (($fn3332) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3331);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc3178, p_out);
    panda$core$String* $tmp3334 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3333 = $tmp3334;
    panda$core$String* $tmp3335 = panda$core$String$convert$R$panda$core$String(index2952);
    panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, &$s3336);
    panda$core$String* $tmp3338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, step2996);
    panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3338, &$s3339);
    (($fn3341) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3340);
    panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3342, loopStart3033);
    panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, &$s3344);
    (($fn3346) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3345);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3037, p_out);
    panda$core$Object* $tmp3347 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardInclusiveLabel3279));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix3048));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel3212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive3023));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned3047));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardLabel3182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusiveTest3162));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2958));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody3035));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardLabel3180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest3039));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusive3134));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive3088));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardExclusiveLabel3281));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2920));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel3210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end2984));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepCl2998));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc3333));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2996));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3033));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry3045));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr2970));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc3178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepType2924));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3037));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepField3006));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2930));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt2928));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardDelta3264));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest3244));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType2950));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry3043));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2952));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive3090));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) direction3064));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2944));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta3195));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1580_92953));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2936));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryInclusive3132));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range2918));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Type* $tmp3349 = (($fn3348) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3350 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit($tmp3349);
    if ($tmp3350.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_label, p_target, p_list, p_statements, p_out);
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp3352 = (($fn3351) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3353 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit($tmp3352);
    if ($tmp3353.value) {
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
    panda$core$String* loopStart3358;
    panda$core$String* loopEnd3360;
    org$pandalanguage$pandac$Type* $tmp3355 = (($fn3354) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3356 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3357 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3355, $tmp3356);
    PANDA_ASSERT($tmp3357.value);
    panda$core$String* $tmp3359 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3358 = $tmp3359;
    panda$core$String* $tmp3361 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3360 = $tmp3361;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3362 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp3362->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3362->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3362, p_label, loopEnd3360, loopStart3358);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3362));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3358, p_out);
    panda$core$String* $tmp3365 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3364, $tmp3365);
    panda$core$String* $tmp3368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3366, &$s3367);
    panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3368, loopEnd3360);
    panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3369, &$s3370);
    (($fn3372) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3371);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3373, loopStart3358);
    panda$core$String* $tmp3376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3374, &$s3375);
    (($fn3377) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3376);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3360, p_out);
    panda$core$Object* $tmp3378 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3360));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3358));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3383;
    panda$core$String* loopEnd3385;
    org$pandalanguage$pandac$Type* $tmp3380 = (($fn3379) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3381 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3382 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3380, $tmp3381);
    PANDA_ASSERT($tmp3382.value);
    panda$core$String* $tmp3384 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3383 = $tmp3384;
    panda$core$String* $tmp3386 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3385 = $tmp3386;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3387 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp3387->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3387->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3387, p_label, loopEnd3385, loopStart3383);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3387));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3383, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3390 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3389, $tmp3390);
    panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3391, &$s3392);
    panda$core$String* $tmp3394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3393, loopStart3383);
    panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3394, &$s3395);
    (($fn3397) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3396);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3385, p_out);
    panda$core$Object* $tmp3398 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3385));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3383));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3399;
    panda$core$String* loopEnd3401;
    panda$core$String* $tmp3400 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3399 = $tmp3400;
    panda$core$String* $tmp3402 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3401 = $tmp3402;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3403 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp3403->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3403->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3403, p_label, loopEnd3401, loopStart3399);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3403));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3399, p_out);
    (($fn3406) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3405);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    (($fn3408) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3407);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3401, p_out);
    panda$core$Object* $tmp3409 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3399));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1782_93410;
    org$pandalanguage$pandac$Variable* v3412;
    {
        $match$1782_93410 = p_target;
        panda$core$Bit $tmp3411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1782_93410->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3411.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3413 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1782_93410->$data + 16));
            v3412 = *$tmp3413;
            panda$core$String* $tmp3414 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3412->type);
            panda$core$String* $tmp3415 = panda$core$String$convert$R$panda$core$String($tmp3414);
            panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3415, &$s3416);
            panda$core$String* $tmp3418 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3412);
            panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3417, $tmp3418);
            panda$core$String* $tmp3421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3419, &$s3420);
            (($fn3422) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3421);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3423 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3412);
                panda$core$String* $tmp3424 = panda$core$String$convert$R$panda$core$String($tmp3423);
                panda$core$String* $tmp3426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3424, &$s3425);
                panda$core$String* $tmp3427 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3426, $tmp3427);
                panda$core$String* $tmp3430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3428, &$s3429);
                (($fn3431) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3430);
            }
            }
            else {
            {
                panda$core$String* $tmp3433 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3412);
                panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3432, $tmp3433);
                panda$core$String* $tmp3436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3434, &$s3435);
                panda$core$String* $tmp3437 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3412);
                panda$core$String* $tmp3438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3436, $tmp3437);
                panda$core$String* $tmp3440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3438, &$s3439);
                (($fn3441) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3440);
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
    panda$collections$Iterator* decl$Iter3442;
    org$pandalanguage$pandac$IRNode* decl3454;
    org$pandalanguage$pandac$IRNode* $match$1798_133459;
    org$pandalanguage$pandac$IRNode* target3461;
    org$pandalanguage$pandac$IRNode* value3463;
    {
        ITable* $tmp3443 = ((panda$collections$Iterable*) p_decls)->$class->itable;
        while ($tmp3443->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3443 = $tmp3443->next;
        }
        $fn3445 $tmp3444 = $tmp3443->methods[0];
        panda$collections$Iterator* $tmp3446 = $tmp3444(((panda$collections$Iterable*) p_decls));
        decl$Iter3442 = $tmp3446;
        $l3447:;
        ITable* $tmp3449 = decl$Iter3442->$class->itable;
        while ($tmp3449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3449 = $tmp3449->next;
        }
        $fn3451 $tmp3450 = $tmp3449->methods[0];
        panda$core$Bit $tmp3452 = $tmp3450(decl$Iter3442);
        panda$core$Bit $tmp3453 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3452);
        if (!$tmp3453.value) goto $l3448;
        {
            ITable* $tmp3455 = decl$Iter3442->$class->itable;
            while ($tmp3455->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3455 = $tmp3455->next;
            }
            $fn3457 $tmp3456 = $tmp3455->methods[1];
            panda$core$Object* $tmp3458 = $tmp3456(decl$Iter3442);
            decl3454 = ((org$pandalanguage$pandac$IRNode*) $tmp3458);
            {
                $match$1798_133459 = decl3454;
                panda$core$Bit $tmp3460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1798_133459->$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp3460.value) {
                {
                    org$pandalanguage$pandac$IRNode** $tmp3462 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1798_133459->$data + 0));
                    target3461 = *$tmp3462;
                    org$pandalanguage$pandac$IRNode** $tmp3464 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1798_133459->$data + 8));
                    value3463 = *$tmp3464;
                    org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, target3461, value3463, p_out);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l3447;
        $l3448:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1808_93465;
    org$pandalanguage$pandac$Variable* v3470;
    org$pandalanguage$pandac$IRNode* base3474;
    org$pandalanguage$pandac$FieldDecl* field3476;
    panda$core$String* baseRef3478;
    org$pandalanguage$pandac$IRNode* value3487;
    panda$core$Int64 id3489;
    panda$core$String* result3491;
    org$pandalanguage$pandac$IRNode* value3495;
    org$pandalanguage$pandac$ChoiceEntry* ce3497;
    panda$core$Int64 field3499;
    org$pandalanguage$pandac$FieldDecl* data3501;
    org$pandalanguage$pandac$IRNode* fieldRef3505;
    panda$core$String* base3510;
    panda$core$Int64 size3512;
    panda$core$Int64 offset3514;
    panda$core$String* result3516;
    {
        $match$1808_93465 = p_lvalue;
        panda$core$Bit $tmp3466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1808_93465->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp3466.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3467 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3468 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3467, p_out);
            return $tmp3468;
        }
        }
        else {
        panda$core$Bit $tmp3469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1808_93465->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3469.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3471 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1808_93465->$data + 16));
            v3470 = *$tmp3471;
            panda$core$String* $tmp3472 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3470);
            return $tmp3472;
        }
        }
        else {
        panda$core$Bit $tmp3473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1808_93465->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp3473.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3475 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1808_93465->$data + 24));
            base3474 = *$tmp3475;
            org$pandalanguage$pandac$FieldDecl** $tmp3477 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1808_93465->$data + 32));
            field3476 = *$tmp3477;
            panda$core$String* $tmp3479 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3474, p_out);
            baseRef3478 = $tmp3479;
            panda$core$String* $tmp3480 = panda$core$String$convert$R$panda$core$String(baseRef3478);
            panda$core$String* $tmp3482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3480, &$s3481);
            panda$core$String* $tmp3483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3482, ((org$pandalanguage$pandac$Symbol*) field3476)->name);
            panda$core$String* $tmp3485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3483, &$s3484);
            return $tmp3485;
        }
        }
        else {
        panda$core$Bit $tmp3486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1808_93465->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3486.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3488 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1808_93465->$data + 0));
            value3487 = *$tmp3488;
            panda$core$Int64* $tmp3490 = ((panda$core$Int64*) ((char*) $match$1808_93465->$data + 8));
            id3489 = *$tmp3490;
            panda$core$String* $tmp3492 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value3487, p_out);
            result3491 = $tmp3492;
            panda$core$Int64$wrapper* $tmp3493;
            $tmp3493 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp3493->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3493->refCount = 1;
            $tmp3493->value = id3489;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp3493), ((panda$core$Object*) result3491));
            return result3491;
        }
        }
        else {
        panda$core$Bit $tmp3494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1808_93465->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp3494.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3496 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1808_93465->$data + 16));
            value3495 = *$tmp3496;
            org$pandalanguage$pandac$ChoiceEntry** $tmp3498 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1808_93465->$data + 24));
            ce3497 = *$tmp3498;
            panda$core$Int64* $tmp3500 = ((panda$core$Int64*) ((char*) $match$1808_93465->$data + 32));
            field3499 = *$tmp3500;
            panda$core$Object* $tmp3502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce3497->owner->fields, ((panda$core$Int64) { 1 }));
            data3501 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3502);
            panda$core$Bit $tmp3504 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) data3501)->name, &$s3503);
            PANDA_ASSERT($tmp3504.value);
            org$pandalanguage$pandac$IRNode* $tmp3506 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
            $tmp3506->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3506->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp3509 = (($fn3508) p_lvalue->$class->vtable[3])(p_lvalue);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp3506, ((panda$core$Int64) { 15 }), $tmp3509, data3501->type, value3495, data3501);
            fieldRef3505 = $tmp3506;
            panda$core$String* $tmp3511 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, fieldRef3505, p_out);
            base3510 = $tmp3511;
            panda$core$Int64 $tmp3513 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3497->owner);
            size3512 = $tmp3513;
            panda$core$Int64 $tmp3515 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3497, field3499);
            offset3514 = $tmp3515;
            panda$core$String* $tmp3517 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result3516 = $tmp3517;
            org$pandalanguage$pandac$Type* $tmp3519 = (($fn3518) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3520 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3519);
            panda$core$String* $tmp3521 = panda$core$String$convert$R$panda$core$String($tmp3520);
            panda$core$String* $tmp3523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3521, &$s3522);
            panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3523, result3516);
            panda$core$String* $tmp3526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3524, &$s3525);
            org$pandalanguage$pandac$Type* $tmp3528 = (($fn3527) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3529 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3528);
            panda$core$String* $tmp3530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3526, $tmp3529);
            panda$core$String* $tmp3532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3530, &$s3531);
            panda$core$String* $tmp3534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3533, base3510);
            panda$core$String* $tmp3536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3534, &$s3535);
            panda$core$Int64$wrapper* $tmp3537;
            $tmp3537 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp3537->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3537->refCount = 1;
            $tmp3537->value = offset3514;
            panda$core$String* $tmp3538 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3536, ((panda$core$Object*) $tmp3537));
            panda$core$String* $tmp3540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3538, &$s3539);
            panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3532, $tmp3540);
            (($fn3542) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3541);
            panda$core$String* $tmp3544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3543, result3516);
            panda$core$String* $tmp3546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3544, &$s3545);
            return $tmp3546;
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
    panda$core$String* $tmp3547 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$String* $tmp3548 = panda$core$String$convert$R$panda$core$String($tmp3547);
    panda$core$String* $tmp3550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3548, &$s3549);
    panda$core$String* $tmp3551 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$String* $tmp3552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3550, $tmp3551);
    panda$core$String* $tmp3554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3552, &$s3553);
    (($fn3555) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3554);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit) { p_value != NULL }).value) {
    {
        panda$core$String* $tmp3557 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
        panda$core$String* $tmp3558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3556, $tmp3557);
        panda$core$String* $tmp3560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3558, &$s3559);
        (($fn3561) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3560);
    }
    }
    else {
    {
        (($fn3563) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3562);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3567;
    panda$core$Int64 $tmp3564 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3565 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3564, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3565.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3566 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3566);
    }
    }
    panda$core$Int64 $tmp3568 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3567, ((panda$core$Int64) { 0 }), $tmp3568, ((panda$core$Bit) { false }));
    int64_t $tmp3570 = $tmp3567.min.value;
    panda$core$Int64 i3569 = { $tmp3570 };
    int64_t $tmp3572 = $tmp3567.max.value;
    bool $tmp3573 = $tmp3567.inclusive.value;
    if ($tmp3573) goto $l3580; else goto $l3581;
    $l3580:;
    if ($tmp3570 <= $tmp3572) goto $l3574; else goto $l3576;
    $l3581:;
    if ($tmp3570 < $tmp3572) goto $l3574; else goto $l3576;
    $l3574:;
    {
        panda$core$Object* $tmp3582 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3569);
        panda$core$Bit $tmp3586;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3582)->loopLabel != NULL }).value) goto $l3583; else goto $l3584;
        $l3583:;
        panda$core$Bit $tmp3587 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3582)->loopLabel, p_name);
        $tmp3586 = $tmp3587;
        goto $l3585;
        $l3584:;
        $tmp3586 = ((panda$core$Bit) { false });
        goto $l3585;
        $l3585:;
        if ($tmp3586.value) {
        {
            panda$core$Object* $tmp3588 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3569);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3588);
        }
        }
    }
    $l3577:;
    int64_t $tmp3590 = $tmp3572 - i3569.value;
    if ($tmp3573) goto $l3591; else goto $l3592;
    $l3591:;
    if ((uint64_t) $tmp3590 >= 1) goto $l3589; else goto $l3576;
    $l3592:;
    if ((uint64_t) $tmp3590 > 1) goto $l3589; else goto $l3576;
    $l3589:;
    i3569.value += 1;
    goto $l3574;
    $l3576:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3595;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3596 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3595 = $tmp3596;
    panda$core$String* $tmp3598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3597, desc3595->breakLabel);
    panda$core$String* $tmp3600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3598, &$s3599);
    (($fn3601) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3600);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc3595));
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3602;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3603 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3602 = $tmp3603;
    panda$core$String* $tmp3605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3604, desc3602->continueLabel);
    panda$core$String* $tmp3607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3605, &$s3606);
    (($fn3608) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3607);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc3602));
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_message, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3610 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3609, $tmp3610);
    panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3611, &$s3612);
    (($fn3614) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3613);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* w$Iter3622;
    org$pandalanguage$pandac$IRNode* w3634;
    org$pandalanguage$pandac$IRNode* $match$1882_133639;
    panda$collections$ImmutableArray* tests3641;
    panda$collections$ImmutableArray* statements3643;
    panda$collections$Iterator* test$Iter3645;
    org$pandalanguage$pandac$IRNode* test3657;
    panda$core$String* $tmp3616 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    panda$core$String* $tmp3617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3615, $tmp3616);
    panda$core$String* $tmp3619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3617, &$s3618);
    (($fn3620) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3619);
    panda$core$Int64 $tmp3621 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3621;
    {
        ITable* $tmp3623 = ((panda$collections$Iterable*) p_whens)->$class->itable;
        while ($tmp3623->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3623 = $tmp3623->next;
        }
        $fn3625 $tmp3624 = $tmp3623->methods[0];
        panda$collections$Iterator* $tmp3626 = $tmp3624(((panda$collections$Iterable*) p_whens));
        w$Iter3622 = $tmp3626;
        $l3627:;
        ITable* $tmp3629 = w$Iter3622->$class->itable;
        while ($tmp3629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3629 = $tmp3629->next;
        }
        $fn3631 $tmp3630 = $tmp3629->methods[0];
        panda$core$Bit $tmp3632 = $tmp3630(w$Iter3622);
        panda$core$Bit $tmp3633 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3632);
        if (!$tmp3633.value) goto $l3628;
        {
            ITable* $tmp3635 = w$Iter3622->$class->itable;
            while ($tmp3635->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3635 = $tmp3635->next;
            }
            $fn3637 $tmp3636 = $tmp3635->methods[1];
            panda$core$Object* $tmp3638 = $tmp3636(w$Iter3622);
            w3634 = ((org$pandalanguage$pandac$IRNode*) $tmp3638);
            {
                $match$1882_133639 = w3634;
                panda$core$Bit $tmp3640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1882_133639->$rawValue, ((panda$core$Int64) { 43 }));
                if ($tmp3640.value) {
                {
                    panda$collections$ImmutableArray** $tmp3642 = ((panda$collections$ImmutableArray**) ((char*) $match$1882_133639->$data + 16));
                    tests3641 = *$tmp3642;
                    panda$collections$ImmutableArray** $tmp3644 = ((panda$collections$ImmutableArray**) ((char*) $match$1882_133639->$data + 24));
                    statements3643 = *$tmp3644;
                    {
                        ITable* $tmp3646 = ((panda$collections$Iterable*) tests3641)->$class->itable;
                        while ($tmp3646->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3646 = $tmp3646->next;
                        }
                        $fn3648 $tmp3647 = $tmp3646->methods[0];
                        panda$collections$Iterator* $tmp3649 = $tmp3647(((panda$collections$Iterable*) tests3641));
                        test$Iter3645 = $tmp3649;
                        $l3650:;
                        ITable* $tmp3652 = test$Iter3645->$class->itable;
                        while ($tmp3652->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3652 = $tmp3652->next;
                        }
                        $fn3654 $tmp3653 = $tmp3652->methods[0];
                        panda$core$Bit $tmp3655 = $tmp3653(test$Iter3645);
                        panda$core$Bit $tmp3656 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3655);
                        if (!$tmp3656.value) goto $l3651;
                        {
                            ITable* $tmp3658 = test$Iter3645->$class->itable;
                            while ($tmp3658->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3658 = $tmp3658->next;
                            }
                            $fn3660 $tmp3659 = $tmp3658->methods[1];
                            panda$core$Object* $tmp3661 = $tmp3659(test$Iter3645);
                            test3657 = ((org$pandalanguage$pandac$IRNode*) $tmp3661);
                            panda$core$UInt64 $tmp3663 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, test3657);
                            panda$core$UInt64$wrapper* $tmp3664;
                            $tmp3664 = (panda$core$UInt64$wrapper*) pandaZAlloc(24);
                            $tmp3664->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
                            $tmp3664->refCount = 1;
                            $tmp3664->value = $tmp3663;
                            panda$core$String* $tmp3665 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3662, ((panda$core$Object*) $tmp3664));
                            panda$core$String* $tmp3667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3665, &$s3666);
                            (($fn3668) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3667);
                        }
                        goto $l3650;
                        $l3651:;
                    }
                    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3643, p_out);
                    (($fn3670) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3669);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l3627;
        $l3628:;
    }
    if (((panda$core$Bit) { p_other != NULL }).value) {
    {
        (($fn3672) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3671);
        org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_other, p_out);
    }
    }
    panda$core$Int64 $tmp3673 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3673;
    (($fn3675) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3674);
}
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_clear, panda$io$IndentedOutputStream* p_out) {
}
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { true }), p_out);
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1918_93676;
    org$pandalanguage$pandac$IRNode* left3678;
    org$pandalanguage$pandac$parser$Token$Kind op3680;
    org$pandalanguage$pandac$IRNode* right3682;
    panda$collections$ImmutableArray* statements3685;
    org$pandalanguage$pandac$Type* target3688;
    org$pandalanguage$pandac$MethodRef* mref3690;
    panda$collections$ImmutableArray* args3692;
    org$pandalanguage$pandac$IRNode* base3695;
    org$pandalanguage$pandac$IRNode* stmt3697;
    org$pandalanguage$pandac$IRNode* test3701;
    panda$collections$ImmutableArray* ifTrue3703;
    org$pandalanguage$pandac$IRNode* ifFalse3705;
    panda$core$String* label3708;
    org$pandalanguage$pandac$IRNode* target3710;
    org$pandalanguage$pandac$IRNode* list3712;
    panda$collections$ImmutableArray* statements3714;
    panda$core$String* label3717;
    org$pandalanguage$pandac$IRNode* test3719;
    panda$collections$ImmutableArray* statements3721;
    panda$core$String* label3724;
    panda$collections$ImmutableArray* statements3726;
    org$pandalanguage$pandac$IRNode* test3728;
    panda$core$String* label3731;
    panda$collections$ImmutableArray* statements3733;
    org$pandalanguage$pandac$Variable$Kind kind3736;
    panda$collections$ImmutableArray* decls3738;
    org$pandalanguage$pandac$IRNode* value3741;
    panda$core$String* label3744;
    panda$core$String* label3747;
    org$pandalanguage$pandac$IRNode* test3750;
    org$pandalanguage$pandac$IRNode* msg3752;
    org$pandalanguage$pandac$IRNode* value3755;
    panda$collections$ImmutableArray* whens3757;
    panda$collections$ImmutableArray* other3759;
    {
        $match$1918_93676 = p_stmt;
        panda$core$Bit $tmp3677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp3677.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3679 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 24));
            left3678 = *$tmp3679;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3681 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1918_93676->$data + 32));
            op3680 = *$tmp3681;
            org$pandalanguage$pandac$IRNode** $tmp3683 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 40));
            right3682 = *$tmp3683;
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, left3678, right3682, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp3684.value) {
        {
            panda$collections$ImmutableArray** $tmp3686 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93676->$data + 16));
            statements3685 = *$tmp3686;
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3685, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp3687.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3689 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1918_93676->$data + 16));
            target3688 = *$tmp3689;
            org$pandalanguage$pandac$MethodRef** $tmp3691 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1918_93676->$data + 24));
            mref3690 = *$tmp3691;
            panda$collections$ImmutableArray** $tmp3693 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93676->$data + 32));
            args3692 = *$tmp3693;
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, target3688, mref3690, args3692, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp3694.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3696 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 0));
            base3695 = *$tmp3696;
            org$pandalanguage$pandac$IRNode** $tmp3698 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 8));
            stmt3697 = *$tmp3698;
            panda$core$String* $tmp3699 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3695, stmt3697, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp3700.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3702 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 16));
            test3701 = *$tmp3702;
            panda$collections$ImmutableArray** $tmp3704 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93676->$data + 24));
            ifTrue3703 = *$tmp3704;
            org$pandalanguage$pandac$IRNode** $tmp3706 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 32));
            ifFalse3705 = *$tmp3706;
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3701, ifTrue3703, ifFalse3705, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp3707.value) {
        {
            panda$core$String** $tmp3709 = ((panda$core$String**) ((char*) $match$1918_93676->$data + 16));
            label3708 = *$tmp3709;
            org$pandalanguage$pandac$IRNode** $tmp3711 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 24));
            target3710 = *$tmp3711;
            org$pandalanguage$pandac$IRNode** $tmp3713 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 32));
            list3712 = *$tmp3713;
            panda$collections$ImmutableArray** $tmp3715 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93676->$data + 40));
            statements3714 = *$tmp3715;
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3708, target3710, list3712, statements3714, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp3716.value) {
        {
            panda$core$String** $tmp3718 = ((panda$core$String**) ((char*) $match$1918_93676->$data + 16));
            label3717 = *$tmp3718;
            org$pandalanguage$pandac$IRNode** $tmp3720 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 24));
            test3719 = *$tmp3720;
            panda$collections$ImmutableArray** $tmp3722 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93676->$data + 32));
            statements3721 = *$tmp3722;
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3717, test3719, statements3721, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp3723.value) {
        {
            panda$core$String** $tmp3725 = ((panda$core$String**) ((char*) $match$1918_93676->$data + 16));
            label3724 = *$tmp3725;
            panda$collections$ImmutableArray** $tmp3727 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93676->$data + 24));
            statements3726 = *$tmp3727;
            org$pandalanguage$pandac$IRNode** $tmp3729 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 32));
            test3728 = *$tmp3729;
            org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, label3724, statements3726, test3728, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp3730.value) {
        {
            panda$core$String** $tmp3732 = ((panda$core$String**) ((char*) $match$1918_93676->$data + 16));
            label3731 = *$tmp3732;
            panda$collections$ImmutableArray** $tmp3734 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93676->$data + 24));
            statements3733 = *$tmp3734;
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3731, statements3733, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp3735.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp3737 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$1918_93676->$data + 16));
            kind3736 = *$tmp3737;
            panda$collections$ImmutableArray** $tmp3739 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93676->$data + 24));
            decls3738 = *$tmp3739;
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, kind3736, decls3738, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp3740.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3742 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 16));
            value3741 = *$tmp3742;
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, value3741, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp3743.value) {
        {
            panda$core$String** $tmp3745 = ((panda$core$String**) ((char*) $match$1918_93676->$data + 16));
            label3744 = *$tmp3745;
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3744, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3746.value) {
        {
            panda$core$String** $tmp3748 = ((panda$core$String**) ((char*) $match$1918_93676->$data + 16));
            label3747 = *$tmp3748;
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3747, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp3749.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3751 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 16));
            test3750 = *$tmp3751;
            org$pandalanguage$pandac$IRNode** $tmp3753 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 24));
            msg3752 = *$tmp3753;
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3750, msg3752, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1918_93676->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp3754.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3756 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1918_93676->$data + 16));
            value3755 = *$tmp3756;
            panda$collections$ImmutableArray** $tmp3758 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93676->$data + 24));
            whens3757 = *$tmp3758;
            panda$collections$ImmutableArray** $tmp3760 = ((panda$collections$ImmutableArray**) ((char*) $match$1918_93676->$data + 32));
            other3759 = *$tmp3760;
            org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(self, value3755, whens3757, other3759, p_out);
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
    panda$core$String* result3761;
    panda$core$String* tmp633771;
    panda$core$String* tmp643774;
    org$pandalanguage$pandac$Type* $tmp3762 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3763 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3762);
    result3761 = $tmp3763;
    panda$core$Bit $tmp3765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp3764 = $tmp3765.value;
    if (!$tmp3764) goto $l3766;
    panda$core$Bit $tmp3768 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3761, &$s3767);
    panda$core$Bit $tmp3769 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3768);
    $tmp3764 = $tmp3769.value;
    $l3766:;
    panda$core$Bit $tmp3770 = { $tmp3764 };
    if ($tmp3770.value) {
    {
        {
            panda$core$String* $tmp3773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3761, &$s3772);
            tmp633771 = $tmp3773;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3761));
            return tmp633771;
        }
    }
    }
    {
        tmp643774 = result3761;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3761));
        return tmp643774;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    panda$core$String* separator3786;
    panda$collections$Iterator* p$Iter3796;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3808;
    panda$io$MemoryOutputStream* bodyBuffer3829;
    panda$io$IndentedOutputStream* indentedBody3832;
    panda$collections$Iterator* f$Iter3836;
    org$pandalanguage$pandac$FieldDecl* f3849;
    panda$collections$Iterator* s$Iter3867;
    org$pandalanguage$pandac$IRNode* s3879;
    panda$core$Object* $tmp3775 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3775)) == ((panda$core$Object*) p_m->owner) }).value);
    {
        self->currentMethod = p_m;
    }
    {
        self->currentBlock = &$s3776;
    }
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3777 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3778 = panda$core$String$convert$R$panda$core$String($tmp3777);
    panda$core$String* $tmp3780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3778, &$s3779);
    panda$core$String* $tmp3781 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3780, $tmp3781);
    panda$core$String* $tmp3784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3782, &$s3783);
    (($fn3785) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3784);
    separator3786 = &$s3787;
    panda$core$Bit $tmp3788 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3789 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3788);
    if ($tmp3789.value) {
    {
        panda$core$String* $tmp3790 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3791 = panda$core$String$convert$R$panda$core$String($tmp3790);
        panda$core$String* $tmp3793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3791, &$s3792);
        (($fn3794) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3793);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3786));
            separator3786 = &$s3795;
        }
    }
    }
    {
        ITable* $tmp3797 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3797->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3797 = $tmp3797->next;
        }
        $fn3799 $tmp3798 = $tmp3797->methods[0];
        panda$collections$Iterator* $tmp3800 = $tmp3798(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3796 = $tmp3800;
        $l3801:;
        ITable* $tmp3803 = p$Iter3796->$class->itable;
        while ($tmp3803->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3803 = $tmp3803->next;
        }
        $fn3805 $tmp3804 = $tmp3803->methods[0];
        panda$core$Bit $tmp3806 = $tmp3804(p$Iter3796);
        panda$core$Bit $tmp3807 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3806);
        if (!$tmp3807.value) goto $l3802;
        {
            ITable* $tmp3809 = p$Iter3796->$class->itable;
            while ($tmp3809->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3809 = $tmp3809->next;
            }
            $fn3811 $tmp3810 = $tmp3809->methods[1];
            panda$core$Object* $tmp3812 = $tmp3810(p$Iter3796);
            p3808 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3812);
            panda$core$String* $tmp3813 = panda$core$String$convert$R$panda$core$String(separator3786);
            panda$core$String* $tmp3815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3813, &$s3814);
            panda$core$String* $tmp3816 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3808->type);
            panda$core$String* $tmp3817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3815, $tmp3816);
            panda$core$String* $tmp3819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3817, &$s3818);
            panda$core$String* $tmp3820 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3808->name);
            panda$core$String* $tmp3821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3819, $tmp3820);
            panda$core$String* $tmp3823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3821, &$s3822);
            (($fn3824) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3823);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3786));
                separator3786 = &$s3825;
            }
        }
        goto $l3801;
        $l3802:;
    }
    (($fn3827) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3826);
    panda$core$Int64 $tmp3828 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3828;
    panda$io$MemoryOutputStream* $tmp3830 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp3830->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3830->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3830);
    bodyBuffer3829 = $tmp3830;
    panda$io$IndentedOutputStream* $tmp3833 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp3833->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3833->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3833, ((panda$io$OutputStream*) bodyBuffer3829));
    indentedBody3832 = $tmp3833;
    panda$core$Bit $tmp3835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp3835.value) {
    {
        {
            panda$collections$ListView* $tmp3837 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, p_m->owner);
            ITable* $tmp3838 = ((panda$collections$Iterable*) $tmp3837)->$class->itable;
            while ($tmp3838->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3838 = $tmp3838->next;
            }
            $fn3840 $tmp3839 = $tmp3838->methods[0];
            panda$collections$Iterator* $tmp3841 = $tmp3839(((panda$collections$Iterable*) $tmp3837));
            f$Iter3836 = $tmp3841;
            $l3842:;
            ITable* $tmp3844 = f$Iter3836->$class->itable;
            while ($tmp3844->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3844 = $tmp3844->next;
            }
            $fn3846 $tmp3845 = $tmp3844->methods[0];
            panda$core$Bit $tmp3847 = $tmp3845(f$Iter3836);
            panda$core$Bit $tmp3848 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3847);
            if (!$tmp3848.value) goto $l3843;
            {
                ITable* $tmp3850 = f$Iter3836->$class->itable;
                while ($tmp3850->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3850 = $tmp3850->next;
                }
                $fn3852 $tmp3851 = $tmp3850->methods[1];
                panda$core$Object* $tmp3853 = $tmp3851(f$Iter3836);
                f3849 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3853);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f3849);
                panda$core$Bit $tmp3855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f3849->fieldKind.$rawValue, ((panda$core$Int64) { 0 }));
                bool $tmp3854 = $tmp3855.value;
                if (!$tmp3854) goto $l3856;
                panda$core$Bit $tmp3857 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->compiler, f3849->type);
                $tmp3854 = $tmp3857.value;
                $l3856:;
                panda$core$Bit $tmp3858 = { $tmp3854 };
                if ($tmp3858.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3859 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
                    $tmp3859->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3859->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode* $tmp3861 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
                    $tmp3861->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3861->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3863 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3861, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp3863);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp3859, ((panda$core$Int64) { 15 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f3849->type, $tmp3861, f3849);
                    org$pandalanguage$pandac$IRNode* $tmp3864 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
                    $tmp3864->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3864->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3866 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(f3849->type);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3864, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp3866);
                    org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, $tmp3859, $tmp3864, indentedBody3832);
                }
                }
            }
            goto $l3842;
            $l3843:;
        }
    }
    }
    {
        ITable* $tmp3868 = ((panda$collections$Iterable*) p_body)->$class->itable;
        while ($tmp3868->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3868 = $tmp3868->next;
        }
        $fn3870 $tmp3869 = $tmp3868->methods[0];
        panda$collections$Iterator* $tmp3871 = $tmp3869(((panda$collections$Iterable*) p_body));
        s$Iter3867 = $tmp3871;
        $l3872:;
        ITable* $tmp3874 = s$Iter3867->$class->itable;
        while ($tmp3874->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3874 = $tmp3874->next;
        }
        $fn3876 $tmp3875 = $tmp3874->methods[0];
        panda$core$Bit $tmp3877 = $tmp3875(s$Iter3867);
        panda$core$Bit $tmp3878 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3877);
        if (!$tmp3878.value) goto $l3873;
        {
            ITable* $tmp3880 = s$Iter3867->$class->itable;
            while ($tmp3880->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3880 = $tmp3880->next;
            }
            $fn3882 $tmp3881 = $tmp3880->methods[1];
            panda$core$Object* $tmp3883 = $tmp3881(s$Iter3867);
            s3879 = ((org$pandalanguage$pandac$IRNode*) $tmp3883);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3879, indentedBody3832);
        }
        goto $l3872;
        $l3873:;
    }
    panda$core$String* $tmp3884 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3885) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3884);
    panda$core$String* $tmp3886 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3829);
    (($fn3887) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3886);
    panda$core$Int64 $tmp3888 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3888;
    (($fn3890) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3889);
    {
        self->currentMethod = NULL;
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indentedBody3832));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3786));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bodyBuffer3829));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3891;
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
    panda$io$File* $tmp3893 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3892);
    path3891 = $tmp3893;
    panda$io$File* $tmp3894 = panda$io$File$parent$R$panda$io$File$Q(path3891);
    panda$io$File$createDirectories($tmp3894);
    {
        panda$io$IndentedOutputStream* $tmp3895 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
        $tmp3895->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
        $tmp3895->refCount.value = 1;
        panda$io$OutputStream* $tmp3897 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3891);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3895, $tmp3897);
        self->out = $tmp3895;
    }
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp3898 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3899 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3899.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp3900 = org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path3891));
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    {
        self->currentClass = NULL;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp3901 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3902) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3901);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3903 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3904) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3903);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3905 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3906) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3905);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3907 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3908) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3907);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3909 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3910) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3909);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3911) self->out->out->$class->vtable[1])(self->out->out);
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

