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
#include "org/pandalanguage/pandac/HCodeGenerator.h"
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
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef void (*$fn68)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn123)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn141)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn168)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn174)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn180)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn215)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn221)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn227)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn318)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn324)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn330)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn359)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn382)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn388)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn394)(panda$collections$Iterator*);
typedef void (*$fn402)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn441)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn447)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn476)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn484)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn529)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn534)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn555)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn572)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn575)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn581)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn605)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn635)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn683)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn688)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn709)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn717)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn720)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn730)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn736)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn742)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn771)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn799)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn805)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn811)(panda$collections$Iterator*);
typedef void (*$fn819)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn922)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn928)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn934)(panda$collections$Iterator*);
typedef void (*$fn942)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn963)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1038)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1056)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1077)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1118)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1131)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1141)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1144)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1156)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1162)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1175)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1185)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1188)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1200)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1246)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1251)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1264)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1290)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1292)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1308)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn1319)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1336)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1378)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1386)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1389)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1396)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1413)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1426)(panda$collections$CollectionView*);
typedef void (*$fn1448)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1599)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1619)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1677)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1682)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1712)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1719)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1730)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1734)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1740)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1746)(panda$collections$Iterator*);
typedef void (*$fn1754)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1757)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1790)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1796)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1812)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1822)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1833)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1837)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1839)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1847)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1860)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2006)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2057)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2079)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2096)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2100)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2140)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2145)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2151)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2157)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2165)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn2172)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2177)(panda$collections$CollectionView*);
typedef void (*$fn2188)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2203)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2208)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2227)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2232)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2283)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2285)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2298)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2307)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2318)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2326)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2331)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2344)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2469)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2474)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2480)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2486)(panda$collections$Iterator*);
typedef void (*$fn2490)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2510)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2517)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2540)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2551)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2610)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2615)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2648)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2658)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2663)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2667)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2673)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2679)(panda$collections$Iterator*);
typedef void (*$fn2681)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2682)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2685)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2692)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2694)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2696)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2698)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2699)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2702)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2706)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2714)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2730)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2737)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2758)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2772)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2794)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2839)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2853)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2867)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2884)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2900)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2915)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2932)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2938)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2943)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2945)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2948)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2952)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2960)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2964)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2980)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2987)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3008)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3022)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3034)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3042)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3049)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3061)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3071)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3114)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3126)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3142)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3156)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3170)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3186)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3200)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3216)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3233)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3248)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3264)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3282)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3302)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3317)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3333)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3352)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3371)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3380)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3385)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3387)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3390)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3393)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3411)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3416)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3418)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3445)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3447)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3470)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3480)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3484)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3490)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3496)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn3547)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3557)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3566)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3581)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3594)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3600)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3640)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3647)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3653)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3659)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3664)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3670)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3676)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3687)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3693)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3699)(panda$collections$Iterator*);
typedef void (*$fn3707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3709)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3711)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3714)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3824)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3833)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3838)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3844)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3850)(panda$collections$Iterator*);
typedef void (*$fn3863)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3866)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3879)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3885)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3891)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3909)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3915)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3921)(panda$collections$Iterator*);
typedef void (*$fn3924)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3926)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3929)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3941)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3943)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3945)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3947)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3949)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3950)(panda$io$OutputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, -2051020738728542693, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x28", 2, 14382, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
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
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x73\x65\x6c\x66", 5, 14792042467, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6d", 12, -5595348649711353309, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2a", 9, 1496394141948660748, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x73\x65\x6c\x66\x2d\x3e\x76\x61\x6c\x75\x65", 12, 3684417363826496863, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s1034 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20", 4, 137658487, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20", 4, 137372859, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s1363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s1371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 14, 9153752889249827899, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d", 7, 157293860332681, NULL };
static panda$core$String $s1514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, 2191018519584705024, NULL };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s1799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 12, -1785576568693804538, NULL };
static panda$core$String $s1809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x63\x6c\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 27, 7283889564528102738, NULL };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x20\x3d\x20\x31\x3b", 15, -7616502316629902533, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s1908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 14, 9153752889249827899, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 32, -2435628749655888173, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x2e\x76\x61\x6c\x75\x65\x20\x3d\x20\x31\x3b", 21, 5666803292027080506, NULL };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -5089590097621792313, NULL };
static panda$core$String $s2135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 2848555729212071077, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x73\x65\x6c\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s2211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s2243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d\x20\x3d\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x46\x72\x65\x65\x28", 10, -5790438204225352665, NULL };
static panda$core$String $s2549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s2693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x69\x6e\x2e\x76\x61\x6c\x75\x65\x3b", 11, -3956212002962864875, NULL };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x61\x78\x2e\x76\x61\x6c\x75\x65\x3b", 11, -4041768404061004273, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s2882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s2889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20\x31\x3b", 12, -4476855678279854640, NULL };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s3000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x61\x72\x74\x2e\x76\x61\x6c\x75\x65\x3b", 13, 3588086193908855763, NULL };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s3020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s3026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x65\x6e\x64\x2e\x76\x61\x6c\x75\x65\x3b", 11, 5794120589201096528, NULL };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x65\x70\x2e\x76\x61\x6c\x75\x65\x3b", 12, -1565217378717073995, NULL };
static panda$core$String $s3064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s3088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x30\x3b", 5, 13904243334, NULL };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s3246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s3253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2d\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s3315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x2d", 5, 13904537533, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x2d", 4, 137665772, NULL };
static panda$core$String $s3361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7b", 14, 1197661341919403142, NULL };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x6d\x73\x65\x74\x28\x26", 8, 22623213602606430, NULL };
static panda$core$String $s3474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x30\x2c\x20\x73\x69\x7a\x65\x6f\x66\x28", 12, 4086987682289124441, NULL };
static panda$core$String $s3478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s3561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s3564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s3570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20", 3, 1462916, NULL };
static panda$core$String $s3572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x63\x68\x61\x72\x2a\x29\x20", 9, 1531222690101128410, NULL };
static panda$core$String $s3574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s3578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s3636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x41\x4e\x44\x41\x5f\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s3654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s3701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s3708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x3b", 6, 2103477946177, NULL };
static panda$core$String $s3710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6c\x74\x3a", 8, 21658216358330300, NULL };
static panda$core$String $s3713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s3834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s3861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s3928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$File* p_outDir) {
    self->compiler = NULL;
    self->currentClass = NULL;
    self->extraEffects = NULL;
    self->currentBlock = NULL;
    self->currentMethod = NULL;
    panda$io$MemoryOutputStream* $tmp2 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp2->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp2->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp2);
    self->strings = $tmp2;
    panda$collections$Set* $tmp4 = (panda$collections$Set*) pandaZAlloc(24);
    $tmp4->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp4->refCount.value = 1;
    panda$collections$Set$init($tmp4);
    self->imports = $tmp4;
    self->currentClass = NULL;
    panda$collections$Array* $tmp6 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp6->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp6->refCount.value = 1;
    panda$collections$Array$init($tmp6);
    self->extraEffects = $tmp6;
    panda$io$MemoryOutputStream* $tmp8 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp8->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp8->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp8);
    self->declarations = $tmp8;
    panda$io$MemoryOutputStream* $tmp10 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp10->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp10->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp10);
    self->types = $tmp10;
    panda$io$MemoryOutputStream* $tmp12 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp12->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp12->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp12);
    self->methodsBuffer = $tmp12;
    panda$io$IndentedOutputStream* $tmp14 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp14->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp14->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp14, ((panda$io$OutputStream*) self->methodsBuffer));
    self->methods = $tmp14;
    panda$io$MemoryOutputStream* $tmp16 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp16->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp16->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp16);
    self->methodHeaderBuffer = $tmp16;
    panda$io$IndentedOutputStream* $tmp18 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp18->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp18->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp18, ((panda$io$OutputStream*) self->methodHeaderBuffer));
    self->methodHeader = $tmp18;
    panda$io$MemoryOutputStream* $tmp20 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp20->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp20->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp20);
    self->wrapperShimsBuffer = $tmp20;
    panda$io$IndentedOutputStream* $tmp22 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp22->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp22->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp22, ((panda$io$OutputStream*) self->wrapperShimsBuffer));
    self->wrapperShims = $tmp22;
    panda$io$MemoryOutputStream* $tmp24 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp24->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp24->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp24);
    self->shimsBuffer = $tmp24;
    panda$io$IndentedOutputStream* $tmp26 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp26->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp26->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp26, ((panda$io$OutputStream*) self->shimsBuffer));
    self->shims = $tmp26;
    panda$collections$Set* $tmp28 = (panda$collections$Set*) pandaZAlloc(24);
    $tmp28->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp28->refCount.value = 1;
    panda$collections$Set$init($tmp28);
    self->declared = $tmp28;
    panda$collections$Set* $tmp30 = (panda$collections$Set*) pandaZAlloc(24);
    $tmp30->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp30->refCount.value = 1;
    panda$collections$Set$init($tmp30);
    self->writtenTypes = $tmp30;
    panda$collections$Set* $tmp32 = (panda$collections$Set*) pandaZAlloc(24);
    $tmp32->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp32->refCount.value = 1;
    panda$collections$Set$init($tmp32);
    self->writtenWrappers = $tmp32;
    panda$collections$HashMap* $tmp34 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp34->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp34->refCount.value = 1;
    panda$collections$HashMap$init($tmp34);
    self->classConstants = $tmp34;
    panda$collections$IdentityMap* $tmp36 = (panda$collections$IdentityMap*) pandaZAlloc(56);
    $tmp36->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp36->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp36);
    self->variableNames = $tmp36;
    panda$collections$Stack* $tmp38 = (panda$collections$Stack*) pandaZAlloc(24);
    $tmp38->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp38->refCount.value = 1;
    panda$collections$Stack$init($tmp38);
    self->loopDescriptors = $tmp38;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap* $tmp40 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp40->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp40->refCount.value = 1;
    panda$collections$HashMap$init($tmp40);
    self->reusedValues = $tmp40;
    panda$collections$IdentityMap* $tmp42 = (panda$collections$IdentityMap*) pandaZAlloc(56);
    $tmp42->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp42->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp42);
    self->methodShims = $tmp42;
    panda$collections$Stack* $tmp44 = (panda$collections$Stack*) pandaZAlloc(24);
    $tmp44->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp44->refCount.value = 1;
    panda$collections$Stack$init($tmp44);
    self->inlineContext = $tmp44;
    panda$collections$IdentityMap* $tmp46 = (panda$collections$IdentityMap*) pandaZAlloc(56);
    $tmp46->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp46->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp46);
    self->currentlyInlining = $tmp46;
    {
        self->outDir = p_outDir;
    }
    {
        panda$io$IndentedOutputStream* $tmp48 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
        $tmp48->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
        $tmp48->refCount.value = 1;
        panda$io$MemoryOutputStream* $tmp50 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
        $tmp50->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
        $tmp50->refCount.value = 1;
        panda$io$MemoryOutputStream$init($tmp50);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp48, ((panda$io$OutputStream*) $tmp50));
        self->out = $tmp48;
    }
    {
        org$pandalanguage$pandac$HCodeGenerator* $tmp52 = (org$pandalanguage$pandac$HCodeGenerator*) pandaZAlloc(129);
        $tmp52->$class = (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class;
        $tmp52->refCount.value = 1;
        org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp52, p_outDir);
        self->hCodeGen = $tmp52;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp54 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->hCodeGen, p_s);
    return $tmp54;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $tmp55 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->hCodeGen, p_m);
    return $tmp55;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp56 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->hCodeGen, p_t);
    return $tmp56;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    return ((panda$core$Bit) { ((panda$core$Object*) p_cl) != ((panda$core$Object*) self->currentClass) });
}
void org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* includePath59;
    panda$core$Bit $tmp58 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s57);
    if ($tmp58.value) {
    {
        return;
    }
    }
    panda$core$String* $tmp61 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self->hCodeGen, p_cl, &$s60);
    includePath59 = $tmp61;
    panda$core$Bit $tmp62 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath59));
    panda$core$Bit $tmp63 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp62);
    if ($tmp63.value) {
    {
        panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s64, includePath59);
        panda$core$String* $tmp67 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp65, &$s66);
        (($fn68) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp67);
        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath59));
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath59));
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl70;
    panda$core$String* result78;
    panda$core$MutableString* code84;
    panda$core$String* separator94;
    panda$core$Range$LTpanda$core$Int64$GT $tmp96;
    panda$core$String* tmp1124;
    panda$core$Bit $tmp69 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    if ($tmp69.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp71 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
        cl70 = $tmp71;
        PANDA_ASSERT(((panda$core$Bit) { cl70 != NULL }).value);
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl70);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl70));
    }
    }
    panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp72 = $tmp73.value;
    if ($tmp72) goto $l74;
    panda$core$Bit $tmp75 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 24 }));
    $tmp72 = $tmp75.value;
    $l74:;
    panda$core$Bit $tmp76 = { $tmp72 };
    if ($tmp76.value) {
    {
        panda$core$Int64 $tmp77 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp77;
        panda$core$Int64$wrapper* $tmp80;
        $tmp80 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp80->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp80->refCount = 1;
        $tmp80->value = self->varCount;
        panda$core$String* $tmp81 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s79, ((panda$core$Object*) $tmp80));
        panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp81, &$s82);
        result78 = $tmp83;
        panda$core$MutableString* $tmp85 = (panda$core$MutableString*) pandaZAlloc(48);
        $tmp85->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp85->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp85, &$s87);
        code84 = $tmp85;
        panda$core$Int64 $tmp88 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp89 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp88, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp90 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp89);
        panda$core$String* $tmp91 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp90));
        panda$core$MutableString$append$panda$core$String(code84, $tmp91);
        panda$core$MutableString$append$panda$core$String(code84, &$s92);
        panda$core$MutableString$append$panda$core$String(code84, result78);
        panda$core$MutableString$append$panda$core$String(code84, &$s93);
        separator94 = &$s95;
        panda$core$Int64 $tmp97 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp98 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp97, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp96, ((panda$core$Int64) { 0 }), $tmp98, ((panda$core$Bit) { false }));
        int64_t $tmp100 = $tmp96.min.value;
        panda$core$Int64 i99 = { $tmp100 };
        int64_t $tmp102 = $tmp96.max.value;
        bool $tmp103 = $tmp96.inclusive.value;
        if ($tmp103) goto $l110; else goto $l111;
        $l110:;
        if ($tmp100 <= $tmp102) goto $l104; else goto $l106;
        $l111:;
        if ($tmp100 < $tmp102) goto $l104; else goto $l106;
        $l104:;
        {
            panda$core$MutableString$append$panda$core$String(code84, separator94);
            panda$core$Object* $tmp112 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i99);
            panda$core$String* $tmp113 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp112));
            panda$core$MutableString$append$panda$core$String(code84, $tmp113);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator94));
                separator94 = &$s114;
            }
        }
        $l107:;
        int64_t $tmp116 = $tmp102 - i99.value;
        if ($tmp103) goto $l117; else goto $l118;
        $l117:;
        if ((uint64_t) $tmp116 >= 1) goto $l115; else goto $l106;
        $l118:;
        if ((uint64_t) $tmp116 > 1) goto $l115; else goto $l106;
        $l115:;
        i99.value += 1;
        goto $l104;
        $l106:;
        panda$core$MutableString$append$panda$core$String(code84, &$s121);
        panda$core$String* $tmp122 = panda$core$MutableString$finish$R$panda$core$String(code84);
        (($fn123) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp122);
        {
            tmp1124 = result78;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator94));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result78));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code84));
            }
            return tmp1124;
        }
    }
    }
    panda$core$String* $tmp125 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    return $tmp125;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    {
        self->compiler = p_compiler;
    }
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp126 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp126;
    panda$core$Int64$wrapper* $tmp128;
    $tmp128 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp128->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp128->refCount = 1;
    $tmp128->value = self->varCount;
    panda$core$String* $tmp129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s127, ((panda$core$Object*) $tmp128));
    panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp129, &$s130);
    return $tmp131;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp132 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp132;
    panda$core$Int64$wrapper* $tmp134;
    $tmp134 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp134->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp134->refCount = 1;
    $tmp134->value = self->varCount;
    panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s133, ((panda$core$Object*) $tmp134));
    panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp135, &$s136);
    return $tmp137;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp138 = panda$core$String$convert$R$panda$core$String(p_label);
    panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp138, &$s139);
    (($fn141) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp140);
    {
        self->currentBlock = p_label;
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl153;
    panda$core$Int64 tmp2162;
    panda$core$Int64 result163;
    panda$collections$Iterator* f$Iter164;
    org$pandalanguage$pandac$FieldDecl* f177;
    panda$core$Int64 size187;
    panda$core$Int64 align189;
    panda$core$Int64 tmp3199;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp142 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp142.value) {
    {
        panda$core$Bit $tmp144 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s143);
        if ($tmp144.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp146 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s145);
        if ($tmp146.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp148 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s147);
        if ($tmp148.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp150 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s149);
        PANDA_ASSERT($tmp150.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp151 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp152 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp151);
    if ($tmp152.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp154 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl153 = $tmp154;
    PANDA_ASSERT(((panda$core$Bit) { cl153 != NULL }).value);
    panda$core$Bit $tmp156 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl153);
    panda$core$Bit $tmp157 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp156);
    bool $tmp155 = $tmp157.value;
    if ($tmp155) goto $l158;
    panda$core$Bit $tmp160 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl153)->name, &$s159);
    $tmp155 = $tmp160.value;
    $l158:;
    panda$core$Bit $tmp161 = { $tmp155 };
    if ($tmp161.value) {
    {
        {
            tmp2162 = ((panda$core$Int64) { 8 });
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl153));
            return tmp2162;
        }
    }
    }
    result163 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp165 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl153);
        ITable* $tmp166 = ((panda$collections$Iterable*) $tmp165)->$class->itable;
        while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp166 = $tmp166->next;
        }
        $fn168 $tmp167 = $tmp166->methods[0];
        panda$collections$Iterator* $tmp169 = $tmp167(((panda$collections$Iterable*) $tmp165));
        f$Iter164 = $tmp169;
        $l170:;
        ITable* $tmp172 = f$Iter164->$class->itable;
        while ($tmp172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp172 = $tmp172->next;
        }
        $fn174 $tmp173 = $tmp172->methods[0];
        panda$core$Bit $tmp175 = $tmp173(f$Iter164);
        panda$core$Bit $tmp176 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp175);
        if (!$tmp176.value) goto $l171;
        {
            ITable* $tmp178 = f$Iter164->$class->itable;
            while ($tmp178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp178 = $tmp178->next;
            }
            $fn180 $tmp179 = $tmp178->methods[1];
            panda$core$Object* $tmp181 = $tmp179(f$Iter164);
            f177 = ((org$pandalanguage$pandac$FieldDecl*) $tmp181);
            panda$core$Bit $tmp182 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f177->annotations);
            if ($tmp182.value) {
            {
                goto $l170;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f177);
            org$pandalanguage$pandac$Type* $tmp183 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp184 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f177->type, $tmp183);
            if ($tmp184.value) {
            {
                panda$core$Int64 $tmp185 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl153);
                panda$core$Int64 $tmp186 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result163, $tmp185);
                result163 = $tmp186;
            }
            }
            else {
            {
                panda$core$Int64 $tmp188 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f177->type);
                size187 = $tmp188;
                panda$core$Int64 $tmp190 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result163, size187);
                align189 = $tmp190;
                panda$core$Bit $tmp191 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align189, ((panda$core$Int64) { 0 }));
                if ($tmp191.value) {
                {
                    panda$core$Int64 $tmp192 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size187, align189);
                    panda$core$Int64 $tmp193 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result163, $tmp192);
                    result163 = $tmp193;
                }
                }
                panda$core$Int64 $tmp194 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result163, size187);
                panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp194, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp195.value);
                panda$core$Int64 $tmp196 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result163, size187);
                result163 = $tmp196;
            }
            }
        }
        goto $l170;
        $l171:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
    }
    panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp197.value) {
    {
        panda$core$Int64 $tmp198 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result163, ((panda$core$Int64) { 1 }));
        result163 = $tmp198;
    }
    }
    {
        tmp3199 = result163;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl153));
        return tmp3199;
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp200 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp201 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp200, ((panda$core$Int64) { 8 }));
    return $tmp201;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl202;
    panda$core$Int64 result208;
    panda$collections$Iterator* f$Iter211;
    org$pandalanguage$pandac$FieldDecl* f224;
    panda$core$Int64 size233;
    panda$core$Int64 align235;
    panda$core$Int64 tmp4245;
    org$pandalanguage$pandac$ClassDecl* $tmp203 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl202 = $tmp203;
    bool $tmp204 = ((panda$core$Bit) { cl202 != NULL }).value;
    if (!$tmp204) goto $l205;
    panda$core$Bit $tmp206 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl202);
    $tmp204 = $tmp206.value;
    $l205:;
    panda$core$Bit $tmp207 = { $tmp204 };
    PANDA_ASSERT($tmp207.value);
    org$pandalanguage$pandac$Type* $tmp209 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp210 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp209);
    result208 = $tmp210;
    {
        panda$collections$ListView* $tmp212 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl202);
        ITable* $tmp213 = ((panda$collections$Iterable*) $tmp212)->$class->itable;
        while ($tmp213->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp213 = $tmp213->next;
        }
        $fn215 $tmp214 = $tmp213->methods[0];
        panda$collections$Iterator* $tmp216 = $tmp214(((panda$collections$Iterable*) $tmp212));
        f$Iter211 = $tmp216;
        $l217:;
        ITable* $tmp219 = f$Iter211->$class->itable;
        while ($tmp219->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp219 = $tmp219->next;
        }
        $fn221 $tmp220 = $tmp219->methods[0];
        panda$core$Bit $tmp222 = $tmp220(f$Iter211);
        panda$core$Bit $tmp223 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp222);
        if (!$tmp223.value) goto $l218;
        {
            ITable* $tmp225 = f$Iter211->$class->itable;
            while ($tmp225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp225 = $tmp225->next;
            }
            $fn227 $tmp226 = $tmp225->methods[1];
            panda$core$Object* $tmp228 = $tmp226(f$Iter211);
            f224 = ((org$pandalanguage$pandac$FieldDecl*) $tmp228);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f224);
            org$pandalanguage$pandac$Type* $tmp229 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp230 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f224->type, $tmp229);
            if ($tmp230.value) {
            {
                panda$core$Int64 $tmp231 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl202);
                panda$core$Int64 $tmp232 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result208, $tmp231);
                result208 = $tmp232;
            }
            }
            else {
            {
                panda$core$Int64 $tmp234 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f224->type);
                size233 = $tmp234;
                panda$core$Int64 $tmp236 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result208, size233);
                align235 = $tmp236;
                panda$core$Bit $tmp237 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align235, ((panda$core$Int64) { 0 }));
                if ($tmp237.value) {
                {
                    panda$core$Int64 $tmp238 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size233, align235);
                    panda$core$Int64 $tmp239 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result208, $tmp238);
                    result208 = $tmp239;
                }
                }
                panda$core$Int64 $tmp240 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result208, size233);
                panda$core$Bit $tmp241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp240, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp241.value);
                panda$core$Int64 $tmp242 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result208, size233);
                result208 = $tmp242;
            }
            }
        }
        goto $l217;
        $l218:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
    }
    panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp243.value) {
    {
        panda$core$Int64 $tmp244 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result208, ((panda$core$Int64) { 1 }));
        result208 = $tmp244;
    }
    }
    {
        tmp4245 = result208;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl202));
        return tmp4245;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp246 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp246.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp247 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp247;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp248.value) {
    {
        panda$core$Object* $tmp249 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp250 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp249));
        return $tmp250;
    }
    }
    panda$core$String* $tmp251 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp252 = panda$core$String$convert$R$panda$core$String($tmp251);
    panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp252, &$s253);
    return $tmp254;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp255 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp255, &$s256);
    return $tmp257;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType258;
    panda$core$MutableString* result260;
    panda$core$Char8 $tmp267;
    panda$core$Char8 $tmp275;
    panda$core$Range$LTpanda$core$Int64$GT $tmp276;
    panda$core$String* tmp5302;
    org$pandalanguage$pandac$Type* $tmp259 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType258 = $tmp259;
    panda$core$MutableString* $tmp261 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp261->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp261->refCount.value = 1;
    panda$core$MutableString$init($tmp261);
    result260 = $tmp261;
    panda$core$Int64 $tmp263 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType258->subtypes);
    panda$core$Int64 $tmp264 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp263, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp265 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType258->subtypes, $tmp264);
    panda$core$String* $tmp266 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp265));
    panda$core$MutableString$append$panda$core$String(result260, $tmp266);
    panda$core$Char8$init$panda$core$UInt8(&$tmp267, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(result260, $tmp267);
    panda$core$Bit $tmp268 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp268.value);
    panda$core$String* $tmp269 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp270 = panda$core$String$convert$R$panda$core$String($tmp269);
    panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp270, &$s271);
    panda$core$MutableString$append$panda$core$String(result260, $tmp272);
    panda$core$Bit $tmp273 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp273.value) {
    {
        panda$core$MutableString$append$panda$core$String(result260, &$s274);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp275, ((panda$core$UInt8) { 42 }));
    panda$core$MutableString$append$panda$core$Char8(result260, $tmp275);
    panda$core$Int64 $tmp277 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType258->subtypes);
    panda$core$Int64 $tmp278 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp277, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp276, ((panda$core$Int64) { 0 }), $tmp278, ((panda$core$Bit) { false }));
    int64_t $tmp280 = $tmp276.min.value;
    panda$core$Int64 i279 = { $tmp280 };
    int64_t $tmp282 = $tmp276.max.value;
    bool $tmp283 = $tmp276.inclusive.value;
    if ($tmp283) goto $l290; else goto $l291;
    $l290:;
    if ($tmp280 <= $tmp282) goto $l284; else goto $l286;
    $l291:;
    if ($tmp280 < $tmp282) goto $l284; else goto $l286;
    $l284:;
    {
        panda$core$MutableString$append$panda$core$String(result260, &$s292);
        panda$core$Object* $tmp293 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType258->subtypes, i279);
        panda$core$String* $tmp294 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp293));
        panda$core$MutableString$append$panda$core$String(result260, $tmp294);
    }
    $l287:;
    int64_t $tmp296 = $tmp282 - i279.value;
    if ($tmp283) goto $l297; else goto $l298;
    $l297:;
    if ((uint64_t) $tmp296 >= 1) goto $l295; else goto $l286;
    $l298:;
    if ((uint64_t) $tmp296 > 1) goto $l295; else goto $l286;
    $l295:;
    i279.value += 1;
    goto $l284;
    $l286:;
    panda$core$MutableString$append$panda$core$String(result260, &$s301);
    {
        panda$core$String* $tmp303 = panda$core$MutableString$finish$R$panda$core$String(result260);
        tmp5302 = $tmp303;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result260));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inheritedType258));
        }
        return tmp5302;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp304.value);
    panda$core$Object* $tmp305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp306 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp305));
    panda$core$String* $tmp307 = panda$core$String$convert$R$panda$core$String($tmp306);
    panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp307, &$s308);
    return $tmp309;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces310;
    panda$core$String* previous313;
    panda$collections$Iterator* intfType$Iter315;
    org$pandalanguage$pandac$Type* intfType327;
    org$pandalanguage$pandac$ClassDecl* intf332;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC334;
    panda$collections$ListView* methods336;
    panda$core$String* name338;
    panda$core$MutableString* result347;
    panda$core$String* separator377;
    panda$collections$Iterator* m$Iter379;
    org$pandalanguage$pandac$MethodDecl* m391;
    panda$core$String* tmp6407;
    org$pandalanguage$pandac$Type* $tmp311 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp312 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp311);
    interfaces310 = $tmp312;
    previous313 = &$s314;
    {
        ITable* $tmp316 = ((panda$collections$Iterable*) interfaces310)->$class->itable;
        while ($tmp316->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp316 = $tmp316->next;
        }
        $fn318 $tmp317 = $tmp316->methods[0];
        panda$collections$Iterator* $tmp319 = $tmp317(((panda$collections$Iterable*) interfaces310));
        intfType$Iter315 = $tmp319;
        $l320:;
        ITable* $tmp322 = intfType$Iter315->$class->itable;
        while ($tmp322->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp322 = $tmp322->next;
        }
        $fn324 $tmp323 = $tmp322->methods[0];
        panda$core$Bit $tmp325 = $tmp323(intfType$Iter315);
        panda$core$Bit $tmp326 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp325);
        if (!$tmp326.value) goto $l321;
        {
            ITable* $tmp328 = intfType$Iter315->$class->itable;
            while ($tmp328->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp328 = $tmp328->next;
            }
            $fn330 $tmp329 = $tmp328->methods[1];
            panda$core$Object* $tmp331 = $tmp329(intfType$Iter315);
            intfType327 = ((org$pandalanguage$pandac$Type*) $tmp331);
            org$pandalanguage$pandac$ClassDecl* $tmp333 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType327);
            intf332 = $tmp333;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp335 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf332);
            intfCC334 = $tmp335;
            panda$collections$ListView* $tmp337 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType327);
            methods336 = $tmp337;
            panda$core$String* $tmp339 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp340 = panda$core$String$convert$R$panda$core$String($tmp339);
            panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s341);
            panda$core$String* $tmp343 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf332)->name);
            panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, $tmp343);
            panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp344, &$s345);
            name338 = $tmp346;
            panda$core$MutableString* $tmp348 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp348->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp348->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp351 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp352 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp351);
            panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s350, $tmp352);
            panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp353, &$s354);
            ITable* $tmp357 = ((panda$collections$CollectionView*) methods336)->$class->itable;
            while ($tmp357->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp357 = $tmp357->next;
            }
            $fn359 $tmp358 = $tmp357->methods[0];
            panda$core$Int64 $tmp360 = $tmp358(((panda$collections$CollectionView*) methods336));
            panda$core$Int64$wrapper* $tmp361;
            $tmp361 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp361->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp361->refCount = 1;
            $tmp361->value = $tmp360;
            panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s356, ((panda$core$Object*) $tmp361));
            panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp362, &$s363);
            panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, name338);
            panda$core$String* $tmp367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp365, &$s366);
            panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, $tmp367);
            panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s369, intfCC334->name);
            panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s371);
            panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp372, previous313);
            panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp373, &$s374);
            panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp368, $tmp375);
            panda$core$MutableString$init$panda$core$String($tmp348, $tmp376);
            result347 = $tmp348;
            separator377 = &$s378;
            {
                ITable* $tmp380 = ((panda$collections$Iterable*) methods336)->$class->itable;
                while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp380 = $tmp380->next;
                }
                $fn382 $tmp381 = $tmp380->methods[0];
                panda$collections$Iterator* $tmp383 = $tmp381(((panda$collections$Iterable*) methods336));
                m$Iter379 = $tmp383;
                $l384:;
                ITable* $tmp386 = m$Iter379->$class->itable;
                while ($tmp386->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp386 = $tmp386->next;
                }
                $fn388 $tmp387 = $tmp386->methods[0];
                panda$core$Bit $tmp389 = $tmp387(m$Iter379);
                panda$core$Bit $tmp390 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp389);
                if (!$tmp390.value) goto $l385;
                {
                    ITable* $tmp392 = m$Iter379->$class->itable;
                    while ($tmp392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp392 = $tmp392->next;
                    }
                    $fn394 $tmp393 = $tmp392->methods[1];
                    panda$core$Object* $tmp395 = $tmp393(m$Iter379);
                    m391 = ((org$pandalanguage$pandac$MethodDecl*) $tmp395);
                    panda$core$MutableString$append$panda$core$String(result347, separator377);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator377));
                        separator377 = &$s396;
                    }
                    panda$core$Bit $tmp397 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m391->annotations);
                    if ($tmp397.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result347, &$s398);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp399 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m391);
                        panda$core$MutableString$append$panda$core$String(result347, $tmp399);
                    }
                    }
                }
                goto $l384;
                $l385:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
            }
            panda$core$MutableString$append$panda$core$String(result347, &$s400);
            panda$core$String* $tmp401 = panda$core$MutableString$finish$R$panda$core$String(result347);
            (($fn402) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp401);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous313));
                panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s403, name338);
                panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, &$s405);
                previous313 = $tmp406;
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator377));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods336));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result347));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf332));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name338));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfCC334));
            }
        }
        goto $l320;
        $l321:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
    }
    {
        tmp6407 = previous313;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous313));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) interfaces310));
        }
        return tmp6407;
    }
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer408;
    panda$io$IndentedOutputStream* out411;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found414;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* tmp7416;
    org$pandalanguage$pandac$Type* effectiveReturnType423;
    panda$core$String* resultName427;
    panda$core$MutableString* resultType431;
    panda$core$String* self_t442;
    panda$core$Char8 $tmp448;
    panda$core$Range$LTpanda$core$Int64$GT $tmp449;
    panda$core$String* pType464;
    panda$collections$Array* casts487;
    panda$core$Range$LTpanda$core$Int64$GT $tmp490;
    panda$core$String* p505;
    panda$core$Range$LTpanda$core$Int64$GT $tmp535;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result576;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* tmp8582;
    panda$io$MemoryOutputStream* $tmp409 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp409->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp409->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp409);
    outBuffer408 = $tmp409;
    panda$io$IndentedOutputStream* $tmp412 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp412->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp412->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp412, ((panda$io$OutputStream*) outBuffer408));
    out411 = $tmp412;
    panda$core$Object* $tmp415 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found414 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp415);
    if (((panda$core$Bit) { found414 != NULL }).value) {
    {
        {
            tmp7416 = found414;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found414));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) out411));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outBuffer408));
            }
            return tmp7416;
        }
    }
    }
    panda$core$Bit $tmp417 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp417.value);
    panda$core$Int64 $tmp418 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp419 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp420 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp419, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp418, $tmp420);
    PANDA_ASSERT($tmp421.value);
    panda$core$Bit $tmp422 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp422.value);
    panda$core$Int64 $tmp424 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp425 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp424, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp426 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp425);
    effectiveReturnType423 = ((org$pandalanguage$pandac$Type*) $tmp426);
    panda$core$String* $tmp428 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, &$s429);
    resultName427 = $tmp430;
    panda$core$MutableString* $tmp432 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp432->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp432->refCount.value = 1;
    panda$core$String* $tmp434 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType423);
    panda$core$MutableString$init$panda$core$String($tmp432, $tmp434);
    resultType431 = $tmp432;
    panda$core$String* $tmp435 = panda$core$MutableString$convert$R$panda$core$String(resultType431);
    panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp435, &$s436);
    panda$core$String* $tmp438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp437, resultName427);
    panda$core$String* $tmp440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp438, &$s439);
    (($fn441) ((panda$io$OutputStream*) out411)->$class->vtable[16])(((panda$io$OutputStream*) out411), $tmp440);
    panda$core$String* $tmp443 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t442 = $tmp443;
    panda$core$String* $tmp444 = panda$core$String$convert$R$panda$core$String(self_t442);
    panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp444, &$s445);
    (($fn447) ((panda$io$OutputStream*) out411)->$class->vtable[16])(((panda$io$OutputStream*) out411), $tmp446);
    panda$core$Char8$init$panda$core$UInt8(&$tmp448, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(resultType431, $tmp448);
    panda$core$MutableString$append$panda$core$String(resultType431, self_t442);
    panda$core$Int64 $tmp450 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp449, ((panda$core$Int64) { 0 }), $tmp450, ((panda$core$Bit) { false }));
    int64_t $tmp452 = $tmp449.min.value;
    panda$core$Int64 i451 = { $tmp452 };
    int64_t $tmp454 = $tmp449.max.value;
    bool $tmp455 = $tmp449.inclusive.value;
    if ($tmp455) goto $l462; else goto $l463;
    $l462:;
    if ($tmp452 <= $tmp454) goto $l456; else goto $l458;
    $l463:;
    if ($tmp452 < $tmp454) goto $l456; else goto $l458;
    $l456:;
    {
        panda$core$Object* $tmp465 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i451);
        panda$core$String* $tmp466 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp465));
        pType464 = $tmp466;
        panda$core$MutableString$append$panda$core$String(resultType431, &$s467);
        panda$core$MutableString$append$panda$core$String(resultType431, pType464);
        panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s468, pType464);
        panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp469, &$s470);
        panda$core$Int64$wrapper* $tmp472;
        $tmp472 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp472->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp472->refCount = 1;
        $tmp472->value = i451;
        panda$core$String* $tmp473 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp471, ((panda$core$Object*) $tmp472));
        panda$core$String* $tmp475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp473, &$s474);
        (($fn476) ((panda$io$OutputStream*) out411)->$class->vtable[16])(((panda$io$OutputStream*) out411), $tmp475);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pType464));
    }
    $l459:;
    int64_t $tmp478 = $tmp454 - i451.value;
    if ($tmp455) goto $l479; else goto $l480;
    $l479:;
    if ((uint64_t) $tmp478 >= 1) goto $l477; else goto $l458;
    $l480:;
    if ((uint64_t) $tmp478 > 1) goto $l477; else goto $l458;
    $l477:;
    i451.value += 1;
    goto $l456;
    $l458:;
    (($fn484) ((panda$io$OutputStream*) out411)->$class->vtable[19])(((panda$io$OutputStream*) out411), &$s483);
    panda$core$Int64 $tmp485 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out411->level, ((panda$core$Int64) { 1 }));
    out411->level = $tmp485;
    panda$core$MutableString$append$panda$core$String(resultType431, &$s486);
    panda$collections$Array* $tmp488 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp488->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp488->refCount.value = 1;
    panda$collections$Array$init($tmp488);
    casts487 = $tmp488;
    panda$core$Int64 $tmp491 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp490, ((panda$core$Int64) { 0 }), $tmp491, ((panda$core$Bit) { false }));
    int64_t $tmp493 = $tmp490.min.value;
    panda$core$Int64 i492 = { $tmp493 };
    int64_t $tmp495 = $tmp490.max.value;
    bool $tmp496 = $tmp490.inclusive.value;
    if ($tmp496) goto $l503; else goto $l504;
    $l503:;
    if ($tmp493 <= $tmp495) goto $l497; else goto $l499;
    $l504:;
    if ($tmp493 < $tmp495) goto $l497; else goto $l499;
    $l497:;
    {
        panda$core$Int64$wrapper* $tmp507;
        $tmp507 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp507->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp507->refCount = 1;
        $tmp507->value = i492;
        panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s506, ((panda$core$Object*) $tmp507));
        panda$core$String* $tmp510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp508, &$s509);
        p505 = $tmp510;
        panda$core$Object* $tmp511 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i492);
        panda$core$Object* $tmp512 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i492);
        panda$core$Bit $tmp513 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp511)->type, ((org$pandalanguage$pandac$Type*) $tmp512));
        if ($tmp513.value) {
        {
            panda$core$Object* $tmp514 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i492);
            panda$core$Object* $tmp515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i492);
            panda$core$String* $tmp516 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p505, ((org$pandalanguage$pandac$Type*) $tmp514), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp515)->type, out411);
            panda$collections$Array$add$panda$collections$Array$T(casts487, ((panda$core$Object*) $tmp516));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts487, ((panda$core$Object*) p505));
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p505));
    }
    $l500:;
    int64_t $tmp518 = $tmp495 - i492.value;
    if ($tmp496) goto $l519; else goto $l520;
    $l519:;
    if ((uint64_t) $tmp518 >= 1) goto $l517; else goto $l499;
    $l520:;
    if ((uint64_t) $tmp518 > 1) goto $l517; else goto $l499;
    $l517:;
    i492.value += 1;
    goto $l497;
    $l499:;
    org$pandalanguage$pandac$Type* $tmp523 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp524 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp523);
    if ($tmp524.value) {
    {
        panda$core$String* $tmp525 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp526 = panda$core$String$convert$R$panda$core$String($tmp525);
        panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp526, &$s527);
        (($fn529) ((panda$io$OutputStream*) out411)->$class->vtable[16])(((panda$io$OutputStream*) out411), $tmp528);
    }
    }
    panda$core$String* $tmp530 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp531 = panda$core$String$convert$R$panda$core$String($tmp530);
    panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp531, &$s532);
    (($fn534) ((panda$io$OutputStream*) out411)->$class->vtable[16])(((panda$io$OutputStream*) out411), $tmp533);
    panda$core$Int64 $tmp536 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp535, ((panda$core$Int64) { 0 }), $tmp536, ((panda$core$Bit) { false }));
    int64_t $tmp538 = $tmp535.min.value;
    panda$core$Int64 i537 = { $tmp538 };
    int64_t $tmp540 = $tmp535.max.value;
    bool $tmp541 = $tmp535.inclusive.value;
    if ($tmp541) goto $l548; else goto $l549;
    $l548:;
    if ($tmp538 <= $tmp540) goto $l542; else goto $l544;
    $l549:;
    if ($tmp538 < $tmp540) goto $l542; else goto $l544;
    $l542:;
    {
        panda$core$Object* $tmp551 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts487, i537);
        panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s550, ((panda$core$String*) $tmp551));
        panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp552, &$s553);
        (($fn555) ((panda$io$OutputStream*) out411)->$class->vtable[16])(((panda$io$OutputStream*) out411), $tmp554);
    }
    $l545:;
    int64_t $tmp557 = $tmp540 - i537.value;
    if ($tmp541) goto $l558; else goto $l559;
    $l558:;
    if ((uint64_t) $tmp557 >= 1) goto $l556; else goto $l544;
    $l559:;
    if ((uint64_t) $tmp557 > 1) goto $l556; else goto $l544;
    $l556:;
    i537.value += 1;
    goto $l542;
    $l544:;
    (($fn563) ((panda$io$OutputStream*) out411)->$class->vtable[19])(((panda$io$OutputStream*) out411), &$s562);
    org$pandalanguage$pandac$Type* $tmp564 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp565 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp564);
    if ($tmp565.value) {
    {
        panda$core$String* $tmp568 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s567, p_raw->returnType, effectiveReturnType423, out411);
        panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s566, $tmp568);
        panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, &$s570);
        (($fn572) ((panda$io$OutputStream*) out411)->$class->vtable[19])(((panda$io$OutputStream*) out411), $tmp571);
    }
    }
    panda$core$Int64 $tmp573 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out411->level, ((panda$core$Int64) { 1 }));
    out411->level = $tmp573;
    (($fn575) ((panda$io$OutputStream*) out411)->$class->vtable[19])(((panda$io$OutputStream*) out411), &$s574);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp577 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) pandaZAlloc(32);
    $tmp577->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp577->refCount.value = 1;
    panda$core$String* $tmp579 = panda$core$MutableString$finish$R$panda$core$String(resultType431);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp577, resultName427, $tmp579);
    result576 = $tmp577;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result576));
    panda$core$String* $tmp580 = panda$io$MemoryOutputStream$finish$R$panda$core$String(outBuffer408);
    (($fn581) p_rawOut->$class->vtable[16])(p_rawOut, $tmp580);
    {
        tmp8582 = result576;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found414));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) casts487));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result576));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultName427));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self_t442));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) out411));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) effectiveReturnType423));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outBuffer408));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultType431));
        }
        return tmp8582;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod584;
    panda$core$String* result585;
    panda$core$String* selfType590;
    org$pandalanguage$pandac$Type* actualMethodType606;
    org$pandalanguage$pandac$Type* inheritedMethodType608;
    panda$core$Range$LTpanda$core$Int64$GT $tmp610;
    panda$collections$Array* parameters645;
    panda$core$Range$LTpanda$core$Int64$GT $tmp648;
    panda$collections$Array* children673;
    org$pandalanguage$pandac$Position $tmp678;
    panda$core$Range$LTpanda$core$Int64$GT $tmp689;
    panda$core$String* tmp9721;
    panda$core$Bit $tmp583 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp583.value);
    oldMethod584 = self->currentMethod;
    {
        self->currentMethod = p_m;
    }
    panda$core$String* $tmp586 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp587 = panda$core$String$convert$R$panda$core$String($tmp586);
    panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp587, &$s588);
    result585 = $tmp589;
    panda$core$String* $tmp591 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp592 = panda$core$String$convert$R$panda$core$String($tmp591);
    panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp592, &$s593);
    selfType590 = $tmp594;
    panda$core$String* $tmp595 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp596 = panda$core$String$convert$R$panda$core$String($tmp595);
    panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, &$s597);
    panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, result585);
    panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, &$s600);
    panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp601, selfType590);
    panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp602, &$s603);
    (($fn605) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp604);
    org$pandalanguage$pandac$Type* $tmp607 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType606 = $tmp607;
    org$pandalanguage$pandac$Type* $tmp609 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType608 = $tmp609;
    panda$core$Int64 $tmp611 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp610, ((panda$core$Int64) { 0 }), $tmp611, ((panda$core$Bit) { false }));
    int64_t $tmp613 = $tmp610.min.value;
    panda$core$Int64 i612 = { $tmp613 };
    int64_t $tmp615 = $tmp610.max.value;
    bool $tmp616 = $tmp610.inclusive.value;
    if ($tmp616) goto $l623; else goto $l624;
    $l623:;
    if ($tmp613 <= $tmp615) goto $l617; else goto $l619;
    $l624:;
    if ($tmp613 < $tmp615) goto $l617; else goto $l619;
    $l617:;
    {
        panda$core$Object* $tmp626 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType608->subtypes, i612);
        panda$core$String* $tmp627 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp626));
        panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s625, $tmp627);
        panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s629);
        panda$core$Object* $tmp631 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i612);
        panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp631)->name);
        panda$core$String* $tmp634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp632, &$s633);
        (($fn635) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp634);
    }
    $l620:;
    int64_t $tmp637 = $tmp615 - i612.value;
    if ($tmp616) goto $l638; else goto $l639;
    $l638:;
    if ((uint64_t) $tmp637 >= 1) goto $l636; else goto $l619;
    $l639:;
    if ((uint64_t) $tmp637 > 1) goto $l636; else goto $l619;
    $l636:;
    i612.value += 1;
    goto $l617;
    $l619:;
    (($fn643) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s642);
    panda$core$Int64 $tmp644 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp644;
    panda$collections$Array* $tmp646 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp646->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp646->refCount.value = 1;
    panda$collections$Array$init($tmp646);
    parameters645 = $tmp646;
    panda$core$Int64 $tmp649 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp648, ((panda$core$Int64) { 0 }), $tmp649, ((panda$core$Bit) { false }));
    int64_t $tmp651 = $tmp648.min.value;
    panda$core$Int64 i650 = { $tmp651 };
    int64_t $tmp653 = $tmp648.max.value;
    bool $tmp654 = $tmp648.inclusive.value;
    if ($tmp654) goto $l661; else goto $l662;
    $l661:;
    if ($tmp651 <= $tmp653) goto $l655; else goto $l657;
    $l662:;
    if ($tmp651 < $tmp653) goto $l655; else goto $l657;
    $l655:;
    {
        panda$core$Object* $tmp663 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i650);
        panda$core$Object* $tmp664 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType608->subtypes, i650);
        panda$core$Object* $tmp665 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType606->subtypes, i650);
        panda$core$String* $tmp666 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp663)->name, ((org$pandalanguage$pandac$Type*) $tmp664), ((org$pandalanguage$pandac$Type*) $tmp665), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters645, ((panda$core$Object*) $tmp666));
    }
    $l658:;
    int64_t $tmp668 = $tmp653 - i650.value;
    if ($tmp654) goto $l669; else goto $l670;
    $l669:;
    if ((uint64_t) $tmp668 >= 1) goto $l667; else goto $l657;
    $l670:;
    if ((uint64_t) $tmp668 > 1) goto $l667; else goto $l657;
    $l667:;
    i650.value += 1;
    goto $l655;
    $l657:;
    panda$collections$Array* $tmp674 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp674->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp674->refCount.value = 1;
    panda$collections$Array$init($tmp674);
    children673 = $tmp674;
    org$pandalanguage$pandac$IRNode* $tmp676 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
    $tmp676->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp676->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp678);
    org$pandalanguage$pandac$Type* $tmp679 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp676, ((panda$core$Int64) { 31 }), $tmp678, $tmp679);
    panda$collections$Array$add$panda$collections$Array$T(children673, ((panda$core$Object*) $tmp676));
    org$pandalanguage$pandac$Type* $tmp680 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp681 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp680);
    if ($tmp681.value) {
    {
        (($fn683) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s682);
    }
    }
    panda$core$String* $tmp684 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp685 = panda$core$String$convert$R$panda$core$String($tmp684);
    panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp685, &$s686);
    (($fn688) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp687);
    panda$core$Int64 $tmp690 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp689, ((panda$core$Int64) { 0 }), $tmp690, ((panda$core$Bit) { false }));
    int64_t $tmp692 = $tmp689.min.value;
    panda$core$Int64 i691 = { $tmp692 };
    int64_t $tmp694 = $tmp689.max.value;
    bool $tmp695 = $tmp689.inclusive.value;
    if ($tmp695) goto $l702; else goto $l703;
    $l702:;
    if ($tmp692 <= $tmp694) goto $l696; else goto $l698;
    $l703:;
    if ($tmp692 < $tmp694) goto $l696; else goto $l698;
    $l696:;
    {
        panda$core$Object* $tmp705 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters645, i691);
        panda$core$String* $tmp706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s704, ((panda$core$String*) $tmp705));
        panda$core$String* $tmp708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp706, &$s707);
        (($fn709) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp708);
    }
    $l699:;
    int64_t $tmp711 = $tmp694 - i691.value;
    if ($tmp695) goto $l712; else goto $l713;
    $l712:;
    if ((uint64_t) $tmp711 >= 1) goto $l710; else goto $l698;
    $l713:;
    if ((uint64_t) $tmp711 > 1) goto $l710; else goto $l698;
    $l710:;
    i691.value += 1;
    goto $l696;
    $l698:;
    (($fn717) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s716);
    panda$core$Int64 $tmp718 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp718;
    (($fn720) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s719);
    {
        self->currentMethod = oldMethod584;
    }
    {
        tmp9721 = result585;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inheritedMethodType608));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) selfType590));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result585));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters645));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldMethod584));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children673));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType606));
        }
        return tmp9721;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces722;
    panda$core$String* previous725;
    panda$collections$Iterator* intfType$Iter727;
    org$pandalanguage$pandac$Type* intfType739;
    org$pandalanguage$pandac$ClassDecl* intf744;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC746;
    panda$collections$ListView* methods748;
    panda$core$String* name750;
    panda$core$MutableString* result759;
    panda$core$String* separator794;
    panda$collections$Iterator* m$Iter796;
    org$pandalanguage$pandac$MethodDecl* m808;
    panda$core$String* tmp10824;
    org$pandalanguage$pandac$Type* $tmp723 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp724 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp723);
    interfaces722 = $tmp724;
    previous725 = &$s726;
    {
        ITable* $tmp728 = ((panda$collections$Iterable*) interfaces722)->$class->itable;
        while ($tmp728->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp728 = $tmp728->next;
        }
        $fn730 $tmp729 = $tmp728->methods[0];
        panda$collections$Iterator* $tmp731 = $tmp729(((panda$collections$Iterable*) interfaces722));
        intfType$Iter727 = $tmp731;
        $l732:;
        ITable* $tmp734 = intfType$Iter727->$class->itable;
        while ($tmp734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp734 = $tmp734->next;
        }
        $fn736 $tmp735 = $tmp734->methods[0];
        panda$core$Bit $tmp737 = $tmp735(intfType$Iter727);
        panda$core$Bit $tmp738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp737);
        if (!$tmp738.value) goto $l733;
        {
            ITable* $tmp740 = intfType$Iter727->$class->itable;
            while ($tmp740->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp740 = $tmp740->next;
            }
            $fn742 $tmp741 = $tmp740->methods[1];
            panda$core$Object* $tmp743 = $tmp741(intfType$Iter727);
            intfType739 = ((org$pandalanguage$pandac$Type*) $tmp743);
            org$pandalanguage$pandac$ClassDecl* $tmp745 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType739);
            intf744 = $tmp745;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp747 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf744);
            intfCC746 = $tmp747;
            panda$collections$ListView* $tmp749 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType739);
            methods748 = $tmp749;
            panda$core$String* $tmp751 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp752 = panda$core$String$convert$R$panda$core$String($tmp751);
            panda$core$String* $tmp754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp752, &$s753);
            panda$core$String* $tmp755 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf744)->name);
            panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp754, $tmp755);
            panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp756, &$s757);
            name750 = $tmp758;
            panda$core$MutableString* $tmp760 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp760->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp760->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp763 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp764 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp763);
            panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s762, $tmp764);
            panda$core$String* $tmp767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, &$s766);
            ITable* $tmp769 = ((panda$collections$CollectionView*) methods748)->$class->itable;
            while ($tmp769->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp769 = $tmp769->next;
            }
            $fn771 $tmp770 = $tmp769->methods[0];
            panda$core$Int64 $tmp772 = $tmp770(((panda$collections$CollectionView*) methods748));
            panda$core$Int64$wrapper* $tmp773;
            $tmp773 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp773->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp773->refCount = 1;
            $tmp773->value = $tmp772;
            panda$core$String* $tmp774 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s768, ((panda$core$Object*) $tmp773));
            panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp774, &$s775);
            panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp776, name750);
            panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp777, &$s778);
            panda$core$String* $tmp780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp767, $tmp779);
            org$pandalanguage$pandac$Type* $tmp782 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp783 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp782);
            panda$core$String* $tmp784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s781, $tmp783);
            panda$core$String* $tmp786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp784, &$s785);
            panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp786, intfCC746->name);
            panda$core$String* $tmp789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp787, &$s788);
            panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp789, previous725);
            panda$core$String* $tmp792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp790, &$s791);
            panda$core$String* $tmp793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp780, $tmp792);
            panda$core$MutableString$init$panda$core$String($tmp760, $tmp793);
            result759 = $tmp760;
            separator794 = &$s795;
            {
                ITable* $tmp797 = ((panda$collections$Iterable*) methods748)->$class->itable;
                while ($tmp797->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp797 = $tmp797->next;
                }
                $fn799 $tmp798 = $tmp797->methods[0];
                panda$collections$Iterator* $tmp800 = $tmp798(((panda$collections$Iterable*) methods748));
                m$Iter796 = $tmp800;
                $l801:;
                ITable* $tmp803 = m$Iter796->$class->itable;
                while ($tmp803->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp803 = $tmp803->next;
                }
                $fn805 $tmp804 = $tmp803->methods[0];
                panda$core$Bit $tmp806 = $tmp804(m$Iter796);
                panda$core$Bit $tmp807 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp806);
                if (!$tmp807.value) goto $l802;
                {
                    ITable* $tmp809 = m$Iter796->$class->itable;
                    while ($tmp809->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp809 = $tmp809->next;
                    }
                    $fn811 $tmp810 = $tmp809->methods[1];
                    panda$core$Object* $tmp812 = $tmp810(m$Iter796);
                    m808 = ((org$pandalanguage$pandac$MethodDecl*) $tmp812);
                    panda$core$MutableString$append$panda$core$String(result759, separator794);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator794));
                        separator794 = &$s813;
                    }
                    panda$core$Bit $tmp814 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m808->annotations);
                    if ($tmp814.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result759, &$s815);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp816 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m808, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result759, $tmp816);
                    }
                    }
                }
                goto $l801;
                $l802:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp800));
            }
            panda$core$MutableString$append$panda$core$String(result759, &$s817);
            panda$core$String* $tmp818 = panda$core$MutableString$finish$R$panda$core$String(result759);
            (($fn819) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp818);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous725));
                panda$core$String* $tmp821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s820, name750);
                panda$core$String* $tmp823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp821, &$s822);
                previous725 = $tmp823;
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator794));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods748));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result759));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf744));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfCC746));
            }
        }
        goto $l732;
        $l733:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp731));
    }
    {
        tmp10824 = previous725;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous725));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) interfaces722));
        }
        return tmp10824;
    }
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp825 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp825;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result827;
    org$pandalanguage$pandac$Type* declared828;
    org$pandalanguage$pandac$Type* inherited831;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim834;
    panda$core$String* tmp11838;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp826 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp826.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    memset(&result827, 0, sizeof(result827));
    org$pandalanguage$pandac$Type* $tmp829 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp830 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp829);
    declared828 = $tmp830;
    org$pandalanguage$pandac$Type* $tmp832 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited831 = $tmp832;
    panda$core$Bit $tmp833 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared828, inherited831);
    if ($tmp833.value) {
    {
        org$pandalanguage$pandac$Type* $tmp835 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp836 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp835, ((panda$io$OutputStream*) self->shims));
        shim834 = $tmp836;
        {
            result827 = shim834->name;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) shim834));
    }
    }
    else {
    {
        {
            panda$core$String* $tmp837 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            result827 = $tmp837;
        }
    }
    }
    {
        tmp11838 = result827;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inherited831));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result827));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declared828));
        }
        return tmp11838;
    }
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result839;
    panda$core$String* type841;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp12851;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp13853;
    panda$collections$ListView* vtable854;
    panda$core$String* superPtr864;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC865;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant873;
    panda$core$String* name877;
    panda$core$MutableString* code881;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp885;
    panda$core$String* separator917;
    panda$collections$Iterator* m$Iter919;
    org$pandalanguage$pandac$MethodDecl* m931;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp14944;
    panda$core$Object* $tmp840 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result839 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp840);
    if (((panda$core$Bit) { result839 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        memset(&type841, 0, sizeof(type841));
        panda$core$Bit $tmp842 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp842.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result839));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp843 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaZAlloc(32);
                $tmp843->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
                $tmp843->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp845 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                panda$core$String* $tmp846 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp845)->name);
                panda$core$String* $tmp847 = panda$core$String$convert$R$panda$core$String($tmp846);
                panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp847, &$s848);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp843, $tmp849, &$s850);
                result839 = $tmp843;
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result839));
            {
                panda$core$Object* $tmp852 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
                tmp12851 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp852);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type841));
                {
                    tmp13853 = tmp12851;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result839));
                    return tmp13853;
                }
            }
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp855 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable854 = $tmp855;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result839));
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp856 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaZAlloc(32);
            $tmp856->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp856->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp858 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp859 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp858)->name);
            panda$core$String* $tmp860 = panda$core$String$convert$R$panda$core$String($tmp859);
            panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, &$s861);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp856, $tmp862, &$s863);
            result839 = $tmp856;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result839));
        memset(&superPtr864, 0, sizeof(superPtr864));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp866 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp867 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp866);
            superCC865 = $tmp867;
            {
                panda$core$String* $tmp869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s868, superCC865->name);
                panda$core$String* $tmp871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp869, &$s870);
                superPtr864 = $tmp871;
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCC865));
        }
        }
        else {
        {
            {
                superPtr864 = &$s872;
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp874 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp875 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp874);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp876 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp875);
        clConstant873 = $tmp876;
        panda$core$String* $tmp878 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        name877 = $tmp878;
        panda$core$Bit $tmp880 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(name877, &$s879);
        PANDA_ASSERT($tmp880.value);
        panda$core$MutableString* $tmp882 = (panda$core$MutableString*) pandaZAlloc(48);
        $tmp882->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp882->refCount.value = 1;
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp885, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp886 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(name877, $tmp885);
        panda$core$String* $tmp887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s884, $tmp886);
        panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp887, &$s888);
        panda$core$String* $tmp890 = panda$core$String$convert$R$panda$core$String(result839->name);
        panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp890, &$s891);
        panda$core$String* $tmp893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp892, result839->name);
        panda$core$String* $tmp895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp893, &$s894);
        panda$core$String* $tmp896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp889, $tmp895);
        panda$core$String* $tmp898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s897, clConstant873->name);
        panda$core$String* $tmp900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp898, &$s899);
        panda$core$Int64$wrapper* $tmp901;
        $tmp901 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp901->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp901->refCount = 1;
        $tmp901->value = ((panda$core$Int64) { -999 });
        panda$core$String* $tmp902 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp900, ((panda$core$Object*) $tmp901));
        panda$core$String* $tmp904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp902, &$s903);
        panda$core$String* $tmp905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp896, $tmp904);
        panda$core$String* $tmp906 = panda$core$String$convert$R$panda$core$String(name877);
        panda$core$String* $tmp908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp906, &$s907);
        panda$core$String* $tmp909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp908, superPtr864);
        panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp909, &$s910);
        panda$core$String* $tmp912 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp911, $tmp912);
        panda$core$String* $tmp915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp913, &$s914);
        panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp905, $tmp915);
        panda$core$MutableString$init$panda$core$String($tmp882, $tmp916);
        code881 = $tmp882;
        separator917 = &$s918;
        {
            ITable* $tmp920 = ((panda$collections$Iterable*) vtable854)->$class->itable;
            while ($tmp920->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp920 = $tmp920->next;
            }
            $fn922 $tmp921 = $tmp920->methods[0];
            panda$collections$Iterator* $tmp923 = $tmp921(((panda$collections$Iterable*) vtable854));
            m$Iter919 = $tmp923;
            $l924:;
            ITable* $tmp926 = m$Iter919->$class->itable;
            while ($tmp926->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp926 = $tmp926->next;
            }
            $fn928 $tmp927 = $tmp926->methods[0];
            panda$core$Bit $tmp929 = $tmp927(m$Iter919);
            panda$core$Bit $tmp930 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp929);
            if (!$tmp930.value) goto $l925;
            {
                ITable* $tmp932 = m$Iter919->$class->itable;
                while ($tmp932->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp932 = $tmp932->next;
                }
                $fn934 $tmp933 = $tmp932->methods[1];
                panda$core$Object* $tmp935 = $tmp933(m$Iter919);
                m931 = ((org$pandalanguage$pandac$MethodDecl*) $tmp935);
                panda$core$MutableString$append$panda$core$String(code881, separator917);
                panda$core$Bit $tmp936 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m931->annotations);
                if ($tmp936.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code881, &$s937);
                }
                }
                else {
                {
                    panda$core$String* $tmp938 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m931);
                    panda$core$MutableString$append$panda$core$String(code881, $tmp938);
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator917));
                    separator917 = &$s939;
                }
            }
            goto $l924;
            $l925:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp923));
        }
        panda$core$MutableString$append$panda$core$String(code881, &$s940);
        panda$core$String* $tmp941 = panda$core$MutableString$finish$R$panda$core$String(code881);
        (($fn942) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp941);
        panda$core$Object* $tmp943 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator917));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable854));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type841));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superPtr864));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name877));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code881));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) clConstant873));
        }
    }
    }
    {
        tmp14944 = result839;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result839));
        return tmp14944;
    }
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name945;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result950;
    panda$core$String* type955;
    org$pandalanguage$pandac$ClassDecl* value966;
    panda$collections$ListView* valueVTable969;
    panda$collections$ListView* vtable978;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC980;
    panda$core$String* superCast983;
    panda$core$String* itable988;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant990;
    panda$core$String* name994;
    panda$core$MutableString* code998;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1002;
    panda$core$String* separator1033;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1035;
    org$pandalanguage$pandac$MethodDecl* m1053;
    panda$core$String* methodName1058;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp151078;
    panda$core$String* $tmp946 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp947 = panda$core$String$convert$R$panda$core$String($tmp946);
    panda$core$String* $tmp949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp947, &$s948);
    name945 = $tmp949;
    panda$core$Object* $tmp951 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name945));
    result950 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp951);
    if (((panda$core$Bit) { result950 == NULL }).value) {
    {
        panda$core$Bit $tmp952 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp952.value) {
        {
            org$pandalanguage$pandac$Type* $tmp953 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp954 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp953);
            type955 = &$s956;
            panda$core$String* $tmp957 = panda$core$String$convert$R$panda$core$String(name945);
            panda$core$String* $tmp959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp957, &$s958);
            panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp959, type955);
            panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp960, &$s961);
            (($fn963) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp962);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result950));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp964 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaZAlloc(32);
                $tmp964->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
                $tmp964->refCount.value = 1;
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp964, name945, type955);
                result950 = $tmp964;
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type955));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp967 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp968 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp967);
            value966 = $tmp968;
            panda$collections$ListView* $tmp970 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value966);
            valueVTable969 = $tmp970;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result950));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp971 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaZAlloc(32);
                $tmp971->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
                $tmp971->refCount.value = 1;
                panda$core$String* $tmp973 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$String* $tmp974 = panda$core$String$convert$R$panda$core$String($tmp973);
                panda$core$String* $tmp976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp974, &$s975);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp971, $tmp976, &$s977);
                result950 = $tmp971;
            }
            panda$collections$ListView* $tmp979 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable978 = $tmp979;
            org$pandalanguage$pandac$ClassDecl* $tmp981 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp982 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp981);
            superCC980 = $tmp982;
            panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s984, superCC980->name);
            panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp985, &$s986);
            superCast983 = $tmp987;
            panda$core$String* $tmp989 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable988 = $tmp989;
            org$pandalanguage$pandac$Type* $tmp991 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp992 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp991);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp993 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp992);
            clConstant990 = $tmp993;
            panda$core$String* $tmp995 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            name994 = $tmp995;
            panda$core$Bit $tmp997 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(name994, &$s996);
            PANDA_ASSERT($tmp997.value);
            panda$core$MutableString* $tmp999 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp999->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp999->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1002, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1003 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(name994, $tmp1002);
            panda$core$String* $tmp1004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1001, $tmp1003);
            panda$core$String* $tmp1006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1004, &$s1005);
            panda$core$String* $tmp1007 = panda$core$String$convert$R$panda$core$String(result950->name);
            panda$core$String* $tmp1009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1007, &$s1008);
            panda$core$String* $tmp1010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1009, result950->name);
            panda$core$String* $tmp1012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1010, &$s1011);
            panda$core$String* $tmp1013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1006, $tmp1012);
            panda$core$String* $tmp1015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1014, clConstant990->name);
            panda$core$String* $tmp1017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1015, &$s1016);
            panda$core$Int64$wrapper* $tmp1018;
            $tmp1018 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1018->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1018->refCount = 1;
            $tmp1018->value = ((panda$core$Int64) { -999 });
            panda$core$String* $tmp1019 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1017, ((panda$core$Object*) $tmp1018));
            panda$core$String* $tmp1021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1019, &$s1020);
            panda$core$String* $tmp1022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1013, $tmp1021);
            panda$core$String* $tmp1023 = panda$core$String$convert$R$panda$core$String(name994);
            panda$core$String* $tmp1025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1023, &$s1024);
            panda$core$String* $tmp1026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1025, superCast983);
            panda$core$String* $tmp1028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1026, &$s1027);
            panda$core$String* $tmp1029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1028, itable988);
            panda$core$String* $tmp1031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1029, &$s1030);
            panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1022, $tmp1031);
            panda$core$MutableString$init$panda$core$String($tmp999, $tmp1032);
            code998 = $tmp999;
            separator1033 = &$s1034;
            ITable* $tmp1036 = ((panda$collections$CollectionView*) valueVTable969)->$class->itable;
            while ($tmp1036->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1036 = $tmp1036->next;
            }
            $fn1038 $tmp1037 = $tmp1036->methods[0];
            panda$core$Int64 $tmp1039 = $tmp1037(((panda$collections$CollectionView*) valueVTable969));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1035, ((panda$core$Int64) { 0 }), $tmp1039, ((panda$core$Bit) { false }));
            int64_t $tmp1041 = $tmp1035.min.value;
            panda$core$Int64 i1040 = { $tmp1041 };
            int64_t $tmp1043 = $tmp1035.max.value;
            bool $tmp1044 = $tmp1035.inclusive.value;
            if ($tmp1044) goto $l1051; else goto $l1052;
            $l1051:;
            if ($tmp1041 <= $tmp1043) goto $l1045; else goto $l1047;
            $l1052:;
            if ($tmp1041 < $tmp1043) goto $l1045; else goto $l1047;
            $l1045:;
            {
                ITable* $tmp1054 = vtable978->$class->itable;
                while ($tmp1054->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1054 = $tmp1054->next;
                }
                $fn1056 $tmp1055 = $tmp1054->methods[0];
                panda$core$Object* $tmp1057 = $tmp1055(vtable978, i1040);
                m1053 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1057);
                memset(&methodName1058, 0, sizeof(methodName1058));
                if (((panda$core$Bit) { ((panda$core$Object*) m1053->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    {
                        panda$core$String* $tmp1059 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1053, self->wrapperShims);
                        methodName1058 = $tmp1059;
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp1060 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1053);
                        methodName1058 = $tmp1060;
                    }
                    panda$core$Bit $tmp1061 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1053->owner);
                    if ($tmp1061.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1053);
                    }
                    }
                }
                }
                panda$core$String* $tmp1062 = panda$core$String$convert$R$panda$core$String(separator1033);
                panda$core$String* $tmp1064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1062, &$s1063);
                panda$core$String* $tmp1065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1064, methodName1058);
                panda$core$String* $tmp1067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1065, &$s1066);
                panda$core$MutableString$append$panda$core$String(code998, $tmp1067);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1033));
                    separator1033 = &$s1068;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodName1058));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1053));
                }
            }
            $l1048:;
            int64_t $tmp1070 = $tmp1043 - i1040.value;
            if ($tmp1044) goto $l1071; else goto $l1072;
            $l1071:;
            if ((uint64_t) $tmp1070 >= 1) goto $l1069; else goto $l1047;
            $l1072:;
            if ((uint64_t) $tmp1070 > 1) goto $l1069; else goto $l1047;
            $l1069:;
            i1040.value += 1;
            goto $l1045;
            $l1047:;
            panda$core$MutableString$append$panda$core$String(code998, &$s1075);
            panda$core$String* $tmp1076 = panda$core$MutableString$finish$R$panda$core$String(code998);
            (($fn1077) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1076);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1033));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCast983));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable978));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable988));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCC980));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value966));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable969));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name994));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code998));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) clConstant990));
            }
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name945), ((panda$core$Object*) result950));
    }
    }
    {
        tmp151078 = result950;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result950));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name945));
        }
        return tmp151078;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1084;
    panda$core$String* tmp161094;
    panda$core$Bit $tmp1079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp1079.value) {
    {
        panda$core$String* $tmp1081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1080, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1081, &$s1082);
        return $tmp1083;
    }
    }
    panda$core$Object* $tmp1085 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1084 = ((panda$core$String*) $tmp1085);
    if (((panda$core$Bit) { result1084 == NULL }).value) {
    {
        panda$core$Int64 $tmp1086 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1086;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1084));
            panda$core$String* $tmp1087 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_v)->name);
            panda$core$String* $tmp1089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1087, &$s1088);
            panda$core$Int64$wrapper* $tmp1090;
            $tmp1090 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1090->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1090->refCount = 1;
            $tmp1090->value = self->varCount;
            panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1089, ((panda$core$Object*) $tmp1090));
            panda$core$String* $tmp1093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, &$s1092);
            result1084 = $tmp1093;
        }
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1084));
    }
    }
    {
        tmp161094 = result1084;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1084));
        return tmp161094;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1095 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1095.value);
    panda$core$String* $tmp1096 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1097 = panda$core$String$convert$R$panda$core$String($tmp1096);
    panda$core$String* $tmp1099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1097, &$s1098);
    panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1099, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1100, &$s1101);
    return $tmp1102;
}
org$pandalanguage$pandac$CCodeGenerator$OpClass org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$668_131103;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1105;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1111;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1113;
    {
        $match$668_131103 = p_t->typeKind;
        panda$core$Bit $tmp1104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$668_131103, ((panda$core$Int64) { 12 }));
        if ($tmp1104.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1105, ((panda$core$Int64) { 0 }));
            return $tmp1105;
        }
        }
        else {
        panda$core$Bit $tmp1107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$668_131103, ((panda$core$Int64) { 13 }));
        bool $tmp1106 = $tmp1107.value;
        if ($tmp1106) goto $l1108;
        panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$668_131103, ((panda$core$Int64) { 19 }));
        $tmp1106 = $tmp1109.value;
        $l1108:;
        panda$core$Bit $tmp1110 = { $tmp1106 };
        if ($tmp1110.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1111, ((panda$core$Int64) { 1 }));
            return $tmp1111;
        }
        }
        else {
        panda$core$Bit $tmp1112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$668_131103, ((panda$core$Int64) { 20 }));
        if ($tmp1112.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1113, ((panda$core$Int64) { 2 }));
            return $tmp1113;
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
    panda$core$String* result1114;
    panda$core$String* leftRef1116;
    panda$core$String* falseLabel1132;
    panda$core$String* rightRef1142;
    panda$core$String* tmp171157;
    panda$core$String* $tmp1115 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1114 = $tmp1115;
    panda$core$String* $tmp1117 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1116 = $tmp1117;
    org$pandalanguage$pandac$Type* $tmp1119 = (($fn1118) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1120 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1121 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1119, $tmp1120);
    if ($tmp1121.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1116));
            panda$core$String* $tmp1123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1116, &$s1122);
            leftRef1116 = $tmp1123;
        }
    }
    }
    panda$core$String* $tmp1125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1124, result1114);
    panda$core$String* $tmp1127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1125, &$s1126);
    panda$core$String* $tmp1128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1127, leftRef1116);
    panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1128, &$s1129);
    (($fn1131) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1130);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp1133 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1132 = $tmp1133;
    panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1134, result1114);
    panda$core$String* $tmp1137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1135, &$s1136);
    panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1137, falseLabel1132);
    panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1138, &$s1139);
    (($fn1141) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1140);
    panda$core$String* $tmp1143 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1142 = $tmp1143;
    org$pandalanguage$pandac$Type* $tmp1145 = (($fn1144) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1146 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1147 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1145, $tmp1146);
    if ($tmp1147.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1142));
            panda$core$String* $tmp1149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1142, &$s1148);
            rightRef1142 = $tmp1149;
        }
    }
    }
    panda$core$String* $tmp1150 = panda$core$String$convert$R$panda$core$String(result1114);
    panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1150, &$s1151);
    panda$core$String* $tmp1153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, rightRef1142);
    panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1153, &$s1154);
    (($fn1156) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1155);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1132, p_out);
    {
        tmp171157 = result1114;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1114));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1142));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel1132));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1116));
        }
        return tmp171157;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1158;
    panda$core$String* leftRef1160;
    panda$core$String* trueLabel1176;
    panda$core$String* rightRef1186;
    panda$core$String* tmp181201;
    panda$core$String* $tmp1159 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1158 = $tmp1159;
    panda$core$String* $tmp1161 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1160 = $tmp1161;
    org$pandalanguage$pandac$Type* $tmp1163 = (($fn1162) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1164 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1165 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1163, $tmp1164);
    if ($tmp1165.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1160));
            panda$core$String* $tmp1167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1160, &$s1166);
            leftRef1160 = $tmp1167;
        }
    }
    }
    panda$core$String* $tmp1169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1168, result1158);
    panda$core$String* $tmp1171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1169, &$s1170);
    panda$core$String* $tmp1172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1171, leftRef1160);
    panda$core$String* $tmp1174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1172, &$s1173);
    (($fn1175) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1174);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp1177 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1176 = $tmp1177;
    panda$core$String* $tmp1179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1178, result1158);
    panda$core$String* $tmp1181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1179, &$s1180);
    panda$core$String* $tmp1182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1181, trueLabel1176);
    panda$core$String* $tmp1184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1182, &$s1183);
    (($fn1185) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1184);
    panda$core$String* $tmp1187 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1186 = $tmp1187;
    org$pandalanguage$pandac$Type* $tmp1189 = (($fn1188) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1190 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1191 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1189, $tmp1190);
    if ($tmp1191.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1186));
            panda$core$String* $tmp1193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1186, &$s1192);
            rightRef1186 = $tmp1193;
        }
    }
    }
    panda$core$String* $tmp1194 = panda$core$String$convert$R$panda$core$String(result1158);
    panda$core$String* $tmp1196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1194, &$s1195);
    panda$core$String* $tmp1197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1196, rightRef1186);
    panda$core$String* $tmp1199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1197, &$s1198);
    (($fn1200) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1199);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1176, p_out);
    {
        tmp181201 = result1158;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1158));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1186));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel1176));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1160));
        }
        return tmp181201;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, org$pandalanguage$pandac$parser$Token$Kind p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1202;
    panda$core$Bit logical1203;
    org$pandalanguage$pandac$parser$Token$Kind $match$723_91204;
    panda$core$String* result1243;
    panda$core$String* tmp191265;
    memset(&cOp1202, 0, sizeof(cOp1202));
    logical1203 = ((panda$core$Bit) { false });
    {
        $match$723_91204 = p_op;
        panda$core$Bit $tmp1205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp1205.value) {
        {
            {
                cOp1202 = &$s1206;
            }
        }
        }
        else {
        panda$core$Bit $tmp1207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp1207.value) {
        {
            {
                cOp1202 = &$s1208;
            }
        }
        }
        else {
        panda$core$Bit $tmp1209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp1209.value) {
        {
            {
                cOp1202 = &$s1210;
            }
        }
        }
        else {
        panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp1211.value) {
        {
            {
                cOp1202 = &$s1212;
            }
        }
        }
        else {
        panda$core$Bit $tmp1213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp1213.value) {
        {
            {
                cOp1202 = &$s1214;
            }
        }
        }
        else {
        panda$core$Bit $tmp1215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp1215.value) {
        {
            {
                cOp1202 = &$s1216;
            }
        }
        }
        else {
        panda$core$Bit $tmp1217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp1217.value) {
        {
            {
                cOp1202 = &$s1218;
            }
        }
        }
        else {
        panda$core$Bit $tmp1219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1219.value) {
        {
            {
                cOp1202 = &$s1220;
            }
        }
        }
        else {
        panda$core$Bit $tmp1221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp1221.value) {
        {
            {
                cOp1202 = &$s1222;
            }
        }
        }
        else {
        panda$core$Bit $tmp1223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp1223.value) {
        {
            {
                cOp1202 = &$s1224;
            }
        }
        }
        else {
        panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 70 }));
        bool $tmp1225 = $tmp1226.value;
        if ($tmp1225) goto $l1227;
        panda$core$Bit $tmp1228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1225 = $tmp1228.value;
        $l1227:;
        panda$core$Bit $tmp1229 = { $tmp1225 };
        if ($tmp1229.value) {
        {
            {
                cOp1202 = &$s1230;
            }
        }
        }
        else {
        panda$core$Bit $tmp1231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1231.value) {
        {
            {
                cOp1202 = &$s1232;
            }
            logical1203 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp1233.value) {
        {
            {
                cOp1202 = &$s1234;
            }
            logical1203 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1235.value) {
        {
            {
                cOp1202 = &$s1236;
            }
            logical1203 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1237.value) {
        {
            {
                cOp1202 = &$s1238;
            }
            logical1203 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp1239.value) {
        {
            {
                cOp1202 = &$s1240;
            }
            logical1203 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91204.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp1241.value) {
        {
            logical1203 = ((panda$core$Bit) { true });
            {
                cOp1202 = &$s1242;
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
    panda$core$String* $tmp1244 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1243 = $tmp1244;
    if (logical1203.value) {
    {
        (($fn1246) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1245);
    }
    }
    else {
    {
        panda$core$String* $tmp1247 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1248 = panda$core$String$convert$R$panda$core$String($tmp1247);
        panda$core$String* $tmp1250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1248, &$s1249);
        (($fn1251) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1250);
    }
    }
    panda$core$String* $tmp1252 = panda$core$String$convert$R$panda$core$String(result1243);
    panda$core$String* $tmp1254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1252, &$s1253);
    panda$core$String* $tmp1255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1254, p_leftRef);
    panda$core$String* $tmp1257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1255, &$s1256);
    panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1257, cOp1202);
    panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1258, &$s1259);
    panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1260, p_rightRef);
    panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1261, &$s1262);
    (($fn1264) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1263);
    {
        tmp191265 = result1243;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1243));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1202));
        }
        return tmp191265;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1266;
    panda$core$String* rightRef1268;
    panda$core$String* tmp201270;
    panda$core$String* $tmp1267 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1266 = $tmp1267;
    panda$core$String* $tmp1269 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1268 = $tmp1269;
    {
        panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1271, leftRef1266);
        panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1272, &$s1273);
        panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1274, rightRef1268);
        panda$core$String* $tmp1277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1275, &$s1276);
        tmp201270 = $tmp1277;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1268));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1266));
        }
        return tmp201270;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1278;
    panda$core$String* rightRef1280;
    panda$core$String* tmp211282;
    panda$core$String* $tmp1279 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1278 = $tmp1279;
    panda$core$String* $tmp1281 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1280 = $tmp1281;
    {
        panda$core$String* $tmp1284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1283, leftRef1278);
        panda$core$String* $tmp1286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1284, &$s1285);
        panda$core$String* $tmp1287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1286, rightRef1280);
        panda$core$String* $tmp1289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1287, &$s1288);
        tmp211282 = $tmp1289;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1280));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1278));
        }
        return tmp211282;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$parser$Token$Kind $match$793_91295;
    panda$core$String* leftRef1304;
    panda$core$String* rightRef1306;
    org$pandalanguage$pandac$Type* $tmp1291 = (($fn1290) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1293 = (($fn1292) p_right->$class->vtable[2])(p_right);
    panda$core$Bit $tmp1294 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1291, $tmp1293);
    PANDA_ASSERT($tmp1294.value);
    {
        $match$793_91295 = p_op;
        panda$core$Bit $tmp1296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$793_91295.$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp1296.value) {
        {
            panda$core$String* $tmp1297 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1297;
        }
        }
        else {
        panda$core$Bit $tmp1298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$793_91295.$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp1298.value) {
        {
            panda$core$String* $tmp1299 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1299;
        }
        }
        else {
        panda$core$Bit $tmp1300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$793_91295.$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp1300.value) {
        {
            panda$core$String* $tmp1301 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1301;
        }
        }
        else {
        panda$core$Bit $tmp1302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$793_91295.$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp1302.value) {
        {
            panda$core$String* $tmp1303 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1303;
        }
        }
        else {
        {
            panda$core$String* $tmp1305 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1304 = $tmp1305;
            panda$core$String* $tmp1307 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1306 = $tmp1307;
            org$pandalanguage$pandac$Type* $tmp1309 = (($fn1308) p_left->$class->vtable[2])(p_left);
            panda$core$String* $tmp1310 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1309, leftRef1304, p_op, rightRef1306, p_out);
            return $tmp1310;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1311;
    panda$core$Int64 index1313;
    panda$collections$ListView* vtable1314;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1316;
    panda$core$String* tmp221345;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1312 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1311 = $tmp1312;
    index1313 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1315 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1314 = $tmp1315;
    ITable* $tmp1317 = ((panda$collections$CollectionView*) vtable1314)->$class->itable;
    while ($tmp1317->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1317 = $tmp1317->next;
    }
    $fn1319 $tmp1318 = $tmp1317->methods[0];
    panda$core$Int64 $tmp1320 = $tmp1318(((panda$collections$CollectionView*) vtable1314));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1316, ((panda$core$Int64) { 0 }), $tmp1320, ((panda$core$Bit) { false }));
    int64_t $tmp1322 = $tmp1316.min.value;
    panda$core$Int64 i1321 = { $tmp1322 };
    int64_t $tmp1324 = $tmp1316.max.value;
    bool $tmp1325 = $tmp1316.inclusive.value;
    if ($tmp1325) goto $l1332; else goto $l1333;
    $l1332:;
    if ($tmp1322 <= $tmp1324) goto $l1326; else goto $l1328;
    $l1333:;
    if ($tmp1322 < $tmp1324) goto $l1326; else goto $l1328;
    $l1326:;
    {
        ITable* $tmp1334 = vtable1314->$class->itable;
        while ($tmp1334->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1334 = $tmp1334->next;
        }
        $fn1336 $tmp1335 = $tmp1334->methods[0];
        panda$core$Object* $tmp1337 = $tmp1335(vtable1314, i1321);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1337)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1313 = i1321;
            goto $l1328;
        }
        }
    }
    $l1329:;
    int64_t $tmp1339 = $tmp1324 - i1321.value;
    if ($tmp1325) goto $l1340; else goto $l1341;
    $l1340:;
    if ((uint64_t) $tmp1339 >= 1) goto $l1338; else goto $l1328;
    $l1341:;
    if ((uint64_t) $tmp1339 > 1) goto $l1338; else goto $l1328;
    $l1338:;
    i1321.value += 1;
    goto $l1326;
    $l1328:;
    panda$core$Bit $tmp1344 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1313, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1344.value);
    {
        org$pandalanguage$pandac$Type* $tmp1347 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        panda$core$String* $tmp1348 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1347);
        panda$core$String* $tmp1349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1346, $tmp1348);
        panda$core$String* $tmp1351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1349, &$s1350);
        panda$core$String* $tmp1352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1351, p_target);
        panda$core$String* $tmp1354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1352, &$s1353);
        panda$core$Int64$wrapper* $tmp1355;
        $tmp1355 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp1355->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp1355->refCount = 1;
        $tmp1355->value = index1313;
        panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1354, ((panda$core$Object*) $tmp1355));
        panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1356, &$s1357);
        tmp221345 = $tmp1358;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1314));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1311));
        }
        return tmp221345;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1359;
    panda$core$String* itable1361;
    panda$core$Int64 index1390;
    panda$collections$ListView* vtable1391;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1393;
    panda$core$String* result1430;
    panda$core$String* methodType1432;
    panda$core$String* tmp231449;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1360 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1359 = $tmp1360;
    panda$core$String* $tmp1362 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1361 = $tmp1362;
    panda$core$String* $tmp1364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1363, itable1361);
    panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1364, &$s1365);
    panda$core$String* $tmp1367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, p_target);
    panda$core$String* $tmp1369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1367, &$s1368);
    (($fn1370) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1369);
    panda$core$String* $tmp1372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1371, itable1361);
    panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1372, &$s1373);
    panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1374, cc1359->name);
    panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1375, &$s1376);
    (($fn1378) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1377);
    panda$core$Int64 $tmp1379 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1379;
    panda$core$String* $tmp1380 = panda$core$String$convert$R$panda$core$String(itable1361);
    panda$core$String* $tmp1382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1380, &$s1381);
    panda$core$String* $tmp1383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, itable1361);
    panda$core$String* $tmp1385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1383, &$s1384);
    (($fn1386) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1385);
    panda$core$Int64 $tmp1387 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1387;
    (($fn1389) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1388);
    index1390 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1392 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1391 = $tmp1392;
    ITable* $tmp1394 = ((panda$collections$CollectionView*) vtable1391)->$class->itable;
    while ($tmp1394->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1394 = $tmp1394->next;
    }
    $fn1396 $tmp1395 = $tmp1394->methods[0];
    panda$core$Int64 $tmp1397 = $tmp1395(((panda$collections$CollectionView*) vtable1391));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1393, ((panda$core$Int64) { 0 }), $tmp1397, ((panda$core$Bit) { false }));
    int64_t $tmp1399 = $tmp1393.min.value;
    panda$core$Int64 i1398 = { $tmp1399 };
    int64_t $tmp1401 = $tmp1393.max.value;
    bool $tmp1402 = $tmp1393.inclusive.value;
    if ($tmp1402) goto $l1409; else goto $l1410;
    $l1409:;
    if ($tmp1399 <= $tmp1401) goto $l1403; else goto $l1405;
    $l1410:;
    if ($tmp1399 < $tmp1401) goto $l1403; else goto $l1405;
    $l1403:;
    {
        ITable* $tmp1411 = vtable1391->$class->itable;
        while ($tmp1411->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1411 = $tmp1411->next;
        }
        $fn1413 $tmp1412 = $tmp1411->methods[0];
        panda$core$Object* $tmp1414 = $tmp1412(vtable1391, i1398);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1414)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1390 = i1398;
            goto $l1405;
        }
        }
    }
    $l1406:;
    int64_t $tmp1416 = $tmp1401 - i1398.value;
    if ($tmp1402) goto $l1417; else goto $l1418;
    $l1417:;
    if ((uint64_t) $tmp1416 >= 1) goto $l1415; else goto $l1405;
    $l1418:;
    if ((uint64_t) $tmp1416 > 1) goto $l1415; else goto $l1405;
    $l1415:;
    i1398.value += 1;
    goto $l1403;
    $l1405:;
    org$pandalanguage$pandac$Type* $tmp1421 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1422 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1421);
    panda$collections$ListView* $tmp1423 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1422);
    ITable* $tmp1424 = ((panda$collections$CollectionView*) $tmp1423)->$class->itable;
    while ($tmp1424->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1424 = $tmp1424->next;
    }
    $fn1426 $tmp1425 = $tmp1424->methods[0];
    panda$core$Int64 $tmp1427 = $tmp1425(((panda$collections$CollectionView*) $tmp1423));
    panda$core$Int64 $tmp1428 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1390, $tmp1427);
    index1390 = $tmp1428;
    panda$core$Bit $tmp1429 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1390, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1429.value);
    panda$core$String* $tmp1431 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1430 = $tmp1431;
    org$pandalanguage$pandac$Type* $tmp1433 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1434 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1433);
    methodType1432 = $tmp1434;
    panda$core$String* $tmp1435 = panda$core$String$convert$R$panda$core$String(methodType1432);
    panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1435, &$s1436);
    panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1437, result1430);
    panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1438, &$s1439);
    panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1440, itable1361);
    panda$core$String* $tmp1443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1441, &$s1442);
    panda$core$Int64$wrapper* $tmp1444;
    $tmp1444 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp1444->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1444->refCount = 1;
    $tmp1444->value = index1390;
    panda$core$String* $tmp1445 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1443, ((panda$core$Object*) $tmp1444));
    panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1445, &$s1446);
    (($fn1448) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1447);
    {
        tmp231449 = result1430;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1430));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1391));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable1361));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodType1432));
        }
        return tmp231449;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1451 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1450 = $tmp1451.value;
    if (!$tmp1450) goto $l1452;
    panda$core$Bit $tmp1453 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1450 = $tmp1453.value;
    $l1452:;
    panda$core$Bit $tmp1454 = { $tmp1450 };
    if ($tmp1454.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1455.value) {
        {
            panda$core$String* $tmp1456 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1456;
        }
        }
        else {
        {
            panda$core$String* $tmp1457 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1457;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1458 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1458.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1459 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1459;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$866_91460;
    panda$core$String* count1465;
    panda$core$Int64 elementSize1471;
    panda$core$String* ptr1491;
    panda$core$String* ptr1502;
    panda$core$String* index1505;
    panda$core$String* ptr1518;
    panda$core$String* oldCount1521;
    panda$core$String* newCount1524;
    panda$core$Int64 elementSize1530;
    panda$core$String* ptr1561;
    panda$core$String* offset1564;
    {
        $match$866_91460 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp1462 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91460, &$s1461);
        if ($tmp1462.value) {
        {
            panda$core$Int64 $tmp1463 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1463, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1464.value);
            panda$core$Object* $tmp1466 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1467 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1466), p_out);
            count1465 = $tmp1467;
            org$pandalanguage$pandac$Type* $tmp1468 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1469 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1468->subtypes);
            panda$core$Bit $tmp1470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1469, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1470.value);
            org$pandalanguage$pandac$Type* $tmp1472 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1473 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1472->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1474 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1473));
            elementSize1471 = $tmp1474;
            panda$core$String* $tmp1476 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1475, $tmp1476);
            panda$core$String* $tmp1479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1477, &$s1478);
            panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1479, count1465);
            panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1480, &$s1481);
            panda$core$Int64$wrapper* $tmp1483;
            $tmp1483 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1483->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1483->refCount = 1;
            $tmp1483->value = elementSize1471;
            panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1482, ((panda$core$Object*) $tmp1483));
            panda$core$String* $tmp1486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1484, &$s1485);
            return $tmp1486;
        }
        }
        else {
        panda$core$Bit $tmp1488 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91460, &$s1487);
        if ($tmp1488.value) {
        {
            panda$core$Int64 $tmp1489 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1489, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1490.value);
            panda$core$Object* $tmp1492 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1493 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1492), p_out);
            ptr1491 = $tmp1493;
            panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1494, ptr1491);
            panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1495, &$s1496);
            return $tmp1497;
        }
        }
        else {
        panda$core$Bit $tmp1499 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91460, &$s1498);
        if ($tmp1499.value) {
        {
            panda$core$Int64 $tmp1500 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1500, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1501.value);
            panda$core$Object* $tmp1503 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1504 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1503), p_out);
            ptr1502 = $tmp1504;
            panda$core$Object* $tmp1506 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1507 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1506), p_out);
            index1505 = $tmp1507;
            panda$core$String* $tmp1508 = panda$core$String$convert$R$panda$core$String(ptr1502);
            panda$core$String* $tmp1510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1508, &$s1509);
            panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1510, index1505);
            panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1511, &$s1512);
            return $tmp1513;
        }
        }
        else {
        panda$core$Bit $tmp1515 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91460, &$s1514);
        if ($tmp1515.value) {
        {
            panda$core$Int64 $tmp1516 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1516, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1517.value);
            panda$core$Object* $tmp1519 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1520 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1519), p_out);
            ptr1518 = $tmp1520;
            panda$core$Object* $tmp1522 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1523 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1522), p_out);
            oldCount1521 = $tmp1523;
            panda$core$Object* $tmp1525 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp1526 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1525), p_out);
            newCount1524 = $tmp1526;
            org$pandalanguage$pandac$Type* $tmp1527 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1528 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1527->subtypes);
            panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1528, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1529.value);
            org$pandalanguage$pandac$Type* $tmp1531 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1532 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1531->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1533 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1532));
            elementSize1530 = $tmp1533;
            panda$core$String* $tmp1535 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp1536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1534, $tmp1535);
            panda$core$String* $tmp1538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1536, &$s1537);
            panda$core$String* $tmp1539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1538, ptr1518);
            panda$core$String* $tmp1541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1539, &$s1540);
            panda$core$String* $tmp1542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1541, oldCount1521);
            panda$core$String* $tmp1544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1542, &$s1543);
            panda$core$Int64$wrapper* $tmp1545;
            $tmp1545 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1545->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1545->refCount = 1;
            $tmp1545->value = elementSize1530;
            panda$core$String* $tmp1546 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1544, ((panda$core$Object*) $tmp1545));
            panda$core$String* $tmp1548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1546, &$s1547);
            panda$core$String* $tmp1549 = panda$core$String$convert$R$panda$core$String(newCount1524);
            panda$core$String* $tmp1551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1549, &$s1550);
            panda$core$Int64$wrapper* $tmp1552;
            $tmp1552 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1552->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1552->refCount = 1;
            $tmp1552->value = elementSize1530;
            panda$core$String* $tmp1553 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1551, ((panda$core$Object*) $tmp1552));
            panda$core$String* $tmp1555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1553, &$s1554);
            panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1548, $tmp1555);
            return $tmp1556;
        }
        }
        else {
        panda$core$Bit $tmp1558 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91460, &$s1557);
        if ($tmp1558.value) {
        {
            panda$core$Int64 $tmp1559 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1559, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1560.value);
            panda$core$Object* $tmp1562 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1563 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1562), p_out);
            ptr1561 = $tmp1563;
            panda$core$Object* $tmp1565 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1566 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1565), p_out);
            offset1564 = $tmp1566;
            panda$core$String* $tmp1568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1567, ptr1561);
            panda$core$String* $tmp1570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1568, &$s1569);
            panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1570, offset1564);
            panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1571, &$s1572);
            return $tmp1573;
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
    org$pandalanguage$pandac$MethodDecl* m1574;
    panda$core$String* tmp241577;
    panda$core$String* bit1586;
    panda$core$String* result1590;
    panda$core$String* tmp251600;
    panda$core$String* tmp271601;
    panda$core$String* bit1606;
    panda$core$String* result1610;
    panda$core$String* tmp261620;
    panda$core$String* tmp281621;
    panda$collections$Array* argRefs1622;
    org$pandalanguage$pandac$Type* actualMethodType1626;
    panda$core$String* actualResultType1627;
    panda$core$Bit isSuper1628;
    panda$core$Int64 offset1648;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1653;
    panda$core$String* arg1668;
    panda$core$String* target1693;
    panda$core$String* methodRef1697;
    panda$core$Bit indirect1699;
    panda$core$String* result1701;
    panda$core$String* separator1703;
    panda$core$String* indirectVar1705;
    panda$collections$Iterator* arg$Iter1731;
    panda$core$String* arg1743;
    panda$core$String* tmp291760;
    panda$core$String* tmp301765;
    m1574 = p_mref->value;
    panda$core$Bit $tmp1576 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1574->owner)->name, &$s1575);
    if ($tmp1576.value) {
    {
        {
            panda$core$String* $tmp1578 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, p_t, p_mref, p_args, p_out);
            tmp241577 = $tmp1578;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1574));
            return tmp241577;
        }
    }
    }
    panda$core$Bit $tmp1579 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1574->owner);
    if ($tmp1579.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1574);
    }
    }
    panda$core$Bit $tmp1581 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1574->owner)->name, &$s1580);
    if ($tmp1581.value) {
    {
        panda$core$Bit $tmp1583 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1574)->name, &$s1582);
        if ($tmp1583.value) {
        {
            panda$core$Int64 $tmp1584 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1584, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1585.value);
            panda$core$Object* $tmp1587 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1588 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1589 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1587), ((org$pandalanguage$pandac$IRNode*) $tmp1588), p_out);
            bit1586 = $tmp1589;
            panda$core$String* $tmp1591 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1590 = $tmp1591;
            panda$core$String* $tmp1593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1592, result1590);
            panda$core$String* $tmp1595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1593, &$s1594);
            panda$core$String* $tmp1596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1595, bit1586);
            panda$core$String* $tmp1598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1596, &$s1597);
            (($fn1599) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1598);
            {
                tmp251600 = result1590;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1590));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit1586));
                }
                {
                    tmp271601 = tmp251600;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1574));
                    return tmp271601;
                }
            }
        }
        }
        panda$core$Bit $tmp1603 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1574)->name, &$s1602);
        if ($tmp1603.value) {
        {
            panda$core$Int64 $tmp1604 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1604, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1605.value);
            panda$core$Object* $tmp1607 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1608 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1609 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1607), ((org$pandalanguage$pandac$IRNode*) $tmp1608), p_out);
            bit1606 = $tmp1609;
            panda$core$String* $tmp1611 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1610 = $tmp1611;
            panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1612, result1610);
            panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1613, &$s1614);
            panda$core$String* $tmp1616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1615, bit1606);
            panda$core$String* $tmp1618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1616, &$s1617);
            (($fn1619) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1618);
            {
                tmp261620 = result1610;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1610));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit1606));
                }
                {
                    tmp281621 = tmp261620;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1574));
                    return tmp281621;
                }
            }
        }
        }
    }
    }
    panda$collections$Array* $tmp1623 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1623->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1623->refCount.value = 1;
    panda$core$Int64 $tmp1625 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$collections$Array$init$panda$core$Int64($tmp1623, $tmp1625);
    argRefs1622 = $tmp1623;
    memset(&actualMethodType1626, 0, sizeof(actualMethodType1626));
    memset(&actualResultType1627, 0, sizeof(actualResultType1627));
    panda$core$Int64 $tmp1630 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp1631 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1630, ((panda$core$Int64) { 1 }));
    bool $tmp1629 = $tmp1631.value;
    if (!$tmp1629) goto $l1632;
    panda$core$Object* $tmp1633 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1633)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp1629 = $tmp1634.value;
    $l1632:;
    panda$core$Bit $tmp1635 = { $tmp1629 };
    isSuper1628 = $tmp1635;
    panda$core$Bit $tmp1637 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1628);
    bool $tmp1636 = $tmp1637.value;
    if (!$tmp1636) goto $l1638;
    panda$core$Bit $tmp1639 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1574);
    $tmp1636 = $tmp1639.value;
    $l1638:;
    panda$core$Bit $tmp1640 = { $tmp1636 };
    if ($tmp1640.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp1641 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1574);
            actualMethodType1626 = $tmp1641;
        }
        {
            panda$core$Int64 $tmp1642 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1626->subtypes);
            panda$core$Int64 $tmp1643 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1642, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp1644 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1626->subtypes, $tmp1643);
            panda$core$String* $tmp1645 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1644));
            actualResultType1627 = $tmp1645;
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp1646 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1574);
            actualMethodType1626 = $tmp1646;
        }
        {
            panda$core$String* $tmp1647 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            actualResultType1627 = $tmp1647;
        }
    }
    }
    panda$core$Int64 $tmp1649 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp1650 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1626->subtypes);
    panda$core$Int64 $tmp1651 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1649, $tmp1650);
    panda$core$Int64 $tmp1652 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1651, ((panda$core$Int64) { 1 }));
    offset1648 = $tmp1652;
    panda$core$Int64 $tmp1654 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1653, ((panda$core$Int64) { 0 }), $tmp1654, ((panda$core$Bit) { false }));
    int64_t $tmp1656 = $tmp1653.min.value;
    panda$core$Int64 i1655 = { $tmp1656 };
    int64_t $tmp1658 = $tmp1653.max.value;
    bool $tmp1659 = $tmp1653.inclusive.value;
    if ($tmp1659) goto $l1666; else goto $l1667;
    $l1666:;
    if ($tmp1656 <= $tmp1658) goto $l1660; else goto $l1662;
    $l1667:;
    if ($tmp1656 < $tmp1658) goto $l1660; else goto $l1662;
    $l1660:;
    {
        panda$core$Object* $tmp1669 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1655);
        panda$core$String* $tmp1670 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1669), p_out);
        arg1668 = $tmp1670;
        panda$core$Bit $tmp1672 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1655, offset1648);
        bool $tmp1671 = $tmp1672.value;
        if (!$tmp1671) goto $l1673;
        panda$core$Int64 $tmp1674 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1655, offset1648);
        panda$core$Object* $tmp1675 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1626->subtypes, $tmp1674);
        panda$core$Object* $tmp1676 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1655);
        org$pandalanguage$pandac$Type* $tmp1678 = (($fn1677) ((org$pandalanguage$pandac$IRNode*) $tmp1676)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1676));
        panda$core$Bit $tmp1679 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1675), $tmp1678);
        $tmp1671 = $tmp1679.value;
        $l1673:;
        panda$core$Bit $tmp1680 = { $tmp1671 };
        if ($tmp1680.value) {
        {
            {
                panda$core$Object* $tmp1681 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1655);
                org$pandalanguage$pandac$Type* $tmp1683 = (($fn1682) ((org$pandalanguage$pandac$IRNode*) $tmp1681)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1681));
                panda$core$Int64 $tmp1684 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1655, offset1648);
                panda$core$Object* $tmp1685 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1626->subtypes, $tmp1684);
                panda$core$String* $tmp1686 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1668, $tmp1683, ((org$pandalanguage$pandac$Type*) $tmp1685), p_out);
                arg1668 = $tmp1686;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs1622, ((panda$core$Object*) arg1668));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1668));
    }
    $l1663:;
    int64_t $tmp1688 = $tmp1658 - i1655.value;
    if ($tmp1659) goto $l1689; else goto $l1690;
    $l1689:;
    if ((uint64_t) $tmp1688 >= 1) goto $l1687; else goto $l1662;
    $l1690:;
    if ((uint64_t) $tmp1688 > 1) goto $l1687; else goto $l1662;
    $l1687:;
    i1655.value += 1;
    goto $l1660;
    $l1662:;
    memset(&target1693, 0, sizeof(target1693));
    panda$core$Int64 $tmp1694 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs1622);
    panda$core$Bit $tmp1695 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1694, ((panda$core$Int64) { 0 }));
    if ($tmp1695.value) {
    {
        {
            panda$core$Object* $tmp1696 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs1622, ((panda$core$Int64) { 0 }));
            target1693 = ((panda$core$String*) $tmp1696);
        }
    }
    }
    else {
    {
        {
            target1693 = NULL;
        }
    }
    }
    panda$core$String* $tmp1698 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1693, m1574, isSuper1628, p_out);
    methodRef1697 = $tmp1698;
    panda$core$Bit $tmp1700 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1574);
    indirect1699 = $tmp1700;
    panda$core$String* $tmp1702 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1701 = $tmp1702;
    separator1703 = &$s1704;
    memset(&indirectVar1705, 0, sizeof(indirectVar1705));
    if (indirect1699.value) {
    {
        panda$core$String* $tmp1706 = panda$core$String$convert$R$panda$core$String(actualResultType1627);
        panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1707);
        panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, result1701);
        panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1709, &$s1710);
        (($fn1712) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1711);
        panda$core$String* $tmp1713 = panda$core$String$convert$R$panda$core$String(methodRef1697);
        panda$core$String* $tmp1715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1713, &$s1714);
        panda$core$String* $tmp1716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1715, result1701);
        panda$core$String* $tmp1718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1716, &$s1717);
        (($fn1719) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1718);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1703));
            separator1703 = &$s1720;
        }
    }
    }
    else {
    {
        panda$core$String* $tmp1721 = panda$core$String$convert$R$panda$core$String(actualResultType1627);
        panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, &$s1722);
        panda$core$String* $tmp1724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1723, result1701);
        panda$core$String* $tmp1726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1724, &$s1725);
        panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1726, methodRef1697);
        panda$core$String* $tmp1729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1727, &$s1728);
        (($fn1730) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1729);
    }
    }
    {
        ITable* $tmp1732 = ((panda$collections$Iterable*) argRefs1622)->$class->itable;
        while ($tmp1732->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1732 = $tmp1732->next;
        }
        $fn1734 $tmp1733 = $tmp1732->methods[0];
        panda$collections$Iterator* $tmp1735 = $tmp1733(((panda$collections$Iterable*) argRefs1622));
        arg$Iter1731 = $tmp1735;
        $l1736:;
        ITable* $tmp1738 = arg$Iter1731->$class->itable;
        while ($tmp1738->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1738 = $tmp1738->next;
        }
        $fn1740 $tmp1739 = $tmp1738->methods[0];
        panda$core$Bit $tmp1741 = $tmp1739(arg$Iter1731);
        panda$core$Bit $tmp1742 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1741);
        if (!$tmp1742.value) goto $l1737;
        {
            ITable* $tmp1744 = arg$Iter1731->$class->itable;
            while ($tmp1744->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1744 = $tmp1744->next;
            }
            $fn1746 $tmp1745 = $tmp1744->methods[1];
            panda$core$Object* $tmp1747 = $tmp1745(arg$Iter1731);
            arg1743 = ((panda$core$String*) $tmp1747);
            panda$core$String* $tmp1748 = panda$core$String$convert$R$panda$core$String(separator1703);
            panda$core$String* $tmp1750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1748, &$s1749);
            panda$core$String* $tmp1751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1750, arg1743);
            panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1751, &$s1752);
            (($fn1754) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1753);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1703));
                separator1703 = &$s1755;
            }
        }
        goto $l1736;
        $l1737:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1735));
    }
    (($fn1757) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1756);
    panda$core$String* $tmp1758 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$Bit $tmp1759 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1758, actualResultType1627);
    if ($tmp1759.value) {
    {
        {
            panda$core$Int64 $tmp1761 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1626->subtypes);
            panda$core$Int64 $tmp1762 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1761, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp1763 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1626->subtypes, $tmp1762);
            panda$core$String* $tmp1764 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1701, ((org$pandalanguage$pandac$Type*) $tmp1763), p_t, p_out);
            tmp291760 = $tmp1764;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs1622));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1703));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1701));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1627));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar1705));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1626));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef1697));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1693));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1574));
            }
            return tmp291760;
        }
    }
    }
    {
        tmp301765 = result1701;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs1622));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1703));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1701));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1627));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar1705));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1626));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef1697));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1693));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1574));
        }
        return tmp301765;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1767;
    panda$core$String* nonNullValue1770;
    panda$core$String* tmp311773;
    panda$core$String* wrapped1781;
    panda$core$String* tmp321848;
    panda$core$Bit $tmp1766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1766.value) {
    {
        panda$core$Object* $tmp1768 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1769 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1768), p_out);
        unwrapped1767 = $tmp1769;
        panda$core$Object* $tmp1771 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1772 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1767, ((org$pandalanguage$pandac$Type*) $tmp1771), p_dstType, p_out);
        nonNullValue1770 = $tmp1772;
        {
            panda$core$String* $tmp1775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1774, p_value);
            panda$core$String* $tmp1777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1775, &$s1776);
            panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1777, nonNullValue1770);
            panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1778, &$s1779);
            tmp311773 = $tmp1780;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unwrapped1767));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue1770));
            }
            return tmp311773;
        }
    }
    }
    panda$core$String* $tmp1782 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    wrapped1781 = $tmp1782;
    panda$core$String* $tmp1783 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1784 = panda$core$String$convert$R$panda$core$String($tmp1783);
    panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, &$s1785);
    panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1786, wrapped1781);
    panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1787, &$s1788);
    (($fn1790) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1789);
    panda$core$Bit $tmp1791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1791.value) {
    {
        panda$core$String* $tmp1793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1792, p_value);
        panda$core$String* $tmp1795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1793, &$s1794);
        (($fn1796) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1795);
        panda$core$Int64 $tmp1797 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1797;
    }
    }
    panda$core$String* $tmp1798 = panda$core$String$convert$R$panda$core$String(wrapped1781);
    panda$core$String* $tmp1800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1798, &$s1799);
    panda$core$String* $tmp1801 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1800, $tmp1801);
    panda$core$String* $tmp1804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1802, &$s1803);
    panda$core$Int64 $tmp1806 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_srcType);
    panda$core$Int64$wrapper* $tmp1807;
    $tmp1807 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp1807->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1807->refCount = 1;
    $tmp1807->value = $tmp1806;
    panda$core$String* $tmp1808 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1805, ((panda$core$Object*) $tmp1807));
    panda$core$String* $tmp1810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1808, &$s1809);
    panda$core$String* $tmp1811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1804, $tmp1810);
    (($fn1812) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1811);
    panda$core$String* $tmp1813 = panda$core$String$convert$R$panda$core$String(wrapped1781);
    panda$core$String* $tmp1815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1813, &$s1814);
    panda$core$String* $tmp1817 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_srcType)->name);
    panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1816, $tmp1817);
    panda$core$String* $tmp1820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, &$s1819);
    panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1815, $tmp1820);
    (($fn1822) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1821);
    panda$core$String* $tmp1823 = panda$core$String$convert$R$panda$core$String(wrapped1781);
    panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1823, &$s1824);
    (($fn1826) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1825);
    panda$core$String* $tmp1827 = panda$core$String$convert$R$panda$core$String(wrapped1781);
    panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1827, &$s1828);
    panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, p_value);
    panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, &$s1831);
    (($fn1833) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1832);
    panda$core$Bit $tmp1834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1834.value) {
    {
        panda$core$Int64 $tmp1835 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1835;
        (($fn1837) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1836);
        (($fn1839) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1838);
        panda$core$Int64 $tmp1840 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1840;
        panda$core$String* $tmp1841 = panda$core$String$convert$R$panda$core$String(wrapped1781);
        panda$core$String* $tmp1843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1841, &$s1842);
        (($fn1844) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1843);
        panda$core$Int64 $tmp1845 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1845;
        (($fn1847) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1846);
    }
    }
    {
        panda$core$String* $tmp1850 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1849, $tmp1850);
        panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1851, &$s1852);
        panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1853, wrapped1781);
        panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1854, &$s1855);
        tmp321848 = $tmp1856;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped1781));
        return tmp321848;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$FieldDecl* p_field, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1859;
    panda$core$String* baseRef1863;
    panda$core$String* tmp331866;
    panda$core$String* tmp341874;
    panda$core$Bit $tmp1857 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_field->annotations);
    if ($tmp1857.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_field->value != NULL }).value);
        panda$core$String* $tmp1858 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_field->value, p_out);
        return $tmp1858;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1861 = (($fn1860) p_base->$class->vtable[2])(p_base);
    org$pandalanguage$pandac$ClassDecl* $tmp1862 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1861);
    cl1859 = $tmp1862;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1859);
    panda$core$String* $tmp1864 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef1863 = $tmp1864;
    PANDA_ASSERT(((panda$core$Bit) { cl1859 != NULL }).value);
    panda$core$Bit $tmp1865 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1859);
    if ($tmp1865.value) {
    {
        {
            panda$core$String* $tmp1867 = panda$core$String$convert$R$panda$core$String(baseRef1863);
            panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1867, &$s1868);
            panda$core$String* $tmp1870 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
            panda$core$String* $tmp1871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1869, $tmp1870);
            panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1871, &$s1872);
            tmp331866 = $tmp1873;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1863));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1859));
            }
            return tmp331866;
        }
    }
    }
    {
        panda$core$String* $tmp1875 = panda$core$String$convert$R$panda$core$String(baseRef1863);
        panda$core$String* $tmp1877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1875, &$s1876);
        panda$core$String* $tmp1878 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
        panda$core$String* $tmp1879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1877, $tmp1878);
        panda$core$String* $tmp1881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, &$s1880);
        tmp341874 = $tmp1881;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1863));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1859));
        }
        return tmp341874;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1882;
    panda$core$String* wrapped1892;
    panda$core$String* nonNullValue1895;
    panda$core$String* tmp351898;
    panda$core$String* tmp361910;
    panda$core$String* tmp371911;
    panda$core$String* $tmp1884 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1883, $tmp1884);
    panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1885, &$s1886);
    panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1887, p_value);
    panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1888, &$s1889);
    result1882 = $tmp1890;
    panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1891.value) {
    {
        panda$core$Object* $tmp1893 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1894 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1893), p_out);
        wrapped1892 = $tmp1894;
        panda$core$Object* $tmp1896 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1897 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1892, ((org$pandalanguage$pandac$Type*) $tmp1896), p_dstType, p_out);
        nonNullValue1895 = $tmp1897;
        {
            panda$core$String* $tmp1900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1899, p_value);
            panda$core$String* $tmp1902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1900, &$s1901);
            panda$core$String* $tmp1903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1902, nonNullValue1895);
            panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1903, &$s1904);
            panda$core$String* $tmp1906 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
            panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1905, $tmp1906);
            panda$core$String* $tmp1909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1907, &$s1908);
            tmp351898 = $tmp1909;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue1895));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped1892));
            }
            {
                tmp361910 = tmp351898;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1882));
                return tmp361910;
            }
        }
    }
    }
    {
        tmp371911 = result1882;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1882));
        return tmp371911;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1913 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1912, $tmp1913);
    panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1914, &$s1915);
    panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, p_value);
    panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, &$s1918);
    return $tmp1919;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1921 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1920, $tmp1921);
    panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1922, &$s1923);
    panda$core$String* $tmp1925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1924, p_value);
    panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1925, &$s1926);
    return $tmp1927;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1928;
    panda$core$String* tmp421931;
    org$pandalanguage$pandac$ClassDecl* srcClass1940;
    org$pandalanguage$pandac$ClassDecl* targetClass1942;
    panda$core$String* tmp381950;
    panda$core$String* tmp431952;
    panda$core$String* tmp391959;
    panda$core$String* tmp441961;
    panda$core$String* tmp401972;
    panda$core$String* tmp451974;
    panda$core$String* tmp411985;
    panda$core$String* tmp461987;
    panda$core$String* srcType1989;
    panda$core$String* dstType1991;
    panda$core$String* tmp471994;
    panda$core$String* tmp481995;
    memset(&op1928, 0, sizeof(op1928));
    panda$core$Bit $tmp1929 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1929.value) {
    {
        panda$core$Bit $tmp1930 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1930.value);
        {
            panda$core$String* $tmp1933 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1932, $tmp1933);
            panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1934, &$s1935);
            panda$core$String* $tmp1937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1936, p_value);
            panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1937, &$s1938);
            tmp421931 = $tmp1939;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1928));
            return tmp421931;
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1941 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1940 = $tmp1941;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1940 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1943 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1942 = $tmp1943;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1942 != NULL }).value);
        panda$core$Bit $tmp1945 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1940);
        bool $tmp1944 = $tmp1945.value;
        if (!$tmp1944) goto $l1946;
        panda$core$Bit $tmp1947 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1942);
        panda$core$Bit $tmp1948 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1947);
        $tmp1944 = $tmp1948.value;
        $l1946:;
        panda$core$Bit $tmp1949 = { $tmp1944 };
        if ($tmp1949.value) {
        {
            {
                panda$core$String* $tmp1951 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp381950 = $tmp1951;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1942));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1940));
                }
                {
                    tmp431952 = tmp381950;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1928));
                    return tmp431952;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1954 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1940);
        panda$core$Bit $tmp1955 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1954);
        bool $tmp1953 = $tmp1955.value;
        if (!$tmp1953) goto $l1956;
        panda$core$Bit $tmp1957 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1942);
        $tmp1953 = $tmp1957.value;
        $l1956:;
        panda$core$Bit $tmp1958 = { $tmp1953 };
        if ($tmp1958.value) {
        {
            {
                panda$core$String* $tmp1960 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp391959 = $tmp1960;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1942));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1940));
                }
                {
                    tmp441961 = tmp391959;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1928));
                    return tmp441961;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1964 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1940);
        bool $tmp1963 = $tmp1964.value;
        if (!$tmp1963) goto $l1965;
        panda$core$Bit $tmp1966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1963 = $tmp1966.value;
        $l1965:;
        panda$core$Bit $tmp1967 = { $tmp1963 };
        bool $tmp1962 = $tmp1967.value;
        if (!$tmp1962) goto $l1968;
        panda$core$Object* $tmp1969 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1970 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1969), p_src);
        $tmp1962 = $tmp1970.value;
        $l1968:;
        panda$core$Bit $tmp1971 = { $tmp1962 };
        if ($tmp1971.value) {
        {
            {
                panda$core$String* $tmp1973 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp401972 = $tmp1973;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1942));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1940));
                }
                {
                    tmp451974 = tmp401972;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1928));
                    return tmp451974;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1977 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1942);
        bool $tmp1976 = $tmp1977.value;
        if (!$tmp1976) goto $l1978;
        panda$core$Bit $tmp1979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1976 = $tmp1979.value;
        $l1978:;
        panda$core$Bit $tmp1980 = { $tmp1976 };
        bool $tmp1975 = $tmp1980.value;
        if (!$tmp1975) goto $l1981;
        panda$core$Object* $tmp1982 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1983 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1982), p_target);
        $tmp1975 = $tmp1983.value;
        $l1981:;
        panda$core$Bit $tmp1984 = { $tmp1975 };
        if ($tmp1984.value) {
        {
            {
                panda$core$String* $tmp1986 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp411985 = $tmp1986;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1942));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1940));
                }
                {
                    tmp461987 = tmp411985;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1928));
                    return tmp461987;
                }
            }
        }
        }
        }
        }
        }
        {
            op1928 = &$s1988;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1942));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1940));
        }
    }
    }
    panda$core$String* $tmp1990 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1989 = $tmp1990;
    panda$core$String* $tmp1992 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1991 = $tmp1992;
    panda$core$Bit $tmp1993 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1989, dstType1991);
    if ($tmp1993.value) {
    {
        {
            tmp471994 = p_value;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType1991));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType1989));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1928));
            }
            return tmp471994;
        }
    }
    }
    {
        panda$core$String* $tmp1997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1996, dstType1991);
        panda$core$String* $tmp1999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1997, &$s1998);
        panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1999, p_value);
        panda$core$String* $tmp2002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2000, &$s2001);
        tmp481995 = $tmp2002;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType1991));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType1989));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1928));
        }
        return tmp481995;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef2003;
    panda$core$String* tmp492005;
    panda$core$String* $tmp2004 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef2003 = $tmp2004;
    {
        org$pandalanguage$pandac$Type* $tmp2007 = (($fn2006) p_base->$class->vtable[2])(p_base);
        panda$core$String* $tmp2008 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, baseRef2003, $tmp2007, p_t, p_out);
        tmp492005 = $tmp2008;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2003));
        return tmp492005;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_target, org$pandalanguage$pandac$IRNode* p_initCall, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1092_92009;
    org$pandalanguage$pandac$Type* initType2011;
    org$pandalanguage$pandac$MethodRef* initMref2013;
    panda$collections$ImmutableArray* initArgs2015;
    org$pandalanguage$pandac$ClassDecl* cl2017;
    panda$core$String* t2019;
    org$pandalanguage$pandac$IRNode* $match$1098_212027;
    panda$collections$ImmutableArray* args2029;
    panda$core$String* value2033;
    panda$core$String* tmp2045;
    panda$core$String* tmp502062;
    panda$core$String* result2063;
    panda$core$String* classPtr2080;
    panda$core$String* className2082;
    {
        $match$1092_92009 = p_initCall;
        panda$core$Bit $tmp2010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1092_92009->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp2010.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2012 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1092_92009->$data + 16));
            initType2011 = *$tmp2012;
            org$pandalanguage$pandac$MethodRef** $tmp2014 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1092_92009->$data + 24));
            initMref2013 = *$tmp2014;
            panda$collections$ImmutableArray** $tmp2016 = ((panda$collections$ImmutableArray**) ((char*) $match$1092_92009->$data + 32));
            initArgs2015 = *$tmp2016;
            org$pandalanguage$pandac$ClassDecl* $tmp2018 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
            cl2017 = $tmp2018;
            PANDA_ASSERT(((panda$core$Bit) { cl2017 != NULL }).value);
            panda$core$String* $tmp2020 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            t2019 = $tmp2020;
            panda$core$Bit $tmp2022 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            bool $tmp2021 = $tmp2022.value;
            if ($tmp2021) goto $l2023;
            org$pandalanguage$pandac$Type* $tmp2024 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp2025 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2024);
            $tmp2021 = $tmp2025.value;
            $l2023:;
            panda$core$Bit $tmp2026 = { $tmp2021 };
            if ($tmp2026.value) {
            {
                {
                    $match$1098_212027 = p_initCall;
                    panda$core$Bit $tmp2028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1098_212027->$rawValue, ((panda$core$Int64) { 5 }));
                    if ($tmp2028.value) {
                    {
                        panda$collections$ImmutableArray** $tmp2030 = ((panda$collections$ImmutableArray**) ((char*) $match$1098_212027->$data + 32));
                        args2029 = *$tmp2030;
                        panda$core$Int64 $tmp2031 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args2029);
                        panda$core$Bit $tmp2032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2031, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp2032.value);
                        panda$core$Object* $tmp2034 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args2029, ((panda$core$Int64) { 0 }));
                        panda$core$String* $tmp2035 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2034), p_out);
                        value2033 = $tmp2035;
                        panda$core$String* $tmp2037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2036, t2019);
                        panda$core$String* $tmp2039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2037, &$s2038);
                        panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2039, value2033);
                        panda$core$String* $tmp2042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2040, &$s2041);
                        return $tmp2042;
                    }
                    }
                }
            }
            }
            panda$core$Bit $tmp2043 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2017);
            if ($tmp2043.value) {
            {
                panda$core$Int64 $tmp2044 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
                self->varCount = $tmp2044;
                panda$core$Int64$wrapper* $tmp2047;
                $tmp2047 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
                $tmp2047->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2047->refCount = 1;
                $tmp2047->value = self->varCount;
                panda$core$String* $tmp2048 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2046, ((panda$core$Object*) $tmp2047));
                panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2048, &$s2049);
                tmp2045 = $tmp2050;
                panda$core$String* $tmp2051 = panda$core$String$convert$R$panda$core$String(t2019);
                panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2051, &$s2052);
                panda$core$String* $tmp2054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2053, tmp2045);
                panda$core$String* $tmp2056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2054, &$s2055);
                (($fn2057) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2056);
                panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2058, tmp2045);
                panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2059, &$s2060);
                org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType2011, initMref2013, initArgs2015, $tmp2061, p_out);
                {
                    tmp502062 = tmp2045;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tmp2045));
                    return tmp502062;
                }
            }
            }
            panda$core$String* $tmp2064 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result2063 = $tmp2064;
            panda$core$String* $tmp2065 = panda$core$String$convert$R$panda$core$String(t2019);
            panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
            panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2067, result2063);
            panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2068, &$s2069);
            panda$core$String* $tmp2071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2070, t2019);
            panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2071, &$s2072);
            panda$core$Int64 $tmp2074 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
            panda$core$Int64$wrapper* $tmp2075;
            $tmp2075 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp2075->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2075->refCount = 1;
            $tmp2075->value = $tmp2074;
            panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2073, ((panda$core$Object*) $tmp2075));
            panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, &$s2077);
            (($fn2079) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2078);
            panda$core$String* $tmp2081 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            classPtr2080 = $tmp2081;
            memset(&className2082, 0, sizeof(className2082));
            panda$core$Bit $tmp2083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp2083.value) {
            {
                {
                    panda$core$Object* $tmp2084 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
                    panda$core$String* $tmp2085 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2084));
                    className2082 = $tmp2085;
                }
            }
            }
            else {
            {
                {
                    panda$core$String* $tmp2086 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
                    className2082 = $tmp2086;
                }
            }
            }
            panda$core$String* $tmp2087 = panda$core$String$convert$R$panda$core$String(result2063);
            panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2087, &$s2088);
            panda$core$String* $tmp2090 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl2017)->name);
            panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2089, $tmp2090);
            panda$core$String* $tmp2093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, &$s2092);
            panda$core$String* $tmp2095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2093, &$s2094);
            (($fn2096) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2095);
            panda$core$String* $tmp2097 = panda$core$String$convert$R$panda$core$String(result2063);
            panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2097, &$s2098);
            (($fn2100) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2099);
            panda$core$String* $tmp2101 = panda$core$String$convert$R$panda$core$String(result2063);
            panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2101, &$s2102);
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType2011, initMref2013, initArgs2015, $tmp2103, p_out);
            return result2063;
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
    panda$core$String* $tmp2104 = panda$core$UInt64$convert$R$panda$core$String(p_int);
    return $tmp2104;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$UInt64 p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$UInt64$wrapper* $tmp2106;
    $tmp2106 = (panda$core$UInt64$wrapper*) pandaZAlloc(24);
    $tmp2106->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp2106->refCount = 1;
    $tmp2106->value = p_int;
    panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2105, ((panda$core$Object*) $tmp2106));
    return $tmp2107;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Real64 p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result2108;
    panda$core$Char8 $tmp2110;
    panda$core$String* tmp512112;
    panda$core$String* tmp522113;
    panda$core$String* $tmp2109 = panda$core$Real64$convert$R$panda$core$String(p_real);
    result2108 = $tmp2109;
    panda$core$Char8$init$panda$core$UInt8(&$tmp2110, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp2111 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result2108, $tmp2110);
    if ($tmp2111.value) {
    {
        {
            tmp512112 = result2108;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2108));
            return tmp512112;
        }
    }
    }
    {
        panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result2108, &$s2114);
        tmp522113 = $tmp2115;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2108));
        return tmp522113;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_bit, panda$io$IndentedOutputStream* p_out) {
    if (p_bit.value) {
    {
        return &$s2116;
    }
    }
    return &$s2117;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2118 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2118;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* result2120;
    panda$collections$Iterator* c$Iter2141;
    panda$core$Char8 c2154;
    panda$core$String* tmp532189;
    panda$core$Int64 $tmp2119 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2119;
    panda$core$Int64$wrapper* $tmp2122;
    $tmp2122 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp2122->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2122->refCount = 1;
    $tmp2122->value = self->varCount;
    panda$core$String* $tmp2123 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2121, ((panda$core$Object*) $tmp2122));
    panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2123, &$s2124);
    result2120 = $tmp2125;
    org$pandalanguage$pandac$Type* $tmp2126 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2127 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2126);
    panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2128, result2120);
    panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2129, &$s2130);
    panda$core$Int64$wrapper* $tmp2133;
    $tmp2133 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp2133->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2133->refCount = 1;
    $tmp2133->value = ((panda$core$Int64) { -999 });
    panda$core$String* $tmp2134 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2132, ((panda$core$Object*) $tmp2133));
    panda$core$String* $tmp2136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2134, &$s2135);
    panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2131, $tmp2136);
    panda$core$String* $tmp2139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2137, &$s2138);
    (($fn2140) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2139);
    {
        panda$collections$ListView* $tmp2142 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2143 = ((panda$collections$Iterable*) $tmp2142)->$class->itable;
        while ($tmp2143->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2143 = $tmp2143->next;
        }
        $fn2145 $tmp2144 = $tmp2143->methods[0];
        panda$collections$Iterator* $tmp2146 = $tmp2144(((panda$collections$Iterable*) $tmp2142));
        c$Iter2141 = $tmp2146;
        $l2147:;
        ITable* $tmp2149 = c$Iter2141->$class->itable;
        while ($tmp2149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2149 = $tmp2149->next;
        }
        $fn2151 $tmp2150 = $tmp2149->methods[0];
        panda$core$Bit $tmp2152 = $tmp2150(c$Iter2141);
        panda$core$Bit $tmp2153 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2152);
        if (!$tmp2153.value) goto $l2148;
        {
            ITable* $tmp2155 = c$Iter2141->$class->itable;
            while ($tmp2155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2155 = $tmp2155->next;
            }
            $fn2157 $tmp2156 = $tmp2155->methods[1];
            panda$core$Object* $tmp2158 = $tmp2156(c$Iter2141);
            c2154 = ((panda$core$Char8$wrapper*) $tmp2158)->value;
            panda$core$UInt8 $tmp2160 = panda$core$Char8$convert$R$panda$core$UInt8(c2154);
            panda$core$UInt8$wrapper* $tmp2161;
            $tmp2161 = (panda$core$UInt8$wrapper*) pandaZAlloc(13);
            $tmp2161->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
            $tmp2161->refCount = 1;
            $tmp2161->value = $tmp2160;
            ITable* $tmp2163 = ((panda$core$Formattable*) $tmp2161)->$class->itable;
            while ($tmp2163->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2163 = $tmp2163->next;
            }
            $fn2165 $tmp2164 = $tmp2163->methods[0];
            panda$core$String* $tmp2166 = $tmp2164(((panda$core$Formattable*) $tmp2161), &$s2162);
            panda$core$String* $tmp2168 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp2166, &$s2167);
            panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2159, $tmp2168);
            panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2170);
            (($fn2172) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2171);
        }
        goto $l2147;
        $l2148:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
    }
    panda$collections$ListView* $tmp2174 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2175 = ((panda$collections$CollectionView*) $tmp2174)->$class->itable;
    while ($tmp2175->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2175 = $tmp2175->next;
    }
    $fn2177 $tmp2176 = $tmp2175->methods[0];
    panda$core$Int64 $tmp2178 = $tmp2176(((panda$collections$CollectionView*) $tmp2174));
    panda$core$Int64$wrapper* $tmp2179;
    $tmp2179 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp2179->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2179->refCount = 1;
    $tmp2179->value = $tmp2178;
    panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2173, ((panda$core$Object*) $tmp2179));
    panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, &$s2181);
    panda$core$Int64 $tmp2183 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$Int64$wrapper* $tmp2184;
    $tmp2184 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp2184->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2184->refCount = 1;
    $tmp2184->value = $tmp2183;
    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2182, ((panda$core$Object*) $tmp2184));
    panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, &$s2186);
    (($fn2188) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2187);
    {
        panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2190, result2120);
        panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, &$s2192);
        tmp532189 = $tmp2193;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2120));
        return tmp532189;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    return &$s2194;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2196 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2195, $tmp2196);
    panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2197, &$s2198);
    return $tmp2199;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2200;
    org$pandalanguage$pandac$ClassDecl* cl2202;
    panda$core$String* bit2206;
    panda$core$String* tmp542219;
    panda$core$String* $tmp2201 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2200 = $tmp2201;
    org$pandalanguage$pandac$Type* $tmp2204 = (($fn2203) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2205 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2204);
    cl2202 = $tmp2205;
    memset(&bit2206, 0, sizeof(bit2206));
    panda$core$Bit $tmp2207 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2202);
    if ($tmp2207.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2209 = (($fn2208) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2210 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2209->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2210.value) {
        {
            {
                bit2206 = &$s2211;
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2212, ref2200);
                panda$core$String* $tmp2215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2213, &$s2214);
                bit2206 = $tmp2215;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2216 = panda$core$String$convert$R$panda$core$String(ref2200);
            panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, &$s2217);
            bit2206 = $tmp2218;
        }
    }
    }
    {
        panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2220, bit2206);
        panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2221, &$s2222);
        tmp542219 = $tmp2223;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2202));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref2200));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2206));
        }
        return tmp542219;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2224;
    org$pandalanguage$pandac$ClassDecl* cl2226;
    panda$core$String* bit2230;
    panda$core$String* tmp552242;
    panda$core$String* $tmp2225 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2224 = $tmp2225;
    org$pandalanguage$pandac$Type* $tmp2228 = (($fn2227) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2229 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2228);
    cl2226 = $tmp2229;
    memset(&bit2230, 0, sizeof(bit2230));
    panda$core$Bit $tmp2231 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2226);
    if ($tmp2231.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2233 = (($fn2232) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2234 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2233->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2234.value) {
        {
            {
                bit2230 = &$s2235;
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2236 = panda$core$String$convert$R$panda$core$String(ref2224);
                panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2236, &$s2237);
                bit2230 = $tmp2238;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2239 = panda$core$String$convert$R$panda$core$String(ref2224);
            panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2239, &$s2240);
            bit2230 = $tmp2241;
        }
    }
    }
    {
        panda$core$String* $tmp2244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2243, bit2230);
        panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2244, &$s2245);
        tmp552242 = $tmp2246;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2226));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref2224));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2230));
        }
        return tmp552242;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2248;
    panda$core$String* tmp562252;
    panda$core$String* tmp572258;
    panda$core$Bit $tmp2247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2247.value);
    panda$core$Object* $tmp2249 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2250 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2249));
    cl2248 = $tmp2250;
    PANDA_ASSERT(((panda$core$Bit) { cl2248 != NULL }).value);
    panda$core$Bit $tmp2251 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2248);
    if ($tmp2251.value) {
    {
        {
            panda$core$String* $tmp2254 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2253, $tmp2254);
            panda$core$String* $tmp2257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2255, &$s2256);
            tmp562252 = $tmp2257;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2248));
            return tmp562252;
        }
    }
    }
    else {
    {
        {
            tmp572258 = &$s2259;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2248));
            return tmp572258;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2248));
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_base, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef2260;
    panda$core$String* result2262;
    org$pandalanguage$pandac$parser$Token$Kind $match$1232_92264;
    panda$core$String* tmp582266;
    panda$core$String* tmp592272;
    panda$core$String* tmp602278;
    panda$core$String* $tmp2261 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef2260 = $tmp2261;
    panda$core$String* $tmp2263 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2262 = $tmp2263;
    {
        $match$1232_92264 = p_op;
        panda$core$Bit $tmp2265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1232_92264.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp2265.value) {
        {
            {
                panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2267, baseRef2260);
                panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2268, &$s2269);
                tmp582266 = $tmp2270;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2262));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2260));
                }
                return tmp582266;
            }
        }
        }
        else {
        panda$core$Bit $tmp2271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1232_92264.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp2271.value) {
        {
            {
                panda$core$String* $tmp2274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2273, baseRef2260);
                panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2274, &$s2275);
                tmp592272 = $tmp2276;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2262));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2260));
                }
                return tmp592272;
            }
        }
        }
        else {
        panda$core$Bit $tmp2277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1232_92264.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp2277.value) {
        {
            {
                panda$core$String* $tmp2280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2279, baseRef2260);
                panda$core$String* $tmp2282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2280, &$s2281);
                tmp602278 = $tmp2282;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2262));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2260));
                }
                return tmp602278;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2262));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2260));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2288;
    panda$core$String* trueLabel2290;
    panda$core$String* falseLabel2292;
    panda$core$String* merge2294;
    panda$core$String* result2296;
    panda$core$String* tmp612345;
    org$pandalanguage$pandac$Type* $tmp2284 = (($fn2283) p_ifTrue->$class->vtable[2])(p_ifTrue);
    org$pandalanguage$pandac$Type* $tmp2286 = (($fn2285) p_ifFalse->$class->vtable[2])(p_ifFalse);
    panda$core$Bit $tmp2287 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2284, $tmp2286);
    PANDA_ASSERT($tmp2287.value);
    panda$core$String* $tmp2289 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2288 = $tmp2289;
    panda$core$String* $tmp2291 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2290 = $tmp2291;
    panda$core$String* $tmp2293 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2292 = $tmp2293;
    panda$core$String* $tmp2295 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2294 = $tmp2295;
    panda$core$String* $tmp2297 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2296 = $tmp2297;
    org$pandalanguage$pandac$Type* $tmp2299 = (($fn2298) p_ifTrue->$class->vtable[2])(p_ifTrue);
    panda$core$String* $tmp2300 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2299);
    panda$core$String* $tmp2301 = panda$core$String$convert$R$panda$core$String($tmp2300);
    panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2301, &$s2302);
    panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, result2296);
    panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2304, &$s2305);
    (($fn2307) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2306);
    panda$core$String* $tmp2309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2308, testRef2288);
    panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2309, &$s2310);
    panda$core$String* $tmp2312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2311, trueLabel2290);
    panda$core$String* $tmp2314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2312, &$s2313);
    panda$core$String* $tmp2315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2314, falseLabel2292);
    panda$core$String* $tmp2317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2315, &$s2316);
    (($fn2318) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2317);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2290, p_out);
    panda$core$String* $tmp2319 = panda$core$String$convert$R$panda$core$String(result2296);
    panda$core$String* $tmp2321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2319, &$s2320);
    panda$core$String* $tmp2322 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifTrue, p_out);
    panda$core$String* $tmp2323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2321, $tmp2322);
    panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2323, &$s2324);
    (($fn2326) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2325);
    panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2327, merge2294);
    panda$core$String* $tmp2330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2328, &$s2329);
    (($fn2331) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2330);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2292, p_out);
    panda$core$String* $tmp2332 = panda$core$String$convert$R$panda$core$String(result2296);
    panda$core$String* $tmp2334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, &$s2333);
    panda$core$String* $tmp2335 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifFalse, p_out);
    panda$core$String* $tmp2336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2334, $tmp2335);
    panda$core$String* $tmp2338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2336, &$s2337);
    (($fn2339) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2338);
    panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2340, merge2294);
    panda$core$String* $tmp2343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2341, &$s2342);
    (($fn2344) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2343);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2294, p_out);
    {
        tmp612345 = result2296;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef2288));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2296));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) merge2294));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel2292));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel2290));
        }
        return tmp612345;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2346 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2346;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2347;
    panda$core$String* tmp622349;
    panda$core$String* $tmp2348 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    result2347 = $tmp2348;
    panda$collections$Array$add$panda$collections$Array$T(self->extraEffects, ((panda$core$Object*) p_stmt));
    {
        tmp622349 = result2347;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2347));
        return tmp622349;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1276_92350;
    org$pandalanguage$pandac$IRNode* left2352;
    org$pandalanguage$pandac$parser$Token$Kind op2354;
    org$pandalanguage$pandac$IRNode* right2356;
    org$pandalanguage$pandac$Type* type2360;
    org$pandalanguage$pandac$MethodRef* target2362;
    panda$collections$ImmutableArray* args2364;
    org$pandalanguage$pandac$IRNode* base2368;
    org$pandalanguage$pandac$Type* type2370;
    panda$core$Bit explicit2372;
    panda$core$UInt64 value2376;
    panda$core$UInt64 value2380;
    panda$core$Real64 value2384;
    panda$core$Bit value2388;
    org$pandalanguage$pandac$Type* type2392;
    org$pandalanguage$pandac$IRNode* initCall2394;
    org$pandalanguage$pandac$Variable* variable2398;
    org$pandalanguage$pandac$IRNode* base2402;
    org$pandalanguage$pandac$FieldDecl* field2404;
    panda$core$String* str2408;
    org$pandalanguage$pandac$Type* t2414;
    org$pandalanguage$pandac$IRNode* base2418;
    panda$core$Int64 id2420;
    panda$core$String* value2422;
    panda$core$Int64 id2426;
    panda$core$String* result2428;
    org$pandalanguage$pandac$Position pos2432;
    org$pandalanguage$pandac$Type* type2434;
    org$pandalanguage$pandac$IRNode* value2438;
    org$pandalanguage$pandac$IRNode* value2442;
    org$pandalanguage$pandac$parser$Token$Kind op2446;
    org$pandalanguage$pandac$IRNode* base2448;
    org$pandalanguage$pandac$IRNode* test2452;
    org$pandalanguage$pandac$IRNode* ifTrue2454;
    org$pandalanguage$pandac$IRNode* ifFalse2456;
    org$pandalanguage$pandac$IRNode* base2462;
    org$pandalanguage$pandac$IRNode* stmt2464;
    {
        $match$1276_92350 = p_expr;
        panda$core$Bit $tmp2351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp2351.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2353 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 24));
            left2352 = *$tmp2353;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2355 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1276_92350->$data + 32));
            op2354 = *$tmp2355;
            org$pandalanguage$pandac$IRNode** $tmp2357 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 40));
            right2356 = *$tmp2357;
            panda$core$String* $tmp2358 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, left2352, op2354, right2356, p_out);
            return $tmp2358;
        }
        }
        else {
        panda$core$Bit $tmp2359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp2359.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2361 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1276_92350->$data + 16));
            type2360 = *$tmp2361;
            org$pandalanguage$pandac$MethodRef** $tmp2363 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1276_92350->$data + 24));
            target2362 = *$tmp2363;
            panda$collections$ImmutableArray** $tmp2365 = ((panda$collections$ImmutableArray**) ((char*) $match$1276_92350->$data + 32));
            args2364 = *$tmp2365;
            panda$core$String* $tmp2366 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, type2360, target2362, args2364, p_out);
            return $tmp2366;
        }
        }
        else {
        panda$core$Bit $tmp2367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp2367.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2369 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 16));
            base2368 = *$tmp2369;
            org$pandalanguage$pandac$Type** $tmp2371 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1276_92350->$data + 24));
            type2370 = *$tmp2371;
            panda$core$Bit* $tmp2373 = ((panda$core$Bit*) ((char*) $match$1276_92350->$data + 32));
            explicit2372 = *$tmp2373;
            panda$core$String* $tmp2374 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base2368, type2370, p_out);
            return $tmp2374;
        }
        }
        else {
        panda$core$Bit $tmp2375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2375.value) {
        {
            panda$core$UInt64* $tmp2377 = ((panda$core$UInt64*) ((char*) $match$1276_92350->$data + 24));
            value2376 = *$tmp2377;
            panda$core$String* $tmp2378 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2376, p_out);
            return $tmp2378;
        }
        }
        else {
        panda$core$Bit $tmp2379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp2379.value) {
        {
            panda$core$UInt64* $tmp2381 = ((panda$core$UInt64*) ((char*) $match$1276_92350->$data + 24));
            value2380 = *$tmp2381;
            panda$core$String* $tmp2382 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2380, p_out);
            return $tmp2382;
        }
        }
        else {
        panda$core$Bit $tmp2383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2383.value) {
        {
            panda$core$Real64* $tmp2385 = ((panda$core$Real64*) ((char*) $match$1276_92350->$data + 24));
            value2384 = *$tmp2385;
            panda$core$String* $tmp2386 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(self, value2384, ((panda$io$OutputStream*) p_out));
            return $tmp2386;
        }
        }
        else {
        panda$core$Bit $tmp2387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp2387.value) {
        {
            panda$core$Bit* $tmp2389 = ((panda$core$Bit*) ((char*) $match$1276_92350->$data + 24));
            value2388 = *$tmp2389;
            panda$core$String* $tmp2390 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, value2388, p_out);
            return $tmp2390;
        }
        }
        else {
        panda$core$Bit $tmp2391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp2391.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2393 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1276_92350->$data + 16));
            type2392 = *$tmp2393;
            org$pandalanguage$pandac$IRNode** $tmp2395 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 24));
            initCall2394 = *$tmp2395;
            panda$core$String* $tmp2396 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, type2392, initCall2394, p_out);
            return $tmp2396;
        }
        }
        else {
        panda$core$Bit $tmp2397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2397.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2399 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1276_92350->$data + 16));
            variable2398 = *$tmp2399;
            panda$core$String* $tmp2400 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, variable2398, p_out);
            return $tmp2400;
        }
        }
        else {
        panda$core$Bit $tmp2401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2401.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2403 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 24));
            base2402 = *$tmp2403;
            org$pandalanguage$pandac$FieldDecl** $tmp2405 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1276_92350->$data + 32));
            field2404 = *$tmp2405;
            panda$core$String* $tmp2406 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, base2402, field2404, p_out);
            return $tmp2406;
        }
        }
        else {
        panda$core$Bit $tmp2407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2407.value) {
        {
            panda$core$String** $tmp2409 = ((panda$core$String**) ((char*) $match$1276_92350->$data + 16));
            str2408 = *$tmp2409;
            panda$core$String* $tmp2410 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(self, str2408);
            return $tmp2410;
        }
        }
        else {
        panda$core$Bit $tmp2411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2411.value) {
        {
            panda$core$String* $tmp2412 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(self, p_out);
            return $tmp2412;
        }
        }
        else {
        panda$core$Bit $tmp2413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2413.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2415 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1276_92350->$data + 16));
            t2414 = *$tmp2415;
            panda$core$String* $tmp2416 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, t2414, p_out);
            return $tmp2416;
        }
        }
        else {
        panda$core$Bit $tmp2417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2417.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2419 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 0));
            base2418 = *$tmp2419;
            panda$core$Int64* $tmp2421 = ((panda$core$Int64*) ((char*) $match$1276_92350->$data + 8));
            id2420 = *$tmp2421;
            panda$core$String* $tmp2423 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2418, p_out);
            value2422 = $tmp2423;
            panda$core$Int64$wrapper* $tmp2424;
            $tmp2424 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp2424->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2424->refCount = 1;
            $tmp2424->value = id2420;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp2424), ((panda$core$Object*) value2422));
            return value2422;
        }
        }
        else {
        panda$core$Bit $tmp2425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2425.value) {
        {
            panda$core$Int64* $tmp2427 = ((panda$core$Int64*) ((char*) $match$1276_92350->$data + 24));
            id2426 = *$tmp2427;
            panda$core$Int64$wrapper* $tmp2429;
            $tmp2429 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp2429->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2429->refCount = 1;
            $tmp2429->value = id2426;
            panda$core$Object* $tmp2430 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) $tmp2429));
            result2428 = ((panda$core$String*) $tmp2430);
            PANDA_ASSERT(((panda$core$Bit) { result2428 != NULL }).value);
            return result2428;
        }
        }
        else {
        panda$core$Bit $tmp2431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2431.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2433 = ((org$pandalanguage$pandac$Position*) ((char*) $match$1276_92350->$data + 0));
            pos2432 = *$tmp2433;
            org$pandalanguage$pandac$Type** $tmp2435 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1276_92350->$data + 16));
            type2434 = *$tmp2435;
            panda$core$String* $tmp2436 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, type2434, p_out);
            return $tmp2436;
        }
        }
        else {
        panda$core$Bit $tmp2437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2437.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2439 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 16));
            value2438 = *$tmp2439;
            panda$core$String* $tmp2440 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2438, p_out);
            return $tmp2440;
        }
        }
        else {
        panda$core$Bit $tmp2441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2441.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2443 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 16));
            value2442 = *$tmp2443;
            panda$core$String* $tmp2444 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2442, p_out);
            return $tmp2444;
        }
        }
        else {
        panda$core$Bit $tmp2445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2445.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2447 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1276_92350->$data + 16));
            op2446 = *$tmp2447;
            org$pandalanguage$pandac$IRNode** $tmp2449 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 24));
            base2448 = *$tmp2449;
            panda$core$String* $tmp2450 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, op2446, base2448, p_out);
            return $tmp2450;
        }
        }
        else {
        panda$core$Bit $tmp2451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2451.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2453 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 16));
            test2452 = *$tmp2453;
            org$pandalanguage$pandac$IRNode** $tmp2455 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 24));
            ifTrue2454 = *$tmp2455;
            org$pandalanguage$pandac$IRNode** $tmp2457 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 32));
            ifFalse2456 = *$tmp2457;
            panda$core$String* $tmp2458 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, test2452, ifTrue2454, ifFalse2456, p_out);
            return $tmp2458;
        }
        }
        else {
        panda$core$Bit $tmp2459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp2459.value) {
        {
            panda$core$String* $tmp2460 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2460;
        }
        }
        else {
        panda$core$Bit $tmp2461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1276_92350->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2461.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2463 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 0));
            base2462 = *$tmp2463;
            org$pandalanguage$pandac$IRNode** $tmp2465 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1276_92350->$data + 8));
            stmt2464 = *$tmp2465;
            panda$core$String* $tmp2466 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2462, stmt2464, p_out);
            return $tmp2466;
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
    panda$core$String* $tmp2467 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2467;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2471;
    org$pandalanguage$pandac$IRNode* s2483;
    (($fn2469) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2468);
    panda$core$Int64 $tmp2470 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2470;
    {
        ITable* $tmp2472 = ((panda$collections$Iterable*) p_statements)->$class->itable;
        while ($tmp2472->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2472 = $tmp2472->next;
        }
        $fn2474 $tmp2473 = $tmp2472->methods[0];
        panda$collections$Iterator* $tmp2475 = $tmp2473(((panda$collections$Iterable*) p_statements));
        s$Iter2471 = $tmp2475;
        $l2476:;
        ITable* $tmp2478 = s$Iter2471->$class->itable;
        while ($tmp2478->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2478 = $tmp2478->next;
        }
        $fn2480 $tmp2479 = $tmp2478->methods[0];
        panda$core$Bit $tmp2481 = $tmp2479(s$Iter2471);
        panda$core$Bit $tmp2482 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2481);
        if (!$tmp2482.value) goto $l2477;
        {
            ITable* $tmp2484 = s$Iter2471->$class->itable;
            while ($tmp2484->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2484 = $tmp2484->next;
            }
            $fn2486 $tmp2485 = $tmp2484->methods[1];
            panda$core$Object* $tmp2487 = $tmp2485(s$Iter2471);
            s2483 = ((org$pandalanguage$pandac$IRNode*) $tmp2487);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2483, p_out);
        }
        goto $l2476;
        $l2477:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2475));
    }
    panda$core$Int64 $tmp2488 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2488;
    (($fn2490) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2489);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$1345_92491;
    panda$core$String* ptr2496;
    panda$core$String* arg2499;
    panda$core$String* base2521;
    panda$core$String* index2524;
    panda$core$String* value2527;
    {
        $match$1345_92491 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp2493 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1345_92491, &$s2492);
        if ($tmp2493.value) {
        {
            panda$core$Int64 $tmp2494 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2494, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2495.value);
            panda$core$Object* $tmp2497 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2498 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2497), p_out);
            ptr2496 = $tmp2498;
            panda$core$Object* $tmp2500 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2501 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2500));
            panda$core$String* $tmp2502 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2501, p_out);
            arg2499 = $tmp2502;
            panda$core$String* $tmp2504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2503, arg2499);
            panda$core$String* $tmp2506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2504, &$s2505);
            panda$core$String* $tmp2507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2506, ptr2496);
            panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2507, &$s2508);
            (($fn2510) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2509);
        }
        }
        else {
        panda$core$Bit $tmp2512 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1345_92491, &$s2511);
        if ($tmp2512.value) {
        {
            panda$core$Int64 $tmp2513 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2513, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2514.value);
            panda$core$Object* $tmp2515 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2516 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2515));
            org$pandalanguage$pandac$Type* $tmp2518 = (($fn2517) $tmp2516->$class->vtable[2])($tmp2516);
            panda$core$Int64 $tmp2519 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2518->subtypes);
            panda$core$Bit $tmp2520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2519, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2520.value);
            panda$core$Object* $tmp2522 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2523 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2522), p_out);
            base2521 = $tmp2523;
            panda$core$Object* $tmp2525 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2526 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2525), p_out);
            index2524 = $tmp2526;
            panda$core$Object* $tmp2528 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2529 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2528));
            panda$core$String* $tmp2530 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2529, p_out);
            value2527 = $tmp2530;
            panda$core$String* $tmp2531 = panda$core$String$convert$R$panda$core$String(base2521);
            panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, &$s2532);
            panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, index2524);
            panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, &$s2535);
            panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, value2527);
            panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, &$s2538);
            (($fn2540) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2539);
        }
        }
        else {
        panda$core$Bit $tmp2542 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1345_92491, &$s2541);
        if ($tmp2542.value) {
        {
            panda$core$Int64 $tmp2543 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2543, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2544.value);
            panda$core$Object* $tmp2546 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2547 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2546), p_out);
            panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2545, $tmp2547);
            panda$core$String* $tmp2550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2548, &$s2549);
            (($fn2551) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2550);
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
    org$pandalanguage$pandac$MethodDecl* m2552;
    org$pandalanguage$pandac$Type* actualMethodType2556;
    panda$core$String* actualResultType2557;
    panda$core$Bit isSuper2558;
    panda$collections$Array* argRefs2578;
    panda$core$Int64 offset2581;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2586;
    panda$core$String* arg2601;
    panda$core$String* targetRef2626;
    panda$core$String* methodRef2630;
    panda$core$String* separator2632;
    panda$core$String* indirectVar2636;
    panda$core$String* resultType2640;
    panda$collections$Iterator* a$Iter2664;
    panda$core$String* a2676;
    m2552 = p_mref->value;
    panda$core$Bit $tmp2554 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2552->owner)->name, &$s2553);
    if ($tmp2554.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_mref, p_args, p_out);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2552));
            return;
        }
    }
    }
    panda$core$Bit $tmp2555 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2552->owner);
    if ($tmp2555.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2552);
    }
    }
    memset(&actualMethodType2556, 0, sizeof(actualMethodType2556));
    memset(&actualResultType2557, 0, sizeof(actualResultType2557));
    panda$core$Int64 $tmp2560 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp2561 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2560, ((panda$core$Int64) { 1 }));
    bool $tmp2559 = $tmp2561.value;
    if (!$tmp2559) goto $l2562;
    panda$core$Object* $tmp2563 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2563)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp2559 = $tmp2564.value;
    $l2562:;
    panda$core$Bit $tmp2565 = { $tmp2559 };
    isSuper2558 = $tmp2565;
    panda$core$Bit $tmp2567 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2558);
    bool $tmp2566 = $tmp2567.value;
    if (!$tmp2566) goto $l2568;
    panda$core$Bit $tmp2569 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2552);
    $tmp2566 = $tmp2569.value;
    $l2568:;
    panda$core$Bit $tmp2570 = { $tmp2566 };
    if ($tmp2570.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2571 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2552);
            actualMethodType2556 = $tmp2571;
        }
        {
            panda$core$Int64 $tmp2572 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2556->subtypes);
            panda$core$Int64 $tmp2573 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2572, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2574 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2556->subtypes, $tmp2573);
            panda$core$String* $tmp2575 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2574));
            actualResultType2557 = $tmp2575;
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2576 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2552);
            actualMethodType2556 = $tmp2576;
        }
        {
            panda$core$String* $tmp2577 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            actualResultType2557 = $tmp2577;
        }
    }
    }
    panda$collections$Array* $tmp2579 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2579->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2579->refCount.value = 1;
    panda$collections$Array$init($tmp2579);
    argRefs2578 = $tmp2579;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(argRefs2578, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2582 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp2583 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2556->subtypes);
    panda$core$Int64 $tmp2584 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2582, $tmp2583);
    panda$core$Int64 $tmp2585 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2584, ((panda$core$Int64) { 1 }));
    offset2581 = $tmp2585;
    panda$core$Int64 $tmp2587 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2586, ((panda$core$Int64) { 0 }), $tmp2587, ((panda$core$Bit) { false }));
    int64_t $tmp2589 = $tmp2586.min.value;
    panda$core$Int64 i2588 = { $tmp2589 };
    int64_t $tmp2591 = $tmp2586.max.value;
    bool $tmp2592 = $tmp2586.inclusive.value;
    if ($tmp2592) goto $l2599; else goto $l2600;
    $l2599:;
    if ($tmp2589 <= $tmp2591) goto $l2593; else goto $l2595;
    $l2600:;
    if ($tmp2589 < $tmp2591) goto $l2593; else goto $l2595;
    $l2593:;
    {
        panda$core$Object* $tmp2602 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2588);
        panda$core$String* $tmp2603 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2602), p_out);
        arg2601 = $tmp2603;
        panda$core$Bit $tmp2605 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2588, offset2581);
        bool $tmp2604 = $tmp2605.value;
        if (!$tmp2604) goto $l2606;
        panda$core$Int64 $tmp2607 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2588, offset2581);
        panda$core$Object* $tmp2608 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2556->subtypes, $tmp2607);
        panda$core$Object* $tmp2609 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2588);
        org$pandalanguage$pandac$Type* $tmp2611 = (($fn2610) ((org$pandalanguage$pandac$IRNode*) $tmp2609)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2609));
        panda$core$Bit $tmp2612 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2608), $tmp2611);
        $tmp2604 = $tmp2612.value;
        $l2606:;
        panda$core$Bit $tmp2613 = { $tmp2604 };
        if ($tmp2613.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2601));
                panda$core$Object* $tmp2614 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2588);
                org$pandalanguage$pandac$Type* $tmp2616 = (($fn2615) ((org$pandalanguage$pandac$IRNode*) $tmp2614)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2614));
                panda$core$Int64 $tmp2617 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2588, offset2581);
                panda$core$Object* $tmp2618 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2556->subtypes, $tmp2617);
                panda$core$String* $tmp2619 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2601, $tmp2616, ((org$pandalanguage$pandac$Type*) $tmp2618), p_out);
                arg2601 = $tmp2619;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs2578, ((panda$core$Object*) arg2601));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2601));
    }
    $l2596:;
    int64_t $tmp2621 = $tmp2591 - i2588.value;
    if ($tmp2592) goto $l2622; else goto $l2623;
    $l2622:;
    if ((uint64_t) $tmp2621 >= 1) goto $l2620; else goto $l2595;
    $l2623:;
    if ((uint64_t) $tmp2621 > 1) goto $l2620; else goto $l2595;
    $l2620:;
    i2588.value += 1;
    goto $l2593;
    $l2595:;
    memset(&targetRef2626, 0, sizeof(targetRef2626));
    panda$core$Int64 $tmp2627 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs2578);
    panda$core$Bit $tmp2628 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2627, ((panda$core$Int64) { 0 }));
    if ($tmp2628.value) {
    {
        {
            panda$core$Object* $tmp2629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs2578, ((panda$core$Int64) { 0 }));
            targetRef2626 = ((panda$core$String*) $tmp2629);
        }
    }
    }
    else {
    {
        {
            targetRef2626 = NULL;
        }
    }
    }
    panda$core$String* $tmp2631 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, targetRef2626, m2552, isSuper2558, p_out);
    methodRef2630 = $tmp2631;
    separator2632 = &$s2633;
    panda$core$Bit $tmp2634 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2552);
    if ($tmp2634.value) {
    {
        panda$core$Int64 $tmp2635 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2635;
        panda$core$Int64$wrapper* $tmp2638;
        $tmp2638 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp2638->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2638->refCount = 1;
        $tmp2638->value = self->varCount;
        panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2637, ((panda$core$Object*) $tmp2638));
        indirectVar2636 = $tmp2639;
        panda$core$String* $tmp2641 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        resultType2640 = $tmp2641;
        panda$core$String* $tmp2642 = panda$core$String$convert$R$panda$core$String(resultType2640);
        panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2643);
        panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, indirectVar2636);
        panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2645, &$s2646);
        (($fn2648) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2647);
        panda$core$String* $tmp2649 = panda$core$String$convert$R$panda$core$String(methodRef2630);
        panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2650);
        panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, resultType2640);
        panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, &$s2653);
        panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, indirectVar2636);
        panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2655, &$s2656);
        (($fn2658) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2657);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2632));
            separator2632 = &$s2659;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultType2640));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar2636));
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2660 = panda$core$String$convert$R$panda$core$String(methodRef2630);
        panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, &$s2661);
        (($fn2663) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2662);
    }
    }
    {
        ITable* $tmp2665 = ((panda$collections$Iterable*) argRefs2578)->$class->itable;
        while ($tmp2665->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2665 = $tmp2665->next;
        }
        $fn2667 $tmp2666 = $tmp2665->methods[0];
        panda$collections$Iterator* $tmp2668 = $tmp2666(((panda$collections$Iterable*) argRefs2578));
        a$Iter2664 = $tmp2668;
        $l2669:;
        ITable* $tmp2671 = a$Iter2664->$class->itable;
        while ($tmp2671->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2671 = $tmp2671->next;
        }
        $fn2673 $tmp2672 = $tmp2671->methods[0];
        panda$core$Bit $tmp2674 = $tmp2672(a$Iter2664);
        panda$core$Bit $tmp2675 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2674);
        if (!$tmp2675.value) goto $l2670;
        {
            ITable* $tmp2677 = a$Iter2664->$class->itable;
            while ($tmp2677->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2677 = $tmp2677->next;
            }
            $fn2679 $tmp2678 = $tmp2677->methods[1];
            panda$core$Object* $tmp2680 = $tmp2678(a$Iter2664);
            a2676 = ((panda$core$String*) $tmp2680);
            (($fn2681) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2632);
            (($fn2682) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2676);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2632));
                separator2632 = &$s2683;
            }
        }
        goto $l2669;
        $l2670:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2668));
    }
    (($fn2685) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2684);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2632));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs2578));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef2630));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType2557));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2552));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetRef2626));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType2556));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$collections$ImmutableArray* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2686;
    panda$core$String* $tmp2687 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2686 = $tmp2687;
    panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2688, testRef2686);
    panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2689, &$s2690);
    (($fn2692) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2691);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { false }), p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_ifTrue, p_out);
    (($fn2694) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2693);
    if (((panda$core$Bit) { p_ifFalse != NULL }).value) {
    {
        (($fn2696) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2695);
        org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { false }), p_out);
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_ifFalse, p_out);
        (($fn2698) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2697);
    }
    }
    panda$collections$Array$clear(self->extraEffects);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef2686));
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2711;
    org$pandalanguage$pandac$Type* t2713;
    panda$core$String* llt2717;
    panda$core$String* indexType2719;
    org$pandalanguage$pandac$ClassDecl* cl2725;
    org$pandalanguage$pandac$FieldDecl* field2733;
    panda$core$String* numberType2739;
    panda$core$String* index2741;
    org$pandalanguage$pandac$IRNode* $match$1476_92742;
    org$pandalanguage$pandac$Variable* variable2744;
    panda$core$String* start2747;
    panda$core$String* indexValuePtr2759;
    panda$core$String* end2773;
    panda$core$String* inclusive2785;
    panda$core$String* loopStart2795;
    panda$core$String* loopBody2797;
    panda$core$String* loopEnd2799;
    panda$core$String* loopTest2801;
    panda$core$String* forwardEntry2805;
    panda$core$String* backwardEntry2807;
    panda$core$String* signPrefix2809;
    panda$core$String* unsigned2810;
    panda$core$String* forwardEntryInclusive2824;
    panda$core$String* forwardEntryExclusive2826;
    panda$core$String* loopInc2868;
    panda$core$String* forwardDelta2870;
    panda$core$String* forwardInclusiveLabel2885;
    panda$core$String* forwardExclusiveLabel2887;
    panda$core$String* forwardExclusiveTest2916;
    panda$core$String* inc2933;
    org$pandalanguage$pandac$Type* $tmp2700 = (($fn2699) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2700->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2701.value);
    org$pandalanguage$pandac$Type* $tmp2703 = (($fn2702) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2704 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2703->subtypes);
    panda$core$Bit $tmp2705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2704, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2705.value);
    org$pandalanguage$pandac$Type* $tmp2707 = (($fn2706) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2708 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2707->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2710 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2708))->name, &$s2709);
    PANDA_ASSERT($tmp2710.value);
    panda$core$String* $tmp2712 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range2711 = $tmp2712;
    org$pandalanguage$pandac$Type* $tmp2715 = (($fn2714) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2716 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2715->subtypes, ((panda$core$Int64) { 1 }));
    t2713 = ((org$pandalanguage$pandac$Type*) $tmp2716);
    panda$core$String* $tmp2718 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2713);
    llt2717 = $tmp2718;
    memset(&indexType2719, 0, sizeof(indexType2719));
    panda$core$Bit $tmp2720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2713->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2720.value) {
    {
        panda$core$Int64 $tmp2721 = panda$collections$Array$get_count$R$panda$core$Int64(t2713->subtypes);
        panda$core$Bit $tmp2722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2721, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2722.value);
        {
            panda$core$Object* $tmp2723 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2713->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2724 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2723));
            indexType2719 = $tmp2724;
        }
    }
    }
    else {
    {
        {
            indexType2719 = llt2717;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2726 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2713);
    cl2725 = $tmp2726;
    PANDA_ASSERT(((panda$core$Bit) { cl2725 != NULL }).value);
    panda$collections$ListView* $tmp2727 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2725);
    ITable* $tmp2728 = ((panda$collections$CollectionView*) $tmp2727)->$class->itable;
    while ($tmp2728->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2728 = $tmp2728->next;
    }
    $fn2730 $tmp2729 = $tmp2728->methods[0];
    panda$core$Int64 $tmp2731 = $tmp2729(((panda$collections$CollectionView*) $tmp2727));
    panda$core$Bit $tmp2732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2731, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2732.value);
    panda$collections$ListView* $tmp2734 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2725);
    ITable* $tmp2735 = $tmp2734->$class->itable;
    while ($tmp2735->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2735 = $tmp2735->next;
    }
    $fn2737 $tmp2736 = $tmp2735->methods[0];
    panda$core$Object* $tmp2738 = $tmp2736($tmp2734, ((panda$core$Int64) { 0 }));
    field2733 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2738);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2733);
    panda$core$String* $tmp2740 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2733->type);
    numberType2739 = $tmp2740;
    memset(&index2741, 0, sizeof(index2741));
    {
        $match$1476_92742 = p_target;
        panda$core$Bit $tmp2743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1476_92742->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2743.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2745 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1476_92742->$data + 16));
            variable2744 = *$tmp2745;
            {
                panda$core$String* $tmp2746 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2744);
                index2741 = $tmp2746;
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2748 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2747 = $tmp2748;
    panda$core$String* $tmp2749 = panda$core$String$convert$R$panda$core$String(numberType2739);
    panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, &$s2750);
    panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, start2747);
    panda$core$String* $tmp2754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2752, &$s2753);
    panda$core$String* $tmp2755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2754, range2711);
    panda$core$String* $tmp2757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2755, &$s2756);
    (($fn2758) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2757);
    panda$core$String* $tmp2760 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2759 = $tmp2760;
    org$pandalanguage$pandac$Type* $tmp2761 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2725);
    panda$core$String* $tmp2762 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2761);
    panda$core$String* $tmp2763 = panda$core$String$convert$R$panda$core$String($tmp2762);
    panda$core$String* $tmp2765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, &$s2764);
    panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, index2741);
    panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2766, &$s2767);
    panda$core$String* $tmp2769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2768, start2747);
    panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2769, &$s2770);
    (($fn2772) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2771);
    panda$core$String* $tmp2774 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2773 = $tmp2774;
    panda$core$String* $tmp2775 = panda$core$String$convert$R$panda$core$String(numberType2739);
    panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, &$s2776);
    panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, end2773);
    panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, &$s2779);
    panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, range2711);
    panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2781, &$s2782);
    (($fn2784) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2783);
    panda$core$String* $tmp2786 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2785 = $tmp2786;
    panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2787, inclusive2785);
    panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, &$s2789);
    panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, range2711);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, &$s2792);
    (($fn2794) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2793);
    panda$core$String* $tmp2796 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2795 = $tmp2796;
    panda$core$String* $tmp2798 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2797 = $tmp2798;
    panda$core$String* $tmp2800 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2799 = $tmp2800;
    panda$core$String* $tmp2802 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2801 = $tmp2802;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2803 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp2803->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2803->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2803, p_label, loopEnd2799, loopTest2801);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2803));
    panda$core$String* $tmp2806 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2805 = $tmp2806;
    panda$core$String* $tmp2808 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2807 = $tmp2808;
    memset(&signPrefix2809, 0, sizeof(signPrefix2809));
    memset(&unsigned2810, 0, sizeof(unsigned2810));
    panda$core$Bit $tmp2812 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2713)->name, &$s2811);
    if ($tmp2812.value) {
    {
        {
            signPrefix2809 = &$s2813;
        }
        {
            panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2814, numberType2739);
            unsigned2810 = $tmp2815;
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp2818 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2713)->name, &$s2817);
        bool $tmp2816 = $tmp2818.value;
        if ($tmp2816) goto $l2819;
        panda$core$Bit $tmp2821 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2713)->name, &$s2820);
        $tmp2816 = $tmp2821.value;
        $l2819:;
        panda$core$Bit $tmp2822 = { $tmp2816 };
        PANDA_ASSERT($tmp2822.value);
        {
            signPrefix2809 = &$s2823;
        }
        {
            unsigned2810 = numberType2739;
        }
    }
    }
    panda$core$String* $tmp2825 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2824 = $tmp2825;
    panda$core$String* $tmp2827 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2826 = $tmp2827;
    panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2828, inclusive2785);
    panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, &$s2830);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2831, forwardEntryInclusive2824);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, &$s2833);
    panda$core$String* $tmp2835 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2826);
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, &$s2836);
    panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, $tmp2837);
    (($fn2839) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2838);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2824, p_out);
    panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2840, start2747);
    panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, &$s2842);
    panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2843, end2773);
    panda$core$String* $tmp2846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2844, &$s2845);
    panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2846, loopStart2795);
    panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2847, &$s2848);
    panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2849, loopEnd2799);
    panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, &$s2851);
    (($fn2853) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2852);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2826, p_out);
    panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2854, start2747);
    panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, &$s2856);
    panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2857, end2773);
    panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, &$s2859);
    panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2860, loopStart2795);
    panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, &$s2862);
    panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, loopEnd2799);
    panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, &$s2865);
    (($fn2867) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2866);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2795, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2801, p_out);
    panda$core$String* $tmp2869 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2868 = $tmp2869;
    panda$core$String* $tmp2871 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2870 = $tmp2871;
    panda$core$String* $tmp2872 = panda$core$String$convert$R$panda$core$String(numberType2739);
    panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2872, &$s2873);
    panda$core$String* $tmp2875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2874, forwardDelta2870);
    panda$core$String* $tmp2877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2875, &$s2876);
    panda$core$String* $tmp2878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2877, end2773);
    panda$core$String* $tmp2880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2878, &$s2879);
    panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2880, index2741);
    panda$core$String* $tmp2883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2881, &$s2882);
    (($fn2884) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2883);
    panda$core$String* $tmp2886 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2885 = $tmp2886;
    panda$core$String* $tmp2888 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2887 = $tmp2888;
    panda$core$String* $tmp2890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2889, inclusive2785);
    panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2890, &$s2891);
    panda$core$String* $tmp2893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2892, forwardInclusiveLabel2885);
    panda$core$String* $tmp2895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2893, &$s2894);
    panda$core$String* $tmp2896 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2887);
    panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, &$s2897);
    panda$core$String* $tmp2899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2895, $tmp2898);
    (($fn2900) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2899);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2885, p_out);
    panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2901, unsigned2810);
    panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, &$s2903);
    panda$core$String* $tmp2905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2904, forwardDelta2870);
    panda$core$String* $tmp2907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2905, &$s2906);
    panda$core$String* $tmp2908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2907, loopInc2868);
    panda$core$String* $tmp2910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2908, &$s2909);
    panda$core$String* $tmp2911 = panda$core$String$convert$R$panda$core$String(loopEnd2799);
    panda$core$String* $tmp2913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2911, &$s2912);
    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2910, $tmp2913);
    (($fn2915) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2914);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2887, p_out);
    panda$core$String* $tmp2917 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2916 = $tmp2917;
    panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2918, unsigned2810);
    panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, &$s2920);
    panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2921, forwardDelta2870);
    panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, &$s2923);
    panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, loopInc2868);
    panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2925, &$s2926);
    panda$core$String* $tmp2928 = panda$core$String$convert$R$panda$core$String(loopEnd2799);
    panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2928, &$s2929);
    panda$core$String* $tmp2931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, $tmp2930);
    (($fn2932) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2931);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2868, p_out);
    panda$core$String* $tmp2934 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2933 = $tmp2934;
    panda$core$String* $tmp2935 = panda$core$String$convert$R$panda$core$String(index2741);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, &$s2936);
    (($fn2938) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2937);
    panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2939, loopStart2795);
    panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2940, &$s2941);
    (($fn2943) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2942);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2799, p_out);
    panda$core$Object* $tmp2944 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix2809));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel2887));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive2785));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned2810));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2747));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody2797));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest2801));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive2824));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2713));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel2885));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end2773));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc2933));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart2795));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry2807));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr2759));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd2799));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc2868));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2719));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt2717));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest2916));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1476_92742));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType2739));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry2805));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2741));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive2826));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2733));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta2870));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2725));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range2711));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2957;
    org$pandalanguage$pandac$Type* t2959;
    org$pandalanguage$pandac$Type* stepType2963;
    panda$core$String* llt2967;
    panda$core$String* indexType2969;
    org$pandalanguage$pandac$ClassDecl* cl2975;
    org$pandalanguage$pandac$FieldDecl* field2983;
    panda$core$String* numberType2989;
    panda$core$String* index2991;
    org$pandalanguage$pandac$IRNode* $match$1588_92992;
    org$pandalanguage$pandac$Variable* variable2994;
    panda$core$String* start2997;
    panda$core$String* indexValuePtr3009;
    panda$core$String* end3023;
    panda$core$String* step3035;
    org$pandalanguage$pandac$ClassDecl* stepCl3037;
    org$pandalanguage$pandac$FieldDecl* stepField3045;
    panda$core$String* inclusive3062;
    panda$core$String* loopStart3072;
    panda$core$String* loopBody3074;
    panda$core$String* loopEnd3076;
    panda$core$String* loopTest3078;
    panda$core$String* forwardEntry3082;
    panda$core$String* backwardEntry3084;
    panda$core$String* unsigned3086;
    panda$core$String* signPrefix3087;
    panda$core$String* direction3103;
    panda$core$String* forwardEntryInclusive3127;
    panda$core$String* forwardEntryExclusive3129;
    panda$core$String* backwardEntryInclusive3171;
    panda$core$String* backwardEntryExclusive3173;
    panda$core$String* backwardEntryExclusiveTest3201;
    panda$core$String* loopInc3217;
    panda$core$String* forwardLabel3219;
    panda$core$String* backwardLabel3221;
    panda$core$String* forwardDelta3234;
    panda$core$String* forwardInclusiveLabel3249;
    panda$core$String* forwardExclusiveLabel3251;
    panda$core$String* forwardExclusiveTest3283;
    panda$core$String* backwardDelta3303;
    panda$core$String* backwardInclusiveLabel3318;
    panda$core$String* backwardExclusiveLabel3320;
    panda$core$String* inc3372;
    org$pandalanguage$pandac$Type* $tmp2946 = (($fn2945) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2946->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2947.value);
    org$pandalanguage$pandac$Type* $tmp2949 = (($fn2948) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2950 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2949->subtypes);
    panda$core$Bit $tmp2951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2950, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2951.value);
    org$pandalanguage$pandac$Type* $tmp2953 = (($fn2952) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2954 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2953->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2956 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2954))->name, &$s2955);
    PANDA_ASSERT($tmp2956.value);
    panda$core$String* $tmp2958 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range2957 = $tmp2958;
    org$pandalanguage$pandac$Type* $tmp2961 = (($fn2960) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2962 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2961->subtypes, ((panda$core$Int64) { 1 }));
    t2959 = ((org$pandalanguage$pandac$Type*) $tmp2962);
    org$pandalanguage$pandac$Type* $tmp2965 = (($fn2964) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2966 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2965->subtypes, ((panda$core$Int64) { 2 }));
    stepType2963 = ((org$pandalanguage$pandac$Type*) $tmp2966);
    panda$core$String* $tmp2968 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2959);
    llt2967 = $tmp2968;
    memset(&indexType2969, 0, sizeof(indexType2969));
    panda$core$Bit $tmp2970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2959->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2970.value) {
    {
        panda$core$Int64 $tmp2971 = panda$collections$Array$get_count$R$panda$core$Int64(t2959->subtypes);
        panda$core$Bit $tmp2972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2971, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2972.value);
        {
            panda$core$Object* $tmp2973 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2959->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2974 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2973));
            indexType2969 = $tmp2974;
        }
    }
    }
    else {
    {
        {
            indexType2969 = llt2967;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2976 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2959);
    cl2975 = $tmp2976;
    PANDA_ASSERT(((panda$core$Bit) { cl2975 != NULL }).value);
    panda$collections$ListView* $tmp2977 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2975);
    ITable* $tmp2978 = ((panda$collections$CollectionView*) $tmp2977)->$class->itable;
    while ($tmp2978->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2978 = $tmp2978->next;
    }
    $fn2980 $tmp2979 = $tmp2978->methods[0];
    panda$core$Int64 $tmp2981 = $tmp2979(((panda$collections$CollectionView*) $tmp2977));
    panda$core$Bit $tmp2982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2981, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2982.value);
    panda$collections$ListView* $tmp2984 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2975);
    ITable* $tmp2985 = $tmp2984->$class->itable;
    while ($tmp2985->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2985 = $tmp2985->next;
    }
    $fn2987 $tmp2986 = $tmp2985->methods[0];
    panda$core$Object* $tmp2988 = $tmp2986($tmp2984, ((panda$core$Int64) { 0 }));
    field2983 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2988);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2983);
    panda$core$String* $tmp2990 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2983->type);
    numberType2989 = $tmp2990;
    memset(&index2991, 0, sizeof(index2991));
    {
        $match$1588_92992 = p_target;
        panda$core$Bit $tmp2993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1588_92992->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2993.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2995 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1588_92992->$data + 16));
            variable2994 = *$tmp2995;
            {
                panda$core$String* $tmp2996 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2994);
                index2991 = $tmp2996;
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2998 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2997 = $tmp2998;
    panda$core$String* $tmp2999 = panda$core$String$convert$R$panda$core$String(numberType2989);
    panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2999, &$s3000);
    panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, start2997);
    panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, &$s3003);
    panda$core$String* $tmp3005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3004, range2957);
    panda$core$String* $tmp3007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3005, &$s3006);
    (($fn3008) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3007);
    panda$core$String* $tmp3010 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr3009 = $tmp3010;
    org$pandalanguage$pandac$Type* $tmp3011 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2975);
    panda$core$String* $tmp3012 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3011);
    panda$core$String* $tmp3013 = panda$core$String$convert$R$panda$core$String($tmp3012);
    panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, &$s3014);
    panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3015, index2991);
    panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3017);
    panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, start2997);
    panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, &$s3020);
    (($fn3022) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3021);
    panda$core$String* $tmp3024 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end3023 = $tmp3024;
    panda$core$String* $tmp3025 = panda$core$String$convert$R$panda$core$String(numberType2989);
    panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3025, &$s3026);
    panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3027, end3023);
    panda$core$String* $tmp3030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3028, &$s3029);
    panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3030, range2957);
    panda$core$String* $tmp3033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3031, &$s3032);
    (($fn3034) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3033);
    panda$core$String* $tmp3036 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step3035 = $tmp3036;
    org$pandalanguage$pandac$ClassDecl* $tmp3038 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, stepType2963);
    stepCl3037 = $tmp3038;
    PANDA_ASSERT(((panda$core$Bit) { stepCl3037 != NULL }).value);
    panda$collections$ListView* $tmp3039 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl3037);
    ITable* $tmp3040 = ((panda$collections$CollectionView*) $tmp3039)->$class->itable;
    while ($tmp3040->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3040 = $tmp3040->next;
    }
    $fn3042 $tmp3041 = $tmp3040->methods[0];
    panda$core$Int64 $tmp3043 = $tmp3041(((panda$collections$CollectionView*) $tmp3039));
    panda$core$Bit $tmp3044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3043, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3044.value);
    panda$collections$ListView* $tmp3046 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl3037);
    ITable* $tmp3047 = $tmp3046->$class->itable;
    while ($tmp3047->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp3047 = $tmp3047->next;
    }
    $fn3049 $tmp3048 = $tmp3047->methods[0];
    panda$core$Object* $tmp3050 = $tmp3048($tmp3046, ((panda$core$Int64) { 0 }));
    stepField3045 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3050);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, stepField3045);
    panda$core$String* $tmp3051 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, stepField3045->type);
    panda$core$String* $tmp3052 = panda$core$String$convert$R$panda$core$String($tmp3051);
    panda$core$String* $tmp3054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3052, &$s3053);
    panda$core$String* $tmp3055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3054, step3035);
    panda$core$String* $tmp3057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3055, &$s3056);
    panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3057, range2957);
    panda$core$String* $tmp3060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, &$s3059);
    (($fn3061) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3060);
    panda$core$String* $tmp3063 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive3062 = $tmp3063;
    panda$core$String* $tmp3065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3064, inclusive3062);
    panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3065, &$s3066);
    panda$core$String* $tmp3068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3067, range2957);
    panda$core$String* $tmp3070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3068, &$s3069);
    (($fn3071) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3070);
    panda$core$String* $tmp3073 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3072 = $tmp3073;
    panda$core$String* $tmp3075 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody3074 = $tmp3075;
    panda$core$String* $tmp3077 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3076 = $tmp3077;
    panda$core$String* $tmp3079 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest3078 = $tmp3079;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3080 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp3080->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3080->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3080, p_label, loopEnd3076, loopTest3078);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3080));
    panda$core$String* $tmp3083 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry3082 = $tmp3083;
    panda$core$String* $tmp3085 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry3084 = $tmp3085;
    memset(&unsigned3086, 0, sizeof(unsigned3086));
    memset(&signPrefix3087, 0, sizeof(signPrefix3087));
    panda$core$Bit $tmp3089 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2963)->name, &$s3088);
    if ($tmp3089.value) {
    {
        {
            signPrefix3087 = &$s3090;
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp3093 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2963)->name, &$s3092);
        bool $tmp3091 = $tmp3093.value;
        if ($tmp3091) goto $l3094;
        panda$core$Bit $tmp3096 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2963)->name, &$s3095);
        $tmp3091 = $tmp3096.value;
        $l3094:;
        panda$core$Bit $tmp3097 = { $tmp3091 };
        PANDA_ASSERT($tmp3097.value);
        {
            signPrefix3087 = &$s3098;
        }
    }
    }
    panda$core$Bit $tmp3100 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(numberType2989, &$s3099);
    if ($tmp3100.value) {
    {
        {
            unsigned3086 = numberType2989;
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3101, numberType2989);
            unsigned3086 = $tmp3102;
        }
    }
    }
    memset(&direction3103, 0, sizeof(direction3103));
    panda$core$Bit $tmp3105 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix3087, &$s3104);
    if ($tmp3105.value) {
    {
        {
            panda$core$String* $tmp3106 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            direction3103 = $tmp3106;
        }
        panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3107, direction3103);
        panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3108, &$s3109);
        panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, step3035);
        panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, &$s3112);
        (($fn3114) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3113);
    }
    }
    else {
    {
        {
            direction3103 = &$s3115;
        }
    }
    }
    panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3116, direction3103);
    panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, &$s3118);
    panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, forwardEntry3082);
    panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3120, &$s3121);
    panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, backwardEntry3084);
    panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3123, &$s3124);
    (($fn3126) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3125);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry3082, p_out);
    panda$core$String* $tmp3128 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive3127 = $tmp3128;
    panda$core$String* $tmp3130 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive3129 = $tmp3130;
    panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3131, inclusive3062);
    panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3132, &$s3133);
    panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3134, forwardEntryInclusive3127);
    panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, &$s3136);
    panda$core$String* $tmp3138 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive3129);
    panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3138, &$s3139);
    panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, $tmp3140);
    (($fn3142) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3141);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive3127, p_out);
    panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3143, start2997);
    panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3144, &$s3145);
    panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3146, end3023);
    panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, &$s3148);
    panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3149, loopStart3072);
    panda$core$String* $tmp3152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3150, &$s3151);
    panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3152, loopEnd3076);
    panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3153, &$s3154);
    (($fn3156) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3155);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive3129, p_out);
    panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3157, start2997);
    panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, &$s3159);
    panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, end3023);
    panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, &$s3162);
    panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, loopStart3072);
    panda$core$String* $tmp3166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3164, &$s3165);
    panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3166, loopEnd3076);
    panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, &$s3168);
    (($fn3170) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3169);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry3084, p_out);
    panda$core$String* $tmp3172 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive3171 = $tmp3172;
    panda$core$String* $tmp3174 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive3173 = $tmp3174;
    panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3175, inclusive3062);
    panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, &$s3177);
    panda$core$String* $tmp3179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, backwardEntryInclusive3171);
    panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3179, &$s3180);
    panda$core$String* $tmp3182 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive3173);
    panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3182, &$s3183);
    panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3181, $tmp3184);
    (($fn3186) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3185);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive3171, p_out);
    panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3187, start2997);
    panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3188, &$s3189);
    panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3190, end3023);
    panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, &$s3192);
    panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3193, loopStart3072);
    panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, &$s3195);
    panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, loopEnd3076);
    panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, &$s3198);
    (($fn3200) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3199);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive3173, p_out);
    panda$core$String* $tmp3202 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest3201 = $tmp3202;
    panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3203, start2997);
    panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, &$s3205);
    panda$core$String* $tmp3207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, end3023);
    panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, &$s3208);
    panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3209, loopStart3072);
    panda$core$String* $tmp3212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3210, &$s3211);
    panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3212, loopEnd3076);
    panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3213, &$s3214);
    (($fn3216) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3215);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3072, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest3078, p_out);
    panda$core$String* $tmp3218 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc3217 = $tmp3218;
    panda$core$String* $tmp3220 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel3219 = $tmp3220;
    panda$core$String* $tmp3222 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel3221 = $tmp3222;
    panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3223, direction3103);
    panda$core$String* $tmp3226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3224, &$s3225);
    panda$core$String* $tmp3227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3226, forwardLabel3219);
    panda$core$String* $tmp3229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3227, &$s3228);
    panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3229, backwardLabel3221);
    panda$core$String* $tmp3232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3230, &$s3231);
    (($fn3233) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3232);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel3219, p_out);
    panda$core$String* $tmp3235 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta3234 = $tmp3235;
    panda$core$String* $tmp3236 = panda$core$String$convert$R$panda$core$String(numberType2989);
    panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3236, &$s3237);
    panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, forwardDelta3234);
    panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, &$s3240);
    panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, end3023);
    panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3242, &$s3243);
    panda$core$String* $tmp3245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3244, index2991);
    panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3245, &$s3246);
    (($fn3248) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3247);
    panda$core$String* $tmp3250 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel3249 = $tmp3250;
    panda$core$String* $tmp3252 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel3251 = $tmp3252;
    panda$core$String* $tmp3254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3253, inclusive3062);
    panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3254, &$s3255);
    panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, forwardInclusiveLabel3249);
    panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3257, &$s3258);
    panda$core$String* $tmp3260 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel3251);
    panda$core$String* $tmp3262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3260, &$s3261);
    panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3259, $tmp3262);
    (($fn3264) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3263);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel3249, p_out);
    panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3265, unsigned3086);
    panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3266, &$s3267);
    panda$core$String* $tmp3269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3268, forwardDelta3234);
    panda$core$String* $tmp3271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3269, &$s3270);
    panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3271, step3035);
    panda$core$String* $tmp3274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3272, &$s3273);
    panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3274, loopInc3217);
    panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3275, &$s3276);
    panda$core$String* $tmp3278 = panda$core$String$convert$R$panda$core$String(loopEnd3076);
    panda$core$String* $tmp3280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3278, &$s3279);
    panda$core$String* $tmp3281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3277, $tmp3280);
    (($fn3282) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3281);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel3251, p_out);
    panda$core$String* $tmp3284 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest3283 = $tmp3284;
    panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3285, unsigned3086);
    panda$core$String* $tmp3288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3286, &$s3287);
    panda$core$String* $tmp3289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3288, forwardDelta3234);
    panda$core$String* $tmp3291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3289, &$s3290);
    panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3291, step3035);
    panda$core$String* $tmp3294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3292, &$s3293);
    panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3294, loopInc3217);
    panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3295, &$s3296);
    panda$core$String* $tmp3298 = panda$core$String$convert$R$panda$core$String(loopEnd3076);
    panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3298, &$s3299);
    panda$core$String* $tmp3301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3297, $tmp3300);
    (($fn3302) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3301);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel3221, p_out);
    panda$core$String* $tmp3304 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta3303 = $tmp3304;
    panda$core$String* $tmp3305 = panda$core$String$convert$R$panda$core$String(numberType2989);
    panda$core$String* $tmp3307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3305, &$s3306);
    panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3307, backwardDelta3303);
    panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3308, &$s3309);
    panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, index2991);
    panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3311, &$s3312);
    panda$core$String* $tmp3314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3313, end3023);
    panda$core$String* $tmp3316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3314, &$s3315);
    (($fn3317) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3316);
    panda$core$String* $tmp3319 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel3318 = $tmp3319;
    panda$core$String* $tmp3321 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel3320 = $tmp3321;
    panda$core$String* $tmp3323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3322, inclusive3062);
    panda$core$String* $tmp3325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3323, &$s3324);
    panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3325, backwardInclusiveLabel3318);
    panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, &$s3327);
    panda$core$String* $tmp3329 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel3320);
    panda$core$String* $tmp3331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3329, &$s3330);
    panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, $tmp3331);
    (($fn3333) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3332);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel3318, p_out);
    panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3334, unsigned3086);
    panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, &$s3336);
    panda$core$String* $tmp3338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, backwardDelta3303);
    panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3338, &$s3339);
    panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3340, step3035);
    panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
    panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, loopInc3217);
    panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3344, &$s3345);
    panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3347, loopEnd3076);
    panda$core$String* $tmp3350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3348, &$s3349);
    panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, $tmp3350);
    (($fn3352) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3351);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel3320, p_out);
    panda$core$String* $tmp3354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3353, unsigned3086);
    panda$core$String* $tmp3356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3354, &$s3355);
    panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3356, backwardDelta3303);
    panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3357, &$s3358);
    panda$core$String* $tmp3360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, step3035);
    panda$core$String* $tmp3362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3360, &$s3361);
    panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3362, loopInc3217);
    panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, &$s3364);
    panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3366, loopEnd3076);
    panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3367, &$s3368);
    panda$core$String* $tmp3370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, $tmp3369);
    (($fn3371) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3370);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc3217, p_out);
    panda$core$String* $tmp3373 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3372 = $tmp3373;
    panda$core$String* $tmp3374 = panda$core$String$convert$R$panda$core$String(index2991);
    panda$core$String* $tmp3376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3374, &$s3375);
    panda$core$String* $tmp3377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3376, step3035);
    panda$core$String* $tmp3379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3377, &$s3378);
    (($fn3380) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3379);
    panda$core$String* $tmp3382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3381, loopStart3072);
    panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3382, &$s3383);
    (($fn3385) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3384);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3076, p_out);
    panda$core$Object* $tmp3386 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardInclusiveLabel3318));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix3087));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel3251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive3062));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned3086));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardLabel3221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusiveTest3201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2997));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody3074));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardLabel3219));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest3078));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusive3173));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive3127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardExclusiveLabel3320));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2959));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel3249));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end3023));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepCl3037));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc3372));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step3035));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3072));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry3084));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr3009));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc3217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepType2963));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3076));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepField3045));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2969));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt2967));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardDelta3303));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest3283));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType2989));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry3082));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2991));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive3129));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) direction3103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2983));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta3234));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2975));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryInclusive3171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range2957));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1588_92992));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Type* $tmp3388 = (($fn3387) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3389 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit($tmp3388);
    if ($tmp3389.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_label, p_target, p_list, p_statements, p_out);
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp3391 = (($fn3390) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3392 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit($tmp3391);
    if ($tmp3392.value) {
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
    panda$core$String* loopStart3397;
    panda$core$String* loopEnd3399;
    org$pandalanguage$pandac$Type* $tmp3394 = (($fn3393) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3395 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3396 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3394, $tmp3395);
    PANDA_ASSERT($tmp3396.value);
    panda$core$String* $tmp3398 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3397 = $tmp3398;
    panda$core$String* $tmp3400 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3399 = $tmp3400;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3401 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp3401->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3401->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3401, p_label, loopEnd3399, loopStart3397);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3401));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3397, p_out);
    panda$core$String* $tmp3404 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3403, $tmp3404);
    panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, &$s3406);
    panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3407, loopEnd3399);
    panda$core$String* $tmp3410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3408, &$s3409);
    (($fn3411) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3410);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3412, loopStart3397);
    panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, &$s3414);
    (($fn3416) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3415);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3399, p_out);
    panda$core$Object* $tmp3417 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3399));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3397));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3422;
    panda$core$String* loopEnd3424;
    org$pandalanguage$pandac$Type* $tmp3419 = (($fn3418) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3420 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3421 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3419, $tmp3420);
    PANDA_ASSERT($tmp3421.value);
    panda$core$String* $tmp3423 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3422 = $tmp3423;
    panda$core$String* $tmp3425 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3424 = $tmp3425;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3426 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp3426->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3426->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3426, p_label, loopEnd3424, loopStart3422);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3426));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3422, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3429 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3428, $tmp3429);
    panda$core$String* $tmp3432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3430, &$s3431);
    panda$core$String* $tmp3433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3432, loopStart3422);
    panda$core$String* $tmp3435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3433, &$s3434);
    (($fn3436) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3435);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3424, p_out);
    panda$core$Object* $tmp3437 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3424));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3422));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3438;
    panda$core$String* loopEnd3440;
    panda$core$String* $tmp3439 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3438 = $tmp3439;
    panda$core$String* $tmp3441 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3440 = $tmp3441;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3442 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaZAlloc(40);
    $tmp3442->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3442->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3442, p_label, loopEnd3440, loopStart3438);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3442));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3438, p_out);
    (($fn3445) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3444);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    (($fn3447) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3446);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3440, p_out);
    panda$core$Object* $tmp3448 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3440));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3438));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1790_93449;
    org$pandalanguage$pandac$Variable* v3451;
    {
        $match$1790_93449 = p_target;
        panda$core$Bit $tmp3450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1790_93449->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3450.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3452 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1790_93449->$data + 16));
            v3451 = *$tmp3452;
            panda$core$String* $tmp3453 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3451->type);
            panda$core$String* $tmp3454 = panda$core$String$convert$R$panda$core$String($tmp3453);
            panda$core$String* $tmp3456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3454, &$s3455);
            panda$core$String* $tmp3457 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3451);
            panda$core$String* $tmp3458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3456, $tmp3457);
            panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3458, &$s3459);
            (($fn3461) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3460);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3462 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3451);
                panda$core$String* $tmp3463 = panda$core$String$convert$R$panda$core$String($tmp3462);
                panda$core$String* $tmp3465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3463, &$s3464);
                panda$core$String* $tmp3466 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3465, $tmp3466);
                panda$core$String* $tmp3469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3467, &$s3468);
                (($fn3470) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3469);
            }
            }
            else {
            {
                panda$core$String* $tmp3472 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3451);
                panda$core$String* $tmp3473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3471, $tmp3472);
                panda$core$String* $tmp3475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3473, &$s3474);
                panda$core$String* $tmp3476 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3451);
                panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3475, $tmp3476);
                panda$core$String* $tmp3479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3477, &$s3478);
                (($fn3480) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3479);
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
    panda$collections$Iterator* decl$Iter3481;
    org$pandalanguage$pandac$IRNode* decl3493;
    org$pandalanguage$pandac$IRNode* $match$1806_133498;
    org$pandalanguage$pandac$IRNode* target3500;
    org$pandalanguage$pandac$IRNode* value3502;
    {
        ITable* $tmp3482 = ((panda$collections$Iterable*) p_decls)->$class->itable;
        while ($tmp3482->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3482 = $tmp3482->next;
        }
        $fn3484 $tmp3483 = $tmp3482->methods[0];
        panda$collections$Iterator* $tmp3485 = $tmp3483(((panda$collections$Iterable*) p_decls));
        decl$Iter3481 = $tmp3485;
        $l3486:;
        ITable* $tmp3488 = decl$Iter3481->$class->itable;
        while ($tmp3488->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3488 = $tmp3488->next;
        }
        $fn3490 $tmp3489 = $tmp3488->methods[0];
        panda$core$Bit $tmp3491 = $tmp3489(decl$Iter3481);
        panda$core$Bit $tmp3492 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3491);
        if (!$tmp3492.value) goto $l3487;
        {
            ITable* $tmp3494 = decl$Iter3481->$class->itable;
            while ($tmp3494->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3494 = $tmp3494->next;
            }
            $fn3496 $tmp3495 = $tmp3494->methods[1];
            panda$core$Object* $tmp3497 = $tmp3495(decl$Iter3481);
            decl3493 = ((org$pandalanguage$pandac$IRNode*) $tmp3497);
            {
                $match$1806_133498 = decl3493;
                panda$core$Bit $tmp3499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1806_133498->$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp3499.value) {
                {
                    org$pandalanguage$pandac$IRNode** $tmp3501 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1806_133498->$data + 0));
                    target3500 = *$tmp3501;
                    org$pandalanguage$pandac$IRNode** $tmp3503 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1806_133498->$data + 8));
                    value3502 = *$tmp3503;
                    org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, target3500, value3502, p_out);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l3486;
        $l3487:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3485));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1816_93504;
    org$pandalanguage$pandac$Variable* v3509;
    org$pandalanguage$pandac$IRNode* base3513;
    org$pandalanguage$pandac$FieldDecl* field3515;
    panda$core$String* baseRef3517;
    org$pandalanguage$pandac$IRNode* value3526;
    panda$core$Int64 id3528;
    panda$core$String* result3530;
    org$pandalanguage$pandac$IRNode* value3534;
    org$pandalanguage$pandac$ChoiceEntry* ce3536;
    panda$core$Int64 field3538;
    org$pandalanguage$pandac$FieldDecl* data3540;
    org$pandalanguage$pandac$IRNode* fieldRef3544;
    panda$core$String* base3549;
    panda$core$Int64 size3551;
    panda$core$Int64 offset3553;
    panda$core$String* result3555;
    {
        $match$1816_93504 = p_lvalue;
        panda$core$Bit $tmp3505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1816_93504->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp3505.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3506 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3507 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3506, p_out);
            return $tmp3507;
        }
        }
        else {
        panda$core$Bit $tmp3508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1816_93504->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3508.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3510 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1816_93504->$data + 16));
            v3509 = *$tmp3510;
            panda$core$String* $tmp3511 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3509);
            return $tmp3511;
        }
        }
        else {
        panda$core$Bit $tmp3512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1816_93504->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp3512.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3514 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1816_93504->$data + 24));
            base3513 = *$tmp3514;
            org$pandalanguage$pandac$FieldDecl** $tmp3516 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1816_93504->$data + 32));
            field3515 = *$tmp3516;
            panda$core$String* $tmp3518 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3513, p_out);
            baseRef3517 = $tmp3518;
            panda$core$String* $tmp3519 = panda$core$String$convert$R$panda$core$String(baseRef3517);
            panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, &$s3520);
            panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3521, ((org$pandalanguage$pandac$Symbol*) field3515)->name);
            panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, &$s3523);
            return $tmp3524;
        }
        }
        else {
        panda$core$Bit $tmp3525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1816_93504->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3525.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3527 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1816_93504->$data + 0));
            value3526 = *$tmp3527;
            panda$core$Int64* $tmp3529 = ((panda$core$Int64*) ((char*) $match$1816_93504->$data + 8));
            id3528 = *$tmp3529;
            panda$core$String* $tmp3531 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value3526, p_out);
            result3530 = $tmp3531;
            panda$core$Int64$wrapper* $tmp3532;
            $tmp3532 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp3532->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3532->refCount = 1;
            $tmp3532->value = id3528;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp3532), ((panda$core$Object*) result3530));
            return result3530;
        }
        }
        else {
        panda$core$Bit $tmp3533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1816_93504->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp3533.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3535 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1816_93504->$data + 16));
            value3534 = *$tmp3535;
            org$pandalanguage$pandac$ChoiceEntry** $tmp3537 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1816_93504->$data + 24));
            ce3536 = *$tmp3537;
            panda$core$Int64* $tmp3539 = ((panda$core$Int64*) ((char*) $match$1816_93504->$data + 32));
            field3538 = *$tmp3539;
            panda$core$Object* $tmp3541 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce3536->owner->fields, ((panda$core$Int64) { 1 }));
            data3540 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3541);
            panda$core$Bit $tmp3543 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) data3540)->name, &$s3542);
            PANDA_ASSERT($tmp3543.value);
            org$pandalanguage$pandac$IRNode* $tmp3545 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
            $tmp3545->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3545->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp3548 = (($fn3547) p_lvalue->$class->vtable[3])(p_lvalue);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp3545, ((panda$core$Int64) { 15 }), $tmp3548, data3540->type, value3534, data3540);
            fieldRef3544 = $tmp3545;
            panda$core$String* $tmp3550 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, fieldRef3544, p_out);
            base3549 = $tmp3550;
            panda$core$Int64 $tmp3552 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3536->owner);
            size3551 = $tmp3552;
            panda$core$Int64 $tmp3554 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3536, field3538);
            offset3553 = $tmp3554;
            panda$core$String* $tmp3556 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result3555 = $tmp3556;
            org$pandalanguage$pandac$Type* $tmp3558 = (($fn3557) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3559 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3558);
            panda$core$String* $tmp3560 = panda$core$String$convert$R$panda$core$String($tmp3559);
            panda$core$String* $tmp3562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3560, &$s3561);
            panda$core$String* $tmp3563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3562, result3555);
            panda$core$String* $tmp3565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3563, &$s3564);
            org$pandalanguage$pandac$Type* $tmp3567 = (($fn3566) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3568 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3567);
            panda$core$String* $tmp3569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3565, $tmp3568);
            panda$core$String* $tmp3571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3569, &$s3570);
            panda$core$String* $tmp3573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3572, base3549);
            panda$core$String* $tmp3575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3573, &$s3574);
            panda$core$Int64$wrapper* $tmp3576;
            $tmp3576 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp3576->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3576->refCount = 1;
            $tmp3576->value = offset3553;
            panda$core$String* $tmp3577 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3575, ((panda$core$Object*) $tmp3576));
            panda$core$String* $tmp3579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3577, &$s3578);
            panda$core$String* $tmp3580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3571, $tmp3579);
            (($fn3581) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3580);
            panda$core$String* $tmp3583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3582, result3555);
            panda$core$String* $tmp3585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3583, &$s3584);
            return $tmp3585;
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
    panda$core$String* $tmp3586 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$String* $tmp3587 = panda$core$String$convert$R$panda$core$String($tmp3586);
    panda$core$String* $tmp3589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3587, &$s3588);
    panda$core$String* $tmp3590 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$String* $tmp3591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3589, $tmp3590);
    panda$core$String* $tmp3593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3591, &$s3592);
    (($fn3594) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3593);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit) { p_value != NULL }).value) {
    {
        panda$core$String* $tmp3596 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
        panda$core$String* $tmp3597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3595, $tmp3596);
        panda$core$String* $tmp3599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3597, &$s3598);
        (($fn3600) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3599);
    }
    }
    else {
    {
        (($fn3602) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3601);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3606;
    panda$core$Int64 $tmp3603 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3604 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3603, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3604.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3605 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3605);
    }
    }
    panda$core$Int64 $tmp3607 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3606, ((panda$core$Int64) { 0 }), $tmp3607, ((panda$core$Bit) { false }));
    int64_t $tmp3609 = $tmp3606.min.value;
    panda$core$Int64 i3608 = { $tmp3609 };
    int64_t $tmp3611 = $tmp3606.max.value;
    bool $tmp3612 = $tmp3606.inclusive.value;
    if ($tmp3612) goto $l3619; else goto $l3620;
    $l3619:;
    if ($tmp3609 <= $tmp3611) goto $l3613; else goto $l3615;
    $l3620:;
    if ($tmp3609 < $tmp3611) goto $l3613; else goto $l3615;
    $l3613:;
    {
        panda$core$Object* $tmp3621 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3608);
        panda$core$Bit $tmp3625;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3621)->loopLabel != NULL }).value) goto $l3622; else goto $l3623;
        $l3622:;
        panda$core$Bit $tmp3626 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3621)->loopLabel, p_name);
        $tmp3625 = $tmp3626;
        goto $l3624;
        $l3623:;
        $tmp3625 = ((panda$core$Bit) { false });
        goto $l3624;
        $l3624:;
        if ($tmp3625.value) {
        {
            panda$core$Object* $tmp3627 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3608);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3627);
        }
        }
    }
    $l3616:;
    int64_t $tmp3629 = $tmp3611 - i3608.value;
    if ($tmp3612) goto $l3630; else goto $l3631;
    $l3630:;
    if ((uint64_t) $tmp3629 >= 1) goto $l3628; else goto $l3615;
    $l3631:;
    if ((uint64_t) $tmp3629 > 1) goto $l3628; else goto $l3615;
    $l3628:;
    i3608.value += 1;
    goto $l3613;
    $l3615:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3634;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3635 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3634 = $tmp3635;
    panda$core$String* $tmp3637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3636, desc3634->breakLabel);
    panda$core$String* $tmp3639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3637, &$s3638);
    (($fn3640) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3639);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc3634));
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3641;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3642 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3641 = $tmp3642;
    panda$core$String* $tmp3644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3643, desc3641->continueLabel);
    panda$core$String* $tmp3646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3644, &$s3645);
    (($fn3647) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3646);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc3641));
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_message, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3649 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3648, $tmp3649);
    panda$core$String* $tmp3652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3650, &$s3651);
    (($fn3653) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3652);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* w$Iter3661;
    org$pandalanguage$pandac$IRNode* w3673;
    org$pandalanguage$pandac$IRNode* $match$1890_133678;
    panda$collections$ImmutableArray* tests3680;
    panda$collections$ImmutableArray* statements3682;
    panda$collections$Iterator* test$Iter3684;
    org$pandalanguage$pandac$IRNode* test3696;
    panda$core$String* $tmp3655 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    panda$core$String* $tmp3656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3654, $tmp3655);
    panda$core$String* $tmp3658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3656, &$s3657);
    (($fn3659) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3658);
    panda$core$Int64 $tmp3660 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3660;
    {
        ITable* $tmp3662 = ((panda$collections$Iterable*) p_whens)->$class->itable;
        while ($tmp3662->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3662 = $tmp3662->next;
        }
        $fn3664 $tmp3663 = $tmp3662->methods[0];
        panda$collections$Iterator* $tmp3665 = $tmp3663(((panda$collections$Iterable*) p_whens));
        w$Iter3661 = $tmp3665;
        $l3666:;
        ITable* $tmp3668 = w$Iter3661->$class->itable;
        while ($tmp3668->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3668 = $tmp3668->next;
        }
        $fn3670 $tmp3669 = $tmp3668->methods[0];
        panda$core$Bit $tmp3671 = $tmp3669(w$Iter3661);
        panda$core$Bit $tmp3672 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3671);
        if (!$tmp3672.value) goto $l3667;
        {
            ITable* $tmp3674 = w$Iter3661->$class->itable;
            while ($tmp3674->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3674 = $tmp3674->next;
            }
            $fn3676 $tmp3675 = $tmp3674->methods[1];
            panda$core$Object* $tmp3677 = $tmp3675(w$Iter3661);
            w3673 = ((org$pandalanguage$pandac$IRNode*) $tmp3677);
            {
                $match$1890_133678 = w3673;
                panda$core$Bit $tmp3679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1890_133678->$rawValue, ((panda$core$Int64) { 43 }));
                if ($tmp3679.value) {
                {
                    panda$collections$ImmutableArray** $tmp3681 = ((panda$collections$ImmutableArray**) ((char*) $match$1890_133678->$data + 16));
                    tests3680 = *$tmp3681;
                    panda$collections$ImmutableArray** $tmp3683 = ((panda$collections$ImmutableArray**) ((char*) $match$1890_133678->$data + 24));
                    statements3682 = *$tmp3683;
                    {
                        ITable* $tmp3685 = ((panda$collections$Iterable*) tests3680)->$class->itable;
                        while ($tmp3685->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3685 = $tmp3685->next;
                        }
                        $fn3687 $tmp3686 = $tmp3685->methods[0];
                        panda$collections$Iterator* $tmp3688 = $tmp3686(((panda$collections$Iterable*) tests3680));
                        test$Iter3684 = $tmp3688;
                        $l3689:;
                        ITable* $tmp3691 = test$Iter3684->$class->itable;
                        while ($tmp3691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3691 = $tmp3691->next;
                        }
                        $fn3693 $tmp3692 = $tmp3691->methods[0];
                        panda$core$Bit $tmp3694 = $tmp3692(test$Iter3684);
                        panda$core$Bit $tmp3695 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3694);
                        if (!$tmp3695.value) goto $l3690;
                        {
                            ITable* $tmp3697 = test$Iter3684->$class->itable;
                            while ($tmp3697->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3697 = $tmp3697->next;
                            }
                            $fn3699 $tmp3698 = $tmp3697->methods[1];
                            panda$core$Object* $tmp3700 = $tmp3698(test$Iter3684);
                            test3696 = ((org$pandalanguage$pandac$IRNode*) $tmp3700);
                            panda$core$UInt64 $tmp3702 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, test3696);
                            panda$core$UInt64$wrapper* $tmp3703;
                            $tmp3703 = (panda$core$UInt64$wrapper*) pandaZAlloc(24);
                            $tmp3703->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
                            $tmp3703->refCount = 1;
                            $tmp3703->value = $tmp3702;
                            panda$core$String* $tmp3704 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3701, ((panda$core$Object*) $tmp3703));
                            panda$core$String* $tmp3706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3704, &$s3705);
                            (($fn3707) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3706);
                        }
                        goto $l3689;
                        $l3690:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3688));
                    }
                    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3682, p_out);
                    (($fn3709) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3708);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l3666;
        $l3667:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3665));
    }
    if (((panda$core$Bit) { p_other != NULL }).value) {
    {
        (($fn3711) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3710);
        org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_other, p_out);
    }
    }
    panda$core$Int64 $tmp3712 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3712;
    (($fn3714) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3713);
}
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_clear, panda$io$IndentedOutputStream* p_out) {
}
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { true }), p_out);
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1926_93715;
    org$pandalanguage$pandac$IRNode* left3717;
    org$pandalanguage$pandac$parser$Token$Kind op3719;
    org$pandalanguage$pandac$IRNode* right3721;
    panda$collections$ImmutableArray* statements3724;
    org$pandalanguage$pandac$Type* target3727;
    org$pandalanguage$pandac$MethodRef* mref3729;
    panda$collections$ImmutableArray* args3731;
    org$pandalanguage$pandac$IRNode* base3734;
    org$pandalanguage$pandac$IRNode* stmt3736;
    org$pandalanguage$pandac$IRNode* test3740;
    panda$collections$ImmutableArray* ifTrue3742;
    org$pandalanguage$pandac$IRNode* ifFalse3744;
    panda$core$String* label3747;
    org$pandalanguage$pandac$IRNode* target3749;
    org$pandalanguage$pandac$IRNode* list3751;
    panda$collections$ImmutableArray* statements3753;
    panda$core$String* label3756;
    org$pandalanguage$pandac$IRNode* test3758;
    panda$collections$ImmutableArray* statements3760;
    panda$core$String* label3763;
    panda$collections$ImmutableArray* statements3765;
    org$pandalanguage$pandac$IRNode* test3767;
    panda$core$String* label3770;
    panda$collections$ImmutableArray* statements3772;
    org$pandalanguage$pandac$Variable$Kind kind3775;
    panda$collections$ImmutableArray* decls3777;
    org$pandalanguage$pandac$IRNode* value3780;
    panda$core$String* label3783;
    panda$core$String* label3786;
    org$pandalanguage$pandac$IRNode* test3789;
    org$pandalanguage$pandac$IRNode* msg3791;
    org$pandalanguage$pandac$IRNode* value3794;
    panda$collections$ImmutableArray* whens3796;
    panda$collections$ImmutableArray* other3798;
    {
        $match$1926_93715 = p_stmt;
        panda$core$Bit $tmp3716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp3716.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3718 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 24));
            left3717 = *$tmp3718;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3720 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1926_93715->$data + 32));
            op3719 = *$tmp3720;
            org$pandalanguage$pandac$IRNode** $tmp3722 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 40));
            right3721 = *$tmp3722;
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, left3717, right3721, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp3723.value) {
        {
            panda$collections$ImmutableArray** $tmp3725 = ((panda$collections$ImmutableArray**) ((char*) $match$1926_93715->$data + 16));
            statements3724 = *$tmp3725;
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3724, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp3726.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3728 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1926_93715->$data + 16));
            target3727 = *$tmp3728;
            org$pandalanguage$pandac$MethodRef** $tmp3730 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1926_93715->$data + 24));
            mref3729 = *$tmp3730;
            panda$collections$ImmutableArray** $tmp3732 = ((panda$collections$ImmutableArray**) ((char*) $match$1926_93715->$data + 32));
            args3731 = *$tmp3732;
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, target3727, mref3729, args3731, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp3733.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3735 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 0));
            base3734 = *$tmp3735;
            org$pandalanguage$pandac$IRNode** $tmp3737 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 8));
            stmt3736 = *$tmp3737;
            panda$core$String* $tmp3738 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3734, stmt3736, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp3739.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3741 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 16));
            test3740 = *$tmp3741;
            panda$collections$ImmutableArray** $tmp3743 = ((panda$collections$ImmutableArray**) ((char*) $match$1926_93715->$data + 24));
            ifTrue3742 = *$tmp3743;
            org$pandalanguage$pandac$IRNode** $tmp3745 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 32));
            ifFalse3744 = *$tmp3745;
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3740, ifTrue3742, ifFalse3744, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp3746.value) {
        {
            panda$core$String** $tmp3748 = ((panda$core$String**) ((char*) $match$1926_93715->$data + 16));
            label3747 = *$tmp3748;
            org$pandalanguage$pandac$IRNode** $tmp3750 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 24));
            target3749 = *$tmp3750;
            org$pandalanguage$pandac$IRNode** $tmp3752 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 32));
            list3751 = *$tmp3752;
            panda$collections$ImmutableArray** $tmp3754 = ((panda$collections$ImmutableArray**) ((char*) $match$1926_93715->$data + 40));
            statements3753 = *$tmp3754;
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3747, target3749, list3751, statements3753, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp3755.value) {
        {
            panda$core$String** $tmp3757 = ((panda$core$String**) ((char*) $match$1926_93715->$data + 16));
            label3756 = *$tmp3757;
            org$pandalanguage$pandac$IRNode** $tmp3759 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 24));
            test3758 = *$tmp3759;
            panda$collections$ImmutableArray** $tmp3761 = ((panda$collections$ImmutableArray**) ((char*) $match$1926_93715->$data + 32));
            statements3760 = *$tmp3761;
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3756, test3758, statements3760, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp3762.value) {
        {
            panda$core$String** $tmp3764 = ((panda$core$String**) ((char*) $match$1926_93715->$data + 16));
            label3763 = *$tmp3764;
            panda$collections$ImmutableArray** $tmp3766 = ((panda$collections$ImmutableArray**) ((char*) $match$1926_93715->$data + 24));
            statements3765 = *$tmp3766;
            org$pandalanguage$pandac$IRNode** $tmp3768 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 32));
            test3767 = *$tmp3768;
            org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, label3763, statements3765, test3767, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp3769.value) {
        {
            panda$core$String** $tmp3771 = ((panda$core$String**) ((char*) $match$1926_93715->$data + 16));
            label3770 = *$tmp3771;
            panda$collections$ImmutableArray** $tmp3773 = ((panda$collections$ImmutableArray**) ((char*) $match$1926_93715->$data + 24));
            statements3772 = *$tmp3773;
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3770, statements3772, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp3774.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp3776 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$1926_93715->$data + 16));
            kind3775 = *$tmp3776;
            panda$collections$ImmutableArray** $tmp3778 = ((panda$collections$ImmutableArray**) ((char*) $match$1926_93715->$data + 24));
            decls3777 = *$tmp3778;
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, kind3775, decls3777, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp3779.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3781 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 16));
            value3780 = *$tmp3781;
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, value3780, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp3782.value) {
        {
            panda$core$String** $tmp3784 = ((panda$core$String**) ((char*) $match$1926_93715->$data + 16));
            label3783 = *$tmp3784;
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3783, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3785.value) {
        {
            panda$core$String** $tmp3787 = ((panda$core$String**) ((char*) $match$1926_93715->$data + 16));
            label3786 = *$tmp3787;
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3786, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp3788.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3790 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 16));
            test3789 = *$tmp3790;
            org$pandalanguage$pandac$IRNode** $tmp3792 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 24));
            msg3791 = *$tmp3792;
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3789, msg3791, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1926_93715->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp3793.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3795 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1926_93715->$data + 16));
            value3794 = *$tmp3795;
            panda$collections$ImmutableArray** $tmp3797 = ((panda$collections$ImmutableArray**) ((char*) $match$1926_93715->$data + 24));
            whens3796 = *$tmp3797;
            panda$collections$ImmutableArray** $tmp3799 = ((panda$collections$ImmutableArray**) ((char*) $match$1926_93715->$data + 32));
            other3798 = *$tmp3799;
            org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(self, value3794, whens3796, other3798, p_out);
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
    panda$core$String* result3800;
    panda$core$String* tmp633810;
    panda$core$String* tmp643813;
    org$pandalanguage$pandac$Type* $tmp3801 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3802 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3801);
    result3800 = $tmp3802;
    panda$core$Bit $tmp3804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp3803 = $tmp3804.value;
    if (!$tmp3803) goto $l3805;
    panda$core$Bit $tmp3807 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3800, &$s3806);
    panda$core$Bit $tmp3808 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3807);
    $tmp3803 = $tmp3808.value;
    $l3805:;
    panda$core$Bit $tmp3809 = { $tmp3803 };
    if ($tmp3809.value) {
    {
        {
            panda$core$String* $tmp3812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3800, &$s3811);
            tmp633810 = $tmp3812;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3800));
            return tmp633810;
        }
    }
    }
    {
        tmp643813 = result3800;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3800));
        return tmp643813;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    panda$core$String* separator3825;
    panda$collections$Iterator* p$Iter3835;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3847;
    panda$io$MemoryOutputStream* bodyBuffer3868;
    panda$io$IndentedOutputStream* indentedBody3871;
    panda$collections$Iterator* f$Iter3875;
    org$pandalanguage$pandac$FieldDecl* f3888;
    panda$collections$Iterator* s$Iter3906;
    org$pandalanguage$pandac$IRNode* s3918;
    panda$core$Object* $tmp3814 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3814)) == ((panda$core$Object*) p_m->owner) }).value);
    {
        self->currentMethod = p_m;
    }
    {
        self->currentBlock = &$s3815;
    }
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3816 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3817 = panda$core$String$convert$R$panda$core$String($tmp3816);
    panda$core$String* $tmp3819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3817, &$s3818);
    panda$core$String* $tmp3820 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3819, $tmp3820);
    panda$core$String* $tmp3823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3821, &$s3822);
    (($fn3824) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3823);
    separator3825 = &$s3826;
    panda$core$Bit $tmp3827 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3828 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3827);
    if ($tmp3828.value) {
    {
        panda$core$String* $tmp3829 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3830 = panda$core$String$convert$R$panda$core$String($tmp3829);
        panda$core$String* $tmp3832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3830, &$s3831);
        (($fn3833) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3832);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3825));
            separator3825 = &$s3834;
        }
    }
    }
    {
        ITable* $tmp3836 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3836->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3836 = $tmp3836->next;
        }
        $fn3838 $tmp3837 = $tmp3836->methods[0];
        panda$collections$Iterator* $tmp3839 = $tmp3837(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3835 = $tmp3839;
        $l3840:;
        ITable* $tmp3842 = p$Iter3835->$class->itable;
        while ($tmp3842->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3842 = $tmp3842->next;
        }
        $fn3844 $tmp3843 = $tmp3842->methods[0];
        panda$core$Bit $tmp3845 = $tmp3843(p$Iter3835);
        panda$core$Bit $tmp3846 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3845);
        if (!$tmp3846.value) goto $l3841;
        {
            ITable* $tmp3848 = p$Iter3835->$class->itable;
            while ($tmp3848->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3848 = $tmp3848->next;
            }
            $fn3850 $tmp3849 = $tmp3848->methods[1];
            panda$core$Object* $tmp3851 = $tmp3849(p$Iter3835);
            p3847 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3851);
            panda$core$String* $tmp3852 = panda$core$String$convert$R$panda$core$String(separator3825);
            panda$core$String* $tmp3854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3852, &$s3853);
            panda$core$String* $tmp3855 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3847->type);
            panda$core$String* $tmp3856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3854, $tmp3855);
            panda$core$String* $tmp3858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3856, &$s3857);
            panda$core$String* $tmp3859 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3847->name);
            panda$core$String* $tmp3860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3858, $tmp3859);
            panda$core$String* $tmp3862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3860, &$s3861);
            (($fn3863) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3862);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3825));
                separator3825 = &$s3864;
            }
        }
        goto $l3840;
        $l3841:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3839));
    }
    (($fn3866) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3865);
    panda$core$Int64 $tmp3867 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3867;
    panda$io$MemoryOutputStream* $tmp3869 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp3869->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3869->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3869);
    bodyBuffer3868 = $tmp3869;
    panda$io$IndentedOutputStream* $tmp3872 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp3872->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3872->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3872, ((panda$io$OutputStream*) bodyBuffer3868));
    indentedBody3871 = $tmp3872;
    panda$core$Bit $tmp3874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp3874.value) {
    {
        {
            panda$collections$ListView* $tmp3876 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, p_m->owner);
            ITable* $tmp3877 = ((panda$collections$Iterable*) $tmp3876)->$class->itable;
            while ($tmp3877->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3877 = $tmp3877->next;
            }
            $fn3879 $tmp3878 = $tmp3877->methods[0];
            panda$collections$Iterator* $tmp3880 = $tmp3878(((panda$collections$Iterable*) $tmp3876));
            f$Iter3875 = $tmp3880;
            $l3881:;
            ITable* $tmp3883 = f$Iter3875->$class->itable;
            while ($tmp3883->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3883 = $tmp3883->next;
            }
            $fn3885 $tmp3884 = $tmp3883->methods[0];
            panda$core$Bit $tmp3886 = $tmp3884(f$Iter3875);
            panda$core$Bit $tmp3887 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3886);
            if (!$tmp3887.value) goto $l3882;
            {
                ITable* $tmp3889 = f$Iter3875->$class->itable;
                while ($tmp3889->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3889 = $tmp3889->next;
                }
                $fn3891 $tmp3890 = $tmp3889->methods[1];
                panda$core$Object* $tmp3892 = $tmp3890(f$Iter3875);
                f3888 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3892);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f3888);
                panda$core$Bit $tmp3894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f3888->fieldKind.$rawValue, ((panda$core$Int64) { 0 }));
                bool $tmp3893 = $tmp3894.value;
                if (!$tmp3893) goto $l3895;
                panda$core$Bit $tmp3896 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->compiler, f3888->type);
                $tmp3893 = $tmp3896.value;
                $l3895:;
                panda$core$Bit $tmp3897 = { $tmp3893 };
                if ($tmp3897.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3898 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
                    $tmp3898->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3898->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode* $tmp3900 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
                    $tmp3900->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3900->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3902 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3900, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp3902);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp3898, ((panda$core$Int64) { 15 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f3888->type, $tmp3900, f3888);
                    org$pandalanguage$pandac$IRNode* $tmp3903 = (org$pandalanguage$pandac$IRNode*) pandaZAlloc(72);
                    $tmp3903->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3903->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3905 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(f3888->type);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3903, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp3905);
                    org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, $tmp3898, $tmp3903, indentedBody3871);
                }
                }
            }
            goto $l3881;
            $l3882:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3880));
        }
    }
    }
    {
        ITable* $tmp3907 = ((panda$collections$Iterable*) p_body)->$class->itable;
        while ($tmp3907->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3907 = $tmp3907->next;
        }
        $fn3909 $tmp3908 = $tmp3907->methods[0];
        panda$collections$Iterator* $tmp3910 = $tmp3908(((panda$collections$Iterable*) p_body));
        s$Iter3906 = $tmp3910;
        $l3911:;
        ITable* $tmp3913 = s$Iter3906->$class->itable;
        while ($tmp3913->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3913 = $tmp3913->next;
        }
        $fn3915 $tmp3914 = $tmp3913->methods[0];
        panda$core$Bit $tmp3916 = $tmp3914(s$Iter3906);
        panda$core$Bit $tmp3917 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3916);
        if (!$tmp3917.value) goto $l3912;
        {
            ITable* $tmp3919 = s$Iter3906->$class->itable;
            while ($tmp3919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3919 = $tmp3919->next;
            }
            $fn3921 $tmp3920 = $tmp3919->methods[1];
            panda$core$Object* $tmp3922 = $tmp3920(s$Iter3906);
            s3918 = ((org$pandalanguage$pandac$IRNode*) $tmp3922);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3918, indentedBody3871);
        }
        goto $l3911;
        $l3912:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3910));
    }
    panda$core$String* $tmp3923 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3924) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3923);
    panda$core$String* $tmp3925 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3868);
    (($fn3926) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3925);
    panda$core$Int64 $tmp3927 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3927;
    (($fn3929) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3928);
    {
        self->currentMethod = NULL;
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indentedBody3871));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3825));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bodyBuffer3868));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3930;
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
    panda$io$File* $tmp3932 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3931);
    path3930 = $tmp3932;
    panda$io$File* $tmp3933 = panda$io$File$parent$R$panda$io$File$Q(path3930);
    panda$io$File$createDirectories($tmp3933);
    {
        panda$io$IndentedOutputStream* $tmp3934 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
        $tmp3934->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
        $tmp3934->refCount.value = 1;
        panda$io$OutputStream* $tmp3936 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3930);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3934, $tmp3936);
        self->out = $tmp3934;
    }
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp3937 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3938 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3938.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp3939 = org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path3930));
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    {
        self->currentClass = NULL;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp3940 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3941) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3940);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3942 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3943) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3942);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3944 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3945) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3944);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3946 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3947) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3946);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3948 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3949) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3948);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3950) self->out->out->$class->vtable[1])(self->out->out);
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

